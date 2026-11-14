import sys, re
# showfn.py <file> <func> : print C function definition (brace-matched)
src=open(sys.argv[1],errors='replace').read(); fn=sys.argv[2]
m=re.search(r'^[A-Za-z][^\n;]*\b'+re.escape(fn)+r'\s*\([^;]*?\)\s*\{', src, re.M|re.S)
if not m: print('NOT FOUND', fn); sys.exit()
i=m.end(); depth=1
while depth and i<len(src):
    depth+= {'{':1,'}':-1}.get(src[i],0); i+=1
print(src[m.start():i])
