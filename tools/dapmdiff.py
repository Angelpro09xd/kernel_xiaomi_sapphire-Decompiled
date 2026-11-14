import re
def parse(path):
    secs={}; cur=None
    for l in open(path):
        if l.startswith('DATA'): cur=[]; secs[len(secs)]=cur; continue
        m=re.match(r'\s*\[\d+\] -> (.*)$',l)
        if m and cur is not None:
            v=m.group(1).strip(); cur.append(v[1:-1] if v.startswith('"') else None)
    return secs[0],secs[1],secs[2]
def routes(r): return {tuple(r[i:i+3]) for i in range(0,len(r)-3,4)}
def ctrls(c): return {c[i+2] for i in range(0,len(c)-2,10) if c[i+2]}
def widgets(w): return {x for x in w if x and re.match(r'^[A-Z][A-Z0-9 _]+$',x)}
sa,sc,sw=parse('/tmp/wcd_stock_t.txt'); oa,oc,ow=parse('/tmp/wcd_ours_t.txt')
for name,s,o in [('ROUTES',routes(sa),routes(oa)),('CONTROLS',ctrls(sc),ctrls(oc)),('WIDGET-NAMES',widgets(sw),widgets(ow))]:
    print(f'== {name}: stock-only'); [print('   ',x) for x in sorted(s-o, key=str)]
    print(f'== {name}: ours-only');  [print('   ',x) for x in sorted(o-s, key=str)]
