import json, subprocess, os
S='/home/angel/sapphire'; D=S+'/repack/dlkm/lib/modules'
p=json.load(open(S+'/lunaris/plan_C.json'))
lm={l.split()[0] for l in open('/mnt/c/Users/angel/Desktop/kernel-oss/logs/planC2/lsmod_fox.txt') if l.strip()}
files={f[:-3].replace('-','_'):f for f in os.listdir(D) if f.endswith('.ko')}
todo=[m for m,w in p.items() if w=='ours' and m not in lm]
deps={m:[d.replace('-','_') for d in subprocess.run(['modinfo','-F','depends',D+'/'+files[m]],capture_output=True,text=True).stdout.strip().split(',') if d] for m in todo}
order=[]; done=set(lm)
missing={}
while len(order)<len(todo):
    prog=False
    for m in sorted(todo):
        if m in order: continue
        need=[d for d in deps[m] if d not in done]
        if all(d in todo for d in need) and all(d in order for d in need):
            order.append(m); done.add(m); prog=True
    if not prog:
        for m in todo:
            if m not in order: missing[m]=[d for d in deps[m] if d not in done and d not in todo]
        break
print('ORDER', ' '.join(files[m] for m in order))
print('UNLOADABLE (dep not in OrangeFox nor ours):', missing)
