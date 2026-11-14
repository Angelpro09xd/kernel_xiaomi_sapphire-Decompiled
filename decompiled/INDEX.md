# Módulos de stock de sapphire decompilados (Ghidra)

Fuente: Lunaris 3.13 = vendor_dlkm / vendor_boot de stock (OS2.0.210). Cada `.c` contiene: todas las cadenas del módulo y el pseudocódigo C de cada función, con los textos de `printk` incrustados.

| módulo | funciones | autor / descripción | compatibles DT | propiedades DT leídas | parámetros |
|---|---|---|---|---|---|
| [auth_battery](auth_battery.c) | 8 | auth battery driver |  |  |  |
| [aw87xxx_dlkm](aw87xxx_dlkm.c) | 110 | <zhaozhongbo@awinic.com> / awinic aw87xxx pa driver |  | aw-voltage-min, dev_index, esd-enable, reset-gpio |  |
| [battery_auth_class](battery_auth_class.c) | 14 |  |  |  |  |
| [binder_gki](binder_gki.c) | 9 |  |  |  |  |
| [binder_prio](binder_prio.c) | 4 |  |  |  |  |
| [bootinfo](bootinfo.c) | 7 |  |  |  | pdreason, pureason |
| [bq25960_charger](bq25960_charger.c) | 23 | South Chip <Aiden-yu@southchip.com> / TI BQ25960 Driver |  | bq25960,intr_gpio, charger_name |  |
| [bt_fm_slim](bt_fm_slim.c) | 33 | BTFM Slimbus Slave driver |  |  |  |
| [camera](camera.c) | 1172 | Camera Request Manager | qcom,actuator, qcom,cam-req-mgr, qcom,cam-res-mgr, qcom,cam-sensor, qcom,camera-flash, qcom,cci | actuator-src, arch-compat, bus-width-factor, cam-ahb-num-cases, cam_hw_fuse, camera-bus-nodes, camnoc-axi-min-ib-bw, camnoc-bus-width, camnoc-max-needed, cci-clk-src … | csiphy_dump, cam_min_camnoc_ib_bw, cpas_dump, g_num_pf_handled, cam_debug_ctx_req_list, debug_mdl |
| [cp_qc30](cp_qc30.c) | 20 | Fei Jiang<jiangfei1@xiaomi.com> / Xiaomi cp qc30 |  | mi,cp-sec-enable, mi,qc3-bat-curr-max, mi,qc3-bat-volt-max, mi,qc3-bus-curr-max | debug_mask |
| [ds28e30_verify](ds28e30_verify.c) | 161 |  |  | auth_name |  |
| [focaltech_ts_i2c](focaltech_ts_i2c.c) | 209 | FocalTech Driver Team / FocalTech Touchscreen Driver | focaltech,fts | focaltech,display-coords, focaltech,have-key, focaltech,key-number, focaltech,max-touch-number, panel |  |
| [fs1815_dlkm](fs1815_dlkm.c) | 129 | FourSemi SW <support@foursemi.com> / FourSemi Smart PA Driver | foursemi,fs16xx, foursemi,fs1815 | fsm,dummy-addr, fsm,rst-gpio |  |
| [icnss2](icnss2.c) | 207 | iWCN CORE platform driver | qcom,icnss, qcom,wcn6450, qcom,wcn6750 | bdf-download-support, ddr_device_type, dma-coherent, qcom,fw-prefix, qcom,iommu-dma, qcom,iommu-geometry, qcom,is_low_power, qcom,is_slate_rfa, qcom,psf-supported, qcom,smp2p-early-crash-ind … |  |
| [lct_audio_info_dlkm](lct_audio_info_dlkm.c) | 5 | <lct@longcheer.com> / lct audio pa info driver |  |  |  |
| [lct_tp](lct_tp.c) | 39 | Touchpad Information Driver |  |  |  |
| [machine_dlkm](machine_dlkm.c) | 43 | ALSA SoC msm | qcom,bengal-asoc-snd, qcom,bengal-asoc-snd-stub | asoc-codec, asoc-codec-names, fsa4480-i2c-handle, qcom,audio-routing, qcom,cdc-dmic01-gpios, qcom,cdc-dmic23-gpios, qcom,hph-en0-gpio, qcom,hph-en1-gpio, qcom,mbhc-audio-jack-type, qcom,model … |  |
| [mbhc_dlkm](mbhc_dlkm.c) | 39 | wcd MBHC v2 module |  | fsa4480-i2c-handle, qcom,msm-mbhc-usbc-audio-supported |  |
| [mi_memory](mi_memory.c) | 30 | Venco <duwenchao@xiaomi.com> / Interface for xiaomi memory |  | ddr_device_type, ddr_manufacturer_id, ddr_size |  |
| [mi_thermal_interface](mi_thermal_interface.c) | 49 | Xiaomi thermal team / Xiaomi thermal control  interface |  | board-sensor, panel, thermal-message, thermal-screen |  |
| [mi_wmark](mi_wmark.c) | 4 | zhouwenhao / A moudle to adjust kswapd watermark. |  |  |  |
| [miev](miev.c) | 21 | huangqibo <huangqibo@xiaomi.com> / exception log transfer. |  |  |  |
| [millet_binder](millet_binder.c) | 11 |  |  |  |  |
| [millet_core](millet_core.c) | 14 |  |  |  | millet_freeze_switch, binder_warn_ahead_space, frozen_uid_min, millet_debug |
| [millet_hs](millet_hs.c) | 5 |  |  |  |  |
| [millet_oem_cgroup](millet_oem_cgroup.c) | 4 |  |  |  |  |
| [millet_pkg](millet_pkg.c) | 10 |  |  |  |  |
| [millet_sig](millet_sig.c) | 4 |  |  |  |  |
| [msm_drm](msm_drm.c) | 2859 | Rob Clark <robdclark@gmail.com / MSM DRM Driver | qcom,mdp4, qcom,mdss, qcom,sde-kms, qcom,smmu_sde_nrt_sec, qcom,smmu_sde_nrt_unsec, qcom,smmu_sde_sec | cache-controller, cell-index, clock-names, connectors, ddr_device_type, disp_rdump_region, frame-threshold-time-us, gdsc-mdss-supply, iommus, label … | debugpolicy, cell_id, sec_oled_wp, oled_wp, modeset, dumpstate |
| [nxp_nci](nxp_nci.c) | 45 | NXP NFC I2C driver | qcom,sn-nci | qcom,clk-src, qcom,sn-clkreq, qcom,sn-firm, qcom,sn-irq, qcom,sn-szone, qcom,sn-vdd-1p8-current, qcom,sn-vdd-1p8-supply, qcom,sn-vdd-1p8-voltage, qcom,sn-ven |  |
| [panel_event_notifier](panel_event_notifier.c) | 5 | Qualcomm Technologies, Inc. Panel event notifier |  |  |  |
| [pd_policy_manager](pd_policy_manager.c) | 16 | USB Power Delivery Policy Driver |  | mi,cp-sec-enable, mi,pd-bat-curr-max, mi,pd-bat-volt-max, mi,pd-bus-curr-max | stable_tune_step, fast_tune_step, stable_work_time, fast_work_time |
| [perf_helper](perf_helper.c) | 16 |  |  |  |  |
| [qpnp_smb5_main](qpnp_smb5_main.c) | 370 | QPNP SMB5 Charger Driver |  | dpdm-supply, interrupt-names, io-channel-names, mi,support-ffc, mi,use_third_cp, qcom,adc-based-aicl, qcom,batt-age-level, qcom,batt-id-kohm, qcom,batt-id-range-pct, qcom,battery-data … |  |
| [qti_battery_charger](qti_battery_charger.c) | 52 | QTI Glink battery charger driver |  | qcom,display-panels, qcom,shutdown-voltage, qcom,thermal-mitigation, qcom,wireless-fw-name |  |
| [sc8541_charger](sc8541_charger.c) | 22 | South Chip <Aiden-yu@southchip.com> / SC SC8541 Driver |  | charger_name, sc8541,intr_gpio |  |
| [slg_verify](slg_verify.c) | 69 |  |  | auth_name |  |
| [stick_verify](stick_verify.c) | 164 | STMicroelectronics / STICK ST1Wire driver | st,stick | auth_name | testnr |
| [stm_nfc_i2c](stm_nfc_i2c.c) | 26 | STMicroelectronics / NFC ST21NFC driver | st,st21nfc |  |  |
| [swinfo](swinfo.c) | 3 | chenxinyuanchen@xiaomi.com |  |  | fingerprint |
| [ufs_qcom](ufs_qcom.c) | 645 | Santosh Yaragnavi <santosh.sy@samsung.com> / UFS host controller Platform bus based glue driver | qcom,ufshc | alg-name, bypass-g4-cfgready, clock-names, cpu-ufs, freq-table-hz, limit-rate, limit-rx-hs-gear, limit-rx-pwm-gear, limit-tx-hs-gear, mask … | ber_duration_ms, The default value is 3600000(1 hour), ber_threshold, The default value is 3 for G5 and 0 for Non G5., crash_on_ber |
| [usbpd](usbpd.c) | 139 | USB Power Delivery Policy Engine |  | mi,non-qcom-pps-ctrl | pd_vbus_ctrl, min_sink_current |
| [wcd937x_dlkm](wcd937x_dlkm.c) | 112 | WCD937X Codec driver |  | qcom,cdc-micbias1-mv, qcom,cdc-micbias2-mv, qcom,cdc-micbias3-mv, qcom,rx-slave, qcom,swr-tx-port-params, qcom,tx-slave, qcom,wcd-rst-gpio-node |  |
| [xiaomi_fp](xiaomi_fp.c) | 26 | xiaomi / xiaomi Fingerprint driver | xiaomi,xiaomi-fp | fingerprint-screen, netlink-event, panel, xiaomi,gpio_irq |  |
| [xiaomi_touch_game](xiaomi_touch_game.c) | 24 | TP touch game driver |  | touch,name |  |
| [xm_smart_chg](xm_smart_chg.c) | 37 | XM SMART CHARGE Driver | xiaomi,xm_smart_chg | charger-screen, label, panel, xiaomi,pd-thermal-mitigation, xiaomi,pd-thermal-mitigation-fast |  |
