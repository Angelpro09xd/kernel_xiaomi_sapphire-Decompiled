import re, os, glob, subprocess
D='/mnt/c/Users/angel/Desktop/kernel-oss/decompiled'
S='/home/angel/sapphire'; mods=[S+'/repack/orig_dlkm/lib/modules', S+'/repack/orig_rd/lib/modules']
def kofile(m):
    for d in mods:
        for c in (m, m.replace('_','-')):
            p=f'{d}/{c}.ko'
            if os.path.exists(p): return p
def mi(p,k): return [x for x in subprocess.run(['modinfo','-F',k,p],capture_output=True,text=True).stdout.splitlines() if x]
out=['# Módulos de stock de sapphire decompilados (Ghidra)','',
     'Fuente: Lunaris 3.13 = vendor_dlkm / vendor_boot de stock (OS2.0.210). Cada `.c` contiene: todas las cadenas del módulo y el pseudocódigo C de cada función, con los textos de `printk` incrustados.','',
     '| módulo | funciones | autor / descripción | compatibles DT | propiedades DT leídas | parámetros |','|---|---|---|---|---|---|']
for f in sorted(glob.glob(D+'/*.c')):
    m=os.path.basename(f)[:-2]; t=open(f,errors='replace').read()
    fns=re.findall(r'^/\* ---- (\S+) @',t,re.M)
    fns=sorted({re.sub(r'\.[0-9a-f]{32}','',x) for x in fns})
    props=sorted(set(re.findall(r'of_\w+\([^;]*?"([a-z0-9,_\-]+)"',t)))
    p=kofile(m)
    comp=sorted({re.sub(r'C\*$','',re.sub(r'^of:N\*T\*C','',a)) for a in (mi(p,'alias') if p else []) if a.startswith('of:')})
    par=[x.split(':')[0] for x in (mi(p,'parm') if p else [])]
    desc=' / '.join(x for x in ((mi(p,'author') or [''])[0], (mi(p,'description') or [''])[0]) if x) if p else ''
    out.append(f"| [{m}]({m}.c) | {len(fns)} | {desc} | {', '.join(comp[:6])} | {', '.join(props[:10])}{' …' if len(props)>10 else ''} | {', '.join(par[:6])} |")
open(D+'/INDEX.md','w').write('\n'.join(out)+'\n')
print(len(out)-6,'modules indexed')
