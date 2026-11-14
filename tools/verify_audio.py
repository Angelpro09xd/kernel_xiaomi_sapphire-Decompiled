#!/usr/bin/env python3
# Compare rebuilt sapphire audio modules against the stock .ko files.
import subprocess, re, os, sys

S = '/home/angel/sapphire'
STK = [S + '/repack/orig_dlkm/lib/modules', S + '/repack/orig_rd/lib/modules']
A = S + '/ws/vendor/qcom/opensource/audio-kernel'
MODS = {
    'fs1815_dlkm': A + '/asoc/codecs/fs1815/fs1815_dlkm.ko',
    'aw87xxx_dlkm': A + '/asoc/codecs/aw87xxx/aw87xxx_dlkm.ko',
    'lct_audio_info_dlkm': A + '/asoc/codecs/lct_audio_info/lct_audio_info_dlkm.ko',
    'wcd937x_dlkm': A + '/asoc/codecs/wcd937x/wcd937x_dlkm.ko',
    'machine_dlkm': A + '/asoc/machine_dlkm.ko',
    'mbhc_dlkm': A + '/asoc/codecs/mbhc_dlkm.ko',
}

def run(*a):
    return subprocess.run(a, capture_output=True, text=True).stdout

def norm(n):
    n = re.sub(r'\.[0-9a-f]{32}', '', n)
    n = re.sub(r'\.(llvm|cfi|cfi_jt)\.?\d*$', '', n)
    return re.sub(r'\.\d+$', '', n)

def info(p):
    T, U, X = set(), set(), set()
    for l in run('llvm-nm', p).splitlines():
        f = l.split()
        if len(f) == 2 and f[0] == 'U':
            U.add(f[1])
        elif len(f) == 3:
            if f[2].startswith('__ksymtab_'):
                X.add(f[2][10:])
            elif f[1] in 'Tt' and not f[2].startswith(('__cfi', '__typeid', '$x', '.L', '__UNIQUE')):
                T.add(norm(f[2]))
    strs = {x for x in run('strings', '-n', '6', p).splitlines() if ' ' in x or '%' in x}
    return T, U, X, strs

def stock(m):
    for d in STK:
        for c in (m, m.replace('_', '-')):
            if os.path.exists(f'{d}/{c}.ko'):
                return f'{d}/{c}.ko'

ok = True
for m, built in MODS.items():
    s = stock(m)
    if not os.path.exists(built):
        print(f'{m:20} NOT BUILT'); ok = False; continue
    Ts, Us, Xs, Ss = info(s)
    Tb, Ub, Xb, Sb = info(built)
    print(f'== {m}')
    print(f'   functions: stock {len(Ts)}  ours {len(Tb)}  common {len(Ts & Tb)}')
    print(f'     stock-only: {sorted(Ts - Tb)[:15]}')
    print(f'     ours-only : {sorted(Tb - Ts)[:15]}')
    print(f'   exports   : stock-only {sorted(Xs - Xb)}  ours-only {sorted(Xb - Xs)}')
    print(f'   imports   : stock-only {sorted(Us - Ub)[:20]}')
    print(f'               ours-only  {sorted(Ub - Us)[:20]}')
    print(f'   strings   : {len(Ss & Sb)}/{len(Ss)} of stock strings present')
