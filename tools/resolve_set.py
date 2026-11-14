# Decide per-module ours vs stock(Lunaris 210) so that every import resolves with matching CRC.
import sys, os, glob, json
sys.path.insert(0,'/mnt/c/Users/angel/AppData/Local/Temp/claude/54cd28f836a725a6/f8079d1c-3dd6-478d-90d0-6b4fef9cc7e5/scratchpad')
exec(open(sys.path[0]+'/abi.py').read().split('# 1)')[0])
S='/home/angel/sapphire'; L=S+'/lunaris/kt'
def kmap(d):
    r={}
    for p in glob.glob(d+'/**/*.ko', recursive=True): r[os.path.basename(p)[:-3].replace('-','_')]=p
    return r
lun_vb=kmap(L+'/vendor_ramdisk'); lun_vd=kmap(L+'/vendor_dlkm')
kernel={l.split('\t')[1]:int(l.split('\t')[0],16) for l in open(S+'/lunaris/vmlinux.symvers')}
ours=dict(built)
def exports(p): return {k:int(v,16) for k,v in exported_crcs(p).items()}
cache={}
def info(p):
    if p not in cache: cache[p]=(versions(p), exports(p))
    return cache[p]
def solve(allow_ours):  # allow_ours: set of module names eligible to be ours
    choice={}
    for m,p in {**lun_vb, **lun_vd}.items(): choice[m]=('ours',ours[m]) if (m in allow_ours and m in ours) else ('stock',p)
    while True:
        prov={}
        for m,(w,p) in choice.items():
            for s,c in info(p)[1].items(): prov[s]=(c,m)
        bad=set()
        for m,(w,p) in choice.items():
            for s,c in info(p)[0].items():
                if s in kernel:
                    if kernel[s]!=c: bad.add((m,'kernel:'+s))
                elif s in prov:
                    if prov[s][0]!=c:
                        bad.add((m,s)); bad.add((prov[s][1],s))
                else:
                    bad.add((m,'UNRESOLVED:'+s))
        flip={m for m,_ in bad if choice[m][0]=='ours'}
        # stock module needs a symbol only the (Xiaomi-modified) stock provider exports -> demote provider
        for m,why in bad:
            if why.startswith('UNRESOLVED:') and choice[m][0]=='stock':
                sym=why.split(':',1)[1]
                for pm,pp in {**lun_vb, **lun_vd}.items():
                    if choice[pm][0]=='ours' and sym in info(pp)[1]: flip.add(pm)
        if not flip: return choice, bad
        for m,why in bad:
            if 'UNRESOLVED' in why and choice[m][0]=='ours': print('   unresolved in ours:', m, why)
        for m in flip: choice[m]=('stock', lun_vb.get(m) or lun_vd.get(m))
for name,allow in [('A: vendor_dlkm only', set(lun_vd)), ('B: vendor_dlkm + vendor_boot', set(lun_vd)|set(lun_vb)), ('C: vendor_dlkm-exclusive only (ramdisk untouched)', set(lun_vd)-set(lun_vb)-{'camera'})]:
    ch,bad=solve(allow)
    n_ours=sum(1 for m,(w,p) in ch.items() if w=='ours')
    stock_ours_possible=[m for m in allow if m in ours]
    demoted=sorted(m for m in stock_ours_possible if ch[m][0]=='stock')
    print(f"== {name}: total={len(ch)} ours={n_ours} (buildable={len(stock_ours_possible)}) demoted={len(demoted)} unresolved={len(bad)}")
    print('   demoted:', demoted)
    print('   remaining:', sorted(bad)[:30])
    json.dump({m:w for m,(w,p) in ch.items()}, open(S+f'/lunaris/plan_{name[0]}.json','w'), indent=0)
