import json, os, glob, shutil, subprocess, sys
sys.path.insert(0,'/mnt/c/Users/angel/AppData/Local/Temp/claude/54cd28f836a725a6/f8079d1c-3dd6-478d-90d0-6b4fef9cc7e5/scratchpad')
exec(open(sys.path[0]+'/abi.py').read().split('# 1)')[0])
S='/home/angel/sapphire'; L=S+'/lunaris'
for plan in 'ABC':
    ch=json.load(open(f'{L}/plan_{plan}.json'))
    out=f'{L}/stage_{plan}'; shutil.rmtree(out, ignore_errors=True)
    for part in ['vendor_dlkm','vendor_ramdisk']:
        shutil.copytree(f'{L}/kt/{part}', f'{out}/{part}')
        n=0
        for p in glob.glob(f'{out}/{part}/**/*.ko', recursive=True):
            m=os.path.basename(p)[:-3].replace('-','_')
            if ch.get(m)=='ours':
                subprocess.run(['llvm-strip','--strip-debug','--remove-section=.BTF','-o',p,built[m]],check=True); n+=1
        print(f'plan {plan} {part}: replaced {n} modules')
    with open(f'{out}/MANIFEST.txt','w') as f:
        for m,w in sorted(ch.items()): f.write(f'{w}\t{m}\n')
    subprocess.run(f'cd {out} && tar -czf {L}/sapphire-oss-modules-plan{plan}.tgz vendor_dlkm vendor_ramdisk MANIFEST.txt', shell=True, check=True)
print(subprocess.run(f'ls -la {L}/*.tgz', shell=True, capture_output=True, text=True).stdout)
