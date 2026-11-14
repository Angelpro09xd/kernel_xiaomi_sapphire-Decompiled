import subprocess, re
S='/home/angel/sapphire/repack'; STK=S+'/orig_dlkm/lib/modules'; OUR=S+'/dlkm/lib/modules'
def run(*a): return subprocess.run(a,capture_output=True,text=True).stdout
def fp(f):
    secs=run('llvm-readelf','-S','-W',f)
    text=0
    for l in secs.splitlines():
        p=l.split()
        if '.text' in p:
            i=p.index('.text'); text=int(p[i+4],16)
    d=run('llvm-objdump','-d','--no-show-raw-insn',f)
    return dict(text=text, paciasp=d.count('paciasp'), bti=len(re.findall(r'\bbti\b',d)), scs=len(re.findall(r'str\s+x30, \[x18',d)),
                cfi=('__cfi_check' in run('llvm-nm',f)), nsec=len(re.findall(r'^\s+\[\s*\d+\]',secs,re.M)))
for m in ['cnss_utils','gpr_dlkm','q6_notifier_dlkm','swr_dlkm','rmnet_ctl','qcedev-mod_dlkm','icnss2']:
    print(m); print('  stock', fp(f'{STK}/{m}.ko')); print('  ours ', fp(f'{OUR}/{m}.ko'))
a=set(re.findall(r'\]\s+(\S+)',run('llvm-readelf','-S','-W',STK+'/cnss_utils.ko'))); b=set(re.findall(r'\]\s+(\S+)',run('llvm-readelf','-S','-W',OUR+'/cnss_utils.ko')))
print('sections only stock:',sorted(a-b)); print('sections only ours:',sorted(b-a))
