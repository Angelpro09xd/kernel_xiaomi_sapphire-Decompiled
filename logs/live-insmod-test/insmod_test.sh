#!/system/bin/sh
# Load our rebuilt modules one by one on the running (stock) kernel and mark
# every step in the kernel log, so a crash can be pinned to one module.
cd /tmp/ours || exit 1
for m in audio_prm_dlkm.ko audpkt_ion_dlkm.ko bolero_cdc_dlkm.ko cnss_nl.ko cnss_prealloc.ko cnss_utils.ko gsim.ko lct_audio_info_dlkm.ko mbhc_dlkm.ko mmrm_test_module.ko msm_video.ko pinctrl_lpi_dlkm.ko q6_dlkm.ko qce50_dlkm.ko qcedev-mod_dlkm.ko qcrypto-msm_dlkm.ko radio-i2c-rtc6226-qca.ko rmnet_ctl.ko stub_dlkm.ko swr_dlkm.ko wcd937x_slave_dlkm.ko wcd9xxx_dlkm.ko wcd_core_dlkm.ko wlan_firmware_service.ko wsa881x_analog_dlkm.ko audio_pkt_dlkm.ko btpower.ko fs1815_dlkm.ko icnss2.ko rmnet_core.ko rmnet_wlan.ko swr_ctrl_dlkm.ko tx_macro_dlkm.ko va_macro_dlkm.ko aw87xxx_dlkm.ko bt_fm_slim.ko rx_macro_dlkm.ko wcd937x_dlkm.ko machine_dlkm.ko; do
	echo "OSSTEST: >>> insmod $m" > /dev/kmsg
	sync
	sleep 1
	out=$(insmod "/tmp/ours/$m" 2>&1)
	rc=$?
	echo "OSSTEST: <<< $m rc=$rc $out" > /dev/kmsg
	echo "$m rc=$rc $out"
	sleep 2
done
echo "OSSTEST: ALL DONE" > /dev/kmsg
echo ALL DONE
