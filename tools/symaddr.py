# symaddr.py <ko> <ghidra-blocks-file> <sym>... -> prints hex Ghidra address of each symbol
import subprocess, sys, re
ko, blk = sys.argv[1], sys.argv[2]
blocks={l.split()[1]:int(l.split()[2],16) for l in open(blk) if l.startswith('BLOCK ') and re.match(r'^[0-9a-f]+$', l.split()[2])}
secs={}
for l in subprocess.run(['llvm-readelf','-S','-W',ko],capture_output=True,text=True).stdout.splitlines():
    m=re.match(r'\s*\[\s*(\d+)\]\s+(\S+)',l)
    if m: secs[m.group(1)]=m.group(2)
syms={}
for l in subprocess.run(['llvm-readelf','-s','-W',ko],capture_output=True,text=True).stdout.splitlines():
    p=l.split()
    if len(p)>=8 and p[0].endswith(':') and p[0][:-1].isdigit(): syms.setdefault(p[7],(int(p[1],16),p[6]))
for s in sys.argv[3:]:
    v,ndx=syms[s]; sec=secs[ndx]; print(f"{s} {sec} 0x{blocks[sec]+v:08x}")
