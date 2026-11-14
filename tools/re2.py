import subprocess, re, os
S='/home/angel/sapphire'; STK=S+'/repack/orig_dlkm/lib/modules'; OUR=S+'/repack/dlkm/lib/modules'
def run(*a): return subprocess.run(a,capture_output=True,text=True).stdout
def fn(p):
    r=set()
    for l in run('llvm-nm',p).splitlines():
        s=l.split()
        if len(s)==3 and s[1] in 'Tt':
            n=re.sub(r'\.(llvm|cfi|cfi_jt)\.?\d*$','',s[2]); n=re.sub(r'\.\d+$','',n)
            if not n.startswith(('__cfi','__typeid','$x','.L','__UNIQUE')): r.add(n)
    return r
for m,f in [('camera','camera.ko'),('wcd937x','wcd937x_dlkm.ko'),('fs1815','fs1815_dlkm.ko'),('aw87xxx','aw87xxx_dlkm.ko'),('machine','machine_dlkm.ko'),('mbhc','mbhc_dlkm.ko'),('icnss2','icnss2.ko')]:
    a=fn(STK+'/'+f); b=fn(OUR+'/'+f)
    print(f"## {m}: stock-only {len(a-b)}  ours-only {len(b-a)}")
    print('   stock-only:', sorted(a-b)[:40])
    print('   ours-only :', sorted(b-a)[:25])
