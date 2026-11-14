#!/usr/bin/env python3
# Strip Motorola-only additions (runin test, deferred spin / spin_status
# control) from the v2.10.0 aw87xxx base so it matches the stock sapphire
# aw87xxx_dlkm.ko: two public controls (spin_switch, hal_monitor_time),
# spin written directly to the (absent) DSP.
import sys, re

D = '/home/angel/sapphire/ws/vendor/qcom/opensource/audio-kernel/asoc/codecs/aw87xxx'
C = D + '/aw87xxx.c'
H = D + '/aw87xxx.h'
s = open(C).read()

def rep(old, new):
    global s
    if s.count(old) != 1:
        sys.exit('anchor count %d: %r' % (s.count(old), old[:80]))
    s = s.replace(old, new)

def drop_func(sig):
    """remove a whole top-level C function starting with signature line `sig`"""
    global s
    a = s.find(sig)
    if a < 0 or s.find(sig, a + 1) >= 0:
        sys.exit('func sig not unique: %r' % sig)
    b = s.index('{', a); depth = 0; i = b
    while True:
        c = s[i]
        depth += (c == '{') - (c == '}')
        i += 1
        if depth == 0:
            break
    while i < len(s) and s[i] == '\n':
        i += 1
    s = s[:a] + s[i:]

# globals
rep('static unsigned int g_saved_spin_value;\n', '')
rep('static unsigned int g_spin_enable;\n', '')
rep('static const char *const aw87xxx_spin_status[] = {"Off", "On"};\n', '')
s = s.replace('static const char *const aw87xxx_runin_test_switch[] = {"Off", "On"};\n', '')

# profile switch: no deferred spin push
rep('\t\tschedule_delayed_work(&aw87xxx->spin_status, msecs_to_jiffies(100));\n', '')

# spin switch: plain Awinic behaviour
rep('''	g_saved_spin_value = ctrl_value;

	//don't send status to adsp until it's enabled when speaker on
	if (!g_spin_enable)
		return 0;

	ret = aw87xxx_dsp_set_spin(ctrl_value);''', '''	ret = aw87xxx_dsp_set_spin(ctrl_value);''')
rep('''	if (!g_spin_enable){
		ucontrol->value.integer.value[0] = g_saved_spin_value;
		return 0;
	}

	ucontrol->value.integer.value[0] = aw87xxx_dsp_get_spin();''', '''	ucontrol->value.integer.value[0] = aw87xxx_dsp_get_spin();''')

# Motorola-only controls / work items
for sig in ('static int aw87xxx_spin_status_info(struct snd_kcontrol *kcontrol,',
            'static int aw87xxx_spin_status_put(struct snd_kcontrol *kcontrol,',
            'static int aw87xxx_spin_status_get(struct snd_kcontrol *kcontrol,',
            'static void aw87xxx_set_spin_status(struct work_struct *work)',
            'static int aw87xxx_runin_test_switch_get(struct snd_kcontrol *kcontrol,',
            'static int aw87xxx_runin_test_switch_put(struct snd_kcontrol *kcontrol,',
            'static int aw87xxx_runin_test_switch_info(struct snd_kcontrol *kcontrol,'):
    drop_func(sig)
s = s.replace('// delayed work to update spin value\n', '')

# public controls: [0] spin_switch, [1] hal_monitor_time (stock: 2 controls)
a = s.index('\tkctl_name[1] = devm_kzalloc(aw87xxx->dev, AW_NAME_BUF_MAX,\n\t\t\tGFP_KERNEL);\n\tif (kctl_name[1] == NULL)\n\t\treturn -ENOMEM;\n\n\tsnprintf(kctl_name[1], AW_NAME_BUF_MAX, "aw87xxx_runin_test_switch");')
b = s.index('\tkctl_name[3] = devm_kzalloc(aw87xxx->dev, AW_NAME_BUF_MAX,', a)
s = s[:a] + s[b:]
seg_a = s.index('\tkctl_name[3] = devm_kzalloc(aw87xxx->dev, AW_NAME_BUF_MAX,')
seg_b = s.index('\tret = aw_componet_codec_ops.add_codec_controls(aw87xxx->codec,', seg_a)
seg = s[seg_a:seg_b].replace('kctl_name[3]', 'kctl_name[1]').replace('aw87xxx_kcontrol[3]', 'aw87xxx_kcontrol[1]')
s = s[:seg_a] + seg + s[seg_b:]

# probe: no deferred-spin init
rep('\tg_saved_spin_value = AW_SPIN_0;\n', '')
rep('\tINIT_DELAYED_WORK(&aw87xxx->spin_status, aw87xxx_set_spin_status);\n', '')
rep('\tg_spin_enable = 0;\n', '')

open(C, 'w').write(s)

h = open(H).read()
if '#define AW87XXX_PUBLIC_KCONTROL_NUM\t(4)' in h:
    h = h.replace('#define AW87XXX_PUBLIC_KCONTROL_NUM\t(4)', '#define AW87XXX_PUBLIC_KCONTROL_NUM\t(2)')
h = h.replace('\tstruct delayed_work spin_status;\n', '')
open(H, 'w').write(h)

left = [k for k in ('g_spin_enable', 'g_saved_spin_value', 'spin_status', 'runin') if k in s]
print('aw87xxx de-Motorola-ised; leftovers:', left)
