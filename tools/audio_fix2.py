#!/usr/bin/env python3
import sys
A = '/home/angel/sapphire/ws/vendor/qcom/opensource/audio-kernel'

# 1) aw87xxx: stock sapphire is built without the AW87XXX_RUNIN_TEST factory hook
H = A + '/asoc/codecs/aw87xxx/aw87xxx.h'
s = open(H).read()
old = '#define AW87XXX_RUNIN_TEST\t1\n'
if old in s:
    s = s.replace(old, '/* sapphire: stock aw87xxx_dlkm.ko has no runin test hook */\n/* #define AW87XXX_RUNIN_TEST\t1 */\n')
    open(H, 'w').write(s)
C = A + '/asoc/codecs/aw87xxx/aw87xxx.c'
s = open(C).read()
a = s.index('static void aw87xxx_set_adsp_module_status(struct work_struct *work)\n')
if s[a - 30:a].find('#ifdef AW87XXX_RUNIN_TEST') < 0:
    b = s.index('\n}\n', a) + 3
    s = s[:a] + '#ifdef AW87XXX_RUNIN_TEST\n' + s[a:b] + '#endif /* AW87XXX_RUNIN_TEST */\n' + s[b:]
    open(C, 'w').write(s)

# 2) wcd937x: the sapphire glue must precede wcd937x_snd_controls[]
W = A + '/asoc/codecs/wcd937x/wcd937x.c'
s = open(W).read()
g0 = s.index('#if defined(CONFIG_SND_SOC_AW87XXX) || defined(CONFIG_SND_SOC_FS1815)\n/*\n * Redmi Note 13 4G (sapphire) stereo speakers.')
g1 = s.index('#endif /* CONFIG_SND_SOC_AW87XXX || CONFIG_SND_SOC_FS1815 */\n', g0)
g1 += len('#endif /* CONFIG_SND_SOC_AW87XXX || CONFIG_SND_SOC_FS1815 */\n')
glue = s[g0:g1]
anchor = 'static const struct snd_kcontrol_new wcd937x_snd_controls[] = {'
ci = s.index(anchor)
if ci < g0:
    s = s[:g0] + s[g1:]                       # remove from old place
    ci = s.index(anchor)
    s = s[:ci] + glue + '\n' + s[ci:]         # insert before the controls table
    open(W, 'w').write(s)
    print('moved sapphire glue before wcd937x_snd_controls')
else:
    print('glue already before controls')
