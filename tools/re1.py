import subprocess, json, re, os, sys
sys.path.insert(0,'/mnt/c/Users/angel/AppData/Local/Temp/claude/54cd28f836a725a6/f8079d1c-3dd6-478d-90d0-6b4fef9cc7e5/scratchpad')
exec(open(sys.path[0]+'/abi.py').read().split('# 1)')[0])
S='/home/angel/sapphire'
plan=json.load(open(S+'/lunaris/plan_C.json')); ours=sorted(m for m,w in plan.items() if w=='ours')
STK=S+'/repack/orig_dlkm/lib/modules'; OUR=S+'/repack/dlkm/lib/modules'
def run(*a): return subprocess.run(a,capture_output=True,text=True).stdout
def fname(d,m):
    for f in os.listdir(d):
        if f.endswith('.ko') and f[:-3].replace('-','_')==m: return d+'/'+f
def modinfo(p,k): return set(x for x in run('modinfo','-F',k,p).splitlines() if x)
def syms(p):
    T=set(); U=set()
    for l in run('llvm-nm',p).splitlines():
        s=l.split()
        if len(s)==2 and s[0]=='U': U.add(s[1])
        elif len(s)==3 and s[1] in 'Tt' and not s[2].startswith(('__cfi','__typeid','$x','.L','__UNIQUE','__efistub')): T.add(s[2])
    return T,U
def secsize(p,name):
    for l in run('llvm-readelf','-S','-W',p).splitlines():
        if ' '+name+' ' in l:
            f=l.split(); i=f.index(name); return int(f[i+4],16)
def strs(p): return set(x for x in run('strings','-n','8',p).splitlines() if '%' in x or ' ' in x)
rows=[]
for m in ours:
    a=fname(STK,m); b=fname(OUR,m)
    if not a or not b: continue
    al=modinfo(a,'alias'); bl=modinfo(b,'alias')
    pa=modinfo(a,'parm'); pb=modinfo(b,'parm')
    Ta,Ua=syms(a); Tb,Ub=syms(b)
    va=versions(a).get('module_layout'); vb=versions(b).get('module_layout')
    ta=secsize(a,'.gnu.linkonce.this_module'); tb=secsize(b,'.gnu.linkonce.this_module')
    sa=strs(a); sb=strs(b)
    rows.append(dict(m=m, alias_missing=sorted(al-bl), alias_extra=sorted(bl-al),
      parm_missing=sorted(x.split(':')[0] for x in pa-pb), fn_stock_only=len(Ta-Tb), fn_ours_only=len(Tb-Ta),
      imp_ours_only=sorted(Ub-Ua), imp_stock_only=sorted(Ua-Ub), this_module=(ta,tb), module_layout_eq=(va==vb),
      str_stock_only=len(sa-sb), sample_stock_only_fn=sorted(Ta-Tb)[:8]))
json.dump(rows, open(S+'/re_planC.json','w'), indent=1)
for r in sorted(rows, key=lambda r: -(r['fn_stock_only']+len(r['alias_missing'])*20+len(r['imp_ours_only']))):
    print(f"{r['m']:24} this_module={r['this_module']} layout_eq={r['module_layout_eq']} fn stock-only={r['fn_stock_only']:3} ours-only={r['fn_ours_only']:3} imports ours-only={len(r['imp_ours_only']):3} alias missing={r['alias_missing'][:3]} extra={r['alias_extra'][:3]} parm missing={r['parm_missing'][:4]}")
