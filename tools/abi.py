import subprocess, os, re, glob, collections
S='/home/angel/sapphire'
def kos(dirs):
    d={}
    for root in dirs:
        for p in glob.glob(root+'/**/*.ko', recursive=True):
            d.setdefault(os.path.basename(p)[:-3].replace('-','_'), p)
    return d
stock=kos([S+'/x/vendor_dlkm', S+'/unpacked/vrd'])
built=kos([S+'/ws/kernel_platform/msm-kernel/out', S+'/ws/vendor/qcom/opensource'])
if 'wlan' in built: built['qca_cld3_wlan']=built['wlan']
def versions(p):  # imported symbol -> crc from __versions section
    out=subprocess.run(['llvm-readelf','-x','__versions',p],capture_output=True,text=True).stdout
    raw=bytearray()
    for l in out.splitlines():
        m=re.match(r'\s*0x[0-9a-f]+ ((?:[0-9a-f]{8} ?){1,4})',l)
        if m: raw+=bytes.fromhex(m.group(1).replace(' ',''))
    r={}
    for i in range(0,len(raw)-63,64):
        crc=int.from_bytes(raw[i:i+8],'little'); name=raw[i+8:i+64].split(b'\0')[0].decode()
        r[name]=crc
    return r
def exported_crcs(p):
    out=subprocess.run(['llvm-nm',p],capture_output=True,text=True).stdout
    return {l.split()[2][6:]:l.split()[0] for l in out.splitlines() if ' __crc_' in l}
# 1) kernel (vmlinux) symbol CRCs imported: compare across all modules
allsv={}; allbv={}
for m in stock: allsv.update(versions(stock[m]))
for m in built: allbv.update(versions(built[m]))
common=set(allsv)&set(allbv)
bad=[s for s in common if allsv[s]!=allbv[s]]
print(f"imported symbols: stock={len(allsv)} built={len(allbv)} common={len(common)} CRC-mismatch={len(bad)}")
print(" sample mismatches:", sorted(bad)[:40])
# which of mismatches are vmlinux symbols (exported by GKI) vs module-exported
ks=set()
for l in open(S+'/ws/kernel_platform/msm-kernel/out/Module.symvers'):
    f=l.split('\t'); 
    if f[2]=='vmlinux': ks.add(f[1])
badk=[s for s in bad if s in ks]
print(f" mismatches on vmlinux (GKI) symbols: {len(badk)} ->", sorted(badk)[:30])
# 2) exported CRCs for matched modules
tot=mis=0; per=collections.Counter()
for m in set(stock)&set(built):
    a=exported_crcs(stock[m]); b=exported_crcs(built[m])
    for s in set(a)&set(b):
        tot+=1
        if a[s]!=b[s]: mis+=1; per[m]+=1
print(f"module-exported symbols compared={tot} CRC-mismatch={mis}")
print(" worst modules:", per.most_common(25))
