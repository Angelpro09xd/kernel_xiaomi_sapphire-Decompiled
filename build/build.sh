#!/bin/bash
# Build the tested sapphire vendor modules.
#
# Usage: build/build.sh [step ...]     steps: kernel vendor xiaomi display collect dt (default: all); GKI kernel: build/build_gki.sh
#
# Requirements (see README.md):
#   CLANG_DIR   AOSP clang-r450784e (prebuilts/clang/host/linux-x86/clang-r450784e)
#   pahole >= 1.25 in PATH (BTF must be on: it changes the layout of struct module)
#   GNU make 4.3, python3, aarch64 binutils not required (LLVM=1)
set -e
ROOT=$(cd "$(dirname "$0")/.." && pwd)
K=$ROOT/kernel_platform/msm-kernel
G=$ROOT/kernel_platform/gki-stock
V=$ROOT/vendor/qcom/opensource
OUT=${OUT:-$ROOT/out}
: "${CLANG_DIR:?set CLANG_DIR to clang-r450784e}"
export PATH=$CLANG_DIR/bin:$PATH
JOBS=${JOBS:-$(nproc)}
MK="make -j$JOBS ARCH=arm64 LLVM=1 LLVM_IAS=1 CROSS_COMPILE=aarch64-linux-gnu- KCFLAGS=-D__ANDROID_COMMON_KERNEL__"

kernel() {
	# Config = the real GKI config of the stock boot.img + bengal/sapphire
	# vendor fragments, with every GKI built-in option restored (the module
	# ABI must match the GKI Image on the device: 0/8573 CRC mismatches).
	mkdir -p $K/out
	cp $ROOT/build/stock_defconfig $K/out/.config
	(cd $K && KCONFIG_CONFIG=out/.config scripts/kconfig/merge_config.sh -m -O out out/.config \
		arch/arm64/configs/vendor/bengal_GKI.config arch/arm64/configs/vendor/sapphire_GKI.config >/dev/null)
	python3 - "$ROOT/build/stock_defconfig" "$K/out/.config" <<'PY'
import re, sys
def load(p):
    d = {}
    for l in open(p):
        l = l.strip()
        m = re.match(r'^(CONFIG_\w+)=(.*)$', l)
        if m: d[m.group(1)] = m.group(2); continue
        m = re.match(r'^# (CONFIG_\w+) is not set', l)
        if m: d[m.group(1)] = None
    return d
g, o = load(sys.argv[1]), load(sys.argv[2])
for k, v in g.items():
    if v not in (None, 'm') and o.get(k) != v:
        o[k] = v
with open(sys.argv[2], 'w') as f:
    for k, v in o.items():
        f.write(f'# {k} is not set\n' if v is None else f'{k}={v}\n')
PY
	(cd $K && scripts/config --file out/.config -d LTO_CLANG_FULL -e LTO_CLANG_THIN -d TRIM_UNUSED_KSYMS -u UNUSED_KSYMS_WHITELIST)
	$MK -C $K O=out olddefconfig >/dev/null
	echo ">> msm-kernel: vmlinux + modules"
	$MK -C $K O=out vmlinux modules
	# BTF base for the vendor modules (the stock vmlinux carries no BTF)
	cp $K/out/vmlinux $G/vmlinux
}

MIX="KBUILD_MIXED_TREE=$G"
VMK="$MK -C $K O=out $MIX"
sym() { for d in "$@"; do printf "%s " $V/$d/Module.symvers; done; }
b() { local n=$1 d=$2; shift 2; echo ">> $n"; $VMK M=$V/$d modules "$@"; }

vendor() {
	b mmrm      mmrm-driver MMRM_ROOT=$V/mmrm-driver BOARD_PLATFORM=bengal
	b video     video-driver VIDEO_ROOT=$V/video-driver MODNAME=msm_video BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$(sym mmrm-driver)"
	b securemsm securemsm-kernel SSG_MODULE_ROOT=$V/securemsm-kernel BOARD_PLATFORM=bengal CONFIG_DSQB=y
	b ipa       dataipa/drivers/platform/msm 'CONFIG_LOCALVERSION="-perf"' DATAIPA_ROOT=$V/dataipa BOARD_PLATFORM=bengal
	b rmnet     datarmnet/core RMNET_CORE_ROOT=$V/datarmnet/core BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$V/dataipa/drivers/platform/msm/Module.symvers"
	b rmnetwlan datarmnet-ext/wlan KCFLAGS="-Wno-error=misleading-indentation -I$V/datarmnet/core" BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$V/datarmnet/core/Module.symvers"
	# stock-closed.symvers: CRCs of the closed stock qpnp-smb5 exports used by mbhc
	b audio     audio-kernel AUDIO_ROOT=$V/audio-kernel MODNAME=audio_dlkm BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS=$ROOT/build/stock-closed.symvers
	b camera    camera-kernel CAMERA_KERNEL_ROOT=$V/camera-kernel KERNEL_ROOT=$K MODNAME=camera BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$(sym mmrm-driver)"
	b wlanplat  wlan/platform WLAN_PLATFORM_ROOT=$V/wlan/platform CONFIG_CNSS_OUT_OF_TREE=y CONFIG_ICNSS2=m CONFIG_ICNSS2_QMI=y CONFIG_CNSS_GENL=m CONFIG_WCNSS_MEM_PRE_ALLOC=m CONFIG_CNSS_UTILS=m CONFIG_CNSS_QMI_SVC=m KBUILD_EXTRA_SYMBOLS="$(sym securemsm-kernel)"
	b kgsl      graphics-kernel KERNEL_SRC=$K KGSL_PATH=$V/graphics-kernel MODNAME=msm_kgsl BOARD_PLATFORM=bengal
	# Android build options of the stock driver: /dev/wlan state control + cld80211 (CNSS_GENL)
	b qcacld    wlan/qcacld-3.0 KCFLAGS=-DCFG80211_SINGLE_NETDEV_MULTI_LINK_SUPPORT CONFIG_CNSS_GENL=m WLAN_CTRL_NAME=wlan WLAN_ROOT=$V/wlan/qcacld-3.0 WLAN_COMMON_ROOT=cmn WLAN_COMMON_INC=$V/wlan/qca-wifi-host-cmn WLAN_FW_API=$V/wlan/fw-api WLAN_PROFILE=adrastea MODNAME=wlan DEVNAME=wlan CONFIG_QCA_CLD_WLAN=m CONFIG_ICNSS2=m CONFIG_CNSS_OUT_OF_TREE=y WLAN_PLATFORM_INC=$V/wlan/platform/inc KBUILD_EXTRA_SYMBOLS="$(sym wlan/platform datarmnet-ext/wlan)"
	b bt        bt-kernel BT_ROOT=$V/bt-kernel BT_KERNEL_ROOT=$V/bt-kernel CONFIG_MSM_BT_POWER=m CONFIG_BTFM_SLIM=m CONFIG_I2C_RTC6226_QCA=m KBUILD_EXTRA_SYMBOLS="$(sym wlan/platform)"
}

display() {
	# msm_drm with the Xiaomi mi_disp layer; needs mmrm and our miev (vendor/xiaomi/opensource/miev)
	b display display-drivers CONFIG_DRM_MSM=m DISPLAY_ROOT=$V/display-drivers BOARD_PLATFORM=bengal \
		KBUILD_EXTRA_SYMBOLS="$(sym mmrm-driver) $ROOT/vendor/xiaomi/opensource/miev/Module.symvers"
}

xiaomi() {
	# Xiaomi closed modules rebuilt from source (vendor/xiaomi/opensource)
	X=$ROOT/vendor/xiaomi/opensource
	xb() { local d=$1; shift; echo ">> xiaomi/$d"; $VMK M=$X/$d modules "$@"; }
	for d in bootinfo swinfo perf_helper mi_wmark binder_prio millet st21nfc lct_tp; do xb $d; done
	xb miev
	xb xiaomi_touch KBUILD_EXTRA_SYMBOLS=$X/miev/Module.symvers
	xb mi_memory          # Kbuild adds ufs_qcom_xiaomi.symvers (stock Xiaomi ufs_qcom exports)
	xb nxp-nci KBUILD_EXTRA_SYMBOLS=$V/securemsm-kernel/Module.symvers
	for d in battery_auth sc8541 bq25960 xiaomi_fp; do xb $d; done
	for d in cp_qc30 pd_policy_manager; do xb $d; done
	# xm_smart_chg: stock Xiaomi qpnp-smb5 exports (stock CRCs) + our miev
	xb xm_smart_chg "KBUILD_EXTRA_SYMBOLS=$X/xm_smart_chg/qpnp-smb5-stock.symvers $X/miev/Module.symvers"
	# focaltech: our lct_tp/xiaomi_touch + the stock Xiaomi qpnp-smb5 export it uses
	xb focaltech "KBUILD_EXTRA_SYMBOLS=$X/lct_tp/Module.symvers $X/xiaomi_touch/Module.symvers $X/focaltech/qpnp-smb5-stock.symvers"
}

dt() {
	# sapphire device tree from source: out/dtb.img (vendor_boot dtb, 6 DTBs) + out/dtbo.img (47 entries)
	# needs the CLO dtc fork tools (QDTC=<dir> or PATH) and AOSP mkdtboimg.py
	KERNEL_DIR=$K bash $ROOT/devicetree/build.sh
	cp $ROOT/devicetree/out/dtb.img $ROOT/devicetree/out/dtbo.img $OUT/ 2>/dev/null || { mkdir -p $OUT; cp $ROOT/devicetree/out/dtb.img $ROOT/devicetree/out/dtbo.img $OUT/; }
}

collect() {
	# copy only the device-tested modules (build/TESTED_MODULES.txt, paths relative to the tree root), stripped like stock
	mkdir -p $OUT
	local n=0
	while read -r m path; do
		case $m in ''|\#*) continue ;; esac
		llvm-strip --strip-debug -o $OUT/$m.ko $ROOT/$path
		n=$((n + 1))
	done < $ROOT/build/TESTED_MODULES.txt
	echo ">> $n tested modules in $OUT"
}

for s in ${@:-kernel vendor xiaomi display collect dt}; do $s; done
