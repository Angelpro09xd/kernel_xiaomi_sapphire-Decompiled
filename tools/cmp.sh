#!/bin/bash
# compare built modules (dirs given as args) with stock
S=/home/angel/sapphire
cut -f2 $S/mods_unique.tsv | tr - _ | sort -u > /tmp/stock_n
find "$@" -name "*.ko" | xargs -n1 basename | sed 's/\.ko$//' | tr - _ | sort -u > /tmp/built_n
echo "stock=$(wc -l </tmp/stock_n) built=$(wc -l </tmp/built_n) matched=$(comm -12 /tmp/stock_n /tmp/built_n | wc -l)"
echo "== stock modules NOT built:"; comm -23 /tmp/stock_n /tmp/built_n | tr '\n' ' '; echo
echo "== built but not in stock (count): $(comm -13 /tmp/stock_n /tmp/built_n | wc -l)"
# exported symbol diff for matched modules
bad=0
for m in $(comm -12 /tmp/stock_n /tmp/built_n); do
  s=$(find $S/x/vendor_dlkm $S/unpacked/vrd -name "*.ko" | awk -v m=$m '{b=$0; sub(".*/","",b); sub(".ko$","",b); gsub("-","_",b); if(b==m){print; exit}}')
  b=$(find "$@" -name "*.ko" | awk -v m=$m '{b=$0; sub(".*/","",b); sub(".ko$","",b); gsub("-","_",b); if(b==m){print; exit}}')
  d=$(diff <(nm $s 2>/dev/null | awk '$2=="T"||$2=="D"{print $3}' | grep -v "^__" | sort -u) <(nm $b | awk '$2=="T"||$2=="D"{print $3}' | grep -v "^__" | sort -u) | grep -c "^[<>]")
  ps=$(modinfo -F parm $s | cut -d: -f1 | sort | tr '\n' ,); pb=$(modinfo -F parm $b | cut -d: -f1 | sort | tr '\n' ,)
  [ "$ps" != "$pb" ] && { echo "PARM DIFF $m: stock[$ps] built[$pb]"; bad=$((bad+1)); }
  [ $d -gt 20 ] && echo "SYMS $m: $d global T/D symbols differ"
done
echo "param mismatches: $bad"
