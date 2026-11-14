#!/usr/bin/env python3
# Replace the topaz speaker-PA glue in wcd937x.c with the sapphire glue,
# reconstructed from the stock sapphire wcd937x_dlkm.ko (decompiled code +
# dumped tables: aw_profile, FourSemi scene tables, ext-spk enum, DAPM routes).
import re, sys

P = '/home/angel/sapphire/ws/vendor/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x.c'
s = open(P).read()

def cut(start_marker, end_marker, replacement, include_end=True):
    global s
    a = s.find(start_marker)
    if a < 0 or s.find(start_marker, a + 1) >= 0:
        sys.exit('marker not unique: %r' % start_marker[:60])
    b = s.find(end_marker, a)
    if b < 0:
        sys.exit('end marker not found: %r' % end_marker[:60])
    if include_end:
        b += len(end_marker)
    s = s[:a] + replacement + s[b:]

def rep(old, new):
    global s
    if s.count(old) != 1:
        sys.exit('anchor count %d: %r' % (s.count(old), old[:70]))
    s = s.replace(old, new)

# 1) drop topaz "wcd937x_aw87xxx_dev0_mode" control helpers
cut('#ifdef CONFIG_SND_SOC_AW87XXX\nstatic unsigned int g_wcd937x_aw87xxx_dev0_mode = 0;',
    '#endif /* CONFIG_SND_SOC_AW87XXX */\n', '')
cut('#ifdef CONFIG_SND_SOC_AW87XXX\nstatic const char *const wcd937x_aw87xxx_mode_function[]',
    '#endif /* CONFIG_SND_SOC_AW87XXX */\n', '')
cut('#ifdef CONFIG_SND_SOC_AW87XXX\nstatic SOC_ENUM_SINGLE_EXT_DECL(wcd937x_aw87xxx_mode',
    '#endif /* CONFIG_SND_SOC_AW87XXX */\n', '')

# 2) replace the topaz PA event code (aw87xxx / sipa / fs1815) with the sapphire glue
SAPPHIRE_GLUE = r'''#if defined(CONFIG_SND_SOC_AW87XXX) || defined(CONFIG_SND_SOC_FS1815)
/*
 * Redmi Note 13 4G (sapphire) stereo speakers.
 *
 * Two external speaker amplifiers hang off the WCD9370 AUX and EAR paths:
 *   "AUX EXT SPK" -> amplifier 0 (FourSemi channel mask 0x3)
 *   "EAR EXT SPK" -> amplifier 1 (FourSemi channel mask 0xc)
 * The amplifier part is dual-sourced: Awinic aw87xxx or FourSemi fs1815.
 * aw87xxx_set_profile() returns 0 when an Awinic part handled the request;
 * otherwise the FourSemi driver is driven by scene.
 *
 * Reconstructed from the stock sapphire wcd937x_dlkm.ko.
 */
extern int aw87xxx_set_profile(int dev_index, char *profile);
extern int fsm_amp_switch(uint8_t pos_mask, bool on);
extern int fsm_amp_set_scene(uint8_t pos_mask, int scene);

#define EXT_SPK_MODE_OFF	11
#define EXT_SPK_MODE_INVARIABLE	12
#define FSM_POS_DEV_0		0x3
#define FSM_POS_DEV_1		0xc
/* modes the FourSemi preset supports: Music Voice Voip Bypass Mmi Receiver */
#define FSM_MODE_SUPPORTED(m)	((m) < 11 && ((0x4c7 >> (m)) & 1))

static char *aw_profile[] = { "Music", "Voice", "Voip", "Ringtone",
	"Ringtone_hs", "Lowpower", "Bypass", "Mmi", "Fm", "Notification",
	"Receiver", "Off" };

/* ext-spk mode -> FourSemi scene, per amplifier (stock tables) */
static const int fsm_dev_0_scene[11] = {
	[0] = 0x0, [1] = 0x1, [2] = 0x2, [6] = 0xe, [7] = 0xd, [10] = 0xf,
};
static const int fsm_dev_1_scene[11] = {
	[0] = 0x0, [1] = 0x1, [2] = 0x2, [6] = 0x8, [7] = 0x7, [10] = 0xf,
};

static unsigned int g_wcd937x_aux_ext_spk_mode = EXT_SPK_MODE_OFF;
static unsigned int g_wcd937x_ear_ext_spk_mode = EXT_SPK_MODE_OFF;

static int aw87xxx_dev_0_pa(unsigned int mode)
{
	int ret;

	pr_info("%s: aw87xxx_dev_0_mode %d\n", __func__, mode);
	ret = aw87xxx_set_profile(0, aw_profile[mode]);
	if (ret < 0)
		pr_err("%s: mode:%d set failed\n", __func__, mode);
	return ret;
}

static int aw87xxx_dev_1_pa(unsigned int mode)
{
	int ret;

	pr_info("%s: aw87xxx_dev_1_mode %d\n", __func__, mode);
	ret = aw87xxx_set_profile(1, aw_profile[mode]);
	if (ret < 0)
		pr_err("%s: mode:%d set failed\n", __func__, mode);
	return ret;
}

static int fsm_dev_0_pa(bool on, unsigned int mode)
{
	if (!FSM_MODE_SUPPORTED(mode))
		pr_err("%s: unsupported %d\n", __func__, mode);
	if (!FSM_MODE_SUPPORTED(mode) ||
	    fsm_amp_set_scene(FSM_POS_DEV_0, fsm_dev_0_scene[mode]) < 0)
		pr_err("%s: mode:%d set failed\n", __func__, mode);
	return fsm_amp_switch(FSM_POS_DEV_0, on && mode != EXT_SPK_MODE_OFF);
}

static int fsm_dev_1_pa(bool on, unsigned int mode)
{
	if (!FSM_MODE_SUPPORTED(mode))
		pr_err("%s: unsupported %d\n", __func__, mode);
	else if (fsm_amp_set_scene(FSM_POS_DEV_1, fsm_dev_1_scene[mode]) < 0)
		pr_err("%s: mode:%d set failed\n", __func__, mode);
	return fsm_amp_switch(FSM_POS_DEV_1, on && mode != EXT_SPK_MODE_OFF);
}

static int aux_ext_spk_event(struct snd_soc_dapm_widget *w,
			     struct snd_kcontrol *kcontrol, int event)
{
	unsigned int mode = g_wcd937x_aux_ext_spk_mode;
	int ret;

	switch (event) {
	case SND_SOC_DAPM_POST_PMU:
		pr_err("%s: power on event %d\n", __func__, event);
		if (aw87xxx_dev_0_pa(mode) == 0)
			return 0;
		return fsm_dev_0_pa(true, mode);
	case SND_SOC_DAPM_PRE_PMD:
		pr_err("%s: power off event %d\n", __func__, event);
		if (aw87xxx_dev_0_pa(EXT_SPK_MODE_OFF) == 0)
			ret = 0;
		else
			ret = fsm_dev_0_pa(false, mode);
		g_wcd937x_aux_ext_spk_mode = EXT_SPK_MODE_OFF;
		return ret;
	default:
		pr_err("%s: invalid DAPM event %d\n", __func__, event);
		return -EINVAL;
	}
}

static int ear_ext_spk_event(struct snd_soc_dapm_widget *w,
			     struct snd_kcontrol *kcontrol, int event)
{
	unsigned int mode = g_wcd937x_ear_ext_spk_mode;
	int ret;

	switch (event) {
	case SND_SOC_DAPM_POST_PMU:
		pr_err("%s: power on event %d\n", __func__, event);
		if (aw87xxx_dev_1_pa(mode) == 0)
			return 0;
		return fsm_dev_1_pa(true, mode);
	case SND_SOC_DAPM_PRE_PMD:
		pr_err("%s: power off event %d\n", __func__, event);
		if (aw87xxx_dev_1_pa(EXT_SPK_MODE_OFF) == 0)
			ret = 0;
		else
			ret = fsm_dev_1_pa(false, mode);
		g_wcd937x_ear_ext_spk_mode = EXT_SPK_MODE_OFF;
		return ret;
	default:
		pr_err("%s: invalid DAPM event %d\n", __func__, event);
		return -EINVAL;
	}
}

static int wcd937x_aux_ext_spk_mode_get(struct snd_kcontrol *kcontrol,
					struct snd_ctl_elem_value *ucontrol)
{
	ucontrol->value.integer.value[0] = g_wcd937x_aux_ext_spk_mode;
	return 0;
}

static int wcd937x_aux_ext_spk_mode_set(struct snd_kcontrol *kcontrol,
					struct snd_ctl_elem_value *ucontrol)
{
	unsigned int mode = ucontrol->value.integer.value[0];
	int ret = 0;

	if (mode == EXT_SPK_MODE_INVARIABLE)
		return 0;
	if (mode > EXT_SPK_MODE_INVARIABLE) {
		pr_err("%s: Invalid set mode:%d\n", __func__, mode);
		return -EINVAL;
	}
	/* amplifier already running with another mode: switch it live */
	if (g_wcd937x_aux_ext_spk_mode != EXT_SPK_MODE_OFF &&
	    g_wcd937x_aux_ext_spk_mode != mode) {
		pr_err("%s: force update mode:%d\n", __func__, mode);
		ret = aw87xxx_dev_0_pa(mode);
		if (ret != 0)
			ret = fsm_dev_0_pa(true, mode);
	}
	g_wcd937x_aux_ext_spk_mode = mode;
	return ret;
}

static int wcd937x_ear_ext_spk_mode_get(struct snd_kcontrol *kcontrol,
					struct snd_ctl_elem_value *ucontrol)
{
	ucontrol->value.integer.value[0] = g_wcd937x_ear_ext_spk_mode;
	return 0;
}

static int wcd937x_ear_ext_spk_mode_set(struct snd_kcontrol *kcontrol,
					struct snd_ctl_elem_value *ucontrol)
{
	unsigned int mode = ucontrol->value.integer.value[0];
	int ret = 0;

	if (mode == EXT_SPK_MODE_INVARIABLE)
		return 0;
	if (mode > EXT_SPK_MODE_INVARIABLE) {
		pr_err("%s: Invalid set mode:%d\n", __func__, mode);
		return -EINVAL;
	}
	if (g_wcd937x_ear_ext_spk_mode != EXT_SPK_MODE_OFF &&
	    g_wcd937x_ear_ext_spk_mode != mode) {
		pr_err("%s: force update mode:%d\n", __func__, mode);
		ret = aw87xxx_dev_1_pa(mode);
		if (ret != 0)
			ret = fsm_dev_1_pa(true, mode);
	}
	g_wcd937x_ear_ext_spk_mode = mode;
	return ret;
}

/* AUX path: HP_MODE / NORMAL_MODE */
static int wcd937x_aux_path_mode_get(struct snd_kcontrol *kcontrol,
				     struct snd_ctl_elem_value *ucontrol)
{
	struct snd_soc_component *component = snd_soc_kcontrol_component(kcontrol);

	ucontrol->value.integer.value[0] =
		(snd_soc_component_read(component, WCD937X_DIGITAL_CDC_PATH_MODE) >> 6) & 1;
	return 0;
}

static int wcd937x_aux_path_mode_put(struct snd_kcontrol *kcontrol,
				     struct snd_ctl_elem_value *ucontrol)
{
	struct snd_soc_component *component = snd_soc_kcontrol_component(kcontrol);
	bool normal = ucontrol->value.integer.value[0] != 0;

	snd_soc_component_update_bits(component, WCD937X_DIGITAL_CDC_PATH_MODE,
				      0x40, normal << 6);
	snd_soc_component_update_bits(component, WCD937X_AUX_AUXPA,
				      0x10, normal << 4);
	return 0;
}

static const char * const wcd937x_ext_spk_mode_function[] = { "Music",
	"Voice", "Voip", "Ringtone", "Ringtone_hs", "Lowpower", "Bypass", "Mmi",
	"Fm", "Notification", "Receiver", "Off", "Invariable" };
static SOC_ENUM_SINGLE_EXT_DECL(wcd937x_ext_spk_mode_enum,
				wcd937x_ext_spk_mode_function);

static const char * const wcd937x_aux_path_mode_text[] = {
	"HP_MODE", "NORMAL_MODE" };
static SOC_ENUM_SINGLE_EXT_DECL(wcd937x_aux_path_mode_enum,
				wcd937x_aux_path_mode_text);
#endif /* CONFIG_SND_SOC_AW87XXX || CONFIG_SND_SOC_FS1815 */

'''
cut('#ifdef CONFIG_SND_SOC_AW87XXX\nextern int aw87xxx_set_profile(int dev_index, char *profile);',
    '#endif /* CONFIG_SND_SOC_FS1815 */\n', SAPPHIRE_GLUE)

# 3) mixer controls: replace topaz control with the three sapphire controls
rep('''#ifdef CONFIG_SND_SOC_AW87XXX
	SOC_ENUM_EXT("wcd937x_aw87xxx_dev0_mode",wcd937x_aw87xxx_mode ,
			wcd937x_aw87xxx_dev0_mode_get, wcd937x_aw87xxx_dev0_mode_set),
#endif /* CONFIG_SND_SOC_AW87XXX */
''', '''#if defined(CONFIG_SND_SOC_AW87XXX) || defined(CONFIG_SND_SOC_FS1815)
	SOC_ENUM_EXT("AUX EXT SPK MODE", wcd937x_ext_spk_mode_enum,
		wcd937x_aux_ext_spk_mode_get, wcd937x_aux_ext_spk_mode_set),
	SOC_ENUM_EXT("EAR EXT SPK MODE", wcd937x_ext_spk_mode_enum,
		wcd937x_ear_ext_spk_mode_get, wcd937x_ear_ext_spk_mode_set),
	SOC_ENUM_EXT("AUX PATH Mode", wcd937x_aux_path_mode_enum,
		wcd937x_aux_path_mode_get, wcd937x_aux_path_mode_put),
#endif
''')

# 4) DAPM widgets
cut('#ifdef CONFIG_SND_SOC_AW87XXX\n\tSND_SOC_DAPM_OUT_DRV_E("AW87XXX_DEV_0"',
    '#endif /* CONFIG_SND_SOC_FS1815 */\n', '''#if defined(CONFIG_SND_SOC_AW87XXX) || defined(CONFIG_SND_SOC_FS1815)
	SND_SOC_DAPM_OUT_DRV_E("AUX EXT SPK", SND_SOC_NOPM, 0, 0, NULL, 0,
				aux_ext_spk_event, SND_SOC_DAPM_POST_PMU |
				SND_SOC_DAPM_PRE_PMD),
	SND_SOC_DAPM_OUT_DRV_E("EAR EXT SPK", SND_SOC_NOPM, 0, 0, NULL, 0,
				ear_ext_spk_event, SND_SOC_DAPM_POST_PMU |
				SND_SOC_DAPM_PRE_PMD),
#endif
''')

# 5) DAPM routes: AUX PGA -> AUX EXT SPK -> AUX, EAR PGA -> EAR EXT SPK -> EAR
cut('#if defined(CONFIG_SND_SOC_AW87XXX) || defined(CONFIG_SND_SOC_SIPA) || defined(CONFIG_SND_SOC_FS1815)\n#if defined(CONFIG_SND_SOC_AW87XXX)\n\t{"AW87XXX_DEV_0", NULL, "AUX PGA"},',
    '#else\n\t{"AUX", NULL, "AUX PGA"},\n#endif\n', '''#if defined(CONFIG_SND_SOC_AW87XXX) || defined(CONFIG_SND_SOC_FS1815)
	{"AUX EXT SPK", NULL, "AUX PGA"},
	{"AUX", NULL, "AUX EXT SPK"},
#else
	{"AUX", NULL, "AUX PGA"},
#endif
''')
rep('\t{"EAR", NULL, "EAR PGA"},\n', '''#if defined(CONFIG_SND_SOC_AW87XXX) || defined(CONFIG_SND_SOC_FS1815)
	{"EAR EXT SPK", NULL, "EAR PGA"},
	{"EAR", NULL, "EAR EXT SPK"},
#else
	{"EAR", NULL, "EAR PGA"},
#endif
''')

open(P, 'w').write(s)
left = [x for x in ('AW87XXX_DEV_0', 'FS1815_DEV_0', 'SIA81XX', 'wcd937x_aw87xxx_dev0_mode') if x in s]
print('wcd937x sapphire glue applied; leftovers:', left)
