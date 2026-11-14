#!/bin/bash
# usage: build.sh [make targets]   env: RECONF=1 regenerate config, MIXED=0 disable mixed build
S=/home/angel/sapphire
cd $S/ws/kernel_platform/msm-kernel
export PATH=$S/tc/dwarves/inst/bin:$S/tc/make/inst/bin:$S/tc/clang-r450784e/bin:$PATH
export LD_LIBRARY_PATH=$S/tc/dwarves/inst/lib:$LD_LIBRARY_PATH
M="make -j16 O=out ARCH=arm64 LLVM=1 LLVM_IAS=1 CROSS_COMPILE=aarch64-linux-gnu- KCFLAGS=-D__ANDROID_COMMON_KERNEL__"
if [ ! -f out/.config ] || [ "$RECONF" = 1 ]; then
  mkdir -p out; cp $S/unpacked/stock_defconfig out/.config      # real GKI config from stock boot.img
  KCONFIG_CONFIG=out/.config scripts/kconfig/merge_config.sh -m -O out out/.config \
    arch/arm64/configs/vendor/bengal_GKI.config arch/arm64/configs/vendor/sapphire_GKI.config > out/merge.log 2>&1
  # GKI built-in options win over vendor fragments (layout must match the GKI Image)
  python3 - <<'PY'
import re
S='/home/angel/sapphire'
def load(p):
    d={}
    for l in open(p):
        m=re.match(r'^(CONFIG_\w+)=(.*)$',l.strip())
        if m: d[m.group(1)]=m.group(2); continue
        m=re.match(r'^# (CONFIG_\w+) is not set',l.strip())
        if m: d[m.group(1)]=None
    return d
g=load(S+'/unpacked/stock_defconfig'); o=load('out/.config')
for k,v in g.items():
    if v not in (None,'m') and o.get(k)!=v: o[k]=v; print('restore',k,v)
with open('out/.config','w') as f:
    for k,v in o.items(): f.write(f'# {k} is not set\n' if v is None else f'{k}={v}\n')
PY
  scripts/config --file out/.config -d LTO_CLANG_FULL -e LTO_CLANG_THIN -d TRIM_UNUSED_KSYMS -u UNUSED_KSYMS_WHITELIST
  $M olddefconfig >/dev/null
fi
MX="KBUILD_MIXED_TREE=$S/ws/kernel_platform/gki-stock"; [ "$MIXED" = 0 ] && MX=""
start=$(date +%s)
$M ${@:-modules} $MX > out/build.log 2>&1; rc=$?
echo "rc=$rc time=$(( $(date +%s)-start ))s"
grep -E "error:|Error [0-9]|undefined" out/build.log | head -30
find out -name "*.ko" | wc -l
echo BUILD_DONE
