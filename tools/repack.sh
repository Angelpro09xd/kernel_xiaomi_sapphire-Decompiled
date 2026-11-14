#!/bin/bash
# repack.sh <plan A|B>  -> /home/angel/sapphire/repack/out_<plan>/{vendor_dlkm,vendor_boot}.img   (run as root)
set -e
PLAN=${1:-A}
S=/home/angel/sapphire; W=$S/repack; T=$S/tools
VB=${VB:-$S/lunaris/out/vendor_boot.img}; VD=${VD:-$S/lunaris/out/vendor_dlkm.img}
ST=$S/lunaris/stage_$PLAN; O=$W/out_$PLAN; rm -rf $O $W/dlkm $W/rd $W/vb; mkdir -p $O
export PATH=$S/tc/clang-r450784e/bin:$PATH
# System.map of the RUNNING Lunaris kernel for depmod validation
[ -f $S/lunaris/System.map ] || llvm-nm -n $S/lunaris/vmlinux.elf | grep -v ' [aUw] ' > $S/lunaris/System.map

regen_dep() { # dir prefix label
  local d=$1 pfx=$2 lbl=$3 t=$(mktemp -d)
  mkdir -p $t/lib/modules/0.0; cp $d/*.ko $t/lib/modules/0.0/
  depmod -b $t 0.0 > /dev/null 2>&1 || true
  sed -E "s#(^|[ ])([^ :]+\.ko)#\1$pfx\2#g" $t/lib/modules/0.0/modules.dep > $d/modules.dep
  cp $t/lib/modules/0.0/modules.alias $d/modules.alias
  rm -rf $t
}
replace() { # target-dir stage-dir
  local n=0; for k in $1/*.ko; do f=$(basename $k); [ -f $2/$f ] && ! cmp -s $2/$f $k && { cat $2/$f > $k; n=$((n+1)); }; done; echo "replaced $n in $1"
}

# ---------- vendor_dlkm ----------
fsck.erofs --extract=$W/dlkm --xattrs $VD >/dev/null
replace $W/dlkm/lib/modules $ST/vendor_dlkm
regen_dep $W/dlkm/lib/modules /vendor/lib/modules/ vendor_dlkm
UUID=$(dump.erofs -s $VD | sed -n 's/.*UUID: *//p')
mkfs.erofs -zlz4hc,12 -C262144 -T 1230768000 -U $UUID --force-uid=0 --force-gid=0 $O/vendor_dlkm.img $W/dlkm >/dev/null
echo "vendor_dlkm erofs size: $(stat -c%s $O/vendor_dlkm.img) (orig fs 17170432, partition 17580032)"
python3 $T/avbtool.py add_hashtree_footer --image $O/vendor_dlkm.img --partition_size $(stat -c%s $VD) --partition_name vendor_dlkm --hash_algorithm sha256 --do_not_generate_fec 2>&1 | tail -2 || echo "FOOTER FAILED (image too big for current partition -> use fastbootd)"
fsck.erofs $O/vendor_dlkm.img >/dev/null && echo "vendor_dlkm fsck OK"

check() { # label dirs... : unresolved symbols for the union of dirs (later dirs win)
  local t=$(mktemp -d); mkdir -p $t/lib/modules/0.0; for d in "${@:2}"; do cp $d/*.ko $t/lib/modules/0.0/; done
  depmod -e -b $t -F $S/lunaris/System.map 0.0 > $t/log 2>&1 || true
  echo "== $1: $(grep -c 'unknown symbol' $t/log) unresolved"; grep 'unknown symbol' $t/log | sed 's#.*/0.0/##' | head -15; rm -rf $t
}
# ---------- vendor_boot ----------
python3 $T/mkbootimg/unpack_bootimg.py --boot_img $VB --out $W/vb --format=mkbootimg > $W/vb.args
mkdir -p $W/rd && (cd $W/rd && lz4 -dc $W/vb/vendor_ramdisk00 | cpio -idm --quiet)
head -2 $W/rd/lib/modules/modules.dep
replace $W/rd/lib/modules $ST/vendor_ramdisk
regen_dep $W/rd/lib/modules /lib/modules/ vendor_ramdisk
check "vendor_ramdisk alone" $W/rd/lib/modules
check "ramdisk+vendor_dlkm" $W/rd/lib/modules $W/dlkm/lib/modules
(cd $W/rd && find . -mindepth 1 | sed 's|^\./||' | LC_ALL=C sort | cpio -o -H newc -R 0:0 --quiet | lz4 -l -12 --favor-decSpeed -q > $W/vb/vendor_ramdisk00.new)
ARGS=$(sed "s#$W/vb/vendor_ramdisk00#$W/vb/vendor_ramdisk00.new#" $W/vb.args)
eval python3 $T/mkbootimg/mkbootimg.py $ARGS --vendor_boot $O/vendor_boot.img
python3 $T/avbtool.py add_hash_footer --image $O/vendor_boot.img --partition_size 100663296 --partition_name vendor_boot --hash_algorithm sha256 2>&1 | tail -2
python3 $T/mkbootimg/unpack_bootimg.py --boot_img $O/vendor_boot.img --out $W/vbcheck >/dev/null && echo "vendor_boot re-unpack OK"
ls -la $O; sha256sum $O/*.img
chown -R angel: $O
echo REPACK_DONE
