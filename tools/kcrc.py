import struct, subprocess, sys
S='/home/angel/sapphire'
f=S+'/unpacked/stock_vmlinux.elf'
data=open(f,'rb').read()
BASE=0xffffffc008000000; OFF=0x1c0
def rd(addr,n): return data[OFF+addr-BASE:OFF+addr-BASE+n]
syms={}
for l in subprocess.run(['llvm-nm',f],capture_output=True,text=True,env={'PATH':S+'/tc/clang-r450784e/bin'}).stdout.splitlines():
    p=l.split()
    if len(p)==3: syms[p[2]]=int(p[0],16)
out={}
for kt,kc in [('___ksymtab','___kcrctab'),('___ksymtab_gpl','___kcrctab_gpl')]:
    s,e=syms['__start_'+kt[1:]],syms['__stop_'+kt[1:]]; c=syms['__start_'+kc[1:]]
    n=(e-s)//12
    for i in range(n):
        a=s+i*12
        name_off=struct.unpack('<i',rd(a+4,4))[0]; na=a+4+name_off
        b=rd(na,128); name=b.split(b'\0')[0].decode()
        crc=struct.unpack('<I',rd(c+i*4,4))[0]
        out[name]=crc
print(len(out),'exported symbols from stock Image')
with open(S+'/unpacked/stock_vmlinux.symvers','w') as w:
    for k,v in sorted(out.items()): w.write(f"0x{v:08x}\t{k}\tvmlinux\tEXPORT_SYMBOL\t\n")
# compare
sys.path.insert(0,'/mnt/c/Users/angel/AppData/Local/Temp/claude/54cd28f836a725a6/f8079d1c-3dd6-478d-90d0-6b4fef9cc7e5/scratchpad')
exec(open(sys.path[0]+'/abi.py').read().split('# 1)')[0])
allsv={}
for m in stock: allsv.update(versions(stock[m]))
c=[s for s in allsv if s in out]; bad=[s for s in c if out[s]!=allsv[s]]
print(f"stock modules vs STOCK Image: imported={len(allsv)} found={len(c)} mismatch={len(bad)} {bad[:10]}")
g={}
for l in open(S+'/ws/kernel_platform/common/out/vmlinux.symvers'):
    x=l.split('\t'); g[x[1]]=int(x[0],16)
c2=[s for s in out if s in g]; bad2=[s for s in c2 if g[s]!=out[s]]
print(f"our GKI build vs STOCK Image: common={len(c2)} mismatch={len(bad2)} {bad2[:10]}")
