#!/bin/bash
# dumpdata.sh <module> <out> <specs...>
S=/home/angel/sapphire; G=$S/tools/ghidra/support/analyzeHeadless; SP=/mnt/c/Users/angel/AppData/Local/Temp/claude/54cd28f836a725a6/f8079d1c-3dd6-478d-90d0-6b4fef9cc7e5/scratchpad
m=$1; out=$2; shift 2
if [ -f "$m" ]; then f=$m; m=$(basename $m .ko)_x; else f=$(ls $S/repack/orig_dlkm/lib/modules/$m.ko $S/repack/orig_rd/lib/modules/$m.ko 2>/dev/null | head -1); fi
$G $S/ghproj d_$m -import "$f" -scriptPath $SP -postScript DumpData.java $out "$@" -deleteProject > $S/decomp-logs/dump_$m.log 2>&1
cat $out
