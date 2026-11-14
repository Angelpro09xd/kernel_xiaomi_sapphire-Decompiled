#!/usr/bin/env python3
# sapphire audio: mbhc USB-C analog-adapter notifier, machine sysfs hook,
# keep AudioReach-compatible aw87xxx_dsp. Reconstructed from stock modules.
import subprocess, sys

A = '/home/angel/sapphire/ws/vendor/qcom/opensource/audio-kernel'

def rep(path, old, new):
    s = open(path).read()
    if s.count(old) != 1:
        sys.exit('anchor count %d in %s: %r' % (s.count(old), path, old[:70]))
    open(path, 'w').write(s.replace(old, new))

# --- aw87xxx: stock sapphire has no DSP link (no afe/q6 imports); keep the
#     AudioReach-buildable topaz dsp glue instead of Motorola's q6afe-v2 one
subprocess.run(['git', '-C', A, 'checkout', 'HEAD', '--',
                'asoc/codecs/aw87xxx/aw87xxx_dsp.c', 'asoc/codecs/aw87xxx/aw87xxx_dsp.h'], check=True)

# --- mbhc: struct field (stock layout: usbc_mode right before fsa_np)
H = A + '/include/asoc/wcd-mbhc-v2.h'
if 'int usbc_mode;' not in open(H).read():
    rep(H, '\tstruct device_node *fsa_np;\n\tstruct notifier_block fsa_nb;\n',
           '\tint usbc_mode;\t/* sapphire: last USB-C typec mode seen via power_supply */\n'
           '\tstruct device_node *fsa_np;\n\tstruct notifier_block fsa_nb;\n')

C = A + '/asoc/codecs/wcd-mbhc-v2.c'

def rep_first(path, old, new):
    s = open(path).read()
    if old not in s:
        sys.exit('anchor missing in %s: %r' % (path, old[:70]))
    open(path, 'w').write(s.replace(old, new, 1))

# insert before the first (#if'd) definition of the fsa4480 handler
rep_first(C, '#if IS_ENABLED(CONFIG_QCOM_FSA4480_I2C)\nstatic int wcd_mbhc_usbc_ana_event_handler(struct notifier_block *nb,\n',
'''/*
 * sapphire: no FSA4480 USB-C audio switch is fitted; Xiaomi's qpnp-smb5
 * exports the current typec mode instead. A USB-C analog audio adapter
 * (typec mode 4) is reported to userspace as an inserted headset.
 * Reconstructed from the stock sapphire mbhc_dlkm.ko.
 */
extern int audio_get_prop_typec_mode(void);

static int wcd_mbhc_non_usb_c_event_changed(struct notifier_block *nb,
					    unsigned long evt, void *ptr)
{
	struct wcd_mbhc *mbhc = container_of(nb, struct wcd_mbhc, fsa_nb);
	int typec_mode = audio_get_prop_typec_mode();

	if (typec_mode == 0 && mbhc->usbc_mode != 0) {
		pr_err("%s:typec_mode:%d, mbhc->usbc_mode:%d\\n", __func__,
		       typec_mode, mbhc->usbc_mode);
		snd_soc_jack_report(&mbhc->headset_jack, 0, WCD_MBHC_JACK_MASK);
		mbhc->usbc_mode = 0;
	} else if (typec_mode == 4 && mbhc->usbc_mode != 4) {
		pr_err("%s:typec_mode:%d, mbhc->usbc_mode:%d\\n", __func__,
		       typec_mode, mbhc->usbc_mode);
		snd_soc_jack_report(&mbhc->headset_jack, SND_JACK_HEADSET,
				    WCD_MBHC_JACK_MASK);
		mbhc->usbc_mode = 4;
	}
	return NOTIFY_OK;
}

#if IS_ENABLED(CONFIG_QCOM_FSA4480_I2C)
static int wcd_mbhc_usbc_ana_event_handler(struct notifier_block *nb,
''')
rep(C, '''	if (mbhc_cfg->enable_usbc_analog) {
		mbhc->fsa_nb.notifier_call = wcd_mbhc_usbc_ana_event_handler;
		mbhc->fsa_nb.priority = 0;
		rc = fsa4480_reg_notifier(&mbhc->fsa_nb, mbhc->fsa_np);
	}
''', '''	if (mbhc_cfg->enable_usbc_analog) {
		mbhc->fsa_nb.notifier_call = wcd_mbhc_usbc_ana_event_handler;
		mbhc->fsa_nb.priority = 0;
		rc = fsa4480_reg_notifier(&mbhc->fsa_nb, mbhc->fsa_np);
	} else {
		mbhc->fsa_nb.notifier_call = wcd_mbhc_non_usb_c_event_changed;
		mbhc->fsa_nb.priority = 0;
		rc = power_supply_reg_notifier(&mbhc->fsa_nb);
		if (rc)
			dev_err(mbhc->component->dev,
				"%s: power supply registration failed\\n", __func__);
	}
''')
rep(C, '''	if (mbhc->mbhc_cfg->enable_usbc_analog)
		fsa4480_unreg_notifier(&mbhc->fsa_nb, mbhc->fsa_np);

	pr_debug("%s: leave\\n", __func__);
}
EXPORT_SYMBOL(wcd_mbhc_stop);''', '''	if (mbhc->mbhc_cfg->enable_usbc_analog)
		fsa4480_unreg_notifier(&mbhc->fsa_nb, mbhc->fsa_np);
	else
		power_supply_unreg_notifier(&mbhc->fsa_nb);

	pr_debug("%s: leave\\n", __func__);
}
EXPORT_SYMBOL(wcd_mbhc_stop);''')
s = open(C).read()
if '#include <linux/power_supply.h>' not in s:
    rep(C, '#include <linux/module.h>\n', '#include <linux/module.h>\n#include <linux/power_supply.h>\n')

# --- machine (bengal.c): create /sys/android_audio after the codec entry
B = A + '/asoc/bengal.c'
s = open(B).read()
if 'lct_audio_info_create_sysfs' not in s:
    rep(B, 'extern int fsm_add_codec_controls(struct snd_soc_component *codec);\n',
           'extern int fsm_add_codec_controls(struct snd_soc_component *codec);\n'
           '#endif /*CONFIG_SND_SOC_FS1815*/\n\n'
           '#if defined(CONFIG_SND_SOC_LCT_AUDIO_INFO)\n'
           'extern int lct_audio_info_create_sysfs(void);\n')
    rep(B, '''			ARRAY_SIZE(sm_port_map),
			sm_port_map);
	}

	snd_soc_dapm_ignore_suspend(dapm, "EAR");''', '''			ARRAY_SIZE(sm_port_map),
			sm_port_map);
	}

#if defined(CONFIG_SND_SOC_LCT_AUDIO_INFO)
	/* sapphire: /sys/android_audio/{audio_codec,audio_pa} */
	lct_audio_info_create_sysfs();
#endif

	snd_soc_dapm_ignore_suspend(dapm, "EAR");''')
print('mbhc/machine/aw87xxx_dsp patched')
