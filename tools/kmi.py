import sys
S='/home/angel/sapphire'
sys.path.insert(0,'/mnt/c/Users/angel/AppData/Local/Temp/claude/54cd28f836a725a6/f8079d1c-3dd6-478d-90d0-6b4fef9cc7e5/scratchpad')
exec(open(sys.path[0]+'/abi.py').read().split('# 1)')[0])
def sv(p):
    d={}
    for l in open(p):
        f=l.split('\t'); d[f[1]]=(int(f[0],16),f[2])
    return d
st=sv(S+'/unpacked/stock_vmlinux.symvers'); ms=sv(S+'/ws/kernel_platform/msm-kernel/out/Module.symvers')
vm={k:v[0] for k,v in ms.items() if v[1]=='vmlinux'}
common=[s for s in st if s in vm]; bad=[s for s in common if st[s][0]!=vm[s]]
print(f"msm vmlinux vs stock Image: common={len(common)} mismatch={len(bad)}")
# symbols our (in-tree) modules import from vmlinux
imp=set()
for m,p in built.items():
    if '/msm-kernel/out/' in p: imp|=set(versions(p))
used=[s for s in imp if s in st]; ubad=sorted(s for s in used if s in vm and vm[s]!=st[s][0])
print(f"GKI symbols used by our modules: {len(used)}  CRC mismatch: {len(ubad)}")
print(ubad[:80])
