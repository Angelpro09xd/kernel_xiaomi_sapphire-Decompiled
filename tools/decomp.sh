#!/bin/bash
# decomp.sh <list of module names>   -> /mnt/c/.../kernel-oss/decompiled/<name>.c
S=/home/angel/sapphire; G=$S/tools/ghidra/support/analyzeHeadless
SP=/mnt/c/Users/angel/AppData/Local/Temp/claude/54cd28f836a725a6/f8079d1c-3dd6-478d-90d0-6b4fef9cc7e5/scratchpad
OUT=/mnt/c/Users/angel/Desktop/kernel-oss/decompiled; LOG=$S/decomp-logs; mkdir -p $LOG $S/ghproj
DL=$S/repack/orig_dlkm/lib/modules; RD=$S/repack/orig_rd/lib/modules
if [ ! -d $RD ]; then mkdir -p $S/repack/orig_rd; python3 $S/tools/mkbootimg/unpack_bootimg.py --boot_img $S/lunaris-zip/images/vendor_boot.img --out /tmp/vbz >/dev/null; (cd $S/repack/orig_rd && lz4 -dc /tmp/vbz/vendor_ramdisk00 | cpio -idm --quiet); fi
one() {
  m=$1; f=$(ls $DL/$m.ko $DL/${m//_/-}.ko $RD/$m.ko $RD/${m//_/-}.ko 2>/dev/null | head -1)
  [ -z "$f" ] && { echo "NOTFOUND $m"; return; }
  [ -s $OUT/$m.c ] && { echo "SKIP $m"; return; }
  $G $S/ghproj p_$m -import "$f" -scriptPath $SP -postScript DecompileAll.java $OUT/$m.c -deleteProject -analysisTimeoutPerFile 900 > $LOG/$m.log 2>&1
  grep -h "DECOMPILED" $LOG/$m.log || { echo "FAIL $m"; tail -3 $LOG/$m.log; }
}
export -f one; export S G SP OUT LOG DL RD
printf '%s\n' "$@" | xargs -P 4 -I{} bash -c 'one {}'
echo DECOMP_DONE
