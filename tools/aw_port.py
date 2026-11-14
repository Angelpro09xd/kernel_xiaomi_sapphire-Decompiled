import shutil, glob, os
N='/home/angel/sapphire/srcpool/aw/moto6375/techpack/audio/asoc/codecs/aw87xxx'
T='/home/angel/sapphire/ws/vendor/qcom/opensource/audio-kernel/asoc/codecs/aw87xxx'
for f in glob.glob(N+'/*.[ch]'): shutil.copy(f, T+'/'+os.path.basename(f))
P=T+'/aw87xxx.c'
def patch(old,new):
    s=open(P).read()
    if s.count(old)!=1: raise SystemExit(f'ANCHOR MISMATCH: {old[:70]!r} x{s.count(old)}')
    open(P,'w').write(s.replace(old,new))
# --- profile index helpers (Xiaomi, exported; reconstructed from stock aw87xxx_dlkm.ko)
patch('''	AW_LOGE("not found struct aw87xxx, dev_index = [%d]", dev_index);
	return NULL;
}
EXPORT_SYMBOL(aw87xxx_show_current_profile);
''','''	AW_LOGE("not found struct aw87xxx, dev_index = [%d]", dev_index);
	return NULL;
}
EXPORT_SYMBOL(aw87xxx_show_current_profile);

/* sapphire: profile name -> index used by the Xiaomi audio HAL */
int aw87xxx_get_prof_index(const char *profile)
{
	static const char * const names[] = {
		"Music", "Voice", "Voip", "Ringtone", "Ringtone_hs", "Lowpower",
		"Bypass", "Mmi", "Fm", "Notification", "Receiver", "Off",
	};
	int i;

	for (i = 0; i < ARRAY_SIZE(names); i++)
		if (!strncmp(profile, names[i], AW_PROFILE_STR_MAX))
			return i;
	return ARRAY_SIZE(names);	/* unknown */
}
EXPORT_SYMBOL(aw87xxx_get_prof_index);

int aw87xxx_show_current_profile_index(int dev_index)
{
	struct list_head *pos = NULL;
	struct aw87xxx *aw87xxx = NULL;
	char *profile = NULL;

	list_for_each(pos, &g_aw87xxx_list) {
		aw87xxx = list_entry(pos, struct aw87xxx, list);
		if (aw87xxx == NULL) {
			AW_LOGE("struct aw87xxx not ready");
			return 11;	/* "Off" */
		}
		if (aw87xxx->dev_index == dev_index) {
			AW_DEV_LOGI(aw87xxx->dev, "current profile is [%s]",
				aw87xxx->current_profile);
			profile = aw87xxx->current_profile;
		}
	}
	if (profile == NULL)
		return 11;	/* "Off" */
	return aw87xxx_get_prof_index(profile);
}
EXPORT_SYMBOL(aw87xxx_show_current_profile_index);
''')
# --- dual-sourced PA arbitration with FourSemi fs1815
patch('''static int aw87xxx_i2c_probe(struct i2c_client *client,
				const struct i2c_device_id *id)
{''','''/*
 * sapphire ships either a FourSemi fs1815 or an Awinic aw87xxx speaker PA.
 * Wait (EPROBE_DEFER, up to 500 tries) until fs1815 has finished probing;
 * if fs1815 is fitted, step aside. Reconstructed from stock aw87xxx_dlkm.ko.
 */
extern int get_fsm_probe_complete_flag(void);
extern int lct_audio_info_set_pa_name(const char *name, int len);
static int aw87xxx_i2c_probe_cnt;

static int aw87xxx_i2c_probe(struct i2c_client *client,
				const struct i2c_device_id *id)
{''')
patch('''	struct aw87xxx *aw87xxx = NULL;
	int ret = -1;

	if (!i2c_check_functionality(client->adapter, I2C_FUNC_I2C)) {''','''	struct aw87xxx *aw87xxx = NULL;
	char pa_name[32] = { 0 };
	int ret = -1;

	ret = get_fsm_probe_complete_flag();
	aw87xxx_i2c_probe_cnt++;
	if (ret == 0 && aw87xxx_i2c_probe_cnt <= 500)
		return -EPROBE_DEFER;
	AW_DEV_LOGI(&client->dev, "aw87xxx_i2c_probe_cnt = %d", aw87xxx_i2c_probe_cnt);
	if (ret == 1) {
		AW_DEV_LOGE(&client->dev, "fs1815 probe success, aw87xxx always fail");
		return -ENODEV;
	}

	if (!i2c_check_functionality(client->adapter, I2C_FUNC_I2C)) {''')
patch('''	AW_DEV_LOGI(aw87xxx->dev, "succeed, dev_index=[%d], g_aw87xxx_dev_cnt= [%d]",''','''	snprintf(pa_name, sizeof(pa_name), "%s-AW-", dev_name(&client->dev));
	lct_audio_info_set_pa_name(pa_name, strlen(pa_name));

	AW_DEV_LOGI(aw87xxx->dev, "succeed, dev_index=[%d], g_aw87xxx_dev_cnt= [%d]",''')
s=open(P).read()
print('AW_PROFILE_STR_MAX' in open(T+'/aw87xxx.h').read() or 'AW_PROFILE_STR_MAX' in s, 'profile str max defined?')
