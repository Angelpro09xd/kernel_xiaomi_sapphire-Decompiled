#!/bin/bash
# usage: vbuild.sh [repo ...]   builds vendor external modules against src/work/out
export LD_LIBRARY_PATH=/home/angel/sapphire/tc/dwarves/inst/lib
export PATH=/home/angel/sapphire/tc/dwarves/inst/bin:/home/angel/sapphire/tc/make/inst/bin:/home/angel/sapphire/tc/clang-r450784e/bin:$PATH
K=/home/angel/sapphire/ws/kernel_platform/msm-kernel; KO=$K/out; V=/home/angel/sapphire/ws/vendor/qcom/opensource
LOG=/home/angel/sapphire/vlogs; mkdir -p $LOG
MK="make -j16 -C $K O=$KO ARCH=arm64 LLVM=1 LLVM_IAS=1 CROSS_COMPILE=aarch64-linux-gnu- KBUILD_MIXED_TREE=/home/angel/sapphire/ws/kernel_platform/gki-stock KCFLAGS=-D__ANDROID_COMMON_KERNEL__"
sym() { for d in "$@"; do printf "%s " $V/$d/Module.symvers; done; }
b() { # name dir extra-opts...
  local n=$1 d=$2; shift 2
  $MK M=$V/$d modules "$@" > $LOG/$n.log 2>&1; local rc=$?
  printf "%-14s rc=%d ko=%s\n" $n $rc "$(find $V/$d -name '*.ko' | wc -l)"
  [ $rc != 0 ] && grep -E "error|Error" $LOG/$n.log | head -5
}
run() { case $1 in
  mmrm)      b mmrm mmrm-driver MMRM_ROOT=$V/mmrm-driver BOARD_PLATFORM=bengal ;;
  video)     b video video-driver VIDEO_ROOT=$V/video-driver MODNAME=msm_video BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$(sym mmrm-driver)" ;;
  kgsl)      b kgsl graphics-kernel KERNEL_SRC=$K KGSL_PATH=$V/graphics-kernel MODNAME=msm_kgsl BOARD_PLATFORM=bengal ;;
  securemsm) b securemsm securemsm-kernel SSG_MODULE_ROOT=$V/securemsm-kernel BOARD_PLATFORM=bengal CONFIG_DSQB=y ;;
  mmdrv)     b mmdrv mm-drivers MSM_EXT_DISPLAY_ROOT=$V/mm-drivers/msm_ext_display BOARD_PLATFORM=bengal ;;
  display)   b display display-drivers CONFIG_DRM_MSM=m DISPLAY_ROOT=$V/display-drivers BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$(sym mmrm-driver)" ;;
  touch)     b touch touch-drivers TOUCH_ROOT=$V/touch-drivers MODNAME=touch_dlkm BOARD_PLATFORM=bengal ;;
  bt)        b bt bt-kernel BT_ROOT=$V/bt-kernel BT_KERNEL_ROOT=$V/bt-kernel CONFIG_MSM_BT_POWER=m CONFIG_BTFM_SLIM=m CONFIG_I2C_RTC6226_QCA=m KBUILD_EXTRA_SYMBOLS="$(sym wlan/platform)" ;;
  ipa)       b ipa dataipa/drivers/platform/msm 'CONFIG_LOCALVERSION="-perf"' DATAIPA_ROOT=$V/dataipa BOARD_PLATFORM=bengal ;;
  rmnet)     b rmnet datarmnet/core RMNET_CORE_ROOT=$V/datarmnet/core BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$V/dataipa/drivers/platform/msm/Module.symvers" ;;
  rmnetwlan) b rmnetwlan datarmnet-ext/wlan KCFLAGS="-Wno-error=misleading-indentation -I$V/datarmnet/core" BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$V/datarmnet/core/Module.symvers" ;;
  camera)    b camera camera-kernel CAMERA_KERNEL_ROOT=$V/camera-kernel KERNEL_ROOT=$K MODNAME=camera BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS="$(sym mmrm-driver)" ;;
  audio)     b audio audio-kernel AUDIO_ROOT=$V/audio-kernel MODNAME=audio_dlkm BOARD_PLATFORM=bengal KBUILD_EXTRA_SYMBOLS=/home/angel/sapphire/stock-closed.symvers ;;
  wlanplat)  b wlanplat wlan/platform WLAN_PLATFORM_ROOT=$V/wlan/platform CONFIG_CNSS_OUT_OF_TREE=y CONFIG_ICNSS2=m CONFIG_ICNSS2_QMI=y CONFIG_CNSS_GENL=m CONFIG_WCNSS_MEM_PRE_ALLOC=m CONFIG_CNSS_UTILS=m CONFIG_CNSS_QMI_SVC=m KBUILD_EXTRA_SYMBOLS="$(sym securemsm-kernel)" ;;
  qcacld)    b qcacld wlan/qcacld-3.0 KCFLAGS=-DCFG80211_SINGLE_NETDEV_MULTI_LINK_SUPPORT WLAN_ROOT=$V/wlan/qcacld-3.0 WLAN_COMMON_ROOT=cmn WLAN_COMMON_INC=$V/wlan/qca-wifi-host-cmn WLAN_FW_API=$V/wlan/fw-api WLAN_PROFILE=adrastea MODNAME=wlan DEVNAME=wlan CONFIG_QCA_CLD_WLAN=m CONFIG_ICNSS2=m CONFIG_CNSS_OUT_OF_TREE=y WLAN_PLATFORM_INC=$V/wlan/platform/inc KBUILD_EXTRA_SYMBOLS="$(sym wlan/platform datarmnet-ext/wlan)" ;;
esac; }
ALL="mmrm video kgsl securemsm display touch ipa rmnet rmnetwlan camera audio wlanplat bt qcacld"
for r in ${@:-$ALL}; do run $r; done
echo VBUILD_DONE
