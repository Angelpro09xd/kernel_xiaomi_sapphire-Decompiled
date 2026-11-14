import struct, subprocess, sys
S='/home/angel/sapphire'
import os; f=os.environ['ELF']
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
with open(os.environ['OUT'],'w') as w:
    for k,v in sorted(out.items()): w.write(f"0x{v:08x}\t{k}\tvmlinux\tEXPORT_SYMBOL\t\n")

