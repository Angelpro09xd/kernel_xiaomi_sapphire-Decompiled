import os, re, shutil, subprocess
N='/home/angel/sapphire/srcpool/fsm/moto612/sound/soc/codecs/fs1815'
T='/home/angel/sapphire/ws/vendor/qcom/opensource/audio-kernel/asoc/codecs/fs1815'
for f in ['fs1815.c','fsm-dev.h','fsm_core.c','fsm_firmware.c','fsm_i2c.c','fsm_misc.c','fsm_public.h','fsm_sysfs.c']:
    shutil.copy(f'{N}/{f}', f'{T}/{f}')
def patch(path, old, new, count=1):
    s=open(path).read()
    if s.count(old)!=count: raise SystemExit(f'ANCHOR MISMATCH in {path}: {old[:60]!r} found {s.count(old)}')
    open(path,'w').write(s.replace(old,new))
# --- Kbuild: new fsm_sysfs.o object
patch(f'{T}/Kbuild','	FS1815_OBJS += fsm_misc.o\n','	FS1815_OBJS += fsm_misc.o\n	FS1815_OBJS += fsm_sysfs.o\n')
I=f'{T}/fsm_i2c.c'
# --- drop MediaTek glue
patch(I,'#include <mtk-sp-spk-amp.h>\n','')
patch(I,'#ifdef CONFIG_SND_SOC_BOGOTA_MULTI_AUDIO_PA\n\taudiopa_set_type(AUDIOPA_FS1815);\n#endif\n','')
# --- Xiaomi: probe-complete flag consumed by aw87xxx (dual-sourced PA)
patch(I,'static int fsm_i2c_probe(struct i2c_client *i2c)\n{',
'''/*
 * sapphire: the speaker amplifier is dual-sourced (FourSemi fs1815 or
 * Awinic aw87xxx). aw87xxx checks this flag to know whether the FourSemi
 * part answered. 0 = not probed yet, 1 = probed OK, <0 = probe error.
 * Reconstructed from the stock fs1815_dlkm.ko.
 */
static int g_probe_complete_flag;

int get_fsm_probe_complete_flag(void)
{
	return g_probe_complete_flag;
}
EXPORT_SYMBOL(get_fsm_probe_complete_flag);

extern void lct_audio_info_set_pa_name(const char *name, int len);

/* stock reads the chip id once before touching the reset gpio; the
 * part answers on its own address or on the 0x34 default address */
static int fsm_i2c_check_chipid(fsm_dev_t *fsm_dev)
{
	struct i2c_client *i2c = fsm_dev->i2c;
	uint16_t addr = i2c->addr;
	uint16_t id = 0;
	int ret;

	fsm_mutex_lock();
	ret = fsm_reg_read(fsm_dev, 0x01, &id);
	if (ret && addr != 0x34) {
		i2c->addr = 0x34;
		ret = fsm_reg_read(fsm_dev, 0x01, &id);
	}
	if (!ret)
		dev_info(&i2c->dev, "read chipid success: 0x%x", id);
	i2c->addr = addr;
	fsm_mutex_unlock();

	return ret;
}

static int fsm_i2c_probe(struct i2c_client *i2c)
{''')
patch(I,'''	pr_debug("enter");
	if (!i2c_check_functionality(i2c->adapter, I2C_FUNC_I2C)) {
		dev_err(&i2c->dev, "check I2C_FUNC_I2C failed");
		return -EIO;
	}''','''	char pa_name[32] = { 0 };

	dev_info(&i2c->dev, "probe start!");
	if (!i2c_check_functionality(i2c->adapter, I2C_FUNC_I2C)) {
		dev_err(&i2c->dev, "check I2C_FUNC_I2C failed");
		g_probe_complete_flag = -EIO;
		return -EIO;
	}''')
patch(I,'''	if (fsm_dev == NULL) {
		dev_err(&i2c->dev, "alloc memory fialed");
		return -ENOMEM;
	}

	memset(fsm_dev, 0, sizeof(struct fsm_dev));
	mutex_init(&fsm_dev->i2c_lock);
	fsm_dev->i2c = i2c;
''','''	if (fsm_dev == NULL) {
		dev_err(&i2c->dev, "alloc memory fialed");
		g_probe_complete_flag = -ENOMEM;
		return -ENOMEM;
	}

	memset(fsm_dev, 0, sizeof(struct fsm_dev));
	mutex_init(&fsm_dev->i2c_lock);
	fsm_dev->i2c = i2c;

	ret = fsm_i2c_check_chipid(fsm_dev);
	if (ret) {
		devm_kfree(&i2c->dev, fsm_dev);
		dev_err(&i2c->dev, "failed to check chip_id");
		g_probe_complete_flag = ret;
		return ret;
	}
''')
patch(I,'''		dev_err(&i2c->dev, "failed to parse DTS node");
		devm_kfree(&i2c->dev, fsm_dev);
		return ret;''','''		dev_err(&i2c->dev, "failed to parse DTS node");
		devm_kfree(&i2c->dev, fsm_dev);
		g_probe_complete_flag = ret;
		return ret;''')
patch(I,'''		devm_kfree(&i2c->dev, fsm_dev);
		return ret;
	}
	fsm_dev->id = cfg->dev_count - 1;''','''		devm_kfree(&i2c->dev, fsm_dev);
		g_probe_complete_flag = ret;
		return ret;
	}
	fsm_dev->id = cfg->dev_count - 1;''')
patch(I,'''	dev_info(&i2c->dev, "i2c probe completed");

	return 0;''','''	/* report the fitted PA to lct_audio_info ("<dev>-FSM-") */
	snprintf(pa_name, sizeof(pa_name), "%s-FSM-", dev_name(&i2c->dev));
	lct_audio_info_set_pa_name(pa_name, strlen(pa_name));
	dev_info(&i2c->dev, "i2c probe completed");
	g_probe_complete_flag = 1;

	return 0;''')
# --- Xiaomi: idempotent speaker on/off
C=f'{T}/fsm_core.c'
patch(C,'''	pr_info("scene: %04X", cfg->next_scene);
	fsm_mutex_lock();
	cfg->stream_muted = false;
	ret = fsm_try_init();''','''	pr_info("scene: %04X", cfg->next_scene);
	fsm_mutex_lock();
	if (cfg->speaker_on) {
		pr_info("no need to spk on twice");
		fsm_mutex_unlock();
		return;
	}
	cfg->stream_muted = false;
	ret = fsm_try_init();''')
src=open(C).read()
m=re.search(r'void fsm_speaker_off\(void\)\n\{.*?\n\}\n', src, re.S); print(m.group(0))
