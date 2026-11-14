A='/home/angel/sapphire/ws/vendor/qcom/opensource/audio-kernel'
def patch(path, old, new):
    s=open(path).read()
    if s.count(old)!=1: raise SystemExit(f'ANCHOR MISMATCH {path}: {old[:50]!r} x{s.count(old)}')
    open(path,'w').write(s.replace(old,new))
I=A+'/asoc/codecs/fs1815/fsm_i2c.c'
patch(I,'static void fsm_i2c_remove(struct i2c_client *i2c)','''#if (LINUX_VERSION_CODE < KERNEL_VERSION(6, 1, 0))
static int fsm_i2c_remove(struct i2c_client *i2c)
#else
static void fsm_i2c_remove(struct i2c_client *i2c)
#endif''')
s=open(I).read()
# make every bare "return;" inside fsm_i2c_remove return 0 on 5.15
start=s.index('static int fsm_i2c_remove(struct i2c_client *i2c)\n#else'); body_start=s.index('{',start); depth=0; i=body_start
while True:
    depth+={'{':1,'}':-1}.get(s[i],0); i+=1
    if depth==0: break
body=s[body_start:i]
nb=body.replace('\treturn;\n','''#if (LINUX_VERSION_CODE < KERNEL_VERSION(6, 1, 0))
	return 0;
#else
	return;
#endif
''')
if nb.rstrip().endswith('}') and 'return 0;' not in nb[-80:]:
    nb=nb[:nb.rstrip().rfind('}')]+'''#if (LINUX_VERSION_CODE < KERNEL_VERSION(6, 1, 0))
	return 0;
#endif
}'''
s=s[:body_start]+nb+s[i:]
s=s.replace('	.probe    = fsm_i2c_probe,\n','''#if (LINUX_VERSION_CODE < KERNEL_VERSION(6, 1, 0))
	.probe_new = fsm_i2c_probe,
#else
	.probe    = fsm_i2c_probe,
#endif
''',1)
s=s.replace('	return fsm_i2c_remove(i2c);\n','	fsm_i2c_remove(i2c);\n',1)
open(I,'w').write(s)
patch(A+'/asoc/bengal.c','extern void fsm_add_codec_controls(struct snd_soc_component *codec);','extern int fsm_add_codec_controls(struct snd_soc_component *codec);')
print(open(I).read()[s.index('static int fsm_i2c_remove'):s.index('static int fsm_i2c_remove')+900])
