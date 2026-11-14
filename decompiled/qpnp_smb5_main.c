/* Decompiled with Ghidra from qpnp-smb5-main.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.data] POWER_SUPPLY_SOC_DECIMAL=

// [.data] POWER_SUPPLY_SOC_DECIMAL_RATE=

// [.data] POWER_SUPPLY_QUICK_CHARGE_TYPE=

// [.data] POWER_SUPPLY_SHUTDOWN_DELAY=

// [.rodata] qcom_step_chg_init
// [.rodata] batt_verify
// [.rodata] qcom,step-chg-ranges
// [.rodata] qcom,jeita-fcc-scaling-temp-threshold
// [.rodata] 3QCOM-BATT: %s: Couldn't get pl charge type rc=%d

// [.rodata] chip_ok
// [.rodata] 3Couldn't initialize usb psy rc=%d

// [.rodata] 3Failed in getting charger status rc=%d

// [.rodata] sdam-sts
// [.rodata] usb_charger_status
// [.rodata] pm7250b_charger
// [.rodata] usb input current limit
// [.rodata] qcom,typec-legacy-rp-icl
// [.rodata] 3Failed to read type rc=%d

// [.rodata] 3Couldn't configue WD config rc=%d

// [.rodata] Couldn't configure charge inhibit threshold rc=%d

// [.rodata] Couldn't set hw jeita rc=%d

// [.rodata] Couldn't enable moisture detection interrupt rc=%d

// [.rodata] 3Couldn't get batt health rc=%d

// [.rodata] 3%s: %s: Couldn't get CP ILIM rc=%d

// [.rodata] smblib_vconn_regulator_enable
// [.rodata] 6%s: %s: re-running AICL

// [.rodata] 3%s: %s: Couldn't clear DCIN_EN_OVERRIDE_BIT rc=%d

// [.rodata] smblib_get_quick_charge_type
// [.rodata] 3%s: %s: Failed to read USBIN over vadc, rc=%d

// [.rodata] smblib_get_prop_usb_current_now
// [.rodata] 3%s: %s: Couldn't turn off SUSPEND_ON_COLLAPSE_USBIN_BIT rc=%d

// [.rodata] 6%s: %s: Requested PR_SWAP %d

// [.rodata] 3%s: %s: invalid allowed voltage [%d, %d]

// [.rodata] smblib_set_usb_pd_allowed_voltage
// [.rodata] smblib_handle_apsd_done
// [.rodata] smblib_src_lpd
// [.rodata] 6%s: %s: icl: %d mA

// [.rodata] 3%s: %s: Couldn't get smb1355 charger temp, rc=%d

// [.rodata] 6%s: %s: STATE_MACHINE_STS %x

// [.rodata] 3%s: %s: Couldn't find FV votable rc=%d

// [.rodata] qcom,batt-age-level
// [.rodata] handle_jeita_fcc_scaling
// [.rodata] 3QCOM-STEPCHG: %s: max-voltage_uv reading failed, rc=%d

// [.rodata] qcom,fastchg-current-ma
// [.rodata] 6QCOM-BATT: %s: terminating: parallel disabled

// [.rodata] 3QCOM-BATT: %s: Couldn't get MIN ICL threshold rc=%d

// [.rodata] Source attached (default current)
// [.rodata] battery_type
// [.rodata] 3QCOM-BATT: %s: g_blank_status =%d g_audio_cctog store =%d

// [.rodata] bat-ov
// [.rodata] usbin-ov
// [.rodata] aicl-done
// [.rodata] battery_parallel_disable
// [.rodata] qcom,fcc-stepping-enable
// [.rodata] qcom,hvdcp3-standalone-config
// [.rodata] Couldn't configure ADC_ITERM_CFG rc=%d

// [.rodata] Couldn't configure ITERM threshold HIGH rc=%d

// [.rodata] CHARGER_TYPE_VOTER
// [.rodata] 3%s: %s: %s: Couldn't read from 0x%04x rc=%d

// [.rodata] smblib_get_prop_input_suspend
// [.rodata] smblib_get_prop_input_current_limited
// [.rodata] smblib_get_prop_batt_iterm
// [.rodata] MAIN_CHG_VOTER
// [.rodata] 3%s: %s: Couldn't get fastcharge mode:%d

// [.rodata] 3%s: %s: Couldn't vote to %s CHG_EN rc=%d

// [.rodata] 3%s: %s: Couldn't increase pulse count rc=%d

// [.rodata] Couldn't get VOLTAGE_MAX, rc=%d

// [.rodata] 3%s: %s: Couldn't set DCIN_EN_OVERRIDE_BIT rc=%d

// [.rodata] 3%s: %s: Couldn't clear DCIN_CMD_PON_REG rc=%d

// [.rodata] 3%s: %s: Couldn't get usb presence status rc=%d

// [.rodata] 6%s: %s: restore type-c interrupts after exit power role locking

// [.rodata] disable
// [.rodata] 3%s: %s: Couldn't read CHANGE_STATUS_REG rc=%d

// [.rodata] QC2_UNSUPPORTED_VOTER
// [.rodata] 6%s: %s: APSD_STATUS = 0x%02x

// [.rodata] DETACH_DETECT_VOTER
// [.rodata] 6%s: %s: DCIN UV count: %d

// [.rodata] &chg->irq_status_lock
// [.rodata] smblib_init
// [.rodata] 3%s: %s: Couldn't enable dpdm regulator rc=%d

// [.rodata] 6%s: %s: TYPE_C_STATUS_1 = 0x%02x

// [.rodata] 6%s: %s: IRQ: usbin-plugin %s

// [.rodata] 3%s: %s: Couldn't write float charger options rc=%d

// [.rodata] smblib_set_dc_suspend
// [.rodata] 3SCHG-FLASH: %s: Couldn't configure SOC for flash disable rc=%d

// [.rodata] smb5_iio_get_prop
// [.rodata] 3QCOM-STEPCHG: %s: Couldn't read USB Present status, rc=%d

// [.rodata] is_input_present
// [.rodata] 3QCOM-BATT: %s: Couldn't create battery debugfs rc=%ld

// [.rodata] 6QCOM-BATT: %s: ILIM: vote: %d voter:%s min_ilim=%d fcc = %d

// [.rodata] charge_pump_master
// [.rodata] 3QCOM-BATT: %s: Couldn't get switcher enable status, rc=%d

// [.rodata] USB_C
// [.rodata] USB_FLOAT
// [.rodata] Powered cable w/o sink
// [.rodata] 3QCOM-BATT: %s: Couldn't get apdo_curr, rc=%d

// [.rodata] apdo_max_show
// [.rodata] shipmode_count_reset_store
// [.rodata] step-chg-soc-update-req
// [.rodata] otg-oc-disable-sw
// [.rodata] switcher-power-ok
// [.rodata] usbin-collapse
// [.rodata] usbin-src-change
// [.rodata] wdog-bark
// [.rodata] temp-change
// [.rodata] usb_pe_start
// [.rodata] usb_ctm_current_max
// [.rodata] usb_hw_current_max
// [.rodata] main_force_main_fcc
// [.rodata] qcom,chg-term-current-ma
// [.rodata] qcom,qc4-max-icl-ua
// [.rodata] smblib_get_prop_batt_charge_done
// [.rodata] 3%s: %s: Couldn't read TYPE_C_MODE_CFG_REG rc=%d

// [.rodata] smblib_get_prop_ship_mode
// [.rodata] Couldn't %s ship mode, rc=%d

// [.rodata] 3%s: %s: Failed to force mode, rc=%d

// [.rodata] 3%s: %s: Couldn't pet the dog rc=%d

// [.rodata] 3%s: %s: Unsupported mode %d

// [.rodata] smblib_request_dpdm
// [.rodata] 6%s: %s: disabling DPDM regulator

// [.rodata] set_sdp_current
// [.rodata] cycle_count
// [.rodata] 3%s: %s: set dpdm to continuous mode finished in dm pulse

// [.rodata] 3Couldn't vote ICL USB_PSY_VOTER rc=%d

// [.rodata] attached
// [.rodata] typec_sink_removal
// [.rodata] 3%s: %s: Couldn't configure Jeita %s cold threshold rc=%d

// [.rodata] 6pd hard reset, no need to raise vbus now

// [.rodata] 3qc_class_b charger is detected

// [.rodata] chg_termination_alarm_cb
// [.rodata] of_batterydata_read_soh_aged_profiles
// [.rodata] 3%s: Error in reading qcom,soh-range, rc=%d

// [.rodata] 6real_type=%d

// [.rodata] 3Failed to get USB preset status rc=%d

// [.rodata] voltage_ocv
// [.rodata] qcom,step-jeita-hysteresis
// [.rodata] read_range_data_from_node
// [.rodata] FCC_VOTER
// [.rodata] ICL_CHANGE_VOTER
// [.rodata] 3QCOM-BATT: %s: Couldn't read FCC step update status, rc=%d

// [.rodata] auth_authen_result
// [.rodata] USB_PD_DRP
// [.rodata] USB_HVDCP
// [.rodata] batt_manufacturer_show
// [.rodata] 3QCOM-BATT: %s: g_blank_status show =%d g_audio_cctog =%d

// [.rodata] step-chg-soc-update-fail
// [.rodata] main_toggle_stat
// [.rodata] 3qcom,auto-recharge-vbat-mv is incorrect

// [.rodata] qcom,step-charging-enable
// [.rodata] Couldn't disable periodic monitoring of CC_ID rc=%d

// [.rodata] Couldn't configure ADC_RECHARGE_THRESHOLD REG rc=%d

// [.rodata] Couldn't configure DRP role rc=%d

// [.rodata] 6SMB5 status - usb:present=%d type=%d batt:present = %d health = %d charge = %d

// [.rodata] 3%s: %s: Couldn't read TYPE_C_STATUS_4 rc=%d

// [.rodata] smblib_get_prop_batt_health
// [.rodata] 3VBAT_BASED_RECHG_BIT write %d

// [.rodata] 3%s: %s: smblib_dp_dm val=%d

// [.rodata] 3%s: %s: Couldn't write ADC config rc=%d

// [.rodata] 3%s: %s: Couldn't set typec power role rc=%d

// [.rodata] 3%s: %s: invalid max voltage %duV rc=%d

// [.rodata] smblib_get_prop_pd_active
// [.rodata] 3%s: %s: Couldn't get jeita cc delta rc=%d

// [.rodata] 6%s: %s: IRQ: %s

// [.rodata] smb5_batt_psy_changed_irq_handler
// [.rodata] smblib_update_usb_type
// [.rodata] dcin_icl_decrement
// [.rodata] qcom,jeita-soft-fcc-ua
// [.rodata] 3%s: %s: Couldn't read cc_soc prop, rc=%d

// [.rodata] 3%s: %s: Couldn't cancel moisture protection alarm

// [.rodata] 3%s: %s: Couldn't enable moisture detection and uUSB state change interrupt rc=%d

// [.rodata] 6%s: %s: rerunning DCIN AICL

// [.rodata] 3%s: %s: Couldn't find votable PL_DISABLE rc=%d

// [.rodata] 3%s: %s: Couldn't register psy notifier rc = %d

// [.rodata] qcom,batt-id-kohm
// [.rodata] 3QCOM-STEPCHG: %s: Failed to read jeita_enabled rc=%d

// [.rodata] qcom,jeita-fv-ranges
// [.rodata] 3QCOM-STEPCHG: %s: %s thresholds should be in ascendant ranges

// [.rodata] is_need_set_drp_to_sink
// [.rodata] pl_current_max
// [.rodata] 3QCOM-BATT: %s: Couldn't get fcc, exiting taper work

// [.rodata] 6QCOM-BATT: %s: master is fast charging; waiting for next taper

// [.rodata] CP_ILIM
// [.rodata] 3QCOM-BATT: %s: Invalid mode request %d

// [.rodata] 3QCOM-BATT: %s: Failed to read CP topology for mode=%d rc=%d

// [.rodata] resistance_id_show
// [.rodata] 3QCOM-BATT: %s: Failed to get sc_manufacturer rc=%d

// [.rodata] 3QCOM-BATT: %s: Failed to get auth secret id rc=%d

// [.rodata] quick_charge_type
// [.rodata] 3QCOM-BATT: %s: Couldn't get thermal ret=%d

// [.rodata] audio_cctog
// [.rodata] 3smb5_probe ++

// [.rodata] otg-oc-hiccup
// [.rodata] typec-attach-detach
// [.rodata] battery_charger_temp
// [.rodata] battery_recharge_soc
// [.rodata] qcom,wd-snarl-time-config
// [.rodata] qcom,disable-suspend-on-collapse
// [.rodata] 3Couldn't clear SDAM QC status rc=%d

// [.rodata] qcom,smb5-vbus
// [.rodata] smb5_batt_get_prop
// [.rodata] 3%s: %s: Couldn't get debug battery prop rc=%d

// [.rodata] 6%s: %s: enabling OTG

// [.rodata] 6%s: %s: POWER_PATH_STATUS = 0x%02x

// [.rodata] smblib_set_prop_sdp_current_max
// [.rodata] smblib_set_prop_typec_power_role
// [.rodata] smblib_set_prop_typec_select_rp
// [.rodata] 3%s: %s: Couldn't read QC2 max pulses rc=%d

// [.rodata] 3%s: %s: Couldn't set TYPE_C_INTERRUPT_EN_CFG_2_REG rc=%d

// [.rodata] 3%s: %s: Couldn't create votables rc=%d

// [.rodata] Failed to get channels, rc=%d

// [.rodata] cp_die_temp
// [.rodata] smblib_get_apsd_result
// [.rodata] 3%s: %s: Couldn't start SW thermal regulation WA, rc=%d

// [.rodata] 6%s: %s: IRQ: hvdcp-detect-done %s

// [.rodata] 3%s: %s: Power role %d not supported

// [.rodata] smblib_usbov_dbc_work
// [.rodata] 3%s: %s: Couldn't find USB_ICL votable rc=%d

// [.rodata] USB_LIMITED_IRQ_DISABLE
// [.rodata] schgm_flash_init
// [.rodata] 6%s: %s found

// [.rodata] 3QCOM-STEPCHG: %s: battery type unavailable, rc:%d

// [.rodata] handle_main_charge_type
// [.rodata] 6QCOM-BATT: %s: taper entry scheduling work

// [.rodata] cp_parallel_output_mode
// [.rodata] cp_switcher_en
// [.rodata] 3QCOM-BATT: %s: Couldn't set force recharge rc=%d

// [.rodata] 6QCOM-BATT: %s: get iio_chan_list_qg ...

// [.rodata] %d.%d

// [.rodata] Source attached (medium current)
// [.rodata] cp_bus_current
// [.rodata] sc_manufacturer
// [.rodata] 3QCOM-BATT: %s: third_cp_iio_init start

// [.rodata] usb_apsd_rerun
// [.rodata] main_temp_hot
// [.rodata] main_current_max
// [.rodata] qcom,suspend-input-on-debug-batt
// [.rodata] qcom,fcc-step-delay-ms
// [.rodata] Couldn't config AICL rc=%d

// [.rodata] Couldn't configure VBUS for SW control rc=%d

// [.rodata] force_dc_psy_update
// [.rodata] smblib_get_charge_param
// [.rodata] 6%s: %s: re-running APSD

// [.rodata] 3%s: %s: Couldn't write to CHGR_CFG2_REG rc=%d

// [.rodata] 6%s: %s: Set ship mode: %d!!

// [.rodata] 3Couldn't get usb presence status rc=%d

// [.rodata] 3%s: %s: Couldn't force max pulses to 5V rc=%d

// [.rodata] smblib_typec_port_type_set
// [.rodata] WEAK_CHARGER_VOTER
// [.rodata] 3%s: %s: Failed to initialize moisture protection alarm

// [.rodata] smblib_get_prop_dfp_mode
// [.rodata] 6charge plug in, reset iterm 250ma

// [.rodata] 6%s: %s: Coudln't find third_cp_psy

// [.rodata] 6%s: %s: Coudln't find cp_psy

// [.rodata] CLASSA_QC_FCC_VOTER
// [.rodata] qcom,jeita-hard-thresholds
// [.rodata] 3%s: %s: Incorrect fastchg-current-ma or max-voltage-uv

// [.rodata] moisture_protection_alarm_cb
// [.rodata] 3SCHG-FLASH: %s: Couldn't read FLASH_STATUS_3 rc=%d

// [.rodata] qcom,headroom-mode
// [.rodata] qcom,batt-id-range-pct
// [.rodata] of_batterydata_get_best_profile
// [.rodata] 3QCOM-STEPCHG: %s: Get battery present status failed, rc=%d

// [.rodata] 6QCOM-STEPCHG: %s: maintain non ffc charging iterm, aviod discharging early

// [.rodata] 3QCOM-STEPCHG: %s: Set recharge mode failed, rc=%d

// [.rodata] 6QCOM-STEPCHG: %s: %s = %d Step-FCC = %duA taper-fcc: %d

// [.rodata] qcom,battery-type
// [.rodata] qcom,jeita-fcc-ranges
// [.rodata] shutdown_delay_show
// [.rodata] 3QCOM-BATT: %s: Couldn't get usbpsy

// [.rodata] PD_VOTER
// [.rodata] iio_update
// [.rodata] 6QCOM-BATT: %s: get iio_chan_list_auth ...

// [.rodata] bq_bus_current
// [.rodata] blank_status
// [.rodata] smart_chg_show
// [.rodata] 3QCOM-BATT: %s: %s failed to get fv_votable

// [.rodata] high-duty-cycle
// [.rodata] wdog-snarl
// [.rodata] torch-req
// [.rodata] main_comp_clamp_level
// [.rodata] usb_moisture_detection_en
// [.rodata] battery_charging_enabled
// [.rodata] qcom,fcc-max-ua
// [.rodata] qcom,wls-current-max-ua
// [.rodata] conn_temp
// [.rodata] qcom,usb-pd-disable
// [.rodata] Couldn't configure ADC pull-up reg rc=%d

// [.rodata] &irq_data->storm_data.storm_lock
// [.rodata] smblib_get_iio_channel
// [.rodata] 3%s: %s: Couldn't disable vconn regulator rc=%d

// [.rodata] 3%s: %s: Couldn't enable OTG rc=%d

// [.rodata] 3%s: %s: Couldn't get capacity prop rc=%d

// [.rodata] smblib_get_prop_batt_capacity
// [.rodata] smblib_get_prop_batt_charge_type
// [.rodata] smblib_get_fastcharge_mode
// [.rodata] USER_VOTER
// [.rodata] Couldn't configure s/w jeita rc=%d

// [.rodata] smblib_get_prop_low_power
// [.rodata] &chg->dcin_aicl_lock
// [.rodata] &chg->dpdm_lock
// [.rodata] 3%s: %s: Failed to initialize dcin aicl alarm

// [.rodata] 3%s: %s: Couldn't register notifier rc=%d

// [.rodata] Couldn't enable SMB charger rc=%d

// [.rodata] charge_full
// [.rodata] cp_enable
// [.rodata] smblib_handle_hvdcp_check_timeout
// [.rodata] SINK_AUDIO_ADAPTER
// [.rodata] smblib_notify_usb_host
// [.rodata] 3%s: %s: ok_to_pd=%d, typec_legacy=%d, early_usb_attach = %d

// [.rodata] 3%s: %s: Batterydata not available

// [.rodata] 3%s: %s: Incorrect FCC value [%d %d] max: %d

// [.rodata] smblib_cp_status_change_work
// [.rodata] smblib_read_iio_channel
// [.rodata] 3%s: %s: Couldn't read STATE_MACHINE_STS rc=%d

// [.rodata] apsd_timer_cb
// [.rodata] dcin_aicl_alarm_cb
// [.rodata] pl_charger_temp_max
// [.rodata] schgm_flash_get_vreg_ok
// [.rodata] 3SCHG-FLASH: %s: Couldn't configure SOC for flash derating rc=%d

// [.rodata] handle_battery_insertion
// [.rodata] 3QCOM-STEPCHG: %s: Couldn't read fastcharge mode fail rc=%d

// [.rodata] handle_step_chg_config
// [.rodata] 3QCOM-STEPCHG: %s: Couldn't read DC Present status, rc=%d

// [.rodata] 3QCOM-STEPCHG: %s: max-fastchg-current-ma reading failed, rc=%d

// [.rodata] LOW_FAST
// [.rodata] 3QCOM-BATT: %s: Failed to get soc_decimal rc=%d

// [.rodata] pl_voltage_max
// [.rodata] 3QCOM-BATT: %s: Couldn't set parallel icl, rc=%d

// [.rodata] 3QCOM-BATT: %s: Failed to read PD_ACTIVE status rc=%d

// [.rodata] 6QCOM-BATT: %s: cp_fcc_ua=%d total_fcc_ua=%d forced_main_fcc=%d

// [.rodata] 3QCOM-BATT: %s: %s, fv_uv = %d, smart_batt = %d, fv_ageing = %d, val = %d

// [.rodata] 3QCOM-BATT: %s: Couldn't get DC PRESENT rc=%d

// [.rodata] 6QCOM-BATT: %s: Parallel ICL is less than min ICL(%d), skipping parallel enable

// [.rodata] Battery
// [.rodata] Wireless
// [.rodata] set_ship_mode
// [.rodata] 3QCOM-BATT: %s: %s Set smart_chg to %d

// [.rodata] smart_batt_show
// [.rodata] usbin-plugin
// [.rodata] usbin-revi-change
// [.rodata] usb_pd_active
// [.rodata] qcom,wd-bark-time-secs
// [.rodata] qcom,smb-temp-max
// [.rodata] Couldn't configure CC threshold voltage rc=%d

// [.rodata] smb5_usb_port_get_prop
// [.rodata] 3Set prop %d is not supported in pc_port

// [.rodata] 3Couldn't request irq %d

// [.rodata] 3%s: %s: %s channel unavailable, %d

// [.rodata] 3%s: %s: Couldn't to enable DPDM rc=%d

// [.rodata] wireless
// [.rodata] smblib_get_usb_online
// [.rodata] 3Error in reading USBIN_I channel, rc=%d

// [.rodata] BOOST_BACK_VOTER
// [.rodata] smb5_icl_change_irq_handler
// [.rodata] false
// [.rodata] smblib_handle_usb_current
// [.rodata] 3%s: %s: Couldn't restore max pulses rc=%d

// [.rodata] 6%s: %s: IRQ: apsd-done rising; %s detected

// [.rodata] 3%s: %s: Couldn't enable DRP, rc=%d

// [.rodata] 3%s: %s: Couldn't disable CP_ACDRV in OTG mode rc=%d

// [.rodata] 3%s: %s: Couldn't get fcc values for soft JEITA rc=%d

// [.rodata] smblib_update_jeita
// [.rodata] 3%s: %s: Couldn't read cp topo rc=%d

// [.rodata] smblib_pl_enable_work
// [.rodata] 3Couldn't get usb voltage rc=%d

// [.rodata] suspended
// [.rodata] unsuspended
// [.rodata] qcom-step-chg
// [.rodata] PL_VOTER
// [.rodata] handle_settled_icl_change
// [.rodata] fcc_stepper_work
// [.rodata] 6QCOM-BATT: %s: Disabling FCC slewing on CP Switcher disable

// [.rodata] 3QCOM-BATT: %s: %s client: %s low_fast_working_flag: %d

// [.rodata] low_fast_vote_callback
// [.rodata] 3QCOM-BATT: %s: %s client: %s night_charging_working_flag: %d

// [.rodata] Sink attached
// [.rodata] apdo_max
// [.rodata] thermal_level_show
// [.rodata] smart_chg_store
// [.rodata] 3Couldn't request interrupts rc=%d

// [.rodata] dcin-plugin
// [.rodata] imp-trigger
// [.rodata] main_fcc_delta
// [.rodata] qcom,hvdcp-disable
// [.rodata] 3Failed to read base rc=%d

// [.rodata] 3Set prop %d is not supported in usb psy

// [.rodata] pc_port
// [.rodata] 3%s is not a defined irq

// [.rodata] smblib_apsd_enable
// [.rodata] 6Input suspended: Fake battery

// [.rodata] smblib_vbus_regulator_disable
// [.rodata] 3%s: %s: Couldn't read BATTERY_CHARGER_STATUS_1 rc=%d

// [.rodata] 3%s: %s: Couldn't write to CMD_HVDCP_2_REG rc=%d

// [.rodata] 6%s: %s: Max VBUS limit changed to: %d

// [.rodata] 6%s: %s: snk_attached = %d, src_attached = %d, is_pr_lock = %d

// [.rodata] 3%s pd_active = %d

// [.rodata] AICL_THRESHOLD_VOTER
// [.rodata] 3%s: %s: Couldn't configure pulldown on USB_IN rc=%d

// [.rodata] smb5_dc_plugin_irq_handler
// [.rodata] Couldn't enable secondary chargers  rc=%d

// [.rodata] 3%s: %s: Weak charger detected: voting %dmA ICL

// [.rodata] 3%s: %s: Couldn't read CHARGING_PAUSE_CMD rc=%d

// [.rodata] is_charging_paused
// [.rodata] 3%s: %s: set dpdm to continuous mode before dp pulse

// [.rodata] 3%s: %s: set CONT_AICL_THRESHOLD failed, rc=%d

// [.rodata] 3%s: %s: Couldn't get jeita cc minus rc=%d

// [.rodata] PL_DELAY_VOTER
// [.rodata] Enabled
// [.rodata] 3%s: %s: Couldn't enable crude sensor rc=%d

// [.rodata] 3%s: %s: Couldn't read DIE_TEMP_STATUS_REG rc=%d

// [.rodata] qcom,jeita-soft-fv-uv
// [.rodata] 3%s: %s: Couldn't set typec sink only rc=%d

// [.rodata] 3SCHG-FLASH: %s: Couldn't read flash control reg rc=%d

// [.rodata] 3%s: Incorrect element size for qcom,soh-range, rc=%d

// [.rodata] 3%s: %s: Too many battery id resistors

// [.rodata] 3QCOM-STEPCHG: %s: Couldn't register psy notifier rc = %d

// [.rodata] get_step_chg_jeita_setting_from_profile
// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/drivers/power/supply/qcom/battery.c
// [.rodata] PL_DISABLE
// [.rodata] parallel
// [.rodata] Unknown
// [.rodata] real_type
// [.rodata] cp_bus_current_show
// [.rodata] blank_status_store
// [.rodata] bsm-active
// [.rodata] 3%s: %s: Couldn't override ICL rc=%d

// [.rodata] smblib_get_qc3_main_icl_offset
// [.rodata] smblib_hvdcp_hw_inov_enable
// [.rodata] MAIN_ICL_MIN_VOTER
// [.rodata] 6%s: %s: DP_DM_DP_PULSE rc=%d cnt=%d

// [.rodata] smblib_get_prop_dc_present
// [.rodata] Couldn't get POWER_SUPPLY_PROP_INPUT_VOLTAGE_LIMIT, rc=%d

// [.rodata] smblib_get_prop_usb_online
// [.rodata] smblib_get_prop_vph_voltage_now
// [.rodata] OTG_DELAY_VOTER
// [.rodata] 3Couldn't remove SW_ICL_MAX vote rc=%d

// [.rodata] smblib_eval_chg_termination
// [.rodata] 3%s: xm_smart_chg_notifier_call_chain error:%d

// [.rodata] 6%s: %s: IRQ: sdp-enumeration-done %s

// [.rodata] 6charge plug out, disable ffc mode but maintain ffc_iterm

// [.rodata] qcom,jeita-soft-thresholds
// [.rodata] 6%s: %s: %s Jeita threshold configured

// [.rodata] 3%s: %s: Couldn't read current thermal values %d

// [.rodata] 6%s: %s: Role reversal not latched to DFP in %d msecs. Resetting to DRP mode

// [.rodata] 3%s: %s: Couldn't disable 1 percent CC_ID duty cycle rc=%d

// [.rodata] 4SCHG-FLASH: %s: Soc based flash derating not enabled

// [.rodata] VBATT
// [.rodata] battery
// [.rodata] 6QCOM-STEPCHG: %s: Battery Temperature(%d) between %d and %d,not allow charging yet!!

// [.rodata] 3QCOM-STEPCHG: %s: Get fastcharge mode status failed, rc=%d

// [.rodata] CHG_STATE_VOTER
// [.rodata] 3QCOM-BATT: %s: Couldn't register psy notifier rc = %d

// [.rodata] 3QCOM-BATT: %s: Couldn't get parallel batfet mode rc=%d

// [.rodata] pl_batfet_mode
// [.rodata] 3QCOM-BATT: %s: Couldn't get USB real type rc=%d

// [.rodata] 6QCOM-BATT: %s: master is taper charging; reducing FCC to %dua

// [.rodata] real_capacity
// [.rodata] usb_real_type
// [.rodata] Mains
// [.rodata] Non compliant
// [.rodata] UNKNOWN
// [.rodata] 3Couldn't setup chg_config rc=%d

// [.rodata] 3Smblib_init failed rc=%d

// [.rodata] temp-change-smb
// [.rodata] flash-en
// [.rodata] usb_hvdcp_opti_allowed
// [.rodata] usb_pr_swap
// [.rodata] battery_sys_soc
// [.rodata] die_temp
// [.rodata] Couldn't configure VBAT-rechg CHG_CFG2_REG rc=%d

// [.rodata] USB_PSY_VOTER
// [.rodata] 3Couldn't register battery power supply

// [.rodata] 3%s: %s: Couldn't read MISC_PBS_RT_STS_REG rc=%d

// [.rodata] 3%s: %s: Couldn't read BATIF_INT_RT_STS rc=%d

// [.rodata] 3%s: %s: battery over-voltage vbat_fg = %duV, fv = %duV

// [.rodata] 3Couldn't read batt temp prop rc=%d

// [.rodata] smblib_set_prop_rechg_soc_thresh
// [.rodata] smblib_force_vbus_voltage
// [.rodata] smblib_set_prop_dc_reset
// [.rodata] 3%s: %s: Couldn't unsuspend  DC rc=%d

// [.rodata] 6%s: %s: Wireless charger removal detection successful

// [.rodata] 3%s: %s: Couldn't read USBIN_RT_STS rc=%d

// [.rodata] 3%s: %s: Couldn't read TYPE_C_STATUS_5 rc=%d

// [.rodata] 3Failed to set chg_freq.freq_5V

// [.rodata] Couldn't set dc voltage to 5 V rc=%d

// [.rodata] Couldn't disable secondary charger rc=%d

// [.rodata] 3%s: %s: Couldn't set exit state cfg rc=%d

// [.rodata] 3%s: %s: Couldn't get dpdm regulator rc=%d

// [.rodata] debug_battery
// [.rodata] smblib_dp_pulse
// [.rodata] smblib_get_prop_ufp_mode
// [.rodata] Error in setting freq_buck rc=%d

// [.rodata] CHG_AWAKE_VOTER
// [.rodata] 3%s notify 1
// [.rodata] 3%s: %s: Couldn't register partner rc =%d

// [.rodata] typec_src_fault_condition_cfg
// [.rodata] 6%s: %s:  Role reversal failed, notifying device mode to usb driver.

// [.rodata] 6%s: %s: Moisture protection %s

// [.rodata] 3%s: %s: Couldn't write %s to DCIN_SUSPEND_BIT rc=%d

// [.rodata] 3Couldn't set prop %d rc = %d

// [.rodata] 3QCOM-STEPCHG: %s: cycle_count is not ready fail rc = %d

// [.rodata] 3QCOM-STEPCHG: %s: soc:%d is more than 95, do not set fastcharge mode

// [.rodata] 3QCOM-BATT: %s: Invalid iio read/write pointers

// [.rodata] PARALLEL_PSY_VOTER
// [.rodata] pl_mode
// [.rodata] FCC_STEPPER_VOTER
// [.rodata] auth_batt_id
// [.rodata] version
// [.rodata] USB_HVDCP_3P5
// [.rodata] Audio Adapter
// [.rodata] 3QCOM-BATT: %s: Failed to get row_soc, rc=%d

// [.rodata] 3QCOM-BATT: %s: %s Get smart_chg: %d

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/drivers/power/supply/qcom/qpnp-smb5.c
// [.rodata] 3QPNP SMB5 probed successfully

// [.rodata] smb-en
// [.rodata] usb_connector_health
// [.rodata] usb_input_voltage_settled
// [.rodata] usb_pd_usb_suspend_supported
// [.rodata] main_input_voltage_settled
// [.rodata] voltage_qnovo
// [.rodata] float voltage
// [.rodata] sbux_res
// [.rodata] 3qcom,float-option is out of range [0, 4]

// [.rodata] qcom,fake-chg-status-on-debug-batt
// [.rodata] qcom,connector-internal-pull-kohm
// [.rodata] Couldn't enable charging rc=%d

// [.rodata] 3Couldn't configure ITERM thresholds rc=%d

// [.rodata] Couldn't configure TypeC/micro-USB mode rc=%d

// [.rodata] failed to write TYPE_C_CFG_REG rc=%d

// [.rodata] 6%s: %s: %s: %d is out of range [%d, %d]

// [.rodata] Couldn't set term MSB rc=%d

// [.rodata] Couldn't set term LSB rc=%d

// [.rodata] 3%s: %s: Couldn't write to AICL_CMD_REG rc=%d

// [.rodata] smblib_get_prop_smb_health
// [.rodata] 3Failed to set adapter allowance to 5V

// [.rodata] 3%s: %s: Couldn't read DIE_TEMP rc=%d

// [.rodata] Couldn't switch secondary charger rc=%d

// [.rodata] smblib_read_mid_voltage_chan
// [.rodata] 6%s: %s: Force USB_FLOAT ICL 1000mA

// [.rodata] 3%s: %s: Couldn't write 0x%02x to USBIN_ADAPTER_ALLOW_OVERRIDE_REG rc=%d

// [.rodata] USBIN_V_VOTER
// [.rodata] THERMAL_THROTTLE_VOTER
// [.rodata] smblib_force_dr_mode
// [.rodata] 3%s: %s: Couldn't enable src, rc=%d

// [.rodata] 3failed to read 0x%4X, rc=%d

// [.rodata] 6%s: %s: hit max ICL: stop

// [.rodata] smblib_chg_disable_vote_callback
// [.rodata] smb5_schgm_flash_state_change_irq_handler
// [.rodata] 3Couldn't get prop %d rc = %d

// [.rodata] FORCE_RECHARGE_VOTER
// [.rodata] %s channel unavailable, %d

// [.rodata] 3QCOM-STEPCHG: %s: Already initialized

// [.rodata] resistance_id
// [.rodata] 3QCOM-STEPCHG: %s: batt_temp = %d, ffc_chg_term_current=%d

// [.rodata] 3QCOM-STEPCHG: %s: disable fastcharge mode

// [.rodata] VBAT_AVG
// [.rodata] qcom,jeita-scaling-min-fcc-ua
// [.rodata] 3QCOM-STEPCHG: %s: too many entries(%d), only %d allowed

// [.rodata] soc_decimal_show
// [.rodata] PL_TAPER_EARLY_BAD_VOTER
// [.rodata] get_settled_split
// [.rodata] split_settled
// [.rodata] 3QCOM-BATT: %s: Failed to read min_icl rc=%d

// [.rodata] pl_fv_vote_callback
// [.rodata] 6QCOM-BATT: %s: master_fcc=%d slave_fcc=%d distribution=(%d/%d)

// [.rodata] 6QCOM-BATT: %s: parallel charging %s

// [.rodata] get_main_fcc_config
// [.rodata] sc_bus_current
// [.rodata] NVT-5000mAh
// [.rodata] 3QCOM-BATT: %s: g_blank_status =%d g_audio_cctog show =%d

// [.rodata] 3QCOM-BATT: %s: %s: qpnp_smb5_notifier_call_chain error:%d

// [.rodata] 3set smb5_rdy, wake up xm_smart_chg driver

// [.rodata] 3Couldn't initialize hardware rc=%d

// [.rodata] fg-fvcal-qualified
// [.rodata] usbin-vashdn
// [.rodata] main_flash_trigger
// [.rodata] dc_reset
// [.rodata] battery_charger_temp_max
// [.rodata] jeita fcc reduction
// [.rodata] 3qcom,chg-inhibit-threshold-mv is incorrect

// [.rodata] Couldn't configure VCONN for SW control rc=%d

// [.rodata] 3Couldn't register USB power supply

// [.rodata] 6%s:charge_full_design is %d 

// [.rodata] 3Couldn't create force_dc_psy_update file rc=%ld

// [.rodata] smblib_rerun_apsd_if_required
// [.rodata] 3%s: %s: usb_online=%d, dc_online=%d, stat=%d

// [.rodata] 3%s: %s: Couldn't get voltage_now prop rc=%d

// [.rodata] 3Failed to force 5V

// [.rodata] smblib_get_prop_usb_present
// [.rodata] 3%s: %s: Couldn't write to TYPE_C_CURRSRC_CFG rc=%d

// [.rodata] 3%s: %s: Couldn't read APSD_STATUS rc=%d

// [.rodata] 6%s: %s: Requested role %s

// [.rodata] 6%s: %s: reset: icl: 100 mA

// [.rodata] USBOV_DBC_VOTER
// [.rodata] smblib_dm_pulse
// [.rodata] 3%s: %s: Couldn't read TYPE_C_STATUS_1 rc=%d

// [.rodata] smblib_handle_hvdcp_detect_done
// [.rodata] 3Failed to force 9V

// [.rodata] SOURCE_HIGH
// [.rodata] 3%s: %s: Couldn't select SBU1 rc=%d

// [.rodata] 6%s: %s: enabling VBUS in OTG mode

// [.rodata] 3%s: %s: setting DCIN ICL failed: %d

// [.rodata] DIE_TEMP_VOTER
// [.rodata] 3%s: %s: Couldn't configure Jeita %s hot threshold rc=%d

// [.rodata] 6%s: %s: Role reversal not latched to UFP in %d msecs. Resetting to DRP mode

// [.rodata] 3%s: %s: Couldn't disable periodic monitoring of CC_ID rc=%d

// [.rodata] 3%s: %s: Couldn't enable uUSB factory mode detection rc=%d

// [.rodata] 3%s: %s: Couldn't read TYPE_C_U_USB_STATUS_REG rc=%d

// [.rodata] voltage_now
// [.rodata] 3QCOM-BATT: %s: %s enable: %d, typec_role: %d

// [.rodata] 6QCOM-BATT: %s: shutdown_delay from QG is %d 

// [.rodata] 3QCOM-BATT: %s: Couldn't get usbpsy while splitting settled

// [.rodata] 6QCOM-BATT: %s: terminating: parallel's share is low

// [.rodata] pl_disable_vote_callback
// [.rodata] USB_CDP
// [.rodata] input_suspend
// [.rodata] 3QCOM-BATT: %s: %s kstrtoint fail

// [.rodata] input_suspend_store
// [.rodata] chip_ok_show
// [.rodata] smart_batt
// [.rodata] Failed to configure comp clamp settings for reg=0x%04x rc=%d

// [.rodata] &chg->adc_lock
// [.rodata] vph-alarm
// [.rodata] vout-down
// [.rodata] usb_skin_health
// [.rodata] qcom,batteryless-platform
// [.rodata] qcom,hvdcp-autonomous-enable
// [.rodata] Couldn't read Legacy status rc=%d

// [.rodata] 3Couldn't register VBUS regulator rc=%d

// [.rodata] WBC_VOTER
// [.rodata] 3%s failed to get batt_psy
// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/drivers/power/supply/qcom/smb5-lib.c
// [.rodata] 3failed to write to 0x%04X, rc=%d

// [.rodata] 3%s: %s: Couldn't get usb suspend rc=%d

// [.rodata] 3%s: %s: Couldn't get current_now prop rc=%d

// [.rodata] smblib_run_aicl
// [.rodata] 3%s: %s: sink detect

// [.rodata] Couldn't set POWER_SUPPLY_PROP_INPUT_VOLTAGE_LIMIT, rc=%d

// [.rodata] VOUT_VOTER
// [.rodata] 6%s: %s: USBIN_UV storm at threshold %d

// [.rodata] 3%s: %s: Couldn't force max pulses to 9V rc=%d

// [.rodata] SW_THERM_REGULATION_VOTER
// [.rodata] 6%s: %s: USBOV debounce status %d

// [.rodata] 3%s: %s: Failed to set power-role to DRP rc=%d

// [.rodata] 3%s: %s: Couldn't get CP PARALLEL_OUTPUT_MODE rc=%d

// [.rodata] smblib_handle_slow_plugin_timeout
// [.rodata] SINK_POWERED_CABLE
// [.rodata] SOURCE_MEDIUM
// [.rodata] NON_COMPLIANT
// [.rodata] 3%s: %s: Couldn't disable VBUS in OTG mode rc=%d

// [.rodata] 3%s: %s: Failed to get batt-id rc=%d

// [.rodata] 3vbus_now is %d

// [.rodata] AWAKE
// [.rodata] USB_ICL_IRQ_DISABLE
// [.rodata] BATT_VERIFED_VOTER
// [.rodata] qcom,taper-fcc
// [.rodata] 3QCOM-STEPCHG: %s: Invalid parameters passed

// [.rodata] 3QCOM-STEPCHG: %s: Read %s failed, rc=%d

// [.rodata] 3QCOM-BATT: %s: was initialized earlier. Failing now

// [.rodata] qcom-battery
// [.rodata] FCC_MAIN
// [.rodata] qcom_batt_create_debugfs
// [.rodata] USBIN_I_VOTER
// [.rodata] pl_taper_work
// [.rodata] cp_configure_ilim
// [.rodata] CP_DISABLE
// [.rodata] soc_decimal
// [.rodata] typec_cc_orientation
// [.rodata] 3QCOM-BATT: %s: Failed to get chip-id rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't get apdo_volt, rc=%d

// [.rodata] set_ship_mode_store
// [.rodata] thermal_level
// [.rodata] 3Couldn't initialize vconn regulator rc=%d

// [.rodata] usb_therm_icl_limit
// [.rodata] battery_sw_jeita_enabled
// [.rodata] battery_force_recharge
// [.rodata] apdo_volt
// [.rodata] qcom,disable-sw-thermal-regulation
// [.rodata] chg_temp
// [.rodata] qcom,float-option
// [.rodata] weak_chg_icl_ua
// [.rodata] 3Couldn't get batt present rc=%d

// [.rodata] 3%s: %s: Couldn't override ICL_AFTER_APSD rc=%d

// [.rodata] 3%s: %s: Couldn't re-run APSD rc=%d

// [.rodata] 6%s: %s: enabling VCONN

// [.rodata] smblib_vconn_regulator_disable
// [.rodata] smblib_set_fastcharge_mode
// [.rodata] PD_VERIFED_VOTER
// [.rodata] 3%s: %s: Couldn't write %d to DCIN_CMD_PON_REG rc=%d

// [.rodata] 3%s: %s: Couldn't get CP DIE_TEMP rc=%d

// [.rodata] 3%s: %s: Set mtbf_curr = %d

// [.rodata] smblib_set_prop_pd_voltage_min
// [.rodata] smb5_usbin_uv_irq_handler
// [.rodata] TYPEC_SWAP_VOTER
// [.rodata] 3%s: %s: Couldn't read batt status rc=%d

// [.rodata] 3%s: %s: Reverse boost detected: voting 0mA to suspend input

// [.rodata] dpdm-supply
// [.rodata] 3Couldn't get dc presence status rc=%d

// [.rodata] 3%s: %s: set CONTINUOUS allowance failed, rc=%d

// [.rodata] 3%s: %s: Couldn't read APSD_RESULT_STATUS rc=%d

// [.rodata] smblib_set_sw_thermal_regulation
// [.rodata] smblib_hvdcp_adaptive_voltage_change
// [.rodata] typec_sink_insertion
// [.rodata] CC_MODE_VOTER
// [.rodata] 3%s: %s: reading DCIN ICL failed: %d

// [.rodata] smblib_update_thermal_readings
// [.rodata] 3%s: %s: Couldn't read SKIN TEMP channel, rc=%d

// [.rodata] 3%s: %s: Couldn't get smb1390 charger temp, rc=%d

// [.rodata] 6%s: %s: Resetting USBOV debounce

// [.rodata] smblib_create_votables
// [.rodata] smb5_schgm_flash_ilim2_irq_handler
// [.rodata] of_batterydata_get_aged_profile_count
// [.rodata] of_batterydata_read_batt_id_kohm
// [.rodata] 3QCOM-STEPCHG: %s: Couldn't handle step rc = %d

// [.rodata] voltage_avg
// [.rodata] USB_ICL
// [.rodata] 3QCOM-BATT: %s: uevent: chip->batt_psy addr is NULL !
// [.rodata] 3QCOM-BATT: %s: invalid charger parameter

// [.rodata] set_drp_status
// [.rodata] 3QCOM-BATT: %s: Couldn't get quick_charge_type, rc=%d

// [.rodata] ICL_LIMIT_VOTER
// [.rodata] 3QCOM-BATT: %s: Couldn't get fcc_delta rc=%d

// [.rodata] 6QCOM-BATT: %s: CP Switcher is enabled, don't limit main fcc

// [.rodata] USB_HVDCP_3
// [.rodata] COSMX-5000mAh
// [.rodata] chg-state-change
// [.rodata] bat-temp
// [.rodata] all-chnl-conv-done
// [.rodata] usb_typec_cc_orientation
// [.rodata] battery_dp_dm
// [.rodata] switching frequency
// [.rodata] AICL 5V threshold
// [.rodata] Couldn't read threm limits rc = %d

// [.rodata] Couldn't set dc_icl rc=%d

// [.rodata] 3get prop %d is not supported in usb

// [.rodata] determine-initial-status
// [.rodata] smblib_vbus_regulator_enable
// [.rodata] 6%s:input_suspend is %d 

// [.rodata] smblib_get_prop_batt_present
// [.rodata] 3%s: %s: Couldn't get voltage prop rc=%d

// [.rodata] 3%s: %s: Couldn't read BATTERY_CHARGER_STATUS_2 rc=%d

// [.rodata] smblib_set_prop_input_suspend
// [.rodata] 3%s: %s: Couldn't suspend DC rc=%d

// [.rodata] 3%s: %s: Couldn't read TYPE_C_MISC_STATUS_REG rc=%d

// [.rodata] smblib_get_prop_typec_select_rp
// [.rodata] 3%s: %s: Couldn't get usb present status,rc=%d

// [.rodata] cid_set_prop_typec_power_role
// [.rodata] smb5_wdog_snarl_irq_handler
// [.rodata] Couldn't set POWER_SUPPLY_PROP_CHARGER_TEMP_MAX rc=%d

// [.rodata] 3%s: %s: Couldn't set float ICL options rc=%d

// [.rodata] time_to_full_now
// [.rodata] 3%s: %s: Couldn't read MID channel rc=%d

// [.rodata] smblib_get_prop_die_health
// [.rodata] HVDCP2_ICL_VOTER
// [.rodata] 6%s: %s: CC change old_mode=%d new_mode=%d

// [.rodata] bq_set_acdrv
// [.rodata] 6%s: %s: done: icl: %d mA

// [.rodata] 3%s: %s: Couldn't read TYPE_C_STATUS_3 rc=%d

// [.rodata] 3%s: %s: Error in reading IIO channel data, rc=%d

// [.rodata] 3%s: out of range: profile id %d batt id %d pct %d

// [.rodata] 3%s: %s: No battery id resistor value found, np->name

// [.rodata] 3QCOM-STEPCHG: %s: Get battery data node failed

// [.rodata] 3QCOM-BATT: %s: typec_cc_orientation, cc_orientation=%d, rc=%d

// [.rodata] 6QCOM-BATT: %s: %s need set drp to sink

// [.rodata] 3QCOM-BATT: %s: Couldn't get min_icl rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't get present from USB rc=%d

// [.rodata] 6QCOM-BATT: %s: total_settled_ua=%d settled_ua=%d new_total_settled_ua=%d

// [.rodata] CP_SLAVE_DISABLE
// [.rodata] PL_FCC_LOW_VOTER
// [.rodata] pl_notifier_call
// [.rodata] fastcharge_mode
// [.rodata] Charge_Pump
// [.rodata] real_capacity_show
// [.rodata] reboot_ship_mode
// [.rodata] usbin-uv
// [.rodata] cp_input_suspend
// [.rodata] qcom,fcc-step-size-ua
// [.rodata] 3Couldn't clear SDAM ADC status rc=%d

// [.rodata] Couldn't configure SMB pull-up rc=%d

// [.rodata] 3%s: %s: Couldn't get dc online property rc=%d

// [.rodata] 3charge done, disable ffc mode but maintain ffc_iterm

// [.rodata] smblib_get_batt_current_now
// [.rodata] smblib_set_recharge_mode
// [.rodata] smblib_dp_dm_cp
// [.rodata] 3%s: %s: power role %d not supported

// [.rodata] 3%s: %s: Couldn't set curr src: not in SRC mode

// [.rodata] WLS_PL_CHARGING_VOTER
// [.rodata] smb5_usbin_ov_irq_handler
// [.rodata] 6%s: %s: restore power role: %d

// [.rodata] smblib_get_usb_suspend
// [.rodata] cc_soc
// [.rodata] HVDCP2
// [.rodata] Disabled
// [.rodata] 6%s: %s: APSD Extented timer started at %lld

// [.rodata] 3%s: %s: Couldn't disable crude sensor rc=%d

// [.rodata] 3qc_class_a charger is detected, batt_profile_fcc=%d

// [.rodata] smblib_process_thermal_readings
// [.rodata] 6%s: %s: restore type-c interrupts

// [.rodata] smblib_typec_role_check_work
// [.rodata] 6%s: %s: cc_soc jumped(%d->%d), reset cc_soc_ref

// [.rodata] smblib_set_moisture_protection
// [.rodata] 3%s: %s: Couldn't find FCC votable rc=%d

// [.rodata] USB_HDC_IRQ_DISABLE
// [.rodata] 3SCHG-FLASH: %s: Couldn't force 5V boost in torch mode rc=%d

// [.rodata] qcom,flash-derating-soc
// [.rodata] 3QCOM-STEPCHG: %s: temp:%d enable fastcharge mode

// [.rodata] 3QCOM-STEPCHG: %s: Couldn't read %s property rc=%d val=%d

// [.rodata] QUICK_CHARGE_TYPE_CHANGED
// [.rodata] 6QCOM-BATT: %s: Float voltage increased. Exiting taper

// [.rodata] get_fcc_split
// [.rodata] 6QCOM-BATT: %s: pl enabled in Taper scheduing work

// [.rodata] enabled
// [.rodata] restrict_chg
// [.rodata] BrickID
// [.rodata] mtbf_current_store
// [.rodata] 3QCOM-BATT: %s: third_cp_iio_init end

// [.rodata] 3Couldn't initialize usb pc_port psy rc=%d

// [.rodata] 3Couldn't determine initial status rc=%d

// [.rodata] ilim2-s2
// [.rodata] usb_typec_power_role
// [.rodata] main_constant_charge_current_max
// [.rodata] main_health
// [.rodata] input current limit status
// [.rodata] qcom,hw-die-temp-mitigation
// [.rodata] Couldn't configure AICL rerun interval rc=%d

// [.rodata] Couldn't enable TYPEC rc=%d

// [.rodata] Couldn't configure ITERM threshold LOW rc=%d

// [.rodata] Couldn't configure SOC-rechg CHG_CFG2_REG rc=%d

// [.rodata] force_batt_psy_update
// [.rodata] 0x%02llx

// [.rodata] pd_disabled
// [.rodata] 3%s: %s: Couldn't set USBIN_ICL_OPTIONS rc=%d

// [.rodata] smblib_set_charge_param
// [.rodata] 3%s: %s: Couldn't get CP ENABLE rc=%d

// [.rodata] 3%s: %s: Couldn't write fastcharge mode:%d

// [.rodata] 3%s: %s: Couldn't set BATT_FULL_CURRENT status:%d

// [.rodata] smblib_get_prop_dc_online
// [.rodata] 3%s: %s: Couldn't read SKIN_TEMP_STATUS_REG, rc=%d

// [.rodata] 3%s: %s: Couldn't write 0x%02x to TYPE_C_INTRPT_ENB_SOFTWARE_CTRL rc=%d

// [.rodata] 3%s: %s: Couldn't get settled ICL rc=%d

// [.rodata] smb5_sdam_sts_change_irq_handler
// [.rodata] 6%s qc2_unsupported charger detected

// [.rodata] smb5_typec_attach_detach_irq_handler
// [.rodata] 3%s: %s: Couldn't init qcom_batt_init rc=%d

// [.rodata] charge_full_design
// [.rodata] 6%s: %s: set USBIN_ALLOW_OVERRIDE: %d

// [.rodata] 6%s: %s: IRQ: hvdcp-3p0-auth-done rising; %s detected

// [.rodata] 3%s: %s: Couldn't read QC_CHANGE_STATUS rc=%d

// [.rodata] 3%s: %s: Couldn't enable snk, rc=%d

// [.rodata] 3%s: %s: Incorrect FV value [%d %d] max: %d

// [.rodata] DCIN_AICL_VOTER
// [.rodata] 6%s: %s: USB/DC %s as per SW thermal regulation

// [.rodata] 3%s: %s: Couldn't set WD SNARL timer, rc=%d

// [.rodata] 6%s: %s: moisture Protection Alarm Triggered %lld

// [.rodata] 3%s: No battery data found

// [.rodata] 3QCOM-STEPCHG: %s: Couldn't set chg_term_current, rc=%d

// [.rodata] pl_fcc_max
// [.rodata] 3QCOM-BATT: %s: Couldn't get max current rc=%d

// [.rodata] cp_get_parallel_mode
// [.rodata] 3QCOM-BATT: %s: Couldn't get usb psy

// [.rodata] Source attached (high current)
// [.rodata] fastcharge_mode_show
// [.rodata] night_charging
// [.rodata] third_cp_iio_init
// [.rodata] 3Couldn't initialize dc psy rc=%d

// [.rodata] bat-low
// [.rodata] usb_pd_current_max
// [.rodata] usb_pd_voltage_min
// [.rodata] battery_rerun_aicl
// [.rodata] pm6150_charger
// [.rodata] pmi632_charger
// [.rodata] fast charge current
// [.rodata] aicl icl status
// [.rodata] qcom,jeita-arb-enable
// [.rodata] qcom,charger-temp-max
// [.rodata] 3Couldn't disable ICL override rc=%d

// [.rodata] DEFAULT_VOTER
// [.rodata] Couldn't disable TYPEC rc=%d

// [.rodata] Couldn't configure TYPE_C_MODE_CFG_REG rc=%d

// [.rodata] 3batt power supply prop %d not supported

// [.rodata] 3%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d

// [.rodata] DEBUG_BOARD_VOTER
// [.rodata] smblib_vbus_regulator_is_enabled
// [.rodata] smblib_get_recharge_mode
// [.rodata] resume
// [.rodata] smblib_set_prop_system_temp_level
// [.rodata] 3%s: %s: unsupported power role 0x%02lx

// [.rodata] 3%s: %s: Couldn't read TYPE_C_SRC_STATUS_REG rc=%d

// [.rodata] smb5_typec_state_change_irq_handler
// [.rodata] 6%s: %s: dcin_present= %d, usbin_present= %d, cp_reason = %d

// [.rodata] smblib_moisture_detection_enable
// [.rodata] 6%s: %s: enabling DPDM regulator

// [.rodata] charge_counter
// [.rodata] 6%s: %s: TYPE_C_SRC_STATUS_REG = 0x%02x

// [.rodata] 3%s: %s: Couldn't read CONNECTOR_TEMP_STATUS_REG, rc=%d

// [.rodata] smblib_get_typec_connector_temp_status
// [.rodata] smblib_usb_pd_adapter_allowance_override
// [.rodata] 3%s notify 2
// [.rodata] 3%s: %s: Couldn't disable DPDM rc=%d

// [.rodata] smblib_uusb_removal
// [.rodata] smblib_handle_hvdcp_3p0_auth_done
// [.rodata] Error in setting freq_boost rc=%d

// [.rodata] 3%s: %s: Couldn't enable VBUS in OTG mode rc=%d

// [.rodata] smblib_role_switch_failure
// [.rodata] 3%s: %s: Couldn't configure Soft Jeita rc=%d

// [.rodata] smblib_thermal_regulation_work
// [.rodata] 6%s: %s: float detected due to slow plug 

// [.rodata] 3%s: %s: Couldn't find FCC Main votable rc=%d

// [.rodata] 3%s: %s: Couldn't find votable PL_ENABLE_INDIRECT rc=%d

// [.rodata] qcom,flash-disable-soc
// [.rodata] 3%s: Incorrect SOH range [%d %d]

// [.rodata] status_change_work
// [.rodata] JEITA_FCC_SCALE_VOTER
// [.rodata] set_blank_status
// [.rodata] is_parallel_available
// [.rodata] pl_charge_type
// [.rodata] current_capability
// [.rodata] 3QCOM-BATT: %s: Couldn't set main fv, rc=%d

// [.rodata] shutdown_delay
// [.rodata] 3QCOM-BATT: %s: Failed to get IIO channel %s, rc=%d

// [.rodata] cp_manufacturer_show
// [.rodata] sc8541
// [.rodata] step-chg-state-change
// [.rodata] dcin-vashdn
// [.rodata] usb_input_current_settled
// [.rodata] usb_smb_en_reason
// [.rodata] usb_pd_in_hard_reset
// [.rodata] qcom,chg-inhibit-threshold-mv
// [.rodata] Couldn't configure mitigation rc=%d

// [.rodata] Couldn't configure DCDC_ENG_SDCDC_CFG5 rc=%d

// [.rodata] Couldn't configure CONN_THERM pull-up rc=%d

// [.rodata] Couldn't configure CHG_RCHG_SOC_REG rc=%d

// [.rodata] smblib_set_icl_current
// [.rodata] 3%s: %s: Couldn't get usb online property rc=%d

// [.rodata] 3%s : smb_charger is null,can not use

// [.rodata] 3%s: %s: Couldn't read CHGR_CFG2_REG rc=%d

// [.rodata] 3%s: %s: Couldn't vote to %s USB rc=%d

// [.rodata] QC_A_CP_ICL_MAX_VOTER
// [.rodata] smblib_set_prop_voltage_wls_output
// [.rodata] 3%s: %s: Couldn't read TYPE_C_CURRSRC_CFG_REG rc=%d

// [.rodata] OVERHEAT_LIMIT_VOTER
// [.rodata] 3%s: %s: Couldn't get ICL status rc=%d

// [.rodata] 3%s: %s: Couldn't write %s to USBIN_SUSPEND_BIT rc=%d

// [.rodata] current_now
// [.rodata] smblib_micro_usb_plugin
// [.rodata] smblib_lpd_launch_ra_open_work
// [.rodata] 3%s: %s: Couldn't enable CP_ACDRV in OTG mode rc=%d

// [.rodata] 6%s: %s: Current temperatures: 	DIE_TEMP: %d,	CONN_TEMP: %d,	SMB_TEMP: %d,	SKIN_TEMP: %d
THERMAL_STATUS: %d

// [.rodata] 3%s: %s: Couldn't configure SMB_EN, rc=%d

// [.rodata] pl_set_ship_mode
// [.rodata] 3QCOM-STEPCHG: %s: qg_load_battery_profile : get batt id error

// [.rodata] 3QCOM-STEPCHG: %s: Failed to read batt_id rc=%d

// [.rodata] qcom,max-voltage-uv
// [.rodata] qcom,ocv-based-step-chg
// [.rodata] generate_xm_charge_uvent
// [.rodata] NIGHT_CHARGING
// [.rodata] soc_decimal_rate_show
// [.rodata] 6QCOM-BATT: %s: chg_state enabling parallel

// [.rodata] 3QCOM-BATT: %s: Couldn't  get split current rc=%d

// [.rodata] bq25960
// [.rodata] 3QCOM-BATT: %s: %s Get night_charging: %d

// [.rodata] failed to register extcon device rc=%d

// [.rodata] 3Couldn't parse device tree rc=%d

// [.rodata] usbin-icl-change
// [.rodata] aicl-fail
// [.rodata] usb_smb_en_mode
// [.rodata] battery_set_ship_mode
// [.rodata] battery_die_health
// [.rodata] 3PMIC subtype %d not supported

// [.rodata] 3device tree node missing

// [.rodata] qcom,hw-skin-temp-mitigation
// [.rodata] qcom,en-skin-therm-mitigation
// [.rodata] Couldn't get charger_temp_max rc=%d

// [.rodata] 3%s failed to get soc_prop
// [.rodata] 3Invalid frequency %d Hz

// [.rodata] 3%s: %s: Couldn't set ICL override rc=%d

// [.rodata] 3VBAT_BASED_RECHG_BIT read %d

// [.rodata] 6%s: %s: skip ICL change DIE_TEMP %x

// [.rodata] smb5_typec_or_rid_detection_change_irq_handler
// [.rodata] HDC_IRQ_VOTER
// [.rodata] &chg->smb_lock
// [.rodata] is_cp_topo_vbatt
// [.rodata] batt_full_current
// [.rodata] smblib_usb_plugin_hard_reset_locked
// [.rodata] smblib_handle_sdp_enumeration_done
// [.rodata] 3%s: %s: Couldn't set FORCE_NULL rc=%d

// [.rodata] 3%s: %s: Couldn't disable uUSB factory mode detection rc=%d

// [.rodata] CHG_DISABLE
// [.rodata] 3SCHG-FLASH: %s: Couldn't configure Torch priority control rc=%d

// [.rodata] schgm_flash_torch_priority
// [.rodata] QNOVO_VOTER
// [.rodata] BATT_TEMP
// [.rodata] 3QCOM-STEPCHG: %s: Failed to read IIO prop %d rc=%d

// [.rodata] 3QCOM-STEPCHG: %s: Invalid STEP CHG index

// [.rodata] taper_fcc_step_chg
// [.rodata] 6QCOM-BATT: %s: %s needn't set drp to sink

// [.rodata] 3QCOM-BATT: %s: Failed to get batt-id rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't get parallel mode from parallel rc=%d

// [.rodata] pl_min_icl
// [.rodata] 3QCOM-BATT: %s: Couldn't get batt charge type rc=%d

// [.rodata] usb_icl_vote_callback
// [.rodata] 3QCOM-BATT: %s: Couldn't get voltage prop rc=%d

// [.rodata] auth_manufacturer
// [.rodata] Unknown

// [.rodata] Powered cable w/ sink
// [.rodata] Debug Accessory
// [.rodata] cp_manufacturer
// [.rodata] ds28e30
// [.rodata] blank_status_show
// [.rodata] 3iio device register failed rc=%d

// [.rodata] usb_voltage_vph
// [.rodata] main_input_current_settled
// [.rodata] qcom,chg-term-src
// [.rodata] vph_voltage
// [.rodata] Couldn't configure TYPE_C_DEBUG_ACCESS_SRC_CFG_REG rc=%d

// [.rodata] 3Couldn't register VCONN regulator rc=%d

// [.rodata] smb5_usb_port_set_prop
// [.rodata] charger
// [.rodata] PD_SUSPEND_SUPPORTED_VOTER
// [.rodata] SW_ICL_MAX_VOTER
// [.rodata] 6%s: %s: Get ship mode: %d!!

// [.rodata] smblib_set_prop_ship_mode
// [.rodata] smblib_set_prop_pd_in_hard_reset
// [.rodata] smb5_chg_state_change_irq_handler
// [.rodata] smblib_set_prop_pr_swap_in_progress
// [.rodata] 3%s: %s: Couldn't init qcom_step_chg_init rc=%d

// [.rodata] 3%s: %s: Couldn't disable dpdm regulator rc=%d

// [.rodata] ffc_chg_termination_current
// [.rodata] 3%s: %s: Couldn't read USBIN channel rc=%d

// [.rodata] smblib_get_prop_typec_mode
// [.rodata] 3%s: %s: Couldn't read DIE_TEMP_STATUS_REG, rc=%d

// [.rodata] smblib_usb_plugin_locked
// [.rodata] 6%s: %s: Un-registering typeC partner

// [.rodata] Error in setting freq_removal rc=%d

// [.rodata] 3%s: %s: Couldn't configure Hard Jeita rc=%d

// [.rodata] 3%s: %s: Couldn't get fv values for soft JEITA rc=%d

// [.rodata] 3%s: %s: icl_settled=%d

// [.rodata] 3%s: %s: Couldn't set typec source only mode rc=%d

// [.rodata] 3%s: %s: Couldn't to disable DPDM rc=%d

// [.rodata] 6%s: %s: No change in moisture protection status

// [.rodata] 3QCOM-STEPCHG: %s: Couldn't handle sw jeita rc = %d

// [.rodata] handle_jeita
// [.rodata] qcom,battery-data
// [.rodata] TAPER_STEPPER_VOTER
// [.rodata] 3QCOM-BATT: %s: Couldn't get adaptive voltage rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't get battery status rc=%d

// [.rodata] shipmode_count_reset
// [.rodata] audio_cctog_show
// [.rodata] night_charging_store
// [.rodata] dcin-en
// [.rodata] typec-vbus-change
// [.rodata] usb_qc_opti_disable
// [.rodata] qcom,hw-connector-mitigation
// [.rodata] qcom,adc-based-aicl
// [.rodata] Couldn't configure THERM_SRC reg rc=%d

// [.rodata] &chg->typec_lock
// [.rodata] 3Couldn't get usb present rc=%d

// [.rodata] 3%s: %s: Couldn't set ffc termination current:%d

// [.rodata] suspend
// [.rodata] 3%s: %s: dpdm_qc3p0_flag reset, val:%#04x

// [.rodata] 3%s: %s: Couldn't read DCIN_RT_STS rc=%d

// [.rodata] audio_get_prop_typec_mode
// [.rodata] 6%s: %s: power role already in %d, ignore!
// [.rodata] smblib_set_prop_pd_voltage_max
// [.rodata] 3%s: %s: Couldn't read USB_INT_RT_STS rc=%d

// [.rodata] PL_SMB_EN_VOTER
// [.rodata] 3%s: %s: set dpdm to continuous mode failed in dm pulse

// [.rodata] 3%s: %s: Couldn't set Fsw: invalid voltage %d

// [.rodata] FLOAT
// [.rodata] DCP_VOTER
// [.rodata] 3%s: %s: Couldn't turn on SUSPEND_ON_COLLAPSE_USBIN_BIT rc=%d

// [.rodata] typec_partner_unregister
// [.rodata] POWERED_CABLE_ONLY
// [.rodata] 3%s: %s: Failed to role switch rc=%d

// [.rodata] jeita_update_work
// [.rodata] smblib_uusb_otg_work
// [.rodata] smblib_pr_swap_detach_work
// [.rodata] 6%s: %s: Role changed successfully to SOURCE
// [.rodata] 3%s: %s: Couldn't set 1 percent CC_ID duty cycle rc=%d

// [.rodata] SMB_EN_OVERRIDE
// [.rodata] of_batterydata_get_best_aged_profile
// [.rodata] Failed to get channels, %d

// [.rodata] capacity
// [.rodata] 3QCOM-STEPCHG: %s: batt authentic fail, limit charging current

// [.rodata] pl_input_suspend
// [.rodata] validate_parallel_icl
// [.rodata] PL_HW_ABSENT_VOTER
// [.rodata] night_charging_vote_callback
// [.rodata] pl_register_notifier
// [.rodata] battery_type_show
// [.rodata] smart_chg
// [.rodata] night_charging_show
// [.rodata] failed to allocate extcon device rc=%d

// [.rodata] 3parent regmap is missing

// [.rodata] 3Couldn't initialize typec class rc=%d

// [.rodata] input-current-limiting
// [.rodata] bat-therm-or-id-missing
// [.rodata] typec-cc-state-change
// [.rodata] typec-vconn-oc
// [.rodata] usb_moisture_detected
// [.rodata] apdo_curr
// [.rodata] sm_fastcharge_mode
// [.rodata] qcom,disable-fcc-restriction
// [.rodata] qcom,distinguish-qc-class-ab
// [.rodata] qcom,lpd-disable
// [.rodata] Couldn't enable uUSB factory mode c=%d

// [.rodata] 3Couldn't register USB pc_port power supply

// [.rodata] 3%s: %s: Couldn't set SDP ICL rc=%d

// [.rodata] 3%s: %s: Couldn't read TYPE_C_CCOUT_CONTROL_REG rc=%d

// [.rodata] CHG_TERMINATION_VOTER
// [.rodata] 3%s: qpnp_smb5_notifier_call_chain error:%d

// [.rodata] 6dp_dm is controled by our self

// [.rodata] 6%s: %s: DP_DM_DM_PULSE rc=%d cnt=%d

// [.rodata] 6%s: %s: force dc online due to pd charge

// [.rodata] smblib_get_prop_usb_voltage_now
// [.rodata] 6%s: %s: TYPE_C_MISC_STATUS_REG = 0x%02x

// [.rodata] 6%s: %s: power role change: %d --> %d!
// [.rodata] Error in setting AICL threshold rc=%d

// [.rodata] Couldn't set dc voltage to 2*vph  rc=%d

// [.rodata] smb5_wdog_bark_irq_handler
// [.rodata] 3%s: %s: Couldn't config pl charger rc=%d

// [.rodata] smblib_set_usb_suspend
// [.rodata] Couldn't select SMB charger rc=%d

// [.rodata] voltage_max
// [.rodata] smblib_rsbux_low
// [.rodata] 3%s: %s: Couldn't read SBU1 rc=%d

// [.rodata] 3%s: %s: Couldn't find votable QUICK_CHARGE_TYPE_CHANGED rc=%d

// [.rodata] 3%s: failed to read battery id range

// [.rodata] 6%s: %s age level %d found

// [.rodata] qcom,soh-range
// [.rodata] 3QCOM-BATT: %s: set blank_status=%d g_audio_cctog= %d

// [.rodata] PL_AWAKE
// [.rodata] 3QCOM-BATT: %s: Couldn't set parallel charger fcc, rc=%d

// [.rodata] typec_mode
// [.rodata] 3QCOM-BATT: %s: g_blank_status store=%d g_audio_cctog %d

// [.rodata] audio_cctog_store
// [.rodata] 0QCOM-BATT: %s: Failed to write ship mode: %d

// [.rodata] vph-drop-prechg
// [.rodata] dcin-pon
// [.rodata] typec-try-snk-src-detect
// [.rodata] main_flash_active
// [.rodata] main_irq_status
// [.rodata] dc_input_voltage_regulation
// [.rodata] qcom,fv-max-uv
// [.rodata] qcom,chg-term-base-current-ma
// [.rodata] skin_temp
// [.rodata] Couldn't configure CHGR_NO_SAMPLE_FOR_TERM_RCHG_CFG rc=%d

// [.rodata] 3Get prop %d is not supported in pc_port

// [.rodata] 3Couldn't get irq %s byname

// [.rodata] 3Couldn't create charger debugfs rc=%ld

// [.rodata] 3Couldn't create force_batt_psy_update file rc=%ld

// [.rodata] 3Couldn't get batt charge type rc=%d

// [.rodata] smblib_rerun_apsd
// [.rodata] smblib_config_charger_on_debug_battery
// [.rodata] smblib_get_irq_status
// [.rodata] 6%s: %s: disabling VCONN

// [.rodata] 6%s: %s: disabling OTG

// [.rodata] smblib_get_prop_batt_cycle
// [.rodata] 3%s: %s: Couldn't read POWER_PATH_STATUS rc=%d

// [.rodata] 6%s: %s: TYPE_C_MODE_CFG_REG = 0x%02x

// [.rodata] Couldn't get ship mode, rc=%d

// [.rodata] 6%s: %s: USBIN_UV storm at max AICL threshold

// [.rodata] SOURCE
// [.rodata] detached
// [.rodata] 3%s: %s: Couldn't configure snarl wdog tmout, rc=%d

// [.rodata] SOURCE_DEFAULT
// [.rodata] typec_src_removal
// [.rodata] smblib_raise_qc3_vbus_work
// [.rodata] MOISTURE_VOTER
// [.rodata] smblib_moisture_protection_work
// [.rodata] BAT_TEMP_IRQ_DISABLE
// [.rodata] 3%s: %s: Couldn't %s charging rc=%d

// [.rodata] PL_QNOVO_VOTER
// [.rodata] 3QCOM-STEPCHG: %s: Couldn't find profile

// [.rodata] qcom,jeita-fcc-scaling
// [.rodata] 6QCOM-BATT: %s: %s set drp status to try_sink

// [.rodata] PL_INDIRECT_VOTER
// [.rodata] pl_constant_charge_current_max
// [.rodata] 3QCOM-BATT: %s: Couldn't set constant_charge_current_max, rc=%d

// [.rodata] disabled
// [.rodata] 6QCOM-BATT: %s: Main FCC Stepper parameters: target_main_fcc: %d, current_main_fcc: %d main_step_direction: %d, main_step_count: %d, main_residual_fcc: %d override_main_fcc_ua: %d override: %d

// [.rodata] restrict_cur
// [.rodata] bq_manufacturer
// [.rodata] batt_manufacturer
// [.rodata] 6QCOM-BATT: %s: %s:apdo_max is %d 

// [.rodata] 3QCOM-BATT: %s: %s Set smart_batt to %d

// [.rodata] shipmode_register_notifier
// [.rodata] 3Couldn't create sysfs files rc=%d

// [.rodata] otg-fail
// [.rodata] usb_pd_voltage_max
// [.rodata] usb_typec_src_rp
// [.rodata] dc_aicl_done
// [.rodata] battery_charging_limited
// [.rodata] usb_in_current
// [.rodata] smb_temp
// [.rodata] Couldn't disable HW thermal regulation rc=%d

// [.rodata] interrupt-names
// [.rodata] 3%s: %s: %s: Couldn't write 0x%02x to 0x%04x rc=%d

// [.rodata] 3%s: %s: Couldn't set HC ICL rc=%d

// [.rodata] 3%s: %s: Couldn't get HC ICL rc=%d

// [.rodata] smblib_get_prop_batt_status
// [.rodata] 3%s: %s: Couldn't read AICL_STATUS rc=%d

// [.rodata] 3%s: %s: Couldn't vote to %s DC rc=%d

// [.rodata] enable
// [.rodata] 3%s: %s: Couldn't set EXIT_SNK_BASED_ON_CC rc=%d

// [.rodata] smb5_batt_temp_changed_irq_handler
// [.rodata] 6%s: %s: Reached max AICL threshold resctricting ICL to 100mA

// [.rodata] 3%s: %s: Couldn't set ICL options rc=%d

// [.rodata] typec_src_insertion
// [.rodata] 3failed to register typec_partner rc=%d

// [.rodata] CTM_VOTER
// [.rodata] 3%s: %s: Couldn't restore aicl_cont_threshold, rc=%d
// [.rodata] 3%s: %s: Failed to set DRP mode, rc=%d

// [.rodata] 6%s: %s: Charge termination WA alarm triggered %lld

// [.rodata] smblib_smb_disable_override_vote_callback
// [.rodata] 3QCOM-STEPCHG: %s: Couldn't read batt_soc fail rc=%d

// [.rodata] 3QCOM-STEPCHG: %s: Set fastcharge mode failed, rc=%d

// [.rodata] 3QCOM-STEPCHG: %s: Couldn't read recharge mode fail rc=%d

// [.rodata] qcom,remote-fg
// [.rodata] qcom,soc-based-step-chg
// [.rodata] 6QCOM-BATT: %s: %s set drp status to sink

// [.rodata] 3QCOM-BATT: %s: uevent test : %s %s count=%d

// [.rodata] debug_mask
// [.rodata] 3QCOM-BATT: %s: Couldn't get fcc_max rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't get aicl settled value rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't get DC Present status, rc=%d

// [.rodata] 3QCOM-BATT: %s: Invalid fcc stepper step size, value 0

// [.rodata] 6QCOM-BATT: %s: Parallel FCC Stepper parameters: target_pl_fcc: %d current_pl_fcc: %d parallel_step_direction: %d, parallel_step_count: %d, parallel_residual_fcc: %d

// [.rodata] fcc_stepping_in_progress
// [.rodata] auth_batt_id_show
// [.rodata] 3QCOM-BATT: %s: %s Get smart_batt: %d

// [.rodata] dcin-revi
// [.rodata] recharg_mode
// [.rodata] qcom,usb-icl-ua
// [.rodata] qcom,sec-charger-config
// [.rodata] qcom,hvdcp2-max-icl-ua
// [.rodata] HW_LIMIT_VOTER
// [.rodata] failed to read TYPE_C_SNK_STATUS_REG rc=%d

// [.rodata] Couldn't set USBIN_LOAD_CFG_REG rc=%d

// [.rodata] Couldn't change float charger setting rc=%d

// [.rodata] qcom,smb5-vconn
// [.rodata] 3%s: %s: Couldn't resume input rc=%d

// [.rodata] 3%s: %s: Couldn't read TYPE_C_INTRPT_ENB_SOFTWARE_CTRL rc=%d

// [.rodata] 3%s: %s: Couldn't get usb present prop rc=%d

// [.rodata] 3%s: %s: Couldn't write to RCHG_SOC_THRESHOLD_CFG_REG rc=%d

// [.rodata] 3%s: %s: Couldn't disable ADC channels rc=%d

// [.rodata] 3Error in reading temp channel, rc=%d

// [.rodata] smblib_set_prop_usb_voltage_max_limit
// [.rodata] Couldn't enable secondary charger rc=%d

// [.rodata] smblib_get_prop_fcc_delta
// [.rodata] smblib_get_charge_current
// [.rodata] smblib_lpd_recheck_timer
// [.rodata] 6%s: %s: Ignoring for micro USB

// [.rodata] LPD_VOTER
// [.rodata] 3%s: %s: set dpdm to continuous mode before dm pulse

// [.rodata] 6%s: %s: APSD=%s PD=%d QC3P5=%d

// [.rodata] smblib_read_usbin_voltage_chan
// [.rodata] cp_ilim
// [.rodata] smblib_lpd_ra_open_work
// [.rodata] smblib_float_retry_work
// [.rodata] smblib_chg_termination_work
// [.rodata] 3SCHG-FLASH: %s: Couldn't read flash status_3 rc=%d

// [.rodata] 3get prop %d is not supported

// [.rodata] 3QCOM-STEPCHG: %s: %s length (%d) should be multiple of %d

// [.rodata] qcom_batt_init
// [.rodata] quick_charge_type_show
// [.rodata] HVDCP_HW_INOV_DIS
// [.rodata] 3QCOM-BATT: %s: Couldn't change slave suspend state rc=%d

// [.rodata] BATT_PROFILE_VOTER
// [.rodata] get_adapter_icl_based_ilim
// [.rodata] MAIN_FCC_VOTER
// [.rodata] 3QCOM-BATT: %s: Couldn't change input suspend state rc=%d

// [.rodata] 3QCOM-BATT: %s: %s Set night_charging to %d

// [.rodata] 3Couldn't initialize batt psy rc=%d

// [.rodata] typec-or-rid-detect-change
// [.rodata] typec-legacy-cable-detect
// [.rodata] battery_fcc_stepper_enable
// [.rodata] AICL CONT threshold
// [.rodata] qcom,auto-recharge-vbat-mv
// [.rodata] qcom,otg-cl-ua
// [.rodata] 3qcom,auto-recharge-soc is incorrect

// [.rodata] Couldn't read U_USB config rc=%d

// [.rodata] Couldn't disable DC Input missing poller rc=%d

// [.rodata] 3failed to register typec_port rc=%d

// [.rodata] 3%s: %s: Couldn't get temp prop rc=%d

// [.rodata] 6%s: %s: TYPE_C_STATUS_4 = 0x%02x

// [.rodata] smblib_get_skin_temp_status
// [.rodata] smb5_usb_source_change_irq_handler
// [.rodata] 6%s: %s: Scheduling OTG work

// [.rodata] 6%s: %s: IRQ: cc-state-change; Type-C %s detected

// [.rodata] 3%s: %s: Couldn't set tCC debounce rc=%d

// [.rodata] smblib_deinit
// [.rodata] USB_SUSPEND_VOTER
// [.rodata] 3%s: %s: Couldn't read USBIN_CMD_IL rc=%d

// [.rodata] 3%s: %s: set dpdm to continuous mode failed in dp pulse

// [.rodata] 3%s: %s: Couldn't read SOC value, rc=%d

// [.rodata] rising
// [.rodata] 6%s: %s: IRQ: slow-plugin-timeout %s

// [.rodata] smblib_die_rst_icl_regulate
// [.rodata] dcin_aicl
// [.rodata] 6%s: %s: timer expired, enabling parallel

// [.rodata] 6%s: %s: TYPE_C_U_USB_STATUS = 0x%02x OTG=%d

// [.rodata] 6%s: %s: APSD Extented timer timeout at %lld

// [.rodata] 6%s: %s: Role changed successfully to SINK
// [.rodata] DC_SUSPEND
// [.rodata] pl_charger_temp
// [.rodata] smblib_register_notifier
// [.rodata] 3%s: Less number of profiles to support SOH

// [.rodata] handle_step_chg_cycle_count
// [.rodata] 3QCOM-STEPCHG: %s: Count %s failed, rc=%d

// [.rodata] handle_usb_change
// [.rodata] 3QCOM-BATT: %s: Couldn't get USB Present status, rc=%d

// [.rodata] cp_min_icl
// [.rodata] soc_decimal_rate
// [.rodata] auth_chip_ok
// [.rodata] USB_PD
// [.rodata] 3QCOM-BATT: %s: Failed to get sc_bus_current rc=%d

// [.rodata] 3Failed in post init rc=%d

// [.rodata] flash-state-change
// [.rodata] qpnp-smb5
// [.rodata] usb_typec_mode
// [.rodata] usb_connector_type
// [.rodata] usb_typec_accessory_mode
// [.rodata] qcom,auto-recharge-soc
// [.rodata] qcom,smb-internal-pull-kohm
// [.rodata] 3Couldn't set otg current limit rc=%d

// [.rodata] smblib_hvdcp_detect_enable
// [.rodata] smblib_get_prop_batt_capacity_level
// [.rodata] 3%s: %s: Couldn't read CHGR_ENG_CHARGING_CFG_REG rc=%d

// [.rodata] 3%s: %s: Couldn't read CHGR_ADC_ITERM_UP_THD_MSB_REG rc=%d

// [.rodata] SW_QC3_VOTER
// [.rodata] 3Failed to get batt_psy 

// [.rodata] smblib_get_prop_typec_power_role
// [.rodata] 6%s: %s: disable type-c interrupts for power role locking

// [.rodata] 3%s: %s: Couldn't set FSW for voltage %duV rc=%d

// [.rodata] smb5_switcher_power_ok_irq_handler
// [.rodata] 3%s: %s: Couldn't get rtc device

// [.rodata] 6%s: %s: %s

// [.rodata] smblib_set_usb_pd_fsw
// [.rodata] 3%s: %s: Couldn't write OTG_FAULT_CONDITION_CFG_REG rc=%d

// [.rodata] qcom,jeita-soft-hys-thresholds
// [.rodata] 6%s: %s: Parallel %s as per SW thermal regulation

// [.rodata] 3%s: %s: Couldn't read charge_full prop, rc=%d

// [.rodata] 3%s: %s: Couldn't read voltage_now prop, rc=%d

// [.rodata] 3SCHG-FLASH: %s: Couldn't read FLASH_STATUS_5 rc=%d

// [.rodata] 3QCOM-STEPCHG: %s: Couldn't handle step cycle count rc = %d

// [.rodata] step_chg_register_notifier
// [.rodata] TAPER_END_VOTER
// [.rodata] 3QCOM-BATT: %s: couldn't register pl_data sysfs class rc = %d

// [.rodata] 3QCOM-BATT: %s: Couldn't register reboot notifier rc = %d

// [.rodata] 6QCOM-BATT: %s: Split total_current_ua=%d total_settled_ua=%d main_settled_ua=%d slave_ua=%d

// [.rodata] 3QCOM-BATT: %s: Can't reduce FCC any more

// [.rodata] cp_parallel_mode
// [.rodata] 3QCOM-BATT: %s: Couldn't set float on parallel rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't set main current_max, rc=%d

// [.rodata] 6QCOM-BATT: %s: Couldn't read primary charger FCC upper limit, rc=%d

// [.rodata] 3QCOM-BATT: %s: Couldn't set parallel fcc, rc=%d

// [.rodata] 6QCOM-BATT: %s: FCC Stepper parameters: step_fcc=%d

// [.rodata] USB_DCP
// [.rodata] is_third_cp_chan_valid
// [.rodata] stick
// [.rodata] COSMX
// [.rodata] smart_batt_store
// [.rodata] failed to configure extcon capabilities

// [.rodata] dcin-ov
// [.rodata] vout-up
// [.rodata] usb_adapter_cc_mode
// [.rodata] main_force_main_icl
// [.rodata] dc_real_type
// [.rodata] battery_input_current_limited
// [.rodata] battery_charge_done
// [.rodata] current_qnovo
// [.rodata] pm8150b_charger
// [.rodata] dcdc icl max status
// [.rodata] mi,use_third_cp
// [.rodata] mi,support-ffc
// [.rodata] qcom,hvdcp3-max-icl-ua
// [.rodata] Couldn't set CHGR_FAST_CHARGE_SAFETY_TIMER_CFG_REG rc=%d

// [.rodata] Couldn't enable ADC channel rc=%d

// [.rodata] Couldn't configure Type-C interrupts rc=%d

// [.rodata] ITERM threshold out of range rc=%d

// [.rodata] force_usb_psy_update
// [.rodata] 3Couldn't create force_usb_psy_update file rc=%ld

// [.rodata] io-channel-names
// [.rodata] smblib_icl_override
// [.rodata] 3maintain_ffc_iterm:%d

// [.rodata] 3%s: %s: Couldn't read ADC config rc=%d

// [.rodata] 3%s: %s: Couldn't read vph channel rc=%d

// [.rodata] smblib_get_prop_typec_cc_orientation
// [.rodata] 3%s: %s: invalid min voltage %duV rc=%d

// [.rodata] qcom,usbpd-phandle
// [.rodata] 3%s: %s: Couldn't read TYPE_C_STATE_MACHINE_STATUS_REG rc=%d

// [.rodata] 3%s: %s: Couldn't un-vote for USB ICL rc=%d

// [.rodata] 6%s: %s: IRQ: %s %s

// [.rodata] smblib_handle_rp_change
// [.rodata] SINK_DEBUG_ACCESSORY
// [.rodata] 6%s: %s: disabling VBUS in OTG mode

// [.rodata] 6usb_present is %d

// [.rodata] 3%s: %s: Couldn't read DIE TEMP channel, rc=%d

// [.rodata] 3%s: %s: Couldn't read CONN TEMP channel, rc=%d

// [.rodata] 3SCHG-FLASH: %s: Couldn't reset S2_LATCH reset rc=%d

// [.rodata] 6%s:mtbf_current is %d 

// [.rodata] JEITA_VOTER
// [.rodata] 3QCOM-STEPCHG: %s: Couldn't get chg_term_current, rc=%d

// [.rodata] 6QCOM-STEPCHG: %s: temp = %d, FCM = %d, fcc_ua(%d) = %d, fv_uv(%d) = %d, iterm = %d

// [.rodata] STEP_CHG_VOTER
// [.rodata] qcom,vbat-avg-based-step-chg
// [.rodata] 3QCOM-BATT: %s: Couldn't get batt capacity rc=%d

// [.rodata] PL_ENABLE_INDIRECT
// [.rodata] 3QCOM-BATT: %s: %s screen_on is settled to %d, audio_on: %d, plugin_val: %d

// [.rodata] get_fcc_stepper_params
// [.rodata] RESTRICT_CHG_VOTER
// [.rodata] USB_ACA
// [.rodata] Parallel
// [.rodata] Wipower
// [.rodata] authentic
// [.rodata] authentic_show
// [.rodata] 3Couldn't initialize vbus regulator rc=%d

// [.rodata] concurrent-mode-disable
// [.rodata] typec-vpd-detect
// [.rodata] usb_apsd_timeout
// [.rodata] usb otg current limit
// [.rodata] DC input current limit
// [.rodata] qcom,sw-jeita-enable
// [.rodata] qcom,thermal-mitigation
// [.rodata] smblib_get_icl_current
// [.rodata] 3%s: %s: Couldn't read CMD_OTG rc=%d
// [.rodata] smblib_get_prop_batt_temp
// [.rodata] NON_FFC_VFLOAT_VOTER
// [.rodata] 3fastcharge mode:%d iterm:%d

// [.rodata] THERMAL_DAEMON_VOTER
// [.rodata] 3%s: %s: dpdm_qc3p0_flag set

// [.rodata] 6%s: %s: %d

// [.rodata] 3Failed to get pd handle %ld

// [.rodata] smb5_default_irq_handler
// [.rodata] smb5_dcin_uv_irq_handler
// [.rodata] 3%s: %s: set dpdm to continuous mode finished in dp pulse

// [.rodata] 6%s: %s: WDOG SNARL INT %s

// [.rodata] 3%s: %s: Couldn't un-vote DCP from USB ICL rc=%d

// [.rodata] 3%s: %s: Failed to detect valid battery profile %d

// [.rodata] 3%s: %s: Couldn't get Soft Jeita hysteresis thresholds rc=%d

// [.rodata] smblib_icl_change_work
// [.rodata] 3%s: %s: Couldn't run sw thermal regulation %d

// [.rodata] TEMP_CHANGE_IRQ_DISABLE
// [.rodata] 6QCOM-STEPCHG: %s: step: cycle_count is %d

// [.rodata] 3QCOM-STEPCHG: %s: Couldn't read %s property rc=%d

// [.rodata] 3QCOM-STEPCHG: %s: temp:%d disable fastcharge mode

// [.rodata] handle_parallel_in_taper
// [.rodata] pl_fcc_main_vote_callback
// [.rodata] pl_fcc_vote_callback
// [.rodata] parallel_pct
// [.rodata] Nothing attached
// [.rodata] auth_manufacturer_show
// [.rodata] mtbf_current
// [.rodata] 3Invalid comp clamp level=%d

// [.rodata] chgr-error
// [.rodata] bat-terminal-missing
// [.rodata] dcin-uv
// [.rodata] usb_voltage_max_limit
// [.rodata] main_fcc_max
// [.rodata] main_voltage_max
// [.rodata] mid_voltage
// [.rodata] usb_in_voltage
// [.rodata] qcom,otg-deglitch-time-ms
// [.rodata] qcom,uusb-moisture-protection-enable
// [.rodata] Couldn't configure connector type rc=%d

// [.rodata] Couldn't read USB mode rc=%d

// [.rodata] 6%s: %s: %s = %d (0x%02x)

// [.rodata] 3%s: %s: Couldn't get usb present rc = %d

// [.rodata] smblib_vconn_regulator_is_enabled
// [.rodata] 3%s: %s: Couldn't disable OTG regulator rc=%d

// [.rodata] 6vbat_uv(%d), capacity(%d), capacity_level(%d) 

// [.rodata] 3Couldn't get debug battery prop rc=%d

// [.rodata] QUICK_CHARGE_TYPE_CHANGED_VOTER
// [.rodata] 6%s: %s: Ignoring port type request type = %d swap_in_progress = %d

// [.rodata] 3%s: %s: failed to register partner rc =%d

// [.rodata] 3%s: %s: Couldn't enable DRP rc=%d

// [.rodata] smblib_get_jeita_cc_delta
// [.rodata] falling
// [.rodata] HVDCP3_START_ICL_VOTER
// [.rodata] typec_partner_register
// [.rodata] 6%s: %s: hit min ICL: stop

// [.rodata] smblib_pr_lock_clear_work
// [.rodata] 3%s: %s: Couldn't read voltage_max prop, rc=%d

// [.rodata] 6%s: %s: Chg Term WA readings: cc_soc: %d, cc_soc_ref: %d, delay: %d vbat_now %d term_vbat %d

// [.rodata] 3%s: %s: Couldn't disable moisture detection interrupt rc=%d

// [.rodata] 3SCHG-FLASH: %s: Couldn't read FLASH STATUS_2 rc=%d

// [.rodata] 3SCHG-FLASH: %s: Couldn't write force boost control reg rc=%d

// [.rodata] 3%s: %s: No battery id resistor found

// [.rodata] 'int (struct device *, int, int *)'
// [.rodata] 'int (struct device *, int, int)'
// [.rodata] 'int (struct power_supply *, enum power_supply_property, const union power_supply_propval *)'
// [.rodata] 'int (struct smb_chg_param *, unsigned char)'
// [.rodata] 'int (struct smb_chg_param *, int, unsigned char *)'
// [.rodata] 'void (void)'
// [__ksymtab_strings] qg_batt_get_capacity
// [__ksymtab_strings] qpnp_smb5_reg_notifier
// [__ksymtab_strings] qpnp_smb5_unreg_notifier
// [__ksymtab_strings] qg_batt_get_voltage
// [__ksymtab_strings] set_fv_ageing
// [__ksymtab_strings] g_touchscreen_usb_pulgin
// [__ksymtab_strings] cid_set_prop_typec_power_role
// [__ksymtab_strings] set_blank_status
// [__ksymtab_strings] audio_get_prop_typec_mode
// [__ksymtab_strings] get_fv_ageing
// [__ksymtab_strings] qpnp_smb5_notifier_call_chain
// [__ksymtab_strings] qpnp_smb5_notifier
// [__ksymtab_strings] smblib_enable_ship_mode
// [.modinfo] description=QPNP SMB5 Charger Driver
// [.modinfo] license=GPL v2
// [.modinfo] license=GPL v2
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=qpnp_smb5_main
// [.modinfo] intree=Y
// [.modinfo] depends=qcom-pmic-voter,usbpd
// [.modinfo] scmversion=gaf44d52a5e5f
// [__versions] module_layout
// [__versions] memset
// [__versions] __stack_chk_fail
// [__versions] devm_kfree
// [__versions] devm_iio_channel_get
// [__versions] of_get_next_child
// [__versions] ktime_get_with_offset
// [__versions] jiffies
// [__versions] iio_channel_release
// [__versions] pm_relax
// [__versions] of_find_node_by_name
// [__versions] vote_override
// [__versions] typec_set_pwr_role
// [__versions] typec_set_data_role
// [__versions] typec_register_partner
// [__versions] mod_timer
// [__versions] jiffies_to_msecs
// [__versions] typec_unregister_partner
// [__versions] extcon_set_property
// [__versions] extcon_set_state_sync
// [__versions] alarm_expires_remaining
// [__versions] disable_irq_nosync
// [__versions] enable_irq
// [__versions] _raw_spin_unlock
// [__versions] _raw_spin_lock
// [__versions] usleep_range_state
// [__versions] regulator_disable
// [__versions] regulator_enable
// [__versions] devm_regulator_get
// [__versions] regmap_update_bits_base
// [__versions] del_timer_sync
// [__versions] alarm_cancel
// [__versions] pm_stay_awake
// [__versions] devm_usbpd_get_by_phandle
// [__versions] cancel_delayed_work
// [__versions] alarm_start_relative
// [__versions] is_client_vote_enabled
// [__versions] is_client_vote_enabled_locked
// [__versions] rdev_get_drvdata
// [__versions] mutex_unlock
// [__versions] mutex_lock
// [__versions] of_property_match_string
// [__versions] regmap_bulk_write
// [__versions] regmap_write
// [__versions] regmap_bulk_read
// [__versions] regmap_read
// [__versions] platform_driver_unregister
// [__versions] disable_irq
// [__versions] thermal_cooling_device_unregister
// [__versions] sysfs_remove_groups
// [__versions] simple_attr_open
// [__versions] simple_attr_release
// [__versions] debugfs_attr_write
// [__versions] debugfs_attr_read
// [__versions] no_llseek
// [__versions] debugfs_create_file
// [__versions] irq_set_irq_wake
// [__versions] devm_request_threaded_irq
// [__versions] of_irq_get_byname
// [__versions] typec_register_port
// [__versions] thermal_cooling_device_register
// [__versions] thermal_of_cooling_device_register
// [__versions] ___ratelimit
// [__versions] power_supply_get_drvdata
// [__versions] devm_power_supply_register
// [__versions] devm_regulator_register
// [__versions] of_prop_next_string
// [__versions] of_get_next_available_child
// [__versions] of_device_get_match_data
// [__versions] __devm_iio_device_register
// [__versions] sysfs_create_groups
// [__versions] device_init_wakeup
// [__versions] alarm_init
// [__versions] alarmtimer_get_rtcdev
// [__versions] dev_get_regmap
// [__versions] __mutex_init
// [__versions] devm_iio_device_alloc
// [__versions] __platform_driver_register
// [__versions] extcon_set_property_capability
// [__versions] devm_extcon_dev_register
// [__versions] devm_extcon_dev_allocate
// [__versions] srcu_notifier_call_chain
// [__versions] srcu_notifier_chain_unregister
// [__versions] srcu_notifier_chain_register
// [__versions] system_long_wq
// [__versions] kmalloc_caches
// [__versions] register_reboot_notifier
// [__versions] kstrtoint
// [__versions] kstrtoull
// [__versions] is_override_vote_enabled
// [__versions] is_override_vote_enabled_locked
// [__versions] iio_channel_get
// [__versions] get_client_vote_locked
// [__versions] power_supply_changed
// [__versions] get_effective_result_locked
// [__versions] queue_work_on
// [__versions] rerun_election
// [__versions] debugfs_create_u32
// [__versions] debugfs_create_dir
// [__versions] kmem_cache_alloc_trace
// [__versions] __msecs_to_jiffies
// [__versions] scnprintf
// [__versions] __cfi_slowpath_diag
// [__versions] cancel_work_sync
// [__versions] unregister_reboot_notifier
// [__versions] destroy_votable
// [__versions] __class_register
// [__versions] create_votable
// [__versions] free_pages
// [__versions] kobject_uevent_env
// [__versions] get_zeroed_page
// [__versions] system_wq
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] queue_delayed_work_on
// [__versions] __pm_stay_awake
// [__versions] power_supply_reg_notifier
// [__versions] of_property_read_variable_u32_array
// [__versions] of_property_count_elems_of_size
// [__versions] of_find_property
// [__versions] of_property_read_string
// [__versions] of_find_node_by_phandle
// [__versions] of_get_property
// [__versions] get_effective_result
// [__versions] get_client_vote
// [__versions] iio_write_channel_raw
// [__versions] power_supply_set_property
// [__versions] find_votable
// [__versions] ktime_get
// [__versions] iio_read_channel_processed
// [__versions] power_supply_get_by_name
// [__versions] __pm_relax
// [__versions] power_supply_get_property
// [__versions] devm_kmalloc
// [__versions] power_supply_unreg_notifier
// [__versions] cancel_delayed_work_sync
// [__versions] wakeup_source_unregister
// [__versions] delayed_work_timer_fn
// [__versions] init_timer_key
// [__versions] wakeup_source_register
// [__versions] _printk
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .data..percpu
// [.shstrtab] .rela.exit.text
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] .bss
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .rela___ksymtab_gpl+qpnp_smb5_notifier
// [.shstrtab] .rela___kcrctab_gpl+qpnp_smb5_notifier
// [.shstrtab] .rela.data.generate_xm_charge_uvent.envp
// [.shstrtab] .modinfo
// [.shstrtab] .rela.rodata.step_chg_ext_iio_chan
// [.shstrtab] __ksymtab_gpl
// [.shstrtab] __kcrctab_gpl
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .rela___ksymtab+set_fv_ageing
// [.shstrtab] .rela___kcrctab+set_fv_ageing
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] __ksymtab
// [.shstrtab] .symtab
// [.shstrtab] __kcrctab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] power_supply_set_property
// [.strtab] extcon_set_property
// [.strtab] power_supply_get_property
// [.strtab] of_get_property
// [.strtab] of_find_property
// [.strtab] schgm_flash_torch_priority
// [.strtab] extcon_set_property_capability
// [.strtab] smblib_set_prop_batt_capacity
// [.strtab] smblib_get_prop_batt_capacity
// [.strtab] __kstrtabns_qg_batt_get_capacity
// [.strtab] __crc_qg_batt_get_capacity
// [.strtab] __kstrtab_qg_batt_get_capacity
// [.strtab] __ksymtab_qg_batt_get_capacity
// [.strtab] class_attr_real_capacity
// [.strtab] smb5_init_batt_psy
// [.strtab] smb5_init_usb_port_psy
// [.strtab] smb5_init_dc_psy
// [.strtab] smb5_init_usb_psy
// [.strtab] smblib_config_charger_on_debug_battery
// [.strtab] strncpy
// [.strtab] memcpy
// [.strtab] init_timer_key
// [.strtab] smb5_request_interrupt.__key
// [.strtab] qcom_batt_init.__key
// [.strtab] smblib_init.__key
// [.strtab] smb5_init_typec_class.__key
// [.strtab] smb5_probe.__key
// [.strtab] set_smb5_rdy
// [.strtab] __kstrtabns_is_smb5_rdy
// [.strtab] __crc_is_smb5_rdy
// [.strtab] __kstrtab_is_smb5_rdy
// [.strtab] __ksymtab_is_smb5_rdy
// [.strtab] of_property_read_variable_u32_array
// [.strtab] class_attr_shutdown_delay
// [.strtab] smblib_get_prop_input_current_max
// [.strtab] smblib_set_prop_sdp_current_max
// [.strtab] smblib_set_prop_pd_current_max
// [.strtab] smblib_set_prop_dc_current_max
// [.strtab] smblib_get_prop_dc_current_max
// [.strtab] class_attr_apdo_max
// [.strtab] smblib_get_prop_system_temp_level_max
// [.strtab] update_sw_icl_max
// [.strtab] smblib_set_prop_pd_voltage_max
// [.strtab] smblib_get_prop_dc_voltage_max
// [.strtab] smblib_get_prop_usb_voltage_max
// [.strtab] __pm_relax
// [.strtab] smblib_hvdcp3_set_fsw
// [.strtab] smblib_get_batt_current_now
// [.strtab] smblib_get_prop_usb_current_now
// [.strtab] smblib_get_prop_vph_voltage_now
// [.strtab] smblib_get_prop_dc_voltage_now
// [.strtab] smblib_get_prop_usb_voltage_now
// [.strtab] smblib_rsbux_low
// [.strtab] real_capacity_show
// [.strtab] shutdown_delay_show
// [.strtab] apdo_max_show
// [.strtab] smart_batt_show
// [.strtab] cp_bus_current_show
// [.strtab] mtbf_current_show
// [.strtab] shipmode_count_reset_show
// [.strtab] slave_pct_show
// [.strtab] blank_status_show
// [.strtab] fcc_stepping_in_progress_show
// [.strtab] restrict_cur_show
// [.strtab] batt_manufacturer_show
// [.strtab] cp_manufacturer_show
// [.strtab] auth_manufacturer_show
// [.strtab] typec_cc_orientation_show
// [.strtab] version_show
// [.strtab] thermal_level_show
// [.strtab] soc_decimal_show
// [.strtab] chip_ok_show
// [.strtab] audio_cctog_show
// [.strtab] night_charging_show
// [.strtab] smart_chg_show
// [.strtab] restrict_chg_show
// [.strtab] soc_decimal_rate_show
// [.strtab] battery_type_show
// [.strtab] usb_real_type_show
// [.strtab] quick_charge_type_show
// [.strtab] set_ship_mode_show
// [.strtab] fastcharge_mode_show
// [.strtab] typec_mode_show
// [.strtab] input_suspend_show
// [.strtab] auth_batt_id_show
// [.strtab] resistance_id_show
// [.strtab] pd_disabled_show
// [.strtab] authentic_show
// [.strtab] weak_chg_icl_ua_show
// [.strtab] smb5_init_hw
// [.strtab] iio_write_channel_raw
// [.strtab] smb5_write_raw
// [.strtab] smb5_read_raw
// [.strtab] batt_volt_uv
// [.strtab] kobject_uevent_env
// [.strtab] alarmtimer_get_rtcdev
// [.strtab] power_supply_batt_manufacturer_text
// [.strtab] power_supply_cp_manufacturer_text
// [.strtab] power_supply_auth_manufacturer_text
// [.strtab] power_supply_usb_type_text
// [.strtab] power_supply_usbc_text
// [.strtab] smblib_set_prop_voltage_wls_output
// [.strtab] smblib_get_prop_voltage_wls_output
// [.strtab] is_cp_topo_vbatt
// [.strtab] class_attr_smart_batt
// [.strtab] smblib_notify_usb_host
// [.strtab] chg_freq_list
// [.strtab] typec_register_port
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] smblib_get_pe_start
// [.strtab] reset_storm_count
// [.strtab] update_storm_count
// [.strtab] of_batterydata_get_aged_profile_count
// [.strtab] kstrtoint
// [.strtab] generate_xm_charge_uvent
// [.strtab] smblib_is_input_present
// [.strtab] smblib_get_prop_batt_present
// [.strtab] smblib_get_prop_dc_present
// [.strtab] smblib_get_prop_usb_present
// [.strtab] class_attr_cp_bus_current
// [.strtab] set_sdp_current
// [.strtab] smblib_set_icl_current
// [.strtab] smblib_get_icl_current
// [.strtab] class_attr_mtbf_current
// [.strtab] smblib_get_charge_current
// [.strtab] get_effective_result
// [.strtab] smblib_get_apsd_result
// [.strtab] qg_batt_get_capacity.cfi_jt
// [.strtab] is_smb5_rdy.cfi_jt
// [.strtab] generate_xm_charge_uvent.cfi_jt
// [.strtab] set_blank_status.cfi_jt
// [.strtab] smblib_lpd_recheck_timer.cfi_jt
// [.strtab] smb5_dcin_uv_irq_handler.cfi_jt
// [.strtab] smb5_usbin_uv_irq_handler.cfi_jt
// [.strtab] smb5_usbin_ov_irq_handler.cfi_jt
// [.strtab] smb5_default_irq_handler.cfi_jt
// [.strtab] smb5_dc_plugin_irq_handler.cfi_jt
// [.strtab] smb5_usb_plugin_irq_handler.cfi_jt
// [.strtab] smb5_smb_en_irq_handler.cfi_jt
// [.strtab] smb5_wdog_snarl_irq_handler.cfi_jt
// [.strtab] smb5_wdog_bark_irq_handler.cfi_jt
// [.strtab] smb5_switcher_power_ok_irq_handler.cfi_jt
// [.strtab] smb5_typec_attach_detach_irq_handler.cfi_jt
// [.strtab] smb5_high_duty_cycle_irq_handler.cfi_jt
// [.strtab] smb5_sdam_sts_change_irq_handler.cfi_jt
// [.strtab] smb5_temp_change_irq_handler.cfi_jt
// [.strtab] smb5_typec_or_rid_detection_change_irq_handler.cfi_jt
// [.strtab] smb5_icl_change_irq_handler.cfi_jt
// [.strtab] smb5_schgm_flash_state_change_irq_handler.cfi_jt
// [.strtab] smb5_chg_state_change_irq_handler.cfi_jt
// [.strtab] smb5_typec_state_change_irq_handler.cfi_jt
// [.strtab] smb5_usb_source_change_irq_handler.cfi_jt
// [.strtab] smb5_batt_psy_changed_irq_handler.cfi_jt
// [.strtab] smb5_batt_temp_changed_irq_handler.cfi_jt
// [.strtab] smb5_schgm_flash_ilim2_irq_handler.cfi_jt
// [.strtab] qpnp_smb5_unreg_notifier.cfi_jt
// [.strtab] qpnp_smb5_reg_notifier.cfi_jt
// [.strtab] smblib_set_chg_freq.cfi_jt
// [.strtab] qpnp_smb5_notifier_call_chain.cfi_jt
// [.strtab] delayed_work_timer_fn.cfi_jt
// [.strtab] no_llseek.cfi_jt
// [.strtab] set_fv_ageing.cfi_jt
// [.strtab] get_fv_ageing.cfi_jt
// [.strtab] debugfs_attr_write.cfi_jt
// [.strtab] simple_attr_release.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] cid_set_prop_typec_power_role.cfi_jt
// [.strtab] smblib_vbus_regulator_disable.cfi_jt
// [.strtab] smblib_vconn_regulator_disable.cfi_jt
// [.strtab] smblib_vbus_regulator_enable.cfi_jt
// [.strtab] smblib_vconn_regulator_enable.cfi_jt
// [.strtab] qg_batt_get_voltage.cfi_jt
// [.strtab] smblib_notifier_call.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_float_retry_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_raise_qc3_vbus_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_pr_lock_clear_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_moisture_protection_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_chg_termination_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_thermal_regulation_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_lpd_ra_open_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] dcin_aicl_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_bb_removal_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_typec_role_check_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_pr_swap_detach_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_lpd_detach_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_uusb_otg_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] bms_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] pl_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] jeita_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_pl_enable_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_cp_status_change_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_icl_change_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] clear_hdc_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_usbov_dbc_work.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_bat_temp_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_icl_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_temp_change_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_limited_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_hdc_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_chg_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_awake_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_smb_disable_override_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_dc_suspend_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] apsd_timer_cb.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] moisture_protection_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] chg_termination_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] dcin_aicl_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe.cfi_jt
// [.strtab] smblib_enable_ship_mode.cfi_jt
// [.strtab] audio_get_prop_typec_mode.cfi_jt
// [.strtab] smblib_set_aicl_cont_threshold.cfi_jt
// [.strtab] smblib_get_aicl_cont_threshold.cfi_jt
// [.strtab] smblib_vbus_regulator_is_enabled.cfi_jt
// [.strtab] smblib_vconn_regulator_is_enabled.cfi_jt
// [.strtab] debugfs_attr_read.cfi_jt
// [.strtab] real_capacity_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] shutdown_delay_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] apdo_max_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] smart_batt_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] cp_bus_current_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] mtbf_current_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] shipmode_count_reset_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] slave_pct_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] blank_status_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] fcc_stepping_in_progress_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] restrict_cur_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] batt_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] cp_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] auth_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] typec_cc_orientation_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] version_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] thermal_level_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] soc_decimal_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] chip_ok_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] audio_cctog_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] night_charging_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] smart_chg_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] restrict_chg_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] soc_decimal_rate_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] battery_type_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] usb_real_type_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] quick_charge_type_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] set_ship_mode_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] fastcharge_mode_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] typec_mode_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] input_suspend_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] auth_batt_id_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] resistance_id_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] authentic_show.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_notifier_call.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_disable_forever_work.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] fcc_stepper_work.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_taper_work.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] status_change_work.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_fv_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] low_fast_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_enable_indirect_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_fcc_main_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] usb_icl_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] night_charging_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_disable_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_awake_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] quick_charge_type_changed_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] pl_fcc_vote_callback.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] smart_batt_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] mtbf_current_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] shipmode_count_reset_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] slave_pct_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] blank_status_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] restrict_cur_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] audio_cctog_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] night_charging_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] smart_chg_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] restrict_chg_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] set_ship_mode_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] input_suspend_store.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] reboot_ship_mode.5ed5160633f7e8983a0264f74c1175a7.cfi_jt
// [.strtab] step_chg_notifier_call.fc825eab9450fe458cb5482da064b333.cfi_jt
// [.strtab] get_config_work.fc825eab9450fe458cb5482da064b333.cfi_jt
// [.strtab] status_change_work.fc825eab9450fe458cb5482da064b333.cfi_jt
// [.strtab] pd_disabled_show.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] weak_chg_icl_ua_show.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_write_raw.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_read_raw.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] ps_get_max_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] ps_set_cur_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] ps_get_cur_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_batt_set_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_usb_port_set_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_dc_set_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_usb_set_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_batt_get_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_usb_port_get_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_dc_get_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_usb_get_prop.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_shutdown.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] force_batt_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] force_dc_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] force_usb_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_remove.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_direct_iio_write.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] force_batt_psy_update_write.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] force_dc_psy_update_write.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] force_usb_psy_update_write.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_of_xlate.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] pd_disabled_store.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] weak_chg_icl_ua_store.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_batt_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_dc_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_usb_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_probe.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] smb5_direct_iio_read.756213caaf8d6a53d7343e50496c5a32.cfi_jt
// [.strtab] qcom_batt_deinit
// [.strtab] qcom_step_chg_deinit
// [.strtab] smblib_deinit
// [.strtab] __mutex_init
// [.strtab] qcom_batt_init
// [.strtab] smb5_post_init
// [.strtab] third_cp_iio_init
// [.strtab] smb5_extcon_init
// [.strtab] alarm_init
// [.strtab] schgm_flash_init
// [.strtab] qcom_step_chg_init
// [.strtab] smblib_init
// [.strtab] ___ratelimit
// [.strtab] smblib_set_prop_usb_voltage_max_limit
// [.strtab] ps_get_max_charge_cntl_limit
// [.strtab] ps_set_cur_charge_cntl_limit
// [.strtab] ps_get_cur_charge_cntl_limit
// [.strtab] get_settled_split
// [.strtab] get_fcc_split
// [.strtab] memset
// [.strtab] smblib_get_qc3_main_icl_offset
// [.strtab] ktime_get_with_offset
// [.strtab] class_attr_shipmode_count_reset
// [.strtab] smblib_set_prop_pd_in_hard_reset
// [.strtab] smblib_get_prop_pd_in_hard_reset
// [.strtab] smblib_set_prop_dc_reset
// [.strtab] smblib_typec_port_type_set
// [.strtab] devm_regulator_get
// [.strtab] devm_iio_channel_get
// [.strtab] ktime_get
// [.strtab] class_attr_slave_pct
// [.strtab] smblib_set_prop_thermal_overheat
// [.strtab] smblib_set_prop_batt_status
// [.strtab] smblib_get_prop_batt_status
// [.strtab] smb5_show_charger_status
// [.strtab] smblib_get_irq_status
// [.strtab] smblib_get_skin_temp_status
// [.strtab] smb5_determine_initial_status
// [.strtab] __kstrtabns_set_blank_status
// [.strtab] __crc_set_blank_status
// [.strtab] __kstrtab_set_blank_status
// [.strtab] __ksymtab_set_blank_status
// [.strtab] class_attr_blank_status
// [.strtab] g_blank_status
// [.strtab] tp_charge_status
// [.strtab] smb5_request_interrupts
// [.strtab] smb5_free_interrupts
// [.strtab] smblib_apsd_results
// [.strtab] smblib_set_prop_pr_swap_in_progress
// [.strtab] smblib_get_prop_pr_swap_in_progress
// [.strtab] class_attr_fcc_stepping_in_progress
// [.strtab] smb5_init_typec_class
// [.strtab] batt_class_attrs
// [.strtab] smb5_attrs
// [.strtab] smblib_get_prop_batt_status._rs
// [.strtab] smb5_usb_port_set_prop._rs
// [.strtab] smb5_usb_port_get_prop._rs
// [.strtab] smb5_irqs
// [.strtab] batt_class_groups
// [.strtab] sysfs_remove_groups
// [.strtab] sysfs_create_groups
// [.strtab] smb5_groups
// [.strtab] smb5_batt_props
// [.strtab] smb5_usb_port_props
// [.strtab] smblib_notify_extcon_props
// [.strtab] smb5_dc_props
// [.strtab] smb5_usb_props
// [.strtab] smb5_vbus_reg_ops
// [.strtab] smb5_vconn_reg_ops
// [.strtab] force_batt_psy_update_ops
// [.strtab] force_dc_psy_update_ops
// [.strtab] force_usb_psy_update_ops
// [.strtab] psy_tcd_ops
// [.strtab] ____versions
// [.strtab] smblib_get_prop_from_bms
// [.strtab] get_fcc_stepper_params
// [.strtab] smb5_pm8150b_params
// [.strtab] smb5_pmi632_params
// [.strtab] clamp_levels
// [.strtab] get_ext_channels
// [.strtab] smb5_create_debugfs
// [.strtab] of_batterydata_read_soh_aged_profiles
// [.strtab] __msecs_to_jiffies
// [.strtab] kmalloc_caches
// [.strtab] step2_chg_ranges
// [.strtab] step1_chg_ranges
// [.strtab] free_pages
// [.strtab] jiffies_to_msecs
// [.strtab] class_attr_restrict_cur
// [.strtab] _dev_err
// [.strtab] smb5_init_vbus_regulator
// [.strtab] smb5_init_vconn_regulator
// [.strtab] debugfs_create_dir
// [.strtab] smblib_get_prop_low_power
// [.strtab] smb5_driver
// [.strtab] platform_driver_unregister
// [.strtab] srcu_notifier_chain_unregister
// [.strtab] wakeup_source_unregister
// [.strtab] thermal_cooling_device_unregister
// [.strtab] devm_power_supply_register
// [.strtab] devm_extcon_dev_register
// [.strtab] __class_register
// [.strtab] devm_regulator_register
// [.strtab] __platform_driver_register
// [.strtab] typec_partner_register
// [.strtab] srcu_notifier_chain_register
// [.strtab] wakeup_source_register
// [.strtab] __devm_iio_device_register
// [.strtab] thermal_cooling_device_register
// [.strtab] thermal_of_cooling_device_register
// [.strtab] class_attr_batt_manufacturer
// [.strtab] class_attr_cp_manufacturer
// [.strtab] class_attr_auth_manufacturer
// [.strtab] typec_unregister_partner
// [.strtab] typec_register_partner
// [.strtab] smblib_lpd_recheck_timer
// [.strtab] mod_timer
// [.strtab] smb5_dcin_uv_irq_handler
// [.strtab] smb5_usbin_uv_irq_handler
// [.strtab] smb5_usbin_ov_irq_handler
// [.strtab] smb5_schgm_flash_default_irq_handler
// [.strtab] smb5_default_irq_handler
// [.strtab] smb5_dc_plugin_irq_handler
// [.strtab] smb5_usb_plugin_irq_handler
// [.strtab] smb5_smb_en_irq_handler
// [.strtab] smb5_wdog_snarl_irq_handler
// [.strtab] smb5_wdog_bark_irq_handler
// [.strtab] smb5_switcher_power_ok_irq_handler
// [.strtab] smb5_typec_attach_detach_irq_handler
// [.strtab] smb5_high_duty_cycle_irq_handler
// [.strtab] smb5_sdam_sts_change_irq_handler
// [.strtab] smb5_temp_change_irq_handler
// [.strtab] smb5_typec_or_rid_detection_change_irq_handler
// [.strtab] smb5_icl_change_irq_handler
// [.strtab] smb5_schgm_flash_state_change_irq_handler
// [.strtab] smb5_chg_state_change_irq_handler
// [.strtab] smb5_typec_state_change_irq_handler
// [.strtab] smb5_usb_source_change_irq_handler
// [.strtab] smb5_batt_psy_changed_irq_handler
// [.strtab] smb5_batt_temp_changed_irq_handler
// [.strtab] smb5_schgm_flash_ilim2_irq_handler
// [.strtab] unregister_reboot_notifier
// [.strtab] pl_register_notifier
// [.strtab] shipmode_register_notifier
// [.strtab] power_supply_unreg_notifier
// [.strtab] __kstrtabns_qpnp_smb5_unreg_notifier
// [.strtab] __crc_qpnp_smb5_unreg_notifier
// [.strtab] __kstrtab_qpnp_smb5_unreg_notifier
// [.strtab] __ksymtab_qpnp_smb5_unreg_notifier
// [.strtab] power_supply_reg_notifier
// [.strtab] __kstrtabns_qpnp_smb5_reg_notifier
// [.strtab] __crc_qpnp_smb5_reg_notifier
// [.strtab] __kstrtab_qpnp_smb5_reg_notifier
// [.strtab] __ksymtab_qpnp_smb5_reg_notifier
// [.strtab] __kstrtabns_qpnp_smb5_notifier
// [.strtab] __crc_qpnp_smb5_notifier
// [.strtab] __kstrtab_qpnp_smb5_notifier
// [.strtab] __ksymtab_qpnp_smb5_notifier
// [.strtab] smblib_select_sec_charger
// [.strtab] __typeid__ZTSFvvE_global_addr
// [.strtab] __typeid__ZTSFiP12power_supply21power_supply_propertyPK20power_supply_propvalE_global_addr
// [.strtab] __typeid__ZTSFiP6deviceiiE_global_addr
// [.strtab] __typeid__ZTSFiP6deviceiPiE_global_addr
// [.strtab] __typeid__ZTSFiP13smb_chg_paramhE_global_addr
// [.strtab] __typeid__ZTSFiP13smb_chg_paramiPhE_global_addr
// [.strtab] system_wq
// [.strtab] system_long_wq
// [.strtab] disable_irq
// [.strtab] enable_irq
// [.strtab] devm_request_threaded_irq
// [.strtab] smblib_set_opt_switcher_freq
// [.strtab] smblib_set_chg_freq
// [.strtab] generate_xm_charge_uvent.envp
// [.strtab] batt_class_group
// [.strtab] smb5_group
// [.strtab] device_init_wakeup
// [.strtab] smblib_set_prop_typec_select_rp
// [.strtab] smblib_get_prop_typec_select_rp
// [.strtab] smb5_batt_set_prop
// [.strtab] smb5_usb_port_set_prop
// [.strtab] smb5_iio_set_prop
// [.strtab] smb5_dc_set_prop
// [.strtab] smb5_usb_set_prop
// [.strtab] smb5_batt_get_prop
// [.strtab] smb5_usb_port_get_prop
// [.strtab] smb5_iio_get_prop
// [.strtab] smb5_dc_get_prop
// [.strtab] smb5_usb_get_prop
// [.strtab] smblib_set_prop_batt_temp
// [.strtab] smblib_get_prop_batt_temp
// [.strtab] smblib_get_prop_charger_temp
// [.strtab] strcmp
// [.strtab] the_chip
// [.strtab] msleep
// [.strtab] smblib_dp_dm_cp
// [.strtab] dev_get_regmap
// [.strtab] smb5_iio_info
// [.strtab] smb5_shutdown
// [.strtab] smblib_set_moisture_protection
// [.strtab] rerun_election
// [.strtab] class_attr_typec_cc_orientation
// [.strtab] smblib_get_prop_typec_cc_orientation
// [.strtab] class_attr_version
// [.strtab] queue_work_on
// [.strtab] queue_delayed_work_on
// [.strtab] smblib_set_prop_pd_voltage_min
// [.strtab] __kstrtabns_g_touchscreen_usb_pulgin
// [.strtab] __crc_g_touchscreen_usb_pulgin
// [.strtab] __kstrtab_g_touchscreen_usb_pulgin
// [.strtab] __ksymtab_g_touchscreen_usb_pulgin
// [.strtab] srcu_notifier_call_chain
// [.strtab] __kstrtabns_qpnp_smb5_notifier_call_chain
// [.strtab] __crc_qpnp_smb5_notifier_call_chain
// [.strtab] __kstrtab_qpnp_smb5_notifier_call_chain
// [.strtab] __ksymtab_qpnp_smb5_notifier_call_chain
// [.strtab] smblib_get_prop_usb_voltage_max_design
// [.strtab] delayed_work_timer_fn
// [.strtab] force_batt_psy_update_ops_open
// [.strtab] force_dc_psy_update_ops_open
// [.strtab] force_usb_psy_update_ops_open
// [.strtab] simple_attr_open
// [.strtab] g_shipmode_en
// [.strtab] smblib_toggle_smb_en
// [.strtab] bat_cp_ext_iio_chan
// [.strtab] smblib_third_cp_ext_iio_chan
// [.strtab] smblib_cp_ext_iio_chan
// [.strtab] bat_smb_parallel_ext_iio_chan
// [.strtab] smblib_parallel_ext_iio_chan
// [.strtab] smblib_auth_ext_iio_chan
// [.strtab] smblib_qg_ext_iio_chan
// [.strtab] step_chg_ext_iio_chan
// [.strtab] smblib_get_prop_batt_iterm
// [.strtab] smb5_config_iterm
// [.strtab] cp_configure_ilim
// [.strtab] get_adapter_icl_based_ilim
// [.strtab] smblib_request_dpdm
// [.strtab] smblib_dp_dm
// [.strtab] smblib_set_charge_param
// [.strtab] smblib_get_charge_param
// [.strtab] kstrtoull
// [.strtab] pl_notifier_call
// [.strtab] step_chg_notifier_call
// [.strtab] smblib_notifier_call
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] smblib_get_prop_batt_capacity_level
// [.strtab] smblib_set_prop_system_temp_level
// [.strtab] smblib_get_prop_system_temp_level
// [.strtab] smb5_set_prop_comp_clamp_level
// [.strtab] class_attr_thermal_level
// [.strtab] third_cp_get_iio_channel
// [.strtab] smblib_get_iio_channel
// [.strtab] alarm_cancel
// [.strtab] smblib_run_aicl
// [.strtab] get_val
// [.strtab] plugin_val
// [.strtab] class_attr_soc_decimal
// [.strtab] _printk
// [.strtab] __debug_mask
// [.strtab] smblib_float_retry_work
// [.strtab] smblib_raise_qc3_vbus_work
// [.strtab] pl_disable_forever_work
// [.strtab] fcc_stepper_work
// [.strtab] pl_taper_work
// [.strtab] smblib_pr_lock_clear_work
// [.strtab] smblib_moisture_protection_work
// [.strtab] smblib_chg_termination_work
// [.strtab] smblib_thermal_regulation_work
// [.strtab] smblib_lpd_ra_open_work
// [.strtab] dcin_aicl_work
// [.strtab] smblib_bb_removal_work
// [.strtab] smblib_typec_role_check_work
// [.strtab] smblib_pr_swap_detach_work
// [.strtab] smblib_lpd_detach_work
// [.strtab] smblib_uusb_otg_work
// [.strtab] get_config_work
// [.strtab] bms_update_work
// [.strtab] pl_update_work
// [.strtab] jeita_update_work
// [.strtab] smblib_pl_enable_work
// [.strtab] smblib_cp_status_change_work
// [.strtab] smblib_icl_change_work
// [.strtab] cancel_delayed_work
// [.strtab] clear_hdc_work
// [.strtab] smblib_usbov_dbc_work
// [.strtab] class_attr_chip_ok
// [.strtab] schgm_flash_get_vreg_ok
// [.strtab] is_need_set_drp_to_sink
// [.strtab] no_llseek
// [.strtab] mutex_unlock
// [.strtab] _raw_spin_unlock
// [.strtab] mutex_lock
// [.strtab] _raw_spin_lock
// [.strtab] __cfi_check
// [.strtab] pl_fv_vote_callback
// [.strtab] low_fast_vote_callback
// [.strtab] pl_enable_indirect_vote_callback
// [.strtab] pl_fcc_main_vote_callback
// [.strtab] usb_icl_vote_callback
// [.strtab] night_charging_vote_callback
// [.strtab] smblib_bat_temp_irq_disable_vote_callback
// [.strtab] smblib_icl_irq_disable_vote_callback
// [.strtab] smblib_temp_change_irq_disable_vote_callback
// [.strtab] smblib_limited_irq_disable_vote_callback
// [.strtab] smblib_hdc_irq_disable_vote_callback
// [.strtab] pl_disable_vote_callback
// [.strtab] smblib_chg_disable_vote_callback
// [.strtab] pl_awake_vote_callback
// [.strtab] smblib_awake_vote_callback
// [.strtab] smblib_smb_disable_override_vote_callback
// [.strtab] smblib_dc_suspend_vote_callback
// [.strtab] quick_charge_type_changed_vote_callback
// [.strtab] pl_fcc_vote_callback
// [.strtab] smblib_get_prop_batt_health
// [.strtab] smblib_get_prop_connector_health
// [.strtab] smblib_get_die_health
// [.strtab] smblib_get_prop_smb_health
// [.strtab] smblib_set_prop_rechg_soc_thresh
// [.strtab] class_attr_audio_cctog
// [.strtab] g_audio_cctog
// [.strtab] of_prop_next_string
// [.strtab] generate_xm_charge_uvent.uevent_string
// [.strtab] of_property_match_string
// [.strtab] of_property_read_string
// [.strtab] alarm_expires_remaining
// [.strtab] is_storming
// [.strtab] class_attr_night_charging
// [.strtab] __kstrtabns_set_fv_ageing
// [.strtab] __crc_set_fv_ageing
// [.strtab] __kstrtab_set_fv_ageing
// [.strtab] __ksymtab_set_fv_ageing
// [.strtab] __kstrtabns_get_fv_ageing
// [.strtab] __crc_get_fv_ageing
// [.strtab] __kstrtab_get_fv_ageing
// [.strtab] __ksymtab_get_fv_ageing
// [.strtab] smblib_hvdcp_exit_config
// [.strtab] class_attr_smart_chg
// [.strtab] class_attr_restrict_chg
// [.strtab] taper_fcc_step_chg
// [.strtab] __kstrtabns_g_chg
// [.strtab] __crc_g_chg
// [.strtab] __kstrtab_g_chg
// [.strtab] __ksymtab_g_chg
// [.strtab] __cfi_slowpath_diag
// [.strtab] scnprintf
// [.strtab] of_property_count_elems_of_size
// [.strtab] smb5_remove
// [.strtab] is_flash_active
// [.strtab] smblib_set_prop_pd_active
// [.strtab] smblib_get_prop_pd_active
// [.strtab] alarm_start_relative
// [.strtab] get_client_vote
// [.strtab] debugfs_attr_write
// [.strtab] regmap_write
// [.strtab] smb5_direct_iio_write
// [.strtab] regmap_bulk_write
// [.strtab] smblib_batch_write
// [.strtab] force_batt_psy_update_write
// [.strtab] force_dc_psy_update_write
// [.strtab] force_usb_psy_update_write
// [.strtab] smblib_masked_write
// [.strtab] smblib_write
// [.strtab] usleep_range_state
// [.strtab] class_attr_soc_decimal_rate
// [.strtab] smb5_of_xlate
// [.strtab] devm_extcon_dev_allocate
// [.strtab] smblib_dp_pulse
// [.strtab] smblib_dm_pulse
// [.strtab] simple_attr_release
// [.strtab] iio_channel_release
// [.strtab] regmap_update_bits_base
// [.strtab] smart_batt_store
// [.strtab] mtbf_current_store
// [.strtab] shipmode_count_reset_store
// [.strtab] slave_pct_store
// [.strtab] blank_status_store
// [.strtab] restrict_cur_store
// [.strtab] audio_cctog_store
// [.strtab] night_charging_store
// [.strtab] smart_chg_store
// [.strtab] restrict_chg_store
// [.strtab] set_ship_mode_store
// [.strtab] input_suspend_store
// [.strtab] pd_disabled_store
// [.strtab] weak_chg_icl_ua_store
// [.strtab] class_attr_battery_type
// [.strtab] class_attr_real_type
// [.strtab] class_attr_usb_real_type
// [.strtab] smblib_get_prop_batt_charge_type
// [.strtab] smblib_get_usb_online.last_quick_charge_type
// [.strtab] smblib_get_quick_charge_type
// [.strtab] class_attr_quick_charge_type
// [.strtab] smblib_get_prop_scope
// [.strtab] smblib_get_prop_batt_charge_done
// [.strtab] smblib_get_prop_dc_online
// [.strtab] smblib_get_usb_online
// [.strtab] smblib_get_prop_usb_online
// [.strtab] of_irq_get_byname
// [.strtab] power_supply_get_by_name
// [.strtab] of_find_node_by_name
// [.strtab] smblib_typec_mode_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] typec_set_pwr_role
// [.strtab] __kstrtabns_cid_set_prop_typec_power_role
// [.strtab] __crc_cid_set_prop_typec_power_role
// [.strtab] __kstrtab_cid_set_prop_typec_power_role
// [.strtab] __ksymtab_cid_set_prop_typec_power_role
// [.strtab] smblib_set_prop_typec_power_role
// [.strtab] smblib_get_prop_typec_power_role
// [.strtab] typec_set_data_role
// [.strtab] of_batterydata_get_best_profile
// [.strtab] of_batterydata_get_best_aged_profile
// [.strtab] debugfs_create_file
// [.strtab] devm_usbpd_get_by_phandle
// [.strtab] of_find_node_by_phandle
// [.strtab] smblib_set_prop_batt_cycle
// [.strtab] smblib_get_prop_batt_cycle
// [.strtab] destroy_votable
// [.strtab] create_votable
// [.strtab] find_votable
// [.strtab] therm_lookup_table
// [.strtab] match_table
// [.strtab] smblib_vbus_regulator_disable
// [.strtab] smblib_vconn_regulator_disable
// [.strtab] smblib_hvdcp_detect_try_enable
// [.strtab] smblib_hvdcp_hw_inov_enable
// [.strtab] smblib_hvdcp_detect_enable
// [.strtab] smblib_vbus_regulator_enable
// [.strtab] smblib_vconn_regulator_enable
// [.strtab] smblib_moisture_detection_enable
// [.strtab] smblib_apsd_enable
// [.strtab] smb5_batt_prop_is_writeable
// [.strtab] smb5_dc_prop_is_writeable
// [.strtab] smb5_usb_prop_is_writeable
// [.strtab] smblib_extcon_cable
// [.strtab] __pm_stay_awake
// [.strtab] irq_set_irq_wake
// [.strtab] __kstrtabns_qg_batt_get_voltage
// [.strtab] __crc_qg_batt_get_voltage
// [.strtab] __kstrtab_qg_batt_get_voltage
// [.strtab] __ksymtab_qg_batt_get_voltage
// [.strtab] smblib_force_vbus_voltage
// [.strtab] smblib_set_usb_pd_allowed_voltage
// [.strtab] get_zeroed_page
// [.strtab] smblib_notifier_call.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_float_retry_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_raise_qc3_vbus_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_pr_lock_clear_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_moisture_protection_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_chg_termination_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_thermal_regulation_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_lpd_ra_open_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] dcin_aicl_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_bb_removal_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_typec_role_check_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_pr_swap_detach_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_lpd_detach_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_uusb_otg_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] bms_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] pl_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] jeita_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_pl_enable_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_cp_status_change_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_icl_change_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] clear_hdc_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_usbov_dbc_work.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_bat_temp_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_icl_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_temp_change_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_limited_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_hdc_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_chg_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_awake_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_smb_disable_override_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] smblib_dc_suspend_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] apsd_timer_cb.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] moisture_protection_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] chg_termination_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] dcin_aicl_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe
// [.strtab] devm_kfree
// [.strtab] read_range_data_from_node
// [.strtab] smblib_get_usb_prop_typec_accessory_mode
// [.strtab] reboot_ship_mode
// [.strtab] class_attr_set_ship_mode
// [.strtab] smblib_set_prop_ship_mode
// [.strtab] smblib_get_prop_ship_mode
// [.strtab] __kstrtabns_smblib_enable_ship_mode
// [.strtab] __crc_smblib_enable_ship_mode
// [.strtab] __kstrtab_smblib_enable_ship_mode
// [.strtab] __ksymtab_smblib_enable_ship_mode
// [.strtab] smblib_get_prop_ufp_mode
// [.strtab] smblib_get_prop_dfp_mode
// [.strtab] cp_get_parallel_mode
// [.strtab] smblib_set_fastcharge_mode
// [.strtab] smblib_get_fastcharge_mode
// [.strtab] class_attr_fastcharge_mode
// [.strtab] smblib_set_recharge_mode
// [.strtab] smblib_get_recharge_mode
// [.strtab] class_attr_typec_mode
// [.strtab] __kstrtabns_audio_get_prop_typec_mode
// [.strtab] __crc_audio_get_prop_typec_mode
// [.strtab] __kstrtab_audio_get_prop_typec_mode
// [.strtab] __ksymtab_audio_get_prop_typec_mode
// [.strtab] smblib_get_prop_typec_mode
// [.strtab] smblib_get_usb_prop_typec_mode
// [.strtab] smblib_icl_override
// [.strtab] vote_override
// [.strtab] smblib_usb_pd_adapter_allowance_override
// [.strtab] kmem_cache_alloc_trace
// [.strtab] smb5_probe
// [.strtab] smblib_rerun_apsd
// [.strtab] class_attr_input_suspend
// [.strtab] smblib_set_prop_input_suspend
// [.strtab] smblib_get_prop_input_suspend
// [.strtab] smblib_get_prop_battery_cp_input_suspend
// [.strtab] smblib_set_aicl_cont_threshold
// [.strtab] smblib_get_aicl_cont_threshold
// [.strtab] smblib_get_thermal_threshold
// [.strtab] of_get_next_child
// [.strtab] of_get_next_available_child
// [.strtab] class_attr_auth_batt_id
// [.strtab] class_attr_resistance_id
// [.strtab] smblib_set_prop_input_current_limited
// [.strtab] smblib_get_prop_input_current_limited
// [.strtab] smblib_get_prop_battery_charging_limited
// [.strtab] is_charging_paused
// [.strtab] iio_read_channel_processed
// [.strtab] smblib_rerun_apsd_if_required
// [.strtab] smblib_get_prop_input_current_settled
// [.strtab] split_settled
// [.strtab] smblib_get_prop_input_voltage_settled
// [.strtab] dev_attr_pd_disabled
// [.strtab] smblib_vbus_regulator_is_enabled
// [.strtab] smblib_vconn_regulator_is_enabled
// [.strtab] smblib_get_prop_battery_charging_enabled
// [.strtab] is_client_vote_enabled
// [.strtab] is_override_vote_enabled
// [.strtab] get_effective_result_locked
// [.strtab] get_client_vote_locked
// [.strtab] is_client_vote_enabled_locked
// [.strtab] is_override_vote_enabled_locked
// [.strtab] power_supply_changed
// [.strtab] debugfs_attr_read
// [.strtab] regmap_read
// [.strtab] smb5_direct_iio_read
// [.strtab] regmap_bulk_read
// [.strtab] smblib_batch_read
// [.strtab] smblib_read
// [.strtab] batt_psy_desc
// [.strtab] usb_port_psy_desc
// [.strtab] dc_psy_desc
// [.strtab] usb_psy_desc
// [.strtab] devm_kmalloc
// [.strtab] devm_iio_device_alloc
// [.strtab] disable_irq_nosync
// [.strtab] del_timer_sync
// [.strtab] cancel_work_sync
// [.strtab] cancel_delayed_work_sync
// [.strtab] extcon_set_state_sync
// [.strtab] class_attr_authentic
// [.strtab] smb5_chans_pmic
// [.strtab] apsd_timer_cb
// [.strtab] moisture_protection_alarm_cb
// [.strtab] chg_termination_alarm_cb
// [.strtab] dcin_aicl_alarm_cb
// [.strtab] dev_attr_weak_chg_icl_ua
// [.strtab] smblib_get_prop_fcc_delta
// [.strtab] smblib_disable_hw_jeita
// [.strtab] smblib_update_jeita
// [.strtab] power_supply_get_drvdata
// [.strtab] rdev_get_drvdata
// [.strtab] qpnp_smb5_notifier_head_srcu_data
// [.strtab] of_device_get_match_data
// [.strtab] _note_9
// [.strtab] $x.199
// [.strtab] $d.99
// [.strtab] $x.189
// [.strtab] $x.89
// [.strtab] $d.89
// [.strtab] $x.179
// [.strtab] $d.179
// [.strtab] $x.79
// [.strtab] $d.79
// [.strtab] $x.169
// [.strtab] $d.169
// [.strtab] $x.69
// [.strtab] smblib_init.__key.259
// [.strtab] $d.259
// [.strtab] $x.159
// [.strtab] $d.159
// [.strtab] $x.59
// [.strtab] $d.59
// [.strtab] $d.249
// [.strtab] $x.149
// [.strtab] $d.149
// [.strtab] $x.49
// [.strtab] $d.49
// [.strtab] $d.239
// [.strtab] $x.139
// [.strtab] $d.139
// [.strtab] $x.39
// [.strtab] $d.39
// [.strtab] $x.229
// [.strtab] $x.129
// [.strtab] $d.129
// [.strtab] $x.29
// [.strtab] $x.219
// [.strtab] $x.119
// [.strtab] $d.119
// [.strtab] $x.19
// [.strtab] $x.209
// [.strtab] $x.109
// [.strtab] $d.109
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $x.198
// [.strtab] $x.98
// [.strtab] $d.98
// [.strtab] $x.188
// [.strtab] $x.88
// [.strtab] $d.88
// [.strtab] $x.178
// [.strtab] $d.178
// [.strtab] $x.78
// [.strtab] $d.78
// [.strtab] $d.268
// [.strtab] $x.168
// [.strtab] $d.168
// [.strtab] $x.68
// [.strtab] $d.258
// [.strtab] $x.158
// [.strtab] $d.158
// [.strtab] $x.58
// [.strtab] $d.248
// [.strtab] $x.148
// [.strtab] $d.148
// [.strtab] $x.48
// [.strtab] $d.238
// [.strtab] $x.138
// [.strtab] $d.138
// [.strtab] $x.38
// [.strtab] $x.228
// [.strtab] $x.128
// [.strtab] $d.128
// [.strtab] $x.28
// [.strtab] $x.218
// [.strtab] $x.118
// [.strtab] $d.118
// [.strtab] $x.18
// [.strtab] $x.208
// [.strtab] $x.108
// [.strtab] $d.108
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] real_capacity_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] shutdown_delay_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] apdo_max_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] smart_batt_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] cp_bus_current_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] mtbf_current_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] shipmode_count_reset_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] slave_pct_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] blank_status_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] fcc_stepping_in_progress_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] restrict_cur_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] batt_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] cp_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] auth_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] typec_cc_orientation_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] version_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] thermal_level_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] soc_decimal_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] chip_ok_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] audio_cctog_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] night_charging_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] smart_chg_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] restrict_chg_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] soc_decimal_rate_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] battery_type_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] usb_real_type_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] quick_charge_type_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] set_ship_mode_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] fastcharge_mode_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] typec_mode_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] input_suspend_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] auth_batt_id_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] resistance_id_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] authentic_show.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_notifier_call.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_disable_forever_work.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] fcc_stepper_work.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_taper_work.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] status_change_work.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_fv_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] low_fast_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_enable_indirect_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_fcc_main_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] usb_icl_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] night_charging_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_disable_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_awake_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] quick_charge_type_changed_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] pl_fcc_vote_callback.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] smart_batt_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] mtbf_current_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] shipmode_count_reset_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] slave_pct_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] blank_status_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] restrict_cur_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] audio_cctog_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] night_charging_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] smart_chg_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] restrict_chg_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] set_ship_mode_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] input_suspend_store.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] reboot_ship_mode.5ed5160633f7e8983a0264f74c1175a7
// [.strtab] $x.197
// [.strtab] $x.97
// [.strtab] $d.97
// [.strtab] $x.187
// [.strtab] $x.87
// [.strtab] $d.87
// [.strtab] $x.177
// [.strtab] $d.177
// [.strtab] $x.77
// [.strtab] $d.77
// [.strtab] $d.267
// [.strtab] $x.167
// [.strtab] $d.167
// [.strtab] $x.67
// [.strtab] smblib_init.__key.257
// [.strtab] $d.257
// [.strtab] $x.157
// [.strtab] $d.157
// [.strtab] $x.57
// [.strtab] $d.57
// [.strtab] $d.247
// [.strtab] $x.147
// [.strtab] $d.147
// [.strtab] $x.47
// [.strtab] $d.237
// [.strtab] $x.137
// [.strtab] $d.137
// [.strtab] $x.37
// [.strtab] $x.227
// [.strtab] $x.127
// [.strtab] $d.127
// [.strtab] $x.27
// [.strtab] $x.217
// [.strtab] $x.117
// [.strtab] $d.117
// [.strtab] $x.17
// [.strtab] $x.207
// [.strtab] $x.107
// [.strtab] $d.107
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $x.196
// [.strtab] $x.96
// [.strtab] $d.96
// [.strtab] $x.186
// [.strtab] $x.86
// [.strtab] $d.86
// [.strtab] $x.176
// [.strtab] $d.176
// [.strtab] $x.76
// [.strtab] $d.76
// [.strtab] $d.266
// [.strtab] $x.166
// [.strtab] $d.166
// [.strtab] $x.66
// [.strtab] __func__.smblib_get_prop_pd_active.llvm.4030877801262576756
// [.strtab] .str.167.llvm.4030877801262576756
// [.strtab] __UNIQUE_ID_license456
// [.strtab] $d.256
// [.strtab] $x.156
// [.strtab] $d.156
// [.strtab] $x.56
// [.strtab] $d.246
// [.strtab] $x.146
// [.strtab] $d.146
// [.strtab] $x.46
// [.strtab] $d.46
// [.strtab] $x.136
// [.strtab] $d.136
// [.strtab] $x.36
// [.strtab] $x.226
// [.strtab] $x.126
// [.strtab] $d.126
// [.strtab] $x.26
// [.strtab] $x.216
// [.strtab] $x.116
// [.strtab] $d.116
// [.strtab] $x.16
// [.strtab] $d.16
// [.strtab] $x.206
// [.strtab] $x.106
// [.strtab] $d.106
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] $x.195
// [.strtab] $x.95
// [.strtab] $d.95
// [.strtab] $x.185
// [.strtab] $x.85
// [.strtab] $d.85
// [.strtab] $x.175
// [.strtab] $d.175
// [.strtab] $x.75
// [.strtab] $x.165
// [.strtab] $d.165
// [.strtab] $x.65
// [.strtab] __UNIQUE_ID_description455
// [.strtab] smblib_init.__key.255
// [.strtab] $d.255
// [.strtab] $x.155
// [.strtab] $d.155
// [.strtab] $x.55
// [.strtab] $d.55
// [.strtab] $d.245
// [.strtab] $d.145
// [.strtab] $x.45
// [.strtab] $d.45
// [.strtab] $d.235
// [.strtab] $x.135
// [.strtab] $d.135
// [.strtab] $x.35
// [.strtab] $x.225
// [.strtab] $x.125
// [.strtab] $d.125
// [.strtab] $x.25
// [.strtab] $x.215
// [.strtab] $d.115
// [.strtab] $x.15
// [.strtab] $d.15
// [.strtab] $x.205
// [.strtab] $x.105
// [.strtab] $d.105
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $x.194
// [.strtab] $x.94
// [.strtab] $d.94
// [.strtab] $x.184
// [.strtab] $d.184
// [.strtab] $x.84
// [.strtab] $d.84
// [.strtab] $d.174
// [.strtab] $x.74
// [.strtab] $d.74
// [.strtab] $x.164
// [.strtab] $d.164
// [.strtab] $x.64
// [.strtab] $d.254
// [.strtab] $d.154
// [.strtab] $x.54
// [.strtab] $d.244
// [.strtab] $x.144
// [.strtab] $d.144
// [.strtab] $x.44
// [.strtab] $d.44
// [.strtab] $x.234
// [.strtab] $x.134
// [.strtab] $d.134
// [.strtab] $x.34
// [.strtab] $x.224
// [.strtab] $x.124
// [.strtab] $d.124
// [.strtab] $x.24
// [.strtab] $x.214
// [.strtab] $x.114
// [.strtab] $d.114
// [.strtab] $x.14
// [.strtab] $d.14
// [.strtab] $x.204
// [.strtab] $x.104
// [.strtab] $d.104
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $x.193
// [.strtab] $x.93
// [.strtab] $d.93
// [.strtab] $x.183
// [.strtab] $d.183
// [.strtab] $x.83
// [.strtab] $d.83
// [.strtab] $x.173
// [.strtab] $d.173
// [.strtab] $x.73
// [.strtab] $d.73
// [.strtab] $x.163
// [.strtab] $d.163
// [.strtab] $x.63
// [.strtab] $d.253
// [.strtab] $x.153
// [.strtab] $d.153
// [.strtab] $x.53
// [.strtab] $d.243
// [.strtab] $x.143
// [.strtab] $d.143
// [.strtab] $x.43
// [.strtab] $d.43
// [.strtab] step_chg_notifier_call.fc825eab9450fe458cb5482da064b333
// [.strtab] get_config_work.fc825eab9450fe458cb5482da064b333
// [.strtab] status_change_work.fc825eab9450fe458cb5482da064b333
// [.strtab] $x.233
// [.strtab] $x.133
// [.strtab] $d.133
// [.strtab] $x.33
// [.strtab] $x.223
// [.strtab] $d.123
// [.strtab] $x.23
// [.strtab] $x.213
// [.strtab] $x.113
// [.strtab] $d.113
// [.strtab] $x.13
// [.strtab] $d.13
// [.strtab] __UNIQUE_ID_license303
// [.strtab] $x.203
// [.strtab] $x.103
// [.strtab] $d.103
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $x.192
// [.strtab] $d.192
// [.strtab] $x.92
// [.strtab] $d.92
// [.strtab] $x.182
// [.strtab] $d.182
// [.strtab] $x.82
// [.strtab] $d.82
// [.strtab] $x.172
// [.strtab] $d.172
// [.strtab] $x.72
// [.strtab] $x.162
// [.strtab] $d.162
// [.strtab] $x.62
// [.strtab] $d.252
// [.strtab] $x.152
// [.strtab] $d.152
// [.strtab] $x.52
// [.strtab] $d.242
// [.strtab] $x.142
// [.strtab] $d.142
// [.strtab] $x.42
// [.strtab] $d.42
// [.strtab] debugfs_create_u32
// [.strtab] pd_disabled_show.756213caaf8d6a53d7343e50496c5a32
// [.strtab] weak_chg_icl_ua_show.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_write_raw.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_read_raw.756213caaf8d6a53d7343e50496c5a32
// [.strtab] ps_get_max_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32
// [.strtab] ps_set_cur_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32
// [.strtab] ps_get_cur_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_batt_set_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_usb_port_set_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_dc_set_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_usb_set_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_batt_get_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_usb_port_get_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_dc_get_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_usb_get_prop.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_shutdown.756213caaf8d6a53d7343e50496c5a32
// [.strtab] force_batt_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32
// [.strtab] force_dc_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32
// [.strtab] force_usb_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_remove.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_direct_iio_write.756213caaf8d6a53d7343e50496c5a32
// [.strtab] force_batt_psy_update_write.756213caaf8d6a53d7343e50496c5a32
// [.strtab] force_dc_psy_update_write.756213caaf8d6a53d7343e50496c5a32
// [.strtab] force_usb_psy_update_write.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_of_xlate.756213caaf8d6a53d7343e50496c5a32
// [.strtab] pd_disabled_store.756213caaf8d6a53d7343e50496c5a32
// [.strtab] weak_chg_icl_ua_store.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_batt_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_dc_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_usb_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_probe.756213caaf8d6a53d7343e50496c5a32
// [.strtab] smb5_direct_iio_read.756213caaf8d6a53d7343e50496c5a32
// [.strtab] $x.232
// [.strtab] $x.132
// [.strtab] $d.132
// [.strtab] $x.32
// [.strtab] $x.222
// [.strtab] $x.122
// [.strtab] $d.122
// [.strtab] $x.22
// [.strtab] $d.22
// [.strtab] $x.212
// [.strtab] $x.112
// [.strtab] $d.112
// [.strtab] $x.12
// [.strtab] $d.12
// [.strtab] $x.202
// [.strtab] $x.102
// [.strtab] $d.102
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $x.191
// [.strtab] $d.191
// [.strtab] $x.91
// [.strtab] $d.91
// [.strtab] $x.181
// [.strtab] $d.181
// [.strtab] $x.81
// [.strtab] $d.81
// [.strtab] $x.171
// [.strtab] $d.171
// [.strtab] $x.71
// [.strtab] $x.161
// [.strtab] $d.161
// [.strtab] $x.61
// [.strtab] $d.251
// [.strtab] $x.151
// [.strtab] $d.151
// [.strtab] $x.51
// [.strtab] $d.241
// [.strtab] $x.141
// [.strtab] $d.141
// [.strtab] $x.41
// [.strtab] $d.41
// [.strtab] $x.231
// [.strtab] $x.131
// [.strtab] $d.131
// [.strtab] $x.31
// [.strtab] $x.221
// [.strtab] $d.121
// [.strtab] $x.21
// [.strtab] $x.211
// [.strtab] $x.111
// [.strtab] $d.111
// [.strtab] $x.11
// [.strtab] $d.11
// [.strtab] $x.201
// [.strtab] $x.101
// [.strtab] $d.101
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $x.190
// [.strtab] $d.190
// [.strtab] $x.90
// [.strtab] $d.90
// [.strtab] $x.180
// [.strtab] $d.180
// [.strtab] $x.80
// [.strtab] $d.80
// [.strtab] $x.170
// [.strtab] $d.170
// [.strtab] $x.70
// [.strtab] $d.70
// [.strtab] $d.260
// [.strtab] $x.160
// [.strtab] $d.160
// [.strtab] $x.60
// [.strtab] $d.250
// [.strtab] $x.150
// [.strtab] $d.150
// [.strtab] $x.50
// [.strtab] $d.240
// [.strtab] $x.140
// [.strtab] $d.140
// [.strtab] $x.40
// [.strtab] $d.40
// [.strtab] $x.230
// [.strtab] $x.130
// [.strtab] $d.130
// [.strtab] $x.30
// [.strtab] $x.220
// [.strtab] $x.120
// [.strtab] $d.120
// [.strtab] $x.20
// [.strtab] $x.210
// [.strtab] $x.110
// [.strtab] $d.110
// [.strtab] $x.10
// [.strtab] $d.10
// [.strtab] $x.200
// [.strtab] $x.100
// [.strtab] $d.100

/* ---- qcom_step_chg_init @ 00113d30 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int qcom_step_chg_init(undefined8 param_1,byte param_2,byte param_3,byte param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (the_chip != (undefined8 *)0x0) {
    _printk("<3>QCOM-STEPCHG: %s: Already initialized\n","qcom_step_chg_init");
    return -0x16;
  }
  puVar2 = (undefined8 *)devm_kmalloc(param_1,0x1e8,0xdc0);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = wakeup_source_register(param_1,"qcom-step-chg");
    puVar2[0x11] = lVar3;
    if (lVar3 == 0) {
      return -0x16;
    }
    *(byte *)(puVar2 + 3) = param_2 & 1;
    *puVar2 = param_1;
    *(byte *)((long)puVar2 + 0x19) = param_3 & 1;
    *(byte *)((long)puVar2 + 0x1a) = param_4 & 1;
    *(undefined4 *)((long)puVar2 + 0x34) = 0xffffffea;
    *(undefined8 *)((long)puVar2 + 0x2c) = 0xffffffeaffffffea;
    puVar2[0x3b] = param_5;
    puVar2[0x3c] = 0;
    puVar4 = (undefined8 *)devm_kmalloc(param_1,0x80,0xdc0);
    puVar2[0xb] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0x10000000c;
      puVar4[1] = "VBATT";
      puVar4[2] = 0x186a0000186a0;
      uVar5 = devm_kmalloc(param_1,0x80,0xdc0);
      puVar2[0xc] = uVar5;
      lVar3 = devm_kmalloc(param_1,0x80,0xdc0);
      puVar2[0xd] = lVar3;
      if ((undefined4 *)puVar2[0xc] == (undefined4 *)0x0) {
        return -0xc;
      }
      if (lVar3 == 0) {
        return -0xc;
      }
      *(undefined4 *)puVar2[0xc] = 0x33;
      *(undefined4 *)(puVar2[0xc] + 4) = 2;
      *(char **)(puVar2[0xc] + 8) = "BATT_TEMP";
      *(undefined4 *)(puVar2[0xc] + 0x10) = 10;
      *(undefined4 *)(puVar2[0xc] + 0x14) = 0x14;
      *(undefined4 *)puVar2[0xd] = 0x33;
      *(undefined4 *)(puVar2[0xd] + 4) = 2;
      *(char **)(puVar2[0xd] + 8) = "BATT_TEMP";
      *(undefined4 *)(puVar2[0xd] + 0x10) = 10;
      *(undefined4 *)(puVar2[0xd] + 0x14) = 0x14;
      puVar2[0x16] = 0xfffffffe0;
      puVar2[0x17] = puVar2 + 0x17;
      puVar2[0x18] = puVar2 + 0x17;
      puVar2[0x19] = status_change_work_fc825eab9450fe458cb5482da064b333_cfi_jt;
      init_timer_key(puVar2 + 0x1c,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
      puVar2[0x27] = 0xfffffffe0;
      puVar2[0x28] = puVar2 + 0x28;
      puVar2[0x29] = puVar2 + 0x28;
      puVar2[0x2a] = get_config_work_fc825eab9450fe458cb5482da064b333_cfi_jt;
      init_timer_key(puVar2 + 0x2d,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
      puVar2[0x38] = step_chg_notifier_call_fc825eab9450fe458cb5482da064b333_cfi_jt;
      iVar1 = power_supply_reg_notifier(puVar2 + 0x38);
      if (iVar1 < 0) {
        _printk("<3>QCOM-STEPCHG: %s: Couldn't register psy notifier rc = %d\n","step_chg_register_notifier",iVar1);
        _printk("<3>QCOM-STEPCHG: %s: Couldn't register psy notifier rc = %d\n","qcom_step_chg_init",iVar1);
        wakeup_source_unregister(puVar2[0x11]);
        return iVar1;
      }
      queue_delayed_work_on(0x20,_system_wq,puVar2 + 0x27,500);
      the_chip = puVar2;
      return 0;
    }
  }
  return -0xc;
}



/* ---- status_change_work.fc825eab9450fe458cb5482da064b333 @ 00113fdc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void status_change_work_fc825eab9450fe458cb5482da064b333(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined8 *in_x18;
  undefined8 *puVar20;
  uint *puVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  undefined8 unaff_x30;
  ulong local_90;
  int local_84;
  int local_80;
  int local_7c;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar11 = sp_el0;
  local_68 = *(long *)(lVar11 + 0x5e0);
  puVar20 = (undefined8 *)(param_1 + -0xb0);
  lVar11 = *(long *)(param_1 + -0x20);
  local_90 = 0;
  if (lVar11 == 0) {
    lVar11 = power_supply_get_by_name("battery");
    *(long *)(param_1 + -0x20) = lVar11;
    if (lVar11 == 0) goto LAB_00114078;
  }
  if (*(char *)(param_1 + -0x88) == '\0') {
    if (0xfffffffffffff000 < *(ulong *)(param_1 + 0x130)) goto LAB_00114078;
    if (*(ulong *)(param_1 + 0x130) == 0) {
      uVar12 = get_ext_channels(*puVar20,&step_chg_ext_iio_chan,6);
      if (0xfffffffffffff000 < uVar12) {
        if ((int)uVar12 != -0x205) {
          _dev_err(*puVar20,"Failed to get channels, %d\n");
          *(undefined8 *)(param_1 + 0x130) = 0xffffffffffffffea;
        }
        goto LAB_00114078;
      }
      lVar11 = *(long *)(param_1 + -0x20);
      *(ulong *)(param_1 + 0x130) = uVar12;
    }
  }
  local_70 = 0;
  iVar6 = power_supply_get_property(lVar11,3,&local_70);
  if (iVar6 < 0) {
    _printk("<3>QCOM-STEPCHG: %s: Get battery present status failed, rc=%d\n","handle_battery_insertion",iVar6);
  }
  else if ((bool)*(char *)(param_1 + -0x8f) != ((uint)local_70 == 0)) {
    *(bool *)(param_1 + -0x8f) = (uint)local_70 == 0;
    if ((uint)local_70 == 0) {
      *(undefined2 *)(param_1 + -0x94) = 0;
      *(undefined4 *)(param_1 + -0x78) = 0;
    }
    else {
      queue_delayed_work_on(0x20,_system_wq,param_1 + 0x88,0x32);
    }
  }
  local_78 = 0;
  local_70 = 0;
  iVar6 = power_supply_get_property(*(undefined8 *)(param_1 + -0x20),7,&local_70);
  if (iVar6 < 0) {
    puVar13 = "<3>QCOM-STEPCHG: %s: cycle_count is not ready fail rc = %d\n";
LAB_00114178:
    _printk(puVar13,"handle_step_chg_cycle_count",iVar6);
    _printk("<3>QCOM-STEPCHG: %s: Couldn't handle step cycle count rc = %d\n","status_change_work",iVar6);
  }
  else {
    _printk("<6>QCOM-STEPCHG: %s: step: cycle_count is %d\n","handle_step_chg_cycle_count",local_70 & 0xffffffff);
    if (*(long *)(param_1 + 0x128) == 0) {
      iVar6 = -0x13;
LAB_00114a94:
      puVar13 = "<3>QCOM-STEPCHG: %s: Couldn't read fastcharge mode fail rc=%d\n";
      goto LAB_00114178;
    }
    iVar6 = iio_read_channel_processed(*(long *)(param_1 + 0x128) + 0x1230,&local_78);
    if (iVar6 < 0) goto LAB_00114a94;
    if ((int)(uint)local_70 < 0x321) {
      if ((int)(uint)local_70 < 0x65) {
        if ((int)local_78 == 0) {
          uVar9 = 5400000;
          *(undefined4 *)(*(long *)(param_1 + -0x50) + 0x58) = 5400000;
          uVar19 = 0xe6d0;
          goto LAB_00114510;
        }
        uVar9 = 6000000;
        *(undefined4 *)(*(long *)(param_1 + -0x50) + 0x58) = 6000000;
        uVar19 = 4500000;
        goto LAB_00114514;
      }
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x20) = step1_chg_ranges;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x24) = DAT_00100184;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x28) = DAT_00100188;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x2c) = DAT_0010018c;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x30) = DAT_00100190;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x34) = DAT_00100194;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x38) = DAT_00100198;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x3c) = DAT_0010019c;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x40) = DAT_001001a0;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x44) = DAT_001001a4;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x48) = DAT_001001a8;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x4c) = DAT_001001ac;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x50) = DAT_001001b0;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x54) = DAT_001001b4;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x58) = DAT_001001b8;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x5c) = DAT_001001bc;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x60) = DAT_001001c0;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 100) = DAT_001001c4;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x68) = DAT_001001c8;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x6c) = DAT_001001cc;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x70) = DAT_001001d0;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x74) = DAT_001001d4;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x78) = DAT_001001d8;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x7c) = DAT_001001dc;
      if ((int)local_78 == 0) {
        uVar9 = 5400000;
        *(undefined4 *)(*(long *)(param_1 + -0x50) + 0x58) = 5400000;
        lVar11 = *(long *)(param_1 + -0x48);
        if ((int)(uint)local_70 < 0x12d) {
          uVar19 = 0x43bfc0;
        }
        else {
          uVar19 = 0x4398b0;
        }
      }
      else {
        uVar9 = 6000000;
        uVar19 = 0x445c00;
        *(undefined4 *)(*(long *)(param_1 + -0x50) + 0x58) = 6000000;
        lVar11 = *(long *)(param_1 + -0x48);
      }
    }
    else {
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x20) = step2_chg_ranges;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x24) = DAT_001001e4;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x28) = DAT_001001e8;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x2c) = DAT_001001ec;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x30) = DAT_001001f0;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x34) = DAT_001001f4;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x38) = DAT_001001f8;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x3c) = DAT_001001fc;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x40) = DAT_00100200;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x44) = DAT_00100204;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x48) = DAT_00100208;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x4c) = DAT_0010020c;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x50) = DAT_00100210;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x54) = DAT_00100214;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x58) = DAT_00100218;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x5c) = DAT_0010021c;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x60) = DAT_00100220;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 100) = DAT_00100224;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x68) = DAT_00100228;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x6c) = DAT_0010022c;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x70) = DAT_00100230;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x74) = DAT_00100234;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x78) = DAT_00100238;
      *(undefined4 *)(*(long *)(param_1 + -0x58) + 0x7c) = DAT_0010023c;
      if ((int)local_78 == 0) {
        uVar9 = 0x41eb00;
        *(undefined4 *)(*(long *)(param_1 + -0x50) + 0x58) = 0x41eb00;
        uVar19 = 0x4a90;
LAB_00114510:
        uVar19 = uVar19 | 0x430000;
      }
      else {
        uVar9 = 4800000;
        *(undefined4 *)(*(long *)(param_1 + -0x50) + 0x58) = 4800000;
        uVar19 = 0x440de0;
      }
LAB_00114514:
      lVar11 = *(long *)(param_1 + -0x48);
    }
    *(uint *)(lVar11 + 0x58) = uVar19;
    *(undefined4 *)(*(long *)(param_1 + -0x50) + 100) = uVar9;
    *(uint *)(*(long *)(param_1 + -0x48) + 100) = uVar19;
  }
  local_78 = 0;
  local_7c = 0;
  local_84 = 0;
  local_80 = 0;
  if (*(long *)(param_1 + 0x128) == 0) {
    iVar6 = -0x13;
LAB_00114a64:
    *(undefined1 *)(param_1 + -0x97) = 0;
    _printk("<3>QCOM-STEPCHG: %s: Failed to read jeita_enabled rc=%d\n","handle_jeita",iVar6);
    cVar1 = *(char *)(param_1 + -0x8d);
  }
  else {
    iVar6 = iio_read_channel_processed(*(long *)(param_1 + 0x128) + 0x540,&local_84);
    if (iVar6 < 0) goto LAB_00114a64;
    *(bool *)(param_1 + -0x97) = local_84 != 0;
    cVar1 = *(char *)(param_1 + -0x8d);
  }
  if (cVar1 != '\0') {
    puVar18 = *(undefined4 **)(param_1 + -0x50);
    local_70 = 0;
    if (*(char *)(puVar18 + 6) == '\0') {
      iVar6 = power_supply_get_property(*(undefined8 *)(param_1 + -0x20),*puVar18,&local_70);
      if (-1 < iVar6) goto LAB_001145e8;
    }
    else {
      if (*(char *)(param_1 + -0x88) != '\0') {
LAB_001145e8:
        iVar6 = *(int *)(param_1 + -0x70);
        iVar15 = *(int *)(param_1 + -0x6c);
        if (((iVar6 < iVar15) || (iVar6 < (int)(uint)local_70)) || ((int)(uint)local_70 < iVar15)) {
          if (((iVar15 < iVar6) || ((int)(uint)local_70 < iVar6)) || (iVar15 <= (int)(uint)local_70)
             ) {
            *(uint *)(param_1 + -0x74) = (uint)local_70;
            vote(*(undefined8 *)(param_1 + -0x40),"JEITA_FCC_SCALE_VOTER",0,0);
            goto LAB_001146f8;
          }
          if (iVar15 <= iVar6) goto LAB_0011464c;
LAB_00114660:
          if ((iVar6 <= iVar15) &&
             ((iVar7 = *(int *)(param_1 + -0x74), iVar6 <= iVar7 && (iVar7 < iVar15))))
          goto LAB_0011467c;
        }
        else {
LAB_0011464c:
          iVar7 = *(int *)(param_1 + -0x74);
          if ((iVar6 < iVar7) || (iVar7 < iVar15)) goto LAB_00114660;
LAB_0011467c:
          if (((int)(uint)local_70 <= *(int *)(*(long *)(param_1 + -0x50) + 0x10) + iVar7) &&
             (iVar7 - *(int *)(*(long *)(param_1 + -0x50) + 0x14) <= (int)(uint)local_70))
          goto LAB_001146f8;
        }
        auVar2 = SEXT816(*(long *)(param_1 + -0x68) -
                         *(long *)(param_1 + -0x60) * (long)(int)((uint)local_70 - iVar6)) *
                 ZEXT816(0xa3d70a3d70a3d70b);
        vote(*(undefined8 *)(param_1 + -0x40),"JEITA_FCC_SCALE_VOTER",1,
             ((int)(auVar2._8_8_ >> 6) - (auVar2._12_4_ >> 0x1f)) * 100);
        *(uint *)(param_1 + -0x74) = (uint)local_70;
        goto LAB_001146f8;
      }
      uVar12 = *(ulong *)(param_1 + 0x130);
      iVar6 = -0x13;
      iVar15 = puVar18[1];
      if ((uVar12 != 0) && (uVar12 < 0xfffffffffffff001)) {
        iVar6 = iio_read_channel_processed(*(undefined8 *)(uVar12 + (long)iVar15 * 8),&local_70);
        if (-1 < iVar6) goto LAB_001145e8;
        iVar15 = *(int *)(*(long *)(param_1 + -0x50) + 4);
      }
      _printk("<3>QCOM-STEPCHG: %s: Failed to read IIO prop %d rc=%d\n","handle_jeita_fcc_scaling",iVar15,iVar6);
    }
    _printk("<3>QCOM-STEPCHG: %s: Couldn't read %s property rc=%d\n","handle_jeita_fcc_scaling",*(undefined8 *)(*(long *)(param_1 + -0x50) + 8)
            ,iVar6);
  }
LAB_001146f8:
  if ((*(char *)(param_1 + -0x97) == '\0') || (*(char *)(param_1 + -0x93) == '\0')) {
    if (*(long *)(param_1 + -0x40) != 0) {
      vote(*(long *)(param_1 + -0x40),"JEITA_VOTER",0,0);
    }
    if (*(long *)(param_1 + -0x38) != 0) {
      vote(*(long *)(param_1 + -0x38),"JEITA_VOTER",0,0);
    }
    if (*(long *)(param_1 + -0x30) != 0) {
      vote(*(long *)(param_1 + -0x30),"JEITA_VOTER",0,0);
    }
  }
  else {
    lVar11 = ktime_get();
    if (4999999 < (ulong)((lVar11 - *(long *)(param_1 + -0xa0)) / 1000)) {
      puVar18 = *(undefined4 **)(param_1 + -0x50);
      if (*(char *)(puVar18 + 6) == '\0') {
        iVar6 = power_supply_get_property(*(undefined8 *)(param_1 + -0x20),*puVar18,&local_78);
        if (-1 < iVar6) goto LAB_00114814;
LAB_00114cf8:
        _printk("<3>QCOM-STEPCHG: %s: Couldn't read %s property rc=%d\n","handle_jeita",*(undefined8 *)(*(long *)(param_1 + -0x50) + 8),iVar6);
      }
      else {
        if (*(char *)(param_1 + -0x88) == '\0') {
          uVar12 = *(ulong *)(param_1 + 0x130);
          iVar6 = -0x13;
          iVar15 = puVar18[1];
          if ((uVar12 != 0) && (uVar12 < 0xfffffffffffff001)) {
            iVar6 = iio_read_channel_processed(*(undefined8 *)(uVar12 + (long)iVar15 * 8),&local_78)
            ;
            if (-1 < iVar6) goto LAB_00114814;
            iVar15 = *(int *)(*(long *)(param_1 + -0x50) + 4);
          }
          _printk("<3>QCOM-STEPCHG: %s: Failed to read IIO prop %d rc=%d\n","handle_jeita",iVar15,iVar6);
          goto LAB_00114cf8;
        }
LAB_00114814:
        uVar12 = local_78;
        iVar15 = (int)local_78;
        piVar23 = (int *)(param_1 + -0x84);
        iVar6 = *piVar23;
        lVar11 = *(long *)(param_1 + -0x50);
        iVar7 = get_val(lVar11 + 0x20,*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                        iVar6,local_78 & 0xffffffff,piVar23,&local_7c);
        if (iVar7 < 0) {
          local_7c = 0;
        }
        lVar11 = *(long *)(param_1 + -0x40);
        if (lVar11 == 0) {
          lVar11 = find_votable("FCC");
          *(long *)(param_1 + -0x40) = lVar11;
          if (lVar11 != 0) goto LAB_00114864;
          iVar6 = -0x16;
        }
        else {
LAB_00114864:
          iVar7 = local_7c;
          vote(lVar11,"JEITA_VOTER",local_7c != 0,local_7c);
          lVar11 = *(long *)(param_1 + -0x48);
          iVar8 = get_val(lVar11 + 0x20,*(undefined4 *)(lVar11 + 0x10),
                          *(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(param_1 + -0x80),
                          local_78 & 0xffffffff,(undefined4 *)(param_1 + -0x80),&local_80);
          if (iVar8 < 0) {
            local_80 = 0;
          }
          lVar11 = find_votable(&DAT_0010d6a2);
          *(long *)(param_1 + -0x38) = lVar11;
          if (lVar11 == 0) {
LAB_001148f8:
            uVar14 = ktime_get();
            *(undefined8 *)(param_1 + -0xa0) = uVar14;
            goto LAB_00114900;
          }
          if (*(long *)(param_1 + -0x30) == 0) {
            lVar11 = find_votable("USB_ICL");
            *(long *)(param_1 + -0x30) = lVar11;
            if (lVar11 != 0) goto LAB_00114ad4;
            iVar8 = local_80;
            goto LAB_001148dc;
          }
LAB_00114ad4:
          if (iVar6 == 7) {
            if (*(int *)(*(long *)(param_1 + -0x50) + 0x6c) -
                *(int *)(*(long *)(param_1 + -0x50) + 0x14) <= (int)local_78) {
              _printk("<6>QCOM-STEPCHG: %s: Battery Temperature(%d) between %d and %d,not allow charging yet!!\n","handle_jeita");
              uVar9 = 7;
              goto LAB_00114ba8;
            }
          }
          else if ((iVar6 == -0x16) &&
                  ((int)local_78 <=
                   *(int *)(*(long *)(param_1 + -0x50) + 0x14) +
                   *(int *)(*(long *)(param_1 + -0x50) + 0x20))) {
            _printk("<6>QCOM-STEPCHG: %s: Battery Temperature(%d) between %d and %d,not allow charging yet!!\n","handle_jeita");
            uVar9 = 0xffffffea;
LAB_00114ba8:
            *(undefined4 *)(param_1 + -0x84) = uVar9;
            *(undefined4 *)(param_1 + -0x80) = uVar9;
            vote(*(undefined8 *)(param_1 + -0x40),"JEITA_VOTER",1,0);
          }
          if (*(long *)(param_1 + 0x128) == 0) {
            iVar6 = -0x13;
LAB_00114be8:
            _printk("<3>QCOM-STEPCHG: %s: Get fastcharge mode status failed, rc=%d\n","handle_jeita",iVar6);
          }
          else {
            iVar6 = iio_read_channel_processed(*(long *)(param_1 + 0x128) + 0x60,&local_78);
            if (iVar6 < 0) goto LAB_00114be8;
          }
          iVar8 = (int)local_78;
          iVar6 = power_supply_get_property(*(undefined8 *)(param_1 + -0x20),0x2e,&local_78);
          if (iVar6 < 0) {
            puVar13 = "<3>QCOM-STEPCHG: %s: Couldn't read batt_soc fail rc=%d\n";
          }
          else {
            iVar3 = (int)local_78;
            if (0x5e < (int)local_78) {
              _printk("<3>QCOM-STEPCHG: %s: soc:%d is more than 95, do not set fastcharge mode\n","handle_jeita",local_78 & 0xffffffff);
            }
            lVar11 = *(long *)(param_1 + -8);
            if (lVar11 == 0) {
              lVar11 = power_supply_get_by_name("batt_verify");
              *(long *)(param_1 + -8) = lVar11;
              if (lVar11 != 0) goto LAB_00114c6c;
              iVar24 = (int)local_78;
LAB_00114cb4:
              _printk("<3>QCOM-STEPCHG: %s: batt authentic fail, limit charging current\n","handle_jeita");
              uVar14 = *(undefined8 *)(param_1 + -0x40);
              uVar16 = 1;
              uVar9 = 3600000;
            }
            else {
LAB_00114c6c:
              iVar6 = power_supply_get_property(lVar11,4,&local_78);
              if (iVar6 < 0) {
                _printk("<3>QCOM-STEPCHG: %s: qg_load_battery_profile : get batt id error\n","handle_jeita");
              }
              iVar6 = power_supply_get_property(*(undefined8 *)(param_1 + -8),5,&local_78);
              iVar24 = (int)local_78;
              if (((iVar6 < 0) || ((int)local_78 == 0)) || (*(long *)(param_1 + -8) == 0))
              goto LAB_00114cb4;
              uVar14 = *(undefined8 *)(param_1 + -0x40);
              uVar16 = 0;
              uVar9 = 0;
            }
            vote(uVar14,"BATT_VERIFED_VOTER",uVar16,uVar9);
            if (*(long *)(param_1 + 0x128) == 0) {
              iVar6 = -0x13;
            }
            else {
              iVar6 = iio_read_channel_processed(*(long *)(param_1 + 0x128) + 0x1230,&local_78);
              if (-1 < iVar6) {
                iVar6 = (int)local_78;
                bVar5 = (int)local_78 == 0;
                bVar17 = !bVar5;
                iVar10 = power_supply_get_property(*(undefined8 *)(param_1 + -0x20),0x43,&local_78);
                if (iVar10 < 0) {
                  _printk("<3>QCOM-STEPCHG: %s: Couldn't get chg_term_current, rc=%d\n","handle_jeita",iVar10);
                }
                if (iVar6 != 0) {
                  if (*piVar23 == 4) {
                    iVar10 = -0x2ee;
                  }
                  else if (*piVar23 == 5) {
                    iVar10 = -0x44c;
                    if (iVar24 != 1) {
                      iVar10 = -1000;
                    }
                  }
                  else {
                    iVar10 = 0;
                  }
                  if (iVar10 != (int)local_78) {
                    local_78 = CONCAT44(local_78._4_4_,iVar10);
                    iVar6 = power_supply_set_property
                                      (*(undefined8 *)(param_1 + -0x20),0x43,&local_78);
                    if (iVar6 < 0) {
                      _printk("<3>QCOM-STEPCHG: %s: Couldn't set chg_term_current, rc=%d\n","handle_jeita",iVar6);
                    }
                    _printk("<3>QCOM-STEPCHG: %s: batt_temp = %d, ffc_chg_term_current=%d\n","handle_jeita",uVar12 & 0xffffffff,iVar10);
                    iVar10 = (int)local_78;
                  }
                  if (iVar8 == 2) {
                    if (iVar15 - 0x97U < 0x149 || bVar5) goto LAB_00115018;
                    _printk("<3>QCOM-STEPCHG: %s: temp:%d disable fastcharge mode\n","handle_jeita",uVar12 & 0xffffffff);
                    local_78 = local_78 & 0xffffffff00000000;
                    if (*(long *)(param_1 + 0x128) != 0) {
                      iVar6 = iio_write_channel_raw(*(long *)(param_1 + 0x128) + 0x1230,0);
                      bVar17 = false;
                      if (iVar6 < 0) goto LAB_00115278;
                      goto LAB_00115118;
                    }
                  }
                  else {
                    local_78 = local_78 & 0xffffffff00000000;
                    if (*(long *)(param_1 + 0x128) != 0) {
                      iVar6 = iio_write_channel_raw(*(long *)(param_1 + 0x128) + 0x1230,0);
                      if (-1 < iVar6) {
                        bVar17 = false;
                        puVar13 = "<3>QCOM-STEPCHG: %s: disable fastcharge mode\n";
                        goto LAB_00115108;
                      }
LAB_00115278:
                      puVar13 = "<3>QCOM-STEPCHG: %s: Set fastcharge mode failed, rc=%d\n";
                      goto LAB_00114ddc;
                    }
                  }
LAB_00115220:
                  iVar6 = -0x13;
                  puVar13 = "<3>QCOM-STEPCHG: %s: Set fastcharge mode failed, rc=%d\n";
                  goto LAB_00114ddc;
                }
                iVar10 = (int)local_78;
                if (iVar8 == 2) {
LAB_00115018:
                  if (((iVar15 < 0x1e0 - *(int *)(*(long *)(param_1 + -0x48) + 0x14)) &&
                      (*(int *)(*(long *)(param_1 + -0x48) + 0x10) + 0x96 < iVar15)) &&
                     (bVar5 && iVar3 < 0x5f)) {
                    _printk("<3>QCOM-STEPCHG: %s: temp:%d enable fastcharge mode\n","handle_jeita",uVar12 & 0xffffffff);
                    local_78 = CONCAT44(local_78._4_4_,1);
                    if (*(long *)(param_1 + 0x128) == 0) goto LAB_00115220;
                    iVar6 = iio_write_channel_raw(*(long *)(param_1 + 0x128) + 0x1230,1);
                    if (iVar6 < 0) goto LAB_00115278;
                    local_78 = CONCAT44(local_78._4_4_,0xffffff06);
                    iVar6 = power_supply_set_property
                                      (*(undefined8 *)(param_1 + -0x20),0x43,&local_78);
                    if (iVar6 < 0) {
                      _printk("<3>QCOM-STEPCHG: %s: Couldn't set chg_term_current, rc=%d\n","handle_jeita",iVar6);
                    }
                    iVar10 = -0xfa;
                    puVar13 = "<6>QCOM-STEPCHG: %s: maintain non ffc charging iterm, aviod discharging early\n";
LAB_00115108:
                    _printk(puVar13,"handle_jeita");
                  }
                }
                else {
                  bVar17 = false;
                }
LAB_00115118:
                iVar8 = local_80;
                _printk("<6>QCOM-STEPCHG: %s: temp = %d, FCM = %d, fcc_ua(%d) = %d, fv_uv(%d) = %d, iterm = %d\n","handle_jeita",uVar12 & 0xffffffff,bVar17,
                        *(undefined4 *)(param_1 + -0x84),iVar7,*(undefined4 *)(param_1 + -0x80),
                        local_80,iVar10);
                lVar11 = *(long *)(param_1 + 0x128);
                if (iVar15 - 0x1e1U < 0xfffffeb5) {
                  if (lVar11 == 0) goto LAB_00115284;
                  uVar14 = 0;
                }
                else {
                  if (lVar11 == 0) {
LAB_00115284:
                    iVar6 = -0x13;
                    puVar13 = "<3>QCOM-STEPCHG: %s: Set recharge mode failed, rc=%d\n";
                    goto LAB_00114ddc;
                  }
                  uVar14 = 1;
                }
                iVar6 = iio_write_channel_raw(lVar11 + 0x1278,uVar14);
                if (iVar6 < 0) {
                  puVar13 = "<3>QCOM-STEPCHG: %s: Set recharge mode failed, rc=%d\n";
                  goto LAB_00114ddc;
                }
                if (*(long *)(param_1 + 0x128) == 0) {
                  iVar6 = -0x13;
LAB_001152b0:
                  _printk("<3>QCOM-STEPCHG: %s: Couldn't read recharge mode fail rc=%d\n","handle_jeita",iVar6);
                }
                else {
                  iVar6 = iio_read_channel_processed(*(long *)(param_1 + 0x128) + 0x1278,&local_78);
                  if (iVar6 < 0) goto LAB_001152b0;
                }
                iVar6 = power_supply_get_property(*(undefined8 *)(param_1 + -0x20),8,&local_78);
                if ((iVar6 == 0) && ((int)local_78 != iVar8)) {
                  if ((0 < iVar8) && (*(char *)(param_1 + -0x96) != '\0')) {
                    iVar6 = power_supply_get_property
                                      (*(undefined8 *)(param_1 + -0x20),0xc,&local_78);
                    if ((iVar6 == 0) && (iVar8 < (int)local_78)) {
                      uVar14 = *(undefined8 *)(param_1 + -0x30);
                      uVar16 = 1;
                      goto LAB_00115250;
                    }
                    if ((int)local_78 < iVar8 + -50000) goto LAB_00115240;
                  }
                }
                else {
LAB_00115240:
                  uVar14 = *(undefined8 *)(param_1 + -0x30);
                  uVar16 = 0;
LAB_00115250:
                  vote(uVar14,"JEITA_VOTER",uVar16,0);
                }
LAB_001148dc:
                vote(*(undefined8 *)(param_1 + -0x38),"JEITA_VOTER",iVar8 != 0,iVar8);
                goto LAB_001148f8;
              }
            }
            puVar13 = "<3>QCOM-STEPCHG: %s: Couldn't read fastcharge mode fail rc=%d\n";
          }
LAB_00114ddc:
          _printk(puVar13,"handle_jeita",iVar6);
        }
      }
      _printk("<3>QCOM-STEPCHG: %s: Couldn't handle sw jeita rc = %d\n","status_change_work",iVar6);
    }
  }
LAB_00114900:
  local_78 = 0;
  lVar11 = ktime_get();
  if (4999999 < (ulong)((lVar11 - *(long *)(param_1 + -0xa8)) / 1000)) {
    if ((*(char *)(param_1 + -0x98) == '\0') || (*(char *)(param_1 + -0x94) == '\0')) {
LAB_001149e0:
      if (*(long *)(param_1 + -0x40) != 0) {
        vote(*(long *)(param_1 + -0x40),"STEP_CHG_VOTER",0,0);
      }
LAB_001149fc:
      uVar14 = ktime_get();
      *(undefined8 *)(param_1 + -0xa8) = uVar14;
    }
    else {
      puVar18 = *(undefined4 **)(param_1 + -0x58);
      if (*(char *)(puVar18 + 6) == '\0') {
        iVar6 = power_supply_get_property(*(undefined8 *)(param_1 + -0x20),*puVar18,&local_78);
LAB_001149a0:
        uVar12 = local_78 & 0xffffffff;
        if ((iVar6 < 0) || (5000000 < (int)local_78)) goto LAB_00114ebc;
        puVar21 = (uint *)(param_1 + -0x7c);
        uVar19 = *puVar21;
        lVar11 = *(long *)(param_1 + -0x58);
        iVar6 = get_val(lVar11 + 0x20,*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                        uVar19,uVar12,puVar21,&local_7c);
        if (iVar6 < 0) goto LAB_001149e0;
        lVar11 = *(long *)(param_1 + -0x18);
        local_70 = 0;
        if (lVar11 == 0) {
          lVar11 = power_supply_get_by_name("usb");
          *(long *)(param_1 + -0x18) = lVar11;
          if (lVar11 != 0) goto LAB_00114b44;
          uVar22 = 0;
        }
        else {
LAB_00114b44:
          iVar6 = power_supply_get_property(lVar11,3,&local_70);
          if (iVar6 < 0) {
            _printk("<3>QCOM-STEPCHG: %s: Couldn't read USB Present status, rc=%d\n","is_input_present",iVar6);
            uVar22 = 0;
          }
          else {
            uVar22 = (uint)local_70;
          }
        }
        lVar11 = *(long *)(param_1 + -0x10);
        if (lVar11 == 0) {
          lVar11 = power_supply_get_by_name(&DAT_0010e386);
          *(long *)(param_1 + -0x10) = lVar11;
          if (lVar11 != 0) goto LAB_00114d44;
        }
        else {
LAB_00114d44:
          iVar6 = power_supply_get_property(lVar11,3,&local_70);
          if (iVar6 < 0) {
            _printk("<3>QCOM-STEPCHG: %s: Couldn't read DC Present status, rc=%d\n","is_input_present",iVar6);
          }
          else {
            uVar22 = (uint)local_70 | uVar22;
          }
        }
        if (uVar22 == 0) {
          uVar19 = 0;
LAB_00114d90:
          *puVar21 = uVar19;
          uVar22 = uVar19;
        }
        else {
          uVar22 = *puVar21;
          if ((int)uVar22 < (int)uVar19) goto LAB_00114d90;
        }
        lVar11 = *(long *)(param_1 + -0x40);
        if (lVar11 != 0) {
LAB_00114e0c:
          if (*(char *)(param_1 + -0x8e) == '\0') {
            if (7 < uVar22) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x1152d0);
              (*pcVar4)();
            }
            local_7c = *(int *)(*(long *)(param_1 + -0x58) + (ulong)uVar22 * 0xc + 0x28);
            vote(lVar11,"STEP_CHG_VOTER",1);
          }
          else {
            taper_fcc_step_chg(puVar20,(ulong)uVar22,local_78 & 0xffffffff);
          }
          uVar12 = local_78;
          uVar14 = *(undefined8 *)(*(long *)(param_1 + -0x58) + 8);
          uVar9 = get_client_vote(*(undefined8 *)(param_1 + -0x40),"STEP_CHG_VOTER");
          _printk("<6>QCOM-STEPCHG: %s: %s = %d Step-FCC = %duA taper-fcc: %d\n","handle_step_chg_config",uVar14,uVar12 & 0xffffffff,uVar9,
                  *(undefined1 *)(param_1 + -0x8e));
          goto LAB_001149fc;
        }
        lVar11 = find_votable("FCC");
        *(long *)(param_1 + -0x40) = lVar11;
        if (lVar11 != 0) {
          uVar22 = *puVar21;
          goto LAB_00114e0c;
        }
        iVar6 = -0x16;
      }
      else {
        if (*(char *)(param_1 + -0x88) != '\0') {
LAB_00114984:
          iVar6 = 0;
          goto LAB_001149a0;
        }
        uVar12 = *(ulong *)(param_1 + 0x130);
        iVar6 = -0x13;
        iVar15 = puVar18[1];
        if ((uVar12 != 0) && (uVar12 < 0xfffffffffffff001)) {
          iVar6 = iio_read_channel_processed(*(undefined8 *)(uVar12 + (long)iVar15 * 8),&local_78);
          if (-1 < iVar6) goto LAB_00114984;
          iVar15 = *(int *)(*(long *)(param_1 + -0x58) + 4);
        }
        _printk("<3>QCOM-STEPCHG: %s: Failed to read IIO prop %d rc=%d\n","handle_step_chg_config",iVar15,iVar6);
        uVar12 = local_78 & 0xffffffff;
LAB_00114ebc:
        _printk("<3>QCOM-STEPCHG: %s: Couldn't read %s property rc=%d val=%d\n","handle_step_chg_config",
                *(undefined8 *)(*(long *)(param_1 + -0x58) + 8),iVar6,uVar12);
        if (-1 < iVar6) goto LAB_00114a04;
      }
      _printk("<3>QCOM-STEPCHG: %s: Couldn't handle step rc = %d\n","status_change_work",iVar6);
    }
  }
LAB_00114a04:
  lVar11 = *(long *)(param_1 + -0x18);
  if (lVar11 == 0) {
    lVar11 = power_supply_get_by_name("usb");
    *(long *)(param_1 + -0x18) = lVar11;
    if (lVar11 == 0) goto LAB_00114078;
  }
  local_90 = local_90 & 0xffffffff00000000;
  power_supply_get_property(lVar11,3,&local_90);
  if (((int)local_90 == 0) && (*(long *)(param_1 + -0x30) != 0)) {
    vote(*(long *)(param_1 + -0x30),"JEITA_VOTER",0,0);
  }
LAB_00114078:
  __pm_relax(*(undefined8 *)(param_1 + -0x28));
  lVar11 = sp_el0;
  if (*(long *)(lVar11 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- get_config_work.fc825eab9450fe458cb5482da064b333 @ 001152d0 ---- */

/* WARNING: Removing unreachable block (ram,0x001157fc) */
/* WARNING: Removing unreachable block (ram,0x001156d8) */
/* WARNING: Removing unreachable block (ram,0x00115854) */
/* WARNING: Removing unreachable block (ram,0x00115820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_config_work_fc825eab9450fe458cb5482da064b333(long param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 *in_x18;
  ulong uVar11;
  long *plVar12;
  undefined8 unaff_x30;
  uint local_5c;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  plVar12 = (long *)(param_1 + -0x138);
  local_38 = *(long *)(lVar4 + 0x5e0);
  *(undefined1 *)(param_1 + -0x11d) = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  puVar3 = (uint *)of_get_property(*(undefined8 *)(*plVar12 + 0x2f0),"qcom,battery-data",0);
  if (puVar3 != (uint *)0x0) {
    uVar2 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
    lVar4 = of_find_node_by_phandle(uVar2 >> 0x10 | uVar2 << 0x10);
    if (lVar4 == 0) {
      _printk("<3>QCOM-STEPCHG: %s: Get battery data node failed\n","get_step_chg_jeita_setting_from_profile");
      iVar1 = -0x16;
      goto LAB_00115740;
    }
    lVar5 = of_find_property(*(undefined8 *)(*plVar12 + 0x2f0),"qcom,remote-fg",0);
    *(bool *)(param_1 + -0x110) = lVar5 != 0;
    if (lVar5 == 0) {
      puVar9 = *(undefined8 **)(param_1 + 0xa8);
      if ((undefined8 *)0xfffffffffffff000 < puVar9) {
LAB_001156cc:
        iVar1 = -0x13;
        goto LAB_00115740;
      }
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)get_ext_channels(*plVar12,&step_chg_ext_iio_chan,6);
        if ((undefined8 *)0xfffffffffffff000 < puVar9) {
          if ((int)puVar9 != -0x205) {
            _dev_err(*plVar12,"Failed to get channels, %d\n");
            *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffea;
            iVar1 = -0x13;
            goto LAB_00115740;
          }
          goto LAB_001156cc;
        }
        *(undefined8 **)(param_1 + 0xa8) = puVar9;
        if (*(char *)(param_1 + -0x110) != '\0') goto LAB_00115370;
      }
      iVar1 = -0x13;
      if (((puVar9 == (undefined8 *)0x0) || ((undefined8 *)0xfffffffffffff000 < puVar9)) ||
         (iVar1 = iio_read_channel_processed(0xffffffed,*puVar9,&local_4c), iVar1 < 0)) {
        _printk("<3>QCOM-STEPCHG: %s: Failed to read batt_id rc=%d\n","get_step_chg_jeita_setting_from_profile",iVar1);
      }
    }
LAB_00115370:
    if (-1 < (int)local_4c) {
      uVar6 = of_batterydata_get_best_profile(lVar4,(ulong)local_4c / 1000,0);
      uVar11 = uVar6;
      if (uVar6 < 0xfffffffffffff001) {
        if (uVar6 == 0) {
          _printk("<3>QCOM-STEPCHG: %s: Couldn't find profile\n","get_step_chg_jeita_setting_from_profile");
          iVar1 = -0x3d;
        }
        else {
          iVar1 = of_property_read_string(uVar6,"qcom,battery-type",&local_48);
          if (iVar1 < 0) {
            puVar8 = "<3>QCOM-STEPCHG: %s: battery type unavailable, rc:%d\n";
          }
          else {
            iVar1 = of_property_read_variable_u32_array
                              (uVar6,"qcom,max-voltage-uv",(long)&local_40 + 4,1,0);
            if (iVar1 < 0) {
              puVar8 = "<3>QCOM-STEPCHG: %s: max-voltage_uv reading failed, rc=%d\n";
            }
            else {
              iVar1 = of_property_read_variable_u32_array
                                (uVar6,"qcom,fastchg-current-ma",&local_40,1,0);
              if (-1 < iVar1) {
                *(ulong *)(param_1 + -0xf0) = (ulong)(uint)((int)local_40 * 1000);
                lVar4 = of_find_property(uVar6,"qcom,taper-fcc",0);
                *(bool *)(param_1 + -0x116) = lVar4 != 0;
                lVar4 = of_find_property(uVar6,"qcom,soc-based-step-chg",0);
                *(bool *)(param_1 + -0x11a) = lVar4 != 0;
                if (lVar4 != 0) {
                  **(undefined4 **)(param_1 + -0xe0) = 0x2e;
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 4) = 3;
                  *(undefined **)(*(long *)(param_1 + -0xe0) + 8) = "SOC";
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 0x10) = 0;
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 0x14) = 0;
                }
                lVar4 = of_find_property(uVar6,"qcom,ocv-based-step-chg",0);
                *(bool *)(param_1 + -0x119) = lVar4 != 0;
                if (lVar4 != 0) {
                  **(undefined4 **)(param_1 + -0xe0) = 0xe;
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 4) = 4;
                  *(undefined **)(*(long *)(param_1 + -0xe0) + 8) = "OCV";
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 0x10) = 0;
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(param_1 + -0xe0) + 0x18) = 1;
                }
                lVar4 = of_find_property(uVar6,"qcom,vbat-avg-based-step-chg",0);
                *(bool *)(param_1 + -0x118) = lVar4 != 0;
                if (lVar4 != 0) {
                  **(undefined4 **)(param_1 + -0xe0) = 0xd;
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 4) = 5;
                  *(char **)(*(long *)(param_1 + -0xe0) + 8) = "VBAT_AVG";
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 0x10) = 0;
                  *(undefined4 *)(*(long *)(param_1 + -0xe0) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(param_1 + -0xe0) + 0x18) = 1;
                }
                uVar10 = local_40._4_4_;
                if (*(char *)(param_1 + -0x11a) != '\0') {
                  uVar10 = 100;
                }
                *(undefined1 *)(param_1 + -0x11c) = 1;
                iVar1 = read_range_data_from_node
                                  (uVar6,"qcom,step-chg-ranges",*(long *)(param_1 + -0xe0) + 0x20,
                                   uVar10,(int)local_40 * 1000);
                if (iVar1 < 0) {
                  *(undefined1 *)(param_1 + -0x11c) = 0;
                }
                *(undefined1 *)(param_1 + -0x11b) = 1;
                iVar1 = read_range_data_from_node
                                  (uVar6,"qcom,jeita-fcc-ranges",*(long *)(param_1 + -0xd8) + 0x20,
                                   600,(int)local_40 * 1000);
                if (iVar1 < 0) {
                  *(undefined1 *)(param_1 + -0x11b) = 0;
                }
                iVar1 = of_property_read_variable_u32_array
                                  (uVar6,"qcom,step-jeita-hysteresis",&local_58,2,0);
                if (-1 < iVar1) {
                  *(undefined4 *)(*(long *)(param_1 + -0xd8) + 0x10) = (undefined4)local_58;
                  *(undefined4 *)(*(long *)(param_1 + -0xd8) + 0x14) = local_58._4_4_;
                }
                uVar7 = read_range_data_from_node
                                  (uVar6,"qcom,jeita-fv-ranges",*(long *)(param_1 + -0xd0) + 0x20,
                                   600,local_40._4_4_);
                uVar11 = uVar7 & 0xffffffff;
                if ((int)uVar7 < 0) {
                  *(undefined1 *)(param_1 + -0x11b) = 0;
                }
                lVar4 = of_find_property(uVar6,"qcom,jeita-fcc-scaling",0);
                if (lVar4 != 0) {
                  of_property_read_variable_u32_array
                            (uVar6,"qcom,jeita-fcc-scaling-temp-threshold",param_1 + -0xf8,2,0);
                  uVar2 = of_property_read_variable_u32_array
                                    (uVar6,"qcom,jeita-scaling-min-fcc-ua",&local_5c,1,0);
                  uVar11 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
                  if (((local_5c != 0) &&
                      (lVar4 = *(long *)(param_1 + -0xf0) - (ulong)local_5c,
                      lVar4 != 0 && (long)(ulong)local_5c <= *(long *)(param_1 + -0xf0))) &&
                     (iVar1 = *(int *)(param_1 + -0xf4) - *(int *)(param_1 + -0xf8),
                     iVar1 != 0 && *(int *)(param_1 + -0xf8) <= *(int *)(param_1 + -0xf4))) {
                    lVar5 = 0;
                    if ((long)iVar1 != 0) {
                      lVar5 = lVar4 / (long)iVar1;
                    }
                    *(long *)(param_1 + -0xe8) = lVar5;
                    if (0 < lVar5) {
                      *(undefined1 *)(param_1 + -0x115) = 1;
                    }
                  }
                }
                goto LAB_00115734;
              }
              puVar8 = "<3>QCOM-STEPCHG: %s: max-fastchg-current-ma reading failed, rc=%d\n";
            }
          }
          _printk(puVar8,"get_step_chg_jeita_setting_from_profile",iVar1);
          if (iVar1 == -0x10) goto LAB_00115748;
        }
LAB_00115740:
        if (iVar1 != -0x13) goto LAB_00115778;
      }
      else {
LAB_00115734:
        iVar1 = (int)uVar11;
        if (-1 < iVar1) goto LAB_00115778;
        if (iVar1 != -0x10) goto LAB_00115740;
      }
    }
LAB_00115748:
    iVar1 = *(int *)(param_1 + -0x100);
    *(int *)(param_1 + -0x100) = iVar1 + 1;
    if (iVar1 < 0x32) {
      queue_delayed_work_on(0x20,_system_wq,param_1,500);
      goto LAB_00115780;
    }
  }
LAB_00115778:
  *(undefined1 *)(param_1 + -0x11d) = 1;
LAB_00115780:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- qcom_step_chg_deinit @ 001158a8 ---- */

void qcom_step_chg_deinit(void)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = the_chip;
  if (the_chip != 0) {
    cancel_delayed_work_sync(the_chip + 0xb0);
    cancel_delayed_work_sync(lVar1 + 0x138);
    power_supply_unreg_notifier(lVar1 + 0x1c0);
    wakeup_source_unregister(*(undefined8 *)(lVar1 + 0x88));
    the_chip = 0;
  }
  return;
}



/* ---- get_val @ 00115900 ---- */

undefined8
get_val(int *param_1,int param_2,int param_3,uint param_4,int param_5,uint *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_6 = 0xffffffea;
  iVar1 = *param_1;
  if ((param_5 < iVar1) || (iVar2 = param_1[1], iVar2 == 0 && iVar1 == 0)) {
    return 0xffffffc3;
  }
  if ((param_5 >= iVar2 && (param_5 <= iVar1 && iVar2 <= iVar1)) ||
     (param_5 < iVar2 && iVar1 <= iVar2)) {
    *param_6 = 0;
    *param_7 = param_1[2];
    if (*param_6 == 0xffffffea) {
      return 0xffffffc3;
    }
  }
  else {
    iVar1 = param_1[3];
    iVar2 = param_1[4];
    if (iVar2 == 0 && iVar1 == 0) {
      uVar3 = 1;
    }
    else if ((((param_5 < iVar2) || (iVar1 < iVar2)) || (iVar1 < param_5)) &&
            (((iVar2 <= param_5 || (iVar2 < iVar1)) || (param_5 < iVar1)))) {
      iVar1 = param_1[6];
      iVar2 = param_1[7];
      if (iVar2 == 0 && iVar1 == 0) {
        uVar3 = 2;
      }
      else {
        if ((((iVar2 <= param_5) && (iVar2 <= iVar1)) && (param_5 <= iVar1)) ||
           (((param_5 < iVar2 && (iVar1 <= iVar2)) && (iVar1 <= param_5)))) {
          uVar3 = 2;
          goto LAB_001159cc;
        }
        iVar1 = param_1[9];
        iVar2 = param_1[10];
        if (iVar2 == 0 && iVar1 == 0) {
          uVar3 = 3;
        }
        else {
          if ((((iVar2 <= param_5) && (iVar2 <= iVar1)) && (param_5 <= iVar1)) ||
             (((param_5 < iVar2 && (iVar1 <= iVar2)) && (iVar1 <= param_5)))) {
            uVar3 = 3;
            goto LAB_001159cc;
          }
          iVar1 = param_1[0xc];
          iVar2 = param_1[0xd];
          if (iVar2 == 0 && iVar1 == 0) {
            uVar3 = 4;
          }
          else {
            if ((((iVar2 <= param_5) && (iVar2 <= iVar1)) && (param_5 <= iVar1)) ||
               (((param_5 < iVar2 && (iVar1 <= iVar2)) && (iVar1 <= param_5)))) {
              uVar3 = 4;
              goto LAB_001159cc;
            }
            iVar1 = param_1[0xf];
            iVar2 = param_1[0x10];
            if (iVar2 == 0 && iVar1 == 0) {
              uVar3 = 5;
            }
            else {
              if ((((iVar2 <= param_5) && (iVar2 <= iVar1)) && (param_5 <= iVar1)) ||
                 (((param_5 < iVar2 && (iVar1 <= iVar2)) && (iVar1 <= param_5)))) {
                uVar3 = 5;
                goto LAB_001159cc;
              }
              iVar1 = param_1[0x12];
              iVar2 = param_1[0x13];
              if (iVar2 == 0 && iVar1 == 0) {
                uVar3 = 6;
              }
              else {
                if ((((iVar2 <= param_5) && (iVar2 <= iVar1)) && (param_5 <= iVar1)) ||
                   (((param_5 < iVar2 && (iVar1 <= iVar2)) && (iVar1 <= param_5)))) {
                  uVar3 = 6;
                  goto LAB_001159cc;
                }
                iVar1 = param_1[0x15];
                iVar2 = param_1[0x16];
                if (iVar2 == 0 && iVar1 == 0) {
                  uVar3 = 7;
                }
                else if ((((iVar2 <= param_5) && (iVar2 <= iVar1)) && (param_5 <= iVar1)) ||
                        (((uVar3 = 8, param_5 < iVar2 && (iVar1 <= iVar2)) && (iVar1 <= param_5))))
                {
                  uVar3 = 7;
                  goto LAB_001159cc;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 1;
LAB_001159cc:
      *param_6 = uVar3;
      *param_7 = param_1[(ulong)uVar3 * 3 + 2];
      if (*param_6 != 0xffffffea) goto joined_r0x001159f0;
    }
    *param_6 = uVar3 - 1;
    *param_7 = param_1[(ulong)(uVar3 - 1) * 3 + 2];
  }
joined_r0x001159f0:
  if (param_4 != 0xffffffea) {
    uVar3 = *param_6;
    if ((uVar3 == param_4 + 1) && ((int)uVar3 < 5)) {
      if (param_5 < param_1[(long)(int)uVar3 * 3] + param_2) {
LAB_00115a5c:
        *param_6 = param_4;
        *param_7 = param_1[(long)(int)param_4 * 3 + 2];
        return 0;
      }
    }
    else {
      if (uVar3 != param_4 - 1) {
        return 0;
      }
      if ((int)uVar3 < 5) {
        return 0;
      }
      if (param_1[(ulong)uVar3 * 3 + 1] - param_3 < param_5) goto LAB_00115a5c;
    }
  }
  return 0;
}



/* ---- taper_fcc_step_chg @ 00115c6c ---- */

void taper_fcc_step_chg(long param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((int)param_2 < 0) {
    _printk("<3>QCOM-STEPCHG: %s: Invalid STEP CHG index\n","taper_fcc_step_chg");
  }
  else {
    uVar2 = get_effective_result(*(undefined8 *)(param_1 + 0x70));
    if (7 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x115d7c);
      (*pcVar1)();
    }
    lVar5 = *(long *)(param_1 + 0x58);
    uVar4 = *(uint *)(lVar5 + (ulong)param_2 * 0xc + 0x28);
    if (param_2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
    }
    else {
      uVar6 = (ulong)(param_2 - 1);
      if (*(int *)(lVar5 + 0x10) + *(int *)(lVar5 + uVar6 * 0xc + 0x24) < param_3) {
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        if (uVar4 <= uVar2 - 50000) {
          uVar4 = uVar2 - 50000;
        }
      }
      else {
        uVar4 = *(uint *)(lVar5 + uVar6 * 0xc + 0x28);
        if (uVar2 <= uVar4) {
          return;
        }
        if (param_3 <= *(int *)(lVar5 + 0x14) + *(int *)(lVar5 + uVar6 * 0xc + 0x20)) {
          return;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        if (uVar4 <= uVar2 - 50000) {
          uVar4 = uVar2 - 50000;
        }
      }
    }
    vote(uVar3,"STEP_CHG_VOTER",1,uVar4);
  }
  return;
}



/* ---- read_range_data_from_node @ 00115d7c ---- */

ulong read_range_data_from_node(long param_1,long param_2,void *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined8 *in_x18;
  ulong uVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (void *)0x0)) {
    _printk("<3>QCOM-STEPCHG: %s: Invalid parameters passed\n","read_range_data_from_node");
  }
  else {
    uVar4 = of_property_count_elems_of_size(param_1,param_2,4);
    uVar9 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      _printk("<3>QCOM-STEPCHG: %s: Count %s failed, rc=%d\n","read_range_data_from_node",param_2,uVar9);
      return uVar9;
    }
    if (uVar4 == (uVar4 / 3) * 3) {
      uVar3 = uVar9 / 3;
      if (uVar4 < 0x1b) {
        uVar5 = of_property_read_variable_u32_array(param_1,param_2,param_3,uVar9,0);
        if ((int)uVar5 < 0) {
          _printk("<3>QCOM-STEPCHG: %s: Read %s failed, rc=%d\n","read_range_data_from_node",param_2,(ulong)uVar5);
          return (ulong)uVar5;
        }
        if (2 < uVar4) {
          iVar6 = 0;
          do {
            piVar8 = (int *)((long)param_3 + (long)iVar6 * 0xc);
            iVar1 = *piVar8;
            iVar2 = piVar8[1];
            if ((iVar2 < iVar1) ||
               ((iVar6 != 0 && (iVar1 < *(int *)((long)param_3 + (long)(iVar6 + -1) * 0xc + 4))))) {
              _printk("<3>QCOM-STEPCHG: %s: %s thresholds should be in ascendant ranges\n","read_range_data_from_node",param_2);
              memset(param_3,0,uVar3 * 0xc);
              return 0xffffffea;
            }
            if (param_4 < iVar1) {
              *piVar8 = param_4;
            }
            if (param_4 < iVar2) {
              piVar8[1] = param_4;
            }
            puVar7 = (uint *)((long)param_3 + (long)iVar6 * 0xc + 8);
            if (param_5 < *puVar7) {
              *puVar7 = param_5;
            }
            iVar6 = iVar6 + 1;
          } while ((int)uVar3 != iVar6);
        }
        return 0;
      }
      _printk("<3>QCOM-STEPCHG: %s: too many entries(%d), only %d allowed\n","read_range_data_from_node",uVar3,8);
    }
    else {
      _printk("<3>QCOM-STEPCHG: %s: %s length (%d) should be multiple of %d\n","read_range_data_from_node",param_2,uVar9,3);
    }
  }
  return 0xffffffea;
}



/* ---- step_chg_notifier_call.fc825eab9450fe458cb5482da064b333 @ 00115f94 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
step_chg_notifier_call_fc825eab9450fe458cb5482da064b333
          (long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  char *__s1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 0) {
    __s1 = *(char **)*param_3;
    iVar1 = strcmp(__s1,"battery");
    if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"usb"), iVar1 == 0)) {
      __pm_stay_awake(*(undefined8 *)(param_1 + -0x138));
      queue_delayed_work_on(0x20,_system_wq,param_1 + -0x110,0);
      __s1 = *(char **)*param_3;
    }
    iVar1 = strcmp(__s1,"bms");
    if ((iVar1 == 0) && (*(char *)(param_1 + -0x1a5) == '\0')) {
      queue_delayed_work_on(0x20,_system_wq,param_1 + -0x88,0);
    }
  }
  return 1;
}



/* ---- set_fv_ageing @ 001160b8 ---- */

void set_fv_ageing(undefined4 param_1)

{
  fv_ageing = param_1;
  return;
}



/* ---- get_fv_ageing @ 001160cc ---- */

undefined4 get_fv_ageing(void)

{
  return fv_ageing;
}



/* ---- set_blank_status @ 001160e0 ---- */

void set_blank_status(int param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  g_blank_status = (uint)(param_1 == 0);
  uVar2 = is_need_set_drp_to_sink();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    _printk("<6>QCOM-BATT: %s: %s set drp status to try_sink\n","set_blank_status","set_blank_status");
    uVar3 = 1;
    uVar4 = 1;
  }
  else {
    _printk("<6>QCOM-BATT: %s: %s set drp status to sink\n","set_blank_status","set_blank_status");
    uVar3 = 2;
    uVar4 = 2;
  }
  _printk("<3>QCOM-BATT: %s: %s enable: %d, typec_role: %d\n","set_drp_status","set_drp_status",bVar1,uVar3);
  cid_set_prop_typec_power_role(uVar4);
  _printk("<3>QCOM-BATT: %s: set blank_status=%d g_audio_cctog= %d\n","set_blank_status",g_blank_status,g_audio_cctog);
  return;
}



/* ---- is_need_set_drp_to_sink @ 001161c0 ---- */

bool is_need_set_drp_to_sink(void)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_40 = 0;
  pcVar7 = *(code **)(the_chip[0x75] + 0x20);
  if (pcVar7 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar7,&DAT_00102a40);
  }
  uVar6 = (*pcVar7)(*the_chip,3,&local_40);
  iVar5 = (int)local_40;
  _printk("<3>QCOM-BATT: %s: typec_cc_orientation, cc_orientation=%d, rc=%d\n","is_need_set_drp_to_sink",local_40 & 0xffffffff,uVar6);
  _printk("<3>QCOM-BATT: %s: %s screen_on is settled to %d, audio_on: %d, plugin_val: %d\n","is_need_set_drp_to_sink","is_need_set_drp_to_sink",g_blank_status,
          g_audio_cctog,plugin_val);
  bVar3 = g_blank_status == 0;
  bVar4 = g_audio_cctog == 0;
  puVar1 = "<6>QCOM-BATT: %s: %s need set drp to sink\n";
  if (iVar5 != 0 || (!bVar3 || !bVar4)) {
    puVar1 = "<6>QCOM-BATT: %s: %s needn't set drp to sink\n";
  }
  _printk(puVar1,"is_need_set_drp_to_sink","is_need_set_drp_to_sink");
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5 == 0 && (bVar3 && bVar4);
}



/* ---- generate_xm_charge_uvent @ 0011630c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void generate_xm_charge_uvent(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *__src;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  iVar3 = *(int *)(param_1 + 0x240);
  local_48 = 0;
  if ((-1 < iVar3) && (__src = (char *)get_zeroed_page(0xcc0), __src != (char *)0x0)) {
    local_40 = 0;
    uVar5 = *(ulong *)(param_1 + 0x228);
    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
      iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0xa8),&local_40);
      if (iVar2 < 0) {
        _printk("<3>QCOM-BATT: %s: Failed to get soc_decimal rc=%d\n","soc_decimal_show",iVar2);
      }
      scnprintf(__src,0x1000,&DAT_00102f7f,local_40 & 0xffffffff);
    }
    strncpy(generate_xm_charge_uvent_uevent_string + 0x19,__src,0x19);
    uVar5 = *(ulong *)(param_1 + 0x228);
    local_40 = 0;
    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
      iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0xb0),&local_40);
      if (iVar2 < 0) {
        _printk("<3>QCOM-BATT: %s: Failed to get soc_decimal rc=%d\n","soc_decimal_rate_show",iVar2);
      }
      scnprintf(__src,0x1000,&DAT_00102f7f,local_40 & 0xffffffff);
    }
    strncpy(s_POWER_SUPPLY_SOC_DECIMAL_RATE__00100273 + 0x1e,__src,0x14);
    local_40 = local_40 & 0xffffffff00000000;
    pcVar6 = *(code **)(*(long *)(param_1 + 0x1b0) + 0x20);
    if (pcVar6 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar6,&DAT_00102a60);
    }
    iVar2 = (*pcVar6)(*(undefined8 *)(param_1 + -0x1f8),0xc0,&local_40);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't get quick_charge_type, rc=%d\n","quick_charge_type_show",iVar2);
    }
    scnprintf(__src,0x1000,&DAT_00102f7f,local_40 & 0xffffffff);
    strncpy(s_POWER_SUPPLY_QUICK_CHARGE_TYPE__001002a6 + 0x1f,__src,0x13);
    uVar5 = *(ulong *)(param_1 + 0x228);
    local_40 = 0;
    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
      iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0xb8),&local_40);
      if (iVar2 < 0) {
        _printk("<3>QCOM-BATT: %s: Failed to get batt-id rc=%d\n","shutdown_delay_show",iVar2);
      }
      _printk("<6>QCOM-BATT: %s: shutdown_delay from QG is %d \n","shutdown_delay_show",local_40 & 0xffffffff);
      scnprintf(__src,0x1000,&DAT_00102f7f,local_40 & 0xffffffff);
    }
    strncpy(s_POWER_SUPPLY_SHUTDOWN_DELAY__001002d9 + 0x1c,__src,0x16);
    _printk("<3>QCOM-BATT: %s: uevent test : %s %s count=%d\n","generate_xm_charge_uvent",PTR_s_POWER_SUPPLY_QUICK_CHARGE_TYPE__00100320,
            PTR_s_POWER_SUPPLY_SHUTDOWN_DELAY__00100328,iVar3);
    kobject_uevent_env(*(undefined8 *)(param_1 + -0x1f8),2,&generate_xm_charge_uvent_envp);
    free_pages(__src,0);
    *(int *)(param_1 + 0x240) = iVar3 + -1;
    if (*(long *)(param_1 + 0x98) == 0) {
      _printk("<3>QCOM-BATT: %s: uevent: chip->batt_psy addr is NULL !","generate_xm_charge_uvent");
    }
    else {
      iVar3 = power_supply_get_property(*(long *)(param_1 + 0x98),0x2e,&local_48);
      if (iVar3 < 0) {
        _printk("<3>QCOM-BATT: %s: Couldn't get batt capacity rc=%d\n","generate_xm_charge_uvent",iVar3);
      }
      else {
        if ((int)local_48 < 2) {
          uVar4 = 500;
        }
        else {
          uVar4 = 0x7d;
        }
        queue_delayed_work_on(0x20,_system_wq,param_1,uVar4);
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- soc_decimal_show.5ed5160633f7e8983a0264f74c1175a7 @ 00116640 ---- */

void soc_decimal_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x130);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0xa8),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get soc_decimal rc=%d\n","soc_decimal_show",iVar2);
    }
    iVar2 = scnprintf(param_3,0x1000,&DAT_00102f7f,local_30 & 0xffffffff);
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- soc_decimal_rate_show.5ed5160633f7e8983a0264f74c1175a7 @ 001166f8 ---- */

void soc_decimal_rate_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x130);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0xb0),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get soc_decimal rc=%d\n","soc_decimal_rate_show",iVar2);
    }
    iVar2 = scnprintf(param_3,0x1000,&DAT_00102f7f,local_30 & 0xffffffff);
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- quick_charge_type_show.5ed5160633f7e8983a0264f74c1175a7 @ 001167b0 ---- */

long quick_charge_type_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar3 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar3,&DAT_00102a60);
  }
  iVar2 = (*pcVar3)(*(undefined8 *)(param_1 + -0x2f0),0xc0,&local_2c);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't get quick_charge_type, rc=%d\n","quick_charge_type_show",iVar2);
  }
  iVar2 = scnprintf(param_3,0x1000,&DAT_00102f7f,local_2c);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- shutdown_delay_show.5ed5160633f7e8983a0264f74c1175a7 @ 001168a0 ---- */

void shutdown_delay_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x130);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0xb8),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get batt-id rc=%d\n","shutdown_delay_show",iVar2);
    }
    _printk("<6>QCOM-BATT: %s: shutdown_delay from QG is %d \n","shutdown_delay_show",local_30 & 0xffffffff);
    iVar2 = scnprintf(param_3,0x1000,&DAT_00102f7f,local_30 & 0xffffffff);
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- qcom_batt_init @ 00116970 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong qcom_batt_init(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 0) {
    puVar6 = "<3>QCOM-BATT: %s: invalid charger parameter\n";
  }
  else if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(param_2 + 0x28) == 0)) {
    puVar6 = "<3>QCOM-BATT: %s: Invalid iio read/write pointers\n";
  }
  else {
    if (the_chip == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)kmem_cache_alloc_trace(_dev_get_regmap,0xdc0,0x440);
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = 0xfffffff4;
      }
      else {
        *puVar3 = param_1;
        uVar4 = debugfs_create_dir("battery",0);
        puVar3[0x7f] = uVar4;
        if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
          _printk("<3>QCOM-BATT: %s: Couldn't create battery debugfs rc=%ld\n","qcom_batt_create_debugfs");
        }
        else {
          debugfs_create_u32("debug_mask",0x180,uVar4,&debug_mask);
        }
        iVar1 = *(int *)(param_2 + 0xc);
        puVar3[0x75] = param_2;
        *(undefined4 *)((long)puVar3 + 0x14) = 0x32;
        *(undefined4 *)(puVar3 + 0x87) = 5;
        if ((iVar1 == 0x1b) || (iVar1 == 0x15)) {
          *(undefined4 *)(puVar3 + 0x5d) = 3;
        }
        *(undefined4 *)(puVar3 + 4) = 1000000;
        lVar5 = wakeup_source_register(0,"qcom-battery");
        puVar3[0x71] = lVar5;
        if (lVar5 == 0) {
          uVar4 = 0;
        }
        else {
          puVar3[0x11] = 0xfffffffe0;
          puVar3[0x12] = puVar3 + 0x12;
          puVar3[0x13] = puVar3 + 0x12;
          puVar3[0x14] = status_change_work_5ed5160633f7e8983a0264f74c1175a7_cfi_jt;
          init_timer_key(puVar3 + 0x17,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
          puVar3[0x28] = 0xfffffffe0;
          puVar3[0x29] = puVar3 + 0x29;
          puVar3[0x2a] = puVar3 + 0x29;
          puVar3[0x2b] = pl_taper_work_5ed5160633f7e8983a0264f74c1175a7_cfi_jt;
          puVar3[0x22] = 0xfffffffe0;
          puVar3[0x23] = puVar3 + 0x23;
          puVar3[0x24] = puVar3 + 0x23;
          puVar3[0x25] = pl_disable_forever_work_5ed5160633f7e8983a0264f74c1175a7_cfi_jt;
          puVar3[0x2e] = 0xfffffffe0;
          puVar3[0x2f] = puVar3 + 0x2f;
          puVar3[0x30] = puVar3 + 0x2f;
          puVar3[0x31] = fcc_stepper_work_5ed5160633f7e8983a0264f74c1175a7_cfi_jt;
          init_timer_key(puVar3 + 0x34,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
          puVar3[0x3f] = 0xfffffffe0;
          puVar3[0x40] = puVar3 + 0x40;
          puVar3[0x41] = puVar3 + 0x40;
          puVar3[0x42] = generate_xm_charge_uvent_cfi_jt;
          init_timer_key(puVar3 + 0x45,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
          uVar4 = create_votable("FCC_MAIN",0,
                                 pl_fcc_main_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt,
                                 puVar3);
          puVar3[0xe] = uVar4;
          if (uVar4 < 0xfffffffffffff001) {
            uVar4 = create_votable("FCC",0,
                                   pl_fcc_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt,
                                   puVar3);
            puVar3[5] = uVar4;
            if (uVar4 < 0xfffffffffffff001) {
              uVar4 = create_votable(&DAT_0010d6a2,0,
                                     pl_fv_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt,
                                     puVar3);
              puVar3[6] = uVar4;
              if (uVar4 < 0xfffffffffffff001) {
                uVar4 = create_votable("USB_ICL",0,
                                       usb_icl_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt
                                       ,puVar3);
                puVar3[10] = uVar4;
                if (uVar4 < 0xfffffffffffff001) {
                  uVar4 = create_votable("PL_DISABLE",2,
                                         pl_disable_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt
                                         ,puVar3);
                  puVar3[7] = uVar4;
                  if (uVar4 < 0xfffffffffffff001) {
                    vote(uVar4,"CHG_STATE_VOTER",1,0);
                    vote(puVar3[7],"TAPER_END_VOTER",0,0);
                    vote(puVar3[7],"PARALLEL_PSY_VOTER",1,0);
                    uVar4 = create_votable("PL_AWAKE",2,
                                           pl_awake_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt
                                           ,puVar3);
                    puVar3[8] = uVar4;
                    if (uVar4 < 0xfffffffffffff001) {
                      uVar4 = create_votable("PL_ENABLE_INDIRECT",2,
                                             pl_enable_indirect_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt
                                             ,puVar3);
                      puVar3[0xb] = uVar4;
                      if (uVar4 < 0xfffffffffffff001) {
                        vote(puVar3[7],"PL_INDIRECT_VOTER",1,0);
                        uVar4 = create_votable("QUICK_CHARGE_TYPE_CHANGED",2,
                                               quick_charge_type_changed_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt
                                               ,puVar3);
                        puVar3[0x10] = uVar4;
                        if (uVar4 < 0xfffffffffffff001) {
                          uVar4 = create_votable("LOW_FAST",2,
                                                 low_fast_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt
                                                 ,puVar3);
                          puVar3[0x7c] = uVar4;
                          if (uVar4 < 0xfffffffffffff001) {
                            uVar4 = create_votable("NIGHT_CHARGING",2,
                                                                                                      
                                                  night_charging_vote_callback_5ed5160633f7e8983a0264f74c1175a7_cfi_jt
                                                  ,puVar3);
                            puVar3[0x7e] = uVar4;
                            if (uVar4 < 0xfffffffffffff001) {
                              uVar2 = pl_register_notifier(puVar3);
                              if ((int)uVar2 < 0) {
                                uVar4 = (ulong)uVar2;
                                puVar6 = "<3>QCOM-BATT: %s: Couldn't register psy notifier rc = %d\n";
                              }
                              else {
                                status_change_work_5ed5160633f7e8983a0264f74c1175a7(puVar3 + 0x11);
                                *(undefined2 *)(puVar3 + 0x76) = 0x101;
                                puVar3[0x5e] = "qcom-battery";
                                puVar3[0x5f] = &__this_module;
                                puVar3[0x60] = &batt_class_groups;
                                uVar4 = __class_register(puVar3 + 0x5e,&reboot_notifier);
                                if (-1 < (int)uVar4) {
                                  uVar2 = shipmode_register_notifier();
                                  if ((int)uVar2 < 0) {
                                    uVar4 = (ulong)uVar2;
                                    _printk("<3>QCOM-BATT: %s: Couldn't register reboot notifier rc = %d\n","qcom_batt_init",uVar4);
                                    unregister_reboot_notifier(&reboot_notifier);
                                  }
                                  else {
                                    third_cp_iio_init(puVar3);
                                    uVar4 = 0;
                                    the_chip = puVar3;
                                  }
                                  goto LAB_00116e58;
                                }
                                uVar4 = uVar4 & 0xffffffff;
                                puVar6 = "<3>QCOM-BATT: %s: couldn't register pl_data sysfs class rc = %d\n";
                              }
                              _printk(puVar6,"qcom_batt_init",uVar4);
                              power_supply_unreg_notifier(puVar3 + 0x72);
                            }
                            else {
                              uVar4 = uVar4 & 0xffffffff;
                              puVar3[0x7e] = 0;
                            }
                          }
                          else {
                            uVar4 = uVar4 & 0xffffffff;
                            puVar3[0x7c] = 0;
                          }
                        }
                        else {
                          uVar4 = uVar4 & 0xffffffff;
                          puVar3[0x10] = 0;
                        }
                      }
                      else {
                        uVar4 = uVar4 & 0xffffffff;
                        puVar3[0xb] = 0;
                      }
                    }
                    else {
                      uVar4 = uVar4 & 0xffffffff;
                      puVar3[8] = 0;
                    }
                  }
                  else {
                    uVar4 = uVar4 & 0xffffffff;
                    puVar3[7] = 0;
                  }
                }
                else {
                  uVar4 = uVar4 & 0xffffffff;
                  puVar3[10] = 0;
                }
              }
              else {
                uVar4 = uVar4 & 0xffffffff;
                puVar3[6] = 0;
              }
            }
            else {
              uVar4 = uVar4 & 0xffffffff;
              puVar3[5] = 0;
            }
            destroy_votable(puVar3[0xb]);
            destroy_votable(puVar3[8]);
            destroy_votable(puVar3[7]);
            destroy_votable(puVar3[6]);
            destroy_votable(puVar3[5]);
            destroy_votable(puVar3[0xe]);
            destroy_votable(puVar3[10]);
            destroy_votable(puVar3[0x10]);
          }
          else {
            puVar3[0xe] = 0;
          }
          wakeup_source_unregister(puVar3[0x71]);
        }
        kfree(puVar3);
      }
      goto LAB_00116e58;
    }
    puVar6 = "<3>QCOM-BATT: %s: was initialized earlier. Failing now\n";
  }
  _printk(puVar6,"qcom_batt_init");
  uVar4 = 0xffffffea;
LAB_00116e58:
  return uVar4 & 0xffffffff;
}



/* ---- status_change_work.5ed5160633f7e8983a0264f74c1175a7 @ 00116f44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void status_change_work_5ed5160633f7e8983a0264f74c1175a7(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *in_x18;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 unaff_x30;
  int local_5c;
  undefined1 auStack_58 [4];
  int local_54;
  ulong local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_48 = *(long *)(lVar5 + 0x5e0);
  puVar11 = (undefined8 *)(param_1 + -0x88);
  rerun_election(*(undefined8 *)(param_1 + -0x38));
  rerun_election(*(undefined8 *)(param_1 + -0x60));
  rerun_election(*(undefined8 *)(param_1 + -0x58));
  if (*(long *)(param_1 + 0x208) == 0) {
    lVar5 = power_supply_get_by_name("battery");
    *(long *)(param_1 + 0x208) = lVar5;
    if (lVar5 == 0) goto LAB_00117554;
  }
  local_50 = 0;
  if (*(ulong *)(param_1 + 0x390) < 0xfffffffffffff001) {
    if (*(ulong *)(param_1 + 0x390) == 0) {
      uVar10 = get_ext_channels(*puVar11,&bat_smb_parallel_ext_iio_chan,9);
      if (0xfffffffffffff000 < uVar10) {
        if ((int)uVar10 != -0x205) {
          _dev_err(*puVar11,"Failed to get channels, %d\n");
          *(undefined8 *)(param_1 + 0x390) = 0xffffffffffffffea;
        }
        goto LAB_001171a0;
      }
      *(ulong *)(param_1 + 0x390) = uVar10;
      lVar5 = *(long *)(param_1 + 0x200);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x200);
    }
    if (lVar5 == 0) {
      lVar5 = power_supply_get_by_name("parallel");
      *(long *)(param_1 + 0x200) = lVar5;
      if (lVar5 == 0) goto LAB_001171a0;
    }
    vote(*(undefined8 *)(param_1 + -0x50),"PARALLEL_PSY_VOTER",0,0);
    uVar10 = *(ulong *)(param_1 + 0x390);
    iVar2 = -0x13;
    if (((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) ||
       (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 8),&local_50,0xffffffed),
       iVar2 < 0)) {
      puVar6 = "<3>QCOM-BATT: %s: Couldn't get parallel mode from parallel rc=%d\n";
    }
    else {
      *(int *)(param_1 + -0x80) = (int)local_50;
      if (((int)local_50 - 1U < 2) && ((*(byte *)(param_1 + 0x260) >> 1 & 1) != 0)) {
        lVar5 = *(long *)(param_1 + -0x40);
        if (lVar5 == 0) {
          lVar5 = find_votable("HVDCP_HW_INOV_DIS");
          *(long *)(param_1 + -0x40) = lVar5;
          if (lVar5 == 0) goto LAB_001171a0;
        }
        vote(lVar5,"PL_VOTER",1,0);
      }
      uVar10 = *(ulong *)(param_1 + 0x390);
      iVar2 = -0x13;
      if (((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) ||
         (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x10),&local_50,0xffffffed),
         iVar2 < 0)) {
        puVar6 = "<3>QCOM-BATT: %s: Couldn't get parallel batfet mode rc=%d\n";
      }
      else {
        uVar1 = (int)local_50;
        iVar2 = -0x13;
        uVar10 = *(ulong *)(param_1 + 0x390);
        local_50 = local_50 & 0xffffffff00000000;
        *(undefined4 *)(param_1 + -0x7c) = uVar1;
        if (((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) ||
           (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x18),&local_50,0xffffffed),
           iVar2 < 0)) {
          _printk("<3>QCOM-BATT: %s: Couldn't get min_icl rc=%d\n","is_parallel_available",iVar2);
        }
        else {
          *(int *)(param_1 + -0x78) = (int)local_50;
        }
        uVar10 = *(ulong *)(param_1 + 0x390);
        iVar2 = -0x13;
        *(undefined4 *)(param_1 + 0x234) = 0x7fffffff;
        if (((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) &&
           (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x20),&local_50,0xffffffed),
           -1 < iVar2)) {
          *(int *)(param_1 + 0x234) = (int)local_50;
          goto LAB_001171a0;
        }
        puVar6 = "<3>QCOM-BATT: %s: Couldn't get fcc_max rc=%d\n";
      }
    }
    _printk(puVar6,"is_parallel_available",iVar2);
  }
LAB_001171a0:
  lVar5 = *(long *)(param_1 + 0x210);
  local_54 = 0;
  local_50 = 0;
  if (lVar5 == 0) {
    lVar5 = power_supply_get_by_name("usb");
    *(long *)(param_1 + 0x210) = lVar5;
    if (lVar5 != 0) goto LAB_001171cc;
    _printk("<3>QCOM-BATT: %s: Couldn't get usbpsy\n","handle_usb_change");
  }
  else {
LAB_001171cc:
    iVar2 = power_supply_get_property(lVar5,3,&local_50);
    if (iVar2 < 0) {
      puVar6 = "<3>QCOM-BATT: %s: Couldn't get present from USB rc=%d\n";
LAB_00117288:
      _printk(puVar6,"handle_usb_change",iVar2);
    }
    else if ((int)local_50 == 0) {
      vote(*(undefined8 *)(param_1 + -0x50),"TAPER_END_VOTER",0,0);
      vote(*(undefined8 *)(param_1 + -0x50),"PL_TAPER_EARLY_BAD_VOTER",0,0);
      vote(*(undefined8 *)(param_1 + -0x50),"ICL_LIMIT_VOTER",0,0);
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + -0x70) = 0;
      *(undefined4 *)(param_1 + 0x334) = 0;
    }
    else {
      pcVar12 = *(code **)(*(long *)(param_1 + 800) + 0x20);
      if (pcVar12 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
        __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar12,&DAT_00102a80);
      }
      iVar2 = (*pcVar12)(*puVar11,10,&local_54);
      if (iVar2 < 0) {
        puVar6 = "<3>QCOM-BATT: %s: Couldn't get USB real type rc=%d\n";
        goto LAB_00117288;
      }
      *(int *)(param_1 + 0x334) = local_54;
    }
  }
  local_50 = 0;
  iVar2 = power_supply_get_property(*(undefined8 *)(param_1 + 0x208),1,&local_50);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't get batt charge type rc=%d\n","handle_main_charge_type",iVar2);
  }
  else {
    if (((int)local_50 == 3) || ((int)local_50 == 5)) {
      if ((*(int *)(param_1 + 0x228) == 3) && ((int)local_50 == 5)) {
        *(undefined4 *)(param_1 + 0x228) = 5;
        if (*(char *)(param_1 + 0x1f8) == '\0') {
          if ((debug_mask & 1) != 0) {
            _printk("<6>QCOM-BATT: %s: taper entry scheduling work\n","handle_main_charge_type");
          }
          vote(*(undefined8 *)(param_1 + -0x48),"TAPER_END_VOTER",1,0);
          queue_work_on(0x20,_system_long_wq,param_1 + 0xb8);
        }
        goto LAB_00117398;
      }
      if ((int)local_50 == 5) {
LAB_0011736c:
        if ((debug_mask & 1) != 0) {
          _printk("<6>QCOM-BATT: %s: chg_state enabling parallel\n","handle_main_charge_type");
        }
        uVar9 = *(undefined8 *)(param_1 + -0x50);
        uVar8 = 0;
        goto LAB_00117388;
      }
      if ((int)local_50 == 3) {
        iVar2 = *(int *)(param_1 + 0x32c);
        iVar4 = get_effective_result(*(undefined8 *)(param_1 + -0x58));
        if (iVar2 < iVar4) {
          vote(*(undefined8 *)(param_1 + -0x50),"TAPER_END_VOTER",0,0);
        }
        goto LAB_0011736c;
      }
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + -0x50);
      uVar8 = 1;
LAB_00117388:
      vote(uVar9,"CHG_STATE_VOTER",uVar8,0);
    }
    *(int *)(param_1 + 0x228) = (int)local_50;
  }
LAB_00117398:
  local_5c = 0;
  uVar3 = get_effective_result_locked(*(undefined8 *)(param_1 + -0x38));
  pcVar12 = *(code **)(*(long *)(param_1 + 800) + 0x20);
  if (pcVar12 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar12,&DAT_00102aa0);
  }
  iVar4 = (*pcVar12)(*puVar11,0x21,&local_5c);
  iVar2 = local_5c;
  if (iVar4 < 0) {
LAB_001174bc:
    _printk("<3>QCOM-BATT: %s: Couldn't get aicl settled value rc=%d\n","handle_settled_icl_change",iVar4);
  }
  else {
    pcVar12 = *(code **)(*(long *)(param_1 + 800) + 0x20);
    if (pcVar12 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar12,&DAT_00102ac0);
    }
    iVar4 = (*pcVar12)(*puVar11,0x37,&local_5c);
    if (iVar4 < 0) goto LAB_001174bc;
    uVar9 = 0;
    if (local_5c == 0) {
      if (iVar2 != 0) goto LAB_00117428;
    }
    else if ((iVar2 != 0) && (1399999 < *(int *)(param_1 + 0x230) + iVar2)) {
LAB_00117428:
      if (1400000 < uVar3) {
        uVar9 = 1;
      }
    }
    vote(*(undefined8 *)(param_1 + -0x30),"USBIN_I_VOTER",uVar9,0);
    rerun_election(*(undefined8 *)(param_1 + -0x60));
    if (*(int *)(param_1 + -0x80) - 1U < 2) {
      iVar2 = *(int *)(param_1 + 0x230) + iVar2;
      uVar9 = extraout_x1;
      if ((debug_mask & 1) != 0) {
        _printk("<6>QCOM-BATT: %s: total_settled_ua=%d settled_ua=%d new_total_settled_ua=%d\n","handle_settled_icl_change",*(undefined4 *)(param_1 + 0x22c),0,iVar2);
        uVar9 = extraout_x1_00;
      }
      iVar2 = iVar2 - *(int *)(param_1 + 0x22c);
      iVar4 = -iVar2;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      if (300000 < iVar4) {
        bVar7 = false;
        local_54 = 0;
        if (*(int *)(param_1 + -0x80) - 1U < 2) {
          iVar2 = get_effective_result_locked(*(undefined8 *)(param_1 + -0x50),uVar9,0);
          if (iVar2 == 0) {
            iVar2 = get_settled_split(puVar11,&local_50,&local_54,auStack_58);
            if (iVar2 < 0) {
              _printk("<3>QCOM-BATT: %s: Couldn't  get split current rc=%d\n","validate_parallel_icl",iVar2);
              goto LAB_00117544;
            }
            bVar7 = local_54 < *(int *)(param_1 + -0x78);
          }
          else {
            bVar7 = false;
          }
        }
        vote(*(undefined8 *)(param_1 + -0x50),"ICL_LIMIT_VOTER",bVar7,0);
        iVar2 = get_effective_result_locked(*(undefined8 *)(param_1 + -0x50));
        if (iVar2 == 0) {
          split_settled(puVar11);
        }
      }
    }
  }
LAB_00117544:
  local_50 = 0;
  iVar2 = get_effective_result_locked(*(undefined8 *)(param_1 + -0x50));
  if (((iVar2 == 0) && (uVar10 = *(ulong *)(param_1 + 0x390), uVar10 != 0)) &&
     (uVar10 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x40),&local_50);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't get pl charge type rc=%d\n","handle_parallel_in_taper",iVar2);
    }
    else if ((int)local_50 == 5) {
      vote(*(undefined8 *)(param_1 + -0x50),"PL_TAPER_EARLY_BAD_VOTER",1,0);
    }
  }
LAB_00117554:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- pl_taper_work.5ed5160633f7e8983a0264f74c1175a7 @ 001176f4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pl_taper_work_5ed5160633f7e8983a0264f74c1175a7(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_58 = *(long *)(lVar1 + 0x5e0);
  local_68 = 0;
  local_60 = 0;
  uVar2 = get_effective_result(*(undefined8 *)(param_1 + -0x110));
  *(undefined4 *)(param_1 + 0x274) = uVar2;
  *(undefined1 *)(param_1 + 0x140) = 1;
  uVar2 = get_client_vote(*(undefined8 *)(param_1 + -0x118),"BATT_PROFILE_VOTER");
  vote(*(undefined8 *)(param_1 + -0x118),"TAPER_STEPPER_VOTER",1,uVar2);
  iVar3 = get_effective_result(*(undefined8 *)(param_1 + -0x108));
  do {
    if (iVar3 != 0) {
      uVar2 = get_effective_result_locked(*(undefined8 *)(param_1 + -0x118));
      get_fcc_split(param_1 + -0x140,uVar2,(long)&local_68 + 4,&local_68);
      if ((int)local_68 < 0x7a121) {
        if ((_debug_mask & 1) != 0) {
          _printk("<6>QCOM-BATT: %s: terminating: parallel's share is low\n","pl_taper_work");
        }
        vote(*(undefined8 *)(param_1 + -0x108),"TAPER_END_VOTER",1,0);
      }
      else if ((_debug_mask & 1) != 0) {
        puVar5 = "<6>QCOM-BATT: %s: terminating: parallel disabled\n";
LAB_00117944:
        _printk(puVar5,"pl_taper_work");
      }
LAB_00117950:
      *(undefined1 *)(param_1 + 0x140) = 0;
      vote(*(undefined8 *)(param_1 + -0x118),"TAPER_STEPPER_VOTER",0,0);
      vote(*(undefined8 *)(param_1 + -0x100),"TAPER_END_VOTER",0,0);
      lVar1 = sp_el0;
      if (*(long *)(lVar1 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar3 = get_effective_result(*(undefined8 *)(param_1 + -0x110));
    if (*(int *)(param_1 + 0x274) < iVar3) {
      if ((_debug_mask & 1) == 0) goto LAB_00117950;
      puVar5 = "<6>QCOM-BATT: %s: Float voltage increased. Exiting taper\n";
      goto LAB_00117944;
    }
    uVar2 = get_effective_result(*(undefined8 *)(param_1 + -0x110));
    *(undefined4 *)(param_1 + 0x274) = uVar2;
    iVar3 = power_supply_get_property(*(undefined8 *)(param_1 + 0x150),1,&local_60);
    if (iVar3 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't get batt charge type rc=%d\n","pl_taper_work",iVar3);
      goto LAB_00117950;
    }
    *(int *)(param_1 + 0x170) = (int)local_60;
    if ((int)local_60 == 5) {
      uVar4 = get_client_vote(*(undefined8 *)(param_1 + -0x118),"TAPER_STEPPER_VOTER");
      if ((int)uVar4 < 0) {
        puVar5 = "<3>QCOM-BATT: %s: Couldn't get fcc, exiting taper work\n";
        goto LAB_00117944;
      }
      if (uVar4 >> 6 < 0xc35) {
        puVar5 = "<3>QCOM-BATT: %s: Can't reduce FCC any more\n";
        goto LAB_00117944;
      }
      if ((_debug_mask & 1) != 0) {
        _printk("<6>QCOM-BATT: %s: master is taper charging; reducing FCC to %dua\n","pl_taper_work",uVar4 - 200000);
      }
      vote(*(undefined8 *)(param_1 + -0x118),"TAPER_STEPPER_VOTER",1,uVar4 - 200000);
    }
    else if ((_debug_mask & 1) != 0) {
      _printk("<6>QCOM-BATT: %s: master is fast charging; waiting for next taper\n","pl_taper_work");
    }
    msleep(500);
    iVar3 = get_effective_result(*(undefined8 *)(param_1 + -0x108));
  } while( true );
}



/* ---- pl_disable_forever_work.5ed5160633f7e8983a0264f74c1175a7 @ 001179c0 ---- */

void pl_disable_forever_work_5ed5160633f7e8983a0264f74c1175a7(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  vote(*(undefined8 *)(param_1 + -0xd8),"PL_HW_ABSENT_VOTER",1,0);
  if (*(long *)(param_1 + -200) != 0) {
    vote(*(long *)(param_1 + -200),"PL_VOTER",0,0);
  }
  return;
}



/* ---- fcc_stepper_work.5ed5160633f7e8983a0264f74c1175a7 @ 00117a20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fcc_stepper_work_5ed5160633f7e8983a0264f74c1175a7(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *in_x18;
  long lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar9 = sp_el0;
  local_38 = *(long *)(lVar9 + 0x5e0);
  lVar9 = param_1 + -0x170;
  local_40 = 0;
  iVar3 = *(int *)(param_1 + -0x154);
  iVar10 = *(int *)(param_1 + -0x158);
  iVar2 = power_supply_get_property(*(undefined8 *)(param_1 + 0x128),3,&local_40);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't get USB Present status, rc=%d\n","fcc_stepper_work",iVar2);
  }
  lVar4 = *(long *)(param_1 + 0x130);
  uVar11 = (uint)local_40;
  if (lVar4 == 0) {
    lVar4 = power_supply_get_by_name(&DAT_0010e386);
    *(long *)(param_1 + 0x130) = lVar4;
    if (lVar4 != 0) goto LAB_00117a94;
  }
  else {
LAB_00117a94:
    iVar2 = power_supply_get_property(lVar4,3,&local_40);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't get DC Present status, rc=%d\n","fcc_stepper_work",iVar2);
    }
    uVar11 = (uint)local_40 | uVar11;
  }
  if (uVar11 == 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x2a8);
    if ((puVar7 == (undefined8 *)0x0) || ((undefined8 *)0xfffffffffffff000 < puVar7)) {
LAB_00117b10:
      iVar3 = get_effective_result_locked(*(undefined8 *)(param_1 + -0x148));
      vote(*(undefined8 *)(param_1 + -0x100),"FCC_STEPPER_VOTER",1,iVar3);
      iVar10 = 0;
      iVar12 = 0;
      goto LAB_00117d20;
    }
    iVar2 = iio_write_channel_raw(*puVar7,1);
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 0x240) = 1;
      power_supply_changed(*(undefined8 *)(param_1 + 0x118));
      goto LAB_00117b10;
    }
LAB_00117d70:
    puVar6 = "<3>QCOM-BATT: %s: Couldn't change slave suspend state rc=%d\n";
LAB_00117d88:
    _printk(puVar6,"fcc_stepper_work",iVar2);
  }
  else {
    if (*(int *)(param_1 + 0x158) == 0) {
      iVar2 = *(int *)(param_1 + 0x15c);
      if (iVar2 == 0) {
        iVar12 = 0;
        iVar2 = *(int *)(param_1 + 0x164);
        goto joined_r0x00117b88;
      }
      iVar12 = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      iVar3 = iVar3 + *(int *)(param_1 + 0x154) * iVar2;
      iVar2 = *(int *)(param_1 + 0x164);
      if (iVar2 == 0) goto LAB_00117b8c;
LAB_00117b60:
      iVar1 = (*(int **)(param_1 + 0x238))[1];
      *(int *)(param_1 + 0x164) = iVar2 + -1;
      iVar12 = **(int **)(param_1 + 0x238);
      iVar10 = iVar10 + *(int *)(param_1 + 0x160) * iVar1;
    }
    else {
      iVar2 = (*(int **)(param_1 + 0x238))[1];
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
      iVar12 = **(int **)(param_1 + 0x238);
      iVar3 = iVar3 + *(int *)(param_1 + 0x154) * iVar2;
      iVar2 = *(int *)(param_1 + 0x164);
joined_r0x00117b88:
      if (iVar2 != 0) goto LAB_00117b60;
LAB_00117b8c:
      if (*(int *)(param_1 + 0x168) != 0) {
        iVar10 = *(int *)(param_1 + 0x168) + iVar10;
        *(undefined4 *)(param_1 + 0x168) = 0;
      }
    }
    if (iVar10 < *(int *)(param_1 + -0x158)) {
      puVar7 = *(undefined8 **)(param_1 + 0x2a8);
      if (((puVar7 != (undefined8 *)0x0) && (puVar7 < (undefined8 *)0xfffffffffffff001)) &&
         (*(char *)(param_1 + 0x240) == '\0')) {
        if (iVar10 < 500000) {
          iVar2 = iio_write_channel_raw(*puVar7,1);
          if (iVar2 < 0) goto LAB_00117d70;
          if (*(int *)(param_1 + -0x168) - 1U < 2) {
            split_settled(lVar9);
          }
          *(undefined8 *)(param_1 + 0x164) = 0;
          *(undefined8 *)(param_1 + 0x144) = 0;
          *(undefined1 *)(param_1 + 0x240) = 1;
          power_supply_changed(*(undefined8 *)(param_1 + 0x118));
          iVar10 = 0;
        }
        else {
          iVar2 = iio_write_channel_raw(puVar7[6],iVar10);
          if (iVar2 < 0) goto LAB_00117d7c;
        }
      }
      vote(*(undefined8 *)(param_1 + -0x100),"FCC_STEPPER_VOTER",1,iVar3);
    }
    else {
      vote(*(undefined8 *)(param_1 + -0x100),"FCC_STEPPER_VOTER",1,iVar3);
      uVar8 = *(ulong *)(param_1 + 0x2a8);
      if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
        iVar2 = iio_write_channel_raw(*(undefined8 *)(uVar8 + 0x30),iVar10);
        if (iVar2 < 0) {
LAB_00117d7c:
          puVar6 = "<3>QCOM-BATT: %s: Couldn't set parallel charger fcc, rc=%d\n";
          goto LAB_00117d88;
        }
        if ((*(char *)(param_1 + 0x240) != '\0') && (499999 < iVar10)) {
          puVar7 = *(undefined8 **)(param_1 + 0x2a8);
          iVar2 = -0x13;
          if ((puVar7 == (undefined8 *)0x0) ||
             (((undefined8 *)0xfffffffffffff000 < puVar7 ||
              (iVar2 = iio_write_channel_raw(*puVar7,0,0xffffffed), iVar2 < 0)))) goto LAB_00117d70;
          if (*(int *)(param_1 + -0x168) - 1U < 2) {
            split_settled(lVar9);
          }
          *(undefined1 *)(param_1 + 0x240) = 0;
          power_supply_changed(*(undefined8 *)(param_1 + 0x118));
        }
      }
    }
LAB_00117d20:
    iVar2 = iVar10;
    if (iVar10 < 0) {
      iVar2 = iVar10 + 1;
    }
    *(int *)(param_1 + -0x158) = iVar10;
    *(int *)(param_1 + -0x154) = iVar3;
    cp_configure_ilim(lVar9,"FCC_VOTER",iVar2 >> 1);
    if (iVar12 != 0) {
      uVar5 = __msecs_to_jiffies(iVar12);
      queue_delayed_work_on(0x20,_system_wq,param_1,uVar5);
      goto LAB_00117db0;
    }
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  vote(*(undefined8 *)(param_1 + -0x130),"FCC_STEPPER_VOTER",0,0);
LAB_00117db0:
  lVar9 = sp_el0;
  if (*(long *)(lVar9 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- pl_fcc_main_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00117de4 ---- */

int pl_fcc_main_vote_callback_5ed5160633f7e8983a0264f74c1175a7
              (undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  int iVar1;
  undefined8 *in_x18;
  code *pcVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pcVar2 = *(code **)(param_2[0x75] + 0x28);
  if (pcVar2 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar2,&DAT_00102be0);
    param_3 = param_3 & 0xffffffff;
  }
  iVar1 = (*pcVar2)(*param_2,0x2e,param_3);
  if (iVar1 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't set constant_charge_current_max, rc=%d\n","pl_fcc_main_vote_callback",iVar1);
  }
  return iVar1;
}



/* ---- pl_fcc_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00117e98 ---- */

undefined8
pl_fcc_vote_callback_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_44;
  int local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar6 = sp_el0;
  local_38 = *(long *)(lVar6 + 0x5e0);
  local_44 = 0;
  local_40 = 0;
  if (param_3 < 0) goto LAB_0011808c;
  if (param_2[0xd] == 0) {
    uVar3 = find_votable("CP_DISABLE");
    param_2[0xd] = uVar3;
    uVar5 = param_2[0x81];
    if (uVar5 != 0) goto LAB_00117efc;
LAB_00117f04:
    if (uVar5 < 0xfffffffffffff001) {
      if (uVar5 == 0) {
        uVar5 = get_ext_channels(*param_2,&bat_cp_ext_iio_chan,4);
        if (0xfffffffffffff000 < uVar5) {
          if ((int)uVar5 != -0x205) {
            _dev_err(*param_2,"Failed to get channels, %d\n");
            param_2[0x81] = 0xffffffffffffffea;
          }
          goto LAB_00117f7c;
        }
        param_2[0x81] = uVar5;
        lVar6 = param_2[0x55];
      }
      else {
        lVar6 = param_2[0x55];
      }
      if (lVar6 == 0) {
        uVar3 = power_supply_get_by_name("charge_pump_master");
        param_2[0x55] = uVar3;
      }
    }
  }
  else {
    uVar5 = param_2[0x81];
    if (uVar5 == 0) goto LAB_00117f04;
LAB_00117efc:
    if (0xfffffffffffff000 < uVar5) goto LAB_00117f04;
  }
LAB_00117f7c:
  if (param_2[0x82] == 0) {
    lVar4 = iio_channel_get(*param_2,"current_capability");
    lVar6 = 0;
    if (lVar4 != -0x205) {
      lVar6 = lVar4;
    }
    param_2[0x82] = lVar6;
    lVar6 = param_2[0xf];
  }
  else {
    lVar6 = param_2[0xf];
  }
  if (lVar6 == 0) {
    uVar3 = find_votable("CP_SLAVE_DISABLE");
    param_2[0xf] = uVar3;
  }
  iVar1 = param_3 - *(int *)(param_2[0x75] + 0x1c);
  if ((debug_mask & 1) != 0) {
    _printk("<6>QCOM-BATT: %s: cp_fcc_ua=%d total_fcc_ua=%d forced_main_fcc=%d\n","pl_fcc_vote_callback",iVar1,param_3);
  }
  if (0 < iVar1) {
    uVar5 = param_2[0x81];
    if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) ||
       (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0x10),&local_44), -1 < iVar2)) {
      uVar5 = param_2[0x82];
    }
    else {
      _printk("<3>QCOM-BATT: %s: Couldn't get MIN ICL threshold rc=%d\n","pl_fcc_vote_callback",iVar2);
      uVar5 = param_2[0x82];
    }
    if (((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) && (param_2[0xf] != 0)) {
      vote(param_2[0xf],"FCC_VOTER",iVar1 < local_44 * 3,0);
    }
    if (param_2[0xd] != 0) {
      vote(param_2[0xd],"FCC_VOTER",iVar1 < local_44 * 2,0);
    }
  }
  if (*(int *)(param_2 + 1) != 0) {
    get_fcc_split(param_2,param_3,auStack_3c,&local_40);
    vote(param_2[7],"PL_FCC_LOW_VOTER",local_40 < 0x7a121,0);
  }
  rerun_election(param_2[7]);
  if ((param_2[0x81] != 0) && ((ulong)param_2[0x81] < 0xfffffffffffff001)) {
    power_supply_changed(param_2[0x55]);
  }
LAB_0011808c:
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- pl_fv_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118148 ---- */

int pl_fv_vote_callback_5ed5160633f7e8983a0264f74c1175a7
              (undefined8 param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *in_x18;
  code *pcVar6;
  undefined8 unaff_x30;
  undefined8 local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x5e0);
  local_50 = 0;
  if ((int)param_3 < 0) {
    iVar1 = 0;
    goto LAB_00118180;
  }
  iVar2 = param_3 + (fv_ageing + *(int *)((long)param_2 + 0x3d4)) * -1000;
  _printk("<3>QCOM-BATT: %s: %s, fv_uv = %d, smart_batt = %d, fv_ageing = %d, val = %d\n","pl_fv_vote_callback","pl_fv_vote_callback",param_3,
          *(int *)((long)param_2 + 0x3d4),fv_ageing,iVar2);
  pcVar6 = *(code **)(param_2[0x75] + 0x28);
  if (pcVar6 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar6,&DAT_00102c00);
  }
  iVar1 = (*pcVar6)(*param_2,0x2d,iVar2);
  if (iVar1 < 0) {
    puVar4 = "<3>QCOM-BATT: %s: Couldn't set main fv, rc=%d\n";
LAB_001182e4:
    _printk(puVar4,"pl_fv_vote_callback",iVar1);
    goto LAB_00118180;
  }
  if (*(int *)(param_2 + 1) != 0) {
    uVar5 = param_2[0x83];
    iVar1 = -0x13;
    if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) ||
       (iVar1 = iio_write_channel_raw(*(undefined8 *)(uVar5 + 0x38),iVar2 + 50000), iVar1 < 0)) {
      puVar4 = "<3>QCOM-BATT: %s: Couldn't set float on parallel rc=%d\n";
      goto LAB_001182e4;
    }
  }
  if (*(uint *)(param_2 + 0x80) < param_3) {
    lVar3 = param_2[0x52];
    if (lVar3 == 0) {
      lVar3 = power_supply_get_by_name("battery");
      param_2[0x52] = lVar3;
      if (lVar3 == 0) goto LAB_001182bc;
    }
    iVar2 = power_supply_get_property(lVar3,0,&local_50);
    if (iVar2 < 0) {
      puVar4 = "<3>QCOM-BATT: %s: Couldn't get battery status rc=%d\n";
LAB_00118314:
      _printk(puVar4,"pl_fv_vote_callback",iVar2);
    }
    else if ((int)local_50 == 4) {
      pcVar6 = *(code **)(param_2[0x75] + 0x28);
      if (pcVar6 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
        __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar6,&DAT_00102c20);
      }
      iVar2 = (*pcVar6)(*param_2,0x40,1);
      if (iVar2 < 0) {
        puVar4 = "<3>QCOM-BATT: %s: Couldn't set force recharge rc=%d\n";
        goto LAB_00118314;
      }
    }
  }
LAB_001182bc:
  iVar1 = 0;
  *(uint *)(param_2 + 0x80) = param_3;
LAB_00118180:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* ---- usb_icl_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118370 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int usb_icl_vote_callback_5ed5160633f7e8983a0264f74c1175a7
              (undefined8 param_1,undefined8 *param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *in_x18;
  code *pcVar6;
  undefined8 unaff_x30;
  undefined8 local_48;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  iVar1 = 0x7fffffff;
  if (param_4 != 0) {
    iVar1 = param_3;
  }
  local_3c = 0;
  local_48 = 0;
  vote(param_2[7],"ICL_CHANGE_VOTER",1,0);
  if (iVar1 < 0x155cc1) {
    vote(param_2[0xb],"USBIN_I_VOTER",0,0);
  }
  else {
    queue_delayed_work_on(0x20,_system_wq,param_2 + 0x11,0x2ee);
  }
  pcVar6 = *(code **)(param_2[0x75] + 0x20);
  if (pcVar6 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar6,&DAT_00102c40);
  }
  iVar3 = (*pcVar6)(*param_2,0x21,&local_3c);
  if (iVar3 < 0) {
    puVar5 = "<3>QCOM-BATT: %s: Couldn't get aicl settled value rc=%d\n";
LAB_00118588:
    _printk(puVar5,"usb_icl_vote_callback",iVar3);
    goto LAB_0011851c;
  }
  if ((local_3c < iVar1) && ((*(byte *)(param_2 + 0x5d) & 1) != 0)) {
    local_3c = local_3c + -25000;
    pcVar6 = *(code **)(param_2[0x75] + 0x28);
    if (local_3c < 0x61a9) {
      local_3c = 25000;
    }
    if (pcVar6 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar6,&DAT_00102c60);
    }
    iVar3 = (*pcVar6)(*param_2,0x2f,local_3c);
    if (iVar3 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't set main current_max, rc=%d\n","usb_icl_vote_callback",iVar3);
    }
  }
  pcVar6 = *(code **)(param_2[0x75] + 0x28);
  local_3c = iVar1;
  if (pcVar6 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar6,&DAT_00102c80);
  }
  iVar3 = (*pcVar6)(*param_2,0x2f,local_3c);
  if (iVar3 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't set main current_max, rc=%d\n","usb_icl_vote_callback",iVar3);
  }
  vote(param_2[7],"ICL_CHANGE_VOTER",0,0);
  iVar4 = cp_get_parallel_mode(param_2,0);
  iVar3 = 0;
  if (iVar4 != 3) goto LAB_0011851c;
  if (param_2[0x54] == 0) {
LAB_00118504:
    cp_configure_ilim(param_2,"ICL_CHANGE_VOTER",iVar1);
  }
  else {
    iVar3 = power_supply_get_property(param_2[0x54],3,&local_48);
    if (iVar3 < 0) {
      puVar5 = "<3>QCOM-BATT: %s: Couldn't get DC PRESENT rc=%d\n";
      goto LAB_00118588;
    }
    if ((int)local_48 == 0) goto LAB_00118504;
  }
  iVar3 = 0;
LAB_0011851c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- pl_disable_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118630 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pl_disable_vote_callback_5ed5160633f7e8983a0264f74c1175a7
              (undefined8 param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *in_x18;
  code *pcVar11;
  int iVar12;
  undefined8 unaff_x30;
  undefined8 local_68;
  ulong local_60;
  undefined1 auStack_54 [4];
  int local_50;
  int local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_48 = *(long *)(lVar5 + 0x5e0);
  local_68 = 0;
  local_60 = 0;
  if (param_2[0x52] == 0) {
    lVar5 = power_supply_get_by_name("battery");
    param_2[0x52] = lVar5;
    if (lVar5 != 0) goto LAB_00118684;
LAB_001187dc:
    iVar3 = -0x13;
    goto LAB_00118938;
  }
LAB_00118684:
  if (param_2[0x53] == 0) {
    lVar5 = power_supply_get_by_name("usb");
    param_2[0x53] = lVar5;
    if (lVar5 == 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't get usb psy\n","pl_disable_vote_callback");
      goto LAB_001187dc;
    }
  }
  pcVar11 = *(code **)(param_2[0x75] + 0x20);
  if (pcVar11 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar11,&DAT_00102ca0);
  }
  iVar3 = (*pcVar11)(*param_2,0x41,&local_60);
  if (iVar3 < 0) {
    puVar6 = "<3>QCOM-BATT: %s: Couldn't read FCC step update status, rc=%d\n";
LAB_00118a18:
    pcVar7 = "pl_disable_vote_callback";
LAB_00118a20:
    _printk(puVar6,pcVar7,iVar3);
    goto LAB_00118938;
  }
  *(int *)(param_2 + 0x58) = (int)local_60;
  pcVar11 = *(code **)(param_2[0x75] + 0x20);
  if (pcVar11 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar11,&DAT_00102cc0);
  }
  iVar3 = (*pcVar11)(*param_2,0x27,&local_60);
  if (iVar3 < 0) {
    if ((debug_mask & 1) == 0) goto LAB_00118720;
    _printk("<6>QCOM-BATT: %s: Couldn't read primary charger FCC upper limit, rc=%d\n","pl_disable_vote_callback",iVar3);
    iVar3 = *(int *)(param_2 + 0x58);
  }
  else if ((int)local_60 < 1) {
LAB_00118720:
    iVar3 = *(int *)(param_2 + 0x58);
  }
  else {
    *(int *)(param_2 + 0x77) = (int)local_60;
    iVar3 = *(int *)(param_2 + 0x58);
  }
  if (iVar3 != 0) {
    cancel_delayed_work_sync(param_2 + 0x2e);
    vote(param_2[8],"FCC_STEPPER_VOTER",0,0);
  }
  iVar4 = get_effective_result_locked(param_2[5]);
  if ((param_3 == 0) && (*(int *)(param_2 + 1) != 0)) {
    local_50 = 0;
    if ((1 < *(int *)(param_2 + 1) - 1U) ||
       (iVar3 = get_effective_result_locked(param_2[7]), iVar3 != 0)) {
LAB_001187a4:
      uVar8 = param_2[0x83];
      if (((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) ||
         (iVar3 = iio_read_channel_processed(*(undefined8 *)(uVar8 + 0x40),&local_60),
         iVar3 == -0x13)) {
        queue_work_on(0x20,_system_wq,param_2 + 0x22);
        goto LAB_001187dc;
      }
      rerun_election(param_2[6]);
      get_fcc_split(param_2,iVar4,(long)&local_68 + 4,&local_68);
      uVar8 = local_68;
      iVar2 = (int)local_68;
      iVar12 = local_68._4_4_;
      if (*(int *)(param_2 + 0x58) == 0) {
        if (*(int *)(param_2 + 3) < (int)local_68) {
          vote(param_2[0xe],"MAIN_FCC_VOTER",1,local_68._4_4_);
          uVar9 = param_2[0x83];
          iVar3 = -0x13;
          local_60 = CONCAT44(local_60._4_4_,iVar2);
          if (((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) &&
             (iVar3 = iio_write_channel_raw(*(undefined8 *)(uVar9 + 0x30),uVar8 & 0xffffffff),
             -1 < iVar3)) {
            *(int *)(param_2 + 3) = iVar2;
            goto LAB_00118bdc;
          }
        }
        else {
          uVar9 = param_2[0x83];
          iVar3 = -0x13;
          local_60 = CONCAT44(local_60._4_4_,(int)local_68);
          if (((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) &&
             (iVar3 = iio_write_channel_raw(*(undefined8 *)(uVar9 + 0x30),local_68 & 0xffffffff),
             -1 < iVar3)) {
            iVar12 = local_68._4_4_;
            *(int *)(param_2 + 3) = iVar2;
            vote(param_2[0xe],"MAIN_FCC_VOTER",1,local_68._4_4_);
LAB_00118bdc:
            puVar10 = (undefined8 *)param_2[0x83];
            iVar3 = -0x13;
            local_60 = local_60 & 0xffffffff00000000;
            if (((puVar10 == (undefined8 *)0x0) || ((undefined8 *)0xfffffffffffff000 < puVar10)) ||
               (iVar3 = iio_write_channel_raw(*puVar10,0,0xffffffed), iVar3 < 0)) {
              _printk("<3>QCOM-BATT: %s: Couldn't change slave suspend state rc=%d\n","pl_disable_vote_callback",iVar3);
            }
            if (*(int *)(param_2 + 1) - 1U < 2) {
              split_settled(param_2);
            }
            goto LAB_00118c1c;
          }
        }
        puVar6 = "<3>QCOM-BATT: %s: Couldn't set parallel fcc, rc=%d\n";
        goto LAB_00118a18;
      }
      get_fcc_stepper_params(param_2,local_68._4_4_,local_68 & 0xffffffff);
      if (*(int *)((long)param_2 + 0x2dc) != 0) {
        vote(param_2[8],"FCC_STEPPER_VOTER",1,0);
        queue_delayed_work_on(0x20,_system_wq,param_2 + 0x2e,0);
      }
LAB_00118c1c:
      iVar3 = power_supply_get_property(param_2[0x52],1,&local_60);
      if (iVar3 < 0) {
        _printk("<3>QCOM-BATT: %s: Couldn't get batt charge type rc=%d\n","pl_disable_vote_callback",iVar3);
      }
      else if (((int)local_60 == 5) && (*(char *)(param_2 + 0x50) == '\0')) {
        if ((debug_mask & 1) != 0) {
          _printk("<6>QCOM-BATT: %s: pl enabled in Taper scheduing work\n","pl_disable_vote_callback");
        }
        vote(param_2[8],"TAPER_END_VOTER",1,0);
        queue_work_on(0x20,_system_long_wq,param_2 + 0x28);
      }
      if ((debug_mask & 1) != 0) {
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = (iVar12 * 100) / iVar4;
        }
        iVar1 = 0;
        if (iVar4 != 0) {
          iVar1 = (iVar2 * 100) / iVar4;
        }
        _printk("<6>QCOM-BATT: %s: master_fcc=%d slave_fcc=%d distribution=(%d/%d)\n","pl_disable_vote_callback",iVar12,uVar8 & 0xffffffff,iVar3,iVar1);
      }
      goto LAB_001188f0;
    }
    iVar3 = get_settled_split(param_2,&local_4c,&local_50,auStack_54);
    if (iVar3 < 0) {
      puVar6 = "<3>QCOM-BATT: %s: Couldn't  get split current rc=%d\n";
      pcVar7 = "validate_parallel_icl";
      goto LAB_00118a20;
    }
    if (*(int *)(param_2 + 2) <= local_50) goto LAB_001187a4;
    _printk("<6>QCOM-BATT: %s: Parallel ICL is less than min ICL(%d), skipping parallel enable\n","pl_disable_vote_callback");
  }
  else {
    if (*(int *)(param_2 + 0x77) != 0) {
      uVar8 = param_2[0x81];
      local_4c = 0;
      if (uVar8 < 0xfffffffffffff001) {
        if (uVar8 == 0) {
          uVar8 = get_ext_channels(*param_2,&bat_cp_ext_iio_chan,4);
          if (0xfffffffffffff000 < uVar8) {
            if ((int)uVar8 != -0x205) {
              _dev_err(*param_2,"Failed to get channels, %d\n");
              param_2[0x81] = 0xffffffffffffffea;
            }
            goto LAB_001187fc;
          }
          param_2[0x81] = uVar8;
          lVar5 = param_2[0x55];
        }
        else {
          lVar5 = param_2[0x55];
        }
        if (lVar5 == 0) {
          lVar5 = power_supply_get_by_name("charge_pump_master");
          param_2[0x55] = lVar5;
          if (lVar5 == 0) goto LAB_001187fc;
          uVar8 = param_2[0x81];
        }
        iVar3 = -0x13;
        if (((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) ||
           (iVar3 = iio_read_channel_processed(0xffffffed,*(undefined8 *)(uVar8 + 0x18),&local_4c),
           iVar3 < 0)) {
          _printk("<3>QCOM-BATT: %s: Couldn't get switcher enable status, rc=%d\n","get_main_fcc_config",iVar3);
        }
        else {
          if (local_4c != 0) {
            *(undefined1 *)((long)param_2 + 0x3b1) = 0;
            if ((debug_mask & 1) != 0) {
              _printk("<6>QCOM-BATT: %s: CP Switcher is enabled, don't limit main fcc\n","get_main_fcc_config");
            }
            goto LAB_00118808;
          }
          if ((*(char *)((long)param_2 + 0x3b1) == '\0') &&
             (*(undefined4 *)(param_2 + 0x58) = 0, (debug_mask & 1) != 0)) {
            _printk("<6>QCOM-BATT: %s: Disabling FCC slewing on CP Switcher disable\n","get_main_fcc_config");
          }
          *(undefined1 *)((long)param_2 + 0x3b1) = 1;
        }
      }
LAB_001187fc:
      if (*(int *)(param_2 + 0x77) <= iVar4) {
        iVar4 = *(int *)(param_2 + 0x77);
      }
    }
LAB_00118808:
    if (*(int *)(param_2 + 0x58) == 0) {
      if (*(int *)(param_2 + 1) - 1U < 2) {
        split_settled(param_2);
      }
      puVar10 = (undefined8 *)param_2[0x83];
      if ((puVar10 != (undefined8 *)0x0) && (puVar10 < (undefined8 *)0xfffffffffffff001)) {
        local_60 = CONCAT44(local_60._4_4_,1);
        iVar3 = iio_write_channel_raw(*puVar10,1);
        if (iVar3 < 0) {
          _printk("<3>QCOM-BATT: %s: Couldn't change slave suspend state rc=%d\n","pl_disable_vote_callback",iVar3);
        }
      }
      vote(param_2[0xe],"MAIN_FCC_VOTER",1,iVar4);
      iVar3 = get_effective_result_locked(param_2[0xe]);
      if (0 < iVar4 - iVar3) {
        cp_configure_ilim(param_2,"FCC_VOTER",(uint)(iVar4 - iVar3) >> 1);
      }
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined8 *)((long)param_2 + 0x2b4) = 0;
    }
    else {
      get_fcc_stepper_params(param_2,iVar4,0);
      if (*(int *)((long)param_2 + 0x2dc) != 0) {
        vote(param_2[8],"FCC_STEPPER_VOTER",1,0);
        queue_delayed_work_on(0x20,_system_wq,param_2 + 0x2e,0);
      }
    }
    rerun_election(param_2[6]);
LAB_001188f0:
    if ((((param_2[0x83] != 0) && ((ulong)param_2[0x83] < 0xfffffffffffff001)) &&
        (*(byte *)(param_2 + 0x76) != param_3)) && (*(int *)(param_2 + 0x58) == 0)) {
      power_supply_changed(param_2[0x51]);
      *(bool *)(param_2 + 0x76) = param_3 != 0;
    }
    if ((debug_mask & 1) != 0) {
      pcVar7 = "disabled";
      if (param_3 == 0) {
        pcVar7 = "enabled";
      }
      _printk("<6>QCOM-BATT: %s: parallel charging %s\n","pl_disable_vote_callback",pcVar7);
    }
  }
  iVar3 = 0;
LAB_00118938:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- pl_awake_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118e0c ---- */

undefined8
pl_awake_vote_callback_5ed5160633f7e8983a0264f74c1175a7(undefined8 param_1,long param_2,int param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_3 == 0) {
    __pm_relax(*(undefined8 *)(param_2 + 0x388));
  }
  else {
    __pm_stay_awake();
  }
  return 0;
}



/* ---- pl_enable_indirect_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118e44 ---- */

undefined8
pl_enable_indirect_vote_callback_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,long param_2,int param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  vote(*(undefined8 *)(param_2 + 0x38),"PL_INDIRECT_VOTER",param_3 == 0,0);
  return 0;
}



/* ---- quick_charge_type_changed_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118e84 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
quick_charge_type_changed_vote_callback_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,long param_2,int param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_3 == 0) {
    cancel_delayed_work_sync(param_2 + 0x1f8);
  }
  else {
    *(undefined4 *)(param_2 + 0x438) = 0xf;
    cancel_delayed_work_sync(param_2 + 0x1f8);
    queue_delayed_work_on(0x20,_system_wq,param_2 + 0x1f8,0x19);
  }
  return 0;
}



/* ---- low_fast_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118eec ---- */

undefined8
low_fast_vote_callback_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined4 *)(param_2 + 0x3dc) = param_3;
  _printk("<3>QCOM-BATT: %s: %s client: %s low_fast_working_flag: %d\n","low_fast_vote_callback","low_fast_vote_callback",param_4,param_3);
  return 0;
}



/* ---- night_charging_vote_callback.5ed5160633f7e8983a0264f74c1175a7 @ 00118f30 ---- */

undefined8
night_charging_vote_callback_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined4 *)(param_2 + 1000) = param_3;
  _printk("<3>QCOM-BATT: %s: %s client: %s night_charging_working_flag: %d\n","night_charging_vote_callback","night_charging_vote_callback",param_4,
          param_3);
  return 0;
}



/* ---- pl_register_notifier @ 00118f74 ---- */

int pl_register_notifier(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(code **)(param_1 + 0x390) = pl_notifier_call_5ed5160633f7e8983a0264f74c1175a7_cfi_jt;
  iVar1 = power_supply_reg_notifier(param_1 + 0x390);
  if (iVar1 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't register psy notifier rc = %d\n","pl_register_notifier",iVar1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ---- shipmode_register_notifier @ 00118fe0 ---- */

int shipmode_register_notifier(void)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  DAT_00100130 = 0xff;
  reboot_notifier = reboot_ship_mode_5ed5160633f7e8983a0264f74c1175a7_cfi_jt;
  iVar1 = register_reboot_notifier();
  if (iVar1 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't register reboot notifier rc = %d\n","shipmode_register_notifier",iVar1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ---- third_cp_iio_init @ 00119054 ---- */

void third_cp_iio_init(undefined8 *param_1)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>QCOM-BATT: %s: third_cp_iio_init start\n","third_cp_iio_init");
  lVar1 = devm_kmalloc(*param_1,0x28,0xdc0);
  param_1[0x86] = lVar1;
  if (lVar1 != 0) {
    _printk("<3>QCOM-BATT: %s: third_cp_iio_init end\n","third_cp_iio_init");
  }
  return;
}



/* ---- qcom_batt_deinit @ 001190c4 ---- */

void qcom_batt_deinit(void)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = the_chip;
  if (the_chip != 0) {
    cancel_delayed_work_sync(the_chip + 0x88);
    cancel_work_sync(lVar1 + 0x140);
    cancel_work_sync(lVar1 + 0x110);
    cancel_delayed_work_sync(lVar1 + 0x170);
    power_supply_unreg_notifier(lVar1 + 0x390);
    destroy_votable(*(undefined8 *)(lVar1 + 0x58));
    destroy_votable(*(undefined8 *)(lVar1 + 0x40));
    destroy_votable(*(undefined8 *)(lVar1 + 0x38));
    destroy_votable(*(undefined8 *)(lVar1 + 0x30));
    destroy_votable(*(undefined8 *)(lVar1 + 0x28));
    destroy_votable(*(undefined8 *)(lVar1 + 0x70));
    destroy_votable(*(undefined8 *)(lVar1 + 0x80));
    wakeup_source_unregister(*(undefined8 *)(lVar1 + 0x388));
    the_chip = 0;
    kfree(lVar1);
  }
  return;
}



/* ---- split_settled @ 0011916c ---- */

void split_settled(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  iVar3 = get_settled_split(param_1,&local_2c,&local_30,&local_34);
  iVar2 = local_30;
  if (iVar3 < 0) {
    puVar4 = "<3>QCOM-BATT: %s: Couldn't  get split current rc=%d\n";
  }
  else {
    if (*(int *)(param_1 + 0x57) < local_30) {
      pcVar5 = *(code **)(param_1[0x75] + 0x28);
      if (pcVar5 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
        __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar5,&DAT_00102b20);
      }
      iVar3 = (*pcVar5)(*param_1,0x2f,local_2c);
      if (iVar3 < 0) goto LAB_00119284;
      uVar6 = param_1[0x83];
      iVar3 = -0x13;
      if (((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) &&
         (iVar3 = iio_write_channel_raw(*(undefined8 *)(uVar6 + 0x28),iVar2,0xffffffed), -1 < iVar3)
         ) goto LAB_00119264;
    }
    else {
      uVar6 = param_1[0x83];
      iVar3 = -0x13;
      if (((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) &&
         (iVar3 = iio_write_channel_raw(*(undefined8 *)(uVar6 + 0x28),local_30,0xffffffed),
         -1 < iVar3)) {
        pcVar5 = *(code **)(param_1[0x75] + 0x28);
        if (pcVar5 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
          __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar5,&DAT_00102b40);
        }
        iVar3 = (*pcVar5)(*param_1,0x2f,local_2c);
        if (-1 < iVar3) {
LAB_00119264:
          *(int *)(param_1 + 0x57) = iVar2;
          *(undefined4 *)((long)param_1 + 0x2b4) = local_34;
          goto LAB_001192ac;
        }
LAB_00119284:
        puVar4 = "<3>QCOM-BATT: %s: Couldn't change slave suspend state rc=%d\n";
        goto LAB_001192a0;
      }
    }
    puVar4 = "<3>QCOM-BATT: %s: Couldn't set parallel icl, rc=%d\n";
  }
LAB_001192a0:
  _printk(puVar4,"split_settled",iVar3);
LAB_001192ac:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- get_settled_split @ 00119334 ---- */

int get_settled_split(undefined8 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *in_x18;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined8 unaff_x30;
  uint local_5c;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_58 = *(long *)(lVar3 + 0x5e0);
  local_5c = 0;
  if (1 < *(int *)(param_1 + 1) - 1U) {
    iVar1 = -0x16;
    goto LAB_00119484;
  }
  iVar1 = get_effective_result_locked(param_1[7]);
  if (iVar1 == 0) {
    pcVar8 = *(code **)(param_1[0x75] + 0x20);
    if (pcVar8 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar8,&DAT_00102ae0);
    }
    iVar1 = (*pcVar8)(*param_1,0x21,&local_5c);
    if (-1 < iVar1) {
      iVar6 = *(int *)(param_1 + 0x57) + local_5c;
      iVar7 = (int)(iVar6 * (*(uint *)((long)param_1 + 0x14) &
                            ((int)*(uint *)((long)param_1 + 0x14) >> 0x1f ^ 0xffffffffU))) / 100;
      uVar5 = local_5c;
      goto LAB_00119408;
    }
    puVar4 = "<3>QCOM-BATT: %s: Couldn't get aicl settled value rc=%d\n";
LAB_00119500:
    _printk(puVar4,"get_settled_split",iVar1);
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
    uVar5 = 0;
LAB_00119408:
    uVar2 = get_effective_result_locked(param_1[10]);
    if ((int)uVar2 < 0) {
      if (param_1[0x53] == 0) {
        lVar3 = power_supply_get_by_name("usb");
        param_1[0x53] = lVar3;
        if (lVar3 == 0) {
          _printk("<3>QCOM-BATT: %s: Couldn't get usbpsy while splitting settled\n","get_settled_split");
          iVar1 = -2;
          goto LAB_00119484;
        }
      }
      pcVar8 = *(code **)(param_1[0x75] + 0x20);
      if (pcVar8 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
        __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar8,&DAT_00102b00);
      }
      iVar1 = (*pcVar8)(*param_1,9,&local_5c);
      if (iVar1 < 0) {
        puVar4 = "<3>QCOM-BATT: %s: Couldn't get max current rc=%d\n";
        goto LAB_00119500;
      }
      uVar2 = local_5c;
    }
    *param_2 = uVar2 - iVar7;
    *param_3 = iVar7;
    *param_4 = iVar6;
    if ((debug_mask & 1) != 0) {
      _printk("<6>QCOM-BATT: %s: Split total_current_ua=%d total_settled_ua=%d main_settled_ua=%d slave_ua=%d\n","get_settled_split",uVar2,iVar6,uVar5,iVar7);
    }
    iVar1 = 0;
  }
LAB_00119484:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* ---- get_fcc_split @ 0011957c ---- */

void get_fcc_split(undefined8 *param_1,uint param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *in_x18;
  long lVar8;
  undefined8 unaff_x30;
  int local_5c;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar8 = sp_el0;
  local_58 = *(long *)(lVar8 + 0x5e0);
  local_5c = 0;
  pcVar6 = *(code **)(param_1[0x75] + 0x20);
  if (pcVar6 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar6,&DAT_00102b60);
  }
  iVar2 = (*pcVar6)(*param_1,0x23,&local_5c);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't get fcc_delta rc=%d\n","get_fcc_split",iVar2);
    iVar2 = 0;
  }
  else {
    iVar2 = local_5c;
  }
  if (*(int *)(param_1 + 1) == 3) {
    pcVar6 = *(code **)(param_1[0x75] + 0x20);
    if (pcVar6 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar6,&DAT_00102b80);
    }
    iVar3 = (*pcVar6)(*param_1,0x21,&local_5c);
    if (iVar3 < 0) {
      puVar4 = "<3>QCOM-BATT: %s: Couldn't get aicl settled value rc=%d\n";
    }
    else {
      lVar8 = (long)local_5c;
      pcVar6 = *(code **)(param_1[0x75] + 0x20);
      if (pcVar6 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
        __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar6,&DAT_00102ba0);
      }
      iVar3 = (*pcVar6)(*param_1,0x22,&local_5c);
      if (-1 < iVar3) {
        lVar7 = (long)local_5c;
        iVar3 = get_effective_result(param_1[6]);
        uVar5 = 0;
        if ((long)iVar3 * 100 != 0) {
          uVar5 = (uint)((lVar8 * lVar7 * 0x50) / ((long)iVar3 * 100));
        }
        goto LAB_00119674;
      }
      puVar4 = "<3>QCOM-BATT: %s: Couldn't get adaptive voltage rc=%d\n";
    }
    _printk(puVar4,"get_fcc_split",iVar3);
  }
  else {
    uVar5 = 0x7fffffff;
LAB_00119674:
    uVar1 = iVar2 + param_2 & ((int)(iVar2 + param_2) >> 0x1f ^ 0xffffffffU);
    if ((int)uVar5 <= (int)uVar1) {
      uVar1 = uVar5;
    }
    iVar2 = (int)(uVar1 * *(int *)((long)param_1 + 0x14)) / 100;
    *param_4 = iVar2;
    if (*(int *)((long)param_1 + 700) <= iVar2) {
      iVar2 = *(int *)((long)param_1 + 700);
    }
    *param_4 = iVar2;
    if (*(int *)((long)param_1 + 0xc) == 0) {
      param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
      *param_3 = param_2;
      if (*(int *)(param_1 + 0x77) == 0) goto LAB_001196fc;
      uVar5 = *param_4 + *(int *)(param_1 + 0x77);
    }
    else {
      param_2 = param_2 - iVar2 & ((int)(param_2 - iVar2) >> 0x1f ^ 0xffffffffU);
      *param_3 = param_2;
      uVar5 = *(uint *)(param_1 + 0x77);
      if (uVar5 == 0) goto LAB_001196fc;
    }
    if ((int)uVar5 <= (int)param_2) {
      param_2 = uVar5;
    }
    *param_3 = param_2;
  }
LAB_001196fc:
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cp_configure_ilim @ 00119808 ---- */

void cp_configure_ilim(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  local_3c = 0;
  if (param_1[0x53] == 0) {
    lVar4 = power_supply_get_by_name("usb");
    param_1[0x53] = lVar4;
    if (lVar4 == 0) goto LAB_001199b0;
  }
  if ((ulong)param_1[0x81] < 0xfffffffffffff001) {
    if (param_1[0x81] == 0) {
      uVar5 = get_ext_channels(*param_1,&bat_cp_ext_iio_chan,4);
      if (0xfffffffffffff000 < uVar5) {
        if ((int)uVar5 != -0x205) {
          _dev_err(*param_1,"Failed to get channels, %d\n");
          param_1[0x81] = 0xffffffffffffffea;
        }
        goto LAB_001199b0;
      }
      param_1[0x81] = uVar5;
      lVar4 = param_1[0x55];
    }
    else {
      lVar4 = param_1[0x55];
    }
    if (lVar4 == 0) {
      lVar4 = power_supply_get_by_name("charge_pump_master");
      param_1[0x55] = lVar4;
      if (lVar4 == 0) goto LAB_001199b0;
    }
    iVar1 = cp_get_parallel_mode(param_1,1);
    if (iVar1 != 1) {
      iVar2 = get_adapter_icl_based_ilim(param_1);
      uVar5 = param_1[0x81];
      iVar1 = param_3;
      if (iVar2 <= param_3) {
        iVar1 = iVar2;
      }
      if (iVar2 < 1) {
        iVar1 = param_3;
      }
      iVar2 = -0x13;
      if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) ||
         (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0x10),&local_3c,0xffffffed),
         iVar2 < 0)) {
        _printk("<3>QCOM-BATT: %s: Failed to read min_icl rc=%d\n","cp_configure_ilim",iVar2);
      }
      else {
        if (param_1[0xc] == 0) {
          lVar4 = find_votable("CP_ILIM");
          param_1[0xc] = lVar4;
          if (lVar4 == 0) goto LAB_001199b0;
        }
        iVar3 = get_effective_result_locked(param_1[5]);
        iVar2 = local_3c;
        if (local_3c <= iVar1 || iVar3 < local_3c * 2) {
          iVar2 = iVar1;
        }
        vote(param_1[0xc],param_2,1,iVar2);
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = find_votable("FCC_MAIN");
          param_1[0xe] = lVar4;
        }
        if ((*(int *)((long)param_1 + 0x3bc) == 0xe) && (lVar4 != 0)) {
          rerun_election();
        }
        if ((debug_mask & 1) != 0) {
          _printk("<6>QCOM-BATT: %s: ILIM: vote: %d voter:%s min_ilim=%d fcc = %d\n","cp_configure_ilim",iVar1,param_2,local_3c,iVar3);
        }
      }
    }
  }
LAB_001199b0:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cp_get_parallel_mode @ 00119a28 ---- */

void cp_get_parallel_mode(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  local_2c = 0xffffffea;
  uVar2 = 0xffffffea;
  if (0xfffffffffffff000 < (ulong)param_1[0x81]) goto LAB_00119b18;
  if (param_1[0x81] == 0) {
    uVar6 = get_ext_channels(*param_1,&bat_cp_ext_iio_chan,4);
    if (uVar6 < 0xfffffffffffff001) {
      param_1[0x81] = uVar6;
      lVar4 = param_1[0x55];
      goto joined_r0x00119ac4;
    }
    if ((int)uVar6 != -0x205) {
      _dev_err(*param_1,"Failed to get channels, %d\n");
      uVar2 = 0xffffffea;
      param_1[0x81] = 0xffffffffffffffea;
      goto LAB_00119b18;
    }
LAB_00119ab4:
    uVar2 = 0xffffffea;
    goto LAB_00119b18;
  }
  lVar4 = param_1[0x55];
joined_r0x00119ac4:
  if (lVar4 == 0) {
    lVar4 = power_supply_get_by_name("charge_pump_master");
    param_1[0x55] = lVar4;
    if (lVar4 == 0) goto LAB_00119ab4;
  }
  if (param_2 == 1) {
    uVar6 = param_1[0x81];
    iVar1 = -0x13;
    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) goto LAB_00119b68;
    uVar3 = *(undefined8 *)(uVar6 + 8);
LAB_00119b08:
    iVar1 = iio_read_channel_processed(uVar3,&local_2c);
    if (iVar1 < 0) goto LAB_00119b68;
  }
  else {
    if (param_2 == 0) {
      puVar5 = (undefined8 *)param_1[0x81];
      iVar1 = -0x13;
      if ((puVar5 != (undefined8 *)0x0) && (puVar5 < (undefined8 *)0xfffffffffffff001)) {
        uVar3 = *puVar5;
        goto LAB_00119b08;
      }
    }
    else {
      _printk("<3>QCOM-BATT: %s: Invalid mode request %d\n","cp_get_parallel_mode",param_2);
      iVar1 = -0x16;
    }
LAB_00119b68:
    _printk("<3>QCOM-BATT: %s: Failed to read CP topology for mode=%d rc=%d\n","cp_get_parallel_mode",param_2,iVar1);
  }
  uVar2 = local_2c;
LAB_00119b18:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- get_adapter_icl_based_ilim @ 00119ba8 ---- */

int get_adapter_icl_based_ilim(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *in_x18;
  code *pcVar5;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  pcVar5 = *(code **)(param_1[0x75] + 0x20);
  if (pcVar5 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar5,&DAT_00102bc0);
  }
  iVar2 = (*pcVar5)(*param_1,4,&local_2c);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Failed to read PD_ACTIVE status rc=%d\n","get_adapter_icl_based_ilim",iVar2);
  }
  if (((*(int *)((long)param_1 + 0x3bc) == 0xe) || (*(int *)((long)param_1 + 0x3bc) == 0xf)) ||
     (local_2c == 2)) {
    if (local_2c == 2) {
      iVar2 = *(int *)(param_1[0x75] + 0x18);
      iVar3 = get_client_vote_locked(param_1[10],"PD_VOTER");
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (iVar2 < 1) {
        iVar2 = *(int *)(param_1[0x75] + 0x18);
      }
    }
    else {
      iVar2 = *(int *)(param_1[0x75] + 0x14);
    }
    iVar3 = cp_get_parallel_mode(param_1,0);
    if (iVar3 == 1) {
      uVar4 = get_effective_result_locked(param_1[10]);
      if (iVar2 <= (int)uVar4 || 0x7fffffff < uVar4) {
        uVar4 = 0;
      }
      iVar2 = iVar2 - uVar4;
    }
  }
  else {
    iVar2 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- get_fcc_stepper_params @ 00119d14 ---- */

void get_fcc_stepper_params(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1[0x75] + 4) == 0) {
    _printk("<3>QCOM-BATT: %s: Invalid fcc stepper step size, value 0\n","get_fcc_stepper_params");
    return;
  }
  iVar1 = param_3 + param_2;
  uVar6 = is_override_vote_enabled_locked(param_1[0xe]);
  if ((uVar6 & 1) == 0) {
    iVar7 = *(int *)(param_1 + 0x5c);
    if (iVar7 == 0) {
      iVar7 = get_effective_result_locked(param_1[0xe]);
      *(int *)((long)param_1 + 0x1c) = iVar7;
    }
    else {
      *(int *)((long)param_1 + 0x1c) = iVar7;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (param_3 == 0) {
        *(undefined4 *)(param_1 + 3) = 0;
      }
    }
    uVar3 = param_2 - iVar7;
    uVar8 = 0xffffffff;
    if (uVar3 != 0 && iVar7 <= param_2) {
      uVar8 = 1;
    }
    uVar2 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(undefined4 *)((long)param_1 + 0x2c4) = uVar8;
    uVar3 = *(uint *)(param_1[0x75] + 4);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    *(uint *)(param_1 + 0x59) = uVar4;
    uVar3 = *(uint *)(param_1[0x75] + 4);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    *(uint *)((long)param_1 + 0x2cc) = uVar2 - uVar4 * uVar3;
    if (param_3 != 0) goto LAB_00119eec;
LAB_00119e18:
    if ((ulong)param_1[0x81] < 0xfffffffffffff001) {
      if (param_1[0x81] != 0) {
        lVar11 = param_1[0x55];
joined_r0x00119e90:
        if (lVar11 == 0) {
          lVar11 = power_supply_get_by_name("charge_pump_master");
          param_3 = 0;
          param_1[0x55] = lVar11;
          if ((lVar11 == 0) || (((uVar6 ^ 1) & 1) != 0)) goto LAB_00119eec;
        }
        else if ((uVar6 & 1) == 0) goto LAB_00119e78;
        if (param_1[0xc] == 0) {
          uVar9 = find_votable("CP_ILIM");
          param_1[0xc] = uVar9;
        }
        param_3 = get_adapter_icl_based_ilim(param_1);
        param_3 = param_3 * 2;
        iVar1 = iVar1 - *(int *)((long)param_1 + 0x1c);
        if (iVar1 <= param_3 || param_3 < 1) {
          param_3 = iVar1;
        }
        goto LAB_00119eec;
      }
      uVar10 = get_ext_channels(*param_1,&bat_cp_ext_iio_chan,4);
      if (uVar10 < 0xfffffffffffff001) {
        param_1[0x81] = uVar10;
        lVar11 = param_1[0x55];
        goto joined_r0x00119e90;
      }
      if ((int)uVar10 == -0x205) goto LAB_00119e78;
      _dev_err(*param_1,"Failed to get channels, %d\n");
      param_1[0x81] = 0xffffffffffffffea;
      lVar11 = param_1[0xc];
    }
    else {
LAB_00119e78:
      lVar11 = param_1[0xc];
    }
    param_3 = 0;
    if (lVar11 == 0) {
LAB_00119f2c:
      uVar3 = param_3 - *(int *)(param_1 + 3);
      uVar8 = 0xffffffff;
      if (uVar3 != 0 && *(int *)(param_1 + 3) <= param_3) {
        uVar8 = 1;
      }
      uVar2 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(undefined4 *)(param_1 + 0x5a) = uVar8;
      uVar4 = *(uint *)(param_1[0x75] + 4);
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar2 / uVar4;
      }
      *(uint *)((long)param_1 + 0x2d4) = uVar3;
      uVar4 = *(uint *)(param_1[0x75] + 4);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar2 / uVar4;
      }
      *(uint *)(param_1 + 0x5b) = uVar2 - uVar5 * uVar4;
      goto joined_r0x00119f64;
    }
LAB_00119ef4:
    uVar10 = is_override_vote_enabled();
    if ((uVar10 & 1) == 0) goto LAB_00119f2c;
    *(undefined8 *)((long)param_1 + 0x2d4) = 0;
LAB_00119f70:
    if ((*(int *)(param_1 + 0x59) == 0) && (*(int *)((long)param_1 + 0x2cc) == 0))
    goto LAB_00119f88;
  }
  else {
    iVar7 = get_effective_result_locked(param_1[0xe]);
    if ((iVar7 != *(int *)(param_1 + 0x5c)) || (iVar1 != *(int *)((long)param_1 + 0x2e4))) {
      *(int *)(param_1 + 0x5c) = iVar7;
      *(int *)((long)param_1 + 0x2e4) = iVar1;
      uVar8 = get_effective_result_locked(param_1[0xe]);
      *(undefined4 *)(param_1 + 0x59) = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
      *(undefined4 *)((long)param_1 + 0x2cc) = 0;
      if (param_3 == 0) goto LAB_00119e18;
LAB_00119eec:
      if (param_1[0xc] != 0) goto LAB_00119ef4;
      goto LAB_00119f2c;
    }
    uVar3 = *(uint *)((long)param_1 + 0x2d4);
joined_r0x00119f64:
    if ((uVar3 == 0) && (*(int *)(param_1 + 0x5b) == 0)) goto LAB_00119f70;
  }
  *(undefined4 *)((long)param_1 + 0x2dc) = 1;
LAB_00119f88:
  if ((((debug_mask & 1) != 0) &&
      (_printk("<6>QCOM-BATT: %s: Main FCC Stepper parameters: target_main_fcc: %d, current_main_fcc: %d main_step_direction: %d, main_step_count: %d, main_residual_fcc: %d override_main_fcc_ua: %d override: %d\n","get_fcc_stepper_params",param_2,*(undefined4 *)((long)param_1 + 0x1c),
               *(undefined4 *)((long)param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x59),
               *(undefined4 *)((long)param_1 + 0x2cc),*(undefined4 *)(param_1 + 0x5c),uVar6 & 1),
      (debug_mask & 1) != 0)) &&
     (_printk("<6>QCOM-BATT: %s: Parallel FCC Stepper parameters: target_pl_fcc: %d current_pl_fcc: %d parallel_step_direction: %d, parallel_step_count: %d, parallel_residual_fcc: %d\n","get_fcc_stepper_params",param_3,*(undefined4 *)(param_1 + 3),
              *(undefined4 *)(param_1 + 0x5a),*(undefined4 *)((long)param_1 + 0x2d4),
              *(undefined4 *)(param_1 + 0x5b)), (debug_mask & 1) != 0)) {
    _printk("<6>QCOM-BATT: %s: FCC Stepper parameters: step_fcc=%d\n","get_fcc_stepper_params",*(undefined4 *)((long)param_1 + 0x2dc));
  }
  return;
}



/* ---- pl_notifier_call.5ed5160633f7e8983a0264f74c1175a7 @ 0011a03c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
pl_notifier_call_5ed5160633f7e8983a0264f74c1175a7(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *in_x18;
  char *__s1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 0) {
    __s1 = *(char **)*param_3;
    iVar1 = strcmp(__s1,"parallel");
    if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"battery"), iVar1 == 0)) {
      queue_delayed_work_on(0x20,_system_wq,param_1 + -0x308,0);
    }
    if ((*(ulong *)(param_1 + 0x90) == 0) || (0xfffffffffffff000 < *(ulong *)(param_1 + 0x90))) {
      _printk("<6>QCOM-BATT: %s: get iio_chan_list_qg ...\n","iio_update");
      uVar3 = get_ext_channels(*(undefined8 *)(param_1 + -0x390),&smblib_qg_ext_iio_chan,0x18);
      if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        *(ulong *)(param_1 + 0x90) = uVar3;
      }
    }
    if ((*(ulong *)(param_1 + 0x98) == 0) || (0xfffffffffffff000 < *(ulong *)(param_1 + 0x98))) {
      _printk("<6>QCOM-BATT: %s: get iio_chan_list_auth ...\n","iio_update");
      uVar3 = get_ext_channels(*(undefined8 *)(param_1 + -0x390),&smblib_auth_ext_iio_chan,5);
      if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        *(ulong *)(param_1 + 0x98) = uVar3;
      }
    }
    if (*(long *)(param_1 + -0x100) == 0) {
      lVar2 = power_supply_get_by_name("battery");
      *(long *)(param_1 + -0x100) = lVar2;
      if (lVar2 == 0) {
        return 1;
      }
    }
    iVar1 = batt_volt_uv;
    if (batt_capacity == 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't get batt capacity rc=%d\n","pl_notifier_call",0);
      if (batt_volt_uv != 0) {
        return 1;
      }
    }
    else if (batt_volt_uv != 0) {
      if (batt_capacity != 1) {
        return 1;
      }
      lVar2 = param_1 + -0x198;
      *(undefined4 *)(param_1 + 0xa8) = 0xf;
      if (iVar1 < 0x3321d8) {
        generate_xm_charge_uvent(lVar2);
        return 1;
      }
      cancel_delayed_work_sync(lVar2);
      queue_delayed_work_on(0x20,_system_wq,lVar2,0x19);
      return 1;
    }
    _printk("<3>QCOM-BATT: %s: Couldn't get voltage prop rc=%d\n","pl_notifier_call",0);
  }
  return 1;
}



/* ---- version_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a224 ---- */

long version_show_5ed5160633f7e8983a0264f74c1175a7
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d.%d\n",1,0);
  return (long)iVar1;
}



/* ---- slave_pct_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a264 ---- */

long slave_pct_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(param_1 + -0x2dc));
  return (long)iVar1;
}



/* ---- slave_pct_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011a2a8 ---- */

long slave_pct_store_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 extraout_x1;
  bool bVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_50;
  undefined1 auStack_44 [4];
  int local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_50 = 0;
  iVar2 = kstrtoull(param_3,10,&local_50);
  if (iVar2 == 0) {
    bVar3 = false;
    local_40 = 0;
    *(int *)(param_1 + -0x2dc) = (int)local_50;
    if (*(int *)(param_1 + -0x2e8) - 1U < 2) {
      iVar2 = get_effective_result_locked(*(undefined8 *)(param_1 + -0x2b8),extraout_x1,0);
      if (iVar2 == 0) {
        iVar2 = get_settled_split(param_1 + -0x2f0,auStack_3c,&local_40,auStack_44);
        if (iVar2 < 0) {
          _printk("<3>QCOM-BATT: %s: Couldn't  get split current rc=%d\n","validate_parallel_icl",iVar2);
          param_4 = (long)iVar2;
          goto LAB_0011a398;
        }
        bVar3 = local_40 < *(int *)(param_1 + -0x2e0);
      }
      else {
        bVar3 = false;
      }
    }
    vote(*(undefined8 *)(param_1 + -0x2b8),"ICL_LIMIT_VOTER",bVar3,0);
    rerun_election(*(undefined8 *)(param_1 + -0x2c8));
    rerun_election(*(undefined8 *)(param_1 + -0x2c0));
    if (*(int *)(param_1 + -0x2e8) - 1U < 2) {
      split_settled(param_1 + -0x2f0);
    }
  }
  else {
    param_4 = -0x16;
  }
LAB_0011a398:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- restrict_chg_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a3f4 ---- */

long restrict_chg_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined1 *)(param_1 + -0x2cc));
  return (long)iVar1;
}



/* ---- restrict_chg_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011a438 ---- */

undefined8
restrict_chg_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  long local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40 = 0;
  iVar2 = kstrtoull(param_3,10,&local_40);
  if (iVar2 == 0) {
    if ((bool)*(char *)(param_1 + -0x2cc) != (local_40 != 0)) {
      *(bool *)(param_1 + -0x2cc) = local_40 != 0;
      vote(*(undefined8 *)(param_1 + -0x2b8),"RESTRICT_CHG_VOTER",local_40 != 0,0);
      vote(*(undefined8 *)(param_1 + -0x2c8),"RESTRICT_CHG_VOTER",*(undefined1 *)(param_1 + -0x2cc),
           *(undefined4 *)(param_1 + -0x2d0));
    }
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- restrict_cur_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a518 ---- */

long restrict_cur_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(param_1 + -0x2d0));
  return (long)iVar1;
}



/* ---- restrict_cur_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011a55c ---- */

undefined8
restrict_cur_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  iVar2 = kstrtoull(param_3,10,&local_30);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + -0x2d0) = (undefined4)local_30;
    vote(*(undefined8 *)(param_1 + -0x2c8),"RESTRICT_CHG_VOTER",*(undefined1 *)(param_1 + -0x2cc));
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fcc_stepping_in_progress_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a600 ---- */

long fcc_stepping_in_progress_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(param_1 + -0x14));
  return (long)iVar1;
}



/* ---- usb_real_type_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a640 ---- */

long usb_real_type_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40 = 0;
  pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar4 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar4,&DAT_00102ce0);
  }
  (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),1,&local_40);
  if ((uint)local_40 - 1 < 2) {
    iVar2 = scnprintf(param_3,0x1000,"N/A\n");
  }
  else {
    pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
    if (pcVar4 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar4,&DAT_00102d00);
    }
    (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),10,&local_40);
    *(uint *)(param_1 + 0xd0) = (uint)local_40;
    if ((uint)local_40 < 0x18) {
      pcVar3 = (&power_supply_usb_type_text)[local_40 & 0xffffffff];
    }
    else {
      pcVar3 = "Unknown";
    }
    iVar2 = scnprintf(param_3,0x1000,"%s\n",pcVar3);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- real_type_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a7b0 ---- */

long real_type_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40 = 0;
  pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar4 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar4,&DAT_00102d20);
  }
  (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),1,&local_40);
  if ((uint)local_40 - 1 < 2) {
    iVar2 = scnprintf(param_3,0x1000,"Unknown\n");
  }
  else {
    pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
    if (pcVar4 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar4,&DAT_00102d40);
    }
    (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),10,&local_40);
    *(uint *)(param_1 + 0xd0) = (uint)local_40;
    if ((uint)local_40 < 0x18) {
      pcVar3 = (&power_supply_usb_type_text)[local_40 & 0xffffffff];
    }
    else {
      pcVar3 = "Unknown";
    }
    iVar2 = scnprintf(param_3,0x1000,"%s\n",pcVar3);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- typec_mode_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011a920 ---- */

long typec_mode_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar4 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar4,&DAT_00102d60);
  }
  (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),1,&local_30);
  *(uint *)(param_1 + 0xd4) = (uint)local_30;
  if ((uint)local_30 < 10) {
    pcVar3 = (&power_supply_usbc_text)[local_30 & 0xffffffff];
  }
  else {
    pcVar3 = "Unknown";
  }
  iVar2 = scnprintf(param_3,0x1000,"%s\n",pcVar3);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- resistance_id_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011aa14 ---- */

void resistance_id_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x130);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0x40),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get batt-id rc=%d\n","resistance_id_show",iVar2);
    }
    *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_30;
    iVar2 = scnprintf(param_3,0x1000,"%d\n");
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- fastcharge_mode_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011aad4 ---- */

void fastcharge_mode_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x130);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0x48),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get batt-id rc=%d\n","fastcharge_mode_show",iVar2);
    }
    iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- typec_cc_orientation_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011ab8c ---- */

long typec_cc_orientation_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar3 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar3,&DAT_00102d80);
  }
  (*pcVar3)(*(undefined8 *)(param_1 + -0x2f0),3,&local_30);
  iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- input_suspend_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011ac5c ---- */

long input_suspend_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar3 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar3,&DAT_00102da0);
  }
  (*pcVar3)(*(undefined8 *)(param_1 + -0x2f0),0x78,&local_30);
  iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- input_suspend_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011ad2c ---- */

undefined8
input_suspend_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar3 = kstrtoint(param_3,10,&local_2c);
  uVar2 = local_2c;
  if (iVar3 == 0) {
    pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x28);
    if (pcVar4 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar4,&DAT_00102dc0);
    }
    iVar3 = (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),0x78,uVar2);
    if (iVar3 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't change input suspend state rc=%d\n","input_suspend_store",iVar3);
    }
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","input_suspend_store","input_suspend_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- cp_bus_current_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011ae4c ---- */

long cp_bus_current_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  iVar2 = third_cp_get_iio_channel(param_1 + -0x2f0,0,&local_30);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Failed to get sc_bus_current rc=%d\n","cp_bus_current_show",iVar2);
  }
  iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- third_cp_get_iio_channel @ 0011aef4 ---- */

uint third_cp_get_iio_channel(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 *in_x18;
  undefined *puVar5;
  ulong uVar6;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar4 = (ulong *)param_1[0x86];
  if (*puVar4 < 0xfffffffffffff001) {
    if (*puVar4 != 0) goto LAB_0011af98;
    uVar2 = iio_channel_get(*param_1,"sc_bus_current");
    *(undefined8 *)param_1[0x86] = uVar2;
    puVar4 = (ulong *)param_1[0x86];
    if (*puVar4 < 0xfffffffffffff001) goto LAB_0011af98;
    *puVar4 = 0;
    _printk("<3>QCOM-BATT: %s: Failed to get IIO channel %s, rc=%d\n","is_third_cp_chan_valid","sc_bus_current");
    puVar4 = (ulong *)param_1[0x86];
  }
  if (puVar4[3] < 0xfffffffffffff001) {
    if (puVar4[3] == 0) {
      uVar2 = iio_channel_get(*param_1,"bq_bus_current");
      *(undefined8 *)(param_1[0x86] + 0x18) = uVar2;
      puVar4 = (ulong *)param_1[0x86];
      if (0xfffffffffffff000 < puVar4[3]) {
        puVar4[3] = 0;
        _printk("<3>QCOM-BATT: %s: Failed to get IIO channel %s, rc=%d\n","is_third_cp_chan_valid","bq_bus_current");
        puVar4 = (ulong *)param_1[0x86];
        goto LAB_0011af98;
      }
    }
    param_2 = param_2 + 3;
  }
LAB_0011af98:
  uVar3 = puVar4[param_2];
  if (uVar3 < 0xfffffffffffff001) {
    if (uVar3 == 0) {
      uVar6 = (ulong)param_2;
      puVar5 = (&third_cp_ext_iio_chan)[uVar6];
      uVar2 = iio_channel_get(*param_1,puVar5);
      *(undefined8 *)(param_1[0x86] + uVar6 * 8) = uVar2;
      uVar3 = *(ulong *)(param_1[0x86] + uVar6 * 8);
      if (0xfffffffffffff000 < uVar3) {
        *(undefined8 *)(param_1[0x86] + uVar6 * 8) = 0;
        _printk("<3>QCOM-BATT: %s: Failed to get IIO channel %s, rc=%d\n","is_third_cp_chan_valid",puVar5);
        return 0xffffffed;
      }
    }
    uVar1 = iio_read_channel_processed(uVar3,param_3);
    uVar1 = uVar1 & (int)uVar1 >> 0x1f;
  }
  else {
    uVar1 = 0xffffffed;
  }
  return uVar1;
}



/* ---- cp_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b088 ---- */

long cp_manufacturer_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_30 = 0;
  iVar3 = third_cp_get_iio_channel(param_1 + -0x2f0,1,&local_30);
  if (iVar3 < 0) {
    local_30 = (ulong)local_30._4_4_ << 0x20;
    _printk("<3>QCOM-BATT: %s: Failed to get sc_manufacturer rc=%d\n","cp_manufacturer_show",iVar3);
    uVar1 = (uint)local_30;
  }
  else {
    uVar1 = (uint)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,uVar1);
  }
  if (uVar1 < 3) {
    pcVar4 = (&power_supply_cp_manufacturer_text)[uVar1];
  }
  else {
    pcVar4 = "Unknown";
  }
  iVar3 = scnprintf(param_3,0x1000,"%s\n",pcVar4);
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar3;
}



/* ---- auth_batt_id_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b164 ---- */

void auth_batt_id_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  puVar4 = *(undefined8 **)(param_1 + 0x138);
  lVar3 = -0x13;
  local_30 = 0;
  if ((puVar4 != (undefined8 *)0x0) && (puVar4 < (undefined8 *)0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*puVar4,&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get batt-id rc=%d\n","auth_batt_id_show",iVar2);
    }
    iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- chip_ok_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b21c ---- */

void chip_ok_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x138);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 8),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get chip-id rc=%d\n","chip_ok_show",iVar2);
    }
    iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- auth_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b2d4 ---- */

void auth_manufacturer_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  uVar6 = *(ulong *)(param_1 + 0x138);
  lVar4 = -0x13;
  local_30 = 0;
  if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) goto LAB_0011b390;
  iVar3 = iio_read_channel_processed(*(undefined8 *)(uVar6 + 0x10),&local_30);
  if (iVar3 < 0) {
    local_30 = (ulong)local_30._4_4_ << 0x20;
    _printk("<3>QCOM-BATT: %s: Failed to get auth secret id rc=%d\n","auth_manufacturer_show",iVar3);
    uVar1 = (uint)local_30;
    if (3 < (uint)local_30) goto LAB_0011b370;
LAB_0011b338:
    pcVar5 = (&power_supply_auth_manufacturer_text)[uVar1];
  }
  else {
    uVar1 = (uint)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,uVar1);
    if (uVar1 < 4) goto LAB_0011b338;
LAB_0011b370:
    pcVar5 = "Unknown";
  }
  iVar3 = scnprintf(param_3,0x1000,"%s\n",pcVar5);
  lVar4 = (long)iVar3;
LAB_0011b390:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}



/* ---- batt_manufacturer_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b3c0 ---- */

void batt_manufacturer_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  puVar6 = *(undefined8 **)(param_1 + 0x138);
  lVar4 = -0x13;
  local_30 = 0;
  if ((puVar6 == (undefined8 *)0x0) || ((undefined8 *)0xfffffffffffff000 < puVar6))
  goto LAB_0011b47c;
  iVar3 = iio_read_channel_processed(*puVar6,&local_30);
  if (iVar3 < 0) {
    local_30 = (ulong)local_30._4_4_ << 0x20;
    _printk("<3>QCOM-BATT: %s: Failed to get batt-id rc=%d\n","batt_manufacturer_show",iVar3);
    uVar1 = (uint)local_30;
    if (2 < (uint)local_30) goto LAB_0011b45c;
LAB_0011b424:
    pcVar5 = (&power_supply_batt_manufacturer_text)[uVar1];
  }
  else {
    uVar1 = (uint)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,uVar1);
    if (uVar1 < 3) goto LAB_0011b424;
LAB_0011b45c:
    pcVar5 = "Unknown";
  }
  iVar3 = scnprintf(param_3,0x1000,"%s\n",pcVar5);
  lVar4 = (long)iVar3;
LAB_0011b47c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}



/* ---- apdo_max_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b4ac ---- */

long apdo_max_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_40;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  local_40 = 0;
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar3 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar3,&DAT_00102de0);
  }
  iVar2 = (*pcVar3)(*(undefined8 *)(param_1 + -0x2f0),0xad,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't get apdo_curr, rc=%d\n","apdo_max_show",iVar2);
  }
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar3 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar3,&DAT_00102e00);
  }
  iVar2 = (*pcVar3)(*(undefined8 *)(param_1 + -0x2f0),0xac,&local_40);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't get apdo_volt, rc=%d\n","apdo_max_show",iVar2);
  }
  iVar2 = (local_40 * local_3c) / 1000000;
  _printk("<6>QCOM-BATT: %s: %s:apdo_max is %d \n","apdo_max_show","apdo_max_show",iVar2);
  iVar2 = scnprintf(param_3,4,"%d\n",iVar2);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- set_ship_mode_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b64c ---- */

long set_ship_mode_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar3 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar3,&DAT_00102e20);
  }
  (*pcVar3)(*(undefined8 *)(param_1 + -0x2f0),0x3b,&local_30);
  iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- set_ship_mode_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011b71c ---- */

undefined8
set_ship_mode_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar3 = kstrtoint(param_3,10,&local_2c);
  uVar2 = local_2c;
  if (iVar3 == 0) {
    pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x28);
    if (pcVar4 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar4,&DAT_00102e40);
    }
    iVar3 = (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),0x3b,uVar2);
    if (iVar3 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't change input suspend state rc=%d\n","set_ship_mode_store",iVar3);
    }
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","set_ship_mode_store","set_ship_mode_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- shipmode_count_reset_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b83c ---- */

long shipmode_count_reset_show_5ed5160633f7e8983a0264f74c1175a7
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",g_shipmode_en);
  return (long)iVar1;
}



/* ---- shipmode_count_reset_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011b87c ---- */

undefined8
shipmode_count_reset_store_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar2 = kstrtoint(param_3,10,&local_2c);
  if (iVar2 == 0) {
    g_shipmode_en = local_2c;
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","shipmode_count_reset_store","shipmode_count_reset_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- thermal_level_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b91c ---- */

void thermal_level_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  lVar3 = *(long *)(param_1 + -0x60);
  local_30 = 0;
  if (lVar3 == 0) {
    lVar3 = power_supply_get_by_name("battery");
    *(long *)(param_1 + -0x60) = lVar3;
    if (lVar3 == 0) {
      lVar3 = -0x13;
      goto LAB_0011b994;
    }
  }
  iVar2 = power_supply_get_property(lVar3,0x21,&local_30);
  if (iVar2 < 0) {
    _printk("<3>QCOM-BATT: %s: Couldn't get thermal ret=%d\n","thermal_level_show",iVar2);
  }
  iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
  lVar3 = (long)iVar2;
LAB_0011b994:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- authentic_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011b9e8 ---- */

void authentic_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x138);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0x20),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get chip-id rc=%d\n","authentic_show",iVar2);
    }
    iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- mtbf_current_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011baa0 ---- */

long mtbf_current_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (pcVar3 != smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
    __cfi_slowpath_diag(0xfb4e62e5c313b87c,pcVar3,&DAT_00102e60);
  }
  (*pcVar3)(*(undefined8 *)(param_1 + -0x2f0),0xc3,&local_30);
  iVar2 = scnprintf(param_3,0x1000,"%d\n",local_30 & 0xffffffff);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- mtbf_current_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011bb70 ---- */

undefined8
mtbf_current_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar3 = kstrtoint(param_3,10,&local_2c);
  uVar2 = local_2c;
  if (iVar3 == 0) {
    pcVar4 = *(code **)(*(long *)(param_1 + 0xb8) + 0x28);
    if (pcVar4 != smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt) {
      __cfi_slowpath_diag(0x9df2ade97e4b3e44,pcVar4,&DAT_00102e80);
    }
    iVar3 = (*pcVar4)(*(undefined8 *)(param_1 + -0x2f0),0xc3,uVar2);
    if (iVar3 < 0) {
      _printk("<3>QCOM-BATT: %s: Couldn't change input suspend state rc=%d\n","mtbf_current_store",iVar3);
    }
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","mtbf_current_store","mtbf_current_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- real_capacity_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011bc90 ---- */

void real_capacity_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  uVar4 = *(ulong *)(param_1 + 0x130);
  lVar3 = -0x13;
  local_30 = 0;
  if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0x10),&local_30);
    if (iVar2 < 0) {
      _printk("<3>QCOM-BATT: %s: Failed to get row_soc, rc=%d\n","real_capacity_show",iVar2);
    }
    *(undefined4 *)(param_1 + 0xdc) = (undefined4)local_30;
    iVar2 = scnprintf(param_3,0x1000,"%d\n");
    lVar3 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- battery_type_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011bd50 ---- */

void battery_type_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_28 = *(long *)(lVar5 + 0x5e0);
  puVar6 = *(undefined8 **)(param_1 + 0x138);
  lVar5 = -0x13;
  local_30 = 0;
  if ((puVar6 != (undefined8 *)0x0) && (puVar6 < (undefined8 *)0xfffffffffffff001)) {
    iVar4 = iio_read_channel_processed(*puVar6,&local_30);
    if (iVar4 < 0) {
      local_30 = local_30 & 0xffffffff00000000;
      _printk("<3>QCOM-BATT: %s: Failed to get batt-id rc=%d\n","battery_type_show",iVar4);
    }
    pcVar1 = "NVT-5000mAh";
    if ((int)local_30 != 1) {
      pcVar1 = "UNKNOWN";
    }
    pcVar2 = "COSMX-5000mAh";
    if ((int)local_30 != 0) {
      pcVar2 = pcVar1;
    }
    iVar4 = scnprintf(param_3,0x1000,"%s\n",pcVar2);
    lVar5 = (long)iVar4;
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return;
}



/* ---- blank_status_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011be34 ---- */

long blank_status_show_5ed5160633f7e8983a0264f74c1175a7
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = g_blank_status;
  _printk("<3>QCOM-BATT: %s: g_blank_status show =%d g_audio_cctog =%d\n","blank_status_show",g_blank_status,g_audio_cctog);
  iVar2 = scnprintf(param_3,0x1000,"%d\n",uVar1);
  return (long)iVar2;
}



/* ---- blank_status_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011bea4 ---- */

undefined8
blank_status_store_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *in_x18;
  undefined8 uVar6;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_3c = 0;
  iVar3 = kstrtoint(param_3,10,&local_3c);
  if (iVar3 == 0) {
    g_blank_status = local_3c;
    uVar4 = is_need_set_drp_to_sink();
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      _printk("<6>QCOM-BATT: %s: %s set drp status to try_sink\n","blank_status_store","blank_status_store");
      uVar5 = 1;
      uVar6 = 1;
    }
    else {
      _printk("<6>QCOM-BATT: %s: %s set drp status to sink\n","blank_status_store","blank_status_store");
      uVar5 = 2;
      uVar6 = 2;
    }
    _printk("<3>QCOM-BATT: %s: %s enable: %d, typec_role: %d\n","set_drp_status","set_drp_status",bVar1,uVar5);
    cid_set_prop_typec_power_role(uVar6);
    _printk("<3>QCOM-BATT: %s: g_blank_status store=%d g_audio_cctog %d\n","blank_status_store",g_blank_status,g_audio_cctog);
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","blank_status_store","blank_status_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- audio_cctog_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011bff4 ---- */

long audio_cctog_show_5ed5160633f7e8983a0264f74c1175a7
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = g_audio_cctog;
  _printk("<3>QCOM-BATT: %s: g_blank_status =%d g_audio_cctog show =%d\n","audio_cctog_show",g_blank_status,g_audio_cctog);
  iVar2 = scnprintf(param_3,0x1000,"%d\n",uVar1);
  return (long)iVar2;
}



/* ---- audio_cctog_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011c064 ---- */

undefined8
audio_cctog_store_5ed5160633f7e8983a0264f74c1175a7
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *in_x18;
  undefined8 uVar6;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_3c = 0;
  iVar3 = kstrtoint(param_3,10,&local_3c);
  if (iVar3 == 0) {
    g_audio_cctog = local_3c;
    uVar4 = is_need_set_drp_to_sink();
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      _printk("<6>QCOM-BATT: %s: %s set drp status to try_sink\n","audio_cctog_store","audio_cctog_store");
      uVar5 = 1;
      uVar6 = 1;
    }
    else {
      _printk("<6>QCOM-BATT: %s: %s set drp status to sink\n","audio_cctog_store","audio_cctog_store");
      uVar5 = 2;
      uVar6 = 2;
    }
    _printk("<3>QCOM-BATT: %s: %s enable: %d, typec_role: %d\n","set_drp_status","set_drp_status",bVar1,uVar5);
    cid_set_prop_typec_power_role(uVar6);
    _printk("<3>QCOM-BATT: %s: g_blank_status =%d g_audio_cctog store =%d\n","audio_cctog_store",g_blank_status,g_audio_cctog);
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","audio_cctog_store","audio_cctog_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- smart_chg_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011c1b4 ---- */

long smart_chg_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>QCOM-BATT: %s: %s Get smart_chg: %d\n","smart_chg_show","smart_chg_show",*(undefined4 *)(param_1 + 0xe0));
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(param_1 + 0xe0));
  return (long)iVar1;
}



/* ---- smart_chg_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011c21c ---- */

undefined8
smart_chg_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  iVar2 = kstrtoint(param_3,10,&local_30);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    _printk("<3>QCOM-BATT: %s: %s Set smart_chg to %d\n","smart_chg_store","smart_chg_store");
    local_2c = *(undefined4 *)(param_1 + 0xe0);
    iVar2 = srcu_notifier_call_chain(&qpnp_smb5_notifier,3,&local_2c);
    if (iVar2 != 0) {
      _printk("<3>QCOM-BATT: %s: %s: qpnp_smb5_notifier_call_chain error:%d\n","smart_chg_store","smart_chg_store",iVar2);
    }
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","smart_chg_store","smart_chg_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- smart_batt_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011c314 ---- */

long smart_batt_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>QCOM-BATT: %s: %s Get smart_batt: %d\n","smart_batt_show","smart_batt_show",*(undefined4 *)(param_1 + 0xe4));
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(param_1 + 0xe4));
  return (long)iVar1;
}



/* ---- smart_batt_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011c37c ---- */

undefined8
smart_batt_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_30 = 0;
  iVar1 = kstrtoint(param_3,10,&local_30);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe4) = local_30;
    _printk("<3>QCOM-BATT: %s: %s Set smart_batt to %d\n","smart_batt_store","smart_batt_store");
    local_2c = *(undefined4 *)(param_1 + 0xe4);
    iVar1 = srcu_notifier_call_chain(&qpnp_smb5_notifier,4,&local_2c);
    if (iVar1 != 0) {
      _printk("<3>QCOM-BATT: %s: %s: qpnp_smb5_notifier_call_chain error:%d\n","smart_batt_store","smart_batt_store",iVar1);
    }
    lVar2 = find_votable(&DAT_0010d6a2);
    if (lVar2 == 0) {
      _printk("<3>QCOM-BATT: %s: %s failed to get fv_votable\n","smart_batt_store","smart_batt_store");
    }
    else {
      rerun_election();
    }
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","smart_batt_store","smart_batt_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- night_charging_show.5ed5160633f7e8983a0264f74c1175a7 @ 0011c4a8 ---- */

long night_charging_show_5ed5160633f7e8983a0264f74c1175a7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>QCOM-BATT: %s: %s Get night_charging: %d\n","night_charging_show","night_charging_show",*(undefined4 *)(param_1 + 0xe8))
  ;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(param_1 + 0xe8));
  return (long)iVar1;
}



/* ---- night_charging_store.5ed5160633f7e8983a0264f74c1175a7 @ 0011c510 ---- */

undefined8
night_charging_store_5ed5160633f7e8983a0264f74c1175a7
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  iVar2 = kstrtoint(param_3,10,&local_30);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    _printk("<3>QCOM-BATT: %s: %s Set night_charging to %d\n","night_charging_store","night_charging_store");
    local_2c = *(undefined4 *)(param_1 + 0xe8);
    iVar2 = srcu_notifier_call_chain(&qpnp_smb5_notifier,5,&local_2c);
    if (iVar2 != 0) {
      _printk("<3>QCOM-BATT: %s: %s: qpnp_smb5_notifier_call_chain error:%d\n","night_charging_store","night_charging_store",iVar2);
    }
  }
  else {
    _printk("<3>QCOM-BATT: %s: %s kstrtoint fail\n","night_charging_store","night_charging_store");
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- reboot_ship_mode.5ed5160633f7e8983a0264f74c1175a7 @ 0011c608 ---- */

undefined8 reboot_ship_mode_5ed5160633f7e8983a0264f74c1175a7(void)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((g_shipmode_en == 1) && (iVar1 = smblib_enable_ship_mode(1), iVar1 < 0)) {
    _printk("<0>QCOM-BATT: %s: Failed to write ship mode: %d\n","reboot_ship_mode",iVar1);
  }
  return 0;
}



/* ---- set_smb5_rdy @ 0011c664 ---- */

void set_smb5_rdy(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>set smb5_rdy, wake up xm_smart_chg driver\n");
  smb5_rdy = 1;
  return;
}



/* ---- is_smb5_rdy @ 0011c69c ---- */

undefined1 is_smb5_rdy(void)

{
  return smb5_rdy;
}



/* ---- qpnp_smb5_reg_notifier @ 0011c6b0 ---- */

void qpnp_smb5_reg_notifier(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  srcu_notifier_chain_register(&qpnp_smb5_notifier,param_1);
  return;
}



/* ---- qpnp_smb5_unreg_notifier @ 0011c6e0 ---- */

void qpnp_smb5_unreg_notifier(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  srcu_notifier_chain_unregister(&qpnp_smb5_notifier,param_1);
  return;
}



/* ---- qpnp_smb5_notifier_call_chain @ 0011c710 ---- */

void qpnp_smb5_notifier_call_chain(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_1c;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c = param_2;
  srcu_notifier_call_chain(&qpnp_smb5_notifier,param_1,&local_1c);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smb5_set_prop_comp_clamp_level @ 0011c778 ---- */

int smb5_set_prop_comp_clamp_level(undefined8 *param_1,uint param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *in_x18;
  ulong uVar4;
  ulong uVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 < 2) {
    uVar4 = (ulong)param_2;
    uVar5 = (uVar4 + (ulong)param_2 * 2) * 4;
    uVar1 = *(undefined2 *)(&clamp_levels + uVar5);
    iVar3 = smblib_write(param_1,uVar1,(&DAT_0010f2fc)[uVar5]);
    if (iVar3 < 0) {
      _dev_err(*param_1,"Failed to configure comp clamp settings for reg=0x%04x rc=%d\n",uVar1,iVar3
              );
    }
    if (0x18 < (uVar5 | 2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x11c8b4);
      (*pcVar2)();
    }
    uVar1 = *(undefined2 *)(&DAT_0010f2f8 + uVar4 * 0xc);
    iVar3 = smblib_write(param_1,uVar1,(&DAT_0010f2fe)[uVar4 * 0xc]);
    if (iVar3 < 0) {
      _dev_err(*param_1,"Failed to configure comp clamp settings for reg=0x%04x rc=%d\n",uVar1,iVar3
              );
    }
    uVar1 = *(undefined2 *)(&DAT_0010f2fa + uVar4 * 0xc);
    iVar3 = smblib_write(param_1,uVar1,(&DAT_0010f300)[uVar4 * 0xc]);
    if (iVar3 < 0) {
      _dev_err(*param_1,"Failed to configure comp clamp settings for reg=0x%04x rc=%d\n",uVar1,iVar3
              );
    }
    *(uint *)(param_1 + 0x24e) = param_2;
  }
  else {
    _printk("<3>Invalid comp clamp level=%d\n",param_2);
    iVar3 = -0x16;
  }
  return iVar3;
}



/* ---- smb5_extcon_init @ 0011c8b4 ---- */

ulong smb5_extcon_init(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar5 = devm_extcon_dev_allocate(*param_1,&smblib_extcon_cable);
  param_1[0x255] = uVar5;
  if (uVar5 < 0xfffffffffffff001) {
    uVar1 = devm_extcon_dev_register(*param_1,uVar5);
    if (-1 < (int)uVar1) {
      uVar2 = extcon_set_property_capability(param_1[0x255],1,1);
      uVar3 = extcon_set_property_capability(param_1[0x255],1,2);
      uVar4 = extcon_set_property_capability(param_1[0x255],2,1);
      uVar1 = extcon_set_property_capability(param_1[0x255],2,2);
      uVar1 = uVar3 | uVar2 | uVar4 | uVar1;
      uVar5 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        _dev_err(*param_1,"failed to configure extcon capabilities\n");
      }
      goto LAB_0011c958;
    }
    uVar5 = (ulong)uVar1;
    uVar6 = *param_1;
    pcVar7 = "failed to register extcon device rc=%d\n";
  }
  else {
    uVar6 = *param_1;
    pcVar7 = "failed to allocate extcon device rc=%d\n";
  }
  _dev_err(uVar6,pcVar7,uVar5 & 0xffffffff);
LAB_0011c958:
  return uVar5 & 0xffffffff;
}



/* ---- smb5_probe.756213caaf8d6a53d7343e50496c5a32 @ 0011c9b0 ---- */

int smb5_probe_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *in_x18;
  long *plVar20;
  undefined8 unaff_x30;
  char local_60 [4];
  uint local_5c;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar11 = sp_el0;
  local_58 = *(long *)(lVar11 + 0x5e0);
  _printk("<3>smb5_probe ++\n");
  lVar11 = param_1 + 0x10;
  puVar9 = (undefined4 *)devm_iio_device_alloc(lVar11,0x1380);
  if (puVar9 == (undefined4 *)0x0) {
LAB_0011cc18:
    iVar8 = -0xc;
    goto LAB_0011cc1c;
  }
  plVar20 = *(long **)(puVar9 + 0x110);
  *(undefined1 **)(puVar9 + 0x10c) = &smb5_iio_info;
  *(undefined4 *)(plVar20 + 0x26d) = 0xeb;
  lVar10 = devm_kmalloc(lVar11,0x1608,0xdc0);
  plVar20[0x26e] = lVar10;
  if (lVar10 == 0) goto LAB_0011cc18;
  lVar10 = devm_kmalloc(lVar11,(ulong)*(uint *)(plVar20 + 0x26d) * 0x98,0xdc0);
  plVar20[0x26f] = lVar10;
  if (lVar10 == 0) goto LAB_0011cc18;
  plVar20[0x4b] = plVar20[0x26e];
  plVar20[0x50] = (long)&__debug_mask;
  plVar20[0x4c] = 0;
  *(undefined4 *)(plVar20 + 0x56) = 500000;
  plVar20[600] = -0x1500000016;
  *plVar20 = lVar11;
  plVar20[0x51] = 0;
  plVar20[3] = (long)&smb5_irqs;
  *(undefined1 *)((long)plVar20 + 0x11c7) = 0;
  *(undefined4 *)(plVar20 + 0x242) = 0xffffffea;
  *(undefined4 *)((long)plVar20 + 0x118c) = 0xffffffea;
  __mutex_init(plVar20 + 0x71,"&chg->adc_lock",&smb5_request_interrupt___key);
  lVar10 = dev_get_regmap(*(undefined8 *)(*plVar20 + 0x60),0);
  plVar20[2] = lVar10;
  if (lVar10 == 0) {
    _printk("<3>parent regmap is missing\n");
    iVar8 = -0x16;
    goto LAB_0011cc1c;
  }
  if ((int)plVar20[0x26d] != 0) {
    uVar16 = 0;
    lVar10 = 0x88;
    lVar12 = 0;
    do {
      *(undefined4 **)(plVar20[0x26e] + lVar12) = puVar9;
      puVar1 = (undefined8 *)(plVar20[0x26f] + lVar10);
      *(undefined8 **)(plVar20[0x26e] + lVar12 + 8) = puVar1 + -0x11;
      if (uVar16 == 0xeb) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x11daac);
        (*pcVar5)();
      }
      puVar1[-0xf] = uVar16;
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + 0x98;
      uVar18 = *(undefined8 *)((long)&smb5_chans_pmic + lVar12);
      uVar19 = *(undefined8 *)((long)&DAT_0010f7a8 + lVar12);
      uVar15 = *(undefined4 *)((long)&DAT_0010f7a0 + lVar12);
      uVar4 = *(undefined4 *)((long)&DAT_0010f7a4 + lVar12);
      *puVar1 = uVar18;
      puVar1[-1] = uVar18;
      puVar1[-0xc] = uVar19;
      *(undefined4 *)(puVar1 + -0x11) = uVar4;
      *(undefined4 *)((long)puVar1 + -0x84) = uVar15;
      lVar12 = lVar12 + 0x18;
    } while (uVar16 < *(uint *)(plVar20 + 0x26d));
  }
  *(long *)(puVar9 + 0x1a) = lVar11;
  uVar18 = *(undefined8 *)(param_1 + 0x300);
  *(char **)(puVar9 + 0x108) = "qpnp-smb5";
  *(undefined8 *)(puVar9 + 0xbe) = uVar18;
  *puVar9 = 1;
  *(long *)(puVar9 + 0x104) = plVar20[0x26f];
  puVar9[0x106] = (int)plVar20[0x26d];
  iVar8 = __devm_iio_device_register(lVar11,puVar9,&__this_module);
  if ((iVar8 != 0) && (_printk("<3>iio device register failed rc=%d\n",iVar8), iVar8 < 0)) goto LAB_0011cc1c;
  uVar18 = *(undefined8 *)(*plVar20 + 0x2f0);
  uVar7 = of_device_get_match_data();
  switch(uVar7) {
  case 0:
    *(undefined4 *)((long)plVar20 + 0x111c) = 0;
    memcpy(plVar20 + 4,&smb5_pm8150b_params,0x1e0);
    uVar14 = *(uint *)(plVar20 + 0x252);
    pcVar17 = "pm8150b_charger";
    goto LAB_0011cc88;
  case 1:
    *(undefined4 *)((long)plVar20 + 0x111c) = 1;
    memcpy(plVar20 + 4,&smb5_pm8150b_params,0x1e0);
    uVar14 = *(uint *)(plVar20 + 0x252);
    pcVar17 = "pm7250b_charger";
    *(undefined1 *)((long)plVar20 + 0x1235) = 1;
LAB_0011cc88:
    plVar20[1] = (long)pcVar17;
    *(uint *)(plVar20 + 0x252) = uVar14 | 0x10;
    break;
  case 2:
    *(undefined4 *)((long)plVar20 + 0x111c) = 2;
    memcpy(plVar20 + 4,&smb5_pm8150b_params,0x1e0);
    *(undefined4 *)(plVar20 + 0x242) = 3000000;
    plVar20[1] = (long)"pm6150_charger";
    *(undefined1 *)((long)plVar20 + 0x1235) = 1;
    *(uint *)(plVar20 + 0x252) = *(uint *)(plVar20 + 0x252) | 0x12;
    break;
  case 3:
    *(undefined4 *)((long)plVar20 + 0x111c) = 3;
    *(uint *)(plVar20 + 0x252) = *(uint *)(plVar20 + 0x252) | 0x7c;
    memcpy(plVar20 + 4,&smb5_pmi632_params,0x1e0);
    iVar8 = (int)plVar20[0x266];
    if ((int)plVar20[0x266] < 1) {
      iVar8 = 3000000;
    }
    *(undefined1 *)((long)plVar20 + 0x11c6) = 1;
    plVar20[1] = (long)"pmi632_charger";
    *(undefined1 *)(plVar20 + 0x57) = 1;
    *(undefined1 *)(plVar20 + 0x23e) = 1;
    *(undefined1 *)((long)plVar20 + 0x1236) = 1;
    *(int *)((long)plVar20 + 0x11cc) = iVar8;
    break;
  default:
    _printk("<3>PMIC subtype %d not supported\n",uVar7);
    puVar13 = "<3>Couldn't setup chg_config rc=%d\n";
    iVar8 = -0x16;
    goto LAB_0011d910;
  }
  plVar20[0x52] = 0x32000000258;
  plVar20[0x53] = 0x4b00000041a;
  plVar20[0x54] = 0x3200000041a;
  *(undefined4 *)(plVar20 + 0x55) = 800;
  lVar11 = of_find_property(uVar18,"qcom,disable-sw-thermal-regulation",0);
  if (lVar11 != 0) {
    *(uint *)(plVar20 + 0x252) = *(uint *)(plVar20 + 0x252) & 0xfffffffd;
  }
  lVar11 = of_find_property(uVar18,"qcom,disable-fcc-restriction",0);
  if (lVar11 != 0) {
    *(undefined4 *)(plVar20 + 0x242) = 0xffffffea;
  }
  lVar11 = *(long *)(*plVar20 + 0x2f0);
  if (lVar11 == 0) {
    puVar13 = "<3>device tree node missing\n";
LAB_0011d8fc:
    _printk(puVar13);
    iVar8 = -0x16;
LAB_0011d904:
    puVar13 = "<3>Couldn't parse device tree rc=%d\n";
  }
  else {
    iVar8 = of_property_read_variable_u32_array(lVar11,"qcom,fv-max-uv",plVar20 + 0x26b,1,0);
    if (iVar8 < 0) {
      *(undefined4 *)(plVar20 + 0x26b) = 0xffffffea;
    }
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,chg-inhibit-threshold-mv",plVar20 + 0x267,1,0);
    if ((-1 < iVar8) && (300 < *(uint *)(plVar20 + 0x267))) {
      puVar13 = "<3>qcom,chg-inhibit-threshold-mv is incorrect\n";
      goto LAB_0011d8fc;
    }
    *(undefined4 *)(plVar20 + 0x269) = 0xffffffea;
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,auto-recharge-vbat-mv",plVar20 + 0x269,1,0);
    if ((-1 < iVar8) && ((int)plVar20[0x269] < 0)) {
      puVar13 = "<3>qcom,auto-recharge-vbat-mv is incorrect\n";
      goto LAB_0011d8fc;
    }
    local_5c = 0;
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,fcc-max-ua",(undefined4 *)((long)plVar20 + 0x1354),1,0);
    if (iVar8 < 0) {
      *(undefined4 *)((long)plVar20 + 0x1354) = 0xffffffea;
    }
    plVar2 = plVar20 + 0x266;
    iVar8 = of_property_read_variable_u32_array(lVar11,"qcom,usb-icl-ua",plVar2,1,0);
    if (iVar8 < 0) {
      uVar15 = 0xffffffea;
      *(undefined4 *)plVar2 = 0xffffffea;
    }
    else {
      uVar15 = (undefined4)*plVar2;
    }
    *(undefined4 *)(plVar20 + 0x230) = uVar15;
    iVar8 = of_property_read_variable_u32_array(lVar11,"qcom,otg-cl-ua",plVar20 + 0x235,1,0);
    if (iVar8 < 0) {
      iVar8 = 1000000;
      if (*(int *)((long)plVar20 + 0x111c) != 3) {
        iVar8 = 3000000;
      }
      *(int *)(plVar20 + 0x235) = iVar8;
    }
    piVar3 = (int *)((long)plVar20 + 0x135c);
    iVar8 = of_property_read_variable_u32_array(lVar11,"qcom,chg-term-src",piVar3,1,0);
    if (iVar8 < 0) {
      *piVar3 = 0;
    }
    else if (*piVar3 == 1) {
      of_property_read_variable_u32_array
                (lVar11,"qcom,chg-term-base-current-ma",(long)plVar20 + 0x1364,1,0);
    }
    of_property_read_variable_u32_array(lVar11,"qcom,chg-term-current-ma",plVar20 + 0x26c,1,0);
    *(undefined4 *)((long)plVar20 + 0x1274) = 1500000;
    iVar8 = of_property_read_variable_u32_array(lVar11,"qcom,wls-current-max-ua",&local_5c,1,0);
    if ((-1 < iVar8) && ((int)local_5c < 1500000)) {
      *(uint *)((long)plVar20 + 0x1274) = local_5c;
    }
    iVar8 = smblib_get_iio_channel(plVar20,"mid_voltage",plVar20 + 0x43);
    if ((((((iVar8 < 0) ||
           (iVar8 = smblib_get_iio_channel(plVar20,"usb_in_voltage",plVar20 + 0x42), iVar8 < 0)) ||
          (iVar8 = smblib_get_iio_channel(plVar20,"chg_temp",plVar20 + 0x40), iVar8 < 0)) ||
         ((iVar8 = smblib_get_iio_channel(plVar20,"usb_in_current",plVar20 + 0x41), iVar8 < 0 ||
          (iVar8 = smblib_get_iio_channel(plVar20,"sbux_res",plVar20 + 0x46), iVar8 < 0)))) ||
        ((iVar8 = smblib_get_iio_channel(plVar20,"vph_voltage",plVar20 + 0x47), iVar8 < 0 ||
         ((iVar8 = smblib_get_iio_channel(plVar20,"die_temp",plVar20 + 0x48), iVar8 < 0 ||
          (iVar8 = smblib_get_iio_channel(plVar20,"conn_temp",plVar20 + 0x45), iVar8 < 0)))))) ||
       ((iVar8 = smblib_get_iio_channel(plVar20,"skin_temp",plVar20 + 0x49), iVar8 < 0 ||
        (iVar8 = smblib_get_iio_channel(plVar20,"smb_temp",plVar20 + 0x4a), iVar8 < 0))))
    goto LAB_0011d904;
    local_5c = 0;
    bVar6 = true;
    of_property_read_variable_u32_array(lVar11,"qcom,sec-charger-config",plVar20 + 0x268,1,0);
    *(bool *)((long)plVar20 + 0x1141) = (*(uint *)(plVar20 + 0x268) & 0xfffffffd) == 1;
    *(bool *)(plVar20 + 0x228) = (*(uint *)(plVar20 + 0x268) & 0xfffffffe) == 2;
    lVar10 = of_find_property(lVar11,"qcom,step-charging-enable",0);
    *(bool *)((long)plVar20 + 0x1194) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,typec-legacy-rp-icl",0);
    *(bool *)((long)plVar20 + 0x1197) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,sw-jeita-enable",0);
    *(bool *)((long)plVar20 + 0x1195) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,jeita-arb-enable",0);
    *(bool *)((long)plVar20 + 0x1196) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"mi,use_third_cp",0);
    *(bool *)((long)plVar20 + 0x1301) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"mi,support-ffc",0);
    *(bool *)((long)plVar20 + 0x1302) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,distinguish-qc-class-ab",0);
    *(bool *)(plVar20 + 0x259) = lVar10 != 0;
    if ((char)plVar20[0x57] == '\0') {
      lVar10 = of_find_property(lVar11,"qcom,usb-pd-disable",0);
      bVar6 = lVar10 != 0;
    }
    *(bool *)(plVar20 + 0x57) = bVar6;
    if ((char)plVar20[0x23e] == '\0') {
      lVar10 = of_find_property(lVar11,"qcom,lpd-disable",0);
      bVar6 = lVar10 != 0;
    }
    else {
      bVar6 = true;
    }
    piVar3 = (int *)((long)plVar20 + 0x134c);
    *(bool *)(plVar20 + 0x23e) = bVar6;
    iVar8 = of_property_read_variable_u32_array(lVar11,"qcom,wd-bark-time-secs",piVar3,1,0);
    if ((iVar8 < 0) || (*piVar3 < 0x10)) {
      *piVar3 = 0x40;
    }
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,wd-snarl-time-config",plVar20 + 0x26a,1,0);
    if (iVar8 < 0) {
      *(undefined4 *)(plVar20 + 0x26a) = 7;
    }
    lVar10 = of_find_property(lVar11,"qcom,batteryless-platform",0);
    *(bool *)((long)plVar20 + 0x133c) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,thermal-mitigation",&local_5c);
    if (lVar10 != 0) {
      lVar10 = devm_kmalloc(*plVar20,(long)(int)local_5c,0xdc0);
      plVar20[0x22f] = lVar10;
      if (lVar10 == 0) {
        iVar8 = -0xc;
      }
      else {
        *(int *)(plVar20 + 0x22e) = (int)local_5c >> 2;
        iVar8 = of_property_read_variable_u32_array
                          (lVar11,"qcom,thermal-mitigation",lVar10,
                           (long)((ulong)local_5c << 0x20) >> 0x22,0);
        if (-1 < iVar8) goto LAB_0011d320;
        _dev_err(*plVar20,"Couldn\'t read threm limits rc = %d\n",iVar8);
      }
      goto LAB_0011d904;
    }
LAB_0011d320:
    iVar8 = of_property_read_variable_u32_array(lVar11,"qcom,charger-temp-max",plVar20 + 0x23c,1,0);
    if (iVar8 < 0) {
      *(undefined4 *)(plVar20 + 0x23c) = 0xffffffea;
    }
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,smb-temp-max",(undefined4 *)((long)plVar20 + 0x11e4),1,0);
    if (iVar8 < 0) {
      *(undefined4 *)((long)plVar20 + 0x11e4) = 0xffffffea;
    }
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,float-option",(uint *)((long)plVar20 + 0x1334),1,0);
    if ((-1 < iVar8) && (4 < *(uint *)((long)plVar20 + 0x1334))) {
      puVar13 = "<3>qcom,float-option is out of range [0, 4]\n";
      goto LAB_0011d8fc;
    }
    lVar10 = of_find_property(lVar11,"qcom,hvdcp-disable",0);
    *(bool *)((long)plVar20 + 0x133d) = lVar10 != 0;
    *(bool *)(plVar20 + 0x239) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,hvdcp-autonomous-enable",0);
    *(bool *)((long)plVar20 + 0x133e) = lVar10 != 0;
    *(undefined4 *)((long)plVar20 + 0x1344) = 0xffffffea;
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,auto-recharge-soc",(long)plVar20 + 0x1344,1,0);
    if ((-1 < iVar8) && (100 < *(uint *)((long)plVar20 + 0x1344))) {
      puVar13 = "<3>qcom,auto-recharge-soc is incorrect\n";
      goto LAB_0011d8fc;
    }
    *(uint *)(plVar20 + 0x23a) = *(uint *)((long)plVar20 + 0x1344);
    lVar10 = of_find_property(lVar11,"qcom,suspend-input-on-debug-batt",0);
    *(bool *)((long)plVar20 + 0x11a1) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,fake-chg-status-on-debug-batt",0);
    *(bool *)((long)plVar20 + 0x11a2) = lVar10 != 0;
    iVar8 = of_property_read_variable_u32_array
                      (lVar11,"qcom,otg-deglitch-time-ms",(undefined4 *)((long)plVar20 + 0x2ac),1,0)
    ;
    if (iVar8 < 0) {
      *(undefined4 *)((long)plVar20 + 0x2ac) = 0x32;
    }
    lVar10 = of_find_property(lVar11,"qcom,fcc-stepping-enable",0);
    *(bool *)(plVar20 + 0x23f) = lVar10 != 0;
    if (*(char *)((long)plVar20 + 0x1235) != '\0') {
      lVar10 = of_find_property(lVar11,"qcom,uusb-moisture-protection-enable",0);
      *(bool *)((long)plVar20 + 0x1236) = lVar10 != 0;
    }
    lVar10 = of_find_property(lVar11,"qcom,hw-die-temp-mitigation",0);
    *(bool *)((long)plVar20 + 0x1237) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,hw-connector-mitigation",0);
    *(bool *)(plVar20 + 0x247) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,hw-skin-temp-mitigation",0);
    *(bool *)((long)plVar20 + 0x1239) = lVar10 != 0;
    lVar10 = of_find_property(lVar11,"qcom,en-skin-therm-mitigation",0);
    *(bool *)((long)plVar20 + 0x123a) = lVar10 != 0;
    *(undefined4 *)((long)plVar20 + 0x123c) = 0xffffffea;
    of_property_read_variable_u32_array
              (lVar11,"qcom,connector-internal-pull-kohm",(long)plVar20 + 0x123c,1,0);
    lVar10 = of_find_property(lVar11,"qcom,disable-suspend-on-collapse",0);
    *(bool *)(plVar20 + 0x251) = lVar10 != 0;
    *(undefined4 *)(plVar20 + 0x248) = 0xffffffea;
    of_property_read_variable_u32_array(lVar11,"qcom,smb-internal-pull-kohm",plVar20 + 0x248,1,0);
    lVar10 = of_find_property(lVar11,"qcom,adc-based-aicl",0);
    *(bool *)((long)plVar20 + 0x133f) = lVar10 != 0;
    of_property_read_variable_u32_array(lVar11,"qcom,fcc-step-delay-ms",plVar20 + 0x222,1,0);
    if ((int)plVar20[0x222] == 0) {
      *(undefined4 *)(plVar20 + 0x222) = 1000;
    }
    of_property_read_variable_u32_array
              (lVar11,"qcom,fcc-step-size-ua",(undefined4 *)((long)plVar20 + 0x1114),1,0);
    if (*(int *)((long)plVar20 + 0x1114) == 0) {
      *(undefined4 *)((long)plVar20 + 0x1114) = 100000;
    }
    lVar10 = of_find_property(lVar11,"qcom,hvdcp3-standalone-config",0);
    *(bool *)((long)plVar20 + 0x127d) = lVar10 != 0;
    of_property_read_variable_u32_array
              (lVar11,"qcom,hvdcp3-max-icl-ua",(undefined4 *)((long)plVar20 + 0x1124),1,0);
    if (*(int *)((long)plVar20 + 0x1124) == 0) {
      *(undefined4 *)((long)plVar20 + 0x1124) = 3000000;
    }
    of_property_read_variable_u32_array(lVar11,"qcom,hvdcp2-max-icl-ua",plVar20 + 0x224,1,0);
    if ((int)plVar20[0x224] == 0) {
      *(undefined4 *)(plVar20 + 0x224) = 3000000;
    }
    of_property_read_variable_u32_array(lVar11,"qcom,qc4-max-icl-ua",plVar20 + 0x225,1,0);
    if ((int)plVar20[0x225] == 0) {
      *(undefined4 *)(plVar20 + 0x225) = 4000000;
    }
    local_5c = 0;
    local_60[0] = '\0';
    lVar10 = of_get_next_available_child(lVar11,0);
    if (lVar10 != 0) {
      do {
        uVar18 = of_find_property(lVar10,"reg",0);
        lVar12 = of_prop_next_string(uVar18,0);
        if (lVar12 != 0) {
          do {
            iVar8 = of_property_read_variable_u32_array(lVar10,"reg",&local_5c,1,0);
            if (iVar8 < 0) {
              puVar13 = "<3>Failed to read base rc=%d\n";
LAB_0011d85c:
              _printk(puVar13,iVar8);
              goto LAB_0011d904;
            }
            iVar8 = smblib_read(plVar20,(local_5c & 0xffff) + 4,local_60);
            if (iVar8 < 0) {
              puVar13 = "<3>Failed to read type rc=%d\n";
              goto LAB_0011d85c;
            }
            if (local_60[0] == '.') {
              *(uint *)((long)plVar20 + 0x2b4) = local_5c;
            }
            lVar12 = of_prop_next_string(uVar18,lVar12);
          } while (lVar12 != 0);
        }
        lVar10 = of_get_next_available_child(lVar11,lVar10);
      } while (lVar10 != 0);
    }
    lVar11 = alarmtimer_get_rtcdev();
    if (lVar11 == 0) {
      iVar8 = -0x205;
      goto LAB_0011cc1c;
    }
    alarm_init(plVar20 + 0x1db,0,smblib_lpd_recheck_timer_cfi_jt);
    *(long **)(param_1 + 0xa8) = plVar20;
    plVar20[0x226] = (long)smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32_cfi_jt;
    plVar20[0x227] = (long)smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt;
    iVar8 = smblib_init(plVar20);
    if (-1 < iVar8) {
      iVar8 = smb5_extcon_init(plVar20);
      if (-1 < iVar8) {
        iVar8 = smb5_init_hw(plVar20);
        if (iVar8 < 0) {
          puVar13 = "<3>Couldn't initialize hardware rc=%d\n";
        }
        else if ((char)plVar20[0x57] == '\0') {
          iVar8 = smb5_init_vbus_regulator(plVar20);
          if (iVar8 < 0) {
            puVar13 = "<3>Couldn't initialize vbus regulator rc=%d\n";
          }
          else {
            iVar8 = smb5_init_vconn_regulator(plVar20);
            if (-1 < iVar8) goto LAB_0011d9a8;
            puVar13 = "<3>Couldn't initialize vconn regulator rc=%d\n";
          }
        }
        else {
LAB_0011d9a8:
          if ((*(uint *)((long)plVar20 + 0x111c) < 3) &&
             (iVar8 = smb5_init_dc_psy(plVar20), iVar8 < 0)) {
            puVar13 = "<3>Couldn't initialize dc psy rc=%d\n";
          }
          else {
            iVar8 = smb5_init_usb_psy(plVar20);
            if (iVar8 < 0) {
              puVar13 = "<3>Couldn't initialize usb psy rc=%d\n";
            }
            else {
              iVar8 = smb5_init_usb_port_psy(plVar20);
              if (iVar8 < 0) {
                puVar13 = "<3>Couldn't initialize usb pc_port psy rc=%d\n";
              }
              else {
                iVar8 = smb5_init_batt_psy(plVar20);
                if (iVar8 < 0) {
                  puVar13 = "<3>Couldn't initialize batt psy rc=%d\n";
                }
                else {
                  iVar8 = smb5_init_typec_class(plVar20);
                  if (iVar8 < 0) {
                    puVar13 = "<3>Couldn't initialize typec class rc=%d\n";
                  }
                  else {
                    device_init_wakeup(*plVar20,1);
                    iVar8 = smb5_determine_initial_status(plVar20);
                    if (iVar8 < 0) {
                      puVar13 = "<3>Couldn't determine initial status rc=%d\n";
                    }
                    else {
                      iVar8 = smb5_request_interrupts(plVar20);
                      if (-1 < iVar8) {
                        iVar8 = smb5_post_init(plVar20);
                        if (iVar8 < 0) {
                          puVar13 = "<3>Failed in post init rc=%d\n";
                        }
                        else {
                          smb5_create_debugfs(plVar20);
                          iVar8 = sysfs_create_groups(*plVar20,&smb5_groups);
                          if (iVar8 < 0) {
                            puVar13 = "<3>Couldn't create sysfs files rc=%d\n";
                          }
                          else {
                            iVar8 = smb5_show_charger_status(plVar20);
                            if (-1 < iVar8) {
                              _printk("<3>set smb5_rdy, wake up xm_smart_chg driver\n");
                              smb5_rdy = 1;
                              _printk("<3>QPNP SMB5 probed successfully\n");
                              goto LAB_0011cc1c;
                            }
                            puVar13 = "<3>Failed in getting charger status rc=%d\n";
                          }
                        }
                        _printk(puVar13,iVar8);
                        smb5_free_interrupts();
                        goto LAB_0011d830;
                      }
                      puVar13 = "<3>Couldn't request interrupts rc=%d\n";
                    }
                  }
                }
              }
            }
          }
        }
        _printk(puVar13,iVar8);
      }
LAB_0011d830:
      smblib_deinit(plVar20);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      goto LAB_0011cc1c;
    }
    puVar13 = "<3>Smblib_init failed rc=%d\n";
  }
LAB_0011d910:
  _printk(puVar13,iVar8);
LAB_0011cc1c:
  lVar11 = sp_el0;
  if (*(long *)(lVar11 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}



/* ---- smb5_remove.756213caaf8d6a53d7343e50496c5a32 @ 0011db2c ---- */

undefined8 smb5_remove_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  undefined8 *in_x18;
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  smblib_masked_write(puVar1,0x1362,8,8);
  lVar2 = 0x40;
  piVar3 = &DAT_00100d10;
  do {
    if ((0 < *piVar3) && ((char)piVar3[-0x16] != '\0')) {
      irq_set_irq_wake(*piVar3,0);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 0x1c;
  } while (lVar2 != 0);
  smblib_deinit(puVar1);
  sysfs_remove_groups(*puVar1,&smb5_groups);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if ((*(ulong *)(puVar1[0x83] + 0x498) != 0) &&
     (*(ulong *)(puVar1[0x83] + 0x498) < 0xfffffffffffff001)) {
    thermal_cooling_device_unregister();
  }
  return 0;
}



/* ---- smb5_shutdown.756213caaf8d6a53d7343e50496c5a32 @ 0011dbec ---- */

void smb5_shutdown_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  undefined8 *in_x18;
  long lVar1;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = -0x1c00;
  lVar1 = *(long *)(param_1 + 0xa8);
  do {
    if (0 < *(int *)(&smb5_usb_port_get_prop__rs + lVar2)) {
      disable_irq();
    }
    lVar2 = lVar2 + 0x70;
  } while (lVar2 != 0);
  smblib_masked_write(lVar1,0x1648,1,0);
  if (*(int *)(lVar1 + 0x119c) == 0) {
    smblib_masked_write(lVar1,0x1544,7,2);
  }
  smblib_apsd_enable(lVar1,1);
  smblib_hvdcp_exit_config(lVar1);
  return;
}



/* ---- smb5_direct_iio_read.756213caaf8d6a53d7343e50496c5a32 @ 0011dc94 ---- */

uint smb5_direct_iio_read_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  uint uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = smb5_iio_get_prop(*(undefined8 *)(param_1 + 0x98));
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ---- smb5_direct_iio_write.756213caaf8d6a53d7343e50496c5a32 @ 0011dcc0 ---- */

void smb5_direct_iio_write_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  smb5_iio_set_prop(*(undefined8 *)(param_1 + 0x98));
  return;
}



/* ---- smb5_init_hw @ 0011dce8 ---- */

int smb5_init_hw(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  undefined8 *in_x18;
  ulong uVar17;
  undefined8 unaff_x30;
  undefined2 local_44 [2];
  undefined2 local_40;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  local_44[0] = 0;
  if (*(char *)((long)param_1 + 0x133c) != '\0') {
    *(undefined4 *)((long)param_1 + 0x1184) = 0x32;
  }
  if (*(int *)((long)param_1 + 0x2b4) == 0) {
LAB_0011dd64:
    if (-1 < *(int *)((long)param_1 + 0x1354)) goto LAB_0011dd6c;
LAB_0011e704:
    smblib_get_charge_param(param_1,param_1 + 4,param_1 + 0x256);
    iVar6 = *(int *)(param_1 + 0x26b);
  }
  else {
    iVar6 = smblib_write(param_1,*(int *)((long)param_1 + 0x2b4) + 0x58,0);
    if (iVar6 < 0) {
      _printk("<3>Couldn't clear SDAM QC status rc=%d\n",iVar6);
    }
    iVar6 = smblib_batch_write(param_1,*(ushort *)((long)param_1 + 0x2b4) + 0x54,local_44,2);
    if (-1 < iVar6) goto LAB_0011dd64;
    _printk("<3>Couldn't clear SDAM ADC status rc=%d\n",iVar6);
    if (*(int *)((long)param_1 + 0x1354) < 0) goto LAB_0011e704;
LAB_0011dd6c:
    iVar6 = *(int *)(param_1 + 0x26b);
  }
  if (iVar6 < 0) {
    smblib_get_charge_param(param_1,param_1 + 9,(long)param_1 + 0x12b4);
  }
  smblib_get_charge_param(param_1,param_1 + 0xe,(long)param_1 + 0x11a4);
  smblib_get_charge_param(param_1,param_1 + 0x36,param_1 + 0x249);
  *(undefined4 *)((long)param_1 + 0x1244) = *(undefined4 *)(param_1 + 0x249);
  smblib_get_charge_param(param_1,param_1 + 0x3b,param_1 + 0x24a);
  *(undefined4 *)((long)param_1 + 0x124c) = *(undefined4 *)(param_1 + 0x24a);
  if ((*(int *)(param_1 + 0x23c) == -0x16) &&
     (iVar6 = smblib_get_thermal_threshold(param_1,0x16a0,param_1 + 0x23c), iVar6 < 0)) {
    uVar7 = *param_1;
    pcVar9 = "Couldn\'t get charger_temp_max rc=%d\n";
  }
  else if ((*(byte *)(param_1 + 0x252) >> 1 & 1) == 0) {
    cVar15 = *(char *)(param_1 + 0x247);
    if (*(char *)((long)param_1 + 0x1237) == '\0') {
      if (cVar15 != '\0') {
        uVar16 = 0;
        uVar12 = 0;
        cVar15 = '\x01';
        goto LAB_0011de60;
      }
      if (*(char *)((long)param_1 + 0x1239) != '\0') {
        cVar15 = '\0';
        uVar16 = 0;
        uVar12 = 0;
        goto LAB_0011de60;
      }
      uVar16 = 0x80;
LAB_0011dea0:
      iVar6 = smblib_masked_write(param_1,0x1670,0x9f,uVar16);
      if (-1 < iVar6) goto LAB_0011deb8;
      uVar7 = *param_1;
      pcVar9 = "Couldn\'t configure THERM_SRC reg rc=%d\n";
    }
    else {
      uVar12 = 4;
      uVar16 = 3;
LAB_0011de60:
      if (cVar15 != '\0') {
        uVar16 = uVar16 | 0x10;
        uVar12 = uVar12 | 0x10;
      }
      bVar5 = *(char *)((long)param_1 + 0x1239) != '\0';
      if (bVar5) {
        uVar12 = uVar12 | 2;
      }
      if (bVar5) {
        uVar16 = uVar16 | 4;
      }
      iVar6 = smblib_masked_write(param_1,0x1282,0x16,uVar12);
      if (-1 < iVar6) goto LAB_0011dea0;
      uVar7 = *param_1;
      pcVar9 = "Couldn\'t enable ADC channel rc=%d\n";
    }
    _dev_err(uVar7,pcVar9,iVar6);
    uVar7 = *param_1;
    pcVar9 = "Couldn\'t configure mitigation rc=%d\n";
  }
  else {
    iVar6 = smblib_write(param_1,0x1670,0x81);
    if (iVar6 < 0) {
      uVar7 = *param_1;
      pcVar9 = "Couldn\'t disable HW thermal regulation rc=%d\n";
      goto LAB_0011eb1c;
    }
LAB_0011deb8:
    smblib_hvdcp_hw_inov_enable(param_1,*(undefined1 *)((long)param_1 + 0x133e));
    if (*(char *)(param_1 + 0x57) != '\0') {
      smblib_hvdcp_detect_enable(param_1,1);
    }
    if (*(char *)(param_1 + 0x239) != '\0') {
      smblib_hvdcp_detect_enable(param_1,0);
    }
    local_40 = (ushort)local_40._1_1_ << 8;
    if (*(int *)((long)param_1 + 0x111c) == 3) {
      iVar6 = smblib_read(param_1,0x1573,&local_40);
      if (-1 < iVar6) {
        if ((local_40 & 1) == 0) goto LAB_0011df18;
LAB_0011e0b8:
        *(undefined4 *)((long)param_1 + 0x119c) = 1;
        *(undefined1 *)((long)param_1 + 0x11c6) = 1;
        *(undefined1 *)(param_1 + 0x57) = 1;
        iVar6 = smblib_masked_write(param_1,0x1560,0x20,0x20);
        if (iVar6 < 0) goto LAB_0011e4e4;
        if (*(char *)((long)param_1 + 0x1236) != '\0') {
          iVar6 = smblib_masked_write(param_1,0x1560,4,4);
          if (iVar6 < 0) {
            uVar7 = *param_1;
            pcVar9 = "Couldn\'t enable moisture detection interrupt rc=%d\n";
          }
          else {
            iVar6 = smblib_masked_write(param_1,0x1570,2,2);
            if (iVar6 < 0) {
              uVar7 = *param_1;
              pcVar9 = "Couldn\'t enable uUSB factory mode c=%d\n";
            }
            else {
              uVar14 = 0x1572;
              if (*(int *)((long)param_1 + 0x111c) != 3) {
                uVar14 = 0x1573;
              }
              iVar6 = smblib_write(param_1,uVar14,0);
              if (-1 < iVar6) goto LAB_0011e138;
              uVar7 = *param_1;
              pcVar9 = "Couldn\'t disable periodic monitoring of CC_ID rc=%d\n";
            }
          }
          goto LAB_0011eaf4;
        }
LAB_0011e138:
        if (*(char *)(param_1 + 0x239) == '\0') {
          smblib_hvdcp_detect_enable(param_1,1);
        }
LAB_0011e14c:
        if (*(int *)((long)param_1 + 0x111c) == 3) {
          schgm_flash_init(param_1);
          smblib_rerun_apsd_if_required(param_1);
        }
        iVar6 = smblib_icl_override(param_1,0);
        if (iVar6 < 0) {
          puVar8 = "<3>Couldn't disable ICL override rc=%d\n";
        }
        else {
          iVar6 = smblib_set_charge_param(param_1,param_1 + 0x1d,*(undefined4 *)(param_1 + 0x235));
          if (-1 < iVar6) {
            vote(param_1[0xa2],"DEFAULT_VOTER",*(undefined1 *)((long)param_1 + 0x133c),0);
            vote(param_1[0x9e],"DEFAULT_VOTER",*(undefined1 *)((long)param_1 + 0x133c),0);
            vote(param_1[0x9f],"HW_LIMIT_VOTER",0 < *(int *)((long)param_1 + 0x1354));
            vote(param_1[0xa1],"HW_LIMIT_VOTER",0 < *(int *)(param_1 + 0x26b));
            vote(param_1[0x9f],"BATT_PROFILE_VOTER",0 < *(int *)(param_1 + 0x256));
            vote(param_1[0xa1],"BATT_PROFILE_VOTER",0 < *(int *)((long)param_1 + 0x12b4));
            vote(param_1[0xa2],"HW_LIMIT_VOTER",0 < *(int *)((long)param_1 + 0x11cc));
            if (*(int *)((long)param_1 + 0x111c) == 3) {
LAB_0011e280:
              uVar12 = 0xffffff94;
              if (*(char *)(param_1 + 0x251) != '\0') {
                uVar12 = 0x14;
              }
              if (*(char *)((long)param_1 + 0x133f) != '\0') {
                uVar12 = uVar12 | 8;
              }
              iVar6 = smblib_masked_write(param_1,0x1380,0x9c,uVar12);
              if (iVar6 < 0) {
                uVar7 = *param_1;
                pcVar9 = "Couldn\'t config AICL rc=%d\n";
              }
              else {
                iVar6 = smblib_write(param_1,0x1661,1);
                if (iVar6 < 0) {
                  uVar7 = *param_1;
                  pcVar9 = "Couldn\'t configure AICL rerun interval rc=%d\n";
                }
                else {
                  iVar6 = vote(param_1[0xa5],"DEFAULT_VOTER",0,0);
                  if (iVar6 < 0) {
                    uVar7 = *param_1;
                    pcVar9 = "Couldn\'t enable charging rc=%d\n";
                  }
                  else {
                    iVar6 = smblib_masked_write(param_1,0x1153,2,0);
                    if (iVar6 < 0) {
                      uVar7 = *param_1;
                      pcVar9 = "Couldn\'t configure VBUS for SW control rc=%d\n";
                    }
                    else {
                      uVar16 = *(uint *)((long)param_1 + 0x134c);
                      uVar12 = uVar16 + 0xf;
                      if (-1 < (int)uVar16) {
                        uVar12 = uVar16;
                      }
                      uVar2 = 0xc;
                      if (0x1e < uVar16 + 0xf) {
                        uVar2 = (int)LZCOUNT((int)uVar12 >> 4) * -4 + 0xcU & 0xc;
                      }
                      iVar6 = smblib_masked_write(param_1,0x1653,0xff,
                                                  uVar2 | (uint)*(byte *)(param_1 + 0x26a) << 4 |
                                                  0xffffff83);
                      if ((iVar6 < 0) ||
                         (iVar6 = smblib_masked_write(param_1,0x1651,0xc2,0x42), iVar6 < 0)) {
                        puVar8 = "<3>Couldn't configue WD config rc=%d\n";
                        goto LAB_0011eb78;
                      }
                      if (*(int *)((long)param_1 + 0x135c) == 1) {
                        iVar6 = *(int *)((long)param_1 + 0x111c);
                        if (iVar6 == 0) {
                          iVar6 = smblib_masked_write(param_1,0x106c,1,1);
                          if (-1 < iVar6) {
                            iVar6 = *(int *)((long)param_1 + 0x111c);
                            goto LAB_0011e398;
                          }
                          uVar7 = *param_1;
                          pcVar9 = "Couldn\'t configure ADC_ITERM_CFG rc=%d\n";
LAB_0011eb68:
                          _dev_err(uVar7,pcVar9,iVar6);
                        }
                        else {
LAB_0011e398:
                          iVar1 = *(int *)(param_1 + 0x26c);
                          iVar13 = -5000;
                          if (iVar6 != 3) {
                            iVar13 = -10000;
                          }
                          uVar12 = 5000;
                          if (iVar6 != 3) {
                            uVar12 = 10000;
                          }
                          uVar17 = (ulong)uVar12;
                          uVar16 = local_3c >> 0x10;
                          local_3c = local_3c & 0xffff0000;
                          if ((((iVar13 <= iVar1) && (iVar1 <= (int)uVar12)) &&
                              (uVar2 = *(uint *)((long)param_1 + 0x1364), iVar13 <= (int)uVar2)) &&
                             ((int)uVar2 <= (int)uVar12)) {
                            if (iVar1 != 0) {
                              uVar12 = 0;
                              if (uVar17 != 0) {
                                uVar12 = (uint)(((long)iVar1 * 0x7fff) / (long)uVar17);
                              }
                              local_3c = CONCAT22((short)uVar16,
                                                  (ushort)(uVar12 >> 8) & 0xff |
                                                  (ushort)((uVar12 & 0xff00ff) << 8));
                              iVar6 = smblib_batch_write(param_1,0x1067,&local_3c,2);
                              if (iVar6 < 0) {
                                uVar7 = *param_1;
                                pcVar9 = "Couldn\'t configure ITERM threshold HIGH rc=%d\n";
                                goto LAB_0011eb68;
                              }
                              uVar2 = *(uint *)((long)param_1 + 0x1364);
                            }
                            if (uVar2 != 0) {
                              uVar12 = 0;
                              if (uVar17 != 0) {
                                uVar12 = (uint)((long)((-(ulong)(uVar2 >> 0x1f) & 0xffff800000000000
                                                       | (ulong)uVar2 << 0xf) - (long)(int)uVar2) /
                                               (long)uVar17);
                              }
                              local_40 = (ushort)(uVar12 >> 8) & 0xff |
                                         (ushort)((uVar12 & 0xff00ff) << 8);
                              iVar6 = smblib_batch_write(param_1,0x1069,&local_40,2);
                              if (iVar6 < 0) {
                                uVar7 = *param_1;
                                pcVar9 = "Couldn\'t configure ITERM threshold LOW rc=%d\n";
                                goto LAB_0011eb68;
                              }
                            }
                            goto LAB_0011e454;
                          }
                          _dev_err(*param_1,"ITERM threshold out of range rc=%d\n",0);
                          iVar6 = -0x16;
                        }
                        puVar8 = "<3>Couldn't configure ITERM thresholds rc=%d\n";
                        goto LAB_0011eb78;
                      }
LAB_0011e454:
                      uVar12 = *(int *)((long)param_1 + 0x1334) - 2;
                      uVar3 = (undefined1)(0x20401 >> (ulong)(uVar12 * 8 & 0x18));
                      if (2 < uVar12) {
                        uVar3 = 0;
                      }
                      *(undefined1 *)((long)param_1 + 0x11c4) = uVar3;
                      iVar6 = smblib_masked_write(param_1,0x1363,0x27);
                      if (iVar6 < 0) {
                        uVar7 = *param_1;
                        pcVar9 = "Couldn\'t change float charger setting rc=%d\n";
                        goto LAB_0011eb1c;
                      }
                      iVar6 = *(int *)(param_1 + 0x267);
                      if (iVar6 < 100) {
                        if (iVar6 == 0) {
                          uVar7 = 0x1051;
                          uVar10 = 1;
LAB_0011e52c:
                          uVar11 = 0;
                          goto LAB_0011e530;
                        }
                        if (iVar6 == 0x32) {
                          uVar7 = 0x1072;
                          uVar10 = 3;
                          goto LAB_0011e52c;
                        }
                      }
                      else {
                        if (iVar6 == 100) {
                          uVar7 = 0x1072;
                          uVar10 = 3;
                          uVar11 = 1;
                        }
                        else if (iVar6 == 200) {
                          uVar7 = 0x1072;
                          uVar10 = 3;
                          uVar11 = 2;
                        }
                        else {
                          if (iVar6 != 300) goto LAB_0011e53c;
                          uVar7 = 0x1072;
                          uVar10 = 3;
                          uVar11 = 3;
                        }
LAB_0011e530:
                        iVar6 = smblib_masked_write(param_1,uVar7,uVar10,uVar11);
                        if (iVar6 < 0) {
                          uVar7 = *param_1;
                          pcVar9 = "Couldn\'t configure charge inhibit threshold rc=%d\n";
                          goto LAB_0011eb1c;
                        }
                      }
LAB_0011e53c:
                      iVar6 = smblib_write(param_1,0x10a2,2);
                      if (iVar6 < 0) {
                        uVar7 = *param_1;
                        pcVar9 = "Couldn\'t set CHGR_FAST_CHARGE_SAFETY_TIMER_CFG_REG rc=%d\n";
                      }
                      else {
                        iVar6 = smblib_masked_write(param_1,0x1051,6,
                                                    (ulong)(*(int *)(param_1 + 0x269) != -0x16) << 2
                                                   );
                        if (iVar6 < 0) {
                          uVar7 = *param_1;
                          pcVar9 = "Couldn\'t configure VBAT-rechg CHG_CFG2_REG rc=%d\n";
                        }
                        else if (*(int *)(param_1 + 0x269) == -0x16) {
LAB_0011e5e8:
                          uVar14 = 4;
                          if (*(int *)((long)param_1 + 0x1344) != -0x16) {
                            uVar14 = 6;
                          }
                          iVar6 = smblib_masked_write(param_1,0x1051,6,uVar14);
                          if (iVar6 < 0) {
                            uVar7 = *param_1;
                            pcVar9 = "Couldn\'t configure SOC-rechg CHG_CFG2_REG rc=%d\n";
                          }
                          else {
                            if (*(int *)((long)param_1 + 0x1344) != -0x16) {
                              iVar6 = smblib_set_prop_rechg_soc_thresh(param_1);
                              if (iVar6 < 0) {
                                uVar7 = *param_1;
                                pcVar9 = "Couldn\'t configure CHG_RCHG_SOC_REG rc=%d\n";
                                goto LAB_0011eb1c;
                              }
                              iVar6 = smblib_masked_write(param_1,0x106b,0xc,0);
                              if (iVar6 < 0) goto LAB_0011e9c0;
                            }
                            iVar6 = smblib_disable_hw_jeita(param_1,1);
                            if (iVar6 < 0) {
                              uVar7 = *param_1;
                              pcVar9 = "Couldn\'t set hw jeita rc=%d\n";
                            }
                            else {
                              iVar6 = smblib_masked_write(param_1,0x11c4,0xc0,0xc0);
                              if (iVar6 < 0) {
                                uVar7 = *param_1;
                                pcVar9 = "Couldn\'t configure DCDC_ENG_SDCDC_CFG5 rc=%d\n";
                              }
                              else {
                                iVar13 = *(int *)((long)param_1 + 0x123c);
                                if (iVar13 < 0x1e) {
                                  if (iVar13 != -0x16) {
                                    if (iVar13 != 0) goto LAB_0011e6ac;
                                    uVar7 = 0;
                                    goto LAB_0011e75c;
                                  }
                                }
                                else {
                                  if (iVar13 == 400) {
                                    uVar7 = 0x30;
                                  }
                                  else if ((iVar13 == 100) || (iVar13 != 0x1e)) {
LAB_0011e6ac:
                                    uVar7 = 0x20;
                                  }
                                  else {
                                    uVar7 = 0x10;
                                  }
LAB_0011e75c:
                                  iVar6 = smblib_masked_write(param_1,0x1286,0x30,uVar7);
                                  if (iVar6 < 0) {
                                    _dev_err(*param_1,"Couldn\'t configure ADC pull-up reg rc=%d\n",
                                             iVar6);
                                    uVar7 = *param_1;
                                    pcVar9 = "Couldn\'t configure CONN_THERM pull-up rc=%d\n";
                                    goto LAB_0011eb1c;
                                  }
                                }
                                iVar13 = *(int *)(param_1 + 0x248);
                                if (iVar13 < 0x1e) {
                                  if (iVar13 == -0x16) goto LAB_0011eb24;
                                  if (iVar13 != 0) goto LAB_0011e7b4;
                                  uVar7 = 0;
                                }
                                else if (iVar13 == 400) {
                                  uVar7 = 0xc0;
                                }
                                else if ((iVar13 == 100) || (iVar13 != 0x1e)) {
LAB_0011e7b4:
                                  uVar7 = 0x80;
                                }
                                else {
                                  uVar7 = 0x40;
                                }
                                iVar6 = smblib_masked_write(param_1,0x1286,0xc0,uVar7);
                                if (-1 < iVar6) goto LAB_0011eb24;
                                _dev_err(*param_1,"Couldn\'t configure ADC pull-up reg rc=%d\n",
                                         iVar6);
                                uVar7 = *param_1;
                                pcVar9 = "Couldn\'t configure SMB pull-up rc=%d\n";
                              }
                            }
                          }
                        }
                        else {
                          uVar12 = (uint)((ulong)((long)*(int *)(param_1 + 0x269) * 1000000) /
                                         0x2f84d);
                          local_3c = ((uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8) &
                                     0xffff;
                          iVar6 = smblib_batch_write(param_1,0x107e,&local_3c,2);
                          if (iVar6 < 0) {
                            uVar7 = *param_1;
                            pcVar9 = "Couldn\'t configure ADC_RECHARGE_THRESHOLD REG rc=%d\n";
                          }
                          else {
                            iVar6 = smblib_masked_write(param_1,0x106b,0xc,8);
                            if (-1 < iVar6) goto LAB_0011e5e8;
LAB_0011e9c0:
                            uVar7 = *param_1;
                            pcVar9 = "Couldn\'t configure CHGR_NO_SAMPLE_FOR_TERM_RCHG_CFG rc=%d\n";
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              iVar6 = smblib_set_charge_param(param_1,param_1 + 0x22,100000);
              if (iVar6 < 0) {
                uVar7 = *param_1;
                pcVar9 = "Couldn\'t set dc_icl rc=%d\n";
              }
              else {
                iVar6 = smblib_masked_write(param_1,0x1465,0x20,0);
                if (-1 < iVar6) goto LAB_0011e280;
                uVar7 = *param_1;
                pcVar9 = "Couldn\'t disable DC Input missing poller rc=%d\n";
              }
            }
            goto LAB_0011eb1c;
          }
          puVar8 = "<3>Couldn't set otg current limit rc=%d\n";
        }
LAB_0011eb78:
        _printk(puVar8,iVar6);
        goto LAB_0011eb24;
      }
      uVar7 = *param_1;
      pcVar9 = "Couldn\'t read USB mode rc=%d\n";
    }
    else {
LAB_0011df18:
      iVar6 = smblib_read(param_1,0x1570,&local_40);
      if (iVar6 < 0) {
        uVar7 = *param_1;
        pcVar9 = "Couldn\'t read U_USB config rc=%d\n";
      }
      else {
        if ((local_40 & 1) != 0) goto LAB_0011e0b8;
        *(undefined4 *)((long)param_1 + 0x119c) = 0;
        local_3c = local_3c & 0xffffff00;
        iVar6 = smblib_read(param_1,0x150d,&local_3c);
        if (iVar6 < 0) {
          uVar7 = *param_1;
          pcVar9 = "Couldn\'t read Legacy status rc=%d\n";
        }
        else if (((byte)local_3c >> 1 & 1) == 0) {
LAB_0011df88:
          smblib_apsd_enable(param_1,1);
          iVar6 = smblib_read(param_1,0x1506,&local_3c);
          if (iVar6 < 0) {
            uVar7 = *param_1;
            pcVar9 = "failed to read TYPE_C_SNK_STATUS_REG rc=%d\n";
          }
          else if (((local_3c & 0x70) == 0) &&
                  (iVar6 = smblib_masked_write(param_1,0x1358,0x80,0), iVar6 < 0)) {
            uVar7 = *param_1;
            pcVar9 = "failed to write TYPE_C_CFG_REG rc=%d\n";
          }
          else {
            iVar6 = smblib_write(param_1,0x155e,0);
            if (-1 < iVar6) {
              local_3c = CONCAT31(local_3c._1_3_,(*(char *)(param_1 + 0x23e) == '\0') << 2);
              iVar6 = smblib_write(param_1,0x1560,
                                   (uint)(*(char *)(param_1 + 0x23e) == '\0') << 2 | 0x40);
              if (-1 < iVar6) {
                iVar6 = smblib_masked_write(param_1,0x1544,0x12,0x10);
                if (iVar6 < 0) {
                  uVar7 = *param_1;
                  pcVar9 = "Couldn\'t configure TYPE_C_MODE_CFG_REG rc=%d\n";
                }
                else {
                  *(byte *)(param_1 + 0x23d) = *(byte *)(param_1 + 0x23d) | 0x10;
                  if ((*(char *)(param_1 + 0x57) == '\0') &&
                     (iVar6 = smblib_masked_write(param_1,0x1546,3,1), iVar6 < 0)) {
                    uVar7 = *param_1;
                    pcVar9 = "Couldn\'t configure VCONN for SW control rc=%d\n";
                  }
                  else if (*(int *)((long)param_1 + 0x111c) == 3) {
LAB_0011e08c:
                    iVar6 = smblib_masked_write(param_1,0x1550,4,4);
                    if (-1 < iVar6) goto LAB_0011e14c;
                    uVar7 = *param_1;
                    pcVar9 = "Couldn\'t configure CC threshold voltage rc=%d\n";
                  }
                  else {
                    iVar6 = smblib_masked_write(param_1,0x154c,1,1);
                    if (iVar6 < 0) {
                      uVar7 = *param_1;
                      pcVar9 = "Couldn\'t configure TYPE_C_DEBUG_ACCESS_SRC_CFG_REG rc=%d\n";
                    }
                    else {
                      iVar6 = smblib_masked_write(param_1,0x1365,0xf,0);
                      if (-1 < iVar6) goto LAB_0011e08c;
                      uVar7 = *param_1;
                      pcVar9 = "Couldn\'t set USBIN_LOAD_CFG_REG rc=%d\n";
                    }
                  }
                }
                goto LAB_0011eaf4;
              }
            }
LAB_0011e4e4:
            uVar7 = *param_1;
            pcVar9 = "Couldn\'t configure Type-C interrupts rc=%d\n";
          }
        }
        else {
          iVar6 = smblib_set_prop_typec_power_role(param_1,0);
          if (iVar6 < 0) {
            uVar7 = *param_1;
            pcVar9 = "Couldn\'t disable TYPEC rc=%d\n";
          }
          else {
            msleep(300);
            iVar6 = smblib_set_prop_typec_power_role(param_1,1);
            if (-1 < iVar6) {
              msleep(100);
              goto LAB_0011df88;
            }
            uVar7 = *param_1;
            pcVar9 = "Couldn\'t enable TYPEC rc=%d\n";
          }
        }
LAB_0011eaf4:
        _dev_err(uVar7,pcVar9,iVar6);
        uVar7 = *param_1;
        pcVar9 = "Couldn\'t configure TypeC/micro-USB mode rc=%d\n";
      }
    }
    _dev_err(uVar7,pcVar9,iVar6);
    uVar7 = *param_1;
    pcVar9 = "Couldn\'t configure connector type rc=%d\n";
  }
LAB_0011eb1c:
  _dev_err(uVar7,pcVar9,iVar6);
LAB_0011eb24:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* ---- smb5_init_vbus_regulator @ 0011eb88 ---- */

ulong smb5_init_vbus_regulator(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  ulong uVar4;
  undefined8 unaff_x30;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_50 = 0;
  lVar1 = devm_kmalloc(*param_1,0x140,0xdc0);
  param_1[0x8d] = lVar1;
  if (lVar1 == 0) {
    uVar4 = 0xfffffff4;
  }
  else {
    local_58 = *param_1;
    *(undefined8 *)(lVar1 + 8) = "qcom,smb5-vbus";
    *(undefined1 **)(lVar1 + 0x58) = &__this_module;
    *(undefined4 *)(lVar1 + 0x54) = 0;
    *(char **)(lVar1 + 0x18) = "qcom,smb5-vbus";
    *(undefined1 **)(lVar1 + 0x48) = &smb5_vbus_reg_ops;
    local_48 = param_1;
    uVar2 = devm_regulator_register(local_58,(undefined8 *)(lVar1 + 8),&local_58);
    *(undefined8 *)param_1[0x8d] = uVar2;
    uVar4 = 0;
    uVar3 = *(ulong *)param_1[0x8d];
    if (0xfffffffffffff000 < uVar3) {
      uVar4 = uVar3 & 0xffffffff;
      *(ulong *)param_1[0x8d] = 0;
      if ((int)uVar3 != -0x205) {
        _printk("<3>Couldn't register VBUS regulator rc=%d\n",uVar4);
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* ---- smb5_init_vconn_regulator @ 0011ec90 ---- */

ulong smb5_init_vconn_regulator(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  ulong uVar4;
  undefined8 unaff_x30;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_50 = 0;
  if (*(int *)((long)param_1 + 0x119c) == 1) {
    uVar4 = 0;
  }
  else {
    lVar1 = devm_kmalloc(*param_1,0x140,0xdc0);
    param_1[0x8e] = lVar1;
    if (lVar1 == 0) {
      uVar4 = 0xfffffff4;
    }
    else {
      local_58 = *param_1;
      *(undefined8 *)(lVar1 + 8) = "qcom,smb5-vconn";
      *(undefined1 **)(lVar1 + 0x58) = &__this_module;
      *(undefined4 *)(lVar1 + 0x54) = 0;
      *(char **)(lVar1 + 0x18) = "qcom,smb5-vconn";
      *(undefined1 **)(lVar1 + 0x48) = &smb5_vconn_reg_ops;
      local_48 = param_1;
      uVar2 = devm_regulator_register(local_58,(undefined8 *)(lVar1 + 8),&local_58);
      *(undefined8 *)param_1[0x8e] = uVar2;
      uVar4 = 0;
      uVar3 = *(ulong *)param_1[0x8e];
      if (0xfffffffffffff000 < uVar3) {
        uVar4 = uVar3 & 0xffffffff;
        *(ulong *)param_1[0x8e] = 0;
        if ((int)uVar3 != -0x205) {
          _printk("<3>Couldn't register VCONN regulator rc=%d\n",uVar4);
        }
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* ---- smb5_init_dc_psy @ 0011edac ---- */

void smb5_init_dc_psy(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_60 = *(undefined8 *)(*param_1 + 0x2f0);
  plStack_50 = param_1;
  uVar3 = devm_power_supply_register(*param_1,&dc_psy_desc,&local_60);
  param_1[0x85] = uVar3;
  if (uVar3 < 0xfffffffffffff001) {
    uVar2 = 0;
  }
  else {
    _printk("<3>Couldn't register USB power supply\n");
    uVar2 = (undefined4)param_1[0x85];
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- smb5_init_usb_psy @ 0011ee50 ---- */

void smb5_init_usb_psy(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_60 = *(undefined8 *)(*param_1 + 0x2f0);
  plStack_50 = param_1;
  uVar3 = devm_power_supply_register(*param_1,&usb_psy_desc,&local_60);
  param_1[0x84] = uVar3;
  if (uVar3 < 0xfffffffffffff001) {
    uVar2 = 0;
  }
  else {
    _printk("<3>Couldn't register USB power supply\n");
    uVar2 = (undefined4)param_1[0x84];
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- smb5_init_usb_port_psy @ 0011eef4 ---- */

void smb5_init_usb_port_psy(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_60 = *(undefined8 *)(*param_1 + 0x2f0);
  plStack_50 = param_1;
  uVar3 = devm_power_supply_register(*param_1,&usb_port_psy_desc,&local_60);
  param_1[0x86] = uVar3;
  if (uVar3 < 0xfffffffffffff001) {
    uVar2 = 0;
  }
  else {
    _printk("<3>Couldn't register USB pc_port power supply\n");
    uVar2 = (undefined4)param_1[0x86];
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- smb5_init_batt_psy @ 0011ef98 ---- */

void smb5_init_batt_psy(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_60 = *(undefined8 *)(*param_1 + 0x2f0);
  plStack_50 = param_1;
  puVar3 = (undefined8 *)devm_power_supply_register(*param_1,&batt_psy_desc,&local_60);
  param_1[0x83] = (long)puVar3;
  if (puVar3 < (undefined8 *)0xfffffffffffff001) {
    puVar5 = (undefined8 *)*puVar3;
    if (puVar5[5] != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(puVar5[4] + uVar6 * 4) == 0x21) {
          if (puVar3[0x13] == 0) {
            uVar4 = thermal_cooling_device_register(*puVar5,puVar3,&psy_tcd_ops);
          }
          else {
            uVar4 = thermal_of_cooling_device_register
                              (*(undefined8 *)(puVar3[0x13] + 0x2f0),*puVar5,puVar3,&psy_tcd_ops);
          }
          uVar2 = 0;
          puVar3[0x93] = uVar4;
          goto LAB_0011f074;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)puVar5[5]);
    }
    uVar2 = 0;
  }
  else {
    _printk("<3>Couldn't register battery power supply\n");
    uVar2 = (undefined4)param_1[0x83];
  }
LAB_0011f074:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- smb5_init_typec_class @ 0011f0b8 ---- */

ulong smb5_init_typec_class(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  __mutex_init(param_1 + 0x7d,"&chg->typec_lock",&smb5_request_interrupt___key);
  if (*(char *)(param_1 + 0x57) == '\0') {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x4dc) = 0;
    param_1[0x91] = 0x200000002;
    *(undefined2 *)(param_1 + 0x92) = 0x130;
    *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) & 0xfe;
    uVar1 = typec_register_port(*param_1,param_1 + 0x91);
    uVar2 = 0;
    param_1[0x90] = uVar1;
    if (0xfffffffffffff000 < uVar1) {
      _printk("<3>failed to register typec_port rc=%d\n",uVar1 & 0xffffffff);
      uVar2 = uVar1 & 0xffffffff;
    }
  }
  return uVar2;
}



/* ---- smb5_determine_initial_status @ 0011f160 ---- */

int smb5_determine_initial_status(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_88;
  long lStack_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "determine-initial-status";
  uStack_70 = 0;
  local_88 = 0;
  lStack_80 = param_1;
  iVar2 = smblib_get_prop_usb_present(param_1,&local_88);
  if (iVar2 < 0) {
    _printk("<3>Couldn't get usb present rc=%d\n",iVar2);
  }
  else {
    *(bool *)(param_1 + 0x115f) = (int)local_88 != 0;
    if (*(long *)(param_1 + 0x260) != 0) {
      smblib_config_charger_on_debug_battery(param_1);
    }
    smb5_usb_plugin_irq_handler(0,&lStack_80);
    smb5_dc_plugin_irq_handler(0,&lStack_80);
    smb5_typec_attach_detach_irq_handler(0,&lStack_80);
    smb5_typec_state_change_irq_handler(0,&lStack_80);
    smb5_usb_source_change_irq_handler(0,&lStack_80);
    smb5_chg_state_change_irq_handler(0,&lStack_80);
    smb5_icl_change_irq_handler(0,&lStack_80);
    smb5_batt_temp_changed_irq_handler(0,&lStack_80);
    smb5_wdog_bark_irq_handler(0,&lStack_80);
    smb5_typec_or_rid_detection_change_irq_handler(0,&lStack_80);
    smb5_wdog_snarl_irq_handler(0,&lStack_80);
    iVar2 = 0;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smb5_request_interrupts @ 0011f2ac ---- */

ulong smb5_request_interrupts(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  char *__s2;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *in_x18;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar14 = *(undefined8 *)(*param_1 + 0x2f0);
  lVar9 = of_get_next_available_child(uVar14,0);
  if (lVar9 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      uVar10 = of_find_property(lVar9,"interrupt-names",0);
      __s2 = (char *)of_prop_next_string(uVar10,0);
      if (__s2 != (char *)0x0) {
        do {
          uVar6 = of_irq_get_byname(lVar9,__s2);
          uVar16 = (ulong)uVar6;
          if ((int)uVar6 < 0) {
            puVar12 = "<3>Couldn't get irq %s byname\n";
LAB_0011f46c:
            _printk(puVar12,__s2);
            return uVar16;
          }
          uVar17 = 0;
          puVar15 = &DAT_00100d08;
          while (iVar7 = strcmp((char *)puVar15[-0xc],__s2), iVar7 != 0) {
            uVar17 = uVar17 + 1;
            puVar15 = puVar15 + 0xe;
            if (uVar17 == 0x40) {
              uVar16 = 0xfffffffe;
              goto LAB_0011f468;
            }
          }
          if ((int)(uint)uVar17 < 0) {
            uVar16 = uVar17 & 0xffffffff;
LAB_0011f468:
            puVar12 = "<3>%s is not a defined irq\n";
            goto LAB_0011f46c;
          }
          if (0x3f < (uint)uVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x11f510);
            (*pcVar5)();
          }
          if (puVar15[-0xb] == 0) {
            uVar17 = 0;
          }
          else {
            plVar11 = (long *)devm_kmalloc(*param_1,0x58,0xdc0);
            if (plVar11 == (long *)0x0) {
              return 0xfffffff4;
            }
            lVar1 = puVar15[-4];
            lVar3 = puVar15[-3];
            lVar2 = puVar15[-2];
            lVar4 = puVar15[-1];
            *plVar11 = (long)param_1;
            plVar11[8] = lVar3;
            plVar11[9] = lVar2;
            lVar13 = puVar15[-5];
            plVar11[10] = lVar4;
            lVar2 = puVar15[-7];
            lVar3 = puVar15[-6];
            plVar11[6] = lVar13;
            plVar11[7] = lVar1;
            lVar1 = puVar15[-9];
            lVar4 = puVar15[-8];
            plVar11[1] = (long)__s2;
            plVar11[2] = lVar1;
            plVar11[3] = lVar4;
            plVar11[4] = lVar2;
            plVar11[5] = lVar3;
            __mutex_init(plVar11 + 5,"&irq_data->storm_data.storm_lock",
                         &smb5_request_interrupt___key);
            *(undefined1 *)((long)puVar15 + 0xc) = 1;
            uVar8 = devm_request_threaded_irq(*param_1,uVar16,0,puVar15[-0xb],0x2000,__s2,plVar11);
            uVar17 = (ulong)uVar8;
            if ((int)uVar8 < 0) {
              _printk("<3>Couldn't request irq %d\n",uVar16);
              return uVar17;
            }
            *(uint *)(puVar15 + 1) = uVar6;
            *puVar15 = plVar11;
            if (*(char *)(puVar15 + -10) != '\0') {
              irq_set_irq_wake(uVar16,1);
            }
          }
          __s2 = (char *)of_prop_next_string(uVar10,__s2);
        } while (__s2 != (char *)0x0);
      }
      lVar9 = of_get_next_available_child(uVar14,lVar9);
    } while (lVar9 != 0);
  }
  vote(param_1[0xab],"CHARGER_TYPE_VOTER",1,0);
  vote(param_1[0xac],"CHARGER_TYPE_VOTER",1,0);
  return uVar17;
}



/* ---- smb5_post_init @ 0011f510 ---- */

int smb5_post_init(undefined8 *param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  rerun_election(param_1[0xa2]);
  iVar1 = smblib_set_prop_typec_power_role(param_1,1);
  if (iVar1 < 0) {
    _dev_err(*param_1,"Couldn\'t configure DRP role rc=%d\n",iVar1);
  }
  else {
    rerun_election(param_1[0xad]);
    iVar1 = 0;
  }
  return iVar1;
}



/* ---- smb5_create_debugfs @ 0011f580 ---- */

void smb5_create_debugfs(long param_1)

{
  ulong uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = debugfs_create_dir("charger",0);
  *(ulong *)(param_1 + 0x1328) = uVar1;
  if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
    _printk("<3>Couldn't create charger debugfs rc=%ld\n",uVar1);
  }
  else {
    uVar1 = debugfs_create_file("force_batt_psy_update",0x180,uVar1,param_1,
                                &force_batt_psy_update_ops);
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
      _printk("<3>Couldn't create force_batt_psy_update file rc=%ld\n");
    }
    uVar1 = debugfs_create_file("force_usb_psy_update",0x180,*(undefined8 *)(param_1 + 0x1328),
                                param_1,&force_usb_psy_update_ops);
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
      _printk("<3>Couldn't create force_usb_psy_update file rc=%ld\n");
    }
    uVar1 = debugfs_create_file("force_dc_psy_update",0x180,*(undefined8 *)(param_1 + 0x1328),
                                param_1,&force_dc_psy_update_ops);
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
      _printk("<3>Couldn't create force_dc_psy_update file rc=%ld\n");
    }
    debugfs_create_u32("debug_mask",0x180,*(undefined8 *)(param_1 + 0x1328),&__debug_mask);
  }
  return;
}



/* ---- smb5_show_charger_status @ 0011f6bc ---- */

int smb5_show_charger_status(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *in_x18;
  undefined4 uVar6;
  undefined8 unaff_x30;
  ulong local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  local_50 = 0;
  iVar4 = smblib_get_prop_usb_present(param_1,&local_50);
  uVar2 = local_50;
  if (iVar4 < 0) {
    puVar5 = "<3>Couldn't get usb present rc=%d\n";
  }
  else {
    iVar4 = smblib_get_prop_batt_present(param_1,&local_50);
    uVar3 = local_50;
    if (iVar4 < 0) {
      puVar5 = "<3>Couldn't get batt present rc=%d\n";
    }
    else {
      iVar4 = smblib_get_prop_batt_health(param_1,&local_50);
      if (iVar4 < 0) {
        _printk("<3>Couldn't get batt health rc=%d\n",iVar4);
        local_50 = local_50 & 0xffffffff00000000;
        uVar6 = 0;
      }
      else {
        uVar6 = (undefined4)local_50;
      }
      iVar4 = smblib_get_prop_batt_charge_type(param_1,&local_50);
      if (-1 < iVar4) {
        _printk("<6>SMB5 status - usb:present=%d type=%d batt:present = %d health = %d charge = %d\n",uVar2 & 0xffffffff,*(undefined4 *)(param_1 + 0x128c),
                uVar3 & 0xffffffff,uVar6,local_50 & 0xffffffff);
        goto LAB_0011f788;
      }
      puVar5 = "<3>Couldn't get batt charge type rc=%d\n";
    }
  }
  _printk(puVar5,iVar4);
LAB_0011f788:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- smb5_free_interrupts @ 0011f7e8 ---- */

void smb5_free_interrupts(void)

{
  undefined8 *in_x18;
  long lVar1;
  int *piVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = 0x40;
  piVar2 = &DAT_00100d10;
  do {
    if ((0 < *piVar2) && ((char)piVar2[-0x16] != '\0')) {
      irq_set_irq_wake(*piVar2,0);
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 0x1c;
  } while (lVar1 != 0);
  return;
}



/* ---- smb5_read_raw.756213caaf8d6a53d7343e50496c5a32 @ 0011f84c ---- */

void smb5_read_raw_756213caaf8d6a53d7343e50496c5a32(long param_1,long param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  smb5_iio_get_prop(*(undefined8 *)(param_1 + 0x440),*(undefined4 *)(param_2 + 4));
  return;
}



/* ---- smb5_write_raw.756213caaf8d6a53d7343e50496c5a32 @ 0011f878 ---- */

void smb5_write_raw_756213caaf8d6a53d7343e50496c5a32(long param_1,long param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  smb5_iio_set_prop(*(undefined8 *)(param_1 + 0x440),*(undefined4 *)(param_2 + 4));
  return;
}



/* ---- smb5_of_xlate.756213caaf8d6a53d7343e50496c5a32 @ 0011f8a4 ---- */

int smb5_of_xlate_756213caaf8d6a53d7343e50496c5a32(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x440) + 0x1368);
  if (iVar1 != 0) {
    iVar2 = 0;
    piVar3 = (int *)(*(long *)(*(long *)(param_1 + 0x440) + 0x1378) + 4);
    do {
      if (*piVar3 == *(int *)(param_2 + 0xc)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x26;
    } while (iVar1 != iVar2);
  }
  return -0x16;
}



/* ---- smb5_dc_get_prop.756213caaf8d6a53d7343e50496c5a32 @ 0011f8ec ---- */

uint smb5_dc_get_prop_756213caaf8d6a53d7343e50496c5a32
               (undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = power_supply_get_drvdata();
  uVar4 = 0xffffffea;
  switch(param_2) {
  case 3:
    iVar1 = smblib_get_prop_dc_present(lVar3,param_3);
    break;
  case 4:
    iVar1 = smblib_get_prop_dc_online(lVar3,param_3);
    break;
  default:
    goto code_r0x0011f990;
  case 8:
    iVar1 = smblib_get_prop_dc_voltage_max(lVar3,param_3);
    break;
  case 0xc:
    iVar1 = smblib_get_prop_dc_voltage_now(lVar3,param_3);
    break;
  case 0x10:
    iVar1 = smblib_get_charge_param(lVar3,lVar3 + 0x110,param_3);
    break;
  case 0x25:
    uVar2 = get_effective_result(*(undefined8 *)(lVar3 + 0x4f0));
    uVar4 = 0;
    *param_3 = uVar2;
    goto code_r0x0011f990;
  }
  uVar4 = iVar1 >> 0x1f & 0xffffffc3;
code_r0x0011f990:
  return uVar4;
}



/* ---- smb5_dc_set_prop.756213caaf8d6a53d7343e50496c5a32 @ 0011f9c0 ---- */

undefined8
smb5_dc_set_prop_756213caaf8d6a53d7343e50496c5a32(undefined8 param_1,int param_2,int *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = power_supply_get_drvdata();
  if (param_2 != 0x10) {
    if (param_2 != 0x25) {
      return 0xffffffea;
    }
    vote(*(undefined8 *)(lVar1 + 0x4f0),"WBC_VOTER",*param_3 != 0,0);
  }
  uVar2 = smblib_set_prop_dc_current_max(lVar1,param_3);
  return uVar2;
}



/* ---- smb5_dc_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32 @ 0011fa44 ---- */

bool smb5_dc_prop_is_writeable_756213caaf8d6a53d7343e50496c5a32(undefined8 param_1,int param_2)

{
  return param_2 == 0x25 || param_2 == 0x10;
}



/* ---- smb5_usb_get_prop.756213caaf8d6a53d7343e50496c5a32 @ 0011fa64 ---- */

/* WARNING: Type propagation algorithm not settling */

undefined8
smb5_usb_get_prop_756213caaf8d6a53d7343e50496c5a32
          (undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = power_supply_get_drvdata();
  *param_3 = 0;
  switch(param_2) {
  case 3:
    iVar2 = smblib_get_prop_usb_present(lVar3,param_3);
    break;
  case 4:
    iVar2 = smblib_get_usb_online(lVar3,param_3);
    break;
  default:
    _printk("<3>get prop %d is not supported in usb\n",param_2);
    goto LAB_0011fbac;
  case 8:
    iVar2 = smblib_get_prop_usb_voltage_max(lVar3,param_3);
    break;
  case 10:
    iVar2 = smblib_get_prop_usb_voltage_max_design(lVar3,param_3);
    break;
  case 0xc:
    iVar2 = smblib_get_prop_usb_voltage_now(lVar3,param_3);
    break;
  case 0x10:
    iVar2 = smblib_get_prop_input_current_max(lVar3,param_3);
    break;
  case 0x11:
    iVar2 = smblib_get_prop_usb_current_now(lVar3,param_3);
    break;
  case 0x14:
    if (*(int *)(lVar3 + 0x128c) == 0xf) {
      uVar1 = *(undefined4 *)(lVar3 + 0x1284);
      goto LAB_0011fb74;
    }
    goto LAB_0011fbac;
  case 0x25:
    uVar1 = get_client_vote(*(undefined8 *)(lVar3 + 0x510),"USB_PSY_VOTER");
    goto LAB_0011fb74;
  case 0x3f:
    uVar1 = 9;
LAB_0011fb74:
    *param_3 = uVar1;
    return 0;
  case 0x41:
    iVar2 = smblib_get_prop_scope(lVar3,param_3);
    break;
  case 0x44:
    *param_3 = *(undefined4 *)(lVar3 + 0x1158);
    _printk(&_str_167_llvm_4030877801262576756,"smblib_get_prop_pd_active");
    return 0;
  }
  if (iVar2 < 0) {
LAB_0011fbac:
    uVar4 = 0xffffffc3;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* ---- smb5_usb_set_prop.756213caaf8d6a53d7343e50496c5a32 @ 0011fbec ---- */

undefined4
smb5_usb_set_prop_756213caaf8d6a53d7343e50496c5a32
          (undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = power_supply_get_drvdata();
  if (param_2 == 0x44) {
    uVar1 = smblib_set_prop_pd_active(lVar2,*param_3);
  }
  else if (param_2 == 0x25) {
    uVar1 = 0;
  }
  else if (param_2 == 0x14) {
    uVar1 = 0;
    *(undefined4 *)(lVar2 + 0x1284) = *param_3;
  }
  else {
    _printk("<3>Set prop %d is not supported in usb psy\n",param_2);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ---- smb5_usb_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32 @ 0011fc78 ---- */

undefined8
smb5_usb_prop_is_writeable_756213caaf8d6a53d7343e50496c5a32(undefined8 param_1,int param_2)

{
  if ((param_2 - 0x14U < 0x31) &&
     ((1L << ((ulong)(param_2 - 0x14U) & 0x3f) & 0x1000000020001U) != 0)) {
    return 1;
  }
  return 0;
}



/* ---- smb5_usb_port_get_prop.756213caaf8d6a53d7343e50496c5a32 @ 0011fcbc ---- */

uint smb5_usb_port_get_prop_756213caaf8d6a53d7343e50496c5a32
               (undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = power_supply_get_drvdata();
  if (param_2 < 0x10) {
    if (param_2 == 4) {
      iVar1 = smblib_get_prop_usb_online(lVar2,param_3);
      if (*param_3 != 0) {
        if (((*(int *)(lVar2 + 0x11b4) == 6) || (*(int *)(lVar2 + 0x119c) == 1)) &&
           (*(int *)(lVar2 + 0x128c) == 4)) {
          *param_3 = 1;
        }
        else {
          *param_3 = 0;
        }
      }
LAB_0011fda4:
      return iVar1 >> 0x1f & 0xffffffc3;
    }
    if (param_2 != 8) {
LAB_0011fd80:
      iVar1 = ___ratelimit(&smb5_usb_port_get_prop__rs,"smb5_usb_port_get_prop");
      if (iVar1 == 0) {
        return 0xffffffea;
      }
      _printk("<3>Get prop %d is not supported in pc_port\n",param_2);
      return 0xffffffea;
    }
    iVar1 = 5000000;
  }
  else {
    if (param_2 == 0x10) {
      iVar1 = smblib_get_charge_param(lVar2,lVar2 + 0xc0,param_3);
      goto LAB_0011fda4;
    }
    if (param_2 != 0x3f) goto LAB_0011fd80;
    iVar1 = 4;
  }
  *param_3 = iVar1;
  return 0;
}



/* ---- smb5_usb_port_set_prop.756213caaf8d6a53d7343e50496c5a32 @ 0011fddc ---- */

undefined8
smb5_usb_port_set_prop_756213caaf8d6a53d7343e50496c5a32(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = ___ratelimit(&smb5_usb_port_set_prop__rs,"smb5_usb_port_set_prop");
  if (iVar1 != 0) {
    _printk("<3>Set prop %d is not supported in pc_port\n",param_2);
  }
  return 0xffffffea;
}



/* ---- smb5_batt_get_prop.756213caaf8d6a53d7343e50496c5a32 @ 0011fe38 ---- */

void smb5_batt_get_prop_756213caaf8d6a53d7343e50496c5a32
               (undefined8 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  lVar4 = power_supply_get_drvdata();
  local_40 = 0;
  switch(param_2) {
  case 0:
    iVar2 = smblib_get_prop_batt_status(lVar4,param_3);
    if (*param_3 == 1) {
      lVar4 = power_supply_get_by_name("battery");
      if (lVar4 == 0) {
        puVar5 = "<3>%s failed to get batt_psy";
      }
      else {
        iVar1 = power_supply_get_property(lVar4,0x2e,&local_40);
        if (-1 < iVar1) break;
        puVar5 = "<3>%s failed to get soc_prop";
      }
      _printk(puVar5,"smb5_batt_get_prop");
      uVar3 = 0xffffffea;
      goto LAB_00120058;
    }
    break;
  case 1:
    iVar2 = smblib_get_prop_batt_charge_type(lVar4,param_3);
    break;
  case 2:
    iVar2 = smblib_get_prop_batt_health(lVar4,param_3);
    break;
  case 3:
    iVar2 = smblib_get_prop_batt_present(lVar4,param_3);
    break;
  default:
    _printk("<3>batt power supply prop %d not supported\n",param_2);
    uVar3 = 0xffffffea;
    goto LAB_00120058;
  case 6:
    iVar2 = 3;
    goto LAB_00120014;
  case 7:
    iVar2 = smblib_get_prop_batt_cycle(lVar4,param_3);
    break;
  case 8:
    uVar6 = *(undefined8 *)(lVar4 + 0x508);
    goto LAB_0011ff94;
  case 0xc:
    uVar6 = 5;
    goto LAB_00120028;
  case 0x11:
    iVar2 = smblib_get_batt_current_now(lVar4,param_3);
    break;
  case 0x16:
    *param_3 = 5000000;
    _printk("<6>%s:charge_full_design is %d \n","smb5_batt_get_prop",5000000);
    uVar3 = 0;
    goto LAB_00120058;
  case 0x18:
    iVar2 = smblib_get_prop_from_bms(lVar4,7,param_3);
    if (5000000 < *param_3) {
      *param_3 = 5000000;
    }
    break;
  case 0x1c:
    uVar6 = 0xb;
    goto LAB_00120028;
  case 0x1d:
    uVar6 = *(undefined8 *)(lVar4 + 0x4f8);
LAB_0011ff94:
    iVar2 = get_effective_result(uVar6);
    goto LAB_00120014;
  case 0x1e:
    iVar2 = get_client_vote(*(undefined8 *)(lVar4 + 0x4f8),"BATT_PROFILE_VOTER");
    goto LAB_00120014;
  case 0x21:
    iVar2 = *(int *)(lVar4 + 0x116c);
    goto LAB_00120014;
  case 0x22:
    iVar2 = *(int *)(lVar4 + 0x1170);
LAB_00120014:
    uVar3 = 0;
    *param_3 = iVar2;
    goto LAB_00120058;
  case 0x25:
    iVar2 = smblib_get_prop_input_suspend(lVar4,param_3);
    break;
  case 0x2e:
    iVar2 = smblib_get_prop_batt_capacity(lVar4,param_3);
    break;
  case 0x32:
    iVar2 = smblib_get_prop_batt_capacity_level(lVar4,param_3);
    break;
  case 0x33:
    if (*(int *)(lVar4 + 0x11b4) == 3) {
      iVar2 = 0xfa;
      goto LAB_00120014;
    }
    iVar2 = smblib_get_prop_batt_temp(lVar4,param_3);
    break;
  case 0x3d:
    uVar6 = 0xe;
LAB_00120028:
    iVar2 = smblib_get_prop_from_bms(lVar4,uVar6,param_3);
    break;
  case 0x43:
    iVar2 = smblib_get_prop_batt_iterm(lVar4,param_3);
  }
  uVar3 = iVar2 >> 0x1f & 0xffffffc3;
LAB_00120058:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- smb5_batt_set_prop.756213caaf8d6a53d7343e50496c5a32 @ 001200f8 ---- */

undefined8
smb5_batt_set_prop_756213caaf8d6a53d7343e50496c5a32
          (undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = power_supply_get_drvdata();
  uVar2 = 0xffffffea;
  switch(param_2) {
  case 0:
    uVar2 = smblib_set_prop_batt_status(lVar1,param_3);
    break;
  case 7:
    uVar2 = smblib_set_prop_batt_cycle(lVar1,param_3);
    break;
  case 8:
    uVar2 = *(undefined8 *)(lVar1 + 0x508);
    *(undefined4 *)(lVar1 + 0x12b4) = *param_3;
    goto LAB_00120190;
  case 0x1e:
    uVar2 = *(undefined8 *)(lVar1 + 0x4f8);
    *(undefined4 *)(lVar1 + 0x12b0) = *param_3;
LAB_00120190:
    vote(uVar2,"BATT_PROFILE_VOTER",1,*param_3);
    uVar2 = 0;
    break;
  case 0x21:
    uVar2 = smblib_set_prop_system_temp_level(lVar1,param_3);
    break;
  case 0x25:
    uVar2 = smblib_set_prop_input_suspend(lVar1,param_3);
    break;
  case 0x2e:
    uVar2 = smblib_set_prop_batt_capacity(lVar1,param_3);
    break;
  case 0x33:
    uVar2 = smblib_set_prop_batt_temp(lVar1,param_3);
    break;
  case 0x43:
    uVar2 = smb5_config_iterm(lVar1,*param_3,0);
  }
  return uVar2;
}



/* ---- smb5_batt_prop_is_writeable.756213caaf8d6a53d7343e50496c5a32 @ 00120228 ---- */

undefined8
smb5_batt_prop_is_writeable_756213caaf8d6a53d7343e50496c5a32(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 7:
  case 0x21:
  case 0x25:
  case 0x2e:
  case 0x33:
  case 0x43:
    return 1;
  default:
    return 0;
  }
}



/* ---- ps_get_max_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32 @ 00120270 ---- */

void ps_get_max_charge_cntl_limit_756213caaf8d6a53d7343e50496c5a32(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  iVar2 = power_supply_get_property(*(undefined8 *)(param_1 + 0x3a8),0x22,&local_30);
  if (iVar2 == 0) {
    *param_2 = (long)(int)local_30;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- ps_get_cur_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32 @ 001202e8 ---- */

void ps_get_cur_charge_cntl_limit_756213caaf8d6a53d7343e50496c5a32(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  iVar2 = power_supply_get_property(*(undefined8 *)(param_1 + 0x3a8),0x21,&local_30);
  if (iVar2 == 0) {
    *param_2 = (long)(int)local_30;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- ps_set_cur_charge_cntl_limit.756213caaf8d6a53d7343e50496c5a32 @ 00120360 ---- */

void ps_set_cur_charge_cntl_limit_756213caaf8d6a53d7343e50496c5a32(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  plVar2 = *(long **)(param_1 + 0x3a8);
  local_20 = (ulong)param_2;
  pcVar3 = *(code **)(*plVar2 + 0x38);
  if (3 < ((ulong)(pcVar3 + -0x113b18) >> 3 | (long)pcVar3 << 0x3d)) {
    __cfi_slowpath_diag(0xd729d90c2289fd3d,pcVar3,&DAT_00102ea0);
  }
  (*pcVar3)(plVar2,0x21,&local_20);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- force_batt_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32 @ 00120410 ---- */

void force_batt_psy_update_ops_open_756213caaf8d6a53d7343e50496c5a32
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  simple_attr_open(param_1,param_2,0,
                   force_batt_psy_update_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt,"0x%02llx\n")
  ;
  return;
}



/* ---- force_batt_psy_update_write.756213caaf8d6a53d7343e50496c5a32 @ 00120448 ---- */

undefined8 force_batt_psy_update_write_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  power_supply_changed(*(undefined8 *)(param_1 + 0x418));
  return 0;
}



/* ---- force_usb_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32 @ 00120474 ---- */

void force_usb_psy_update_ops_open_756213caaf8d6a53d7343e50496c5a32
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  simple_attr_open(param_1,param_2,0,
                   force_usb_psy_update_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt,"0x%02llx\n");
  return;
}



/* ---- force_usb_psy_update_write.756213caaf8d6a53d7343e50496c5a32 @ 001204ac ---- */

undefined8 force_usb_psy_update_write_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  power_supply_changed(*(undefined8 *)(param_1 + 0x420));
  return 0;
}



/* ---- force_dc_psy_update_ops_open.756213caaf8d6a53d7343e50496c5a32 @ 001204d8 ---- */

void force_dc_psy_update_ops_open_756213caaf8d6a53d7343e50496c5a32
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  simple_attr_open(param_1,param_2,0,
                   force_dc_psy_update_write_756213caaf8d6a53d7343e50496c5a32_cfi_jt,"0x%02llx\n");
  return;
}



/* ---- force_dc_psy_update_write.756213caaf8d6a53d7343e50496c5a32 @ 00120510 ---- */

undefined8 force_dc_psy_update_write_756213caaf8d6a53d7343e50496c5a32(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  power_supply_changed(*(undefined8 *)(param_1 + 0x428));
  return 0;
}



/* ---- pd_disabled_show.756213caaf8d6a53d7343e50496c5a32 @ 0012053c ---- */

long pd_disabled_show_756213caaf8d6a53d7343e50496c5a32
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x288))
  ;
  return (long)iVar1;
}



/* ---- pd_disabled_store.756213caaf8d6a53d7343e50496c5a32 @ 00120580 ---- */

undefined8
pd_disabled_store_756213caaf8d6a53d7343e50496c5a32
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_2c = 0;
  iVar1 = kstrtoint(param_3,0,&local_2c);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0x288) = local_2c;
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- weak_chg_icl_ua_show.756213caaf8d6a53d7343e50496c5a32 @ 0012060c ---- */

long weak_chg_icl_ua_show_756213caaf8d6a53d7343e50496c5a32
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x2b0))
  ;
  return (long)iVar1;
}



/* ---- weak_chg_icl_ua_store.756213caaf8d6a53d7343e50496c5a32 @ 00120650 ---- */

undefined8
weak_chg_icl_ua_store_756213caaf8d6a53d7343e50496c5a32
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_2c = 0;
  iVar1 = kstrtoint(param_3,0,&local_2c);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0x2b0) = local_2c;
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- smblib_read @ 001206dc ---- */

void smblib_read(long param_1,undefined2 param_2,undefined1 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),param_2,&local_2c);
  if (-1 < iVar2) {
    *param_3 = (char)local_2c;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_batch_read @ 00120754 ---- */

void smblib_batch_read(long param_1,undefined2 param_2,undefined8 param_3,int param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  regmap_bulk_read(*(undefined8 *)(param_1 + 0x10),param_2,param_3,(long)param_4);
  return;
}



/* ---- smblib_write @ 00120784 ---- */

void smblib_write(long param_1,undefined2 param_2,undefined1 param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  regmap_write(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return;
}



/* ---- smblib_batch_write @ 001207b4 ---- */

void smblib_batch_write(long param_1,undefined2 param_2,undefined8 param_3,int param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  regmap_bulk_write(*(undefined8 *)(param_1 + 0x10),param_2,param_3,(long)param_4);
  return;
}



/* ---- smblib_masked_write @ 001207e4 ---- */

void smblib_masked_write(long param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,0,0,0);
  return;
}



/* ---- smblib_get_iio_channel @ 00120824 ---- */

ulong smblib_get_iio_channel(long *param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *in_x18;
  ulong uVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = of_property_match_string(*(undefined8 *)(*param_1 + 0x2f0),"io-channel-names",param_2);
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)uVar1;
    uVar2 = iio_channel_get(*param_1,param_2);
    *param_3 = uVar2;
    if (0xfffffffffffff000 < uVar2) {
      uVar3 = uVar2 & 0xffffffff;
      if ((int)uVar2 != -0x205) {
        _printk("<3>%s: %s: %s channel unavailable, %d\n",param_1[1],"smblib_get_iio_channel",param_2,uVar3);
      }
      *param_3 = 0;
    }
  }
  return uVar3;
}



/* ---- smblib_icl_override @ 001208d8 ---- */

int smblib_icl_override(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 1) {
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 1;
  }
  else if (param_2 == 2) {
    uVar5 = 0;
    uVar3 = 1;
    uVar4 = 0x10;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1366,1,uVar3,0,0,0);
  if (iVar1 < 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = "<3>%s: %s: Couldn't set USBIN_ICL_OPTIONS rc=%d\n";
  }
  else {
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1342,1,uVar5,0,0,0);
    if (iVar1 < 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar2 = "<3>%s: %s: Couldn't override ICL rc=%d\n";
    }
    else {
      iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1365,0x10,uVar4,0,0,0);
      if (-1 < iVar1) {
        return iVar1;
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar2 = "<3>%s: %s: Couldn't override ICL_AFTER_APSD rc=%d\n";
    }
  }
  _printk(puVar2,uVar3,"smblib_icl_override",iVar1);
  return iVar1;
}



/* ---- smblib_get_charge_param @ 00120a00 ---- */

uint smblib_get_charge_param(long param_1,undefined8 *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *in_x18;
  uint uVar8;
  undefined8 unaff_x30;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  local_4c = 0;
  uVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_2 + 1),&local_4c);
  if ((int)uVar2 < 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = *param_2;
    uVar3 = (uint)*(ushort *)(param_2 + 1);
    puVar4 = "<3>%s: %s: %s: Couldn't read from 0x%04x rc=%d\n";
    uVar8 = uVar2;
  }
  else {
    pcVar7 = (code *)param_2[3];
    uVar8 = local_4c & 0xff;
    if (pcVar7 == (code *)0x0) {
      uVar3 = *(int *)((long)param_2 + 0xc) + *(int *)((long)param_2 + 0x14) * (local_4c & 0xff);
    }
    else {
      if (pcVar7 != smblib_get_aicl_cont_threshold_cfi_jt) {
        __cfi_slowpath_diag(0x43b12ec82c840f27,pcVar7,&DAT_00102ec0);
      }
      uVar3 = (*pcVar7)(param_2,uVar8);
    }
    *param_3 = uVar3;
    if ((**(byte **)(param_1 + 0x280) >> 1 & 1) == 0) goto LAB_00120aa0;
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar4 = "<6>%s: %s: %s = %d (0x%02x)\n";
    uVar6 = *param_2;
  }
  _printk(puVar4,uVar5,"smblib_get_charge_param",uVar6,uVar3,uVar8);
LAB_00120aa0:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ---- smblib_get_thermal_threshold @ 00120b50 ---- */

int smblib_get_thermal_threshold(long param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ushort local_3c [2];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  local_3c[0] = 0;
  iVar6 = regmap_bulk_read(*(undefined8 *)(param_1 + 0x10),param_2,local_3c,2);
  if (iVar6 < 0) {
    _printk("<3>failed to write to 0x%04X, rc=%d\n",param_2,iVar6);
  }
  else {
    iVar7 = 0;
    iVar8 = 0x73;
    uVar3 = local_3c[0] >> 8 | local_3c[0] << 8;
    do {
      while( true ) {
        iVar1 = iVar7 + iVar8;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        if (0x73 < uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x120c60);
          (*pcVar5)();
        }
        if (*(short *)(&therm_lookup_table + (ulong)uVar2 * 2) < (short)uVar3) break;
        if (*(short *)(&therm_lookup_table + (ulong)uVar2 * 2) <= (short)uVar3) goto LAB_00120c00;
        iVar7 = uVar2 + 1;
        if (iVar8 < iVar7) goto LAB_00120c00;
      }
      iVar8 = uVar2 - 1;
    } while (iVar7 <= iVar8);
LAB_00120c00:
    *param_3 = uVar2 * 10 + -300;
  }
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* ---- smblib_get_aicl_cont_threshold @ 00120c64 ---- */

int smblib_get_aicl_cont_threshold(long param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param_2 - 0x10;
  if (param_2 < 0x10) {
    bVar1 = param_2;
  }
  iVar2 = 200;
  if (param_2 < 0x10) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  iVar3 = 0x15e0;
  if (param_2 < 0x10) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  return iVar3 + iVar2 * (uint)bVar1;
}



/* ---- smblib_set_chg_freq @ 00120ca0 ---- */

undefined8 smblib_set_chg_freq(long param_1,int param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(int *)(param_1 + 0x10) < param_2) || (param_2 < *(int *)(param_1 + 0xc))) {
    return 0xffffffea;
  }
  param_2 = param_2 * 2;
  if (param_2 < 0x834) {
    if (param_2 == 0x4b0) {
      lVar1 = 3;
    }
    else {
      if (param_2 != 0x640) {
LAB_00120d40:
        if (param_2 < 0) {
          param_2 = param_2 + 1;
        }
        _printk("<3>Invalid frequency %d Hz\n",param_2 >> 1);
        return 0xffffffea;
      }
      lVar1 = 2;
    }
  }
  else if (param_2 == 0x834) {
    lVar1 = 1;
  }
  else {
    if (param_2 != 0x960) goto LAB_00120d40;
    lVar1 = 0;
  }
  *param_3 = (&DAT_00111a94)[lVar1 * 8];
  return 0;
}



/* ---- smblib_set_charge_param @ 00120d60 ---- */

int smblib_set_charge_param(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *in_x18;
  code *pcVar5;
  undefined8 unaff_x30;
  byte local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  pcVar5 = (code *)param_2[4];
  local_3c[0] = 0;
  if (pcVar5 == (code *)0x0) {
    iVar3 = *(int *)(param_2 + 2);
    if (((iVar3 < param_3) || (param_3 < *(int *)((long)param_2 + 0xc))) &&
       ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0)) {
      _printk("<6>%s: %s: %s: %d is out of range [%d, %d]\n",*(undefined8 *)(param_1 + 8),"smblib_set_charge_param",*param_2,param_3,
              *(undefined4 *)((long)param_2 + 0xc));
      iVar3 = *(int *)(param_2 + 2);
    }
    iVar1 = *(int *)((long)param_2 + 0xc);
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
    param_3 = iVar1;
    if (iVar1 <= iVar3) {
      param_3 = iVar3;
    }
    uVar4 = 0;
    if (*(int *)((long)param_2 + 0x14) != 0) {
      uVar4 = (param_3 - iVar1) / *(int *)((long)param_2 + 0x14);
    }
    local_3c[0] = (byte)uVar4;
  }
  else {
    if (1 < ((ulong)(pcVar5 + -0x113858) >> 3 | (long)pcVar5 << 0x3d)) {
      __cfi_slowpath_diag(0x47b1a0fda8287760,pcVar5,&DAT_00102ee0);
    }
    iVar3 = (*pcVar5)(param_2,param_3,local_3c);
    if (iVar3 < 0) {
      iVar3 = -0x16;
      goto LAB_00120e6c;
    }
    uVar4 = (uint)local_3c[0];
  }
  iVar3 = regmap_write(*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_2 + 1),uVar4 & 0xff);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: %s: Couldn't write 0x%02x to 0x%04x rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_charge_param",*param_2,
            local_3c[0],*(undefined2 *)(param_2 + 1),iVar3);
  }
  else if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
    _printk("<6>%s: %s: %s = %d (0x%02x)\n",*(undefined8 *)(param_1 + 8),"smblib_set_charge_param",*param_2,param_3,
            local_3c[0]);
  }
LAB_00120e6c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_set_aicl_cont_threshold @ 00120f20 ---- */

undefined8 smblib_set_aicl_cont_threshold(long param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 <= *(int *)(param_1 + 0x10)) {
    iVar2 = param_2;
  }
  iVar1 = iVar3;
  if (iVar3 <= iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0x15e0;
  if (iVar1 < 0x15e0) {
    iVar2 = iVar3;
  }
  iVar3 = 200;
  if (iVar1 < 0x15e0) {
    iVar3 = *(int *)(param_1 + 0x14);
  }
  cVar4 = '\0';
  if (iVar3 != 0) {
    cVar4 = (char)((iVar1 - iVar2) / iVar3);
  }
  *param_3 = cVar4 + (0x15df < iVar1) * '\x10';
  return 0;
}



/* ---- smblib_get_qc3_main_icl_offset @ 00120f74 ---- */

int smblib_get_qc3_main_icl_offset(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  uVar3 = is_cp_topo_vbatt();
  if ((((uVar3 & 1) == 0) || (*(char *)(param_1 + 0x127d) != '\0')) ||
     ((*(uint *)(param_1 + 0x128c) & 0xfffffffe) != 0xe)) {
LAB_0012104c:
    iVar2 = -0x16;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x268);
    iVar2 = -0x13;
    if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) ||
       (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar3 + 8),&local_3c), iVar2 < 0)) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't get CP ENABLE rc=%d\n";
    }
    else {
      if (local_3c == 0) goto LAB_0012104c;
      uVar3 = *(ulong *)(param_1 + 0x268);
      iVar2 = -0x13;
      if (((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) &&
         (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar3 + 0x10),&local_3c), -1 < iVar2))
      {
        iVar2 = 0;
        *param_2 = (local_3c * 0x14) / 100;
        goto LAB_00121050;
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't get CP ILIM rc=%d\n";
    }
    _printk(puVar4,uVar5,"smblib_get_qc3_main_icl_offset",iVar2);
  }
LAB_00121050:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- is_cp_topo_vbatt @ 001210c0 ---- */

bool is_cp_topo_vbatt(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  bVar3 = false;
  local_28 = *(long *)(lVar2 + 0x5e0);
  puVar5 = (undefined8 *)param_1[0x4d];
  local_2c = 0;
  if ((undefined8 *)0xfffffffffffff000 < puVar5) goto LAB_001211e4;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)get_ext_channels(*param_1,&smblib_cp_ext_iio_chan,4);
    if (puVar5 < (undefined8 *)0xfffffffffffff001) {
      param_1[0x4d] = puVar5;
      goto joined_r0x001211bc;
    }
    if ((int)puVar5 != -0x205) {
      _dev_err(*param_1,"Failed to get channels, rc=%d\n");
      bVar3 = false;
      param_1[0x4d] = 0xffffffffffffffea;
      goto LAB_001211e4;
    }
  }
  else {
joined_r0x001211bc:
    iVar4 = -0x13;
    if (((puVar5 != (undefined8 *)0x0) && (iVar4 = -0x13, puVar5 < (undefined8 *)0xfffffffffffff001)
        ) && (iVar4 = iio_read_channel_processed(*puVar5,&local_2c,puVar5,0xffffffed), -1 < iVar4))
    {
      bVar3 = local_2c == 2;
      if ((*(byte *)param_1[0x50] >> 5 & 1) != 0) {
        pcVar1 = "true";
        if (local_2c != 2) {
          pcVar1 = "false";
        }
        _printk("<6>%s: %s: %s\n",param_1[1],"is_cp_topo_vbatt",pcVar1);
      }
      goto LAB_001211e4;
    }
    _printk("<3>%s: %s: Couldn't get CP PARALLEL_OUTPUT_MODE rc=%d\n",param_1[1],"is_cp_topo_vbatt",iVar4);
  }
  bVar3 = false;
LAB_001211e4:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



/* ---- smblib_get_prop_from_bms @ 00121218 ---- */

uint smblib_get_prop_from_bms(long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = *(ulong *)(param_1 + 0x260);
  uVar1 = 0xffffffed;
  if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
    uVar1 = iio_read_channel_processed(*(undefined8 *)(uVar2 + (long)param_2 * 8),param_3);
    uVar1 = uVar1 & (int)uVar1 >> 0x1f;
  }
  return uVar1;
}



/* ---- smblib_apsd_enable @ 0012125c ---- */

void smblib_apsd_enable(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = 8;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1362,8,uVar2,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_apsd_enable",iVar1);
  }
  return;
}



/* ---- smblib_hvdcp_detect_enable @ 001212d4 ---- */

void smblib_hvdcp_detect_enable(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = 0x44;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1362,0x44,uVar2,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_hvdcp_detect_enable",iVar1);
  }
  return;
}



/* ---- smblib_hvdcp_hw_inov_enable @ 0012134c ---- */

void smblib_hvdcp_hw_inov_enable(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = 0x20;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1362,0x20,uVar2,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_hvdcp_hw_inov_enable",iVar1);
  }
  return;
}



/* ---- smblib_hvdcp_exit_config @ 001213c4 ---- */

void smblib_hvdcp_exit_config(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1308,&local_2c);
  if ((-1 < iVar2) && ((local_2c & 0x60) != 0)) {
    regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1362,0x20,0,0,0,0);
    regmap_write(*(undefined8 *)(param_1 + 0x10),0x1343,8);
    regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1341,1,1,0,0,0);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_rerun_apsd @ 00121490 ---- */

void smblib_rerun_apsd(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: re-running APSD\n",*(undefined8 *)(param_1 + 8),"smblib_rerun_apsd");
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1341,1,1,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't re-run APSD rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_rerun_apsd",iVar1);
  }
  return;
}



/* ---- smblib_config_charger_on_debug_battery @ 00121528 ---- */

void smblib_config_charger_on_debug_battery(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  iVar2 = -0x13;
  puVar3 = *(undefined8 **)(param_1 + 0x260);
  local_2c = 0;
  if (((puVar3 == (undefined8 *)0x0) || ((undefined8 *)0xfffffffffffff000 < puVar3)) ||
     (iVar2 = iio_read_channel_processed(*puVar3,&local_2c,param_3,0xffffffed), iVar2 < 0)) {
    _printk("<3>%s: %s: Couldn't get debug battery prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_config_charger_on_debug_battery",
            iVar2);
  }
  else {
    vote(*(undefined8 *)(param_1 + 0x570),"DEBUG_BOARD_VOTER",local_2c != 0,0);
    if (*(char *)(param_1 + 0x11a1) == '\0') {
      vote(*(undefined8 *)(param_1 + 0x528),"DEBUG_BOARD_VOTER",local_2c != 0,0);
    }
    else {
      vote(*(undefined8 *)(param_1 + 0x510),"DEBUG_BOARD_VOTER",local_2c != 0,0);
      vote(*(undefined8 *)(param_1 + 0x4f0),"DEBUG_BOARD_VOTER",local_2c != 0,0);
      if (local_2c != 0) {
        _printk("<6>Input suspended: Fake battery\n");
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_rerun_apsd_if_required @ 0012166c ---- */

int smblib_rerun_apsd_if_required(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_2c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar2);
    _printk("<3>%s: %s: Couldn't get usb present rc = %d\n",*(undefined8 *)(param_1 + 8),"smblib_rerun_apsd_if_required",iVar2);
  }
  else {
    if ((local_2c >> 4 & 1) != 0) {
      iVar2 = smblib_request_dpdm(param_1,1);
      if (iVar2 < 0) {
        _printk("<3>%s: %s: Couldn't to enable DPDM rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_rerun_apsd_if_required",iVar2);
      }
      *(undefined1 *)(param_1 + 0x11ac) = 1;
      if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
        _printk("<6>%s: %s: re-running APSD\n",*(undefined8 *)(param_1 + 8),"smblib_rerun_apsd");
      }
      iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1341,1,1,0,0,0);
      iVar2 = 0;
      if (-1 < iVar3) goto LAB_0012170c;
      _printk("<3>%s: %s: Couldn't re-run APSD rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_rerun_apsd",iVar3);
    }
    iVar2 = 0;
  }
LAB_0012170c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_usb_present @ 001217dc ---- */

int smblib_get_prop_usb_present(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar2);
  }
  else {
    iVar2 = 0;
    *param_2 = local_3c >> 4 & 1;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_request_dpdm @ 00121890 ---- */

ulong smblib_request_dpdm(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  ulong uVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x115e) != '\0') {
    uVar4 = 0;
    goto LAB_00121988;
  }
  if ((param_1[0x8f] == 0) &&
     (lVar1 = of_get_property(*(undefined8 *)(*param_1 + 0x2f0),"dpdm-supply",0), lVar1 != 0)) {
    uVar4 = devm_regulator_get(*param_1,"dpdm");
    param_1[0x8f] = uVar4;
    if (0xfffffffffffff000 < uVar4) {
      _printk("<3>%s: %s: Couldn't get dpdm regulator rc=%d\n",param_1[1],"smblib_request_dpdm",uVar4 & 0xffffffff);
      param_1[0x8f] = 0;
      goto LAB_00121988;
    }
  }
  mutex_lock(param_1 + 0x77);
  lVar1 = param_1[0x8f];
  if ((param_2 & 1) == 0) {
    if ((lVar1 == 0) || (*(char *)((long)param_1 + 0x127f) == '\0')) goto LAB_0012197c;
    if ((*(byte *)param_1[0x50] >> 2 & 1) != 0) {
      _printk("<6>%s: %s: disabling DPDM regulator\n",param_1[1],"smblib_request_dpdm");
      lVar1 = param_1[0x8f];
    }
    uVar2 = regulator_disable(lVar1);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) {
      lVar1 = param_1[1];
      puVar3 = "<3>%s: %s: Couldn't disable dpdm regulator rc=%d\n";
      goto LAB_00121a2c;
    }
    *(undefined1 *)((long)param_1 + 0x127f) = 0;
  }
  else if ((lVar1 == 0) || (*(char *)((long)param_1 + 0x127f) != '\0')) {
LAB_0012197c:
    uVar4 = 0;
  }
  else {
    if ((*(byte *)param_1[0x50] >> 2 & 1) != 0) {
      _printk("<6>%s: %s: enabling DPDM regulator\n",param_1[1],"smblib_request_dpdm");
      lVar1 = param_1[0x8f];
    }
    uVar2 = regulator_enable(lVar1);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) {
      lVar1 = param_1[1];
      puVar3 = "<3>%s: %s: Couldn't enable dpdm regulator rc=%d\n";
LAB_00121a2c:
      _printk(puVar3,lVar1,"smblib_request_dpdm",uVar4);
    }
    else {
      *(undefined1 *)((long)param_1 + 0x127f) = 1;
    }
  }
  mutex_unlock(param_1 + 0x77);
LAB_00121988:
  return uVar4 & 0xffffffff;
}



/* ---- smblib_set_icl_current @ 00121a40 ---- */

int smblib_set_icl_current(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  int iVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x111c) == 3) {
    schgm_flash_torch_priority(param_1,(int)param_2 < 0x61a9);
  }
  iVar1 = smblib_get_prop_typec_mode(param_1);
  if (iVar1 == 3) {
    return 0;
  }
  if ((int)param_2 < 0x61a9) {
    vote(*(undefined8 *)(param_1 + 0x550),"USB_SUSPEND_VOTER",1,0);
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1340,1,1,0,0,0);
    if (iVar1 < 0) {
      _printk("<3>%s: %s: Couldn't write %s to USBIN_SUSPEND_BIT rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_usb_suspend","suspend",iVar1);
      return iVar1;
    }
    return iVar1;
  }
  if (param_2 == 0x7fffffff) {
LAB_00121b18:
    iVar4 = 0;
LAB_00121bb0:
    iVar1 = smblib_icl_override(param_1,iVar4);
    if (iVar1 < 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar2 = "<3>%s: %s: Couldn't set ICL override rc=%d\n";
      goto LAB_00121cb0;
    }
  }
  else {
    if (((*(int *)(param_1 + 0x128c) == 4) &&
        (((*(char *)(param_1 + 0x1161) != '\0' || (*(int *)(param_1 + 0x11b4) == 6)) ||
         (*(int *)(param_1 + 0x119c) == 1)))) &&
       ((*(int *)(param_1 + 0x1314) < 0xdbba1 && (*(int *)(param_1 + 0x1310) != 1)))) {
      iVar1 = set_sdp_current(param_1,param_2);
      if (iVar1 < 0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        puVar2 = "<3>%s: %s: Couldn't set SDP ICL rc=%d\n";
        goto LAB_00121cb0;
      }
      goto LAB_00121b18;
    }
    if ((500000 < param_2) || (iVar1 = set_sdp_current(param_1,param_2), iVar1 < 0)) {
      iVar1 = smblib_set_charge_param(param_1,param_1 + 0x70,param_2);
      if (iVar1 < 0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        puVar2 = "<3>%s: %s: Couldn't set HC ICL rc=%d\n";
        goto LAB_00121cb0;
      }
      iVar4 = 2;
      goto LAB_00121bb0;
    }
    iVar4 = 0;
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1340,1,0,0,0,0);
  if (-1 < iVar1) {
    vote(*(undefined8 *)(param_1 + 0x550),"USB_SUSPEND_VOTER",0,0);
    if (iVar4 == 2) {
      return iVar1;
    }
    iVar1 = smblib_run_aicl(param_1,0);
    return iVar1;
  }
  _printk("<3>%s: %s: Couldn't write %s to USBIN_SUSPEND_BIT rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_usb_suspend","resume",iVar1);
  vote(*(undefined8 *)(param_1 + 0x550),"USB_SUSPEND_VOTER",0,0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = "<3>%s: %s: Couldn't resume input rc=%d\n";
LAB_00121cb0:
  _printk(puVar2,uVar3,"smblib_set_icl_current",iVar1);
  return iVar1;
}



/* ---- smblib_get_prop_typec_mode @ 00121cdc ---- */

void smblib_get_prop_typec_mode(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x150b,&local_2c);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't read TYPE_C_MISC_STATUS_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_mode",iVar3);
    uVar4 = 0;
  }
  else {
    bVar2 = (byte)local_2c;
    if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
      _printk("<6>%s: %s: TYPE_C_MISC_STATUS_REG = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_mode",(byte)local_2c
             );
    }
    if ((bVar2 >> 6 & 1) == 0) {
      uVar4 = smblib_get_prop_ufp_mode();
    }
    else {
      uVar4 = smblib_get_prop_dfp_mode(param_1);
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- set_sdp_current @ 00121db8 ---- */

int set_sdp_current(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = smblib_get_apsd_result();
  if (param_2 < 500000) {
    if (param_2 == 100000) {
      uVar4 = 0;
    }
    else {
      if (param_2 != 150000) {
        return -0x16;
      }
      uVar4 = 4;
    }
  }
  else if (param_2 == 500000) {
    uVar4 = 2;
  }
  else {
    if (param_2 != 900000) {
      return -0x16;
    }
    uVar4 = 6;
  }
  if (((*(int *)(param_1 + 0x128c) == 4) && (*(int *)(lVar2 + 0xc) == 0x10)) &&
     (iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1363,1,1,0,0,0), iVar1 < 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = "<3>%s: %s: Couldn't set float ICL options rc=%d\n";
  }
  else {
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1366,6,uVar4,0,0,0);
    if (iVar1 < 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar3 = "<3>%s: %s: Couldn't set ICL options rc=%d\n";
    }
    else {
      iVar1 = smblib_icl_override(param_1,1);
      if (-1 < iVar1) {
        return iVar1;
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar3 = "<3>%s: %s: Couldn't set ICL override rc=%d\n";
    }
  }
  _printk(puVar3,uVar4,"set_sdp_current",iVar1);
  return iVar1;
}



/* ---- smblib_run_aicl @ 00121f24 ---- */

int smblib_run_aicl(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x110b,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read POWER_PATH_STATUS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_run_aicl",iVar2);
  }
  else if ((local_3c >> 6 & 1) == 0) {
    if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: re-running AICL\n",*(undefined8 *)(param_1 + 8),"smblib_run_aicl");
    }
    uVar4 = 1;
    if (param_2 != 0) {
      uVar4 = 2;
    }
    iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1644,uVar4,uVar4,0,0,0);
    iVar2 = 0;
    if (iVar3 < 0) {
      _printk("<3>%s: %s: Couldn't write to AICL_CMD_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_run_aicl",iVar3);
      iVar2 = 0;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_icl_current @ 0012204c ---- */

int smblib_get_icl_current(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = smblib_get_charge_param(param_1,param_1 + 0x98,param_2);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't get HC ICL rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_icl_current",iVar1);
  }
  return iVar1;
}



/* ---- smblib_toggle_smb_en @ 001220b0 ---- */

undefined8 smblib_toggle_smb_en(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (param_2 == 0) {
    return 0;
  }
  *in_x18 = unaff_x30;
  uVar1 = smblib_select_sec_charger
                    (param_1,*(undefined4 *)(param_1 + 0x1144),*(undefined4 *)(param_1 + 0x1148),1);
  return uVar1;
}



/* ---- smblib_select_sec_charger @ 001220f0 ---- */

int smblib_select_sec_charger(undefined8 *param_1,int param_2,undefined4 param_3,ulong param_4)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  mutex_lock(param_1 + 0x58);
  if ((param_2 == 1) && ((param_4 & 1) != 0)) {
    vote(param_1[0xa4],"PL_SMB_EN_VOTER",1,0);
    vote(param_1[0xa9],"PL_SMB_EN_VOTER",1,0);
    usleep_range_state(0x14,0x1e,2);
LAB_00122188:
    vote(param_1[0xa4],"PL_SMB_EN_VOTER",1,0);
    iVar1 = regmap_update_bits_base(param_1[2],0x1690,0x10,0x10,0,0,0);
    if (iVar1 < 0) {
LAB_001222d0:
      uVar4 = *param_1;
      pcVar2 = "Couldn\'t select SMB charger rc=%d\n";
    }
    else {
      iVar1 = regmap_update_bits_base(param_1[2],0x1648,1,1,0,0,0);
      if (-1 < iVar1) {
        uVar4 = 0;
        goto LAB_00122284;
      }
LAB_001222e4:
      uVar4 = *param_1;
      pcVar2 = "Couldn\'t enable SMB charger rc=%d\n";
    }
    _dev_err(uVar4,pcVar2,iVar1);
    _dev_err(*param_1,"Couldn\'t switch secondary charger rc=%d\n",iVar1);
  }
  else {
    if (param_2 == 2) {
      iVar1 = regmap_update_bits_base(param_1[2],0x1690,0x10,0,0,0,0);
      if (iVar1 < 0) goto LAB_001222d0;
      iVar1 = regmap_update_bits_base(param_1[2],0x1648,4,4,0,0,0);
      if (iVar1 < 0) goto LAB_001222e4;
      vote(param_1[0xa9],"PL_SMB_EN_VOTER",0,0);
      uVar4 = 0;
      puVar3 = param_1 + 0xa4;
    }
    else {
      if (param_2 == 1) goto LAB_00122188;
      uVar4 = 1;
      vote(param_1[0xa4],"PL_SMB_EN_VOTER",1,0);
      iVar1 = 0;
LAB_00122284:
      puVar3 = param_1 + 0xa9;
    }
    vote(*puVar3,"PL_SMB_EN_VOTER",uVar4,0);
    *(int *)((long)param_1 + 0x1144) = param_2;
    *(undefined4 *)(param_1 + 0x229) = param_3;
  }
  mutex_unlock(param_1 + 0x58);
  return iVar1;
}



/* ---- smblib_get_irq_status @ 00122310 ---- */

int smblib_get_irq_status(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if ((*(byte *)(param_1 + 0x1290) >> 6 & 1) == 0) {
    mutex_lock(param_1 + 800);
    local_3c = 0;
    *param_2 = *(uint *)(param_1 + 0x12e0);
    *(undefined4 *)(param_1 + 0x12e0) = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x7510,&local_3c);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read MISC_PBS_RT_STS_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_irq_status",iVar2);
    }
    else {
      *param_2 = *param_2 | local_3c & 0x10;
    }
    mutex_unlock(param_1 + 800);
  }
  else {
    iVar2 = 0;
    *param_2 = 0;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_vconn_regulator_enable @ 00122400 ---- */

int smblib_vconn_regulator_enable(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  lVar3 = rdev_get_drvdata();
  if ((**(byte **)(lVar3 + 0x280) >> 4 & 1) != 0) {
    _printk("<6>%s: %s: enabling VCONN\n",*(undefined8 *)(lVar3 + 8),"smblib_vconn_regulator_enable");
  }
  local_3c = 0;
  iVar1 = regmap_read(*(undefined8 *)(lVar3 + 0x10),0x150b,&local_3c);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't read TYPE_C_STATUS_4 rc=%d\n",*(undefined8 *)(lVar3 + 8),"smblib_vconn_regulator_enable",iVar1);
  }
  else {
    iVar2 = regmap_update_bits_base
                      (*(undefined8 *)(lVar3 + 0x10),0x1546,6,(local_3c & 2) << 1 ^ 6,0,0,0);
    iVar1 = 0;
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read TYPE_C_CCOUT_CONTROL_REG rc=%d\n",*(undefined8 *)(lVar3 + 8),"smblib_vconn_regulator_enable",iVar2);
      iVar1 = iVar2;
    }
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* ---- smblib_vconn_regulator_disable @ 00122528 ---- */

undefined8 smblib_vconn_regulator_disable(void)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = rdev_get_drvdata();
  if ((**(byte **)(lVar2 + 0x280) >> 4 & 1) != 0) {
    _printk("<6>%s: %s: disabling VCONN\n",*(undefined8 *)(lVar2 + 8),"smblib_vconn_regulator_disable");
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(lVar2 + 0x10),0x1546,2,0,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't disable vconn regulator rc=%d\n",*(undefined8 *)(lVar2 + 8),"smblib_vconn_regulator_disable",iVar1);
  }
  return 0;
}



/* ---- smblib_vconn_regulator_is_enabled @ 001225c8 ---- */

uint smblib_vconn_regulator_is_enabled(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = rdev_get_drvdata();
  local_2c = 0;
  uVar1 = regmap_read(*(undefined8 *)(lVar2 + 0x10),0x1546,&local_2c);
  if ((int)uVar1 < 0) {
    _printk("<3>%s: %s: Couldn't read TYPE_C_INTRPT_ENB_SOFTWARE_CTRL rc=%d\n",*(undefined8 *)(lVar2 + 8),"smblib_vconn_regulator_is_enabled",uVar1);
  }
  else {
    uVar1 = local_2c >> 1 & 1;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ---- smblib_vbus_regulator_enable @ 0012266c ---- */

int smblib_vbus_regulator_enable(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = rdev_get_drvdata();
  if ((**(byte **)(lVar3 + 0x280) >> 4 & 1) != 0) {
    _printk("<6>%s: %s: enabling OTG\n",*(undefined8 *)(lVar3 + 8),"smblib_vbus_regulator_enable");
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(lVar3 + 0x10),0x1140,1,1,0,0,0);
  iVar2 = 0;
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't enable OTG rc=%d\n",*(undefined8 *)(lVar3 + 8),"smblib_vbus_regulator_enable",iVar1);
    iVar2 = iVar1;
  }
  return iVar2;
}



/* ---- smblib_vbus_regulator_disable @ 00122714 ---- */

int smblib_vbus_regulator_disable(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = rdev_get_drvdata();
  if ((**(byte **)(lVar3 + 0x280) >> 4 & 1) != 0) {
    _printk("<6>%s: %s: disabling OTG\n",*(undefined8 *)(lVar3 + 8),"smblib_vbus_regulator_disable");
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(lVar3 + 0x10),0x1140,1,0,0,0,0);
  iVar2 = 0;
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't disable OTG regulator rc=%d\n",*(undefined8 *)(lVar3 + 8),"smblib_vbus_regulator_disable",iVar1);
    iVar2 = iVar1;
  }
  return iVar2;
}



/* ---- smblib_vbus_regulator_is_enabled @ 001227bc ---- */

uint smblib_vbus_regulator_is_enabled(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = rdev_get_drvdata();
  local_2c = 0;
  uVar1 = regmap_read(*(undefined8 *)(lVar2 + 0x10),0x1140,&local_2c);
  if ((int)uVar1 < 0) {
    _printk("<3>%s: %s: Couldn't read CMD_OTG rc=%d",*(undefined8 *)(lVar2 + 8),"smblib_vbus_regulator_is_enabled",uVar1);
  }
  else {
    uVar1 = local_2c & 1;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ---- smblib_get_prop_input_suspend @ 00122860 ---- */

undefined8 smblib_get_prop_input_suspend(long param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = *(int *)(param_1 + 0x1310);
  *param_2 = iVar1;
  uVar2 = 0xffffffea;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x1190) = uVar2;
  _printk("<6>%s:input_suspend is %d \n","smblib_get_prop_input_suspend",*param_2);
  return 0;
}



/* ---- smblib_set_prop_batt_status @ 001228b8 ---- */

undefined8 smblib_set_prop_batt_status(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = -0x16;
  if (-1 < *param_2) {
    iVar1 = *param_2;
  }
  *(int *)(param_1 + 0x1190) = iVar1;
  return 0;
}



/* ---- smblib_get_prop_batt_present @ 001228e0 ---- */

int smblib_get_prop_batt_present(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1210,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read BATIF_INT_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_present",iVar2);
  }
  else {
    *param_2 = (uint)((local_3c & 0x30) == 0);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- qg_batt_get_capacity @ 00122994 ---- */

undefined4 qg_batt_get_capacity(void)

{
  return batt_capacity;
}



/* ---- qg_batt_get_voltage @ 001229a8 ---- */

undefined4 qg_batt_get_voltage(void)

{
  return batt_volt_uv;
}



/* ---- smblib_get_prop_batt_capacity @ 001229bc ---- */

int smblib_get_prop_batt_capacity(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x1184) < 0) {
    uVar2 = *(ulong *)(param_1 + 0x260);
    iVar1 = -0x13;
    if (((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) &&
       (iVar1 = iio_read_channel_processed(*(undefined8 *)(uVar2 + 8),param_2), -1 < iVar1)) {
      batt_capacity = *param_2;
      return 0;
    }
    _printk("<3>%s: %s: Couldn't get capacity prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_capacity",iVar1);
  }
  else {
    iVar1 = 0;
    *param_2 = *(int *)(param_1 + 0x1184);
  }
  return iVar1;
}



/* ---- smblib_get_prop_batt_capacity_level @ 00122a64 ---- */

int smblib_get_prop_batt_capacity_level(long param_1,undefined4 *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  iVar3 = -0x13;
  uVar5 = *(ulong *)(param_1 + 0x260);
  local_40 = 0;
  if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) ||
     (iVar3 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0x28),(long)&local_40 + 4),
     iVar3 < 0)) {
    _printk("<3>%s: %s: Couldn't get voltage prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_capacity_level",iVar3);
  }
  else {
    iVar3 = 0;
    batt_volt_uv = local_40._4_4_;
  }
  uVar5 = *(ulong *)(param_1 + 0x260);
  iVar4 = -0x13;
  if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) ||
     (iVar4 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 8),&local_40), iVar4 < 0)) {
    _printk("<3>%s: %s: Couldn't get capacity prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_capacity_level",iVar3);
    uVar5 = local_40;
  }
  else {
    iVar4 = 0;
    uVar5 = local_40;
  }
  local_40 = uVar5;
  if (iVar3 == 0) {
    local_40._0_4_ = (int)uVar5;
    bVar1 = (int)local_40 < 2;
    if ((bVar1) && (iVar4 == 0)) {
      local_40._4_4_ = (int)(uVar5 >> 0x20);
      iVar4 = local_40._4_4_;
      bVar1 = local_40._4_4_ < 0x325aa1;
      if (bVar1) {
        *param_2 = 1;
        _printk("<6>vbat_uv(%d), capacity(%d), capacity_level(%d) \n",iVar4,uVar5 & 0xffffffff,1);
      }
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_get_prop_batt_cycle @ 00122bbc ---- */

int smblib_get_prop_batt_cycle(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x1188) < 0) {
    uVar2 = *(ulong *)(param_1 + 0x260);
    iVar1 = -0x13;
    if (((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) &&
       (iVar1 = iio_read_channel_processed(*(undefined8 *)(uVar2 + 0x60)), -1 < iVar1)) {
      return 0;
    }
    _printk("<3>%s: %s: Couldn't get capacity prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_cycle",iVar1);
  }
  else {
    iVar1 = 0;
    *param_2 = *(int *)(param_1 + 0x1188);
  }
  return iVar1;
}



/* ---- smblib_get_prop_batt_temp @ 00122c48 ---- */

int smblib_get_prop_batt_temp(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x118c) == -0x16) {
    uVar2 = *(ulong *)(param_1 + 0x260);
    iVar1 = -0x13;
    if (((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) &&
       (iVar1 = iio_read_channel_processed(*(undefined8 *)(uVar2 + 0x50)), -1 < iVar1)) {
      return 0;
    }
    _printk("<3>%s: %s: Couldn't get temp prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_temp",iVar1);
  }
  else {
    iVar1 = 0;
    *param_2 = *(int *)(param_1 + 0x118c);
  }
  return iVar1;
}



/* ---- smblib_get_prop_batt_status @ 00122cd8 ---- */

int smblib_get_prop_batt_status(long param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_7c;
  undefined8 local_78;
  uint local_6c;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_68 = *(long *)(lVar2 + 0x5e0);
  local_78 = 0;
  local_7c = 0;
  if (*(char *)(param_1 + 0x11a2) == '\0') {
LAB_00122d84:
    if (*(int *)(param_1 + 0x1310) != 0) goto LAB_00122d8c;
LAB_00122dac:
    smblib_is_input_present(param_1,&local_7c);
    uVar13 = *(ulong *)(param_1 + 0x260);
    uVar8 = 0xffffffed;
    if ((uVar13 != 0) && (uVar13 < 0xfffffffffffff001)) {
      uVar8 = iio_read_channel_processed(*(undefined8 *)(uVar13 + 8),&local_78);
      uVar8 = uVar8 & (int)uVar8 >> 0x1f;
    }
    iVar7 = (int)local_78;
    if (((uVar8 == 0) && ((int)local_78 == 0)) &&
       ((local_7c != 0 &&
        ((((uVar13 = *(ulong *)(param_1 + 0x260), uVar13 != 0 && (uVar13 < 0xfffffffffffff001)) &&
          (iVar9 = iio_read_channel_processed(*(undefined8 *)(uVar13 + 0x20),&local_78), -1 < iVar9)
          ) && (0 < (int)local_78)))))) {
      if (3 < *(int *)(param_1 + 0x1278)) goto LAB_00122d8c;
      *(int *)(param_1 + 0x1278) = *(int *)(param_1 + 0x1278) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1278) = 0;
    }
    if (*(char *)(param_1 + 0x12a0) != '\0') {
      local_6c = 0;
      iVar9 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_6c);
      uVar8 = local_6c;
      if (iVar9 < 0) {
        _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar9);
        uVar11 = *(undefined8 *)(param_1 + 8);
        puVar10 = "<3>%s: %s: Couldn't get usb present prop rc=%d\n";
      }
      else {
        local_6c = 0;
        local_78 = CONCAT44(local_78._4_4_,uVar8 >> 4) & 0xffffffff00000001;
        iVar9 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1340,&local_6c);
        if (-1 < iVar9) {
          if (((int)local_78 == 0) || ((local_6c & 1) != 0)) goto LAB_00122ed8;
LAB_00122e8c:
          iVar7 = 1;
          goto LAB_00122e90;
        }
        _printk("<3>%s: %s: Couldn't read USBIN_CMD_IL rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_usb_suspend",iVar9);
        uVar11 = *(undefined8 *)(param_1 + 8);
        puVar10 = "<3>%s: %s: Couldn't get usb suspend rc=%d\n";
      }
LAB_00123074:
      _printk(puVar10,uVar11,"smblib_get_prop_batt_status",iVar9);
      goto LAB_00122e98;
    }
LAB_00122ed8:
    iVar9 = smblib_get_prop_usb_online(param_1,&local_78);
    if (iVar9 < 0) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      puVar10 = "<3>%s: %s: Couldn't get usb online property rc=%d\n";
      goto LAB_00123074;
    }
    iVar4 = (int)local_78;
    bVar6 = (int)local_78 != 0;
    iVar9 = smblib_get_prop_dc_online(param_1,&local_78);
    if (iVar9 < 0) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      puVar10 = "<3>%s: %s: Couldn't get dc online property rc=%d\n";
      goto LAB_00123074;
    }
    iVar5 = (int)local_78;
    local_6c = 0;
    iVar9 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1006,&local_6c);
    uVar8 = local_6c;
    pcVar3 = DAT_00100160;
    if (iVar9 < 0) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      puVar10 = "<3>%s: %s: Couldn't read BATTERY_CHARGER_STATUS_1 rc=%d\n";
      goto LAB_00123074;
    }
    uVar1 = local_6c & 7;
    DAT_00100159 = bVar6;
    if ((g_touchscreen_usb_pulgin != '\0') && ((bool)tp_charge_status != bVar6)) {
      if (DAT_00100160 != cleanup_module_cfi_jt) {
        __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,DAT_00100160,&DAT_00102f00);
      }
      (*pcVar3)();
    }
    tp_charge_status = bVar6;
    _printk("<3>%s: %s: usb_online=%d, dc_online=%d, stat=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_status",iVar4 != 0,
            iVar5 != 0,uVar1);
    if (iVar4 != 0 || iVar5 != 0) {
      iVar9 = 1;
      uVar8 = 1 << (ulong)(uVar8 & 7);
      if ((uVar8 & 0x1e) == 0) {
        if ((uVar8 & 0x21) == 0) {
          if (iVar4 == 0) goto LAB_0012309c;
LAB_00123094:
          iVar9 = 1;
        }
        else if (iVar4 == 0) {
LAB_0012309c:
          iVar9 = 2;
        }
        else {
          if (iVar7 < 100) goto LAB_00123094;
          iVar9 = 4;
        }
      }
      *param_2 = iVar9;
      uVar13 = is_charging_paused(param_1);
      if ((uVar13 & 1) != 0) goto LAB_00122e8c;
      uVar13 = is_client_vote_enabled_locked
                         (*(undefined8 *)(param_1 + 0x510),"CHG_TERMINATION_VOTER");
      if ((uVar13 & 1) == 0) {
        if (*param_2 == 1) {
          if ((((iVar4 == 0) && (iVar5 != 0)) && (iVar7 = *(int *)(param_1 + 0x1190), iVar7 == 4))
             || ((iVar4 != 0 && (iVar7 = *(int *)(param_1 + 0x1190), iVar7 - 1U < 2))))
          goto LAB_00122e90;
          local_6c = 0;
          iVar9 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x100b,&local_6c);
          if (iVar9 < 0) {
            uVar11 = *(undefined8 *)(param_1 + 8);
            puVar10 = "<3>%s: %s: Couldn't read BATTERY_CHARGER_STATUS_2 rc=%d\n";
            goto LAB_00123074;
          }
          if ((local_6c & 7) == 0 && iVar4 == 0) goto LAB_00122d8c;
        }
        iVar9 = 0;
        goto LAB_00122e98;
      }
      iVar7 = 4;
      goto LAB_00122e90;
    }
    iVar7 = 2;
  }
  else {
    puVar12 = *(undefined8 **)(param_1 + 0x260);
    iVar7 = -0x13;
    if (((puVar12 != (undefined8 *)0x0) && (puVar12 < (undefined8 *)0xfffffffffffff001)) &&
       (iVar7 = iio_read_channel_processed(*puVar12,&local_78), -1 < iVar7)) {
      if ((int)local_78 == 1) {
        iVar9 = 0;
        *param_2 = 0;
        goto LAB_00122e98;
      }
      goto LAB_00122d84;
    }
    iVar9 = ___ratelimit(&smblib_get_prop_batt_status__rs,"smblib_get_prop_batt_status");
    if (iVar9 == 0) goto LAB_00122d84;
    _printk("<3>Couldn't get debug battery prop rc=%d\n",iVar7);
    if (*(int *)(param_1 + 0x1310) == 0) goto LAB_00122dac;
LAB_00122d8c:
    iVar7 = 2;
LAB_00122e90:
    iVar9 = 0;
  }
  *param_2 = iVar7;
LAB_00122e98:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}



/* ---- smblib_is_input_present @ 00123174 ---- */

int smblib_is_input_present(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  *param_2 = 0;
  local_3c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar2);
    puVar3 = "<3>Couldn't get usb presence status rc=%d\n";
LAB_001232a8:
    _printk(puVar3,iVar2);
  }
  else {
    *param_2 = local_3c >> 3 & 2 | *param_2;
    if (*(int *)(param_1 + 0x111c) == 3) {
LAB_00123204:
      uVar4 = 0;
    }
    else {
      local_3c = 0;
      iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1410,&local_3c);
      if (iVar2 < 0) {
        _printk("<3>%s: %s: Couldn't read DCIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_dc_present",iVar2);
        puVar3 = "<3>Couldn't get dc presence status rc=%d\n";
        goto LAB_001232a8;
      }
      if ((local_3c >> 4 & 1) == 0) goto LAB_00123204;
      uVar4 = 4;
    }
    iVar2 = 0;
    *param_2 = *param_2 | uVar4;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_usb_online @ 001232b8 ---- */

int smblib_get_prop_usb_online(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  iVar2 = get_client_vote_locked(*(undefined8 *)(param_1 + 0x510),"USER_VOTER");
  if (iVar2 == 0) {
    iVar2 = 0;
    *param_2 = 0;
    goto LAB_00123380;
  }
  uVar3 = is_client_vote_enabled_locked(*(undefined8 *)(param_1 + 0x510),"CHG_TERMINATION_VOTER");
  if ((uVar3 & 1) == 0) {
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x110b,&local_3c);
    if (iVar2 < 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't read POWER_PATH_STATUS rc=%d\n";
      pcVar6 = "smblib_get_prop_usb_online";
      goto LAB_001233e4;
    }
    uVar7 = local_3c & 0xff;
    if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
      _printk("<6>%s: %s: POWER_PATH_STATUS = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_online",
              (undefined1)local_3c);
    }
    uVar7 = (uint)(((uVar7 ^ 0xffffffff) & 0x11) == 0);
  }
  else {
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_3c);
    if (iVar2 < 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n";
      pcVar6 = "smblib_get_prop_usb_present";
LAB_001233e4:
      _printk(puVar4,uVar5,pcVar6,iVar2);
      goto LAB_00123380;
    }
    iVar2 = 0;
    uVar7 = local_3c >> 4 & 1;
  }
  *param_2 = uVar7;
LAB_00123380:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_dc_online @ 00123414 ---- */

int smblib_get_prop_dc_online(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *in_x18;
  uint uVar7;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if ((*(int *)(param_1 + 0x111c) == 3) ||
     (iVar2 = get_client_vote(*(undefined8 *)(param_1 + 0x4f0),"USER_VOTER"), iVar2 != 0)) {
LAB_00123464:
    iVar2 = 0;
    *param_2 = 0;
  }
  else {
    uVar3 = is_client_vote_enabled(*(undefined8 *)(param_1 + 0x4f0),"CHG_TERMINATION_VOTER");
    if ((uVar3 & 1) == 0) {
      local_3c = 0;
      iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x110b,&local_3c);
      if (-1 < iVar2) {
        uVar7 = local_3c & 0xff;
        if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
          _printk("<6>%s: %s: POWER_PATH_STATUS = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_dc_online",
                  (undefined1)local_3c);
        }
        *param_2 = (uint)(((uVar7 ^ 0xffffffff) & 9) == 0);
        if (*(int *)(param_1 + 0x11b4) < 6) {
          *param_2 = 0;
          uVar5 = *(undefined8 *)(param_1 + 8);
          puVar4 = "<3>%s: %s: sink detect\n";
        }
        else {
          if (*(int *)(param_1 + 0x1158) == 0) goto LAB_0012346c;
          *param_2 = 1;
          if ((**(byte **)(param_1 + 0x280) >> 2 & 1) == 0) goto LAB_0012346c;
          uVar5 = *(undefined8 *)(param_1 + 8);
          puVar4 = "<6>%s: %s: force dc online due to pd charge\n";
        }
        _printk(puVar4,uVar5,"smblib_get_prop_dc_online");
        goto LAB_0012346c;
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't read POWER_PATH_STATUS rc=%d\n";
      pcVar6 = "smblib_get_prop_dc_online";
    }
    else {
      if (*(int *)(param_1 + 0x111c) == 3) goto LAB_00123464;
      local_3c = 0;
      iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1410,&local_3c);
      if (-1 < iVar2) {
        iVar2 = 0;
        *param_2 = local_3c >> 4 & 1;
        goto LAB_0012346c;
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't read DCIN_RT_STS rc=%d\n";
      pcVar6 = "smblib_get_prop_dc_present";
    }
    _printk(puVar4,uVar5,pcVar6,iVar2);
  }
LAB_0012346c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- is_charging_paused @ 001235e0 ---- */

void is_charging_paused(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_2c = 0;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1043,&local_2c);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't read CHARGING_PAUSE_CMD rc=%d\n",*(undefined8 *)(param_1 + 8),"is_charging_paused",iVar3);
    uVar1 = 0;
  }
  else {
    uVar1 = local_2c & 1;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ---- smblib_get_prop_batt_charge_type @ 0012367c ---- */

int smblib_get_prop_batt_charge_type(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1006,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read BATTERY_CHARGER_STATUS_1 rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_charge_type",iVar2);
  }
  else {
    switch(local_3c & 7) {
    case 1:
    case 2:
      uVar3 = 2;
      break;
    case 3:
      uVar3 = 3;
      break;
    case 4:
      uVar3 = 5;
      break;
    default:
      uVar3 = 1;
      break;
    case 6:
    case 7:
      uVar3 = 6;
    }
    *param_2 = uVar3;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_batt_health @ 00123788 ---- */

void smblib_get_prop_batt_health(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_38;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  local_2c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1007,&local_2c);
  if (param_1 == 0) {
    _printk("<3>%s : smb_charger is null,can not use\n","smblib_get_prop_batt_health");
    uVar3 = 0xffffffea;
  }
  else {
    if ((-1 < iVar2) && ((local_2c >> 1 & 1) != 0)) {
      uVar5 = *(ulong *)(param_1 + 0x260);
      iVar2 = -0x13;
      if ((uVar5 == 0) ||
         ((0xfffffffffffff000 < uVar5 ||
          (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0x28),&local_38), iVar2 < 0)))
         ) {
        _printk("<3>%s: %s: Couldn't get voltage_now prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_health",iVar2);
      }
      else {
        iVar2 = get_effective_result_locked(*(undefined8 *)(param_1 + 0x508));
        if (iVar2 + 40000 <= (int)local_38) {
          *param_2 = 4;
          _printk("<3>%s: %s: battery over-voltage vbat_fg = %duV, fv = %duV\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_health",
                  local_38 & 0xffffffff,iVar2);
          uVar3 = 0;
          goto LAB_001238f4;
        }
      }
    }
    uVar5 = *(ulong *)(param_1 + 0x260);
    iVar2 = -0x13;
    if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) ||
       (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0x50),&local_38), iVar2 < 0)) {
      _printk("<3>Couldn't read batt temp prop rc=%d\n",iVar2);
      uVar3 = 0xffffffea;
    }
    else {
      if ((int)local_38 < 600) {
        if ((int)local_38 < 0x244) {
          if ((int)local_38 < 0x1c2) {
            if ((int)local_38 < 0x96) {
              if ((int)local_38 < -9) {
                uVar4 = 6;
              }
              else {
                uVar4 = 0xc;
              }
            }
            else {
              uVar4 = 1;
            }
          }
          else {
            uVar4 = 0xb;
          }
        }
        else {
          uVar4 = 0xd;
        }
      }
      else {
        uVar4 = 2;
      }
      uVar3 = 0;
      *param_2 = uVar4;
    }
  }
LAB_001238f4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- smblib_get_prop_system_temp_level @ 00123950 ---- */

undefined8 smblib_get_prop_system_temp_level(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x116c);
  return 0;
}



/* ---- smblib_get_prop_system_temp_level_max @ 00123968 ---- */

undefined8 smblib_get_prop_system_temp_level_max(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1170);
  return 0;
}



/* ---- smblib_get_prop_input_current_limited @ 00123980 ---- */

int smblib_get_prop_input_current_limited(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  uVar3 = *(uint *)(param_1 + 0x11b0);
  if ((int)uVar3 < 0) {
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x110a,&local_3c);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read AICL_STATUS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_input_current_limited",
              iVar2);
      goto LAB_001239f0;
    }
    if ((local_3c >> 6 & 1) == 0) {
      uVar3 = (uint)*(byte *)(param_1 + 0x1198);
    }
    else {
      uVar3 = 1;
    }
  }
  iVar2 = 0;
  *param_2 = uVar3;
LAB_001239f0:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_batt_iterm @ 00123a4c ---- */

int smblib_get_prop_batt_iterm(long param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined2 local_40;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_40 = 0;
  local_3c = 0;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x10c0,&local_3c);
  if (iVar3 < 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar4 = "<3>%s: %s: Couldn't read CHGR_ENG_CHARGING_CFG_REG rc=%d\n";
LAB_00123b74:
    _printk(puVar4,uVar5,"smblib_get_prop_batt_iterm",iVar3);
  }
  else {
    if ((local_3c >> 3 & 1) == 0) {
      iVar3 = regmap_bulk_read(*(undefined8 *)(param_1 + 0x10),0x1067,&local_40,2);
      if (iVar3 < 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        puVar4 = "<3>%s: %s: Couldn't read CHGR_ADC_ITERM_UP_THD_MSB_REG rc=%d\n";
        goto LAB_00123b74;
      }
      uVar1 = (uint)local_40._1_1_ << 0x10 | (uint)(byte)local_40 << 0x18;
      iVar7 = 5000;
      if (*(int *)(param_1 + 0x111c) != 3) {
        iVar7 = 10000;
      }
      iVar6 = -0x3fff;
      if (0 < (int)uVar1) {
        iVar6 = 0x3fff;
      }
      iVar7 = (iVar6 + ((int)uVar1 >> 0x10) * iVar7) / 0x7fff;
    }
    else {
      iVar7 = -0x16;
      iVar3 = 0;
    }
    *param_2 = iVar7;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_get_prop_batt_charge_done @ 00123b8c ---- */

int smblib_get_prop_batt_charge_done(long param_1,uint *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40 = local_40 & 0xffffffff00000000;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1006,&local_40);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't read BATTERY_CHARGER_STATUS_1 rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_charge_done",iVar3);
  }
  else {
    bVar2 = ((uint)local_40 & 7) == 5;
    *param_2 = (uint)bVar2;
    if (bVar2) {
      uVar4 = *(ulong *)(param_1 + 0x260);
      iVar3 = -0x13;
      local_40 = 0;
      if (((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) ||
         (iVar3 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0x48),&local_40), iVar3 < 0)) {
        _printk("<3>%s: %s: Couldn't get fastcharge mode:%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_fastcharge_mode",iVar3);
        iVar3 = 0;
      }
      else if ((uint)local_40 == 1) {
        *(undefined1 *)(param_1 + 0x1303) = 1;
        _printk("<3>charge done, disable ffc mode but maintain ffc_iterm\n");
        smblib_set_fastcharge_mode(param_1,0);
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0;
      *(undefined1 *)(param_1 + 0x1303) = 0;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_get_fastcharge_mode @ 00123ce0 ---- */

int smblib_get_fastcharge_mode(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  iVar2 = -0x13;
  uVar3 = *(ulong *)(param_1 + 0x260);
  local_30 = 0;
  if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) ||
     (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar3 + 0x48),&local_30), iVar2 < 0)) {
    _printk("<3>%s: %s: Couldn't get fastcharge mode:%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_fastcharge_mode",iVar2);
  }
  else {
    iVar2 = (int)local_30;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_set_fastcharge_mode @ 00123d8c ---- */

ulong smblib_set_fastcharge_mode(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x5e0);
  local_50 = 0;
  uVar6 = get_ext_channels(*param_1,&smblib_qg_ext_iio_chan,0x19);
  if (0xfffffffffffff000 < uVar6) {
    if ((int)uVar6 == -0x205) {
      uVar6 = 0xfffffdfb;
    }
    else {
      _dev_err(*param_1,"Failed to get channels, %d\n",uVar6 & 0xffffffff);
      param_1[0x4c] = 0xffffffffffffffea;
    }
    goto LAB_00123df8;
  }
  param_1[0x4c] = uVar6;
  if (uVar6 == 0) {
    iVar5 = -0x13;
LAB_00123e7c:
    uVar8 = param_1[1];
    puVar7 = "<3>%s: %s: Couldn't write fastcharge mode:%d\n";
LAB_00123e88:
    _printk(puVar7,uVar8,"smblib_set_fastcharge_mode",iVar5);
LAB_00123e94:
    iVar5 = -0xfa;
  }
  else {
    iVar5 = iio_write_channel_raw(*(undefined8 *)(uVar6 + 0x48),param_2 != 0);
    if (iVar5 < 0) goto LAB_00123e7c;
    if (param_2 == 0) {
      vote(param_1[0xa1],"NON_FFC_VFLOAT_VOTER",1,0x445c00);
      goto LAB_00123e94;
    }
    vote(param_1[0xa1],"NON_FFC_VFLOAT_VOTER",0,0);
    uVar6 = param_1[0x4c];
    iVar5 = -0x13;
    if (((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) ||
       (iVar5 = iio_read_channel_processed(*(undefined8 *)(uVar6 + 0x78),&local_50), iVar5 < 0)) {
      uVar8 = param_1[1];
      puVar7 = "<3>%s: %s: Couldn't set ffc termination current:%d\n";
      goto LAB_00123e88;
    }
    iVar5 = (int)local_50;
  }
  pcVar1 = (char *)((long)param_1 + 0x1303);
  if (*pcVar1 == '\0') {
    if (iVar5 != 0) {
      uVar3 = (iVar5 * 0x7fff) / 10000;
      iVar4 = regmap_write(param_1[2],0x1067,uVar3 >> 8 & 0xff);
      if (iVar4 < 0) {
        uVar8 = *param_1;
        pcVar9 = "Couldn\'t set term MSB rc=%d\n";
      }
      else {
        iVar4 = regmap_write(param_1[2],0x1068,uVar3 & 0xff);
        if (-1 < iVar4) goto LAB_00123fc4;
        uVar8 = *param_1;
        pcVar9 = "Couldn\'t set term LSB rc=%d\n";
      }
      _dev_err(uVar8,pcVar9,iVar4);
    }
LAB_00123fc4:
    vote(param_1[0x9f],"PD_VERIFED_VOTER",param_2 == 0,5400000);
    _printk("<3>fastcharge mode:%d iterm:%d\n",param_2 != 0,iVar5);
    uVar6 = param_1[0x4c];
    iVar5 = -0x13;
    if (((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) ||
       (iVar5 = iio_write_channel_raw(*(undefined8 *)(uVar6 + 0xc0),*pcVar1), iVar5 < 0)) {
      _printk("<3>%s: %s: Couldn't set BATT_FULL_CURRENT status:%d\n",param_1[1],"smblib_set_fastcharge_mode",iVar5);
    }
  }
  else {
    uVar6 = param_1[0x4c];
    iVar5 = -0x13;
    if (((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) ||
       (iVar5 = iio_write_channel_raw(*(undefined8 *)(uVar6 + 0xc0),1), iVar5 < 0)) {
      _printk("<3>%s: %s: Couldn't set BATT_FULL_CURRENT status:%d\n",param_1[1],"smblib_set_fastcharge_mode",iVar5);
    }
    _printk("<3>maintain_ffc_iterm:%d\n",*pcVar1);
  }
  uVar6 = 0;
LAB_00123df8:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}



/* ---- smblib_get_prop_battery_charging_enabled @ 00124060 ---- */

undefined8 smblib_get_prop_battery_charging_enabled(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = get_client_vote(*(undefined8 *)(param_1 + 0x510),"MAIN_ICL_MIN_VOTER");
  *param_2 = (uint)(iVar1 != 100000);
  return 0;
}



/* ---- smblib_get_prop_battery_charging_limited @ 001240b4 ---- */

undefined8 smblib_get_prop_battery_charging_limited(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar2 = *(int *)(param_1 + 0x128c);
  iVar3 = get_client_vote(*(undefined8 *)(param_1 + 0x510),"MAIN_CHG_VOTER");
  iVar1 = 500000;
  if (iVar2 != 0xe) {
    iVar1 = 2000000;
  }
  *param_2 = (uint)(iVar3 == iVar1);
  return 0;
}



/* ---- smblib_get_prop_battery_cp_input_suspend @ 0012411c ---- */

undefined8 smblib_get_prop_battery_cp_input_suspend(long param_1,uint *param_2)

{
  *param_2 = (uint)*(byte *)(param_1 + 0x1300);
  return 0;
}



/* ---- smblib_get_batt_current_now @ 00124138 ---- */

int smblib_get_batt_current_now(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = *(ulong *)(param_1 + 0x260);
  iVar1 = -0x13;
  if (((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) ||
     (iVar1 = iio_read_channel_processed(*(undefined8 *)(uVar2 + 0x20)), iVar1 < 0)) {
    _printk("<3>%s: %s: Couldn't get current_now prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_batt_current_now",iVar1);
    return iVar1;
  }
  *param_2 = -*param_2;
  return 0;
}



/* ---- smb5_config_iterm @ 001241c8 ---- */

int smb5_config_iterm(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ushort local_3c [2];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  if (param_2 == 0) {
LAB_00124244:
    if (param_3 != 0) {
      uVar1 = (uint)((ulong)((long)(param_3 * 0x7fff) * 0x68db8bad) >> 0x2c) -
              (param_3 * 0x7fff >> 0x1f);
      local_3c[0] = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
      iVar3 = regmap_bulk_write(param_1[2],0x1069,local_3c,2);
      if (iVar3 < 0) {
        uVar4 = *param_1;
        pcVar5 = "Couldn\'t configure ITERM threshold LOW rc=%d\n";
        goto LAB_001242fc;
      }
    }
    iVar3 = 0;
  }
  else {
    uVar1 = (param_2 * 0x7fff) / 10000;
    iVar3 = regmap_write(param_1[2],0x1067,uVar1 >> 8 & 0xff);
    if (iVar3 < 0) {
      uVar4 = *param_1;
      pcVar5 = "Couldn\'t set term MSB rc=%d\n";
    }
    else {
      iVar3 = regmap_write(param_1[2],0x1068,uVar1 & 0xff);
      if (-1 < iVar3) goto LAB_00124244;
      uVar4 = *param_1;
      pcVar5 = "Couldn\'t set term LSB rc=%d\n";
    }
LAB_001242fc:
    _dev_err(uVar4,pcVar5,iVar3);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_set_recharge_mode @ 0012430c ---- */

int smblib_set_recharge_mode(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 6;
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1051,6,uVar2,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't write to CHGR_CFG2_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_recharge_mode",iVar1);
  }
  _printk("<3>VBAT_BASED_RECHG_BIT write %d\n",param_2);
  return iVar1;
}



/* ---- smblib_get_recharge_mode @ 001243b0 ---- */

uint smblib_get_recharge_mode(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  uVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1051,&local_2c);
  uVar2 = local_2c;
  if ((int)uVar3 < 0) {
    _printk("<3>%s: %s: Couldn't read CHGR_CFG2_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_recharge_mode",uVar3);
  }
  else {
    _printk("<3>VBAT_BASED_RECHG_BIT read %d\n",local_2c & 2);
    uVar3 = uVar2 >> 1 & 1;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* ---- smblib_set_prop_input_suspend @ 00124460 ---- */

int smblib_set_prop_input_suspend(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = vote(*(undefined8 *)(param_1 + 0x510),"USER_VOTER",*param_2 != 0,100000);
  if (iVar1 < 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar4 = "resume";
    if (*param_2 != 0) {
      pcVar4 = "suspend";
    }
    puVar2 = "<3>%s: %s: Couldn't vote to %s USB rc=%d\n";
  }
  else {
    iVar1 = vote(*(undefined8 *)(param_1 + 0x4f0),"USER_VOTER",*param_2 != 0,100000);
    if (iVar1 < 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      pcVar4 = "resume";
      if (*param_2 != 0) {
        pcVar4 = "suspend";
      }
      puVar2 = "<3>%s: %s: Couldn't vote to %s DC rc=%d\n";
    }
    else {
      iVar1 = vote(*(undefined8 *)(param_1 + 0x528),"USER_VOTER",*param_2 != 0,0);
      if (-1 < iVar1) {
        *(bool *)(param_1 + 0x1300) = *param_2 != 0;
        power_supply_changed(*(undefined8 *)(param_1 + 0x418));
        return iVar1;
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      pcVar4 = "resume";
      if (*param_2 != 0) {
        pcVar4 = "suspend";
      }
      puVar2 = "<3>%s: %s: Couldn't vote to %s CHG_EN rc=%d\n";
    }
  }
  _printk(puVar2,uVar3,"smblib_set_prop_input_suspend",pcVar4,iVar1);
  return iVar1;
}



/* ---- smblib_set_prop_batt_capacity @ 001245cc ---- */

undefined8 smblib_set_prop_batt_capacity(long param_1,undefined4 *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined4 *)(param_1 + 0x1184) = *param_2;
  power_supply_changed(*(undefined8 *)(param_1 + 0x418));
  return 0;
}



/* ---- smblib_set_prop_batt_cycle @ 00124604 ---- */

undefined8 smblib_set_prop_batt_cycle(long param_1,undefined4 *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined4 *)(param_1 + 0x1188) = *param_2;
  power_supply_changed(*(undefined8 *)(param_1 + 0x418));
  return 0;
}



/* ---- smblib_set_prop_batt_temp @ 0012463c ---- */

undefined8 smblib_set_prop_batt_temp(long param_1,undefined4 *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined4 *)(param_1 + 0x118c) = *param_2;
  power_supply_changed(*(undefined8 *)(param_1 + 0x418));
  return 0;
}



/* ---- smblib_set_prop_system_temp_level @ 00124674 ---- */

void smblib_set_prop_system_temp_level(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  iVar3 = *param_2;
  if (iVar3 < 0) {
    uVar4 = 0xffffffea;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1170);
    uVar4 = 0xffffffea;
    if ((0 < iVar1) && (iVar3 <= iVar1)) {
      uVar4 = *(undefined8 *)(param_1 + 0x528);
      *(int *)(param_1 + 0x116c) = iVar3;
      if (iVar3 == iVar1) {
        uVar5 = 1;
      }
      else {
        vote(uVar4,"THERMAL_DAEMON_VOTER",0,0);
        local_2c = *(undefined4 *)(param_1 + 0x116c);
        iVar3 = srcu_notifier_call_chain(&qpnp_smb5_notifier,2,&local_2c);
        if (iVar3 != 0) {
          _printk("<3>%s: qpnp_smb5_notifier_call_chain error:%d\n","smblib_set_prop_system_temp_level",iVar3);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x4f8);
        if (*(int *)(param_1 + 0x116c) != 0) {
          vote(uVar4,"THERMAL_DAEMON_VOTER",1,
               *(undefined4 *)(*(long *)(param_1 + 0x1178) + (long)*(int *)(param_1 + 0x116c) * 4));
          uVar4 = 0;
          goto LAB_00124750;
        }
        uVar5 = 0;
      }
      uVar4 = vote(uVar4,"THERMAL_DAEMON_VOTER",uVar5,0);
    }
  }
LAB_00124750:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- smblib_set_prop_input_current_limited @ 0012479c ---- */

undefined8 smblib_set_prop_input_current_limited(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x11b0) = param_2;
  return 0;
}



/* ---- smblib_set_prop_rechg_soc_thresh @ 001247b4 ---- */

int smblib_set_prop_rechg_soc_thresh(long param_1,int param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = -0x32;
  if (0 < param_2 * 0xff) {
    iVar1 = 0x32;
  }
  iVar1 = iVar1 + param_2 * 0xff;
  iVar1 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x107d,
                       (uint)((ulong)((long)iVar1 * 0x51eb851f) >> 0x25) - (iVar1 >> 0x1f) & 0xff);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't write to RCHG_SOC_THRESHOLD_CFG_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_rechg_soc_thresh",iVar1);
  }
  else {
    *(int *)(param_1 + 0x11d0) = param_2;
  }
  return iVar1;
}



/* ---- smblib_force_vbus_voltage @ 0012485c ---- */

int smblib_force_vbus_voltage(long param_1,char param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1343,param_2,param_2,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't write to CMD_HVDCP_2_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_force_vbus_voltage",iVar1);
  }
  if (param_2 == '\x04') {
    *(undefined4 *)(param_1 + 0x1320) = 1;
    _printk("<3>%s: %s: dpdm_qc3p0_flag set\n",*(undefined8 *)(param_1 + 8),"smblib_force_vbus_voltage");
  }
  else {
    *(undefined4 *)(param_1 + 0x1320) = 0;
    _printk("<3>%s: %s: dpdm_qc3p0_flag reset, val:%#04x\n",*(undefined8 *)(param_1 + 8),"smblib_force_vbus_voltage",param_2);
  }
  return iVar1;
}



/* ---- smblib_dp_dm @ 00124928 ---- */

undefined8 smblib_dp_dm(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0x1301) = 1;
  _printk("<6>dp_dm is controled by our self\n");
  return 0;
}



/* ---- smblib_hvdcp3_set_fsw @ 00124964 ---- */

void smblib_hvdcp3_set_fsw(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = *(uint *)((long)param_1 + 0x12bc);
  if ((int)uVar1 < 5) {
    uVar3 = *(undefined4 *)(param_1 + 0x52);
  }
  else if (uVar1 < 0x14) {
    uVar3 = *(undefined4 *)((long)param_1 + 0x294);
  }
  else if (uVar1 < 0x23) {
    uVar3 = *(undefined4 *)(param_1 + 0x53);
  }
  else {
    uVar3 = *(undefined4 *)((long)param_1 + 0x29c);
  }
  iVar2 = smblib_set_charge_param(param_1,param_1 + 0x31,uVar3);
  if (iVar2 < 0) {
    _dev_err(*param_1,"Error in setting freq_buck rc=%d\n",iVar2);
  }
  return;
}



/* ---- smblib_dp_pulse @ 001249f0 ---- */

int smblib_dp_pulse(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x1320) == 0) {
    _printk("<3>%s: %s: set dpdm to continuous mode before dp pulse\n",*(undefined8 *)(param_1 + 8),"smblib_dp_pulse");
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1343,4,4,0,0,0);
    if (iVar1 < 0) {
      puVar2 = "<3>%s: %s: set dpdm to continuous mode failed in dp pulse\n";
    }
    else {
      msleep(100);
      puVar2 = "<3>%s: %s: set dpdm to continuous mode finished in dp pulse\n";
      *(undefined4 *)(param_1 + 0x1320) = 1;
    }
    _printk(puVar2,*(undefined8 *)(param_1 + 8),"smblib_dp_pulse");
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1343,1,1,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't write to CMD_HVDCP_2_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_dp_pulse",iVar1);
  }
  return iVar1;
}



/* ---- smblib_dm_pulse @ 00124ae4 ---- */

int smblib_dm_pulse(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x1320) == 0) {
    _printk("<3>%s: %s: set dpdm to continuous mode before dm pulse\n",*(undefined8 *)(param_1 + 8),"smblib_dm_pulse");
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1343,4,4,0,0,0);
    if (iVar1 < 0) {
      puVar2 = "<3>%s: %s: set dpdm to continuous mode failed in dm pulse\n";
    }
    else {
      msleep(100);
      puVar2 = "<3>%s: %s: set dpdm to continuous mode finished in dm pulse\n";
      *(undefined4 *)(param_1 + 0x1320) = 1;
    }
    _printk(puVar2,*(undefined8 *)(param_1 + 8),"smblib_dm_pulse");
  }
  iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1343,2,2,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't write to CMD_HVDCP_2_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_dm_pulse",iVar1);
  }
  return iVar1;
}



/* ---- smblib_get_charge_current @ 00124bd8 ---- */

int smblib_get_charge_current(long param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_58;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_48 = *(long *)(lVar5 + 0x5e0);
  lVar5 = smblib_get_apsd_result();
  local_58 = 0;
  if (*(int *)(param_1 + 0x1158) != 0) {
    iVar3 = get_client_vote_locked(*(undefined8 *)(param_1 + 0x510),"PD_VOTER");
    iVar4 = 0;
    *param_2 = iVar3;
    goto LAB_00124d3c;
  }
  local_4c = 0;
  iVar4 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x150d,&local_4c);
  uVar2 = local_4c;
  if (iVar4 < 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    puVar6 = "<3>%s: %s: Couldn't read TYPE_C_STATUS_5 rc=%d\n";
  }
  else {
    iVar4 = smblib_get_charge_param(param_1,param_1 + 0xc0,&local_58);
    if (-1 < iVar4) {
      iVar3 = smblib_get_prop_ufp_mode(param_1);
      bVar1 = *(byte *)(lVar5 + 8);
      if ((bVar1 & 0x60) == 0) {
        if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x1197) != '\0')) {
          if (iVar3 == 8) {
            iVar8 = 3000000;
          }
          else {
            iVar8 = 1500000;
            if (iVar3 != 7) {
              if (iVar3 == 6) {
                switch(bVar1 - 2 >> 1 | (uint)bVar1 << 0x1f) {
                case 0:
                case 3:
                case 7:
                  iVar8 = *(int *)(param_1 + 0x11a4);
                  break;
                case 1:
                  break;
                default:
                  goto code_r0x00124d20;
                }
              }
              else {
code_r0x00124d20:
                iVar8 = 0;
              }
            }
          }
        }
        else {
          uVar2 = bVar1 - 2 >> 1 | (uint)bVar1 << 0x1f;
          if (7 < uVar2) goto code_r0x00124d20;
          iVar8 = *(int *)(&DAT_00111a70 + (long)(int)uVar2 * 4);
        }
        if (iVar8 <= (int)local_58) {
          iVar8 = (int)local_58;
        }
      }
      else {
        iVar8 = 3000000;
      }
      iVar4 = 0;
      *param_2 = iVar8;
      goto LAB_00124d3c;
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    puVar6 = "<3>%s: %s: Couldn't get settled ICL rc=%d\n";
  }
  _printk(puVar6,uVar7,"smblib_get_charge_current",iVar4);
LAB_00124d3c:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- smblib_dp_dm_cp @ 00124db0 ---- */

int smblib_dp_dm_cp(long param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(param_1 + 0x12cb) == '\0') {
    _printk("<3>%s: %s: smblib_dp_dm val=%d\n",*(undefined8 *)(param_1 + 8),"smblib_dp_dm_cp",param_2);
    if (param_2 == 0xd) {
      iVar3 = smblib_force_vbus_voltage(param_1,8);
      *(undefined4 *)(param_1 + 0x12bc) = 0;
      if (iVar3 < 0) {
        _printk("<3>Failed to force 5V\n");
        return iVar3;
      }
      return iVar3;
    }
    pcVar1 = (char *)(param_1 + 0x12c9);
    if (param_2 == 5) {
      iVar3 = smblib_dm_pulse(param_1);
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x12bc) != 0)) {
        *(int *)(param_1 + 0x12bc) = *(int *)(param_1 + 0x12bc) + -1;
      }
      if ((**(byte **)(param_1 + 0x280) >> 3 & 1) == 0) {
        cVar2 = *pcVar1;
      }
      else {
        _printk("<6>%s: %s: DP_DM_DM_PULSE rc=%d cnt=%d\n",*(undefined8 *)(param_1 + 8),"smblib_dp_dm_cp",iVar3,
                *(undefined4 *)(param_1 + 0x12bc));
        cVar2 = *pcVar1;
      }
      if (cVar2 == '\0') {
        return iVar3;
      }
      if (*(char *)(param_1 + 0x1301) == '\0') {
        return iVar3;
      }
      if (0xb < *(int *)(param_1 + 0x12bc)) {
        return iVar3;
      }
      if (*(char *)(param_1 + 0x12cd) == '\0') {
        return iVar3;
      }
      vote(*(undefined8 *)(param_1 + 0x510),"QC_A_CP_ICL_MAX_VOTER",0,0);
      *(undefined1 *)(param_1 + 0x12cd) = 0;
      return iVar3;
    }
    if ((param_2 == 4) && (*(int *)(param_1 + 0x12bc) < 0x18)) {
      *(int *)(param_1 + 0x12bc) = *(int *)(param_1 + 0x12bc) + 1;
      smblib_hvdcp3_set_fsw(param_1);
      iVar3 = smblib_dp_pulse(param_1);
      if (iVar3 < 0) {
        _printk("<3>%s: %s: Couldn't increase pulse count rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_dp_dm_cp",iVar3);
        *(int *)(param_1 + 0x12bc) = *(int *)(param_1 + 0x12bc) + -1;
      }
      if ((**(byte **)(param_1 + 0x280) >> 3 & 1) == 0) {
        cVar2 = *pcVar1;
      }
      else {
        _printk("<6>%s: %s: DP_DM_DP_PULSE rc=%d cnt=%d\n",*(undefined8 *)(param_1 + 8),"smblib_dp_dm_cp",iVar3,
                *(undefined4 *)(param_1 + 0x12bc));
        cVar2 = *pcVar1;
      }
      if (cVar2 == '\0') {
        return iVar3;
      }
      if (*(char *)(param_1 + 0x1301) == '\0') {
        return iVar3;
      }
      if (*(int *)(param_1 + 0x12bc) < 0xc) {
        return iVar3;
      }
      if (*(char *)(param_1 + 0x12cd) == '\0') {
        vote(*(undefined8 *)(param_1 + 0x510),"QC_A_CP_ICL_MAX_VOTER",1,2000000);
        *(undefined1 *)(param_1 + 0x12cd) = 1;
        return iVar3;
      }
      return iVar3;
    }
  }
  return 0;
}



/* ---- smblib_disable_hw_jeita @ 00124fd8 ---- */

int smblib_disable_hw_jeita(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar3 = 0;
  if ((param_2 & 1) == 0) {
    uVar3 = 0xf;
  }
  iVar1 = regmap_update_bits_base(param_1[2],0x1090,0xf,uVar3,0,0,0);
  iVar2 = 0;
  if (iVar1 < 0) {
    _dev_err(*param_1,"Couldn\'t configure s/w jeita rc=%d\n",iVar1);
    iVar2 = iVar1;
  }
  return iVar2;
}



/* ---- smblib_get_prop_voltage_wls_output @ 00125054 ---- */

void smblib_get_prop_voltage_wls_output(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(param_1 + 0x438);
  if (lVar1 == 0) {
    lVar1 = power_supply_get_by_name("wireless");
    *(long *)(param_1 + 0x438) = lVar1;
    if (lVar1 == 0) {
      *param_2 = 0xffffffea;
      return;
    }
  }
  power_supply_get_property(lVar1,0x26,param_2);
  return;
}



/* ---- smblib_get_prop_dc_present @ 001250b8 ---- */

int smblib_get_prop_dc_present(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if (*(int *)(param_1 + 0x111c) == 3) {
    iVar2 = 0;
    *param_2 = 0;
  }
  else {
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1410,&local_3c);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read DCIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_dc_present",iVar2);
    }
    else {
      iVar2 = 0;
      *param_2 = local_3c >> 4 & 1;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_dc_current_max @ 00125184 ---- */

void smblib_get_prop_dc_current_max(long param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  smblib_get_charge_param(param_1,param_1 + 0x110,param_2);
  return;
}



/* ---- smblib_get_prop_dc_voltage_max @ 001251b0 ---- */

int smblib_get_prop_dc_voltage_max(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *param_2 = 12000000;
  lVar2 = param_1[0x87];
  if (lVar2 == 0) {
    lVar2 = power_supply_get_by_name("wireless");
    param_1[0x87] = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  iVar1 = power_supply_get_property(lVar2,8,param_2);
  if (iVar1 < 0) {
    _dev_err(*param_1,"Couldn\'t get VOLTAGE_MAX, rc=%d\n",iVar1);
    return iVar1;
  }
  return 0;
}



/* ---- smblib_get_prop_dc_voltage_now @ 0012523c ---- */

int smblib_get_prop_dc_voltage_now(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = param_1[0x87];
  if (lVar2 == 0) {
    lVar2 = power_supply_get_by_name("wireless");
    param_1[0x87] = lVar2;
    if (lVar2 == 0) {
      *param_2 = 0xffffffea;
      return 0;
    }
  }
  iVar1 = power_supply_get_property(lVar2,0x26,param_2);
  if (iVar1 < 0) {
    _dev_err(*param_1,"Couldn\'t get POWER_SUPPLY_PROP_INPUT_VOLTAGE_LIMIT, rc=%d\n",iVar1);
  }
  return iVar1;
}



/* ---- smblib_set_prop_dc_current_max @ 001252d0 ---- */

void smblib_set_prop_dc_current_max(long param_1,undefined4 *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0x127e) = 1;
  smblib_set_charge_param(param_1,param_1 + 0x110,*param_2);
  return;
}



/* ---- smblib_set_prop_voltage_wls_output @ 0012530c ---- */

int smblib_set_prop_voltage_wls_output(undefined8 *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = param_1[0x87];
  if (lVar2 == 0) {
    lVar2 = power_supply_get_by_name("wireless");
    param_1[0x87] = lVar2;
    if (lVar2 == 0) {
      return -0x13;
    }
  }
  iVar1 = power_supply_set_property(lVar2,0x26,param_2);
  if (iVar1 < 0) {
    _dev_err(*param_1,"Couldn\'t set POWER_SUPPLY_PROP_INPUT_VOLTAGE_LIMIT, rc=%d\n",iVar1);
  }
  if ((*(byte *)param_1[0x50] >> 5 & 1) != 0) {
    _printk("<6>%s: %s: %d\n",param_1[1],"smblib_set_prop_voltage_wls_output",*param_2);
  }
  if (((*(char *)((long)param_1 + 0x127e) == '\0') && (0 < *param_2)) &&
     (*param_2 < *(int *)(param_1 + 0x25e))) {
    alarm_start_relative(param_1 + 0x20b,5000000000);
  }
  *(int *)(param_1 + 0x25e) = *param_2;
  return iVar1;
}



/* ---- smblib_set_prop_dc_reset @ 0012540c ---- */

int smblib_set_prop_dc_reset(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = vote(*(undefined8 *)(param_1 + 0x4f0),"VOUT_VOTER",1,0);
  if (iVar1 < 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = "<3>%s: %s: Couldn't suspend DC rc=%d\n";
  }
  else {
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1440,6,2,0,0,0);
    if (iVar1 < 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar2 = "<3>%s: %s: Couldn't set DCIN_EN_OVERRIDE_BIT rc=%d\n";
    }
    else {
      iVar1 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x1445,3);
      if (iVar1 < 0) {
        _printk("<3>%s: %s: Couldn't write %d to DCIN_CMD_PON_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_dc_reset",3,iVar1);
        return iVar1;
      }
      usleep_range_state(10000,0x271a,2);
      iVar1 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x1445,0);
      if (iVar1 < 0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        puVar2 = "<3>%s: %s: Couldn't clear DCIN_CMD_PON_REG rc=%d\n";
      }
      else {
        iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1440,6,0,0,0,0);
        if (iVar1 < 0) {
          uVar3 = *(undefined8 *)(param_1 + 8);
          puVar2 = "<3>%s: %s: Couldn't clear DCIN_EN_OVERRIDE_BIT rc=%d\n";
        }
        else {
          iVar1 = vote(*(undefined8 *)(param_1 + 0x4f0),"VOUT_VOTER",0,0);
          if (-1 < iVar1) {
            if ((**(byte **)(param_1 + 0x280) >> 2 & 1) == 0) {
              return iVar1;
            }
            _printk("<6>%s: %s: Wireless charger removal detection successful\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_dc_reset");
            return iVar1;
          }
          uVar3 = *(undefined8 *)(param_1 + 8);
          puVar2 = "<3>%s: %s: Couldn't unsuspend  DC rc=%d\n";
        }
      }
    }
  }
  _printk(puVar2,uVar3,"smblib_set_prop_dc_reset",iVar1);
  return iVar1;
}



/* ---- smblib_get_quick_charge_type @ 001255b4 ---- */

undefined8 smblib_get_quick_charge_type(long param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_40 = 0;
  if (*(uint *)(param_1 + 0x118c) == 0xffffffea) {
    uVar5 = *(ulong *)(param_1 + 0x260);
    iVar3 = -0x13;
    if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) ||
       (iVar3 = iio_read_channel_processed(*(undefined8 *)(uVar5 + 0x50),&local_40), iVar3 < 0)) {
      _printk("<3>%s: %s: Couldn't get temp prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_batt_temp",iVar3);
      _printk("<3>%s: %s: Couldn't get temp prop rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_quick_charge_type",iVar3);
    }
  }
  else {
    local_40 = (ulong)*(uint *)(param_1 + 0x118c);
  }
  if (((*(uint *)(param_1 + 0x128c) < 0x11) &&
      (uVar1 = 1 << (ulong)(*(uint *)(param_1 + 0x128c) & 0x1f), (uVar1 & 0x10070) == 0)) &&
     ((uVar1 & 0x6200) != 0)) {
    uVar4 = 3;
    if (*(int *)(param_1 + 0x1158) != 2) {
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0x130c) = uVar4;
    if (0xfffffe51 < (int)local_40 - 0x1e0U) goto LAB_001256c0;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x130c) = 0;
LAB_001256c0:
  *param_2 = uVar4;
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- smblib_get_usb_online @ 001256fc ---- */

int smblib_get_usb_online(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_40 = 0;
  smblib_get_prop_usb_online();
  if (*param_2 != 0) {
    lVar3 = power_supply_get_by_name("battery");
    if (lVar3 == 0) {
      _printk("<3>Failed to get batt_psy \n");
      iVar2 = -0x16;
      goto LAB_00125804;
    }
    iVar2 = power_supply_get_property(lVar3,0x2e,&local_40);
    if (iVar2 < 0) {
      _printk("<3>%s failed to get soc_prop","smblib_get_usb_online");
      goto LAB_00125804;
    }
    if (((*(int *)(param_1 + 0x11b4) == 6) || (*(int *)(param_1 + 0x119c) == 1)) &&
       (*(int *)(param_1 + 0x128c) == 4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    *param_2 = iVar2;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x128c) != 0) {
      iVar1 = iVar2;
    }
    *param_2 = iVar1;
  }
  smblib_get_quick_charge_type(param_1,&local_40);
  if (smblib_get_usb_online_last_quick_charge_type == (int)local_40) {
    iVar2 = 0;
  }
  else {
    vote(*(undefined8 *)(param_1 + 0x588),"QUICK_CHARGE_TYPE_CHANGED_VOTER",0,0);
    vote(*(undefined8 *)(param_1 + 0x588),"QUICK_CHARGE_TYPE_CHANGED_VOTER",1,0);
    iVar2 = 0;
    smblib_get_usb_online_last_quick_charge_type = (int)local_40;
  }
LAB_00125804:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_usb_voltage_max_design @ 0012586c ---- */

undefined8 smblib_get_prop_usb_voltage_max_design(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x128c);
  if (iVar1 - 0xeU < 2 || iVar1 == 9) {
LAB_00125884:
    if (*(int *)(param_1 + 0x111c) != 3) {
      uVar2 = 12000000;
      goto LAB_001258cc;
    }
LAB_001258c4:
    uVar2 = 9000000;
  }
  else {
    if (iVar1 == 0xd) {
      if (*(int *)(param_1 + 0x129c) == 2) goto LAB_001258c4;
      if (*(int *)(param_1 + 0x129c) != 1) goto LAB_00125884;
    }
    uVar2 = 5000000;
  }
LAB_001258cc:
  *param_2 = uVar2;
  return 0;
}



/* ---- smblib_get_prop_usb_voltage_max @ 001258dc ---- */

undefined8 smblib_get_prop_usb_voltage_max(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x128c);
  if (iVar1 - 0xeU < 2) {
LAB_00125920:
    if (*(int *)(param_1 + 0x111c) != 3) {
      uVar2 = 12000000;
      goto LAB_00125948;
    }
LAB_0012592c:
    uVar2 = 9000000;
  }
  else {
    if (iVar1 == 9) {
      uVar2 = *(undefined4 *)(param_1 + 0x1154);
      goto LAB_00125948;
    }
    if (iVar1 == 0xd) {
      if (*(int *)(param_1 + 0x129c) == 2) goto LAB_0012592c;
      if (*(int *)(param_1 + 0x129c) != 1) goto LAB_00125920;
    }
    uVar2 = 5000000;
  }
LAB_00125948:
  *param_2 = uVar2;
  return 0;
}



/* ---- smblib_get_prop_usb_voltage_now @ 00125958 ---- */

int smblib_get_prop_usb_voltage_now(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *in_x18;
  undefined1 uVar7;
  undefined8 unaff_x30;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  mutex_lock(param_1 + 0x388);
  if ((*(byte *)(param_1 + 0x1290) >> 5 & 1) == 0) {
    uVar7 = 0;
LAB_001259dc:
    local_4c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_4c);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar2);
      _printk("<3>%s: %s: Couldn't get usb presence status rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_voltage_now",iVar2);
      iVar2 = -0x3d;
    }
    else if ((local_4c >> 4 & 1) == 0) {
      local_4c = 0;
      iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1140,&local_4c);
      if (iVar2 < 0) {
        _printk("<3>%s: %s: Couldn't read CMD_OTG rc=%d",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_voltage_now",iVar2);
        iVar2 = 0;
      }
      else {
        if ((local_4c & 1) != 0) goto LAB_00125a1c;
LAB_00125ad4:
        iVar2 = 0;
      }
    }
    else {
LAB_00125a1c:
      if (*(int *)(param_1 + 0x111c) == 0) {
        if (*(long *)(param_1 + 0x218) == 0) goto LAB_00125b7c;
        iVar2 = iio_read_channel_processed(*(long *)(param_1 + 0x218),param_2);
        if (iVar2 < 0) {
          uVar5 = *(undefined8 *)(param_1 + 8);
          puVar4 = "<3>%s: %s: Couldn't read MID channel rc=%d\n";
          pcVar6 = "smblib_read_mid_voltage_chan";
          goto LAB_00125c4c;
        }
        if (999999 < *param_2) goto LAB_00125ad4;
        iVar2 = 200000;
        iVar3 = 12000000;
        switch(*(undefined4 *)(param_1 + 0x128c)) {
        case 9:
          iVar2 = *(int *)(param_1 + 0x1154) - *(int *)(param_1 + 0x1150);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar3 = *(int *)(param_1 + 0x1150) + (iVar2 >> 1);
          break;
        default:
          iVar3 = 5000000;
          break;
        case 0xd:
          break;
        case 0xf:
          iVar2 = 20000;
        case 0xe:
          iVar3 = *(int *)(param_1 + 0x12bc) * iVar2 + 5000000;
        }
        iVar2 = 0;
        *param_2 = iVar3;
      }
      else {
        if (*(long *)(param_1 + 0x210) == 0) {
LAB_00125b7c:
          iVar2 = -0x3d;
        }
        else {
          iVar2 = iio_read_channel_processed(*(long *)(param_1 + 0x210),param_2);
          if (-1 < iVar2) goto LAB_00125ad4;
          uVar5 = *(undefined8 *)(param_1 + 8);
          puVar4 = "<3>%s: %s: Couldn't read USBIN channel rc=%d\n";
          pcVar6 = "smblib_read_usbin_voltage_chan";
LAB_00125c4c:
          _printk(puVar4,uVar5,pcVar6,iVar2);
        }
        _printk("<3>%s: %s: Failed to read USBIN over vadc, rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_voltage_now",iVar2);
      }
    }
    if (((*(byte *)(param_1 + 0x1290) >> 5 & 1) == 0) ||
       (iVar3 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x1282,uVar7), -1 < iVar3))
    goto LAB_00125af8;
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar4 = "<3>%s: %s: Couldn't write ADC config rc=%d\n";
  }
  else {
    local_4c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1282,&local_4c);
    if (iVar2 < 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't read ADC config rc=%d\n";
    }
    else {
      uVar7 = (undefined1)local_4c;
      iVar2 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x1282,0x40);
      if (-1 < iVar2) goto LAB_001259dc;
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't disable ADC channels rc=%d\n";
    }
    iVar3 = iVar2;
  }
  _printk(puVar4,uVar5,"smblib_get_prop_usb_voltage_now",iVar3);
LAB_00125af8:
  mutex_unlock(param_1 + 0x388);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_vph_voltage_now @ 00125c78 ---- */

int smblib_get_prop_vph_voltage_now(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(long *)(param_1 + 0x238) == 0) {
    iVar1 = -0x3d;
  }
  else {
    iVar1 = iio_read_channel_processed();
    if (iVar1 < 0) {
      _printk("<3>%s: %s: Couldn't read vph channel rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_vph_voltage_now",iVar1);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ---- smblib_get_prop_charger_temp @ 00125ce8 ---- */

int smblib_get_prop_charger_temp(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40 = 0;
  iVar2 = smblib_is_input_present(param_1,&local_40);
  if (-1 < iVar2) {
    if (((int)local_40 == 0) || (*(long *)(param_1 + 0x200) == 0)) {
      iVar2 = -0x3d;
    }
    else {
      iVar2 = iio_read_channel_processed(*(long *)(param_1 + 0x200),(long)&local_40 + 4);
      if (iVar2 < 0) {
        _printk("<3>Error in reading temp channel, rc=%d\n",iVar2);
      }
      else {
        *param_2 = local_40._4_4_ / 100;
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_typec_cc_orientation @ 00125dc4 ---- */

int smblib_get_prop_typec_cc_orientation(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  iVar3 = 0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  *param_2 = 0;
  if (*(int *)(param_1 + 0x119c) != 1) {
    local_3c = 0;
    iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x150b,&local_3c);
    uVar2 = local_3c;
    if (iVar3 < 0) {
      _printk("<3>%s: %s: Couldn't read TYPE_C_STATUS_4 rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_cc_orientation",
              iVar3);
    }
    else {
      if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
        _printk("<6>%s: %s: TYPE_C_STATUS_4 = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_cc_orientation",
                local_3c & 0xff);
      }
      if ((uVar2 & 1) != 0) {
        *param_2 = (uVar2 >> 1 & 1) + 1;
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- audio_get_prop_typec_mode @ 00125ec0 ---- */

void audio_get_prop_typec_mode(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar3 = regmap_read(*(undefined8 *)(g_chg + 0x10),0x150b,&local_2c);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't read TYPE_C_MISC_STATUS_REG rc=%d\n",*(undefined8 *)(g_chg + 8),"audio_get_prop_typec_mode",iVar3);
    uVar4 = 0;
  }
  else {
    bVar2 = (byte)local_2c;
    if ((**(byte **)(g_chg + 0x280) >> 1 & 1) != 0) {
      _printk("<6>%s: %s: TYPE_C_MISC_STATUS_REG = 0x%02x\n",*(undefined8 *)(g_chg + 8),"audio_get_prop_typec_mode",(byte)local_2c);
    }
    if ((bVar2 >> 6 & 1) == 0) {
      uVar4 = smblib_get_prop_ufp_mode();
    }
    else {
      uVar4 = smblib_get_prop_dfp_mode(g_chg);
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- smblib_get_prop_dfp_mode @ 00125fa4 ---- */

void smblib_get_prop_dfp_mode(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  if (*(int *)(param_1 + 0x11ec) != 3) {
    local_2c = 0;
    iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1508,&local_2c);
    if (-1 < iVar3) {
      bVar2 = (byte)local_2c;
      if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
        _printk("<6>%s: %s: TYPE_C_SRC_STATUS_REG = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_dfp_mode",(byte)local_2c
               );
      }
      uVar4 = 4;
      switch(bVar2 & 0x1f) {
      case 1:
        break;
      default:
        goto code_r0x00125fd8;
      case 4:
        uVar4 = 2;
        break;
      case 8:
        uVar4 = 1;
        break;
      case 0x10:
        uVar4 = 3;
      }
      goto code_r0x00125fe0;
    }
    _printk("<3>%s: %s: Couldn't read TYPE_C_SRC_STATUS_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_dfp_mode",iVar3);
  }
code_r0x00125fd8:
  uVar4 = 0;
code_r0x00125fe0:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- smblib_get_prop_ufp_mode @ 001260cc ---- */

void smblib_get_prop_ufp_mode(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1506,&local_2c);
  uVar2 = local_2c;
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't read TYPE_C_STATUS_1 rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_ufp_mode",iVar3);
code_r0x001261b4:
    uVar4 = 0;
  }
  else {
    if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
      _printk("<6>%s: %s: TYPE_C_STATUS_1 = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_ufp_mode",
              (undefined1)local_2c);
    }
    if ((uVar2 & 0x70) != 0) {
      regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x154a,0x1f,0x17,0,0,0);
    }
    uVar4 = 6;
    switch(uVar2 & 0x7f) {
    case 1:
      uVar4 = 9;
      break;
    case 2:
    case 0x10:
      uVar4 = 8;
      break;
    default:
      goto code_r0x001261b4;
    case 4:
    case 0x20:
      uVar4 = 7;
      break;
    case 8:
    case 0x40:
      break;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- smblib_get_usb_prop_typec_mode @ 00126214 ---- */

undefined8 smblib_get_usb_prop_typec_mode(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x119c) == 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = smblib_get_prop_typec_mode();
    *(undefined4 *)(param_1 + 0x11b4) = uVar1;
  }
  *param_2 = uVar1;
  return 0;
}



/* ---- smblib_get_usb_prop_typec_accessory_mode @ 0012626c ---- */

undefined8 smblib_get_usb_prop_typec_accessory_mode(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x119c) == 1) {
    uVar1 = 0;
  }
  else if (*(uint *)(param_1 + 0x11b4) < 5) {
    uVar1 = *(undefined4 *)(&DAT_001120c4 + (long)(int)*(uint *)(param_1 + 0x11b4) * 4);
  }
  else {
    uVar1 = 0xffffffea;
  }
  *param_2 = uVar1;
  return 0;
}



/* ---- smblib_get_prop_typec_power_role @ 001262b4 ---- */

int smblib_get_prop_typec_power_role(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  if (*(int *)(param_1 + 0x119c) == 1) {
    iVar3 = 0;
    *param_2 = 0;
    goto LAB_001263b8;
  }
  _raw_spin_lock(param_1 + 0x380);
  local_4c = 0;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1544,&local_4c);
  uVar2 = local_4c;
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't read TYPE_C_MODE_CFG_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_power_role",iVar3);
  }
  else {
    if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
      _printk("<6>%s: %s: TYPE_C_MODE_CFG_REG = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_power_role",
              local_4c & 0xff);
    }
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2 & 6;
      if ((uVar2 & 6) == 0) {
        uVar4 = 1;
      }
      else if (uVar4 != 2) {
        if (uVar4 != 4) {
          *param_2 = 0;
          _printk("<3>%s: %s: unsupported power role 0x%02lx\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_power_role",
                  uVar2 & 6);
          iVar3 = -0x16;
          goto LAB_001263b0;
        }
        uVar4 = 3;
      }
      *param_2 = uVar4;
      *(uint *)(param_1 + 0x11d8) = uVar4;
    }
    else {
      *param_2 = 0;
    }
  }
LAB_001263b0:
  _raw_spin_unlock(param_1 + 0x380);
LAB_001263b8:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_get_prop_typec_select_rp @ 0012641c ---- */

int smblib_get_prop_typec_select_rp(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if (*(int *)(param_1 + 0x11b4) - 1U < 5) {
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1552,&local_3c);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read TYPE_C_CURRSRC_CFG_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_select_rp",iVar2);
      goto LAB_00126498;
    }
    uVar3 = *(undefined4 *)(&DAT_00111be8 + ((ulong)local_3c & 3) * 4);
  }
  else {
    uVar3 = 0xffffffea;
  }
  iVar2 = 0;
  *param_2 = uVar3;
LAB_00126498:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_usb_current_now @ 001264f4 ---- */

int smblib_get_prop_usb_current_now(long param_1,int *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  if (*(long *)(param_1 + 0x208) == 0) {
    iVar3 = -0x3d;
  }
  else {
    iVar3 = iio_read_channel_processed(*(long *)(param_1 + 0x208),param_2);
    if (iVar3 < 0) {
      _printk("<3>Error in reading USBIN_I channel, rc=%d\n",iVar3);
      goto LAB_001265a4;
    }
    bVar2 = *(int *)(param_1 + 0x111c) != 3;
    uVar5 = 0x50;
    if (bVar2) {
      uVar5 = 0x28;
    }
    uVar6 = 0x28;
    if (bVar2) {
      uVar6 = 0x14;
    }
    if ((*(char *)(param_1 + 0x11c7) != '\0') ||
       (iVar4 = smblib_get_prop_dfp_mode(param_1), iVar4 != 0)) {
      uVar6 = -(uVar5 >> 1);
      if (0 < *param_2 * 100) {
        uVar6 = uVar5 >> 1;
      }
      iVar4 = 0;
      if (uVar5 != 0) {
        iVar4 = (int)(uVar6 + *param_2 * 100) / (int)uVar5;
      }
      *param_2 = iVar4;
      goto LAB_001265a4;
    }
    local_4c = 0;
    iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_4c);
    if (iVar3 < 0) {
      _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar3);
      _printk("<3>%s: %s: Couldn't get usb present status,rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_current_now",iVar3);
      iVar3 = -0x3d;
      goto LAB_001265a4;
    }
    if ((local_4c >> 4 & 1) != 0) {
      iVar3 = 0;
      uVar5 = -(uVar6 >> 1);
      if (0 < *param_2 * 100) {
        uVar5 = uVar6 >> 1;
      }
      iVar4 = 0;
      if (uVar6 != 0) {
        iVar4 = (int)(uVar5 + *param_2 * 100) / (int)uVar6;
      }
      *param_2 = iVar4;
      goto LAB_001265a4;
    }
    iVar3 = 0;
  }
  *param_2 = 0;
LAB_001265a4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_get_prop_low_power @ 0012668c ---- */

int smblib_get_prop_low_power(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if (*(int *)(param_1 + 0x11d4) == 1) {
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1508,&local_3c);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read TYPE_C_SRC_STATUS_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_low_power",iVar2);
    }
    else {
      iVar2 = 0;
      *param_2 = (local_3c >> 5 ^ 0xffffffff) & 1;
    }
  }
  else {
    iVar2 = -0x3d;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_prop_input_current_settled @ 00126758 ---- */

void smblib_get_prop_input_current_settled(long param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  smblib_get_charge_param(param_1,param_1 + 0xc0,param_2);
  return;
}



/* ---- smblib_get_prop_input_current_max @ 00126784 ---- */

void smblib_get_prop_input_current_max(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  uVar2 = smblib_get_charge_param(param_1,param_1 + 0x70,&local_2c);
  if (-1 < (int)uVar2) {
    uVar3 = is_override_vote_enabled_locked(*(undefined8 *)(param_1 + 0x510));
    if (((uVar3 & 1) == 0) || (999999 < local_2c)) {
      uVar2 = smblib_get_charge_param(param_1,param_1 + 0xc0,param_2);
    }
    else {
      uVar2 = 0;
      *param_2 = 1000000;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- smblib_get_prop_input_voltage_settled @ 00126830 ---- */

undefined8 smblib_get_prop_input_voltage_settled(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x128c);
  if (iVar2 == 9) {
    iVar1 = *(int *)(param_1 + 0x1150);
  }
  else {
    iVar1 = 5000000;
    if (iVar2 == 0xe) {
      iVar2 = 200000;
    }
    else {
      if (iVar2 != 0xf) goto LAB_00126878;
      iVar2 = 20000;
    }
    iVar1 = *(int *)(param_1 + 0x12bc) * iVar2 + 5000000;
  }
LAB_00126878:
  *param_2 = iVar1;
  return 0;
}



/* ---- smblib_get_prop_pd_in_hard_reset @ 00126888 ---- */

undefined8 smblib_get_prop_pd_in_hard_reset(long param_1,uint *param_2)

{
  *param_2 = (uint)*(byte *)(param_1 + 0x115c);
  return 0;
}



/* ---- smblib_get_pe_start @ 001268a4 ---- */

undefined8 smblib_get_pe_start(long param_1,uint *param_2)

{
  *param_2 = (uint)*(byte *)(param_1 + 0x1160);
  return 0;
}



/* ---- smblib_get_prop_smb_health @ 001268c0 ---- */

int smblib_get_prop_smb_health(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  iVar2 = smblib_is_input_present(param_1,&local_30);
  if (iVar2 < 0) goto LAB_00126918;
  if (((int)local_30 == 0) || (uVar3 = param_1[0x4d], 0xfffffffffffff000 < uVar3)) {
LAB_0012690c:
    iVar2 = 0;
  }
  else {
    if (uVar3 == 0) {
      uVar3 = get_ext_channels(*param_1,&smblib_cp_ext_iio_chan,4);
      if (0xfffffffffffff000 < uVar3) {
        if ((int)uVar3 != -0x205) {
          _dev_err(*param_1,"Failed to get channels, rc=%d\n");
          iVar2 = 0;
          param_1[0x4d] = 0xffffffffffffffea;
          goto LAB_00126918;
        }
        goto LAB_0012690c;
      }
      param_1[0x4d] = uVar3;
    }
    iVar2 = -0x13;
    if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) ||
       (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar3 + 0x18),(long)&local_30 + 4),
       iVar2 < 0)) {
      _printk("<3>%s: %s: Couldn't get CP DIE_TEMP rc=%d\n",param_1[1],"smblib_get_prop_smb_health",iVar2);
    }
    else if (local_30._4_4_ < 0x385) {
      if (local_30._4_4_ < 0x321) {
        iVar2 = 0xb;
        if (local_30._4_4_ < 0x259) {
          iVar2 = 0xc;
        }
      }
      else {
        iVar2 = 0xd;
      }
    }
    else {
      iVar2 = 2;
    }
  }
LAB_00126918:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_die_health @ 00126a14 ---- */

undefined8 smblib_get_die_health(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  iVar3 = *(int *)(param_1 + 0x12c0);
  if (iVar3 != -0x16) goto LAB_00126aec;
  local_30 = 0;
  iVar3 = smblib_is_input_present(param_1,&local_30);
  if (iVar3 < 0) goto LAB_00126aec;
  if (local_30 == 0) {
LAB_00126ab8:
    iVar3 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x1290) >> 1 & 1) == 0) {
      local_2c = 0;
      iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1607,&local_2c);
      if (iVar3 < 0) {
        _printk("<3>%s: %s: Couldn't read DIE_TEMP_STATUS_REG, rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_die_health",iVar3);
        goto LAB_00126ab8;
      }
      if ((local_2c >> 2 & 1) != 0) goto LAB_00126ac8;
      if (((local_2c & 0xff) >> 1 & 1) == 0) {
        iVar3 = 0xb;
        if ((local_2c & 1) == 0) {
          iVar3 = 0xc;
        }
        goto LAB_00126aec;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x11fc);
      if (iVar1 == -0x3d) goto LAB_00126ab8;
      if (1000 < iVar1) {
LAB_00126ac8:
        iVar3 = 2;
        goto LAB_00126aec;
      }
      if (iVar1 < 0x321) {
        iVar3 = 0xb;
        if (iVar1 < 0x259) {
          iVar3 = 0xc;
        }
        goto LAB_00126aec;
      }
    }
    iVar3 = 0xd;
  }
LAB_00126aec:
  *param_2 = iVar3;
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- smblib_get_prop_scope @ 00126b44 ---- */

int smblib_get_prop_scope(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  *param_2 = 0;
  local_3c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar2);
  }
  else {
    if ((local_3c >> 4 & 1) == 0) {
      uVar3 = (uint)*(byte *)(param_1 + 0x11c7);
    }
    else {
      uVar3 = 2;
    }
    iVar2 = 0;
    *param_2 = uVar3;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_get_skin_temp_status @ 00126c0c ---- */

void smblib_get_skin_temp_status(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  if (*(char *)(param_1 + 0x123a) == '\0') {
    uVar3 = 0;
  }
  else {
    local_2c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1608,&local_2c);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read SKIN_TEMP_STATUS_REG, rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_skin_temp_status",iVar2);
      uVar3 = 0;
    }
    else if ((local_2c >> 2 & 1) == 0) {
      if (((local_2c & 0xff) >> 1 & 1) == 0) {
        uVar3 = 0xb;
        if ((local_2c & 1) == 0) {
          uVar3 = 0xc;
        }
      }
      else {
        uVar3 = 0xd;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- smblib_get_prop_connector_health @ 00126ce0 ---- */

void smblib_get_prop_connector_health(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_30 = 0;
  iVar3 = smblib_is_input_present(param_1,&local_30);
  if (-1 < iVar3) {
    if ((local_30 >> 1 & 1) != 0) {
      iVar3 = *(int *)(param_1 + 0x12c4);
      if (iVar3 != -0x16) goto LAB_00126e1c;
      if ((*(byte *)(param_1 + 0x1290) >> 1 & 1) == 0) {
        local_2c = 0;
        iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1609,&local_2c);
        if (iVar3 < 0) {
          uVar5 = *(undefined8 *)(param_1 + 8);
          puVar4 = "<3>%s: %s: Couldn't read CONNECTOR_TEMP_STATUS_REG, rc=%d\n";
          pcVar6 = "smblib_get_typec_connector_temp_status";
          goto LAB_00126e14;
        }
LAB_00126da0:
        if ((local_2c >> 2 & 1) != 0) goto LAB_00126dd4;
        if (((local_2c & 0xff) >> 1 & 1) == 0) {
          iVar3 = 0xb;
          if ((local_2c & 1) == 0) {
            iVar3 = 0xc;
          }
          goto LAB_00126e1c;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1208);
        if (iVar1 == -0x3d) goto LAB_00126e18;
        if (600 < iVar1) {
LAB_00126dd4:
          iVar3 = 2;
          goto LAB_00126e1c;
        }
        if (iVar1 < 0x227) {
          iVar3 = 0xb;
          if (iVar1 < 0x1f5) {
            iVar3 = 0xc;
          }
          goto LAB_00126e1c;
        }
      }
      iVar3 = 0xd;
      goto LAB_00126e1c;
    }
    iVar3 = 0xc;
    if ((*(int *)(param_1 + 0x111c) != 0) || ((local_30 >> 2 & 1) == 0)) goto LAB_00126e1c;
    if (*(char *)(param_1 + 0x123a) != '\0') {
      local_2c = 0;
      iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1608,&local_2c);
      if (-1 < iVar3) goto LAB_00126da0;
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't read SKIN_TEMP_STATUS_REG, rc=%d\n";
      pcVar6 = "smblib_get_skin_temp_status";
LAB_00126e14:
      _printk(puVar4,uVar5,pcVar6,iVar3);
    }
  }
LAB_00126e18:
  iVar3 = 0;
LAB_00126e1c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ---- smblib_set_prop_pd_current_max @ 00126e4c ---- */

undefined4 smblib_set_prop_pd_current_max(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x1158) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = get_client_vote(*(undefined8 *)(param_1 + 0x510),"PD_VOTER");
    uVar2 = vote(*(undefined8 *)(param_1 + 0x510),"PD_VOTER",1,param_2);
    if (iVar1 != param_2) {
      power_supply_changed(*(undefined8 *)(param_1 + 0x420));
    }
  }
  return uVar2;
}



/* ---- smblib_set_prop_sdp_current_max @ 00126ed8 ---- */

int smblib_set_prop_sdp_current_max(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  if (*(int *)(param_1 + 0x1158) == 0) {
    local_3c = 0;
    iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_3c);
    if (iVar3 < 0) {
      _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar3);
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't get usb present rc = %d\n";
      pcVar6 = "smblib_set_prop_sdp_current_max";
LAB_00127158:
      _printk(puVar4,uVar5,pcVar6,iVar3);
      goto LAB_00126f7c;
    }
    if ((local_3c >> 4 & 1) != 0) {
      iVar3 = *(int *)(param_1 + 0x1314);
      if (900000 < iVar3) {
        _printk("<3>%s: %s: Set mtbf_curr = %d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_sdp_current_max",iVar3);
        param_2 = iVar3;
      }
      if (*(int *)(param_1 + 0x128c) != 0x10) {
        local_3c = 0;
        iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_3c);
        if (iVar3 < 0) {
          _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",iVar3);
        }
        else if ((local_3c >> 4 & 1) == 0) goto LAB_00126f64;
        if ((param_2 < 500000) && (*(char *)(param_1 + 0x12dd) != '\0')) {
          param_2 = 500000;
        }
        iVar3 = vote(*(undefined8 *)(param_1 + 0x510),"USB_PSY_VOTER",1,param_2);
        if (iVar3 < 0) {
          puVar4 = "<3>Couldn't vote ICL USB_PSY_VOTER rc=%d\n";
        }
        else {
          iVar3 = vote(*(undefined8 *)(param_1 + 0x510),"SW_ICL_MAX_VOTER",0,0);
          if (-1 < iVar3) goto LAB_00126f64;
          puVar4 = "<3>Couldn't remove SW_ICL_MAX vote rc=%d\n";
        }
        _printk(puVar4,iVar3);
        goto LAB_00126f7c;
      }
      if (param_2 == -0x6e) {
        if ((*(byte *)(param_1 + 0x11c4) & 7) == 1) {
          iVar3 = vote(*(undefined8 *)(param_1 + 0x510),"SW_ICL_MAX_VOTER",1,500000);
          if (-1 < iVar3) goto LAB_00126f7c;
          uVar5 = *(undefined8 *)(param_1 + 8);
          puVar4 = "<3>%s: %s: Couldn't set SDP ICL rc=%d\n";
          pcVar6 = "smblib_handle_usb_current";
          goto LAB_00127158;
        }
        if (*(int *)(param_1 + 0x119c) == 0) {
          iVar3 = smblib_get_prop_typec_mode(param_1);
          uVar7 = 1;
          uVar1 = 2000000;
          if (*(int *)(param_1 + 0x128c) != 5) {
            uVar1 = 3000000;
          }
          if (iVar3 != 8) {
            uVar1 = 2000000;
          }
          uVar5 = *(undefined8 *)(param_1 + 0x510);
          uVar8 = 1000000;
          if (*(int *)(param_1 + 0x128c) != 0x10) {
            uVar8 = uVar1;
          }
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x510);
          uVar7 = 1;
          uVar8 = 2000000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x128c) = 0x10;
        iVar3 = vote(*(undefined8 *)(param_1 + 0x510),"USB_PSY_VOTER",1,1000000);
        if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
          _printk("<6>%s: %s: Force USB_FLOAT ICL 1000mA\n",*(undefined8 *)(param_1 + 8),"smblib_handle_usb_current");
        }
        if (iVar3 < 0) goto LAB_00126f7c;
        uVar5 = *(undefined8 *)(param_1 + 0x510);
        uVar7 = 0;
        uVar8 = 0;
      }
      iVar3 = vote(uVar5,"SW_ICL_MAX_VOTER",uVar7,uVar8);
      if (iVar3 < 0) goto LAB_00126f7c;
    }
  }
  else if (*(char *)(param_1 + 0x1164) != '\0') {
    iVar3 = param_2;
    if (25000 < param_2) {
      iVar3 = 0;
    }
    iVar3 = vote(*(undefined8 *)(param_1 + 0x510),"PD_SUSPEND_SUPPORTED_VOTER",param_2 < 0x61a9,
                 iVar3);
    goto LAB_00126f7c;
  }
LAB_00126f64:
  iVar3 = 0;
LAB_00126f7c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_set_prop_usb_voltage_max_limit @ 00127234 ---- */

undefined8 smblib_set_prop_usb_voltage_max_limit(long param_1,int param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x1268) == param_2) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x128c);
  if ((1 < iVar1 - 0xeU) && (iVar1 != 9)) {
    if (iVar1 != 0xd) {
      iVar1 = 5000000;
      goto joined_r0x001272d4;
    }
    iVar1 = 5000000;
    if (*(int *)(param_1 + 0x129c) == 1) goto joined_r0x001272d4;
    if (*(int *)(param_1 + 0x129c) == 2) {
      iVar1 = 9000000;
      goto joined_r0x001272d4;
    }
  }
  iVar1 = 9000000;
  if (*(int *)(param_1 + 0x111c) != 3) {
    iVar1 = 12000000;
  }
joined_r0x001272d4:
  if ((param_2 < 5000000) || (iVar1 < param_2)) {
    if (*(int *)(param_1 + 0x1268) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1268) = 0;
  }
  else {
    *(int *)(param_1 + 0x1268) = param_2;
    if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: Max VBUS limit changed to: %d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_usb_voltage_max_limit");
    }
  }
  power_supply_changed(*(undefined8 *)(param_1 + 0x420));
  return 0;
}



/* ---- cid_set_prop_typec_power_role @ 00127344 ---- */

undefined8 cid_set_prop_typec_power_role(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = smblib_set_prop_typec_power_role(g_chg,param_1);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't set typec power role rc=%d\n",*(undefined8 *)(g_chg + 8),"cid_set_prop_typec_power_role",iVar1);
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- smblib_set_prop_typec_power_role @ 001273ac ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int smblib_set_prop_typec_power_role(long param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *in_x18;
  bool bVar5;
  undefined1 uVar6;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x119c) == 1) {
    return 0;
  }
  _raw_spin_lock(param_1 + 0x380);
  if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: power role change: %d --> %d!",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_power_role",
            *(undefined4 *)(param_1 + 0x11d8),param_2);
  }
  if ((*(int *)(param_1 + 0x11d8) == param_2) && (*(int *)(param_1 + 0x11d8) != 0)) {
    if ((**(byte **)(param_1 + 0x280) >> 2 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      _printk("<6>%s: %s: power role already in %d, ignore!",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_power_role",param_2)
      ;
      iVar4 = 0;
    }
  }
  else {
    iVar4 = smblib_get_prop_typec_mode(param_1);
    uVar2 = iVar4 - 1;
    bVar3 = 3 < uVar2 && iVar4 - 6U < 3;
    if (*(int *)(param_1 + 0x11d8) == 1) {
      bVar5 = param_2 == 3 && uVar2 < 4 || param_2 == 2 && bVar3;
    }
    else {
      bVar5 = false;
    }
    if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: snk_attached = %d, src_attached = %d, is_pr_lock = %d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_power_role",
              uVar2 < 4,bVar3,bVar5);
    }
    cancel_delayed_work(param_1 + 0xcb8);
    cVar1 = *(char *)(param_1 + 0x115d);
    if (bVar5 == true && cVar1 == '\0') {
      if ((**(byte **)(param_1 + 0x280) >> 2 & 1) == 0) {
        cVar1 = *(char *)(param_1 + 0x1162);
      }
      else {
        _printk("<6>%s: %s: disable type-c interrupts for power role locking\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_power_role");
        cVar1 = *(char *)(param_1 + 0x1162);
      }
      if (cVar1 != '\0') {
        disable_irq_nosync(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x13a8));
        disable_irq_nosync(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1258));
        disable_irq_nosync(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1178));
        *(undefined1 *)(param_1 + 0x1162) = 0;
      }
      queue_delayed_work_on(0x20,_system_wq,param_1 + 0xcb8,0xfa);
    }
    else if (bVar5 == false && cVar1 != '\0') {
      if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
        _printk("<6>%s: %s: restore type-c interrupts after exit power role locking\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_power_role");
      }
      if (*(char *)(param_1 + 0x1162) != '\x01') {
        enable_irq(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x13a8));
        enable_irq(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1258));
        enable_irq(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1178));
        *(undefined1 *)(param_1 + 0x1162) = 1;
      }
    }
    *(char *)(param_1 + 0x115d) = bVar5;
    uVar6 = 1;
    switch(param_2) {
    case 0:
      break;
    case 1:
      uVar6 = *(undefined1 *)(param_1 + 0x11e8);
      break;
    case 2:
      uVar6 = 2;
      break;
    case 3:
      uVar6 = 4;
      break;
    default:
      _printk("<3>%s: %s: power role %d not supported\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_power_role",param_2)
      ;
      iVar4 = -0x16;
      goto LAB_001275dc;
    }
    iVar4 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1544,0x1f,uVar6,0,0,0);
    if (iVar4 < 0) {
      _printk("<3>%s: %s: Couldn't write 0x%02x to TYPE_C_INTRPT_ENB_SOFTWARE_CTRL rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_power_role",uVar6,
              iVar4);
    }
    else {
      *(int *)(param_1 + 0x11d8) = param_2;
    }
  }
LAB_001275dc:
  _raw_spin_unlock(param_1 + 0x380);
  return iVar4;
}



/* ---- smblib_set_prop_typec_select_rp @ 001276fc ---- */

int smblib_set_prop_typec_select_rp(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x11b4) - 1U < 5) {
    if ((int)param_2 < 4) {
      iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1552,3,param_2 & 0xff,0,0,0)
      ;
      if (iVar1 < 0) {
        _printk("<3>%s: %s: Couldn't write to TYPE_C_CURRSRC_CFG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_select_rp",iVar1);
        return iVar1;
      }
      return iVar1;
    }
  }
  else {
    _printk("<3>%s: %s: Couldn't set curr src: not in SRC mode\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_typec_select_rp");
  }
  return -0x16;
}



/* ---- smblib_set_prop_pd_voltage_min @ 001277a8 ---- */

int smblib_set_prop_pd_voltage_min(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = param_2;
  if (*(int *)(param_1 + 0x1154) <= param_2) {
    iVar1 = *(int *)(param_1 + 0x1154);
  }
  if (*(int *)(param_1 + 0x1150) == iVar1) {
    iVar2 = 0;
  }
  else {
    iVar2 = smblib_set_usb_pd_allowed_voltage(param_1,iVar1);
    if (iVar2 < 0) {
      _printk("<3>%s: %s: invalid min voltage %duV rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_pd_voltage_min",param_2,
              iVar2);
    }
    else {
      *(int *)(param_1 + 0x1150) = iVar1;
    }
  }
  return iVar2;
}



/* ---- smblib_set_usb_pd_allowed_voltage @ 0012783c ---- */

/* WARNING: Type propagation algorithm not settling */

int smblib_set_usb_pd_allowed_voltage(long param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x111c) == 3) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1158) != 2) {
    if ((param_2 == 5000000) && (param_3 == 5000000)) {
      bVar1 = false;
      uVar4 = 1;
      goto LAB_001278f0;
    }
    if ((param_2 == 9000000) && (param_3 == 9000000)) {
      bVar1 = false;
      uVar4 = 2;
      goto LAB_001278f0;
    }
    if ((param_2 == 12000000) && (param_3 == 12000000)) {
      bVar1 = false;
      uVar4 = 4;
      goto LAB_001278f0;
    }
    if ((11999999 < param_2) || (12000000 < param_3)) {
      _printk("<3>%s: %s: invalid allowed voltage [%d, %d]\n",*(undefined8 *)(param_1 + 8),"smblib_set_usb_pd_allowed_voltage",param_2
             );
      return -0x16;
    }
  }
  uVar4 = 8;
  bVar1 = true;
LAB_001278f0:
  iVar2 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x1344,uVar4);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't write 0x%02x to USBIN_ADAPTER_ALLOW_OVERRIDE_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_usb_pd_adapter_allowance_override",
            uVar4,iVar2);
  }
  if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: set USBIN_ALLOW_OVERRIDE: %d\n",*(undefined8 *)(param_1 + 8),"smblib_usb_pd_adapter_allowance_override",
            uVar4);
  }
  if (iVar2 < 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = "<3>%s: %s: set CONTINUOUS allowance failed, rc=%d\n";
  }
  else {
    if (!bVar1) {
      return 0;
    }
    iVar2 = param_2 / 1000 + -1000;
    if (*(int *)(param_1 + 0x460) != 0 && 5999999 < param_2) {
      iVar2 = 5000;
    }
    iVar2 = smblib_set_charge_param(param_1,param_1 + 0x1d8,iVar2);
    if (-1 < iVar2) {
      return iVar2;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = "<3>%s: %s: set CONT_AICL_THRESHOLD failed, rc=%d\n";
  }
  _printk(puVar3,uVar4,"smblib_set_usb_pd_allowed_voltage",iVar2);
  return iVar2;
}



/* ---- smblib_set_prop_pd_voltage_max @ 00127a38 ---- */

int smblib_set_prop_pd_voltage_max(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = param_2;
  if (param_2 <= *(int *)(param_1 + 0x22a)) {
    iVar1 = *(int *)(param_1 + 0x22a);
  }
  if (*(int *)((long)param_1 + 0x1154) == iVar1) {
    return 0;
  }
  if (iVar1 == 5000000) {
    uVar5 = *(undefined4 *)(param_1 + 0x52);
LAB_00127ae4:
    iVar2 = smblib_set_charge_param(param_1,param_1 + 0x31,uVar5);
    if (-1 < iVar2) {
      iVar2 = smblib_set_usb_pd_allowed_voltage(param_1,*(undefined4 *)(param_1 + 0x22a),iVar1);
      if (-1 < iVar2) {
        *(int *)((long)param_1 + 0x1154) = iVar1;
        return iVar2;
      }
      uVar4 = param_1[1];
      puVar3 = "<3>%s: %s: invalid max voltage %duV rc=%d\n";
      goto LAB_00127b60;
    }
    _dev_err(*param_1,"Error in setting freq_buck rc=%d\n",iVar2);
  }
  else {
    if (iVar1 - 0x4c4b41U < 3999999) {
      uVar5 = *(undefined4 *)((long)param_1 + 0x294);
      goto LAB_00127ae4;
    }
    if (iVar1 - 9000000U < 3000000) {
      uVar5 = *(undefined4 *)(param_1 + 0x53);
      goto LAB_00127ae4;
    }
    if (iVar1 == 12000000) {
      uVar5 = *(undefined4 *)((long)param_1 + 0x29c);
      goto LAB_00127ae4;
    }
    _printk("<3>%s: %s: Couldn't set Fsw: invalid voltage %d\n",param_1[1],"smblib_set_usb_pd_fsw",iVar1);
    iVar2 = -0x16;
  }
  uVar4 = param_1[1];
  puVar3 = "<3>%s: %s: Couldn't set FSW for voltage %duV rc=%d\n";
LAB_00127b60:
  _printk(puVar3,uVar4,"smblib_set_prop_pd_voltage_max",param_2,iVar2);
  return iVar2;
}



/* ---- smblib_get_prop_pd_active @ 00127b9c ---- */

undefined8 smblib_get_prop_pd_active(long param_1,undefined4 *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *param_2 = *(undefined4 *)(param_1 + 0x1158);
  _printk(&_str_167_llvm_4030877801262576756,"smblib_get_prop_pd_active");
  return 0;
}



/* ---- smblib_set_prop_pd_active @ 00127bdc ---- */

int smblib_set_prop_pd_active(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar5 = smblib_get_apsd_result();
  if ((*(int *)(param_1 + 0x22b) != 0) && (*(int *)(param_1 + 0x22b) == param_2)) {
    return 0;
  }
  *(int *)(param_1 + 0x22b) = param_2;
  iVar3 = regmap_update_bits_base(param_1[2],0x1362,8,(ulong)(param_2 == 0) << 3,0,0,0);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",param_1[1],"smblib_apsd_enable",iVar3);
  }
  uVar8 = param_1[0x25f];
  if (uVar8 == 0) {
    uVar6 = devm_usbpd_get_by_phandle(*param_1,"qcom,usbpd-phandle");
    param_1[0x25f] = uVar6;
    _printk("<3>1:chg->pd=%x\n",uVar6);
    uVar8 = param_1[0x25f];
    if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
      _printk("<3>Failed to get pd handle %ld\n");
      uVar8 = param_1[0x25f];
    }
  }
  _printk("<3>2:chg->pd=%x\n",uVar8);
  update_sw_icl_max(param_1,*(undefined4 *)(lVar5 + 0xc));
  if (*(int *)(param_1 + 0x22b) == 0) {
    vote(param_1[0xa2],"PD_VOTER",0,0);
    vote(param_1[0xab],"CHARGER_TYPE_VOTER",1,0);
    vote(param_1[0xac],"CHARGER_TYPE_VOTER",1,0);
    iVar3 = smblib_select_sec_charger(param_1,(ulong)*(byte *)(param_1 + 0x228) << 1,0,0);
    if (iVar3 < 0) {
      _dev_err(*param_1,"Couldn\'t enable secondary charger rc=%d\n",iVar3);
      cVar1 = *(char *)(param_1 + 0x22c);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x22c);
    }
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x22c) = 0;
      smblib_hvdcp_detect_try_enable(param_1);
    }
  }
  else {
    vote(param_1[0xab],"CHARGER_TYPE_VOTER",0,0);
    vote(param_1[0xac],"CHARGER_TYPE_VOTER",0,0);
    vote(param_1[0xa2],"PD_VOTER",1,100000);
    vote(param_1[0xa2],"USB_PSY_VOTER",0,0);
    vote(param_1[0xa2],"SW_ICL_MAX_VOTER",0,0);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x22b) == 2) {
      if (*(char *)((long)param_1 + 0x1141) == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = smblib_select_sec_charger(param_1,1,3,0);
        if (iVar3 < 0) {
          _dev_err(*param_1,"Couldn\'t enable secondary charger rc=%d\n",iVar3);
        }
      }
    }
  }
  if (*(int *)((long)param_1 + 0x111c) != 3) {
    bVar2 = *(int *)(param_1 + 0x22b) != 0;
    iVar4 = regmap_write(param_1[2],0x1344,bVar2);
    if (iVar4 < 0) {
      _printk("<3>%s: %s: Couldn't write 0x%02x to USBIN_ADAPTER_ALLOW_OVERRIDE_REG rc=%d\n",param_1[1],"smblib_usb_pd_adapter_allowance_override",bVar2,iVar4);
    }
    if ((*(byte *)param_1[0x50] >> 2 & 1) != 0) {
      _printk("<6>%s: %s: set USBIN_ALLOW_OVERRIDE: %d\n",param_1[1],"smblib_usb_pd_adapter_allowance_override",bVar2);
    }
  }
  puVar7 = (undefined8 *)smblib_get_apsd_result(param_1);
  if (*(int *)(param_1 + 0x22b) == 0) {
    if (*(char *)((long)param_1 + 0x1281) == '\0') {
      iVar4 = *(int *)((long)puVar7 + 0xc);
      if (iVar4 == 0x10) {
        iVar4 = *(int *)((long)param_1 + 0x128c);
        if (iVar4 == 4) goto LAB_00127ec0;
        iVar4 = 0x10;
      }
    }
    else {
      iVar4 = 0xf;
    }
  }
  else {
    iVar4 = 9;
  }
  *(int *)((long)param_1 + 0x128c) = iVar4;
LAB_00127ec0:
  if ((*(byte *)param_1[0x50] >> 2 & 1) != 0) {
    _printk("<6>%s: %s: APSD=%s PD=%d QC3P5=%d\n",param_1[1],"smblib_update_usb_type",*puVar7,*(int *)(param_1 + 0x22b),
            *(undefined1 *)((long)param_1 + 0x1281));
    iVar4 = *(int *)((long)param_1 + 0x128c);
  }
  if ((((iVar4 == 4) && (*(char *)(param_1 + 0x22c) == '\0')) &&
      (iVar4 = smblib_get_prop_typec_mode(param_1), iVar4 - 7U < 2)) &&
     ((*(char *)((long)param_1 + 0x1161) == '\0' || (*(char *)((long)param_1 + 0x1197) != '\0')))) {
    vote(param_1[0xa2],"USB_PSY_VOTER",0,0);
  }
  power_supply_changed(param_1[0x84]);
  return iVar3;
}



/* ---- smblib_get_apsd_result @ 00127fb8 ---- */

undefined ** smblib_get_apsd_result(long param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *in_x18;
  undefined **ppuVar9;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  local_3c = 0;
  iVar6 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1307,&local_3c);
  uVar1 = local_3c;
  if (iVar6 < 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar7 = "<3>%s: %s: Couldn't read APSD_STATUS rc=%d\n";
  }
  else {
    bVar5 = (byte)local_3c;
    if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
      _printk("<6>%s: %s: APSD_STATUS = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_apsd_result",(byte)local_3c);
    }
    ppuVar9 = &smblib_apsd_results;
    if ((uVar1 & 1) == 0) goto LAB_0012809c;
    local_3c = 0;
    iVar6 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1308,&local_3c);
    if (-1 < iVar6) {
      uVar1 = local_3c & 0x7f;
      ppuVar9 = (undefined **)&UNK_00111b48;
      if (uVar1 != 1) {
        ppuVar9 = &smblib_apsd_results;
      }
      ppuVar2 = (undefined **)&UNK_00111b58;
      if (uVar1 != 4) {
        ppuVar2 = ppuVar9;
      }
      ppuVar9 = (undefined **)&UNK_00111b68;
      if (uVar1 != 8) {
        ppuVar9 = ppuVar2;
      }
      ppuVar2 = (undefined **)&UNK_00111b78;
      if (uVar1 != 2) {
        ppuVar2 = ppuVar9;
      }
      ppuVar9 = (undefined **)&UNK_00111b88;
      if (uVar1 != 0x10) {
        ppuVar9 = ppuVar2;
      }
      ppuVar2 = &PTR_s_HVDCP2_00111b98;
      if (uVar1 != 0x28) {
        ppuVar2 = ppuVar9;
      }
      ppuVar3 = (undefined **)&UNK_00111ba8;
      if (uVar1 != 0x48) {
        ppuVar3 = ppuVar2;
      }
      ppuVar9 = &PTR_s_HVDCP2_00111b98;
      if ((ppuVar3 != (undefined **)&UNK_00111ba8 & bVar5 >> 1) == 0) {
        ppuVar9 = ppuVar3;
      }
      goto LAB_0012809c;
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar7 = "<3>%s: %s: Couldn't read APSD_RESULT_STATUS rc=%d\n";
  }
  _printk(puVar7,uVar8,"smblib_get_apsd_result",iVar6);
  ppuVar9 = &smblib_apsd_results;
LAB_0012809c:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ppuVar9;
}



/* ---- update_sw_icl_max @ 00128130 ---- */

void update_sw_icl_max(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x1158) == 0) {
    if (*(int *)(param_1 + 0x11b4) == 4) {
      uVar3 = *(undefined8 *)(param_1 + 0x510);
      uVar5 = 500000;
    }
    else {
      if (param_2 - 0xdU < 2) {
        return;
      }
      iVar2 = smblib_get_prop_typec_mode(param_1);
      if ((iVar2 - 7U < 2) &&
         ((*(char *)(param_1 + 0x1161) == '\0' || (*(char *)(param_1 + 0x1197) != '\0')))) {
        uVar1 = 2000000;
        if (*(int *)(param_1 + 0x128c) != 5) {
          uVar1 = 3000000;
        }
        if (iVar2 != 8) {
          uVar1 = 2000000;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x510);
        uVar5 = 1000000;
        if (*(int *)(param_1 + 0x128c) != 0x10) {
          uVar5 = uVar1;
        }
      }
      else {
        switch(param_2) {
        case 4:
          uVar4 = is_client_vote_enabled(*(undefined8 *)(param_1 + 0x510),"USB_PSY_VOTER");
          if ((uVar4 & 1) == 0) {
            uVar5 = 100000;
            if (*(char *)(param_1 + 0x12dd) != '\0') {
              uVar5 = 500000;
            }
            vote(*(undefined8 *)(param_1 + 0x510),"USB_PSY_VOTER",1,uVar5);
          }
          vote(*(undefined8 *)(param_1 + 0x510),"SW_ICL_MAX_VOTER",0,0);
          smblib_set_prop_sdp_current_max(param_1,500000);
          return;
        case 5:
          uVar1 = 2000000;
          if (*(int *)(param_1 + 0x128c) != 5) {
            uVar1 = 3000000;
          }
          if (iVar2 != 8) {
            uVar1 = 2000000;
          }
          uVar5 = 1000000;
          if (*(int *)(param_1 + 0x128c) != 0x10) {
            uVar5 = uVar1;
          }
          vote(1000000,*(undefined8 *)(param_1 + 0x510),"USB_PSY_VOTER",0,0);
          uVar3 = *(undefined8 *)(param_1 + 0x510);
          break;
        case 6:
          uVar3 = *(undefined8 *)(param_1 + 0x510);
          uVar5 = 1500000;
          break;
        default:
          uVar3 = *(undefined8 *)(param_1 + 0x510);
          uVar5 = 100000;
          break;
        case 0x10:
          uVar3 = *(undefined8 *)(param_1 + 0x510);
          uVar5 = 1000000;
        }
      }
    }
    vote(uVar3,"SW_ICL_MAX_VOTER",1,uVar5);
  }
  return;
}



/* ---- smblib_hvdcp_detect_try_enable @ 0012837c ---- */

void smblib_hvdcp_detect_try_enable(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((*(char *)(param_1 + 0x11c8) == '\0') && (*(char *)(param_1 + 0x2b8) == '\0')) &&
     (iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1362,0x44,0x44,0,0,0),
     iVar1 < 0)) {
    _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_hvdcp_detect_enable",iVar1);
  }
  return;
}



/* ---- smblib_usb_pd_adapter_allowance_override @ 00128400 ---- */

int smblib_usb_pd_adapter_allowance_override(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x111c) == 3) {
    iVar1 = 0;
  }
  else {
    iVar1 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x1344,1);
    if (iVar1 < 0) {
      _printk("<3>%s: %s: Couldn't write 0x%02x to USBIN_ADAPTER_ALLOW_OVERRIDE_REG rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_usb_pd_adapter_allowance_override",
              1,iVar1);
    }
    if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: set USBIN_ALLOW_OVERRIDE: %d\n",*(undefined8 *)(param_1 + 8),"smblib_usb_pd_adapter_allowance_override",
              1);
    }
  }
  return iVar1;
}



/* ---- smblib_get_prop_ship_mode @ 001284ac ---- */

int smblib_get_prop_ship_mode(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if ((*(byte *)param_1[0x50] >> 2 & 1) != 0) {
    _printk("<6>%s: %s: Get ship mode: %d!!\n",param_1[1],"smblib_get_prop_ship_mode",param_2 != (uint *)0x0);
  }
  local_3c = 0;
  iVar2 = regmap_read(param_1[2],0x1240,&local_3c);
  if (iVar2 < 0) {
    *param_2 = 0;
    _dev_err(*param_1,"Couldn\'t get ship mode, rc=%d\n",iVar2);
  }
  else {
    *param_2 = local_3c & 1;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- smblib_set_prop_ship_mode @ 00128588 ---- */

int smblib_set_prop_ship_mode(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(byte *)param_1[0x50] >> 2 & 1) != 0) {
    _printk("<6>%s: %s: Set ship mode: %d!!\n",param_1[1],"smblib_set_prop_ship_mode",param_2 != 0);
  }
  iVar2 = regmap_update_bits_base(param_1[2],0x1240,1,param_2 != 0,0,0,0);
  if (iVar2 < 0) {
    pcVar1 = "disable";
    if (param_2 != 0) {
      pcVar1 = "enable";
    }
    _dev_err(*param_1,"Couldn\'t %s ship mode, rc=%d\n",pcVar1,iVar2);
  }
  return iVar2;
}



/* ---- smblib_enable_ship_mode @ 00128650 ---- */

int smblib_enable_ship_mode(int param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar2 = g_chg;
  if ((*(byte *)g_chg[0x50] >> 2 & 1) != 0) {
    _printk("<6>%s: %s: Set ship mode: %d!!\n",g_chg[1],"smblib_set_prop_ship_mode",param_1 != 0);
  }
  iVar3 = regmap_update_bits_base(puVar2[2],0x1240,1,param_1 != 0,0,0,0);
  if (iVar3 < 0) {
    pcVar1 = "disable";
    if (param_1 != 0) {
      pcVar1 = "enable";
    }
    _dev_err(*puVar2,"Couldn\'t %s ship mode, rc=%d\n",pcVar1,iVar3);
  }
  return iVar3;
}



/* ---- smblib_set_prop_pd_in_hard_reset @ 0012871c ---- */

int smblib_set_prop_pd_in_hard_reset(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(byte *)(param_1 + 0x115c) == param_2) {
    iVar1 = 0;
  }
  else {
    *(byte *)(param_1 + 0x115c) = param_2 != 0;
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1550,1,param_2 != 0,0,0,0);
    if (iVar1 < 0) {
      _printk("<3>%s: %s: Couldn't set EXIT_SNK_BASED_ON_CC rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_pd_in_hard_reset",iVar1);
    }
  }
  return iVar1;
}



/* ---- smblib_get_prop_fcc_delta @ 001287b8 ---- */

undefined8 smblib_get_prop_fcc_delta(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  if (*(char *)(param_1 + 0x1195) == '\0') {
    local_40 = 0;
    iVar1 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x100d,(long)&local_40 + 4);
    if (-1 < iVar1) {
      if ((local_40._4_4_ >> 5 & 1) == 0) {
        if (((local_40._4_4_ & 0xff) >> 4 & 1) != 0) {
          lVar3 = param_1 + 0x160;
          goto LAB_00128838;
        }
        local_40 = (ulong)local_40._4_4_ << 0x20;
      }
      else {
        lVar3 = param_1 + 0x138;
LAB_00128838:
        iVar1 = smblib_get_charge_param(param_1,lVar3,&local_40);
        if (iVar1 < 0) {
          uVar4 = *(undefined8 *)(param_1 + 8);
          puVar2 = "<3>%s: %s: Couldn't get jeita cc minus rc=%d\n";
          goto LAB_001288ac;
        }
      }
      iVar1 = -(int)local_40;
      goto LAB_00128850;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar2 = "<3>%s: %s: Couldn't read BATTERY_CHARGER_STATUS_2 rc=%d\n";
LAB_001288ac:
    _printk(puVar2,uVar4,"smblib_get_jeita_cc_delta",iVar1);
    _printk("<3>%s: %s: Couldn't get jeita cc delta rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_fcc_delta",iVar1);
  }
  iVar1 = 0;
LAB_00128850:
  *param_2 = iVar1;
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- smblib_set_prop_thermal_overheat @ 001288e0 ---- */

undefined8 smblib_set_prop_thermal_overheat(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(uint *)(param_1 + 0x464) == (uint)(param_2 != 0)) {
    return 0;
  }
  uVar1 = 500000;
  lVar2 = *(long *)(param_1 + 0x538);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (lVar2 == 0) {
    lVar2 = find_votable(500000,"CP_DISABLE");
    *(long *)(param_1 + 0x538) = lVar2;
    if (lVar2 == 0) goto LAB_00128978;
  }
  vote(lVar2,"OVERHEAT_LIMIT_VOTER",param_2 != 0,0);
  vote(*(undefined8 *)(param_1 + 0x510),"OVERHEAT_LIMIT_VOTER",param_2 != 0,uVar1);
LAB_00128978:
  *(uint *)(param_1 + 0x464) = (uint)(param_2 != 0);
  return 0;
}



/* ---- smb5_default_irq_handler @ 0012899c ---- */

undefined8 smb5_default_irq_handler(undefined8 param_1,long *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(*param_2 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(*param_2 + 8),"smb5_default_irq_handler",param_2[1]);
  }
  return 1;
}



/* ---- smb5_smb_en_irq_handler @ 001289f4 ---- */

undefined8 smb5_smb_en_irq_handler(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar4 = *param_2;
  local_2c = 0;
  lVar2 = *(long *)(lVar4 + 0x538);
  if (lVar2 == 0) {
    lVar2 = find_votable("CP_DISABLE");
    *(long *)(lVar4 + 0x538) = lVar2;
    if (lVar2 == 0) goto LAB_00128a98;
  }
  if (*(char *)(lVar4 + 0x115c) == '\0') {
    iVar1 = smblib_is_input_present(lVar4,&local_2c);
    if (iVar1 < 0) {
      _printk("<3>Couldn't get usb presence status rc=%d\n",iVar1);
      goto LAB_00128a98;
    }
    if (local_2c == 0) goto LAB_00128a98;
    usleep_range_state(1000,0x44c,2);
    lVar2 = *(long *)(lVar4 + 0x538);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  vote(lVar2,"BOOST_BACK_VOTER",uVar3,0);
LAB_00128a98:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_sdam_sts_change_irq_handler @ 00128ae0 ---- */

undefined8 smb5_sdam_sts_change_irq_handler(undefined8 param_1,long *param_2)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *param_2;
  if ((**(byte **)(lVar1 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(lVar1 + 8),"smb5_sdam_sts_change_irq_handler",param_2[1]);
  }
  mutex_lock(lVar1 + 800);
  *(uint *)(lVar1 + 0x12e0) = *(uint *)(lVar1 + 0x12e0) | 0x10;
  mutex_unlock(lVar1 + 800);
  power_supply_changed(*(undefined8 *)(lVar1 + 0x418));
  return 1;
}



/* ---- smb5_chg_state_change_irq_handler @ 00128b68 ---- */

undefined8 smb5_chg_state_change_irq_handler(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_28 = *(long *)(lVar5 + 0x5e0);
  lVar5 = *param_2;
  if ((**(byte **)(lVar5 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(lVar5 + 8),"smb5_chg_state_change_irq_handler",param_2[1])
    ;
  }
  local_30 = (ulong)local_30._4_4_ << 0x20;
  iVar2 = regmap_read(*(undefined8 *)(lVar5 + 0x10),0x1006,&local_30);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read BATTERY_CHARGER_STATUS_1 rc=%d\n",*(undefined8 *)(lVar5 + 8),"smb5_chg_state_change_irq_handler",iVar2);
    goto LAB_00128cc8;
  }
  if ((*(byte *)(lVar5 + 0x1290) >> 4 & 1) != 0) {
    uVar4 = *(ulong *)(lVar5 + 0x260);
    iVar2 = -0x13;
    uVar1 = (uint)local_30;
    local_30 = 0;
    if (((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) ||
       (iVar2 = iio_read_channel_processed(*(undefined8 *)(uVar4 + 0x10),&local_30), iVar2 < 0)) {
      _printk("<3>%s: %s: Couldn't read SOC value, rc=%d\n",*(undefined8 *)(lVar5 + 8),"smblib_eval_chg_termination",iVar2);
    }
    else {
      if (((uVar1 & 7) == 5) && ((uint)local_30 == 100)) {
        lVar3 = alarm_expires_remaining(lVar5 + 0xfd8);
        if (lVar3 < 1000000) {
          *(undefined4 *)(lVar5 + 0x1264) = 0;
          *(undefined8 *)(lVar5 + 0x125c) = 0;
          alarm_start_relative(lVar5 + 0xfd8,300000000000);
          goto LAB_00128cc0;
        }
      }
      if ((int)(uint)local_30 < 100) {
        *(undefined4 *)(lVar5 + 0x1264) = 0;
        *(undefined8 *)(lVar5 + 0x125c) = 0;
      }
    }
  }
LAB_00128cc0:
  power_supply_changed(*(undefined8 *)(lVar5 + 0x418));
LAB_00128cc8:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_batt_temp_changed_irq_handler @ 00128cfc ---- */

undefined8 smb5_batt_temp_changed_irq_handler(undefined8 param_1,long *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(*param_2 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(*param_2 + 8),"smb5_batt_temp_changed_irq_handler",
            param_2[1]);
  }
  return 1;
}



/* ---- smb5_batt_psy_changed_irq_handler @ 00128d54 ---- */

undefined8 smb5_batt_psy_changed_irq_handler(undefined8 param_1,long *param_2)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *param_2;
  if ((**(byte **)(lVar1 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(lVar1 + 8),"smb5_batt_psy_changed_irq_handler",param_2[1])
    ;
  }
  power_supply_changed(*(undefined8 *)(lVar1 + 0x418));
  return 1;
}



/* ---- smb5_usbin_uv_irq_handler @ 00128dbc ---- */

undefined8 smb5_usbin_uv_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *in_x18;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  puVar8 = (undefined8 *)*param_2;
  pcVar1 = (char *)((long)puVar8 + 0x1254);
  lVar3 = smblib_get_apsd_result(puVar8);
  if ((*(byte *)puVar8[0x50] & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",puVar8[1],"smb5_usbin_uv_irq_handler",param_2[1]);
  }
  if (((*(byte *)(puVar8 + 0x252) >> 2 & 1) != 0) &&
     (uVar4 = is_storming(param_2 + 2), (uVar4 & 1) != 0)) {
    if (*pcVar1 != '\0') {
      if ((*(uint *)puVar8[0x50] >> 2 & 1) != 0) {
        _printk("<6>%s: %s: USBIN_UV storm at max AICL threshold\n",puVar8[1],"smb5_usbin_uv_irq_handler");
      }
      goto LAB_00128fcc;
    }
    if ((*(uint *)puVar8[0x50] >> 2 & 1) != 0) {
      _printk("<6>%s: %s: USBIN_UV storm at threshold %d\n",puVar8[1],"smb5_usbin_uv_irq_handler",
              *(undefined4 *)((long)puVar8 + 0x1244));
    }
    vote(puVar8[0xa2],"AICL_THRESHOLD_VOTER",1,0);
    msleep(0x14);
    if (*(int *)((long)puVar8 + 0x1244) < 0x12c1) {
      iVar2 = smblib_set_charge_param(puVar8,puVar8 + 0x36,*(int *)((long)puVar8 + 0x1244) + 200);
      if (iVar2 < 0) {
        _dev_err(*puVar8,"Error in setting AICL threshold rc=%d\n",iVar2);
      }
      else {
        *(int *)((long)puVar8 + 0x1244) = *(int *)((long)puVar8 + 0x1244) + 200;
      }
      iVar2 = smblib_set_charge_param(puVar8,puVar8 + 0x3b,*(int *)((long)puVar8 + 0x124c) + 200);
      if (iVar2 < 0) {
        _dev_err(*puVar8,"Error in setting AICL threshold rc=%d\n",iVar2);
      }
      else {
        *(int *)((long)puVar8 + 0x124c) = *(int *)((long)puVar8 + 0x124c) + 200;
      }
    }
    else {
      *pcVar1 = '\x01';
    }
    if (*(int *)((long)puVar8 + 0x111c) == 3) {
      schgm_flash_torch_priority(puVar8,1);
    }
    if (*pcVar1 == '\0') {
      smblib_run_aicl(puVar8,1);
      vote(puVar8[0xa2],"AICL_THRESHOLD_VOTER",0,0);
    }
    else {
      if ((*(byte *)puVar8[0x50] >> 2 & 1) != 0) {
        _printk("<6>%s: %s: Reached max AICL threshold resctricting ICL to 100mA\n",puVar8[1],"smb5_usbin_uv_irq_handler");
      }
      vote(puVar8[0xa2],"AICL_THRESHOLD_VOTER",1,100000);
      smblib_run_aicl(puVar8,1);
    }
    reset_storm_count(*(long *)(puVar8[3] + 0xbc0) + 0x10);
  }
  if (((*(long *)(puVar8[3] + 0x6f0) == 0) ||
      (reset_storm_count(*(long *)(puVar8[3] + 0x6f0) + 0x10), *(int *)((long)puVar8 + 0x129c) != 0)
      ) || (*(int *)(lVar3 + 0xc) != 0xd)) goto LAB_00128fcc;
  local_3c = 0;
  iVar2 = regmap_read(puVar8[2],0x1309,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read CHANGE_STATUS_REG rc=%d\n",puVar8[1],"smb5_usbin_uv_irq_handler",iVar2);
    uVar9 = 0;
  }
  else {
    uVar9 = local_3c & 0xff;
    if ((local_3c & 1) != 0) goto LAB_00128fcc;
  }
  local_3c = 0;
  iVar2 = regmap_read(puVar8[2],0x135b,&local_3c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read QC2 max pulses rc=%d\n",puVar8[1],"smb5_usbin_uv_irq_handler",iVar2);
    uVar7 = 0;
  }
  else {
    uVar7 = local_3c & 0xc0;
  }
  *(uint *)(puVar8 + 0x253) = uVar7;
  if ((uVar9 >> 2 & 1) == 0) {
    if ((uVar9 >> 1 & 1) != 0) {
      *(undefined4 *)((long)puVar8 + 0x129c) = 1;
      iVar2 = regmap_update_bits_base(puVar8[2],0x135b,0xc0,0,0,0,0);
      if (iVar2 < 0) {
        uVar6 = puVar8[1];
        puVar5 = "<3>%s: %s: Couldn't force max pulses to 5V rc=%d\n";
        goto LAB_001290f0;
      }
    }
  }
  else {
    *(undefined4 *)((long)puVar8 + 0x129c) = 2;
    iVar2 = regmap_update_bits_base(puVar8[2],0x135b,0xc0,0x40,0,0,0);
    if (iVar2 < 0) {
      uVar6 = puVar8[1];
      puVar5 = "<3>%s: %s: Couldn't force max pulses to 9V rc=%d\n";
LAB_001290f0:
      _printk(puVar5,uVar6,"smb5_usbin_uv_irq_handler",iVar2);
    }
  }
  iVar2 = regmap_update_bits_base(puVar8[2],0x1380,0x80,0,0,0,0);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't turn off SUSPEND_ON_COLLAPSE_USBIN_BIT rc=%d\n",puVar8[1],"smb5_usbin_uv_irq_handler",iVar2);
  }
  _printk("<6>%s qc2_unsupported charger detected\n","smb5_usbin_uv_irq_handler");
  iVar2 = smblib_force_vbus_voltage(puVar8,8);
  if (iVar2 < 0) {
    _printk("<3>Failed to force 5V\n");
  }
  iVar2 = smblib_usb_pd_adapter_allowance_override(puVar8);
  if (iVar2 < 0) {
    _printk("<3>Failed to set adapter allowance to 5V\n");
  }
  iVar2 = smblib_set_opt_switcher_freq(puVar8,*(undefined4 *)(puVar8 + 0x52));
  if (iVar2 < 0) {
    _printk("<3>Failed to set chg_freq.freq_5V\n");
  }
  vote(puVar8[0xa2],"QC2_UNSUPPORTED_VOTER",1,1500000);
  *(undefined1 *)(puVar8 + 0x263) = 1;
LAB_00128fcc:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smblib_set_opt_switcher_freq @ 00129244 ---- */

int smblib_set_opt_switcher_freq(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = smblib_set_charge_param(param_1,param_1 + 0x31,param_2);
  if (iVar1 < 0) {
    _dev_err(*param_1,"Error in setting freq_buck rc=%d\n",iVar1);
  }
  return iVar1;
}



/* ---- smb5_icl_change_irq_handler @ 001292a0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_icl_change_irq_handler(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *in_x18;
  long lVar7;
  undefined8 unaff_x30;
  int local_40;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar7 = sp_el0;
  local_38 = *(long *)(lVar7 + 0x5e0);
  lVar7 = *param_2;
  local_40 = 0;
  if (*(int *)(lVar7 + 0x28c) != 0) goto LAB_00129398;
  if (*(char *)(lVar7 + 0x1237) == '\0') {
LAB_00129328:
    local_3c = 0;
    uVar2 = regmap_read(*(undefined8 *)(lVar7 + 0x10),0x110a,&local_3c);
    if ((int)uVar2 < 0) {
      uVar5 = *(undefined8 *)(lVar7 + 8);
      puVar4 = "<3>%s: %s: Couldn't read AICL_STATUS rc=%d\n";
    }
    else {
      uVar2 = smblib_get_charge_param(lVar7,lVar7 + 0xc0,&local_40);
      iVar1 = local_40;
      if (-1 < (int)uVar2) {
        iVar3 = get_effective_result(*(undefined8 *)(lVar7 + 0x510));
        cancel_delayed_work_sync(lVar7 + 0x7f0);
        uVar6 = 0;
        if (iVar1 != iVar3) {
          uVar6 = 1000;
        }
        uVar5 = __msecs_to_jiffies(uVar6);
        queue_delayed_work_on(0x20,_system_wq,lVar7 + 0x7f0,uVar5);
        goto LAB_00129398;
      }
      uVar5 = *(undefined8 *)(lVar7 + 8);
      puVar4 = "<3>%s: %s: Couldn't get ICL status rc=%d\n";
    }
  }
  else {
    local_3c = 0;
    uVar2 = regmap_read(*(undefined8 *)(lVar7 + 0x10),0x1607,&local_3c);
    if ((int)uVar2 < 0) {
      uVar5 = *(undefined8 *)(lVar7 + 8);
      puVar4 = "<3>%s: %s: Couldn't read DIE_TEMP rc=%d\n";
    }
    else {
      if ((local_3c & 3) == 0) goto LAB_00129328;
      if ((**(byte **)(lVar7 + 0x280) >> 3 & 1) == 0) goto LAB_00129398;
      uVar5 = *(undefined8 *)(lVar7 + 8);
      uVar2 = local_3c & 0xff;
      puVar4 = "<6>%s: %s: skip ICL change DIE_TEMP %x\n";
    }
  }
  _printk(puVar4,uVar5,"smb5_icl_change_irq_handler",uVar2);
LAB_00129398:
  lVar7 = sp_el0;
  if (*(long *)(lVar7 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_usb_plugin_irq_handler @ 00129418 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_usb_plugin_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar6 = sp_el0;
  local_48 = *(long *)(lVar6 + 0x5e0);
  param_2 = (undefined8 *)*param_2;
  if (*(char *)((long)param_2 + 0x115c) == '\0') {
    local_4c = 0;
    iVar4 = regmap_read(param_2[2],0x1310,&local_4c);
    uVar3 = local_4c;
    if (iVar4 < 0) {
      _printk("<3>%s: %s: Couldn't read USB_INT_RT_STS rc=%d\n",param_2[1],"smblib_usb_plugin_locked",iVar4);
      goto LAB_0012a014;
    }
    lVar6 = 0x2a0;
    if ((local_4c & 0x10) != 0) {
      lVar6 = 0x290;
    }
    iVar4 = smblib_set_charge_param(param_2,param_2 + 0x31,*(undefined4 *)((long)param_2 + lVar6));
    if (iVar4 < 0) {
      _dev_err(*param_2,"Error in setting freq_buck rc=%d\n",iVar4);
    }
    if ((uVar3 >> 4 & 1) == 0) {
      if ((*(byte *)(param_2 + 0x252) >> 1 & 1) != 0) {
        cancel_delayed_work_sync(param_2 + 0x164);
        vote(param_2[0xa3],"SW_THERM_REGULATION_VOTER",0,0);
        if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
          _printk("<6>%s: %s: WDOG SNARL INT %s\n",param_2[1],"smblib_set_sw_thermal_regulation","Disabled");
        }
      }
      if (((*(byte *)(param_2 + 0x252) & 1) != 0) && (*(long *)(param_2[3] + 0x6f0) != 0)) {
        update_storm_count(*(long *)(param_2[3] + 0x6f0) + 0x10,8);
        vote(param_2[0xa2],"BOOST_BACK_VOTER",0,0);
        vote(param_2[0xa2],"WEAK_CHARGER_VOTER",0,0);
      }
      if (*(char *)(param_2 + 0x23f) != '\0') {
        vote(param_2[0x9f],"FCC_STEPPER_VOTER",1,1500000);
      }
      if ((*(byte *)(param_2 + 0x252) >> 2 & 1) != 0) {
        *(undefined4 *)((long)param_2 + 0x1244) = *(undefined4 *)(param_2 + 0x249);
        *(undefined4 *)((long)param_2 + 0x124c) = *(undefined4 *)(param_2 + 0x24a);
        smblib_set_charge_param(param_2,param_2 + 0x36);
        smblib_set_charge_param(param_2,param_2 + 0x3b,*(undefined4 *)((long)param_2 + 0x124c));
        *(undefined1 *)((long)param_2 + 0x1254) = 0;
        if (*(int *)((long)param_2 + 0x111c) == 3) {
          schgm_flash_torch_priority(param_2,0);
        }
        if (*(long *)(param_2[3] + 0xbc0) != 0) {
          reset_storm_count(*(long *)(param_2[3] + 0xbc0) + 0x10);
        }
        vote(param_2[0xa2],"AICL_THRESHOLD_VOTER",0,0);
      }
      iVar4 = smblib_request_dpdm(param_2,0);
      if (iVar4 < 0) {
        _printk("<3>%s: %s: Couldn't disable DPDM rc=%d\n",param_2[1],"smblib_usb_plugin_locked",iVar4);
      }
      vote(param_2[0xa3],"CHG_AWAKE_VOTER",0,0);
      puVar5 = (undefined8 *)smblib_get_apsd_result(param_2);
      if (*(int *)(param_2 + 0x22b) == 0) {
        if (*(char *)((long)param_2 + 0x1281) != '\0') {
          iVar4 = 0xf;
          goto LAB_00129938;
        }
        iVar4 = *(int *)((long)puVar5 + 0xc);
        if (iVar4 != 0x10) goto LAB_00129938;
        if (*(int *)((long)param_2 + 0x128c) != 4) {
          iVar4 = 0x10;
          goto LAB_00129938;
        }
      }
      else {
        iVar4 = 9;
LAB_00129938:
        *(int *)((long)param_2 + 0x128c) = iVar4;
      }
      if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
        _printk("<6>%s: %s: APSD=%s PD=%d QC3P5=%d\n",param_2[1],"smblib_update_usb_type",*puVar5,*(int *)(param_2 + 0x22b),
                *(undefined1 *)((long)param_2 + 0x1281));
      }
      plugin_val = 2;
      _printk("<3>%s notify 2","smblib_usb_plugin_locked");
      local_4c = plugin_val;
      iVar4 = srcu_notifier_call_chain(&qpnp_smb5_notifier,1,&local_4c);
      if (iVar4 != 0) {
        _printk("<3>%s: xm_smart_chg_notifier_call_chain error:%d\n","smblib_usb_plugin_locked",iVar4);
      }
      *(undefined4 *)((long)param_2 + 0x131c) = 0;
      if (*(int *)((long)param_2 + 0x119c) == 1) {
        puVar5 = (undefined8 *)smblib_get_apsd_result(param_2);
        if (*(int *)(param_2 + 0x22b) == 0) {
          if (*(char *)((long)param_2 + 0x1281) != '\0') {
            iVar4 = 0xf;
            goto LAB_00129c08;
          }
          iVar4 = *(int *)((long)puVar5 + 0xc);
          if (iVar4 != 0x10) goto LAB_00129c08;
          if (*(int *)((long)param_2 + 0x128c) != 4) {
            iVar4 = 0x10;
            goto LAB_00129c08;
          }
        }
        else {
          iVar4 = 9;
LAB_00129c08:
          *(int *)((long)param_2 + 0x128c) = iVar4;
        }
        if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
          _printk("<6>%s: %s: APSD=%s PD=%d QC3P5=%d\n",param_2[1],"smblib_update_usb_type",*puVar5,
                  *(int *)(param_2 + 0x22b),*(undefined1 *)((long)param_2 + 0x1281));
        }
        extcon_set_state_sync(param_2[0x255],1,0);
        smblib_select_sec_charger(param_2,(ulong)*(byte *)(param_2 + 0x228) << 1,0,0);
        cancel_delayed_work_sync(param_2 + 0x10f);
        if (((*(byte *)(param_2 + 0x252) & 1) != 0) && (*(long *)(param_2[3] + 0x6f0) != 0)) {
          update_storm_count(*(long *)(param_2[3] + 0x6f0) + 0x10,8);
          vote(param_2[0xa2],"BOOST_BACK_VOTER",0,0);
          vote(param_2[0xa2],"WEAK_CHARGER_VOTER",0,0);
        }
        vote(param_2[0xa4],"PL_DELAY_VOTER",1,0);
        vote(param_2[0xa3],"PL_DELAY_VOTER",0,0);
        vote(param_2[0xa6],"USBIN_I_VOTER",0,0);
        vote(param_2[0xa6],"USBIN_V_VOTER",0,0);
        uVar1 = 100000;
        if (*(char *)((long)param_2 + 0x12dd) != '\0') {
          uVar1 = 500000;
        }
        vote(param_2[0xa2],"SW_ICL_MAX_VOTER",1,uVar1);
        vote(param_2[0xa2],"SW_QC3_VOTER",0,0);
        vote(param_2[0xa2],"HVDCP2_ICL_VOTER",0,0);
        vote(param_2[0xa2],"CHG_TERMINATION_VOTER",0,0);
        vote(param_2[0xa2],"THERMAL_THROTTLE_VOTER",0,0);
        vote(param_2[0xab],"CHARGER_TYPE_VOTER",1,0);
        vote(param_2[0xac],"CHARGER_TYPE_VOTER",1,0);
        vote(param_2[0xac],"HDC_IRQ_VOTER",0,0);
        vote(param_2[0xa2],"SW_THERM_REGULATION_VOTER",0,0);
        vote(param_2[0xa4],"SW_THERM_REGULATION_VOTER",0,0);
        vote(param_2[0x9e],"SW_THERM_REGULATION_VOTER",0,0);
        if (param_2[0xa7] != 0) {
          vote(param_2[0xa7],"SW_THERM_REGULATION_VOTER",0,0);
        }
        cancel_delayed_work_sync(param_2 + 0x175);
        vote(param_2[0xa3],"USBOV_DBC_VOTER",0,0);
        *(undefined1 *)(param_2 + 0x254) = 0;
        *(undefined4 *)(param_2 + 0x24d) = 0;
        param_2[599] = 0;
        *(undefined1 *)((long)param_2 + 0x11ac) = 0;
        param_2[0x22a] = 0x4c4b40004c4b40;
        *(undefined4 *)((long)param_2 + 0x112c) = 0;
        del_timer_sync(param_2 + 0x21b);
        *(undefined1 *)(param_2 + 0x250) = 0;
        iVar4 = regmap_update_bits_base
                          (param_2[2],0x1363,7,*(undefined1 *)((long)param_2 + 0x11c4),0,0,0);
        if (iVar4 < 0) {
          _printk("<3>%s: %s: Couldn't write float charger options rc=%d\n",param_2[1],"smblib_uusb_removal",iVar4);
        }
        iVar4 = vote(param_2[0xa2],"USB_PSY_VOTER",0,0);
        if (iVar4 < 0) {
          _printk("<3>%s: %s: Couldn't un-vote for USB ICL rc=%d\n",param_2[1],"smblib_uusb_removal",iVar4);
        }
        iVar4 = vote(param_2[0xa2],"DCP_VOTER",0,0);
        if (iVar4 < 0) {
          _printk("<3>%s: %s: Couldn't un-vote DCP from USB ICL rc=%d\n",param_2[1],"smblib_uusb_removal",iVar4);
          iVar4 = *(int *)((long)param_2 + 0x129c);
        }
        else {
          iVar4 = *(int *)((long)param_2 + 0x129c);
        }
        if (iVar4 != 0) {
          iVar4 = regmap_update_bits_base
                            (param_2[2],0x135b,0xc0,*(undefined1 *)(param_2 + 0x253),0,0,0);
          if (iVar4 < 0) {
            _printk("<3>%s: %s: Couldn't restore max pulses rc=%d\n",param_2[1],"smblib_uusb_removal",iVar4);
            cVar2 = *(char *)(param_2 + 0x251);
          }
          else {
            cVar2 = *(char *)(param_2 + 0x251);
          }
          if ((cVar2 == '\0') &&
             (iVar4 = regmap_update_bits_base(param_2[2],0x1380,0x80,0x80,0,0,0), iVar4 < 0)) {
            _printk("<3>%s: %s: Couldn't turn on SUSPEND_ON_COLLAPSE_USBIN_BIT rc=%d\n",param_2[1],"smblib_uusb_removal",iVar4);
          }
          *(undefined4 *)((long)param_2 + 0x129c) = 0;
        }
        *(undefined1 *)((long)param_2 + 0x1281) = 0;
        *(undefined4 *)((long)param_2 + 0x1284) = 0;
        puVar5 = (undefined8 *)smblib_get_apsd_result(param_2);
        if (*(int *)(param_2 + 0x22b) == 0) {
          if (*(char *)((long)param_2 + 0x1281) != '\0') {
            iVar4 = 0xf;
            goto LAB_00129f94;
          }
          iVar4 = *(int *)((long)puVar5 + 0xc);
          if (iVar4 != 0x10) goto LAB_00129f94;
          if (*(int *)((long)param_2 + 0x128c) != 4) {
            iVar4 = 0x10;
            goto LAB_00129f94;
          }
        }
        else {
          iVar4 = 9;
LAB_00129f94:
          *(int *)((long)param_2 + 0x128c) = iVar4;
        }
        if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
          _printk("<6>%s: %s: APSD=%s PD=%d QC3P5=%d\n",param_2[1],"smblib_update_usb_type",*puVar5,
                  *(int *)(param_2 + 0x22b),*(undefined1 *)((long)param_2 + 0x1281));
        }
        mutex_lock(param_2 + 0x7d);
        if (((param_2[0x90] != 0) && (lVar6 = param_2[0x9a], lVar6 != 0)) &&
           (*(char *)((long)param_2 + 0x115e) == '\0')) {
          if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
            _printk("<6>%s: %s: Un-registering typeC partner\n",param_2[1],"typec_partner_unregister");
            lVar6 = param_2[0x9a];
          }
          typec_unregister_partner(lVar6);
          param_2[0x9a] = 0;
        }
        mutex_unlock(param_2 + 0x7d);
      }
    }
    else {
      cancel_delayed_work_sync(param_2 + 0x186);
      vote(param_2[0xa3],"DETACH_DETECT_VOTER",0,0);
      vote(param_2[0xa3],"CHG_AWAKE_VOTER",1,0);
      iVar4 = smblib_request_dpdm(param_2,1);
      if (iVar4 < 0) {
        _printk("<3>%s: %s: Couldn't to enable DPDM rc=%d\n",param_2[1],"smblib_usb_plugin_locked",iVar4);
      }
      if ((*(byte *)(param_2 + 0x252) >> 1 & 1) != 0) {
        iVar4 = regmap_update_bits_base(param_2[2],0x1653,0x70,0,0,0,0);
        if (iVar4 < 0) {
          _printk("<3>%s: %s: Couldn't configure snarl wdog tmout, rc=%d\n",param_2[1],"smblib_set_sw_thermal_regulation",iVar4);
          _printk("<3>%s: %s: Couldn't start SW thermal regulation WA, rc=%d\n",param_2[1],"smblib_usb_plugin_locked",iVar4);
        }
        else {
          uVar10 = is_client_vote_enabled(param_2[0xa2],"SW_THERM_REGULATION_VOTER");
          if ((uVar10 & 1) != 0) {
            vote(param_2[0xa3],"SW_THERM_REGULATION_VOTER",1,0);
            queue_delayed_work_on(0x20,_system_wq,param_2 + 0x164,0);
          }
          if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
            _printk("<6>%s: %s: WDOG SNARL INT %s\n",param_2[1],"smblib_set_sw_thermal_regulation","Enabled");
          }
        }
      }
      if (*(char *)(param_2 + 0x23f) != '\0') {
        vote(param_2[0x9f],"FCC_STEPPER_VOTER",0,0);
      }
      vote(param_2[0xa3],"PL_DELAY_VOTER",1,0);
      queue_delayed_work_on(0x20,_system_wq,param_2 + 0x10f,0x1d4c);
      plugin_val = 1;
      _printk("<3>%s notify 1","smblib_usb_plugin_locked");
      local_4c = plugin_val;
      iVar4 = srcu_notifier_call_chain(&qpnp_smb5_notifier,1,&local_4c);
      if (iVar4 != 0) {
        _printk("<3>%s: xm_smart_chg_notifier_call_chain error:%d\n","smblib_usb_plugin_locked",iVar4);
      }
      iVar4 = regmap_write(param_2[2],0x1067,0xfc);
      if (iVar4 < 0) {
        uVar8 = *param_2;
        pcVar7 = "Couldn\'t set term MSB rc=%d\n";
LAB_00129b2c:
        _dev_err(uVar8,pcVar7,iVar4);
      }
      else {
        iVar4 = regmap_write(param_2[2],0x1068,0xcd);
        if (iVar4 < 0) {
          uVar8 = *param_2;
          pcVar7 = "Couldn\'t set term LSB rc=%d\n";
          goto LAB_00129b2c;
        }
      }
      uVar10 = param_2[0x4c];
      iVar4 = -0x13;
      *(undefined1 *)((long)param_2 + 0x1303) = 0;
      if (((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) ||
         (iVar4 = iio_write_channel_raw(*(undefined8 *)(uVar10 + 0xc0),0), iVar4 < 0)) {
        _printk("<3>%s: %s: Couldn't set BATT_FULL_CURRENT status:%d\n",param_2[1],"smblib_usb_plugin_locked",iVar4);
      }
      _printk("<6>charge plug in, reset iterm 250ma\n");
      *(undefined4 *)((long)param_2 + 0x131c) = 1;
      if ((*(int *)((long)param_2 + 0x119c) == 1) &&
         (iVar4 = typec_partner_register(param_2), iVar4 < 0)) {
        _printk("<3>%s: %s: Couldn't register partner rc =%d\n",param_2[1],"smblib_micro_usb_plugin",iVar4);
      }
    }
    vote(param_2[0xad],"DEFAULT_VOTER",(uVar3 & 0x10) == 0,0);
    power_supply_changed(param_2[0x84]);
    if ((*(byte *)param_2[0x50] & 1) == 0) goto LAB_0012a014;
    uVar8 = param_2[1];
    pcVar7 = "detached";
    if ((uVar3 & 0x10) != 0) {
      pcVar7 = "attached";
    }
    pcVar9 = "smblib_usb_plugin_locked";
  }
  else {
    local_4c = 0;
    iVar4 = regmap_read(param_2[2],0x1310,&local_4c);
    uVar3 = local_4c;
    if (iVar4 < 0) {
      _printk("<3>%s: %s: Couldn't read USB_INT_RT_STS rc=%d\n",param_2[1],"smblib_usb_plugin_hard_reset_locked",iVar4);
      goto LAB_0012a014;
    }
    if ((local_4c >> 4 & 1) == 0) {
      if (((*(byte *)(param_2 + 0x252) & 1) != 0) && (*(long *)(param_2[3] + 0x6f0) != 0)) {
        update_storm_count(*(long *)(param_2[3] + 0x6f0) + 0x10,8);
        vote(param_2[0xa2],"BOOST_BACK_VOTER",0,0);
        vote(param_2[0xa2],"WEAK_CHARGER_VOTER",0,0);
      }
      vote(param_2[0xa3],"CHG_AWAKE_VOTER",0,0);
      if (*(char *)(param_2 + 0x23f) != '\0') {
        vote(param_2[0x9f],"FCC_STEPPER_VOTER",1,1500000);
      }
      plugin_val = 2;
      _printk("<3>%s notify 2","smblib_usb_plugin_hard_reset_locked");
    }
    else {
      vote(param_2[0xa3],"CHG_AWAKE_VOTER",1,0);
      if (*(char *)(param_2 + 0x23f) != '\0') {
        vote(param_2[0x9f],"FCC_STEPPER_VOTER",0,0);
      }
      plugin_val = 1;
      _printk("<3>%s notify 1","smblib_usb_plugin_hard_reset_locked");
    }
    local_4c = plugin_val;
    iVar4 = srcu_notifier_call_chain(&qpnp_smb5_notifier,1,&local_4c);
    if (iVar4 != 0) {
      _printk("<3>%s: xm_smart_chg_notifier_call_chain error:%d\n","smblib_usb_plugin_hard_reset_locked",iVar4);
    }
    power_supply_changed(param_2[0x84]);
    if ((*(byte *)param_2[0x50] & 1) == 0) goto LAB_0012a014;
    uVar8 = param_2[1];
    pcVar7 = "detached";
    if ((uVar3 & 0x10) != 0) {
      pcVar7 = "attached";
    }
    pcVar9 = "smblib_usb_plugin_hard_reset_locked";
  }
  _printk("<6>%s: %s: IRQ: usbin-plugin %s\n",uVar8,pcVar9,pcVar7);
LAB_0012a014:
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_usb_source_change_irq_handler @ 0012a1b8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_usb_source_change_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_5c;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_58 = *(long *)(lVar1 + 0x5e0);
  param_2 = (undefined8 *)*param_2;
  if (*(int *)(param_2 + 0x22b) != 0) goto LAB_0012a86c;
  local_5c = 0;
  uVar4 = regmap_read(param_2[2],0x1307,&local_5c);
  uVar11 = local_5c;
  if ((int)uVar4 < 0) {
LAB_0012a8a8:
    uVar8 = param_2[1];
    puVar9 = "<3>%s: %s: Couldn't read APSD_STATUS rc=%d\n";
  }
  else {
    bVar2 = (byte)local_5c;
    if ((*(byte *)param_2[0x50] & 1) != 0) {
      _printk("<6>%s: %s: APSD_STATUS = 0x%02x\n",param_2[1],"smb5_usb_source_change_irq_handler",(byte)local_5c);
    }
    if (((*(int *)((long)param_2 + 0x119c) == 1) && ((uVar11 & 1) != 0)) &&
       (*(char *)((long)param_2 + 0x11ac) == '\0')) {
      *(undefined1 *)((long)param_2 + 0x11ac) = 1;
      smblib_rerun_apsd_if_required(param_2);
      goto LAB_0012a86c;
    }
    if ((uVar11 & 1) != 0) {
      puVar7 = (undefined8 *)smblib_get_apsd_result(param_2);
      if (*(int *)(param_2 + 0x22b) == 0) {
        if (*(char *)((long)param_2 + 0x1281) != '\0') {
          iVar5 = 0xf;
          goto LAB_0012a2bc;
        }
        iVar5 = *(int *)((long)puVar7 + 0xc);
        if (iVar5 != 0x10) goto LAB_0012a2bc;
        if (*(int *)((long)param_2 + 0x128c) != 4) {
          iVar5 = 0x10;
          goto LAB_0012a2bc;
        }
      }
      else {
        iVar5 = 9;
LAB_0012a2bc:
        *(int *)((long)param_2 + 0x128c) = iVar5;
      }
      if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
        _printk("<6>%s: %s: APSD=%s PD=%d QC3P5=%d\n",param_2[1],"smblib_update_usb_type",*puVar7,*(int *)(param_2 + 0x22b),
                *(undefined1 *)((long)param_2 + 0x1281));
      }
      update_sw_icl_max(param_2,*(undefined4 *)((long)puVar7 + 0xc));
      if (((*(byte *)(puVar7 + 1) < 0x11) &&
          ((1 << (ulong)(*(byte *)(puVar7 + 1) & 0x1f) & 0x10012U) != 0)) &&
         (*(char *)((long)param_2 + 0x11c6) != '\0')) {
        smblib_notify_extcon_props(param_2,1);
        extcon_set_state_sync(param_2[0x255],1,1);
      }
      if ((*(byte *)param_2[0x50] & 1) != 0) {
        _printk("<6>%s: %s: IRQ: apsd-done rising; %s detected\n",param_2[1],"smblib_handle_apsd_done",*puVar7);
      }
    }
    if ((*(byte *)param_2[0x50] & 1) != 0) {
      pcVar10 = "falling";
      if ((uVar11 & 2) != 0) {
        pcVar10 = "rising";
      }
      _printk("<6>%s: %s: IRQ: hvdcp-detect-done %s\n",param_2[1],"smblib_handle_hvdcp_detect_done",pcVar10);
    }
    if ((bVar2 >> 6 & 1) != 0) {
      if ((bVar2 >> 1 & 1) == 0) {
        iVar5 = *(int *)(param_2 + 0x230);
        uVar8 = param_2[0xa2];
        pcVar10 = "DCP_VOTER";
        bVar3 = iVar5 != -0x16;
      }
      else {
        vote(param_2[0xab],"CHARGER_TYPE_VOTER",0,0);
        vote(param_2[0xac],"CHARGER_TYPE_VOTER",0,0);
        if (*(char *)((long)param_2 + 0x12cb) != '\0') goto LAB_0012a398;
        if (*(char *)((long)param_2 + 0x12c9) == '\0') {
          if (*(int *)((long)param_2 + 0x128c) == 0xd) {
            uVar8 = param_2[0xa2];
            pcVar10 = "SW_ICL_MAX_VOTER";
            bVar3 = true;
            iVar5 = 0x192d50;
          }
          else {
            uVar8 = param_2[0xa2];
            pcVar10 = "SW_ICL_MAX_VOTER";
            bVar3 = true;
            if (*(char *)((long)param_2 + 0x1301) == '\0') {
              iVar5 = 2000000;
            }
            else {
              iVar5 = 3100000;
            }
          }
        }
        else {
          uVar8 = param_2[0xa2];
          pcVar10 = "SW_ICL_MAX_VOTER";
          bVar3 = true;
          iVar5 = 2500000;
        }
      }
      vote(uVar8,pcVar10,bVar3,iVar5);
    }
LAB_0012a398:
    if ((*(byte *)param_2[0x50] & 1) != 0) {
      pcVar10 = "falling";
      if ((uVar11 & 0x40) != 0) {
        pcVar10 = "rising";
      }
      _printk("<6>%s: %s: IRQ: %s %s\n",param_2[1],"smblib_handle_hvdcp_check_timeout",
              "smblib_handle_hvdcp_check_timeout",pcVar10);
    }
    if ((bVar2 >> 2 & 1) != 0) {
      if (*(int *)((long)param_2 + 0x28c) == 0) {
        vote(param_2[0xa6],"USBIN_V_VOTER",1,0);
      }
      puVar7 = (undefined8 *)smblib_get_apsd_result(param_2);
      if (((*(byte *)(puVar7 + 1) >> 6 & 1) == 0) ||
         ((*(char *)((long)param_2 + 0x1141) == '\0' && (*(char *)((long)param_2 + 0x1301) == '\0'))
         )) {
        if (((*(byte *)(puVar7 + 1) >> 5 & 1) != 0) && (*(char *)(param_2 + 0x263) == '\0')) {
          iVar5 = regmap_update_bits_base(param_2[2],0x1343,0x10,0x10,0,0,0);
          if (iVar5 < 0) {
            _printk("<3>%s: %s: Couldn't write to CMD_HVDCP_2_REG rc=%d\n",param_2[1],"smblib_force_vbus_voltage",iVar5);
            *(undefined4 *)(param_2 + 0x264) = 0;
            _printk("<3>%s: %s: dpdm_qc3p0_flag reset, val:%#04x\n",param_2[1],"smblib_force_vbus_voltage",0x10);
            _printk("<3>Failed to force 9V\n");
          }
          else {
            *(undefined4 *)(param_2 + 0x264) = 0;
            _printk("<3>%s: %s: dpdm_qc3p0_flag reset, val:%#04x\n",param_2[1],"smblib_force_vbus_voltage",0x10);
          }
          vote(param_2[0xa2],"SW_ICL_MAX_VOTER",1,0x192d50);
        }
      }
      else {
        if (*(char *)(param_2 + 0x259) == '\0') {
          iVar5 = smblib_select_sec_charger(param_2,1,1,0);
          if (iVar5 < 0) {
            _dev_err(*param_2,"Couldn\'t enable secondary chargers  rc=%d\n",iVar5);
          }
        }
        else if (*(char *)((long)param_2 + 0x12cc) == '\0') {
          if (*(char *)((long)param_2 + 0x1301) == '\0') {
            pcVar10 = "SW_ICL_MAX_VOTER";
            uVar6 = 1000000;
          }
          else {
            pcVar10 = "HVDCP3_START_ICL_VOTER";
            uVar6 = 500000;
          }
          vote(param_2[0xa2],pcVar10,1,uVar6);
          queue_delayed_work_on(0x20,_system_wq,param_2 + 0x1b9,0x32);
          *(undefined1 *)((long)param_2 + 0x12cc) = 1;
        }
        if ((*(char *)(param_2 + 0x250) == '\0') && (param_2[0x21c] == 0)) {
          if ((*(byte *)param_2[0x50] >> 2 & 1) != 0) {
            uVar8 = param_2[1];
            uVar6 = jiffies_to_msecs(_jiffies);
            _printk("<6>%s: %s: APSD Extented timer started at %lld\n",uVar8,"smblib_handle_hvdcp_3p0_auth_done",uVar6);
          }
          mod_timer(param_2 + 0x21b,_jiffies + 100);
        }
      }
      if ((*(byte *)param_2[0x50] & 1) != 0) {
        _printk("<6>%s: %s: IRQ: hvdcp-3p0-auth-done rising; %s detected\n",param_2[1],"smblib_handle_hvdcp_3p0_auth_done",*puVar7);
      }
    }
    if ((*(byte *)param_2[0x50] & 1) == 0) {
      if ((bVar2 >> 5 & 1) != 0) goto LAB_0012a714;
LAB_0012a6d4:
      cancel_delayed_work_sync(param_2 + 0x1ca);
    }
    else {
      pcVar10 = "falling";
      if ((uVar11 & 0x10) != 0) {
        pcVar10 = "rising";
      }
      _printk("<6>%s: %s: IRQ: sdp-enumeration-done %s\n",param_2[1],"smblib_handle_sdp_enumeration_done",pcVar10);
      if ((bVar2 >> 5 & 1) == 0) goto LAB_0012a6d4;
LAB_0012a714:
      if (*(int *)((long)param_2 + 0x131c) != 0) {
        queue_delayed_work_on(0x20,_system_wq,param_2 + 0x1ca,2000);
      }
    }
    if ((*(byte *)param_2[0x50] & 1) != 0) {
      pcVar10 = "falling";
      if ((uVar11 & 0x20) != 0) {
        pcVar10 = "rising";
      }
      _printk("<6>%s: %s: IRQ: slow-plugin-timeout %s\n",param_2[1],"smblib_handle_slow_plugin_timeout",pcVar10);
    }
    uVar11 = *(uint *)((long)param_2 + 0x128c);
    if (uVar11 == 0xd) {
      if (*(char *)(param_2 + 0x263) != '\0') {
        iVar5 = smblib_set_charge_param(param_2,param_2 + 0x31,*(undefined4 *)(param_2 + 0x52));
        if (iVar5 < 0) {
          _dev_err(*param_2,"Error in setting freq_buck rc=%d\n",iVar5);
        }
        uVar8 = param_2[0x84];
        goto LAB_0012a83c;
      }
      local_5c = 0;
      iVar5 = regmap_read(param_2[2],0x1309,&local_5c);
      if (-1 < iVar5) {
        uVar11 = local_5c & 7;
        if (uVar11 == 4) {
          uVar6 = *(undefined4 *)((long)param_2 + 0x29c);
        }
        else if (uVar11 == 2) {
          uVar6 = *(undefined4 *)(param_2 + 0x53);
        }
        else if (uVar11 == 1) {
          uVar6 = *(undefined4 *)(param_2 + 0x52);
        }
        else {
          uVar6 = *(undefined4 *)(param_2 + 0x54);
        }
        iVar5 = smblib_set_charge_param(param_2,param_2 + 0x31,uVar6);
        if (iVar5 < 0) {
          _dev_err(*param_2,"Error in setting freq_buck rc=%d\n",iVar5);
        }
        vote(param_2[0xa2],"HVDCP2_ICL_VOTER",0,0);
        uVar11 = *(uint *)((long)param_2 + 0x128c);
        goto LAB_0012a824;
      }
      _printk("<3>%s: %s: Couldn't read QC_CHANGE_STATUS rc=%d\n",param_2[1],"smblib_hvdcp_adaptive_voltage_change",iVar5);
    }
    else {
LAB_0012a824:
      if ((uVar11 & 0xfffffffe) == 0xe) {
        smblib_hvdcp3_set_fsw(param_2);
      }
      uVar8 = param_2[0x83];
LAB_0012a83c:
      power_supply_changed(uVar8);
    }
    power_supply_changed(param_2[0x84]);
    local_5c = 0;
    uVar4 = regmap_read(param_2[2],0x1307,&local_5c);
    if ((int)uVar4 < 0) goto LAB_0012a8a8;
    if ((*(byte *)param_2[0x50] & 1) == 0) goto LAB_0012a86c;
    uVar4 = local_5c & 0xff;
    uVar8 = param_2[1];
    puVar9 = "<6>%s: %s: APSD_STATUS = 0x%02x\n";
  }
  _printk(puVar9,uVar8,"smb5_usb_source_change_irq_handler",uVar4);
LAB_0012a86c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smblib_lpd_recheck_timer @ 0012a980 ---- */

undefined8 smblib_lpd_recheck_timer(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x31c) == 1) {
    iVar1 = smblib_set_prop_typec_power_role(param_1 + -0xed8,1);
    if (iVar1 < 0) {
      _printk("<3>%s: %s: Couldn't write 0x%02x to TYPE_C_INTRPT_ENB_SOFTWARE_CTRL rc=%d\n",*(undefined8 *)(param_1 + -0xed0),"smblib_lpd_recheck_timer",1,iVar1);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x35c) = 0;
    power_supply_changed(*(undefined8 *)(param_1 + -0xab8));
  }
  else {
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + -0xec8),0x1560,4,4,0,0,0);
    if (iVar1 < 0) {
      _printk("<3>%s: %s: Couldn't set TYPE_C_INTERRUPT_EN_CFG_2_REG rc=%d\n",*(undefined8 *)(param_1 + -0xed0),"smblib_lpd_recheck_timer",iVar1);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  return 0;
}



/* ---- smblib_typec_port_type_set @ 0012aa50 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int smblib_typec_port_type_set(long param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  mutex_lock(param_1 + -0xa0);
  if ((param_2 == 2) || (*(char *)(param_1 + 0xcd6) != '\0')) {
    if ((**(byte **)(param_1 + -0x208) >> 2 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      _printk("<6>%s: %s: Ignoring port type request type = %d swap_in_progress = %d\n",*(undefined8 *)(param_1 + -0x480),"smblib_typec_port_type_set",param_2);
      iVar2 = 0;
    }
    goto LAB_0012ab74;
  }
  *(undefined1 *)(param_1 + 0xcd6) = 1;
  if (param_2 == 0) {
    iVar2 = regmap_update_bits_base(*(undefined8 *)(param_1 + -0x478),0x1544,7,4,0,0,0);
    if (-1 < iVar2) {
LAB_0012ab20:
      *(int *)(param_1 + 0xd30) = param_2;
      if ((**(byte **)(param_1 + -0x208) >> 2 & 1) == 0) {
        uVar5 = *(ulong *)(param_1 + 0x8b8);
      }
      else {
        pcVar1 = "SOURCE";
        if (param_2 != 0) {
          pcVar1 = "SINK";
        }
        _printk("<6>%s: %s: Requested role %s\n",*(undefined8 *)(param_1 + -0x480),"smblib_typec_port_type_set",pcVar1)
        ;
        uVar5 = *(ulong *)(param_1 + 0x8b8);
      }
      if ((uVar5 & 1) == 0) {
        cancel_delayed_work_sync(param_1 + 0x8b8);
        queue_delayed_work_on(0x20,_system_wq,param_1 + 0x8b8,0x7d);
        vote(*(undefined8 *)(param_1 + 0x90),"TYPEC_SWAP_VOTER",1,0);
      }
      goto LAB_0012ab74;
    }
    uVar4 = *(undefined8 *)(param_1 + -0x480);
    puVar3 = "<3>%s: %s: Couldn't enable src, rc=%d\n";
LAB_0012ac2c:
    _printk(puVar3,uVar4,"smblib_force_dr_mode",iVar2);
  }
  else {
    if (param_2 == 1) {
      iVar2 = regmap_update_bits_base(*(undefined8 *)(param_1 + -0x478),0x1544,7,2,0,0,0);
      if (-1 < iVar2) goto LAB_0012ab20;
      uVar4 = *(undefined8 *)(param_1 + -0x480);
      puVar3 = "<3>%s: %s: Couldn't enable snk, rc=%d\n";
      goto LAB_0012ac2c;
    }
    _printk("<3>%s: %s: Power role %d not supported\n",*(undefined8 *)(param_1 + -0x480),"smblib_force_dr_mode",param_2);
    iVar2 = -0x16;
  }
  *(undefined1 *)(param_1 + 0xcd6) = 0;
  _printk("<3>%s: %s: Failed to force mode, rc=%d\n",*(undefined8 *)(param_1 + -0x480),"smblib_typec_port_type_set",iVar2);
LAB_0012ab74:
  mutex_unlock(param_1 + -0xa0);
  return iVar2;
}



/* ---- smb5_typec_or_rid_detection_change_irq_handler @ 0012ac60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_typec_or_rid_detection_change_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 *puVar4;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  puVar4 = (undefined8 *)*param_2;
  if ((*(byte *)puVar4[0x50] & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",puVar4[1],"smb5_typec_or_rid_detection_change_irq_handler",param_2[1]);
  }
  if (*(int *)((long)puVar4 + 0x119c) == 1) {
    if (*(char *)((long)puVar4 + 0x1236) != '\0') {
      pm_stay_awake(*puVar4);
      queue_work_on(0x20,_system_wq,puVar4 + 0xc4);
    }
    cancel_delayed_work_sync(puVar4 + 0x120);
    if (*(char *)((long)puVar4 + 0x1234) == '\0') {
      vote(puVar4[0xa3],"OTG_DELAY_VOTER",1,0);
      if ((*(byte *)puVar4[0x50] & 1) != 0) {
        _printk("<6>%s: %s: Scheduling OTG work\n",puVar4[1],"smb5_typec_or_rid_detection_change_irq_handler");
      }
      uVar3 = __msecs_to_jiffies(*(undefined4 *)((long)puVar4 + 0x2ac));
      queue_delayed_work_on(0x20,_system_wq,puVar4 + 0x120,uVar3);
    }
  }
  else if ((*(char *)((long)puVar4 + 0x115e) == '\0') && (*(char *)((long)puVar4 + 0x115c) == '\0'))
  {
    if (*(char *)(puVar4 + 0x23e) == '\0') {
      local_3c = 0;
      iVar2 = regmap_read(puVar4[2],0x150b,&local_3c);
      if (iVar2 < 0) {
        _printk("<3>%s: %s: Couldn't read TYPE_C_MISC_STATUS_REG rc=%d\n",puVar4[1],"smblib_lpd_launch_ra_open_work",iVar2);
      }
      else if (((local_3c >> 3 & 1) == 0) && (*(int *)((long)puVar4 + 0x11ec) == 0)) {
        *(undefined4 *)((long)puVar4 + 0x11ec) = 1;
        cancel_delayed_work_sync(puVar4 + 0x142);
        vote(puVar4[0xa3],"LPD_VOTER",1,0);
        queue_delayed_work_on(0x20,_system_wq,puVar4 + 0x142,0x4b);
      }
    }
    if (puVar4[0x84] != 0) {
      power_supply_changed();
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_typec_state_change_irq_handler @ 0012ae54 ---- */

undefined8 smb5_typec_state_change_irq_handler(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x119c) == 1) {
    if ((**(byte **)(lVar5 + 0x280) & 1) == 0) {
      return 1;
    }
    _printk("<6>%s: %s: Ignoring for micro USB\n",*(undefined8 *)(lVar5 + 8),"smb5_typec_state_change_irq_handler");
    return 1;
  }
  uVar2 = smblib_get_prop_typec_mode(lVar5);
  if ((*(int *)(lVar5 + 0x11d4) != 3) && (uVar2 != *(uint *)(lVar5 + 0x11b4))) {
    lVar4 = smblib_get_apsd_result(lVar5);
    iVar3 = *(int *)(lVar4 + 0xc);
    if (iVar3 == 0x10) {
      iVar3 = get_client_vote(*(undefined8 *)(lVar5 + 0x510),"SW_ICL_MAX_VOTER");
      if ((iVar3 < 0x186a1) || ((*(byte *)(lVar5 + 0x11c4) & 7) == 1)) goto LAB_0012af2c;
      iVar3 = *(int *)(lVar4 + 0xc);
    }
    update_sw_icl_max(lVar5,iVar3);
    if ((**(byte **)(lVar5 + 0x280) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: CC change old_mode=%d new_mode=%d\n",*(undefined8 *)(lVar5 + 8),"smblib_handle_rp_change",
              *(undefined4 *)(lVar5 + 0x11b4),uVar2);
    }
  }
LAB_0012af2c:
  *(uint *)(lVar5 + 0x11b4) = uVar2;
  if ((**(byte **)(lVar5 + 0x280) & 1) != 0) {
    if (9 < uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x12afb8);
      (*pcVar1)();
    }
    _printk("<6>%s: %s: IRQ: cc-state-change; Type-C %s detected\n",*(undefined8 *)(lVar5 + 8),"smb5_typec_state_change_irq_handler",
            (&smblib_typec_mode_name)[uVar2]);
  }
  power_supply_changed(*(undefined8 *)(lVar5 + 0x420));
  return 1;
}



/* ---- smb5_typec_attach_detach_irq_handler @ 0012afb8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_typec_attach_detach_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  undefined8 *in_x18;
  undefined8 *puVar13;
  undefined8 unaff_x30;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x5e0);
  puVar13 = (undefined8 *)*param_2;
  if (*(int *)((long)puVar13 + 0x119c) == 1) goto LAB_0012bec8;
  if ((*(byte *)puVar13[0x50] & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",puVar13[1],"smb5_typec_attach_detach_irq_handler",param_2[1]);
  }
  local_4c = 0;
  iVar6 = regmap_read(puVar13[2],0x1509,&local_4c);
  uVar4 = local_4c;
  if (iVar6 < 0) {
    uVar10 = puVar13[1];
    puVar9 = "<3>%s: %s: Couldn't read TYPE_C_STATE_MACHINE_STATUS_REG rc=%d\n";
LAB_0012b498:
    _printk(puVar9,uVar10,"smb5_typec_attach_detach_irq_handler",iVar6);
    goto LAB_0012bec8;
  }
  if ((local_4c >> 5 & 1) == 0) {
    iVar6 = *(int *)((long)puVar13 + 0x11d4);
    if (iVar6 == 1) {
      iVar6 = regmap_update_bits_base(puVar13[2],0x1156,0x30,0x30,0,0,0);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: Couldn't write OTG_FAULT_CONDITION_CFG_REG rc=%d\n",puVar13[1],"typec_src_fault_condition_cfg",iVar6);
      }
      iVar6 = smblib_set_charge_param(puVar13,puVar13 + 0x31,*(undefined4 *)(puVar13 + 0x54));
      if (iVar6 < 0) {
        _dev_err(*puVar13,"Error in setting freq_removal rc=%d\n",iVar6);
      }
      uVar11 = puVar13[0x4e];
      if (uVar11 < 0xfffffffffffff001) {
        if (uVar11 == 0) {
          uVar11 = get_ext_channels(*puVar13,&smblib_third_cp_ext_iio_chan,6);
          if (0xfffffffffffff000 < uVar11) {
            if ((int)uVar11 != -0x205) {
              _dev_err(*puVar13,"Failed to get channels, rc=%d\n");
              puVar13[0x4e] = 0xffffffffffffffea;
            }
            goto LAB_0012b18c;
          }
          puVar13[0x4e] = uVar11;
        }
        if (*(char *)((long)puVar13 + 0x11c6) != '\0') {
          if (*(char *)((long)puVar13 + 0x11c7) != '\0') {
            if ((*(byte *)puVar13[0x50] >> 4 & 1) != 0) {
              _printk("<6>%s: %s: disabling VBUS in OTG mode\n",puVar13[1],"smblib_notify_usb_host");
            }
            iVar6 = regmap_update_bits_base(puVar13[2],0x1140,1,0,0,0,0);
            if (iVar6 < 0) {
              _printk("<3>%s: %s: Couldn't disable VBUS in OTG mode rc=%d\n",puVar13[1],"smblib_notify_usb_host",iVar6);
            }
            else {
              extcon_set_state_sync(puVar13[0x255],2,0);
            }
          }
          uVar11 = puVar13[0x4e];
          *(undefined1 *)((long)puVar13 + 0x11c7) = 0;
        }
        iVar6 = -0x13;
        if (((uVar11 == 0) || (0xfffffffffffff000 < uVar11)) ||
           (iVar6 = iio_write_channel_raw(*(undefined8 *)(uVar11 + 0x28),0,uVar11,0xffffffed),
           iVar6 < 0)) {
          _printk("<3>%s: %s: Couldn't disable CP_ACDRV in OTG mode rc=%d\n",puVar13[1],"typec_sink_removal",iVar6);
        }
      }
      else {
LAB_0012b18c:
        if ((*(byte *)puVar13[0x50] >> 2 & 1) != 0) {
          _printk("<6>%s: %s: Coudln't find cp_psy\n",puVar13[1],"typec_sink_removal");
        }
      }
    }
    else if ((iVar6 == 0) || (iVar6 == 2)) {
      local_4c = local_4c & 0xffff0000;
      iVar6 = smblib_select_sec_charger(puVar13,(ulong)*(byte *)(puVar13 + 0x228) << 1,0,0);
      if (iVar6 < 0) {
        _dev_err(*puVar13,"Couldn\'t disable secondary charger rc=%d\n",iVar6);
      }
      *(undefined1 *)((long)puVar13 + 0x1281) = 0;
      *(undefined4 *)((long)puVar13 + 0x1284) = 0;
      iVar6 = regmap_update_bits_base(puVar13[2],0x1156,0x30,0x30,0,0,0);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: Couldn't write OTG_FAULT_CONDITION_CFG_REG rc=%d\n",puVar13[1],"typec_src_fault_condition_cfg",iVar6);
      }
      if (((*(char *)(puVar13 + 0x239) == '\0') && (*(char *)(puVar13 + 0x57) == '\0')) &&
         (iVar6 = regmap_update_bits_base(puVar13[2],0x1362,0x44,0,0,0,0), iVar6 < 0)) {
        _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",puVar13[1],"smblib_hvdcp_detect_enable",iVar6);
      }
      puVar8 = (undefined8 *)smblib_get_apsd_result(puVar13);
      if (*(int *)(puVar13 + 0x22b) == 0) {
        if (*(char *)((long)puVar13 + 0x1281) != '\0') {
          iVar6 = 0xf;
          goto LAB_0012b62c;
        }
        iVar6 = *(int *)((long)puVar8 + 0xc);
        if (iVar6 != 0x10) goto LAB_0012b62c;
        if (*(int *)((long)puVar13 + 0x128c) != 4) {
          iVar6 = 0x10;
          goto LAB_0012b62c;
        }
      }
      else {
        iVar6 = 9;
LAB_0012b62c:
        *(int *)((long)puVar13 + 0x128c) = iVar6;
      }
      if ((*(byte *)puVar13[0x50] >> 2 & 1) != 0) {
        _printk("<6>%s: %s: APSD=%s PD=%d QC3P5=%d\n",puVar13[1],"smblib_update_usb_type",*puVar8,*(int *)(puVar13 + 0x22b),
                *(undefined1 *)((long)puVar13 + 0x1281));
      }
      *(undefined1 *)((long)puVar13 + 0x1303) = 1;
      _printk("<6>charge plug out, disable ffc mode but maintain ffc_iterm\n");
      smblib_set_fastcharge_mode(puVar13,0);
      if (((*(byte *)(puVar13 + 0x252) & 1) != 0) && (*(long *)(puVar13[3] + 0x6f0) != 0)) {
        update_storm_count(*(long *)(puVar13[3] + 0x6f0) + 0x10,8);
        vote(puVar13[0xa2],"BOOST_BACK_VOTER",0,0);
        vote(puVar13[0xa2],"WEAK_CHARGER_VOTER",0,0);
      }
      cancel_delayed_work_sync(puVar13 + 0x10f);
      cancel_delayed_work_sync(puVar13 + 0x1b9);
      uVar7 = 100000;
      if (*(char *)((long)puVar13 + 0x12dd) != '\0') {
        uVar7 = 500000;
      }
      vote(puVar13[0xa2],"SW_ICL_MAX_VOTER",1,uVar7);
      vote(puVar13[0xa2],"PD_VOTER",0,0);
      vote(puVar13[0xa2],"USB_PSY_VOTER",0,0);
      vote(puVar13[0xa2],"DCP_VOTER",0,0);
      vote(puVar13[0xa2],"SW_QC3_VOTER",0,0);
      vote(puVar13[0xa2],"CTM_VOTER",0,0);
      vote(puVar13[0xa2],"HVDCP2_ICL_VOTER",0,0);
      vote(puVar13[0xa2],"CHG_TERMINATION_VOTER",0,0);
      vote(puVar13[0xa2],"THERMAL_THROTTLE_VOTER",0,0);
      vote(puVar13[0xa2],"LPD_VOTER",0,0);
      vote(puVar13[0xab],"CHARGER_TYPE_VOTER",1,0);
      vote(puVar13[0xac],"CHARGER_TYPE_VOTER",1,0);
      vote(puVar13[0xac],"HDC_IRQ_VOTER",0,0);
      vote(puVar13[0xa4],"PL_DELAY_VOTER",1,0);
      vote(puVar13[0xa4],"PL_FCC_LOW_VOTER",0,0);
      vote(puVar13[0xa6],"USBIN_I_VOTER",0,0);
      vote(puVar13[0xa6],"USBIN_V_VOTER",0,0);
      vote(puVar13[0xa3],"PL_DELAY_VOTER",0,0);
      vote(puVar13[0xa3],"CHG_AWAKE_VOTER",0,0);
      vote(puVar13[0x9f],"CLASSA_QC_FCC_VOTER",0,0);
      vote(puVar13[0xa2],"QC_A_CP_ICL_MAX_VOTER",0,0);
      vote(puVar13[0xa2],"PD_VERIFED_VOTER",0,0);
      vote(puVar13[0xa2],"QC2_UNSUPPORTED_VOTER",0,0);
      vote(puVar13[0xa2],"SW_THERM_REGULATION_VOTER",0,0);
      vote(puVar13[0xa4],"SW_THERM_REGULATION_VOTER",0,0);
      vote(puVar13[0x9e],"SW_THERM_REGULATION_VOTER",0,0);
      if (puVar13[0xa7] != 0) {
        vote(puVar13[0xa7],"SW_THERM_REGULATION_VOTER",0,0);
      }
      cancel_delayed_work_sync(puVar13 + 0x175);
      vote(puVar13[0xa3],"USBOV_DBC_VOTER",0,0);
      *(undefined1 *)(puVar13 + 0x254) = 0;
      puVar13[599] = 0;
      *(undefined4 *)(puVar13 + 0x24d) = 0;
      puVar13[0x22a] = 0x4c4b40004c4b40;
      *(undefined4 *)((long)puVar13 + 0x112c) = 0;
      vote(puVar13[0xa0],"MAIN_FCC_VOTER",0,0);
      puVar13[0x8c] = 0;
      vote_override(puVar13[0x9f],"CC_MODE_VOTER",0,0);
      vote_override(puVar13[0xa2],"CC_MODE_VOTER",0,0);
      vote(puVar13[0xa7],"OVERHEAT_LIMIT_VOTER",0,0);
      vote(puVar13[0xa2],"OVERHEAT_LIMIT_VOTER",0,0);
      vote(puVar13[0xa2],"MAIN_CHG_VOTER",0,0);
      vote(puVar13[0xa2],"HVDCP3_START_ICL_VOTER",0,0);
      iVar6 = regmap_update_bits_base
                        (puVar13[2],0x1363,7,*(undefined1 *)((long)puVar13 + 0x11c4),0,0,0);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: Couldn't write float charger options rc=%d\n",puVar13[1],"typec_src_removal",iVar6);
        iVar6 = *(int *)((long)puVar13 + 0x2b4);
      }
      else {
        iVar6 = *(int *)((long)puVar13 + 0x2b4);
      }
      if (iVar6 != 0) {
        iVar6 = regmap_write(puVar13[2],iVar6 + 0x58U & 0xffff,0);
        if (iVar6 < 0) {
          _printk("<3>Couldn't clear SDAM QC status rc=%d\n",iVar6);
        }
        iVar6 = regmap_bulk_write(puVar13[2],*(int *)((long)puVar13 + 0x2b4) + 0x54U & 0xffff,
                                  &local_4c,2);
        if (iVar6 < 0) {
          _printk("<3>Couldn't clear SDAM ADC status rc=%d\n",iVar6);
        }
      }
      if (*(char *)((long)puVar13 + 0x115e) == '\0') {
        if (*(int *)((long)puVar13 + 0x111c) != 3) {
          iVar6 = regmap_write(puVar13[2],0x1344,0);
          if (iVar6 < 0) {
            _printk("<3>%s: %s: Couldn't write 0x%02x to USBIN_ADAPTER_ALLOW_OVERRIDE_REG rc=%d\n",puVar13[1],"smblib_usb_pd_adapter_allowance_override",0,iVar6);
          }
          if ((*(byte *)puVar13[0x50] >> 2 & 1) != 0) {
            _printk("<6>%s: %s: set USBIN_ALLOW_OVERRIDE: %d\n",puVar13[1],"smblib_usb_pd_adapter_allowance_override",0);
          }
          if (iVar6 < 0) {
            _printk("<3>%s: %s: Couldn't set FORCE_NULL rc=%d\n",puVar13[1],"typec_src_removal",iVar6);
          }
        }
        iVar6 = smblib_set_charge_param(puVar13,puVar13 + 0x3b,*(undefined4 *)(puVar13 + 0x24a));
        if (-1 < iVar6) goto LAB_0012bb24;
        _printk("<3>%s: %s: Couldn't restore aicl_cont_threshold, rc=%d",puVar13[1],"typec_src_removal",iVar6);
        cVar1 = *(char *)(puVar13 + 0x259);
      }
      else {
LAB_0012bb24:
        cVar1 = *(char *)(puVar13 + 0x259);
      }
      if (cVar1 != '\0') {
        iVar6 = regmap_update_bits_base(puVar13[2],0x1343,8,8,0,0,0);
        if (iVar6 < 0) {
          _printk("<3>%s: %s: Couldn't write to CMD_HVDCP_2_REG rc=%d\n",puVar13[1],"smblib_force_vbus_voltage",iVar6);
          *(undefined4 *)(puVar13 + 0x264) = 0;
          _printk("<3>%s: %s: dpdm_qc3p0_flag reset, val:%#04x\n",puVar13[1],"smblib_force_vbus_voltage",8);
          _printk("<3>Failed to force 5V\n");
        }
        else {
          *(undefined4 *)(puVar13 + 0x264) = 0;
          _printk("<3>%s: %s: dpdm_qc3p0_flag reset, val:%#04x\n",puVar13[1],"smblib_force_vbus_voltage",8);
        }
      }
      if (*(int *)((long)puVar13 + 0x129c) != 0) {
        iVar6 = regmap_update_bits_base
                          (puVar13[2],0x135b,0xc0,*(undefined1 *)(puVar13 + 0x253),0,0,0);
        if (iVar6 < 0) {
          _printk("<3>%s: %s: Couldn't restore max pulses rc=%d\n",puVar13[1],"typec_src_removal",iVar6);
          cVar1 = *(char *)(puVar13 + 0x251);
        }
        else {
          cVar1 = *(char *)(puVar13 + 0x251);
        }
        if ((cVar1 == '\0') &&
           (iVar6 = regmap_update_bits_base(puVar13[2],0x1380,0x80,0x80,0,0,0), iVar6 < 0)) {
          _printk("<3>%s: %s: Couldn't turn on SUSPEND_ON_COLLAPSE_USBIN_BIT rc=%d\n",puVar13[1],"typec_src_removal",iVar6);
        }
        *(undefined4 *)((long)puVar13 + 0x129c) = 0;
      }
      if (*(char *)((long)puVar13 + 0x11c6) != '\0') {
        extcon_set_state_sync(puVar13[0x255],1,0);
      }
      *(undefined1 *)((long)puVar13 + 0x1161) = 0;
      *(undefined1 *)(puVar13 + 0x263) = 0;
      *(undefined4 *)((long)puVar13 + 0x12c9) = 0;
      *(undefined1 *)((long)puVar13 + 0x12cd) = 0;
      del_timer_sync(puVar13 + 0x21b);
      *(undefined1 *)(puVar13 + 0x250) = 0;
    }
    else {
      vote(puVar13[0xa2],"SW_ICL_MAX_VOTER",1,100000);
    }
    if (*(char *)((long)puVar13 + 0x115e) == '\0') {
      *(undefined4 *)((long)puVar13 + 0x11d4) = 3;
      *(undefined2 *)((long)puVar13 + 0x115f) = 0;
      iVar6 = regmap_update_bits_base(puVar13[2],0x1362,8,8,0,0,0);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",puVar13[1],"smblib_apsd_enable",iVar6);
      }
    }
    mutex_lock(puVar13 + 0x7d);
    if ((puVar13[0x90] != 0) && (*(char *)((long)puVar13 + 0x115e) == '\0')) {
      cancel_delayed_work(puVar13 + 0x186);
      vote(puVar13[0xa3],"DETACH_DETECT_VOTER",1,0);
      queue_delayed_work_on(0x20,_system_wq,puVar13 + 0x186,500);
      iVar6 = regmap_update_bits_base(puVar13[2],0x1544,7,0,0,0,0);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: Couldn't enable DRP, rc=%d\n",puVar13[1],"smblib_force_dr_mode",iVar6);
      }
      else {
        *(undefined4 *)(puVar13 + 0x237) = 2;
      }
      *(undefined1 *)((long)puVar13 + 0x1163) = 0;
    }
    mutex_unlock(puVar13 + 0x7d);
    if (*(int *)((long)puVar13 + 0x11ec) == 2) {
      queue_delayed_work_on(0x20,_system_wq,puVar13 + 0x153,0xfa);
    }
LAB_0012be94:
    iVar6 = regmap_update_bits_base(puVar13[2],0x1345,1,(uVar4 & 0x20) >> 5 ^ 1,0,0,0);
    if (iVar6 < 0) {
      _printk("<3>%s: %s: Couldn't configure pulldown on USB_IN rc=%d\n",puVar13[1],"smb5_typec_attach_detach_irq_handler",iVar6);
    }
  }
  else {
    if (*(char *)(puVar13 + 0x23e) == '\0') {
      cancel_delayed_work_sync(puVar13 + 0x153);
      *(undefined4 *)((long)puVar13 + 0x11ec) = 2;
      cancel_delayed_work_sync(puVar13 + 0x142);
      vote(puVar13[0xa3],"LPD_VOTER",0,0);
    }
    local_4c = 0;
    iVar6 = regmap_read(puVar13[2],0x150b,&local_4c);
    uVar2 = local_4c;
    if (iVar6 < 0) {
      uVar10 = puVar13[1];
      puVar9 = "<3>%s: %s: Couldn't read TYPE_C_MISC_STATUS_REG rc=%d\n";
      goto LAB_0012b498;
    }
    iVar6 = smblib_get_prop_dfp_mode(puVar13);
    if (iVar6 == 4) {
      *(undefined4 *)((long)puVar13 + 0x11d4) = 2;
      vote(puVar13[0xa2],"SW_ICL_MAX_VOTER",1,500000);
      vote(puVar13[0xa2],"USB_PSY_VOTER",0,0);
      *(undefined1 *)(puVar13 + 0x22c) = 0;
      iVar6 = regmap_update_bits_base(puVar13[2],0x1362,0x44,0x44,0,0,0);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: failed to write USBIN_OPTIONS_1_CFG rc=%d\n",puVar13[1],"smblib_hvdcp_detect_enable",iVar6);
      }
      goto LAB_0012be88;
    }
    if ((uVar2 >> 6 & 1) == 0) {
      *(undefined4 *)((long)puVar13 + 0x11d4) = 0;
      if (*(char *)((long)puVar13 + 0x115e) == '\0') {
        local_4c = 0;
        iVar6 = regmap_read(puVar13[2],0x150d,&local_4c);
        if (iVar6 < 0) {
          _printk("<3>%s: %s: Couldn't read TYPE_C_STATE_MACHINE_STATUS_REG rc=%d\n",puVar13[1],"typec_src_insertion",iVar6);
        }
        else {
          uVar2 = local_4c >> 1 & 1;
          *(char *)((long)puVar13 + 0x1161) = (char)uVar2;
          if (((local_4c >> 1 & 1) == 0) && (*(int *)(puVar13 + 0x51) == 0)) {
            uVar12 = *(undefined1 *)((long)puVar13 + 0x115f);
LAB_0012be50:
            bVar5 = *(char *)(puVar13 + 0x57) == '\0';
          }
          else {
            if (*(char *)((long)puVar13 + 0x115f) != '\0') {
              uVar12 = 1;
              goto LAB_0012be50;
            }
            uVar12 = 0;
            bVar5 = false;
          }
          *(bool *)(puVar13 + 0x22c) = bVar5;
          _printk("<3>%s: %s: ok_to_pd=%d, typec_legacy=%d, early_usb_attach = %d\n",puVar13[1],"typec_src_insertion",bVar5,uVar2,uVar12);
          if (*(char *)(puVar13 + 0x22c) == '\0') {
            smblib_hvdcp_detect_try_enable(puVar13);
          }
        }
      }
      else {
        vote(puVar13[0xa2],"SW_ICL_MAX_VOTER",0,0);
      }
LAB_0012be88:
      iVar6 = typec_partner_register(puVar13);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: failed to register partner rc =%d\n",puVar13[1],"smb5_typec_attach_detach_irq_handler",iVar6);
      }
      goto LAB_0012be94;
    }
    if (*(char *)(puVar13 + 0x23e) != '\0') {
LAB_0012b300:
      uVar11 = puVar13[0x4e];
      *(undefined4 *)((long)puVar13 + 0x11d4) = 1;
      if (uVar11 < 0xfffffffffffff001) {
        if (uVar11 == 0) {
          uVar11 = get_ext_channels(*puVar13,&smblib_third_cp_ext_iio_chan,6);
          if (0xfffffffffffff000 < uVar11) {
            if ((int)uVar11 != -0x205) {
              _dev_err(*puVar13,"Failed to get channels, rc=%d\n");
              puVar13[0x4e] = 0xffffffffffffffea;
            }
            goto LAB_0012b314;
          }
          puVar13[0x4e] = uVar11;
        }
        iVar6 = -0x13;
        if (((uVar11 == 0) || (0xfffffffffffff000 < uVar11)) ||
           (iVar6 = iio_write_channel_raw(*(undefined8 *)(uVar11 + 0x28),1,uVar11,0xffffffed),
           iVar6 < 0)) {
          _printk("<3>%s: %s: Couldn't enable CP_ACDRV in OTG mode rc=%d\n",puVar13[1],"typec_sink_insertion",iVar6);
        }
        else {
          iVar6 = regmap_update_bits_base(puVar13[2],0x1156,0x30,0,0,0,0);
          if (iVar6 < 0) {
            _printk("<3>%s: %s: Couldn't write OTG_FAULT_CONDITION_CFG_REG rc=%d\n",puVar13[1],"typec_src_fault_condition_cfg",iVar6);
          }
          iVar6 = smblib_set_charge_param(puVar13,puVar13 + 0x31,*(undefined4 *)(puVar13 + 0x55));
          if (iVar6 < 0) {
            _dev_err(*puVar13,"Error in setting freq_boost rc=%d\n",iVar6);
            cVar1 = *(char *)((long)puVar13 + 0x11c6);
          }
          else {
            cVar1 = *(char *)((long)puVar13 + 0x11c6);
          }
          if (cVar1 != '\0') {
            smblib_notify_usb_host(puVar13,1);
            *(undefined1 *)((long)puVar13 + 0x11c7) = 1;
          }
          if (*(char *)((long)puVar13 + 0x115e) == '\0') {
            if ((*(int *)(puVar13 + 0x51) == 0) ||
               (bVar5 = false, *(char *)((long)puVar13 + 0x115f) != '\0')) {
              bVar5 = *(char *)(puVar13 + 0x57) == '\0';
            }
            *(bool *)(puVar13 + 0x22c) = bVar5;
          }
        }
      }
      else {
LAB_0012b314:
        if ((*(byte *)puVar13[0x50] >> 2 & 1) != 0) {
          _printk("<6>%s: %s: Coudln't find third_cp_psy\n",puVar13[1],"typec_sink_insertion");
        }
      }
      goto LAB_0012be88;
    }
    local_4c = 0;
    iVar6 = regmap_read(puVar13[2],0x1508,&local_4c);
    if (iVar6 < 0) {
      _printk("<3>%s: %s: Couldn't read TYPE_C_SRC_STATUS_REG rc=%d\n",puVar13[1],"smblib_src_lpd",iVar6);
      goto LAB_0012b300;
    }
    if (((local_4c & 0x1f) != 0x10) || (uVar11 = smblib_rsbux_low(puVar13), (uVar11 & 1) == 0)) {
      *(undefined4 *)((long)puVar13 + 0x11f4) = 0;
      uVar7 = smblib_get_prop_typec_mode(puVar13);
      *(undefined4 *)((long)puVar13 + 0x11b4) = uVar7;
      goto LAB_0012b300;
    }
    *(undefined4 *)((long)puVar13 + 0x11ec) = 3;
    iVar6 = smblib_set_prop_typec_power_role(puVar13,2);
    if (iVar6 < 0) {
      _printk("<3>%s: %s: Couldn't write 0x%02x to TYPE_C_INTRPT_ENB_SOFTWARE_CTRL rc=%d\n",puVar13[1],"smblib_src_lpd",2,iVar6);
    }
    *(undefined4 *)((long)puVar13 + 0x11f4) = 1;
    *(undefined1 *)((long)puVar13 + 0x1234) = 1;
    vote(puVar13[0xa2],"LPD_VOTER",1,0);
    alarm_start_relative(puVar13 + 0x1db,60000000000);
  }
  power_supply_changed(puVar13[0x84]);
LAB_0012bec8:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- typec_partner_register @ 0012c0f4 ---- */

ulong typec_partner_register(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  mutex_lock(param_1 + 1000);
  if ((*(long *)(param_1 + 0x480) != 0) && (*(char *)(param_1 + 0x115e) == '\0')) {
    if (*(long *)(param_1 + 0x4d0) == 0) {
      *(uint *)(param_1 + 0x4dc) = (uint)(*(int *)(param_1 + 0x11d4) == 2);
      uVar4 = typec_register_partner(*(long *)(param_1 + 0x480),param_1 + 0x4d8);
      *(ulong *)(param_1 + 0x4d0) = uVar4;
      if (0xfffffffffffff000 < uVar4) {
        _printk("<3>failed to register typec_partner rc=%d\n",uVar4 & 0xffffffff);
        goto LAB_0012c1a0;
      }
    }
    iVar2 = smblib_get_prop_typec_mode(param_1);
    if ((5 < iVar2) || (iVar2 == 0)) {
      if (*(char *)(param_1 + 0x1163) == '\0') {
        uVar4 = 0;
      }
      else {
        if (*(char *)(param_1 + 0x11c6) == '\0') {
LAB_0012c234:
          uVar4 = 0;
        }
        else {
          local_3c = 0;
          uVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x1310,&local_3c);
          if (-1 < (int)uVar3) {
            if ((local_3c >> 4 & 1) != 0) {
              if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
                _printk("<6>%s: %s:  Role reversal failed, notifying device mode to usb driver.\n",*(undefined8 *)(param_1 + 8),"smblib_role_switch_failure");
              }
              smblib_notify_extcon_props(param_1,1);
              extcon_set_state_sync(*(undefined8 *)(param_1 + 0x12a8),1,1);
            }
            goto LAB_0012c234;
          }
          uVar4 = (ulong)uVar3;
          _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_usb_present",uVar4);
          _printk("<3>%s: %s: Couldn't get usb presence status rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_role_switch_failure",uVar4);
          _printk("<3>%s: %s: Failed to role switch rc=%d\n",*(undefined8 *)(param_1 + 8),"typec_partner_register",uVar4);
        }
        *(undefined1 *)(param_1 + 0x1163) = 0;
      }
      typec_set_data_role(*(undefined8 *)(param_1 + 0x480),0);
      typec_set_pwr_role(*(undefined8 *)(param_1 + 0x480),0);
      goto LAB_0012c1a0;
    }
    typec_set_data_role(*(undefined8 *)(param_1 + 0x480),1);
    typec_set_pwr_role(*(undefined8 *)(param_1 + 0x480),1);
  }
  uVar4 = 0;
LAB_0012c1a0:
  mutex_unlock(param_1 + 1000);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 0xffffffff;
}



/* ---- smb5_dcin_uv_irq_handler @ 0012c2f4 ---- */

undefined8 smb5_dcin_uv_irq_handler(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  int local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_48 = *(long *)(lVar5 + 0x5e0);
  lVar5 = *param_2;
  mutex_lock(lVar5 + 0x350);
  *(int *)(lVar5 + 0x12e4) = *(int *)(lVar5 + 0x12e4) + 1;
  if ((**(byte **)(lVar5 + 0x280) & 0x21) != 0) {
    _printk("<6>%s: %s: DCIN UV count: %d\n",*(undefined8 *)(lVar5 + 8),"smb5_dcin_uv_irq_handler");
  }
  local_4c = 0;
  lVar2 = ktime_get();
  iVar1 = smblib_get_charge_param(lVar5,lVar5 + 0x110,&local_4c);
  if (iVar1 < 0) {
    uVar4 = *(undefined8 *)(lVar5 + 8);
    puVar3 = "<3>%s: %s: reading DCIN ICL failed: %d\n";
LAB_0012c470:
    _printk(puVar3,uVar4,"dcin_icl_decrement",iVar1);
    goto LAB_0012c404;
  }
  if (local_4c == 100000) {
    if ((**(byte **)(lVar5 + 0x280) >> 5 & 1) != 0) {
      _printk("<6>%s: %s: hit min ICL: stop\n",*(undefined8 *)(lVar5 + 8),"dcin_icl_decrement");
    }
    goto LAB_0012c404;
  }
  if (lVar2 - *(long *)(lVar5 + 0x12e8) < 0xbebc5e8) {
    if (2 < *(int *)(lVar5 + 0x12e4)) {
      iVar1 = local_4c + -100000;
      if ((**(byte **)(lVar5 + 0x280) >> 5 & 1) != 0) {
        _printk("<6>%s: %s: icl: %d mA\n",*(undefined8 *)(lVar5 + 8),"dcin_icl_decrement",iVar1 / 1000);
      }
      iVar1 = smblib_set_charge_param(lVar5,lVar5 + 0x110,iVar1);
      if (iVar1 < 0) {
        uVar4 = *(undefined8 *)(lVar5 + 8);
        puVar3 = "<3>%s: %s: setting DCIN ICL failed: %d\n";
        goto LAB_0012c470;
      }
      goto LAB_0012c3fc;
    }
  }
  else {
LAB_0012c3fc:
    *(undefined4 *)(lVar5 + 0x12e4) = 0;
  }
  *(long *)(lVar5 + 0x12e8) = lVar2;
LAB_0012c404:
  mutex_unlock(lVar5 + 0x350);
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_dc_plugin_irq_handler @ 0012c4cc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_dc_plugin_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar8 = sp_el0;
  local_58 = *(long *)(lVar8 + 0x5e0);
  param_2 = (undefined8 *)*param_2;
  local_68 = 0;
  local_60 = 0;
  if (param_2[0x47] == 0) goto LAB_0012c76c;
  iVar5 = iio_read_channel_processed(param_2[0x47],&local_68);
  if (iVar5 < 0) {
    _printk("<3>%s: %s: Couldn't read vph channel rc=%d\n",param_2[1],"smblib_get_prop_vph_voltage_now",iVar5);
    goto LAB_0012c76c;
  }
  iVar5 = (int)local_68;
  iVar6 = smblib_is_input_present(param_2,(long)&local_68 + 4);
  uVar3 = local_68;
  if (iVar6 < 0) goto LAB_0012c76c;
  uVar2 = local_68 >> 0x20;
  if (param_2[0xa8] == 0) {
    uVar7 = find_votable("CP_ILIM");
    param_2[0xa8] = uVar7;
  }
  if ((uVar2 & 6) == 4) {
    cancel_work_sync(param_2 + 0xd0);
    mutex_lock(param_2 + 0x6a);
    iVar6 = smblib_set_charge_param(param_2,param_2 + 0x22,100000);
    mutex_unlock(param_2 + 0x6a);
    if (iVar6 < 0) goto LAB_0012c76c;
    if ((*(byte *)param_2[0x50] & 0x21) == 0) {
      lVar8 = param_2[0xa8];
    }
    else {
      _printk("<6>%s: %s: reset: icl: 100 mA\n",param_2[1],"smb5_dc_plugin_irq_handler");
      lVar8 = param_2[0xa8];
    }
    if (lVar8 != 0) {
      vote(lVar8,"ICL_CHANGE_VOTER",0,0);
    }
    if (*(char *)((long)param_2 + 0x1141) == '\0') {
      local_60 = CONCAT44(local_60._4_4_,5000000);
      iVar5 = smblib_set_prop_voltage_wls_output(param_2,&local_60);
      if (iVar5 < 0) {
        uVar7 = *param_2;
        pcVar10 = "Couldn\'t set dc voltage to 5 V rc=%d\n";
        goto LAB_0012c874;
      }
    }
    else {
      uVar9 = is_cp_topo_vbatt(param_2);
      if ((uVar9 & 1) != 0) {
        vote(param_2[0xa0],"WLS_PL_CHARGING_VOTER",1,800000);
      }
      iVar6 = smblib_get_prop_batt_status(param_2,&local_60);
      if (iVar6 < 0) {
        _printk("<3>%s: %s: Couldn't read batt status rc=%d\n",param_2[1],"smb5_dc_plugin_irq_handler",iVar6);
      }
      iVar6 = 5000000;
      if ((int)local_60 != 4) {
        iVar6 = ((iVar5 << 1) / 100000) * 100000;
      }
      local_60 = CONCAT44(local_60._4_4_,iVar6);
      iVar5 = smblib_set_prop_voltage_wls_output(param_2,&local_60);
      if (iVar5 < 0) {
        _dev_err(*param_2,"Couldn\'t set dc voltage to 2*vph  rc=%d\n",iVar5);
      }
      iVar5 = smblib_select_sec_charger(param_2,1,4,0);
      if (iVar5 < 0) {
        uVar7 = *param_2;
        pcVar10 = "Couldn\'t enable secondary chargers  rc=%d\n";
LAB_0012c874:
        _dev_err(uVar7,pcVar10,iVar5);
      }
    }
    queue_work_on(0x20,_system_wq,param_2 + 0xd0);
  }
  else {
    if ((*(int *)(param_2 + 0x229) == 4) &&
       (iVar5 = smblib_select_sec_charger(param_2,(ulong)*(byte *)(param_2 + 0x228) << 1,0,0),
       iVar5 < 0)) {
      _dev_err(*param_2,"Couldn\'t disable secondary charger rc=%d\n",iVar5);
    }
    vote(param_2[0x9e],"CHG_TERMINATION_VOTER",0,0);
    vote(param_2[0xa0],"WLS_PL_CHARGING_VOTER",0,0);
    *(undefined4 *)(param_2 + 0x25e) = 0;
    *(undefined1 *)((long)param_2 + 0x127c) = 0;
    *(undefined1 *)((long)param_2 + 0x127e) = 0;
  }
  if ((*(char *)(param_2 + 0x23f) != '\0') && ((uVar3 & 0x200000000) == 0)) {
    bVar4 = (uVar3 & 0x400000000) == 0;
    uVar1 = 1500000;
    if (!bVar4) {
      uVar1 = 0;
    }
    vote(param_2[0x9f],"FCC_STEPPER_VOTER",bVar4,uVar1);
  }
  if (param_2[0x85] != 0) {
    power_supply_changed();
  }
  if ((*(byte *)param_2[0x50] & 0x21) != 0) {
    _printk("<6>%s: %s: dcin_present= %d, usbin_present= %d, cp_reason = %d\n",param_2[1],"smb5_dc_plugin_irq_handler",(uVar2 & 4) >> 2,(uVar2 & 2) >> 1,
            *(undefined4 *)(param_2 + 0x229));
  }
LAB_0012c76c:
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_high_duty_cycle_irq_handler @ 0012c880 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_high_duty_cycle_irq_handler(undefined8 param_1,long *param_2)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *param_2;
  *(undefined1 *)(lVar1 + 0x1198) = 1;
  vote(*(undefined8 *)(lVar1 + 0x560),"HDC_IRQ_VOTER",1,0);
  queue_delayed_work_on(0x20,_system_wq,lVar1 + 0x768,0xf);
  return 1;
}



/* ---- smb5_switcher_power_ok_irq_handler @ 0012c8ec ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_switcher_power_ok_irq_handler(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_38 = *(long *)(lVar5 + 0x5e0);
  lVar5 = *param_2;
  if ((*(byte *)(lVar5 + 0x1290) & 1) != 0) {
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(lVar5 + 0x10),0x110b,&local_3c);
    uVar1 = local_3c;
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read POWER_PATH_STATUS rc=%d\n",*(undefined8 *)(lVar5 + 8),"smb5_switcher_power_ok_irq_handler",iVar2);
    }
    else {
      uVar3 = get_effective_result(*(undefined8 *)(lVar5 + 0x510));
      if (((25000 < uVar3 || (uVar1 & 0x10) == 0) && ((uVar1 >> 3 & 1) == 0)) &&
         (uVar4 = is_storming(param_2 + 2), (uVar4 & 1) != 0)) {
        uVar4 = is_client_vote_enabled(*(undefined8 *)(lVar5 + 0x510),"WEAK_CHARGER_VOTER");
        if ((uVar4 & 1) == 0) {
          _printk("<3>%s: %s: Weak charger detected: voting %dmA ICL\n",*(undefined8 *)(lVar5 + 8),"smb5_switcher_power_ok_irq_handler",
                  *(int *)(lVar5 + 0x2b0) / 1000);
          vote(*(undefined8 *)(lVar5 + 0x510),"WEAK_CHARGER_VOTER",1,*(undefined4 *)(lVar5 + 0x2b0))
          ;
          update_storm_count(param_2 + 2,3);
        }
        else {
          _printk("<3>%s: %s: Reverse boost detected: voting 0mA to suspend input\n",*(undefined8 *)(lVar5 + 8),"smb5_switcher_power_ok_irq_handler");
          vote(*(undefined8 *)(lVar5 + 0x510),"BOOST_BACK_VOTER",1,0);
          vote(*(undefined8 *)(lVar5 + 0x518),"BOOST_BACK_VOTER",1,0);
          queue_delayed_work_on(0x20,_system_wq,lVar5 + 0x988,0xbc);
        }
      }
    }
  }
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_wdog_snarl_irq_handler @ 0012ca9c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_wdog_snarl_irq_handler(undefined8 param_1,long *param_2)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *param_2;
  if ((**(byte **)(lVar1 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(lVar1 + 8),"smb5_wdog_snarl_irq_handler",param_2[1]);
  }
  if ((*(byte *)(lVar1 + 0x1290) >> 1 & 1) != 0) {
    cancel_delayed_work_sync(lVar1 + 0xb20);
    vote(*(undefined8 *)(lVar1 + 0x518),"SW_THERM_REGULATION_VOTER",1,0);
    queue_delayed_work_on(0x20,_system_wq,lVar1 + 0xb20,0);
  }
  power_supply_changed(*(undefined8 *)(lVar1 + 0x418));
  return 1;
}



/* ---- smb5_wdog_bark_irq_handler @ 0012cb4c ---- */

undefined8 smb5_wdog_bark_irq_handler(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *param_2;
  if ((**(byte **)(lVar2 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(lVar2 + 8),"smb5_wdog_bark_irq_handler",param_2[1]);
  }
  iVar1 = regmap_write(*(undefined8 *)(lVar2 + 0x10),0x1643,1);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't pet the dog rc=%d\n",*(undefined8 *)(lVar2 + 8),"smb5_wdog_bark_irq_handler",iVar1);
  }
  return 1;
}



/* ---- smb5_temp_change_irq_handler @ 0012cbe0 ---- */

undefined8 smb5_temp_change_irq_handler(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *param_2;
  local_2c = 0;
  iVar1 = regmap_read(*(undefined8 *)(lVar2 + 0x10),0x1607,&local_2c);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't read DIE_TEMP_STATUS_REG rc=%d\n",*(undefined8 *)(lVar2 + 8),"smblib_die_rst_icl_regulate",iVar1);
  }
  else {
    vote(*(undefined8 *)(lVar2 + 0x510),"DIE_TEMP_VOTER",local_2c >> 2 & 1,500000);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smb5_usbin_ov_irq_handler @ 0012cc94 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smb5_usbin_ov_irq_handler(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  lVar4 = *param_2;
  if ((**(byte **)(lVar4 + 0x280) & 1) != 0) {
    _printk("<6>%s: %s: IRQ: %s\n",*(undefined8 *)(lVar4 + 8),"smb5_usbin_ov_irq_handler",param_2[1]);
  }
  if ((*(byte *)(lVar4 + 0x1290) >> 3 & 1) != 0) {
    local_2c = 0;
    uVar1 = regmap_read(*(undefined8 *)(lVar4 + 0x10),0x1310,&local_2c);
    if ((int)uVar1 < 0) {
      uVar3 = *(undefined8 *)(lVar4 + 8);
      puVar2 = "<3>%s: %s: Couldn't read USB_INT_RT_STS rc=%d\n";
    }
    else {
      if ((local_2c >> 3 & 1) == 0) {
        cancel_delayed_work_sync(lVar4 + 0xba8);
        *(undefined1 *)(lVar4 + 0x12a0) = 0;
        vote(*(undefined8 *)(lVar4 + 0x518),"USBOV_DBC_VOTER",0,0);
      }
      else {
        *(undefined1 *)(lVar4 + 0x12a0) = 1;
        vote(*(undefined8 *)(lVar4 + 0x518),"USBOV_DBC_VOTER",1,0);
        queue_delayed_work_on(0x20,_system_wq,lVar4 + 0xba8,0xfa);
      }
      if ((**(byte **)(lVar4 + 0x280) >> 2 & 1) == 0) goto LAB_0012cd68;
      uVar3 = *(undefined8 *)(lVar4 + 8);
      puVar2 = "<6>%s: %s: USBOV debounce status %d\n";
      uVar1 = (uint)*(byte *)(lVar4 + 0x12a0);
    }
    _printk(puVar2,uVar3,"smb5_usbin_ov_irq_handler",uVar1);
  }
LAB_0012cd68:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- smblib_get_prop_pr_swap_in_progress @ 0012cdf8 ---- */

undefined8 smblib_get_prop_pr_swap_in_progress(long param_1,uint *param_2)

{
  *param_2 = (uint)*(byte *)(param_1 + 0x115e);
  return 0;
}



/* ---- smblib_set_prop_pr_swap_in_progress @ 0012ce14 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int smblib_set_prop_pr_swap_in_progress(long param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: Requested PR_SWAP %d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_pr_swap_in_progress",param_2
           );
  }
  pcVar1 = (char *)(param_1 + 0x115e);
  *pcVar1 = param_2 != 0;
  if (param_2 == 0) {
    cancel_delayed_work_sync(param_1 + 0xc30);
    vote(*(undefined8 *)(param_1 + 0x518),"DETACH_DETECT_VOTER",1,0);
    queue_delayed_work_on(0x20,_system_wq,param_1 + 0xc30,5);
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
  }
  iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1562,4,uVar7,0,0,0);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't set tCC debounce rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_pr_swap_in_progress",iVar3);
  }
  iVar3 = regmap_update_bits_base
                    (*(undefined8 *)(param_1 + 0x10),0x1550,8,(ulong)(param_2 != 0) << 3,0,0,0);
  if (iVar3 < 0) {
    _printk("<3>%s: %s: Couldn't set exit state cfg rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_pr_swap_in_progress",iVar3);
    if (*pcVar1 == '\0') goto LAB_0012cfd0;
LAB_0012cf04:
    local_3c = 0;
    iVar3 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x150b,&local_3c);
    if (iVar3 < 0) {
      _printk("<3>%s: %s: Couldn't read TYPE_C_STATUS_4 rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_set_prop_pr_swap_in_progress",iVar3
             );
      uVar6 = 5;
    }
    else {
      uVar6 = local_3c & 2 | 5;
    }
    iVar4 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1548,7,uVar6,0,0,0);
    iVar3 = 0;
    if (-1 < iVar4) goto LAB_0012d030;
    uVar7 = *(undefined8 *)(param_1 + 8);
    puVar5 = "<3>%s: %s: Couldn't read TYPE_C_CCOUT_CONTROL_REG rc=%d\n";
LAB_0012d0d8:
    _printk(puVar5,uVar7,"smblib_set_prop_pr_swap_in_progress",iVar4);
  }
  else {
    if (*pcVar1 != '\0') goto LAB_0012cf04;
LAB_0012cfd0:
    iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1548,1,0,0,0,0);
    if (iVar3 < 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      puVar5 = "<3>%s: %s: Couldn't read TYPE_C_CCOUT_CONTROL_REG rc=%d\n";
LAB_0012d0ac:
      _printk(puVar5,uVar7,"smblib_set_prop_pr_swap_in_progress",iVar3);
      goto LAB_0012d030;
    }
    iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1544,7,0,0,0,0);
    if (iVar3 < 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      puVar5 = "<3>%s: %s: Couldn't enable DRP rc=%d\n";
      goto LAB_0012d0ac;
    }
    *(undefined4 *)(param_1 + 0x11d8) = 1;
    if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      puVar5 = "<6>%s: %s: restore power role: %d\n";
      iVar4 = 1;
      goto LAB_0012d0d8;
    }
  }
  iVar3 = 0;
LAB_0012d030:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_moisture_detection_enable @ 0012d0e4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void smblib_moisture_detection_enable(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  if (*(int *)(param_1 + 0x288) == 0) {
    smblib_is_input_present(param_1,&local_2c);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x11f0) = 1;
      uVar3 = is_client_vote_enabled(*(undefined8 *)(param_1 + 0x510),"LPD_VOTER");
      if ((uVar3 & 1) != 0) {
        cancel_delayed_work_sync(param_1 + 0xa10);
        alarm_cancel(param_1 + 0xed8);
        vote(*(undefined8 *)(param_1 + 0x510),"LPD_VOTER",0,0);
        iVar2 = smblib_set_prop_typec_power_role(param_1,1);
        if (iVar2 < 0) {
          _printk("<3>%s: %s: Failed to set power-role to DRP rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_moisture_detection_enable",
                  iVar2);
        }
        else {
          *(undefined4 *)(param_1 + 0x11f4) = 0;
          *(undefined4 *)(param_1 + 0x11ec) = 0;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x11f0) = 0;
      if (local_2c != 0) {
        queue_delayed_work_on(0x20,_system_wq,param_1 + 0xa10,0x4b);
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_init @ 0012d208 ---- */

ulong smblib_init(undefined8 *param_1)

{
  int iVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *in_x18;
  ulong uVar14;
  undefined8 unaff_x30;
  ushort local_3c [2];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar6 = sp_el0;
  local_38 = *(long *)(lVar6 + 0x5e0);
  __mutex_init(param_1 + 0x58,"&chg->smb_lock",&plugin_val);
  __mutex_init(param_1 + 100,"&chg->irq_status_lock",&plugin_val);
  __mutex_init(param_1 + 0x6a,"&chg->dcin_aicl_lock",&plugin_val);
  __mutex_init(param_1 + 0x77,"&chg->dpdm_lock",&plugin_val);
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0xb2] = 0xfffffffe0;
  param_1[0xb3] = param_1 + 0xb3;
  param_1[0xb4] = param_1 + 0xb3;
  param_1[0xb5] = bms_update_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  param_1[0xb8] = 0xfffffffe0;
  param_1[0xb9] = param_1 + 0xb9;
  param_1[0xba] = param_1 + 0xb9;
  param_1[0xbb] = pl_update_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  param_1[0xbe] = 0xfffffffe0;
  param_1[0xbf] = param_1 + 0xbf;
  param_1[0xc0] = param_1 + 0xbf;
  param_1[0xc1] = jeita_update_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  param_1[0xd0] = 0xfffffffe0;
  param_1[0xd1] = param_1 + 0xd1;
  param_1[0xd2] = param_1 + 0xd1;
  param_1[0xd3] = dcin_aicl_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  param_1[0xd6] = 0xfffffffe0;
  param_1[0xd7] = param_1 + 0xd7;
  param_1[0xd8] = param_1 + 0xd7;
  param_1[0xd9] = smblib_cp_status_change_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  param_1[0xed] = 0xfffffffe0;
  param_1[0xee] = param_1 + 0xee;
  param_1[0xef] = param_1 + 0xee;
  param_1[0xf0] = clear_hdc_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0xf3,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0xfe] = 0xfffffffe0;
  param_1[0xff] = param_1 + 0xff;
  param_1[0x100] = param_1 + 0xff;
  param_1[0x101] = smblib_icl_change_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x104,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x10f] = 0xfffffffe0;
  param_1[0x110] = param_1 + 0x110;
  param_1[0x111] = param_1 + 0x110;
  param_1[0x112] = smblib_pl_enable_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x115,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x120] = 0xfffffffe0;
  param_1[0x121] = param_1 + 0x121;
  param_1[0x122] = param_1 + 0x121;
  param_1[0x123] = smblib_uusb_otg_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x126,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x131] = 0xfffffffe0;
  param_1[0x132] = param_1 + 0x132;
  param_1[0x133] = param_1 + 0x132;
  param_1[0x134] = smblib_bb_removal_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x137,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x142] = 0xfffffffe0;
  param_1[0x143] = param_1 + 0x143;
  param_1[0x144] = param_1 + 0x143;
  param_1[0x145] = smblib_lpd_ra_open_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x148,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x153] = 0xfffffffe0;
  param_1[0x154] = param_1 + 0x154;
  param_1[0x155] = param_1 + 0x154;
  param_1[0x156] = smblib_lpd_detach_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x159,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x1b9] = 0xfffffffe0;
  param_1[0x1ba] = param_1 + 0x1ba;
  param_1[0x1bb] = param_1 + 0x1ba;
  param_1[0x1bc] = smblib_raise_qc3_vbus_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x1bf,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x164] = 0xfffffffe0;
  param_1[0x165] = param_1 + 0x165;
  param_1[0x166] = param_1 + 0x165;
  param_1[0x167] = smblib_thermal_regulation_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x16a,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x175] = 0xfffffffe0;
  param_1[0x176] = param_1 + 0x176;
  param_1[0x177] = param_1 + 0x176;
  param_1[0x178] = smblib_usbov_dbc_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x17b,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x186] = 0xfffffffe0;
  param_1[0x187] = param_1 + 0x187;
  param_1[0x188] = param_1 + 0x187;
  param_1[0x189] = smblib_pr_swap_detach_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x18c,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x197] = 0xfffffffe0;
  param_1[0x198] = param_1 + 0x198;
  param_1[0x199] = param_1 + 0x198;
  param_1[0x19a] = smblib_pr_lock_clear_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x19d,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  init_timer_key(param_1 + 0x21b,apsd_timer_cb_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt,0,0,0);
  param_1[0x1a8] = 0xfffffffe0;
  param_1[0x1a9] = param_1 + 0x1a9;
  param_1[0x1aa] = param_1 + 0x1a9;
  param_1[0x1ab] = smblib_typec_role_check_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x1ae,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  param_1[0x1ca] = 0xfffffffe0;
  param_1[0x1cb] = param_1 + 0x1cb;
  param_1[0x1cc] = param_1 + 0x1cb;
  param_1[0x1cd] = smblib_float_retry_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
  init_timer_key(param_1 + 0x1d0,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
  if ((*(byte *)(param_1 + 0x252) >> 4 & 1) == 0) {
LAB_0012d66c:
    if (*(char *)((long)param_1 + 0x1236) != '\0') {
      param_1[0xc4] = 0xfffffffe0;
      param_1[0xc5] = param_1 + 0xc5;
      param_1[0xc6] = param_1 + 0xc5;
      param_1[199] = smblib_moisture_protection_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
      lVar6 = alarmtimer_get_rtcdev();
      if (lVar6 == 0) {
        uVar9 = param_1[1];
        puVar8 = "<3>%s: %s: Failed to initialize moisture protection alarm\n";
        goto LAB_0012d9a4;
      }
      alarm_init(param_1 + 0x1eb,1,
                 moisture_protection_alarm_cb_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt);
    }
    lVar6 = alarmtimer_get_rtcdev();
    if (lVar6 != 0) {
      alarm_init(param_1 + 0x20b,0,dcin_aicl_alarm_cb_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt);
      *(undefined8 *)((long)param_1 + 0x1184) = 0xffffffeaffffffea;
      *(undefined4 *)((long)param_1 + 0x11d4) = 3;
      *(undefined8 *)((long)param_1 + 0x1144) = 0;
      *(undefined4 *)((long)param_1 + 0x120c) = 5;
      *(undefined4 *)(param_1 + 0x236) = 0xffffffea;
      *(undefined4 *)(param_1 + 0x232) = 0xffffffea;
      *(undefined1 *)((long)param_1 + 0x1162) = 1;
      *(undefined4 *)((long)param_1 + 0x114c) = 0xffffffea;
      *(undefined4 *)((long)param_1 + 0x11dc) = 0;
      *(undefined4 *)(param_1 + 0x237) = 2;
      *(undefined1 *)((long)param_1 + 0x12cb) = 0;
      g_chg = param_1;
      *(undefined1 *)(param_1 + 0x263) = 0;
      puVar7 = (undefined8 *)smblib_get_apsd_result(param_1);
      if (*(int *)(param_1 + 0x22b) == 0) {
        if (*(char *)((long)param_1 + 0x1281) != '\0') {
          iVar5 = 0xf;
          goto LAB_0012d77c;
        }
        iVar5 = *(int *)((long)puVar7 + 0xc);
        if (iVar5 != 0x10) goto LAB_0012d77c;
        if (*(int *)((long)param_1 + 0x128c) != 4) {
          iVar5 = 0x10;
          goto LAB_0012d77c;
        }
      }
      else {
        iVar5 = 9;
LAB_0012d77c:
        *(int *)((long)param_1 + 0x128c) = iVar5;
      }
      if ((*(byte *)param_1[0x50] >> 2 & 1) != 0) {
        _printk("<6>%s: %s: APSD=%s PD=%d QC3P5=%d\n",param_1[1],"smblib_update_usb_type",*puVar7,*(int *)(param_1 + 0x22b),
                *(undefined1 *)((long)param_1 + 0x1281));
      }
      *(undefined4 *)((long)param_1 + 0x131c) = 1;
      if (*(int *)((long)param_1 + 0x28c) != 0) {
        if (*(int *)((long)param_1 + 0x28c) != 1) {
          _printk("<3>%s: %s: Unsupported mode %d\n",param_1[1],"smblib_init");
          uVar14 = 0xffffffea;
          goto LAB_0012dcdc;
        }
LAB_0012dcb0:
        if (*(char *)(puVar7 + 1) == '\b') {
          smblib_request_dpdm(param_1,0);
          msleep(500);
          smblib_rerun_apsd_if_required(param_1);
        }
        uVar14 = 0;
        goto LAB_0012dcdc;
      }
      uVar4 = qcom_batt_init(*param_1,param_1 + 0x222);
      if ((int)uVar4 < 0) {
        uVar9 = param_1[1];
        uVar14 = (ulong)uVar4;
        puVar8 = "<3>%s: %s: Couldn't init qcom_batt_init rc=%d\n";
      }
      else {
        uVar4 = qcom_step_chg_init(*param_1,*(undefined1 *)((long)param_1 + 0x1194),
                                   *(undefined1 *)((long)param_1 + 0x1195),
                                   *(undefined1 *)((long)param_1 + 0x1196),param_1[0x4b]);
        if ((int)uVar4 < 0) {
          uVar9 = param_1[1];
          uVar14 = (ulong)uVar4;
          puVar8 = "<3>%s: %s: Couldn't init qcom_step_chg_init rc=%d\n";
        }
        else {
          lVar6 = find_votable("FCC");
          param_1[0x9f] = lVar6;
          if (lVar6 == 0) {
            puVar8 = "<3>%s: %s: Couldn't find FCC votable rc=%d\n";
LAB_0012da58:
            uVar14 = 0xffffffea;
            _printk(puVar8,param_1[1],"smblib_create_votables",0xffffffea);
          }
          else {
            lVar6 = find_votable("FCC_MAIN");
            param_1[0xa0] = lVar6;
            if (lVar6 == 0) {
              puVar8 = "<3>%s: %s: Couldn't find FCC Main votable rc=%d\n";
              goto LAB_0012da58;
            }
            lVar6 = find_votable(&DAT_0010d6a2);
            param_1[0xa1] = lVar6;
            if (lVar6 == 0) {
              puVar8 = "<3>%s: %s: Couldn't find FV votable rc=%d\n";
              goto LAB_0012da58;
            }
            lVar6 = find_votable("USB_ICL");
            param_1[0xa2] = lVar6;
            if (lVar6 == 0) {
              puVar8 = "<3>%s: %s: Couldn't find USB_ICL votable rc=%d\n";
              goto LAB_0012da58;
            }
            lVar6 = find_votable("PL_DISABLE");
            param_1[0xa4] = lVar6;
            if (lVar6 == 0) {
              puVar8 = "<3>%s: %s: Couldn't find votable PL_DISABLE rc=%d\n";
              goto LAB_0012da58;
            }
            lVar6 = find_votable("PL_ENABLE_INDIRECT");
            param_1[0xa6] = lVar6;
            if (lVar6 == 0) {
              puVar8 = "<3>%s: %s: Couldn't find votable PL_ENABLE_INDIRECT rc=%d\n";
              goto LAB_0012da58;
            }
            vote(param_1[0xa4],"PL_DELAY_VOTER",1,0);
            uVar14 = create_votable("SMB_EN_OVERRIDE",2,
                                    smblib_smb_disable_override_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                    ,param_1);
            param_1[0xa9] = uVar14;
            if (uVar14 < 0xfffffffffffff001) {
              uVar14 = create_votable("DC_SUSPEND",2,
                                      smblib_dc_suspend_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0x9e] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0x9e;
                goto LAB_0012db5c;
              }
              uVar14 = create_votable("AWAKE",2,
                                      smblib_awake_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0xa3] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0xa3;
                goto LAB_0012db5c;
              }
              uVar14 = create_votable("CHG_DISABLE",2,
                                      smblib_chg_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0xa5] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0xa5;
                goto LAB_0012db5c;
              }
              uVar14 = create_votable("USB_LIMITED_IRQ_DISABLE",2,
                                      smblib_limited_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0xab] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0xab;
                goto LAB_0012db5c;
              }
              uVar14 = create_votable("USB_HDC_IRQ_DISABLE",2,
                                      smblib_hdc_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0xac] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0xac;
                goto LAB_0012db5c;
              }
              uVar14 = create_votable("USB_ICL_IRQ_DISABLE",2,
                                      smblib_icl_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0xaa] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0xaa;
                goto LAB_0012db5c;
              }
              uVar14 = create_votable("TEMP_CHANGE_IRQ_DISABLE",2,
                                      smblib_temp_change_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0xad] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0xad;
                goto LAB_0012db5c;
              }
              uVar14 = create_votable("BAT_TEMP_IRQ_DISABLE",2,
                                      smblib_bat_temp_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt
                                      ,param_1);
              param_1[0xae] = uVar14;
              if (0xfffffffffffff000 < uVar14) {
                puVar11 = param_1 + 0xae;
                goto LAB_0012db5c;
              }
              lVar6 = find_votable("QUICK_CHARGE_TYPE_CHANGED");
              param_1[0xb1] = lVar6;
              if (lVar6 == 0) {
                puVar8 = "<3>%s: %s: Couldn't find votable QUICK_CHARGE_TYPE_CHANGED rc=%d\n";
                goto LAB_0012da58;
              }
LAB_0012db64:
              uVar14 = get_ext_channels(*param_1,&smblib_qg_ext_iio_chan,0x19);
              if (uVar14 < 0xfffffffffffff001) {
                param_1[0x4c] = uVar14;
              }
              if (*(char *)(param_1 + 0x228) != '\0') {
                uVar14 = get_ext_channels(*param_1,&smblib_parallel_ext_iio_chan,3);
                if (uVar14 < 0xfffffffffffff001) {
                  param_1[0x4f] = uVar14;
                }
                else {
                  uVar14 = param_1[0x4f];
                }
                if (uVar14 != 0) {
                  if ((*(int *)((long)param_1 + 0x1144) != 1) &&
                     (iVar5 = smblib_select_sec_charger(param_1,2,0,0), iVar5 < 0)) {
                    _printk("<3>%s: %s: Couldn't config pl charger rc=%d\n",param_1[1],"smblib_init",iVar5);
                  }
                  if (*(int *)((long)param_1 + 0x11e4) == -0x16) {
                    local_3c[0] = 0;
                    uVar4 = regmap_bulk_read(param_1[2],0x16bc,local_3c,2);
                    if (-1 < (int)uVar4) {
                      iVar5 = 0;
                      iVar13 = 0x73;
                      uVar2 = local_3c[0] >> 8 | local_3c[0] << 8;
                      do {
                        while( true ) {
                          iVar1 = iVar5 + iVar13;
                          if (iVar1 < 0) {
                            iVar1 = iVar1 + 1;
                          }
                          uVar4 = iVar1 >> 1;
                          if (0x73 < uVar4) {
                    /* WARNING: Does not return */
                            pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x12ddcc);
                            (*pcVar3)();
                          }
                          if (*(short *)(&therm_lookup_table + (ulong)uVar4 * 2) < (short)uVar2)
                          break;
                          if ((*(short *)(&therm_lookup_table + (ulong)uVar4 * 2) <= (short)uVar2)
                             || (iVar5 = uVar4 + 1, iVar13 < iVar5)) goto LAB_0012dc68;
                        }
                        iVar13 = uVar4 - 1;
                      } while (iVar5 <= iVar13);
LAB_0012dc68:
                      *(uint *)((long)param_1 + 0x11e4) = uVar4 * 10 + -300;
                      goto LAB_0012dc78;
                    }
                    uVar14 = (ulong)uVar4;
                    _printk("<3>failed to write to 0x%04X, rc=%d\n",0x16bc,uVar14);
                    uVar9 = *param_1;
                    pcVar10 = "Couldn\'t get charger_temp_max rc=%d\n";
                  }
                  else {
LAB_0012dc78:
                    uVar12 = param_1[0x4f];
                    uVar14 = 0xffffffed;
                    if ((uVar12 != 0) && (uVar12 < 0xfffffffffffff001)) {
                      uVar4 = iio_write_channel_raw(*(undefined8 *)(uVar12 + 8));
                      if (-1 < (int)uVar4) goto LAB_0012dc98;
                      uVar14 = (ulong)uVar4;
                    }
                    uVar9 = *param_1;
                    pcVar10 = "Couldn\'t set POWER_SUPPLY_PROP_CHARGER_TEMP_MAX rc=%d\n";
                  }
                  _dev_err(uVar9,pcVar10,uVar14);
                  goto LAB_0012dcdc;
                }
              }
LAB_0012dc98:
              param_1[0x88] = smblib_notifier_call_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
              uVar14 = power_supply_reg_notifier(param_1 + 0x88);
              if (-1 < (int)uVar14) goto LAB_0012dcb0;
              uVar14 = uVar14 & 0xffffffff;
              _printk("<3>%s: %s: Couldn't register psy notifier rc = %d\n",param_1[1],"smblib_register_notifier",uVar14);
              uVar9 = param_1[1];
              puVar8 = "<3>%s: %s: Couldn't register notifier rc=%d\n";
              goto LAB_0012da7c;
            }
            puVar11 = param_1 + 0xa9;
LAB_0012db5c:
            *puVar11 = 0;
            if (-1 < (int)uVar14) goto LAB_0012db64;
          }
          uVar9 = param_1[1];
          puVar8 = "<3>%s: %s: Couldn't create votables rc=%d\n";
        }
      }
LAB_0012da7c:
      _printk(puVar8,uVar9,"smblib_init",uVar14 & 0xffffffff);
      goto LAB_0012dcdc;
    }
    uVar9 = param_1[1];
    puVar8 = "<3>%s: %s: Failed to initialize dcin aicl alarm\n";
  }
  else {
    param_1[0xca] = 0xfffffffe0;
    param_1[0xcb] = param_1 + 0xcb;
    param_1[0xcc] = param_1 + 0xcb;
    param_1[0xcd] = smblib_chg_termination_work_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt;
    lVar6 = alarmtimer_get_rtcdev();
    if (lVar6 != 0) {
      alarm_init(param_1 + 0x1fb,1,chg_termination_alarm_cb_c1f83f06b53fd76bd0f354fad1e3f8fe_cfi_jt)
      ;
      goto LAB_0012d66c;
    }
    uVar9 = param_1[1];
    puVar8 = "<3>%s: %s: Couldn't get rtc device\n";
  }
LAB_0012d9a4:
  _printk(puVar8,uVar9,"smblib_init");
  uVar14 = 0xffffffed;
LAB_0012dcdc:
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14 & 0xffffffff;
}



/* ---- bms_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012ddcc ---- */

void bms_update_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  ulong uVar1;
  undefined8 *in_x18;
  undefined8 *puVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(ulong *)(param_1 + -0x330) < 0xfffffffffffff001) {
    puVar2 = (undefined8 *)(param_1 + -0x590);
    if (*(ulong *)(param_1 + -0x330) == 0) {
      uVar1 = get_ext_channels(*puVar2,&smblib_qg_ext_iio_chan,0x19);
      if (0xfffffffffffff000 < uVar1) {
        if ((int)uVar1 == -0x205) {
          return;
        }
        _dev_err(*puVar2,"Failed to get channels, %d\n");
        *(undefined8 *)(param_1 + -0x330) = 0xffffffffffffffea;
        return;
      }
      *(ulong *)(param_1 + -0x330) = uVar1;
    }
    smblib_config_charger_on_debug_battery(puVar2);
    if (*(long *)(param_1 + -0x178) != 0) {
      power_supply_changed();
    }
  }
  return;
}



/* ---- pl_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012de68 ---- */

void pl_update_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  undefined8 *in_x18;
  undefined8 *puVar11;
  undefined8 unaff_x30;
  ushort local_2c [2];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  puVar11 = (undefined8 *)(param_1 + -0x5c0);
  local_28 = *(long *)(lVar4 + 0x5e0);
  uVar7 = get_ext_channels(*puVar11,&smblib_parallel_ext_iio_chan,3);
  if (0xfffffffffffff000 < uVar7) {
    if ((int)uVar7 != -0x205) {
      _dev_err(*puVar11,"Failed to get channels, %d\n");
      *(undefined8 *)(param_1 + -0x348) = 0xffffffffffffffea;
    }
    goto LAB_0012dff8;
  }
  *(ulong *)(param_1 + -0x348) = uVar7;
  if (*(int *)(param_1 + 0xc24) == -0x16) {
    local_2c[0] = 0;
    iVar6 = regmap_bulk_read(*(undefined8 *)(param_1 + -0x5b0),0x16bc,local_2c,2);
    if (-1 < iVar6) {
      iVar6 = 0;
      iVar10 = 0x73;
      uVar3 = local_2c[0] >> 8 | local_2c[0] << 8;
      do {
        while( true ) {
          iVar1 = iVar6 + iVar10;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          uVar2 = iVar1 >> 1;
          if (0x73 < uVar2) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x12e028);
            (*pcVar5)();
          }
          if (*(short *)(&therm_lookup_table + (ulong)uVar2 * 2) < (short)uVar3) break;
          if ((*(short *)(&therm_lookup_table + (ulong)uVar2 * 2) <= (short)uVar3) ||
             (iVar6 = uVar2 + 1, iVar10 < iVar6)) goto LAB_0012df60;
        }
        iVar10 = uVar2 - 1;
      } while (iVar6 <= iVar10);
LAB_0012df60:
      uVar7 = *(ulong *)(param_1 + -0x348);
      *(uint *)(param_1 + 0xc24) = uVar2 * 10 + -300;
      goto LAB_0012df74;
    }
    _printk("<3>failed to write to 0x%04X, rc=%d\n",0x16bc,iVar6);
    uVar8 = *puVar11;
    pcVar9 = "Couldn\'t get charger_temp_max rc=%d\n";
  }
  else {
LAB_0012df74:
    iVar6 = -0x13;
    if (((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) &&
       (iVar6 = iio_write_channel_raw(0xffffffed,*(undefined8 *)(uVar7 + 8)), -1 < iVar6)) {
      if (*(int *)(param_1 + 0xb84) != 1) {
        smblib_select_sec_charger(puVar11,2,0,0);
      }
      goto LAB_0012dff8;
    }
    uVar8 = *puVar11;
    pcVar9 = "Couldn\'t set POWER_SUPPLY_PROP_CHARGER_TEMP_MAX rc=%d\n";
  }
  _dev_err(uVar8,pcVar9,iVar6);
LAB_0012dff8:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- jeita_update_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012e02c ---- */

void jeita_update_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *in_x18;
  long *plVar8;
  undefined8 unaff_x30;
  ushort local_5c [2];
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  plVar8 = (long *)(param_1 + -0x5f0);
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_40 = 0;
  local_48 = 0;
  local_58 = 0;
  local_5c[0] = 0;
  lVar3 = of_find_node_by_name(*(undefined8 *)(*plVar8 + 0x2f0),"qcom,battery-data");
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + -0x5e8);
    puVar4 = "<3>%s: %s: Batterydata not available\n";
LAB_0012e2f0:
    _printk(puVar4,uVar5,"jeita_update_work");
LAB_0012e3c4:
    uVar6 = 1;
  }
  else {
    uVar7 = *(ulong *)(param_1 + -0x390);
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) goto LAB_0012e3cc;
    uVar7 = iio_read_channel_processed(*(undefined8 *)(uVar7 + 0x40),&local_40);
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 & 0xffffffff;
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      puVar4 = "<3>%s: %s: Failed to get batt-id rc=%d\n";
      goto LAB_0012e3c0;
    }
    if ((int)local_40 < 1) goto LAB_0012e3cc;
    uVar7 = of_batterydata_get_best_profile(lVar3,(local_40 & 0xffffffff) / 1000,0);
    if (0xfffffffffffff000 < uVar7) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      puVar4 = "<3>%s: %s: Failed to detect valid battery profile %d\n";
      uVar7 = uVar7 & 0xffffffff;
LAB_0012e3c0:
      _printk(puVar4,uVar5,"jeita_update_work",uVar7);
      goto LAB_0012e3c4;
    }
    iVar1 = of_property_read_variable_u32_array(uVar7,"qcom,jeita-hard-thresholds",&local_58,2,0);
    if ((-1 < iVar1) && (uVar2 = smblib_update_jeita(plVar8,&local_58,1), (int)uVar2 < 0)) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      uVar7 = (ulong)uVar2;
      puVar4 = "<3>%s: %s: Couldn't configure Hard Jeita rc=%d\n";
      goto LAB_0012e3c0;
    }
    iVar1 = of_property_read_variable_u32_array
                      (uVar7,"qcom,jeita-soft-thresholds",param_1 + 0xc24,2,0);
    if (iVar1 < 0) {
      iVar1 = regmap_bulk_read(*(undefined8 *)(param_1 + -0x5e0),0x1094,local_5c,2);
      if (iVar1 < 0) {
        uVar5 = 0x1094;
      }
      else {
        *(uint *)(param_1 + 0xc28) =
             ((local_5c[0] & 0xff00) << 8 | (uint)local_5c[0] << 0x18) >> 0x10;
        iVar1 = regmap_bulk_read(*(undefined8 *)(param_1 + -0x5e0),0x1096,local_5c,2);
        if (-1 < iVar1) {
          uVar2 = ((local_5c[0] & 0xff00) << 8 | (uint)local_5c[0] << 0x18) >> 0x10;
          *(uint *)(param_1 + 0xc24) = uVar2;
          *(uint *)(param_1 + 0xc2c) = uVar2 - 0x200;
          *(int *)(param_1 + 0xc30) = *(int *)(param_1 + 0xc28) + 0x200;
          goto LAB_0012e1e4;
        }
        uVar5 = 0x1096;
      }
      _printk("<3>failed to read 0x%4X, rc=%d\n",uVar5,iVar1);
      goto LAB_0012e3c4;
    }
    uVar2 = smblib_update_jeita(plVar8,param_1 + 0xc24,0);
    if ((int)uVar2 < 0) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      uVar7 = (ulong)uVar2;
      puVar4 = "<3>%s: %s: Couldn't configure Soft Jeita rc=%d\n";
      goto LAB_0012e3c0;
    }
    uVar2 = of_property_read_variable_u32_array
                      (uVar7,"qcom,jeita-soft-hys-thresholds",param_1 + 0xc2c,2,0);
    if ((int)uVar2 < 0) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      uVar7 = (ulong)uVar2;
      puVar4 = "<3>%s: %s: Couldn't get Soft Jeita hysteresis thresholds rc=%d\n";
      goto LAB_0012e3c0;
    }
LAB_0012e1e4:
    *(undefined8 *)(param_1 + 0xc38) = 0xffffffeaffffffea;
    *(undefined4 *)(param_1 + 0xc34) = 0xffffffea;
    *(undefined4 *)(param_1 + 0xc40) = 0xffffffea;
    local_50 = -0x16;
    local_4c = -0x16;
    of_property_read_variable_u32_array(uVar7,"qcom,fastchg-current-ma",&local_4c,1,0);
    of_property_read_variable_u32_array(uVar7,"qcom,max-voltage-uv",&local_50,1,0);
    if ((local_4c < 1) || (local_50 < 1)) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      puVar4 = "<3>%s: %s: Incorrect fastchg-current-ma or max-voltage-uv\n";
      goto LAB_0012e2f0;
    }
    uVar2 = of_property_read_variable_u32_array(uVar7,"qcom,jeita-soft-fcc-ua",&local_48,2,0);
    if ((int)uVar2 < 0) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      uVar7 = (ulong)uVar2;
      puVar4 = "<3>%s: %s: Couldn't get fcc values for soft JEITA rc=%d\n";
      goto LAB_0012e3c0;
    }
    local_4c = local_4c * 1000;
    if ((local_4c < (int)local_48) || (local_4c < local_48._4_4_)) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      puVar4 = "<3>%s: %s: Incorrect FCC value [%d %d] max: %d\n";
LAB_0012e384:
      _printk(puVar4,uVar5,"jeita_update_work");
      goto LAB_0012e3c4;
    }
    *(int *)(param_1 + 0xc34) = (int)local_48;
    *(int *)(param_1 + 0xc38) = local_48._4_4_;
    uVar7 = of_property_read_variable_u32_array(uVar7,"qcom,jeita-soft-fv-uv",&local_48,2,0);
    if ((int)uVar7 < 0) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      uVar7 = uVar7 & 0xffffffff;
      puVar4 = "<3>%s: %s: Couldn't get fv values for soft JEITA rc=%d\n";
      goto LAB_0012e3c0;
    }
    if ((local_50 < (int)local_48) || (local_50 < local_48._4_4_)) {
      uVar5 = *(undefined8 *)(param_1 + -0x5e8);
      puVar4 = "<3>%s: %s: Incorrect FV value [%d %d] max: %d\n";
      goto LAB_0012e384;
    }
    uVar6 = 2;
    *(int *)(param_1 + 0xc3c) = (int)local_48;
    *(int *)(param_1 + 0xc40) = local_48._4_4_;
  }
  *(undefined4 *)(param_1 + 0xbec) = uVar6;
LAB_0012e3cc:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- dcin_aicl_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012e42c ---- */

void dcin_aicl_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *in_x18;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 unaff_x30;
  undefined8 local_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_58 = *(long *)(lVar4 + 0x5e0);
  lVar4 = param_1 + -0x680;
  local_60 = 0;
  vote(*(undefined8 *)(param_1 + -0x168),"DCIN_AICL_VOTER",1,0);
  lVar5 = param_1 + -0x330;
  lVar7 = param_1 + -0x570;
  mutex_lock(lVar5);
  iVar2 = smblib_get_charge_param(lVar4,lVar7,(long)&local_60 + 4);
  uVar1 = local_60;
  do {
    local_60 = uVar1;
    if (iVar2 < 0) {
LAB_0012e5e8:
      uVar6 = 0;
LAB_0012e5ec:
      mutex_unlock(lVar5);
LAB_0012e5f4:
      vote(*(undefined8 *)(param_1 + -0x168),"DCIN_AICL_VOTER",0,0);
      *(undefined1 *)(param_1 + 0xbfc) = uVar6;
      lVar4 = sp_el0;
      if (*(long *)(lVar4 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_60._4_4_ = (int)((ulong)uVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0xbf4);
    if (local_60._4_4_ == iVar2) {
      if ((**(byte **)(param_1 + -0x400) >> 5 & 1) != 0) {
        _printk("<6>%s: %s: hit max ICL: stop\n",*(undefined8 *)(param_1 + -0x678),"dcin_aicl");
      }
      iVar2 = smblib_is_input_present(lVar4,&local_60);
      if ((-1 < iVar2) && (((byte)local_60 >> 2 & 1) != 0)) {
LAB_0012e658:
        uVar6 = 1;
        goto LAB_0012e5ec;
      }
      goto LAB_0012e5e8;
    }
    if (local_60._4_4_ + 100000 <= iVar2) {
      iVar2 = local_60._4_4_ + 100000;
    }
    local_60 = CONCAT44(iVar2,(int)uVar1);
    iVar3 = smblib_set_charge_param(lVar4,lVar7,iVar2);
    if (iVar3 < 0) goto LAB_0012e5e8;
    mutex_unlock(lVar5);
    if ((**(byte **)(param_1 + -0x400) >> 5 & 1) != 0) {
      _printk("<6>%s: %s: icl: %d mA\n",*(undefined8 *)(param_1 + -0x678),"dcin_aicl",iVar2 / 1000);
    }
    iVar3 = smblib_is_input_present(lVar4,&local_60);
    if ((iVar3 < 0) || (((byte)local_60 >> 2 & 1) == 0)) {
LAB_0012e5bc:
      uVar6 = 0;
      goto LAB_0012e5f4;
    }
    msleep(500);
    iVar3 = smblib_is_input_present(lVar4,&local_60);
    if ((iVar3 < 0) || (((byte)local_60 >> 2 & 1) == 0)) goto LAB_0012e5bc;
    mutex_lock(lVar5);
    iVar3 = smblib_get_charge_param(lVar4,lVar7,(long)&local_60 + 4);
    if (iVar3 < 0) goto LAB_0012e5e8;
    if (local_60._4_4_ < iVar2) {
      if ((**(byte **)(param_1 + -0x400) >> 5 & 1) == 0) goto LAB_0012e658;
      _printk("<6>%s: %s: done: icl: %d mA\n",*(undefined8 *)(param_1 + -0x678),"dcin_aicl",local_60._4_4_ / 1000);
      uVar6 = 1;
      goto LAB_0012e5ec;
    }
    mutex_unlock(lVar5);
    mutex_lock(lVar5);
    iVar2 = smblib_get_charge_param(lVar4,lVar7,(long)&local_60 + 4);
    uVar1 = local_60;
  } while( true );
}



/* ---- smblib_cp_status_change_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012e6b8 ---- */

void smblib_cp_status_change_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *in_x18;
  undefined8 *puVar4;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  puVar4 = (undefined8 *)(param_1 + -0x6b0);
  puVar3 = *(undefined8 **)(param_1 + -0x448);
  local_2c = 0;
  if (puVar3 < (undefined8 *)0xfffffffffffff001) {
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)get_ext_channels(*puVar4,&smblib_cp_ext_iio_chan,4);
      if ((undefined8 *)0xfffffffffffff000 < puVar3) {
        if ((int)puVar3 != -0x205) {
          _dev_err(*puVar4,"Failed to get channels, rc=%d\n");
          *(undefined8 *)(param_1 + -0x448) = 0xffffffffffffffea;
        }
        goto LAB_0012e7c4;
      }
      *(undefined8 **)(param_1 + -0x448) = puVar3;
    }
    if (*(int *)(param_1 + 0xa9c) == -0x16) {
      iVar2 = -0x13;
      if (((puVar3 == (undefined8 *)0x0) || ((undefined8 *)0xfffffffffffff000 < puVar3)) ||
         (iVar2 = iio_read_channel_processed(*puVar3,&local_2c,puVar3,0xffffffed), iVar2 < 0)) {
        _printk("<3>%s: %s: Couldn't read cp topo rc=%d\n",*(undefined8 *)(param_1 + -0x6a8),"smblib_cp_status_change_work",iVar2
               );
      }
      else {
        *(int *)(param_1 + 0xa9c) = local_2c;
        if ((local_2c == 2) && (*(int *)(param_1 + 0xa98) == 4)) {
          vote(*(undefined8 *)(param_1 + -0x1b0),"WLS_PL_CHARGING_VOTER",1,800000);
        }
      }
    }
  }
LAB_0012e7c4:
  pm_relax(*puVar4);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- clear_hdc_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012e7fc ---- */

void clear_hdc_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0xa30) = 0;
  vote(*(undefined8 *)(param_1 + -0x208),"HDC_IRQ_VOTER",0,0);
  return;
}



/* ---- smblib_icl_change_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012e840 ---- */

void smblib_icl_change_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar2 = smblib_get_charge_param(param_1 + -0x7f0,param_1 + -0x730,&local_2c);
  if (iVar2 < 0) {
    uVar4 = *(undefined8 *)(param_1 + -0x7e8);
    puVar3 = "<3>%s: %s: Couldn't get ICL status rc=%d\n";
  }
  else {
    power_supply_changed(*(undefined8 *)(param_1 + -0x3d8));
    uVar4 = *(undefined8 *)(param_1 + -0x7e8);
    puVar3 = "<3>%s: %s: icl_settled=%d\n";
    iVar2 = local_2c;
  }
  _printk(puVar3,uVar4,"smblib_icl_change_work",iVar2);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_pl_enable_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012e8e8 ---- */

void smblib_pl_enable_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(param_1 + -0x5f8) >> 3 & 1) != 0) {
    _printk("<6>%s: %s: timer expired, enabling parallel\n",*(undefined8 *)(param_1 + -0x870),"smblib_pl_enable_work");
  }
  vote(*(undefined8 *)(param_1 + -0x358),"PL_DELAY_VOTER",0,0);
  vote(*(undefined8 *)(param_1 + -0x360),"PL_DELAY_VOTER",0,0);
  return;
}



/* ---- smblib_uusb_otg_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012e970 ---- */

void smblib_uusb_otg_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *in_x18;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 unaff_x30;
  uint local_6c;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar6 = sp_el0;
  local_68 = *(long *)(lVar6 + 0x5e0);
  local_6c = 0;
  iVar5 = regmap_read(*(undefined8 *)(param_1 + -0x8f0),0x150f,&local_6c);
  uVar4 = local_6c;
  if (iVar5 < 0) {
    _printk("<3>%s: %s: Couldn't read TYPE_C_STATUS_3 rc=%d\n",*(undefined8 *)(param_1 + -0x8f8),"smblib_uusb_otg_work",iVar5);
  }
  else {
    puVar7 = (undefined8 *)(param_1 + -0x900);
    pbVar1 = (byte *)(param_1 + 0x8c7);
    uVar3 = local_6c >> 6 & 1;
    if (*pbVar1 != uVar3) {
      plVar8 = (long *)(param_1 + -0x480);
      uVar2 = local_6c & 0x40;
      lVar6 = *plVar8;
      if (uVar2 == 0) {
        if (lVar6 != 0) {
          typec_set_data_role(lVar6,0);
          typec_set_pwr_role(*plVar8,0);
          mutex_lock(param_1 + -0x518);
          if (*plVar8 != 0) {
            plVar8 = (long *)(param_1 + -0x430);
            lVar6 = *plVar8;
            if ((lVar6 != 0) && (*(char *)(param_1 + 0x85e) == '\0')) {
              if ((**(byte **)(param_1 + -0x680) >> 2 & 1) != 0) {
                _printk("<6>%s: %s: Un-registering typeC partner\n",*(undefined8 *)(param_1 + -0x8f8),"typec_partner_unregister");
                lVar6 = *plVar8;
              }
              typec_unregister_partner(lVar6);
              *plVar8 = 0;
            }
          }
          mutex_unlock(param_1 + -0x518);
        }
        if ((**(byte **)(param_1 + -0x680) >> 4 & 1) != 0) {
          _printk("<6>%s: %s: disabling VBUS in OTG mode\n",*(undefined8 *)(param_1 + -0x8f8),"smblib_notify_usb_host");
        }
        iVar5 = regmap_update_bits_base(*(undefined8 *)(param_1 + -0x8f0),0x1140,1,0,0,0,0);
        if (iVar5 < 0) {
          _printk("<3>%s: %s: Couldn't disable VBUS in OTG mode rc=%d\n",*(undefined8 *)(param_1 + -0x8f8),"smblib_notify_usb_host",iVar5);
        }
        else {
          extcon_set_state_sync(*(undefined8 *)(param_1 + 0x9a8),2,0);
        }
        *(undefined4 *)(param_1 + 0x994) = 0;
        *pbVar1 = 0;
      }
      else {
        if (lVar6 != 0) {
          typec_partner_register(puVar7);
          typec_set_data_role(*plVar8,1);
          typec_set_pwr_role(*plVar8,1);
        }
        smblib_notify_usb_host(puVar7,1);
        *pbVar1 = (byte)(uVar2 >> 6);
      }
      lVar6 = 0x10;
      if (uVar2 != 0) {
        lVar6 = 0x14;
      }
      iVar5 = smblib_set_charge_param
                        (puVar7,param_1 + -0x778,*(undefined4 *)(param_1 + lVar6 + -0x670));
      if (iVar5 < 0) {
        _dev_err(*puVar7,"Error in setting freq_boost rc=%d\n",iVar5);
      }
      if ((**(byte **)(param_1 + -0x680) >> 1 & 1) != 0) {
        _printk("<6>%s: %s: TYPE_C_U_USB_STATUS = 0x%02x OTG=%d\n",*(undefined8 *)(param_1 + -0x8f8),"smblib_uusb_otg_work",uVar4 & 0xff,
                uVar3);
      }
      power_supply_changed(*(undefined8 *)(param_1 + -0x4e0));
    }
  }
  vote(*(undefined8 *)(param_1 + -1000),"OTG_DELAY_VOTER",0,0);
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_bb_removal_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012ec54 ---- */

void smblib_bb_removal_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  vote(*(undefined8 *)(param_1 + -0x478),"BOOST_BACK_VOTER",0,0);
  vote(*(undefined8 *)(param_1 + -0x470),"BOOST_BACK_VOTER",0,0);
  return;
}



/* ---- smblib_lpd_ra_open_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012ecb8 ---- */

void smblib_lpd_ra_open_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *in_x18;
  long lVar6;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  lVar6 = param_1 + -0xa10;
  local_28 = *(long *)(lVar1 + 0x5e0);
  if (((*(char *)(param_1 + 0x74e) != '\0') || (*(char *)(param_1 + 0x74c) != '\0')) ||
     (*(char *)(param_1 + 0x7e0) != '\0')) {
LAB_0012ed00:
    *(undefined4 *)(param_1 + 0x7dc) = 0;
    goto LAB_0012ed04;
  }
  if (*(int *)(param_1 + 0x7dc) != 1) goto LAB_0012ed04;
  local_2c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + -0xa00),0x150b,&local_2c);
  if (iVar2 < 0) {
    uVar5 = *(undefined8 *)(param_1 + -0xa08);
    puVar4 = "<3>%s: %s: Couldn't read TYPE_C_MISC_STATUS_REG rc=%d\n";
  }
  else {
    if ((local_2c & 0x88) != 0x80) goto LAB_0012ed00;
    *(undefined4 *)(param_1 + 0x7dc) = 3;
    iVar2 = smblib_set_prop_typec_power_role(lVar6,3);
    if (-1 < iVar2) {
      usleep_range_state(0x5dc,0x5e6,2);
      uVar3 = smblib_rsbux_low(lVar6);
      if ((uVar3 & 1) == 0) {
        iVar2 = regmap_update_bits_base(*(undefined8 *)(param_1 + -0xa00),0x1560,4,0,0,0,0);
        if (iVar2 < 0) {
          uVar5 = *(undefined8 *)(param_1 + -0xa08);
          puVar4 = "<3>%s: %s: Couldn't set TYPE_C_INTERRUPT_EN_CFG_2_REG rc=%d\n";
          goto LAB_0012ee90;
        }
        iVar2 = smblib_set_prop_typec_power_role(lVar6,1);
        if (iVar2 < 0) {
          _printk("<3>%s: %s: Couldn't write 0x%02x to TYPE_C_INTRPT_ENB_SOFTWARE_CTRL rc=%d\n",*(undefined8 *)(param_1 + -0xa08),"smblib_lpd_ra_open_work",1,iVar2)
          ;
          goto LAB_0012ed04;
        }
        *(undefined4 *)(param_1 + 0x7e4) = 2;
      }
      else {
        iVar2 = smblib_set_prop_typec_power_role(lVar6,2);
        if (iVar2 < 0) {
          uVar5 = *(undefined8 *)(param_1 + -0xa08);
          puVar4 = "<3>%s: %s: Couldn't set typec sink only rc=%d\n";
          goto LAB_0012ee90;
        }
        *(undefined4 *)(param_1 + 0x7e4) = 1;
        *(undefined1 *)(param_1 + 0x824) = 1;
        vote(*(undefined8 *)(param_1 + -0x500),"LPD_VOTER",1,0);
      }
      alarm_start_relative(param_1 + 0x4c8,60000000000);
      goto LAB_0012ed04;
    }
    uVar5 = *(undefined8 *)(param_1 + -0xa08);
    puVar4 = "<3>%s: %s: Couldn't set typec source only mode rc=%d\n";
  }
LAB_0012ee90:
  _printk(puVar4,uVar5,"smblib_lpd_ra_open_work",iVar2);
LAB_0012ed04:
  vote(*(undefined8 *)(param_1 + -0x4f8),"LPD_VOTER",0,0);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_lpd_detach_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012eec8 ---- */

void smblib_lpd_detach_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  if (*(int *)(param_1 + 0x754) == 2) {
    *(undefined4 *)(param_1 + 0x754) = 0;
  }
  return;
}



/* ---- smblib_raise_qc3_vbus_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012eee4 ---- */

void smblib_raise_qc3_vbus_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *in_x18;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 unaff_x30;
  undefined8 local_58;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x5e0);
  puVar5 = (undefined8 *)(param_1 + -0xdc8);
  local_58 = 0;
  local_4c = 0;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + -0xdb8),0x1310,&local_4c);
  if (iVar3 < 0) {
LAB_0012f0c0:
    _printk("<3>%s: %s: Couldn't read USBIN_RT_STS rc=%d\n",*(undefined8 *)(param_1 + -0xdc0),"smblib_get_prop_usb_present",iVar3);
    _printk("<3>%s: %s: Couldn't get usb present rc = %d\n",*(undefined8 *)(param_1 + -0xdc0),"smblib_raise_qc3_vbus_work",iVar3);
    goto LAB_0012ef3c;
  }
  if ((local_4c >> 4 & 1) == 0) goto LAB_0012ef3c;
  if (*(char *)(param_1 + 0x394) != '\0') {
    if (*(char *)(param_1 + 0x504) != '\0') {
      *(char *)(param_1 + 0x504) = '\0';
    }
    if (*(char *)(param_1 + 0x539) != '\0') {
      vote(*(undefined8 *)(param_1 + -0x8b8),"HVDCP3_START_ICL_VOTER",0,0);
    }
    _printk("<6>pd hard reset, no need to raise vbus now\n");
    goto LAB_0012ef3c;
  }
  uVar6 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x503);
  *puVar1 = 1;
  do {
    if (uVar6 < 5) {
      uVar4 = *(undefined4 *)(param_1 + -0xb38);
    }
    else if (uVar6 < 0x14) {
      uVar4 = *(undefined4 *)(param_1 + -0xb34);
    }
    else if (uVar6 < 0x23) {
      uVar4 = *(undefined4 *)(param_1 + -0xb30);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + -0xb2c);
    }
    iVar3 = smblib_set_charge_param(puVar5,param_1 + -0xc40,uVar4);
    if (iVar3 < 0) {
      _dev_err(*puVar5,"Error in setting freq_buck rc=%d\n",iVar3);
    }
    smblib_dp_pulse(puVar5);
    msleep(0x1e);
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x26);
  msleep(100);
  local_4c = 0;
  iVar3 = regmap_read(*(undefined8 *)(param_1 + -0xdb8),0x1310,&local_4c);
  if (iVar3 < 0) goto LAB_0012f0c0;
  uVar6 = local_4c >> 4;
  local_58 = CONCAT44(local_58._4_4_,local_4c >> 4) & 0xffffffff00000001;
  _printk("<6>usb_present is %d\n");
  if ((uVar6 & 1) == 0) {
    *puVar1 = 0;
    iVar3 = smblib_force_vbus_voltage(puVar5,8);
    if (iVar3 < 0) {
      _printk("<3>Failed to force 5V\n");
    }
    goto LAB_0012ef3c;
  }
  iVar3 = smblib_get_prop_usb_voltage_now(puVar5,&local_58);
  if (iVar3 < 0) {
    _printk("<3>Couldn't get usb voltage rc=%d\n",iVar3);
  }
  iVar3 = (int)local_58;
  _printk("<3>vbus_now is %d\n",local_58 & 0xffffffff);
  if ((iVar3 < 0xbbaee1) || (*(int *)(param_1 + 0x4e8) < 0x36ee81)) {
    _printk("<3>qc_class_a charger is detected, batt_profile_fcc=%d\n");
    *(undefined1 *)(param_1 + 0x501) = 1;
    vote(*(undefined8 *)(param_1 + -0x8d0),"CLASSA_QC_FCC_VOTER",1,3600000);
  }
  else {
    *(undefined1 *)(param_1 + 0x502) = 1;
    _printk("<3>qc_class_b charger is detected\n");
  }
  iVar3 = smblib_force_vbus_voltage(puVar5,8);
  if (iVar3 < 0) {
    _printk("<3>Failed to force 5V\n");
  }
  msleep(100);
  smblib_dp_pulse(puVar5);
  uVar4 = 3100000;
  if (*(char *)(param_1 + 0x501) != '\0') {
    uVar4 = 2500000;
  }
  vote(*(undefined8 *)(param_1 + -0x8b8),"SW_ICL_MAX_VOTER",1,uVar4);
  if (*(char *)(param_1 + 0x539) == '\0') {
LAB_0012f230:
    iVar3 = smblib_select_sec_charger(puVar5,1,1,0);
    if (iVar3 < 0) {
      _dev_err(*puVar5,"Couldn\'t enable secondary chargers  rc=%d\n",iVar3);
    }
  }
  else {
    vote(*(undefined8 *)(param_1 + -0x8b8),"HVDCP3_START_ICL_VOTER",0,0);
    if (*(char *)(param_1 + 0x539) == '\0') goto LAB_0012f230;
  }
  *puVar1 = 0;
LAB_0012ef3c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_thermal_regulation_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012f27c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void smblib_thermal_regulation_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 *in_x18;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 unaff_x30;
  undefined4 local_5c;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar10 = sp_el0;
  local_58 = *(long *)(lVar10 + 0x5e0);
  puVar17 = (undefined8 *)(param_1 + -0xb20);
  local_5c = 0;
  if (*(long *)(param_1 + -0x8a8) == 0) {
    uVar9 = get_ext_channels(*puVar17,&smblib_parallel_ext_iio_chan,3);
    if (0xfffffffffffff000 < uVar9) {
      if ((int)uVar9 == -0x205) goto LAB_0012f300;
      _dev_err(*puVar17,"Failed to get channels, %d\n");
      uVar9 = 0xffffffffffffffea;
    }
    *(ulong *)(param_1 + -0x8a8) = uVar9;
  }
LAB_0012f300:
  piVar1 = (int *)(param_1 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6dc) = 0xffffffc3;
  if (*(long *)(param_1 + -0x8e0) == 0) {
LAB_0012f344:
    *(undefined4 *)(param_1 + 0x6e8) = 0xffffffc3;
    if (*(long *)(param_1 + -0x8f8) != 0) {
      piVar2 = (int *)(param_1 + 0x6e8);
      iVar8 = iio_read_channel_processed(*(long *)(param_1 + -0x8f8),piVar2);
      if (iVar8 < 0) {
        _printk("<3>%s: %s: Error in reading IIO channel data, rc=%d\n",*(undefined8 *)(param_1 + -0xb18),"smblib_read_iio_channel",iVar8);
        uVar14 = *(undefined8 *)(param_1 + -0xb18);
        puVar11 = "<3>%s: %s: Couldn't read CONN TEMP channel, rc=%d\n";
        goto LAB_0012f8b0;
      }
      *piVar2 = *piVar2 / 100;
    }
    *(undefined4 *)(param_1 + 0x6e4) = 0xffffffc3;
    if (*(long *)(param_1 + -0x8d8) != 0) {
      piVar2 = (int *)(param_1 + 0x6e4);
      iVar8 = iio_read_channel_processed(*(long *)(param_1 + -0x8d8),piVar2);
      if (iVar8 < 0) {
        _printk("<3>%s: %s: Error in reading IIO channel data, rc=%d\n",*(undefined8 *)(param_1 + -0xb18),"smblib_read_iio_channel",iVar8);
        uVar14 = *(undefined8 *)(param_1 + -0xb18);
        puVar11 = "<3>%s: %s: Couldn't read SKIN TEMP channel, rc=%d\n";
        goto LAB_0012f8b0;
      }
      *piVar2 = *piVar2 / 100;
    }
    if (*(int *)(param_1 + 0x624) == 1) {
      uVar9 = *(ulong *)(param_1 + -0x8b8);
      if (uVar9 < 0xfffffffffffff001) {
        if (uVar9 == 0) {
          uVar9 = get_ext_channels(*puVar17,&smblib_cp_ext_iio_chan,4);
          if (0xfffffffffffff000 < uVar9) {
            if ((int)uVar9 != -0x205) {
              _dev_err(*puVar17,"Failed to get channels, rc=%d\n");
              *(undefined8 *)(param_1 + -0x8b8) = 0xffffffffffffffea;
            }
            goto LAB_0012f3e0;
          }
          *(ulong *)(param_1 + -0x8b8) = uVar9;
        }
        iVar8 = -0x13;
        if (((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) ||
           (iVar8 = iio_read_channel_processed(*(undefined8 *)(uVar9 + 0x18),&local_5c), iVar8 < 0))
        {
          puVar11 = "<3>%s: %s: Couldn't get smb1390 charger temp, rc=%d\n";
          goto LAB_0012f8ac;
        }
LAB_0012f4a0:
        uVar12 = local_5c;
      }
      else {
LAB_0012f3e0:
        if ((**(byte **)(param_1 + -0x8a0) >> 2 & 1) == 0) {
          uVar12 = 0xffffffc3;
        }
        else {
          _printk("<6>%s: %s: Coudln't find cp_psy\n",*(undefined8 *)(param_1 + -0xb18),"smblib_update_thermal_readings");
          uVar12 = 0xffffffc3;
        }
      }
    }
    else {
      puVar17 = *(undefined8 **)(param_1 + -0x8a8);
      uVar12 = 0xffffffc3;
      if (((puVar17 != (undefined8 *)0x0) && (puVar17 < (undefined8 *)0xfffffffffffff001)) &&
         (*(int *)(param_1 + 0x624) == 2)) {
        iVar8 = iio_read_channel_processed(*puVar17,&local_5c);
        if (-1 < iVar8) goto LAB_0012f4a0;
        puVar11 = "<3>%s: %s: Couldn't get smb1355 charger temp, rc=%d\n";
LAB_0012f8ac:
        uVar14 = *(undefined8 *)(param_1 + -0xb18);
        goto LAB_0012f8b0;
      }
    }
    *(undefined4 *)(param_1 + 0x6e0) = uVar12;
  }
  else {
    iVar8 = iio_read_channel_processed(*(long *)(param_1 + -0x8e0),piVar1);
    if (-1 < iVar8) {
      *piVar1 = *piVar1 / 100;
      goto LAB_0012f344;
    }
    _printk("<3>%s: %s: Error in reading IIO channel data, rc=%d\n",*(undefined8 *)(param_1 + -0xb18),"smblib_read_iio_channel",iVar8);
    uVar14 = *(undefined8 *)(param_1 + -0xb18);
    puVar11 = "<3>%s: %s: Couldn't read DIE TEMP channel, rc=%d\n";
LAB_0012f8b0:
    _printk(puVar11,uVar14,"smblib_update_thermal_readings",iVar8);
    _printk("<3>%s: %s: Couldn't read current thermal values %d\n",*(undefined8 *)(param_1 + -0xb18),"smblib_thermal_regulation_work",iVar8);
  }
  iVar8 = *(int *)(param_1 + 0x6e8);
  if ((iVar8 < 0x2bd) && (iVar4 = *(int *)(param_1 + 0x6e4), iVar4 < 0x2bd)) {
    iVar5 = *(int *)(param_1 + 0x6e0);
    if (iVar5 < 0x579) {
      iVar15 = 0;
      uVar14 = 0x40;
      iVar13 = 2;
      bVar7 = true;
      iVar16 = 0;
      if (((iVar8 < 0x259) && (iVar4 < 0x259)) && (iVar5 < 0x385)) {
        iVar6 = *piVar1;
        if (iVar6 < 0x3e9) {
          iVar15 = 0;
          uVar14 = 0x40;
          iVar13 = 3;
          if (((iVar8 < 0x227) && (iVar4 < 0x227)) && (iVar5 < 0x321)) {
            iVar16 = 0;
            bVar7 = false;
            if (iVar6 < 0x321) {
              iVar15 = 0;
              iVar16 = 0;
              bVar7 = false;
              uVar14 = 0x70;
              iVar13 = 4;
              if (((iVar6 < 0x259 && iVar5 < 0x259) && iVar4 < 0x1f5) && iVar8 == 500 ||
                  (((iVar6 < 0x259 && iVar5 < 0x259) && iVar4 < 0x1f5) && iVar8 + -500 < 0) !=
                  (((iVar6 < 0x259 && iVar5 < 0x259) && iVar4 < 0x1f5) && SBORROW4(iVar8,500))) {
                iVar13 = 5;
              }
            }
          }
          else {
            iVar16 = 0;
            bVar7 = false;
          }
        }
        else {
          iVar15 = 0;
          iVar16 = 0;
          uVar14 = 0x40;
          iVar13 = 2;
          bVar7 = true;
        }
      }
    }
    else {
      iVar16 = 0;
      bVar7 = false;
      uVar14 = 0x40;
      iVar15 = 1;
      iVar13 = 1;
    }
  }
  else {
    bVar7 = false;
    iVar13 = 0;
    uVar14 = 0x40;
    iVar15 = 1;
    iVar16 = 1;
  }
  if ((**(byte **)(param_1 + -0x8a0) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: Current temperatures: \tDIE_TEMP: %d,\tCONN_TEMP: %d,\tSMB_TEMP: %d,\tSKIN_TEMP: %d\nTHERMAL_STATUS: %d\n",*(undefined8 *)(param_1 + -0xb18),"smblib_process_thermal_readings",
            *(undefined4 *)(param_1 + 0x6dc),iVar8,*(undefined4 *)(param_1 + 0x6e0),
            *(undefined4 *)(param_1 + 0x6e4),iVar13);
  }
  if ((iVar13 == *(int *)(param_1 + 0x6ec)) || (*(int *)(param_1 + 0x6ec) = iVar13, bVar7))
  goto LAB_0012f5a8;
  vote(*(undefined8 *)(param_1 + -0x5d8),"SW_THERM_REGULATION_VOTER",iVar15,0);
  lVar10 = *(long *)(param_1 + -0x5e8);
  if (lVar10 == 0) {
    lVar10 = find_votable("CP_DISABLE");
    *(long *)(param_1 + -0x5e8) = lVar10;
    if (lVar10 != 0) goto LAB_0012f528;
  }
  else {
LAB_0012f528:
    vote(lVar10,"SW_THERM_REGULATION_VOTER",iVar15,0);
  }
  vote(*(undefined8 *)(param_1 + -0x600),"SW_THERM_REGULATION_VOTER",iVar15,0);
  if ((**(byte **)(param_1 + -0x8a0) >> 2 & 1) != 0) {
    pcVar3 = "disabled";
    if (iVar15 == 0) {
      pcVar3 = "enabled";
    }
    _printk("<6>%s: %s: Parallel %s as per SW thermal regulation\n",*(undefined8 *)(param_1 + -0xb18),"smblib_process_thermal_readings",pcVar3
           );
  }
  if (*(int *)(param_1 + 0x6ec) != 1) {
    vote(*(undefined8 *)(param_1 + -0x630),"SW_THERM_REGULATION_VOTER",iVar16,0);
    vote(*(undefined8 *)(param_1 + -0x610),"SW_THERM_REGULATION_VOTER",iVar16,0);
    if ((**(byte **)(param_1 + -0x8a0) >> 2 & 1) != 0) {
      pcVar3 = "suspended";
      if (iVar16 == 0) {
        pcVar3 = "unsuspended";
      }
      _printk("<6>%s: %s: USB/DC %s as per SW thermal regulation\n",*(undefined8 *)(param_1 + -0xb18),"smblib_process_thermal_readings",
              pcVar3);
    }
  }
LAB_0012f5a8:
  uVar9 = is_client_vote_enabled(*(undefined8 *)(param_1 + -0x610),"SW_THERM_REGULATION_VOTER");
  if ((uVar9 & 1) == 0) {
    iVar8 = regmap_update_bits_base(*(undefined8 *)(param_1 + -0xb10),0x1653,0x70,uVar14,0,0,0);
    if (iVar8 < 0) {
      _printk("<3>%s: %s: Couldn't set WD SNARL timer, rc=%d\n",*(undefined8 *)(param_1 + -0xb18),"smblib_process_thermal_readings",
              iVar8);
      vote(*(undefined8 *)(param_1 + -0x608),"SW_THERM_REGULATION_VOTER",0,0);
      _printk("<3>%s: %s: Couldn't run sw thermal regulation %d\n",*(undefined8 *)(param_1 + -0xb18),"smblib_thermal_regulation_work",iVar8
             );
    }
    else {
      vote(*(undefined8 *)(param_1 + -0x608),"SW_THERM_REGULATION_VOTER",0,0);
    }
  }
  else {
    queue_delayed_work_on(0x20,_system_wq,param_1,0xfa);
  }
  lVar10 = sp_el0;
  if (*(long *)(lVar10 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_usbov_dbc_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012f924 ---- */

void smblib_usbov_dbc_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(param_1 + -0x928) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: Resetting USBOV debounce\n",*(undefined8 *)(param_1 + -0xba0),"smblib_usbov_dbc_work");
  }
  *(undefined1 *)(param_1 + 0x6f8) = 0;
  vote(*(undefined8 *)(param_1 + -0x690),"USBOV_DBC_VOTER",0,0);
  return;
}



/* ---- smblib_pr_swap_detach_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012f99c ---- */

void smblib_pr_swap_detach_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  long *plVar4;
  undefined8 unaff_x30;
  undefined4 local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x5e0);
  local_4c = 0;
  iVar2 = regmap_read(*(undefined8 *)(param_1 + -0xc20),0x1509,&local_4c);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't read STATE_MACHINE_STS rc=%d\n",*(undefined8 *)(param_1 + -0xc28),"smblib_pr_swap_detach_work",iVar2);
  }
  else {
    bVar1 = (byte)local_4c;
    if ((**(byte **)(param_1 + -0x9b0) >> 1 & 1) != 0) {
      _printk("<6>%s: %s: STATE_MACHINE_STS %x\n",*(undefined8 *)(param_1 + -0xc28),"smblib_pr_swap_detach_work",
              (byte)local_4c);
    }
    if ((bVar1 >> 5 & 1) == 0) {
      iVar2 = smblib_request_dpdm(param_1 + -0xc30,0);
      if (iVar2 < 0) {
        _printk("<3>%s: %s: Couldn't disable DPDM rc=%d\n",*(undefined8 *)(param_1 + -0xc28),"smblib_pr_swap_detach_work",iVar2);
      }
      if (*(long *)(param_1 + -0x7b0) != 0) {
        mutex_lock(param_1 + -0x848);
        if (*(long *)(param_1 + -0x7b0) != 0) {
          plVar4 = (long *)(param_1 + -0x760);
          lVar3 = *plVar4;
          if ((lVar3 != 0) && (*(char *)(param_1 + 0x52e) == '\0')) {
            if ((**(byte **)(param_1 + -0x9b0) >> 2 & 1) != 0) {
              _printk("<6>%s: %s: Un-registering typeC partner\n",*(undefined8 *)(param_1 + -0xc28),"typec_partner_unregister");
              lVar3 = *plVar4;
            }
            typec_unregister_partner(lVar3);
            *plVar4 = 0;
          }
        }
        mutex_unlock(param_1 + -0x848);
      }
    }
  }
  vote(*(undefined8 *)(param_1 + -0x718),"DETACH_DETECT_VOTER",0,0);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_pr_lock_clear_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012fb50 ---- */

void smblib_pr_lock_clear_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _raw_spin_lock(param_1 + -0x938);
  if (*(char *)(param_1 + 0x4a5) != '\0') {
    if ((**(byte **)(param_1 + -0xa38) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: restore type-c interrupts\n",*(undefined8 *)(param_1 + -0xcb0),"smblib_pr_lock_clear_work");
    }
    if (*(char *)(param_1 + 0x4aa) != '\x01') {
      enable_irq(*(undefined4 *)(*(long *)(param_1 + -0xca0) + 0x13a8));
      enable_irq(*(undefined4 *)(*(long *)(param_1 + -0xca0) + 0x1258));
      enable_irq(*(undefined4 *)(*(long *)(param_1 + -0xca0) + 0x1178));
      *(char *)(param_1 + 0x4aa) = '\x01';
    }
    *(undefined1 *)(param_1 + 0x4a5) = 0;
  }
  _raw_spin_unlock(param_1 + -0x938);
  return;
}



/* ---- apsd_timer_cb.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012fc18 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void apsd_timer_cb_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined4 uVar1;
  undefined8 *in_x18;
  undefined8 uVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(param_1 + -0xe58) >> 2 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + -0x10d0);
    uVar1 = jiffies_to_msecs(_jiffies);
    _printk("<6>%s: %s: APSD Extented timer timeout at %lld\n",uVar2,"apsd_timer_cb",uVar1);
  }
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  return;
}



/* ---- smblib_typec_role_check_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012fc90 ---- */

void smblib_typec_role_check_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  mutex_lock(param_1 + -0x958);
  if (*(int *)(param_1 + 0x478) == 0) {
    if (*(int *)(param_1 + 0x474) < 6 && *(int *)(param_1 + 0x474) != 0) {
      *(undefined4 *)(param_1 + 0x498) = 3;
      typec_set_pwr_role(*(undefined8 *)(param_1 + -0x8c0),1);
      typec_set_data_role(*(undefined8 *)(param_1 + -0x8c0),1);
      if ((**(byte **)(param_1 + -0xac0) >> 2 & 1) == 0) goto LAB_0012fdb4;
      uVar2 = *(undefined8 *)(param_1 + -0xd38);
      puVar3 = "<6>%s: %s: Role changed successfully to SOURCE";
LAB_0012fe80:
      _printk(puVar3,uVar2,"smblib_typec_role_check_work");
      goto LAB_0012fdb4;
    }
    if ((**(byte **)(param_1 + -0xac0) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: Role reversal not latched to DFP in %d msecs. Resetting to DRP mode\n",*(undefined8 *)(param_1 + -0xd38),"smblib_typec_role_check_work",500);
    }
    uVar2 = *(undefined8 *)(param_1 + -0xd30);
    *(undefined1 *)(param_1 + 0x41e) = 0;
    *(undefined1 *)(param_1 + 0x423) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x478) != 1) goto LAB_0012fdb4;
    if (5 < *(int *)(param_1 + 0x474)) {
      *(undefined4 *)(param_1 + 0x498) = 2;
      typec_set_pwr_role(*(undefined8 *)(param_1 + -0x8c0),0);
      typec_set_data_role(*(undefined8 *)(param_1 + -0x8c0),0);
      if ((**(byte **)(param_1 + -0xac0) >> 2 & 1) == 0) goto LAB_0012fdb4;
      uVar2 = *(undefined8 *)(param_1 + -0xd38);
      puVar3 = "<6>%s: %s: Role changed successfully to SINK";
      goto LAB_0012fe80;
    }
    if ((**(byte **)(param_1 + -0xac0) >> 2 & 1) != 0) {
      _printk("<6>%s: %s: Role reversal not latched to UFP in %d msecs. Resetting to DRP mode\n",*(undefined8 *)(param_1 + -0xd38),"smblib_typec_role_check_work",500);
    }
    uVar2 = *(undefined8 *)(param_1 + -0xd30);
  }
  iVar1 = regmap_update_bits_base(uVar2,0x1544,7,0,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't enable DRP, rc=%d\n",*(undefined8 *)(param_1 + -0xd38),"smblib_force_dr_mode",iVar1);
    _printk("<3>%s: %s: Failed to set DRP mode, rc=%d\n",*(undefined8 *)(param_1 + -0xd38),"smblib_typec_role_check_work",iVar1);
  }
  else {
    *(undefined4 *)(param_1 + 0x478) = 2;
  }
LAB_0012fdb4:
  *(undefined1 *)(param_1 + 0x41e) = 0;
  vote(*(undefined8 *)(param_1 + -0x828),"TYPEC_SWAP_VOTER",0,0);
  mutex_unlock(param_1 + -0x958);
  return;
}



/* ---- smblib_float_retry_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012fe90 ---- */

void smblib_float_retry_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = smblib_request_dpdm(param_1 + -0xe50,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't to disable DPDM rc=%d\n",*(undefined8 *)(param_1 + -0xe48),"smblib_float_retry_work",iVar1);
  }
  msleep(100);
  smblib_rerun_apsd_if_required(param_1 + -0xe50);
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  if ((**(byte **)(param_1 + -0xbd0) >> 3 & 1) != 0) {
    _printk("<6>%s: %s: float detected due to slow plug \n",*(undefined8 *)(param_1 + -0xe48),"smblib_float_retry_work");
  }
  return;
}



/* ---- smblib_chg_termination_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0012ff28 ---- */

void smblib_chg_termination_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 *in_x18;
  int iVar13;
  undefined8 unaff_x30;
  uint local_64;
  int local_60;
  uint local_5c;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_58 = *(long *)(lVar2 + 0x5e0);
  local_64 = 0;
  local_60 = 0;
  vote(*(undefined8 *)(param_1 + -0x138),"CHG_TERMINATION_VOTER",1,0);
  iVar5 = smblib_is_input_present(param_1 + -0x650,&local_64);
  uVar3 = local_64;
  if ((iVar5 < 0) || (local_64 == 0)) goto LAB_00130314;
  uVar10 = *(ulong *)(param_1 + -0x3f0);
  uVar7 = 0xffffffed;
  if ((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) {
LAB_001301e0:
    vote(*(undefined8 *)(param_1 + -0x140),"CHG_TERMINATION_VOTER",0,0);
    vote(*(undefined8 *)(param_1 + -0x160),"CHG_TERMINATION_VOTER",0,0);
    uVar9 = *(undefined8 *)(param_1 + -0x648);
    puVar8 = "<3>%s: %s: Couldn't read SOC value, rc=%d\n";
  }
  else {
    uVar6 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x10),&local_60);
    uVar7 = uVar6 & (int)uVar6 >> 0x1f;
    if (((int)uVar6 < 0) || (local_60 < 100)) goto LAB_001301e0;
    local_5c = 0;
    iVar5 = regmap_read(*(undefined8 *)(param_1 + -0x640),0x1006,&local_5c);
    if (iVar5 < 0) goto LAB_00130314;
    if ((local_5c & 7) != 5) {
      vote(*(undefined8 *)(param_1 + -0x140),"CHG_TERMINATION_VOTER",0,0);
      vote(*(undefined8 *)(param_1 + -0x160),"CHG_TERMINATION_VOTER",0,0);
      goto LAB_00130314;
    }
    uVar10 = *(ulong *)(param_1 + -0x3f0);
    uVar7 = 0xffffffed;
    if ((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) {
LAB_001302c0:
      uVar9 = *(undefined8 *)(param_1 + -0x648);
      puVar8 = "<3>%s: %s: Couldn't read voltage_max prop, rc=%d\n";
    }
    else {
      uVar7 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x30),&local_60);
      iVar5 = local_60;
      if ((int)uVar7 < 0) goto LAB_001302c0;
      uVar10 = *(ulong *)(param_1 + -0x3f0);
      uVar7 = 0xffffffed;
      if (((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) ||
         (uVar7 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x38),&local_60),
         (int)uVar7 < 0)) {
        uVar9 = *(undefined8 *)(param_1 + -0x648);
        puVar8 = "<3>%s: %s: Couldn't read charge_full prop, rc=%d\n";
      }
      else {
        if ((local_60 == *(int *)(param_1 + 0xc08)) && (*(int *)(param_1 + 0xc0c) != 0)) {
          uVar10 = *(ulong *)(param_1 + -0x3f0);
          uVar7 = 0xffffffed;
          if ((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) {
            uVar7 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x28),&local_60);
            iVar13 = local_60;
            if (-1 < (int)uVar7) {
              uVar10 = *(ulong *)(param_1 + -0x3f0);
              uVar7 = 0xffffffed;
              if (((uVar10 == 0) || (0xfffffffffffff000 < uVar10)) ||
                 (uVar7 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x18),&local_60),
                 (int)uVar7 < 0)) goto LAB_001302fc;
LAB_00130134:
              if (((*(int *)(param_1 + 0xc10) != 0) && (*(int *)(param_1 + 0xc10) + 100 < local_60))
                 && (*(int *)(param_1 + 0xc0c) = local_60,
                    (**(byte **)(param_1 + -0x3d0) >> 2 & 1) != 0)) {
                _printk("<6>%s: %s: cc_soc jumped(%d->%d), reset cc_soc_ref\n",*(undefined8 *)(param_1 + -0x648),
                        "smblib_chg_termination_work");
              }
              iVar4 = local_60;
              iVar12 = *(int *)(param_1 + 0xc0c) * 0x2742;
              *(int *)(param_1 + 0xc10) = local_60;
              iVar11 = -5000;
              if (0 < iVar12) {
                iVar11 = 5000;
              }
              iVar11 = (iVar11 + iVar12) / 10000;
              if (local_60 < iVar11) {
                uVar7 = 300000;
                vote(*(undefined8 *)(param_1 + -0x140),"CHG_TERMINATION_VOTER",0,0);
LAB_001301c0:
                vote(*(undefined8 *)(param_1 + -0x160),"CHG_TERMINATION_VOTER",iVar11 <= iVar4,0);
              }
              else {
                uVar7 = 300000;
                iVar1 = *(int *)(param_1 + 0xc0c) * 0x275b;
                iVar12 = -5000;
                if (0 < iVar1) {
                  iVar12 = 5000;
                }
                if ((((iVar12 + iVar1) / 10000 < local_60) && (*(int *)(param_1 + 0xc14) < iVar13))
                   && (iVar5 < iVar13)) {
                  if ((uVar3 >> 1 & 1) != 0) {
                    vote(*(undefined8 *)(param_1 + -0x140),"CHG_TERMINATION_VOTER",1,0);
                  }
                  uVar7 = 60000;
                  if ((uVar3 >> 2 & 1) != 0) goto LAB_001301c0;
                }
              }
              if ((**(byte **)(param_1 + -0x3d0) >> 2 & 1) != 0) {
                _printk("<6>%s: %s: Chg Term WA readings: cc_soc: %d, cc_soc_ref: %d, delay: %d vbat_now %d term_vbat %d\n",*(undefined8 *)(param_1 + -0x648),
                        "smblib_chg_termination_work",local_60,*(undefined4 *)(param_1 + 0xc0c),
                        uVar7,iVar13,*(undefined4 *)(param_1 + 0xc14));
              }
              alarm_start_relative(param_1 + 0x988,(ulong)uVar7 * 1000000);
              goto LAB_00130314;
            }
          }
        }
        else {
          uVar10 = *(ulong *)(param_1 + -0x3f0);
          uVar7 = 0xffffffed;
          *(int *)(param_1 + 0xc08) = local_60;
          if ((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) {
            uVar7 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x28),&local_60);
            iVar13 = local_60;
            if (-1 < (int)uVar7) {
              uVar7 = 0xffffffed;
              uVar10 = *(ulong *)(param_1 + -0x3f0);
              *(int *)(param_1 + 0xc14) = local_60;
              if (((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) &&
                 (uVar7 = iio_read_channel_processed(*(undefined8 *)(uVar10 + 0x18),&local_60),
                 -1 < (int)uVar7)) {
                *(int *)(param_1 + 0xc0c) = local_60;
                goto LAB_00130134;
              }
LAB_001302fc:
              uVar9 = *(undefined8 *)(param_1 + -0x648);
              puVar8 = "<3>%s: %s: Couldn't read cc_soc prop, rc=%d\n";
              goto LAB_00130310;
            }
          }
        }
        uVar9 = *(undefined8 *)(param_1 + -0x648);
        puVar8 = "<3>%s: %s: Couldn't read voltage_now prop, rc=%d\n";
      }
    }
  }
LAB_00130310:
  _printk(puVar8,uVar9,"smblib_chg_termination_work",uVar7);
LAB_00130314:
  vote(*(undefined8 *)(param_1 + -0x138),"CHG_TERMINATION_VOTER",0,0);
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- chg_termination_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe @ 001303b4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 chg_termination_alarm_cb_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1,long param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(param_1 + -0xd58) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: Charge termination WA alarm triggered %lld\n",*(undefined8 *)(param_1 + -0xfd0),"chg_termination_alarm_cb",
            param_2 / 1000000);
  }
  pm_stay_awake(*(undefined8 *)(param_1 + -0xfd8));
  queue_work_on(0x20,_system_wq,param_1 + -0x988);
  return 0;
}



/* ---- smblib_moisture_protection_work.c1f83f06b53fd76bd0f354fad1e3f8fe @ 00130448 ---- */

void smblib_moisture_protection_work_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  vote(*(undefined8 *)(param_1 + -0x108),"MOISTURE_VOTER",1,0);
  uVar6 = 0x1572;
  if (*(int *)(param_1 + 0xafc) != 3) {
    uVar6 = 0x1573;
  }
  iVar3 = regmap_write(*(undefined8 *)(param_1 + -0x610),uVar6,0);
  if (iVar3 < 0) {
    uVar5 = *(undefined8 *)(param_1 + -0x618);
    puVar4 = "<3>%s: %s: Couldn't disable periodic monitoring of CC_ID rc=%d\n";
  }
  else {
    iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + -0x610),0x1570,2,2,0,0,0);
    if (iVar3 < 0) {
      uVar5 = *(undefined8 *)(param_1 + -0x618);
      puVar4 = "<3>%s: %s: Couldn't enable uUSB factory mode detection rc=%d\n";
    }
    else {
      msleep(100);
      local_2c = 0;
      iVar3 = regmap_read(*(undefined8 *)(param_1 + -0x610),0x1310,&local_2c);
      uVar2 = local_2c;
      if (iVar3 < 0) {
        uVar5 = *(undefined8 *)(param_1 + -0x618);
        puVar4 = "<3>%s: %s: Couldn't read USB_INT_RT_STS rc=%d\n";
      }
      else {
        local_2c = 0;
        iVar3 = regmap_read(*(undefined8 *)(param_1 + -0x610),0x150f,&local_2c);
        if (-1 < iVar3) {
          if ((((byte)local_2c < 9) && ((1 << (ulong)(local_2c & 0x1f) & 0x105U) != 0)) ||
             (((uVar2 >> 4 & 1) != 0 && ((local_2c & 0xff) == 4)))) {
            smblib_set_moisture_protection(param_1 + -0x620,1);
            alarm_start_relative(param_1 + 0x938,300000000000);
          }
          else {
            smblib_set_moisture_protection(param_1 + -0x620,0);
            iVar3 = alarm_cancel(param_1 + 0x938);
            if (iVar3 < 0) {
              _printk("<3>%s: %s: Couldn't cancel moisture protection alarm\n",*(undefined8 *)(param_1 + -0x618),
                      "smblib_moisture_protection_work");
            }
          }
          goto LAB_001305f0;
        }
        uVar5 = *(undefined8 *)(param_1 + -0x618);
        puVar4 = "<3>%s: %s: Couldn't read TYPE_C_U_USB_STATUS_REG rc=%d\n";
      }
    }
  }
  _printk(puVar4,uVar5,"smblib_moisture_protection_work",iVar3);
LAB_001305f0:
  vote(*(undefined8 *)(param_1 + -0x108),"MOISTURE_VOTER",0,0);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- moisture_protection_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe @ 00130638 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 moisture_protection_alarm_cb_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1,long param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(param_1 + -0xcd8) >> 2 & 1) != 0) {
    _printk("<6>%s: %s: moisture Protection Alarm Triggered %lld\n",*(undefined8 *)(param_1 + -0xf50),"moisture_protection_alarm_cb",
            param_2 / 1000000);
  }
  pm_stay_awake(*(undefined8 *)(param_1 + -0xf58));
  queue_work_on(0x20,_system_wq,param_1 + -0x938);
  return 0;
}



/* ---- dcin_aicl_alarm_cb.c1f83f06b53fd76bd0f354fad1e3f8fe @ 001306cc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dcin_aicl_alarm_cb_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((**(byte **)(param_1 + -0xdd8) >> 5 & 1) != 0) {
    _printk("<6>%s: %s: rerunning DCIN AICL\n",*(undefined8 *)(param_1 + -0x1050),"dcin_aicl_alarm_cb");
  }
  pm_stay_awake(*(undefined8 *)(param_1 + -0x1058));
  queue_work_on(0x20,_system_wq,param_1 + -0x9d8);
  return 0;
}



/* ---- smblib_deinit @ 00130748 ---- */

undefined8 smblib_deinit(long param_1)

{
  ulong uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x28c) != 1) {
    if (*(int *)(param_1 + 0x28c) != 0) {
      _printk("<3>%s: %s: Unsupported mode %d\n",*(undefined8 *)(param_1 + 8),"smblib_deinit");
      return 0xffffffea;
    }
    if (*(char *)(param_1 + 0x1236) != '\0') {
      alarm_cancel(param_1 + 0xf58);
      cancel_work_sync(param_1 + 0x620);
    }
    if ((*(byte *)(param_1 + 0x1290) >> 4 & 1) != 0) {
      alarm_cancel(param_1 + 0xfd8);
      cancel_work_sync(param_1 + 0x650);
    }
    del_timer_sync(param_1 + 0x10d8);
    cancel_work_sync(param_1 + 0x590);
    cancel_work_sync(param_1 + 0x5f0);
    cancel_work_sync(param_1 + 0x5c0);
    cancel_work_sync(param_1 + 0x680);
    cancel_work_sync(param_1 + 0x6b0);
    cancel_delayed_work_sync(param_1 + 0x768);
    cancel_delayed_work_sync(param_1 + 0x7f0);
    cancel_delayed_work_sync(param_1 + 0x878);
    cancel_delayed_work_sync(param_1 + 0x900);
    cancel_delayed_work_sync(param_1 + 0x988);
    cancel_delayed_work_sync(param_1 + 0xa10);
    cancel_delayed_work_sync(param_1 + 0xa98);
    cancel_delayed_work_sync(param_1 + 0xdc8);
    cancel_delayed_work_sync(param_1 + 0xb20);
    cancel_delayed_work_sync(param_1 + 0xba8);
    cancel_delayed_work_sync(param_1 + 0xd40);
    cancel_delayed_work_sync(param_1 + 0xc30);
    cancel_delayed_work_sync(param_1 + 0xe50);
    power_supply_unreg_notifier(param_1 + 0x440);
    if (*(long *)(param_1 + 0x4f0) != 0) {
      destroy_votable();
    }
    if (*(long *)(param_1 + 0x510) != 0) {
      destroy_votable();
    }
    if (*(long *)(param_1 + 0x518) != 0) {
      destroy_votable();
    }
    if (*(long *)(param_1 + 0x528) != 0) {
      destroy_votable();
    }
    if (*(long *)(param_1 + 0x570) != 0) {
      destroy_votable();
    }
    qcom_step_chg_deinit();
    qcom_batt_deinit();
  }
  if ((*(ulong *)(param_1 + 0x210) != 0) && (*(ulong *)(param_1 + 0x210) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  if ((*(ulong *)(param_1 + 0x208) != 0) && (*(ulong *)(param_1 + 0x208) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  if ((*(ulong *)(param_1 + 0x200) != 0) && (*(ulong *)(param_1 + 0x200) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  if ((*(ulong *)(param_1 + 0x230) != 0) && (*(ulong *)(param_1 + 0x230) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  if ((*(ulong *)(param_1 + 0x238) != 0) && (*(ulong *)(param_1 + 0x238) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  if ((*(ulong *)(param_1 + 0x240) != 0) && (*(ulong *)(param_1 + 0x240) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  if ((*(ulong *)(param_1 + 0x228) != 0) && (*(ulong *)(param_1 + 0x228) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  if ((*(ulong *)(param_1 + 0x248) != 0) && (*(ulong *)(param_1 + 0x248) < 0xfffffffffffff001)) {
    iio_channel_release();
  }
  uVar1 = *(ulong *)(param_1 + 0x250);
  if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
    iio_channel_release(uVar1);
  }
  return 0;
}



/* ---- smblib_notify_extcon_props @ 00130984 ---- */

void smblib_notify_extcon_props(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if (*(int *)(param_1 + 0x119c) == 1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x119c) != 0) goto LAB_00130a80;
    local_3c = 0;
    iVar2 = regmap_read(*(undefined8 *)(param_1 + 0x10),0x150b,&local_3c);
    uVar3 = local_3c;
    if (iVar2 < 0) {
      _printk("<3>%s: %s: Couldn't read TYPE_C_STATUS_4 rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_cc_orientation",
              iVar2);
      uVar3 = 0;
    }
    else {
      if ((**(byte **)(param_1 + 0x280) >> 1 & 1) != 0) {
        _printk("<6>%s: %s: TYPE_C_STATUS_4 = 0x%02x\n",*(undefined8 *)(param_1 + 8),"smblib_get_prop_typec_cc_orientation",
                local_3c & 0xff);
      }
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 >> 1 & 1;
      }
    }
    uVar4 = 1;
    extcon_set_property(*(undefined8 *)(param_1 + 0x12a8),param_2,1,uVar3);
  }
  extcon_set_property(*(undefined8 *)(param_1 + 0x12a8),param_2,2,uVar4);
LAB_00130a80:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- smblib_rsbux_low @ 00130ab4 ---- */

bool smblib_rsbux_low(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  bool bVar5;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  if (*(long *)(param_1 + 0x230) == 0) {
    bVar5 = false;
    goto LAB_00130bf4;
  }
  iVar2 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x154e,3,0,0,0,0);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't disable crude sensor rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_rsbux_low",iVar2);
    bVar5 = false;
    goto LAB_00130bf4;
  }
  iVar2 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x156a,4);
  if (iVar2 < 0) {
LAB_00130b88:
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = "<3>%s: %s: Couldn't select SBU1 rc=%d\n";
LAB_00130bac:
    _printk(puVar3,uVar4,"smblib_rsbux_low",iVar2);
    bVar5 = false;
  }
  else {
    iVar2 = iio_read_channel_processed(*(undefined8 *)(param_1 + 0x230),(long)&local_30 + 4);
    if (iVar2 < 0) {
LAB_00130b9c:
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar3 = "<3>%s: %s: Couldn't read SBU1 rc=%d\n";
      goto LAB_00130bac;
    }
    if (local_30._4_4_ < 3000000) {
      bVar5 = true;
    }
    else {
      iVar2 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x156a,1);
      if (iVar2 < 0) goto LAB_00130b88;
      iVar2 = iio_read_channel_processed(*(undefined8 *)(param_1 + 0x230),&local_30);
      if (iVar2 < 0) goto LAB_00130b9c;
      bVar5 = (int)local_30 < 3000000;
    }
  }
  iVar2 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x154e,3,3,0,0,0);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't enable crude sensor rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_rsbux_low",iVar2);
  }
  iVar2 = regmap_write(*(undefined8 *)(param_1 + 0x10),0x156a,0);
  if (iVar2 < 0) {
    _printk("<3>%s: %s: Couldn't select SBU1 rc=%d\n",*(undefined8 *)(param_1 + 8),"smblib_rsbux_low",iVar2);
  }
LAB_00130bf4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



/* ---- smblib_notify_usb_host @ 00130c8c ---- */

void smblib_notify_usb_host(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 & 1) == 0) {
    if ((**(uint **)(param_1 + 0x280) >> 4 & 1) != 0) {
      _printk("<6>%s: %s: disabling VBUS in OTG mode\n",*(undefined8 *)(param_1 + 8),"smblib_notify_usb_host");
    }
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1140,1,0,0,0,0);
    if (iVar1 < 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar2 = "<3>%s: %s: Couldn't disable VBUS in OTG mode rc=%d\n";
      goto LAB_00130d94;
    }
  }
  else {
    if ((**(uint **)(param_1 + 0x280) >> 4 & 1) != 0) {
      _printk("<6>%s: %s: enabling VBUS in OTG mode\n",*(undefined8 *)(param_1 + 8),"smblib_notify_usb_host");
    }
    iVar1 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1140,1,1,0,0,0);
    if (iVar1 < 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar2 = "<3>%s: %s: Couldn't enable VBUS in OTG mode rc=%d\n";
LAB_00130d94:
      _printk(puVar2,uVar3,"smblib_notify_usb_host",iVar1);
      return;
    }
    smblib_notify_extcon_props(param_1,2);
  }
  extcon_set_state_sync(*(undefined8 *)(param_1 + 0x12a8),2,param_2 & 1);
  return;
}



/* ---- smblib_update_jeita @ 00130da4 ---- */

int smblib_update_jeita(long param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ushort local_4c [2];
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x5e0);
  uVar1 = param_3 * 4 + 0x1094;
  local_4c[0] = param_2[2] >> 8 | param_2[2] << 8;
  iVar3 = regmap_bulk_write(*(undefined8 *)(param_1 + 0x10),uVar1 & 0xfffc,local_4c,2);
  if (iVar3 < 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar6 = "Soft";
    if (param_3 != 0) {
      puVar6 = "Hard";
    }
    puVar4 = "<3>%s: %s: Couldn't configure Jeita %s hot threshold rc=%d\n";
  }
  else {
    local_4c[0] = *param_2 >> 8 | *param_2 << 8;
    iVar3 = regmap_bulk_write(*(undefined8 *)(param_1 + 0x10),uVar1 & 0xffff | 2,local_4c,2);
    if (-1 < iVar3) {
      if ((**(byte **)(param_1 + 0x280) >> 2 & 1) != 0) {
        puVar6 = "Soft";
        if (param_3 != 0) {
          puVar6 = "Hard";
        }
        _printk("<6>%s: %s: %s Jeita threshold configured\n",*(undefined8 *)(param_1 + 8),"smblib_update_jeita",puVar6);
      }
      iVar3 = 0;
      goto LAB_00130e48;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar6 = "Soft";
    if (param_3 != 0) {
      puVar6 = "Hard";
    }
    puVar4 = "<3>%s: %s: Couldn't configure Jeita %s cold threshold rc=%d\n";
  }
  _printk(puVar4,uVar5,"smblib_update_jeita",puVar6,iVar3);
LAB_00130e48:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smblib_set_moisture_protection @ 00130f20 ---- */

void smblib_set_moisture_protection(long param_1,byte param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pbVar1 = (byte *)(param_1 + 0x1234);
  if (*pbVar1 == (param_2 & 1)) {
    if ((**(byte **)(param_1 + 0x280) >> 2 & 1) == 0) {
      return;
    }
    _printk("<6>%s: %s: No change in moisture protection status\n",*(undefined8 *)(param_1 + 8),"smblib_set_moisture_protection");
    return;
  }
  if ((param_2 & 1) == 0) {
    *pbVar1 = 0;
    vote(*(undefined8 *)(param_1 + 0x510),"MOISTURE_VOTER",0,0);
    iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1560,0x24,0x24,0,0,0);
    if (iVar3 < 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't enable moisture detection and uUSB state change interrupt rc=%d\n";
      goto LAB_00131154;
    }
    uVar6 = 0x1572;
    if (*(int *)(param_1 + 0x111c) != 3) {
      uVar6 = 0x1573;
    }
    iVar3 = regmap_write(*(undefined8 *)(param_1 + 0x10),uVar6,0);
    if (iVar3 < 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = "<3>%s: %s: Couldn't disable 1 percent CC_ID duty cycle rc=%d\n";
      goto LAB_00131154;
    }
    iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1570,2,2,0,0,0);
    if (-1 < iVar3) goto LAB_0013109c;
  }
  else {
    *pbVar1 = 1;
    iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1570,2,0,0,0,0);
    if (-1 < iVar3) {
      iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),0x1560,0x24,0,0,0,0);
      if (iVar3 < 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        puVar4 = "<3>%s: %s: Couldn't disable moisture detection interrupt rc=%d\n";
      }
      else {
        uVar6 = 0x1572;
        if (*(int *)(param_1 + 0x111c) != 3) {
          uVar6 = 0x1573;
        }
        iVar3 = regmap_update_bits_base(*(undefined8 *)(param_1 + 0x10),uVar6,0x1f,0x1b,0,0,0);
        if (-1 < iVar3) {
          vote(*(undefined8 *)(param_1 + 0x510),"MOISTURE_VOTER",1,0);
LAB_0013109c:
          if ((**(byte **)(param_1 + 0x280) >> 2 & 1) == 0) {
            return;
          }
          pcVar2 = "disabled";
          if (*pbVar1 != 0) {
            pcVar2 = "enabled";
          }
          _printk("<6>%s: %s: Moisture protection %s\n",*(undefined8 *)(param_1 + 8),"smblib_set_moisture_protection",pcVar2
                 );
          return;
        }
        uVar5 = *(undefined8 *)(param_1 + 8);
        puVar4 = "<3>%s: %s: Couldn't set 1 percent CC_ID duty cycle rc=%d\n";
      }
      goto LAB_00131154;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4 = "<3>%s: %s: Couldn't disable uUSB factory mode detection rc=%d\n";
LAB_00131154:
  _printk(puVar4,uVar5,"smblib_set_moisture_protection",iVar3);
  return;
}



/* ---- smblib_smb_disable_override_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 00131164 ---- */

int smblib_smb_disable_override_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
              (undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = regmap_update_bits_base
                    (*(undefined8 *)(param_2 + 0x10),0x1648,0x18,(ulong)(param_3 != 0) << 3,0,0,0);
  if (iVar1 < 0) {
    _printk("<3>%s: %s: Couldn't configure SMB_EN, rc=%d\n",*(undefined8 *)(param_2 + 8),"smblib_smb_disable_override_vote_callback",
            iVar1);
  }
  return iVar1;
}



/* ---- smblib_dc_suspend_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 001311e4 ---- */

int smblib_dc_suspend_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
              (undefined8 param_1,long param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_2 + 0x111c) == 3) {
    iVar2 = 0;
  }
  else {
    iVar2 = regmap_update_bits_base(*(undefined8 *)(param_2 + 0x10),0x1440,1,0 < param_3,0,0,0);
    if (iVar2 < 0) {
      pcVar1 = "suspend";
      if (param_3 < 1) {
        pcVar1 = "resume";
      }
      _printk("<3>%s: %s: Couldn't write %s to DCIN_SUSPEND_BIT rc=%d\n",*(undefined8 *)(param_2 + 8),"smblib_set_dc_suspend",pcVar1,iVar2);
    }
  }
  return iVar2;
}



/* ---- smblib_awake_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 00131298 ---- */

undefined8
smblib_awake_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
          (undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_3 == 0) {
    pm_relax(*param_2);
  }
  else {
    pm_stay_awake();
  }
  return 0;
}



/* ---- smblib_chg_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 001312d0 ---- */

int smblib_chg_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
              (undefined8 param_1,long param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar2 = regmap_update_bits_base(*(undefined8 *)(param_2 + 0x10),0x1042,1,param_3 == 0,0,0,0);
  iVar3 = 0;
  if (iVar2 < 0) {
    pcVar1 = "enable";
    if (param_3 != 0) {
      pcVar1 = "disable";
    }
    _printk("<3>%s: %s: Couldn't %s charging rc=%d\n",*(undefined8 *)(param_2 + 8),"smblib_chg_disable_vote_callback",pcVar1,
            iVar2);
    iVar3 = iVar2;
  }
  return iVar3;
}



/* ---- smblib_limited_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 00131374 ---- */

undefined8
smblib_limited_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
          (undefined8 param_1,long param_2,int param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(*(long *)(param_2 + 0x18) + 0x618) != 0) {
    if (*(char *)(*(long *)(param_2 + 0x18) + 0x61c) == '\0') {
      if (param_3 == 0) {
        enable_irq();
      }
    }
    else if (param_3 != 0) {
      disable_irq_nosync();
    }
    *(bool *)(*(long *)(param_2 + 0x18) + 0x61c) = param_3 == 0;
  }
  return 0;
}



/* ---- smblib_hdc_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 001313e0 ---- */

undefined8
smblib_hdc_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
          (undefined8 param_1,long param_2,int param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(*(long *)(param_2 + 0x18) + 0x5a8) != 0) {
    if (*(char *)(*(long *)(param_2 + 0x18) + 0x5ac) == '\0') {
      if (param_3 == 0) {
        enable_irq();
      }
    }
    else if (param_3 != 0) {
      disable_irq_nosync();
    }
    *(bool *)(*(long *)(param_2 + 0x18) + 0x5ac) = param_3 == 0;
  }
  return 0;
}



/* ---- smblib_icl_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 0013144c ---- */

undefined8
smblib_icl_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
          (undefined8 param_1,long param_2,int param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(*(long *)(param_2 + 0x18) + 0xdf8) != 0) {
    if (*(char *)(*(long *)(param_2 + 0x18) + 0xdfc) == '\0') {
      if (param_3 == 0) {
        enable_irq();
      }
    }
    else if (param_3 != 0) {
      disable_irq_nosync();
    }
    *(bool *)(*(long *)(param_2 + 0x18) + 0xdfc) = param_3 == 0;
  }
  return 0;
}



/* ---- smblib_temp_change_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 001314b8 ---- */

undefined8
smblib_temp_change_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
          (undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_2 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x1798);
  if (iVar1 != 0) {
    if ((param_3 == 0) || (*(char *)(lVar2 + 0x179c) == '\0')) {
      if ((param_3 == 0) && (*(char *)(lVar2 + 0x179c) == '\0')) {
        enable_irq();
        if (*(char *)(*(long *)(param_2 + 0x18) + 0x1740) != '\0') {
          irq_set_irq_wake(*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x1798),1);
        }
      }
    }
    else {
      if (*(char *)(lVar2 + 0x1740) != '\0') {
        irq_set_irq_wake(iVar1,0);
        iVar1 = *(int *)(*(long *)(param_2 + 0x18) + 0x1798);
      }
      disable_irq_nosync(iVar1);
    }
    *(bool *)(*(long *)(param_2 + 0x18) + 0x179c) = param_3 == 0;
  }
  return 0;
}



/* ---- smblib_bat_temp_irq_disable_vote_callback.c1f83f06b53fd76bd0f354fad1e3f8fe @ 00131568 ---- */

undefined8
smblib_bat_temp_irq_disable_vote_callback_c1f83f06b53fd76bd0f354fad1e3f8fe
          (undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = *(int *)(*(long *)(param_2 + 0x18) + 0x768);
  if (iVar1 != 0) {
    cVar2 = *(char *)(*(long *)(param_2 + 0x18) + 0x76c);
    if ((param_3 == 0) || (cVar2 == '\0')) {
      if ((param_3 == 0) && (cVar2 == '\0')) {
        enable_irq();
        irq_set_irq_wake(*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x768),1);
      }
    }
    else {
      irq_set_irq_wake(iVar1,0);
      disable_irq_nosync(*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x768));
    }
    *(bool *)(*(long *)(param_2 + 0x18) + 0x76c) = param_3 == 0;
  }
  return 0;
}



/* ---- smblib_notifier_call.c1f83f06b53fd76bd0f354fad1e3f8fe @ 001315f8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
smblib_notifier_call_c1f83f06b53fd76bd0f354fad1e3f8fe(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = strcmp(*(char **)*param_3,"bms");
  if ((param_2 == 0) && (iVar1 == 0)) {
    queue_work_on(0x20,_system_wq,param_1 + 0x150);
  }
  if (*(int *)(param_1 + 0xd9c) == 0) {
    queue_work_on(0x20,_system_wq,param_1 + 0x1b0);
  }
  if (((*(char *)(param_1 + 0xd00) != '\0') && (*(long *)(param_1 + -0x1c8) == 0)) &&
     (iVar1 = strcmp(*(char **)*param_3,"parallel"), iVar1 == 0)) {
    queue_work_on(0x20,_system_wq,param_1 + 0x180);
  }
  iVar1 = strcmp(*(char **)*param_3,"charge_pump_master");
  if (iVar1 == 0) {
    pm_stay_awake(*(undefined8 *)(param_1 + -0x440));
    queue_work_on(0x20,_system_wq,param_1 + 0x270);
  }
  return 1;
}



/* ---- is_storming @ 001316f8 ---- */

bool is_storming(char *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *in_x18;
  bool bVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((((param_1 == (char *)0x0) || (*param_1 == '\0')) || (*(int *)(param_1 + 8) < 1)) ||
     (*(int *)(param_1 + 4) < 1)) {
    bVar4 = false;
  }
  else {
    mutex_lock(param_1 + 0x18);
    lVar2 = ktime_get_with_offset(1);
    if ((lVar2 - *(long *)(param_1 + 0x10)) / 1000000 < (long)*(int *)(param_1 + 4)) {
      iVar3 = *(int *)(param_1 + 0xc) + 1;
    }
    else {
      iVar3 = 0;
    }
    *(long *)(param_1 + 0x10) = lVar2;
    iVar1 = 0;
    if (iVar3 <= *(int *)(param_1 + 8)) {
      iVar1 = iVar3;
    }
    bVar4 = *(int *)(param_1 + 8) < iVar3;
    *(int *)(param_1 + 0xc) = iVar1;
    mutex_unlock(param_1 + 0x18);
  }
  return bVar4;
}



/* ---- reset_storm_count @ 001317d0 ---- */

void reset_storm_count(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  mutex_lock(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  mutex_unlock(param_1 + 0x18);
  return;
}



/* ---- update_storm_count @ 00131814 ---- */

void update_storm_count(long param_1,undefined4 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (param_1 != 0) {
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = param_2;
    mutex_unlock(param_1 + 0x18);
  }
  return;
}



/* ---- smb5_schgm_flash_default_irq_handler @ 0013186c ---- */

undefined8 smb5_schgm_flash_default_irq_handler(void)

{
  return 1;
}



/* ---- smb5_schgm_flash_ilim2_irq_handler @ 0013187c ---- */

undefined8 smb5_schgm_flash_ilim2_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = smblib_write(*param_2,0xa644,1);
  if (iVar1 < 0) {
    _printk("<3>SCHG-FLASH: %s: Couldn't reset S2_LATCH reset rc=%d\n","smb5_schgm_flash_ilim2_irq_handler",iVar1);
  }
  return 1;
}



/* ---- smb5_schgm_flash_state_change_irq_handler @ 001318d0 ---- */

undefined8 smb5_schgm_flash_state_change_irq_handler(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_1c [4];
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c[0] = 0;
  iVar2 = smblib_read(*param_2,0xa608,local_1c);
  if (iVar2 < 0) {
    _printk("<3>SCHG-FLASH: %s: Couldn't read flash status_3 rc=%d\n","smb5_schgm_flash_state_change_irq_handler",iVar2);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- is_flash_active @ 00131954 ---- */

undefined1 is_flash_active(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12dd);
}



/* ---- schgm_flash_get_vreg_ok @ 00131968 ---- */

int schgm_flash_get_vreg_ok(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  uint uVar4;
  undefined8 unaff_x30;
  byte local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c[0] = 0;
  if (*(char *)(param_1 + 0x12dc) == '\0') {
    iVar2 = -1;
    goto LAB_00131a10;
  }
  iVar2 = smblib_read(param_1,0xa607,local_3c);
  if (iVar2 < 0) {
    puVar3 = "<3>SCHG-FLASH: %s: Couldn't read FLASH STATUS_2 rc=%d\n";
LAB_00131a70:
    _printk(puVar3,"schgm_flash_get_vreg_ok",iVar2);
  }
  else {
    uVar4 = local_3c[0] >> 4 & 1;
    if ((local_3c[0] >> 4 & 1) == 0) {
      iVar2 = smblib_read(param_1,0xa608,local_3c);
      if (iVar2 < 0) {
        puVar3 = "<3>SCHG-FLASH: %s: Couldn't read FLASH_STATUS_3 rc=%d\n";
        goto LAB_00131a70;
      }
      if ((~local_3c[0] & 7) == 0) {
        iVar2 = smblib_read(param_1,0xa60b,local_3c);
        if (iVar2 < 0) {
          puVar3 = "<3>SCHG-FLASH: %s: Couldn't read FLASH_STATUS_5 rc=%d\n";
          goto LAB_00131a70;
        }
        uVar4 = 0xfffffff2;
      }
    }
    iVar2 = 0;
    *param_2 = uVar4;
  }
LAB_00131a10:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- schgm_flash_torch_priority @ 00131a88 ---- */

void schgm_flash_torch_priority(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((param_2 < 2) && (*(int *)(param_1 + 0x12d8) != 0)) &&
     (iVar1 = smblib_masked_write(param_1,0xa663,1,param_2), iVar1 < 0)) {
    _printk("<3>SCHG-FLASH: %s: Couldn't configure Torch priority control rc=%d\n","schgm_flash_torch_priority",iVar1);
  }
  return;
}



/* ---- schgm_flash_init @ 00131ae8 ---- */

int schgm_flash_init(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined8 unaff_x30;
  char local_40 [4];
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40[0] = '\0';
  local_3c = 0;
  uVar4 = *(undefined8 *)(*param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x25a) = 0xffffffea;
  iVar2 = of_property_read_variable_u32_array(uVar4,"qcom,flash-derating-soc",&local_3c,1,0);
  if ((-1 < iVar2) && (local_3c < 0x65)) {
    *(uint *)(param_1 + 0x25a) = (local_3c * 0xff >> 2 & 0x3fff) / 0x19;
  }
  *(undefined4 *)((long)param_1 + 0x12d4) = 0xffffffea;
  iVar2 = of_property_read_variable_u32_array(uVar4,"qcom,flash-disable-soc",&local_3c,1,0);
  if ((-1 < iVar2) && (local_3c < 0x65)) {
    *(uint *)((long)param_1 + 0x12d4) = (local_3c * 0xff >> 2 & 0x3fff) / 0x19;
  }
  *(undefined4 *)(param_1 + 0x25b) = 0xffffffea;
  iVar2 = of_property_read_variable_u32_array(uVar4,"qcom,headroom-mode",&local_3c,1,0);
  if ((-1 < iVar2) && (local_3c < 2)) {
    *(uint *)(param_1 + 0x25b) = local_3c;
  }
  if (((int)param_1[0x25a] == -0x16) || (iVar2 = smblib_write(param_1,0xa667), -1 < iVar2)) {
    if ((*(int *)((long)param_1 + 0x12d4) == -0x16) ||
       (iVar2 = smblib_write(param_1,0xa668), -1 < iVar2)) {
      if ((int)param_1[0x25b] == -0x16) {
LAB_00131c74:
        if (((int)param_1[0x25a] != -0x16) || (*(int *)((long)param_1 + 0x12d4) != -0x16)) {
          iVar2 = smblib_read(param_1,0xa660,local_40);
          if (iVar2 < 0) {
            puVar3 = "<3>SCHG-FLASH: %s: Couldn't read flash control reg rc=%d\n";
            goto LAB_00131d50;
          }
          if (-1 < local_40[0]) {
            _printk("<4>SCHG-FLASH: %s: Soc based flash derating not enabled\n","schgm_flash_init");
          }
        }
        iVar2 = 0;
        *(undefined1 *)((long)param_1 + 0x12dc) = 1;
        goto LAB_00131cb8;
      }
      iVar2 = smblib_write(param_1,0xa641,(int)param_1[0x25b] == 0);
      if (iVar2 < 0) {
        puVar3 = "<3>SCHG-FLASH: %s: Couldn't write force boost control reg rc=%d\n";
      }
      else {
        local_40[0] = (int)param_1[0x25b] == 0;
        iVar2 = smblib_write(param_1,0xa663);
        if (-1 < iVar2) goto LAB_00131c74;
        puVar3 = "<3>SCHG-FLASH: %s: Couldn't force 5V boost in torch mode rc=%d\n";
      }
    }
    else {
      puVar3 = "<3>SCHG-FLASH: %s: Couldn't configure SOC for flash disable rc=%d\n";
    }
  }
  else {
    puVar3 = "<3>SCHG-FLASH: %s: Couldn't configure SOC for flash derating rc=%d\n";
  }
LAB_00131d50:
  _printk(puVar3,"schgm_flash_init",iVar2);
LAB_00131cb8:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- of_batterydata_get_best_profile @ 00131d68 ---- */

undefined8 * of_batterydata_get_best_profile(undefined8 param_1,uint param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  char *pcVar11;
  uint *puVar12;
  undefined8 *in_x18;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 unaff_x30;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar9 = sp_el0;
  local_68 = *(long *)(lVar9 + 0x5e0);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = (char *)0x0;
  local_8c = 0;
  uVar5 = of_property_read_variable_u32_array(param_1,"qcom,batt-id-range-pct",&local_8c,1,0);
  uVar5 = uVar5 & (int)uVar5 >> 0x1f;
  if (uVar5 != 0) {
    if (uVar5 != 0xffffffea) {
      _printk("<3>%s: failed to read battery id range\n","of_batterydata_get_best_profile");
      puVar13 = (undefined8 *)&DAT_fffffffffffffffa;
      goto LAB_001320bc;
    }
    local_8c = 0;
  }
  puVar8 = (undefined8 *)of_get_next_child(param_1,0);
  if (puVar8 == (undefined8 *)0x0) {
LAB_001320a4:
    _printk("<3>%s: No battery data found\n","of_batterydata_get_best_profile");
  }
  else {
    puVar13 = (undefined8 *)0x0;
    iVar7 = 0;
    local_90 = local_80._4_4_;
    local_98 = 0;
    local_94 = (uint)local_78;
    uVar14 = (uint)local_80;
    uVar15 = local_78._4_4_;
    uVar5 = local_70;
    do {
      if (param_3 == (char *)0x0) {
        lVar9 = of_find_property(puVar8,"qcom,batt-id-kohm",0);
        if (lVar9 == 0) {
          puVar10 = "<3>%s: %s: No battery id resistor found\n";
        }
        else {
          puVar12 = *(uint **)(lVar9 + 0x10);
          if (puVar12 == (uint *)0x0) {
            puVar10 = "<3>%s: %s: No battery id resistor value found, np->name\n";
          }
          else {
            uVar2 = *(uint *)(lVar9 + 8);
            if (uVar2 < 0x11) {
              uVar5 = uVar2 >> 2;
              if (3 < uVar2) {
                uVar1 = uVar5;
                if (uVar5 < 2) {
                  uVar1 = 1;
                }
                uVar14 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
                uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                if (((7 < uVar2) &&
                    (uVar2 = (puVar12[1] & 0xff00ff00) >> 8 | (puVar12[1] & 0xff00ff) << 8,
                    local_90 = uVar2 >> 0x10 | uVar2 << 0x10, uVar1 != 2)) &&
                   (uVar2 = (puVar12[2] & 0xff00ff00) >> 8 | (puVar12[2] & 0xff00ff) << 8,
                   local_94 = uVar2 >> 0x10 | uVar2 << 0x10, uVar1 != 3)) {
                  uVar15 = (puVar12[3] & 0xff00ff00) >> 8 | (puVar12[3] & 0xff00ff) << 8;
                  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                }
              }
              if (uVar5 != 0) {
                if (uVar5 - 5 < 0xfffffffc) {
                  local_80 = CONCAT44(local_90,uVar14);
                  local_78 = CONCAT44(uVar15,local_94);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x1321bc);
                  local_70 = uVar5;
                  (*pcVar4)();
                }
                iVar3 = uVar14 - param_2;
                iVar6 = -iVar3;
                if (-1 < iVar3) {
                  iVar6 = iVar3;
                }
                if (((iVar6 < iVar7) || (puVar13 == (undefined8 *)0x0)) &&
                   (iVar6 <= (int)(uVar14 * local_8c) / 100)) {
                  puVar13 = puVar8;
                  iVar7 = iVar6;
                  local_98 = uVar14;
                }
                if (uVar5 != 1) {
                  iVar3 = local_90 - param_2;
                  iVar6 = -iVar3;
                  if (-1 < iVar3) {
                    iVar6 = iVar3;
                  }
                  if (((iVar6 < iVar7) || (puVar13 == (undefined8 *)0x0)) &&
                     (iVar6 <= (int)(local_90 * local_8c) / 100)) {
                    local_98 = local_90;
                    puVar13 = puVar8;
                    iVar7 = iVar6;
                  }
                  if (uVar5 != 2) {
                    iVar3 = local_94 - param_2;
                    iVar6 = -iVar3;
                    if (-1 < iVar3) {
                      iVar6 = iVar3;
                    }
                    if (((iVar6 < iVar7) || (puVar13 == (undefined8 *)0x0)) &&
                       (iVar6 <= (int)(local_94 * local_8c) / 100)) {
                      local_98 = local_94;
                      puVar13 = puVar8;
                      iVar7 = iVar6;
                    }
                    if (uVar5 != 3) {
                      iVar3 = uVar15 - param_2;
                      iVar6 = -iVar3;
                      if (-1 < iVar3) {
                        iVar6 = iVar3;
                      }
                      if (((iVar6 < iVar7) || (puVar13 == (undefined8 *)0x0)) &&
                         (iVar6 <= (int)(uVar15 * local_8c) / 100)) {
                        puVar13 = puVar8;
                        iVar7 = iVar6;
                        local_98 = uVar15;
                      }
                    }
                  }
                }
              }
              goto LAB_00131e38;
            }
            puVar10 = "<3>%s: %s: Too many battery id resistors\n";
          }
        }
        _printk(puVar10,"of_batterydata_read_batt_id_kohm",*puVar8);
      }
      else {
        iVar6 = of_property_read_string(puVar8,"qcom,battery-type",&local_88);
        if ((iVar6 == 0) && (iVar6 = strcmp(local_88,param_3), iVar6 == 0)) {
          local_80 = CONCAT44(local_90,uVar14);
          local_78 = CONCAT44(uVar15,local_94);
          puVar13 = puVar8;
          local_98 = param_2;
          local_70 = uVar5;
          goto LAB_00132118;
        }
      }
LAB_00131e38:
      puVar8 = (undefined8 *)of_get_next_child(param_1,puVar8);
    } while (puVar8 != (undefined8 *)0x0);
    local_80 = CONCAT44(local_90,uVar14);
    local_78 = CONCAT44(uVar15,local_94);
    local_70 = uVar5;
    if (puVar13 == (undefined8 *)0x0) goto LAB_001320a4;
LAB_00132118:
    iVar6 = local_98 - param_2;
    iVar7 = -iVar6;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    if (iVar7 <= (int)(local_8c * local_98) / 100) {
      iVar7 = of_property_read_string(puVar13,"qcom,battery-type",&local_88);
      if (iVar7 == 0) {
        pcVar11 = local_88;
      }
      else {
        pcVar11 = (char *)*puVar13;
      }
      _printk("<6>%s: %s found\n","of_batterydata_get_best_profile",pcVar11);
      goto LAB_001320bc;
    }
    _printk("<3>%s: out of range: profile id %d batt id %d pct %d\n","of_batterydata_get_best_profile",local_98,param_2);
  }
  puVar13 = (undefined8 *)0x0;
LAB_001320bc:
  lVar9 = sp_el0;
  if (*(long *)(lVar9 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar13;
}



/* ---- of_batterydata_get_best_aged_profile @ 001321c0 ---- */

undefined8 *
of_batterydata_get_best_aged_profile(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 *in_x18;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 unaff_x30;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar8 = sp_el0;
  local_68 = *(long *)(lVar8 + 0x5e0);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  uVar4 = of_property_read_variable_u32_array
                    (param_1,"qcom,batt-id-range-pct",(long)&local_90 + 4,1,0);
  uVar4 = uVar4 & (int)uVar4 >> 0x1f;
  if (uVar4 != 0) {
    if (uVar4 != 0xffffffea) {
      _printk("<3>%s: failed to read battery id range\n","of_batterydata_get_best_aged_profile");
      puVar13 = (undefined8 *)&DAT_fffffffffffffffa;
      goto LAB_001324c0;
    }
    local_90 = local_90 & 0xffffffff;
  }
  puVar7 = (undefined8 *)of_get_next_available_child(param_1,0);
  if (puVar7 == (undefined8 *)0x0) {
LAB_001324a8:
    _printk("<3>%s: No battery data found\n","of_batterydata_get_best_aged_profile");
  }
  else {
    local_a0 = (uint)local_78;
    local_9c = 0;
    puVar13 = (undefined8 *)0x0;
    local_a4 = local_78._4_4_;
    uVar14 = (uint)local_80;
    uVar12 = local_80._4_4_;
    uVar4 = local_70;
    do {
      local_90 = local_90 & 0xffffffff00000000;
      of_property_read_variable_u32_array(puVar7,"qcom,batt-age-level",&local_90,1,0);
      lVar8 = of_find_property(puVar7,"qcom,batt-id-kohm",0);
      if (lVar8 == 0) {
        puVar9 = "<3>%s: %s: No battery id resistor found\n";
LAB_00132460:
        _printk(puVar9,"of_batterydata_read_batt_id_kohm",*puVar7);
      }
      else {
        puVar11 = *(uint **)(lVar8 + 0x10);
        if (puVar11 == (uint *)0x0) {
          puVar9 = "<3>%s: %s: No battery id resistor value found, np->name\n";
          goto LAB_00132460;
        }
        uVar5 = *(uint *)(lVar8 + 8);
        if (0x10 < uVar5) {
          puVar9 = "<3>%s: %s: Too many battery id resistors\n";
          goto LAB_00132460;
        }
        uVar4 = uVar5 >> 2;
        if (3 < uVar5) {
          uVar1 = uVar4;
          if (uVar4 < 2) {
            uVar1 = 1;
          }
          uVar14 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
          uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
          if (((7 < uVar5) &&
              (uVar12 = (puVar11[1] & 0xff00ff00) >> 8 | (puVar11[1] & 0xff00ff) << 8,
              uVar12 = uVar12 >> 0x10 | uVar12 << 0x10, uVar1 != 2)) &&
             (uVar5 = (puVar11[2] & 0xff00ff00) >> 8 | (puVar11[2] & 0xff00ff) << 8,
             local_a0 = uVar5 >> 0x10 | uVar5 << 0x10, uVar1 != 3)) {
            uVar5 = (puVar11[3] & 0xff00ff00) >> 8 | (puVar11[3] & 0xff00ff) << 8;
            local_a4 = uVar5 >> 0x10 | uVar5 << 0x10;
          }
        }
        if (uVar4 != 0) {
          if (((int)local_90 == param_3) || (puVar13 == (undefined8 *)0x0)) {
            iVar2 = uVar14 - param_2;
            iVar6 = -iVar2;
            if (-1 < iVar2) {
              iVar6 = iVar2;
            }
            uVar5 = uVar14;
            if ((int)(uVar14 * local_90._4_4_) / 100 < iVar6) {
              if (uVar4 != 1) {
                iVar2 = uVar12 - param_2;
                iVar6 = -iVar2;
                if (-1 < iVar2) {
                  iVar6 = iVar2;
                }
                uVar5 = uVar12;
                if (iVar6 <= (int)(uVar12 * local_90._4_4_) / 100) goto LAB_0013227c;
                if (uVar4 != 2) {
                  iVar2 = local_a0 - param_2;
                  iVar6 = -iVar2;
                  if (-1 < iVar2) {
                    iVar6 = iVar2;
                  }
                  uVar5 = local_a0;
                  if (iVar6 <= (int)(local_a0 * local_90._4_4_) / 100) goto LAB_0013227c;
                  if (uVar4 != 3) {
                    iVar2 = local_a4 - param_2;
                    iVar6 = -iVar2;
                    if (-1 < iVar2) {
                      iVar6 = iVar2;
                    }
                    uVar5 = local_a4;
                    if (iVar6 <= (int)(local_a4 * local_90._4_4_) / 100) goto LAB_0013227c;
                    if (uVar4 != 4) goto LAB_00132594;
                  }
                }
              }
            }
            else {
LAB_0013227c:
              *param_4 = (int)local_90;
              puVar13 = puVar7;
              local_9c = uVar5;
            }
          }
          else if (3 < uVar4 - 1) {
LAB_00132594:
            local_80 = CONCAT44(uVar12,uVar14);
            local_78 = CONCAT44(local_a4,local_a0);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x1325ac);
            local_70 = uVar4;
            (*pcVar3)();
          }
        }
      }
      puVar7 = (undefined8 *)of_get_next_available_child(param_1,puVar7);
    } while (puVar7 != (undefined8 *)0x0);
    local_80 = CONCAT44(uVar12,uVar14);
    local_78 = CONCAT44(local_a4,local_a0);
    local_70 = uVar4;
    if (puVar13 == (undefined8 *)0x0) goto LAB_001324a8;
    iVar2 = local_9c - param_2;
    iVar6 = -iVar2;
    if (-1 < iVar2) {
      iVar6 = iVar2;
    }
    if (iVar6 <= (int)(local_90._4_4_ * local_9c) / 100) {
      iVar6 = of_property_read_string(puVar13,"qcom,battery-type",&local_88);
      if (iVar6 == 0) {
        uVar10 = local_88;
      }
      else {
        uVar10 = *puVar13;
      }
      _printk("<6>%s: %s age level %d found\n","of_batterydata_get_best_aged_profile",uVar10,*param_4);
      goto LAB_001324c0;
    }
    _printk("<3>%s: out of range: profile id %d batt id %d pct %d\n","of_batterydata_get_best_aged_profile",local_9c,param_2);
  }
  puVar13 = (undefined8 *)0x0;
LAB_001324c0:
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar13;
}



/* ---- of_batterydata_get_aged_profile_count @ 001325b0 ---- */

void of_batterydata_get_aged_profile_count(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *in_x18;
  int iVar7;
  undefined8 unaff_x30;
  undefined8 local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_68 = *(long *)(lVar4 + 0x5e0);
  local_70 = 0;
  uVar2 = of_property_read_variable_u32_array
                    (param_1,"qcom,batt-id-range-pct",(long)&local_70 + 4,1,0);
  uVar2 = uVar2 & (int)uVar2 >> 0x1f;
  if (uVar2 != 0) {
    if (uVar2 != 0xffffffea) {
      _printk("<3>%s: failed to read battery id range\n","of_batterydata_get_aged_profile_count");
      uVar6 = 0xfffffffa;
      goto LAB_001326f0;
    }
    local_70 = local_70 & 0xffffffff;
  }
  lVar4 = of_get_next_available_child(param_1,0);
  if (lVar4 != 0) {
    iVar7 = 0;
    do {
      lVar5 = of_find_property(lVar4,"qcom,batt-age-level",0);
      if (((lVar5 != 0) && (lVar5 = of_find_property(lVar4,"qcom,soh-range",0), lVar5 != 0)) &&
         (iVar3 = of_property_read_variable_u32_array(lVar4,"qcom,batt-id-kohm",&local_70,1,0),
         -1 < iVar3)) {
        iVar1 = param_2 - (int)local_70;
        iVar3 = -iVar1;
        if (-1 < iVar1) {
          iVar3 = iVar1;
        }
        if (iVar3 <= (local_70._4_4_ * param_2) / 100) {
          iVar7 = iVar7 + 1;
        }
      }
      lVar4 = of_get_next_available_child(param_1,lVar4);
    } while (lVar4 != 0);
    if (1 < iVar7) {
      uVar6 = 0;
      *param_3 = iVar7;
      goto LAB_001326f0;
    }
  }
  _printk("<3>%s: Less number of profiles to support SOH\n","of_batterydata_get_aged_profile_count");
  uVar6 = 0xffffffea;
LAB_001326f0:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}



/* ---- of_batterydata_read_soh_aged_profiles @ 00132768 ---- */

int of_batterydata_read_soh_aged_profiles(long param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *in_x18;
  ulong uVar7;
  undefined8 unaff_x30;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  iVar3 = -0x13;
  local_68 = *(long *)(lVar4 + 0x5e0);
  local_6c = 0;
  local_80 = 0;
  local_78 = 0;
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar2 = of_property_read_variable_u32_array(param_1,"qcom,batt-id-range-pct",&local_80,1,0);
    uVar2 = uVar2 & (int)uVar2 >> 0x1f;
    if (uVar2 != 0) {
      if (uVar2 != 0xffffffea) {
        _printk("<3>%s: failed to read battery id range\n","of_batterydata_read_soh_aged_profiles");
        iVar3 = -6;
        goto LAB_0013291c;
      }
      local_80 = local_80 & 0xffffffff00000000;
    }
    lVar4 = of_get_next_available_child(param_1,0);
    if (lVar4 != 0) {
      uVar7 = 0;
      do {
        iVar3 = of_property_read_variable_u32_array(lVar4,"qcom,batt-age-level",&local_6c,1,0);
        if ((-1 < iVar3) &&
           (iVar3 = of_property_read_variable_u32_array
                              (lVar4,"qcom,batt-id-kohm",(long)&local_80 + 4,1,0), -1 < iVar3)) {
          iVar1 = param_2 - local_80._4_4_;
          iVar3 = -iVar1;
          if (-1 < iVar1) {
            iVar3 = iVar1;
          }
          if ((iVar3 <= ((int)local_80 * param_2) / 100) &&
             (lVar5 = of_find_property(lVar4,"qcom,soh-range",0), lVar5 != 0)) {
            iVar3 = of_property_count_elems_of_size(lVar4,"qcom,soh-range",4);
            if (iVar3 != 2) {
              _printk("<3>%s: Incorrect element size for qcom,soh-range, rc=%d\n","of_batterydata_read_soh_aged_profiles",iVar3);
              iVar3 = -0x16;
              goto LAB_0013291c;
            }
            iVar3 = of_property_read_variable_u32_array(lVar4,"qcom,soh-range",&local_78,2,0);
            if (iVar3 < 0) {
              _printk("<3>%s: Error in reading qcom,soh-range, rc=%d\n","of_batterydata_read_soh_aged_profiles",iVar3);
              goto LAB_0013291c;
            }
            if (((100 < (uint)local_78) || (100 < local_78._4_4_)) ||
               (local_78._4_4_ < (uint)local_78)) {
              _printk("<3>%s: Incorrect SOH range [%d %d]\n","of_batterydata_read_soh_aged_profiles");
              iVar3 = -0x22;
              goto LAB_0013291c;
            }
            puVar6 = (undefined4 *)(param_3 + uVar7 * 0xc);
            uVar7 = (ulong)((int)uVar7 + 1);
            *puVar6 = local_6c;
            puVar6[1] = (uint)local_78;
            puVar6[2] = local_78._4_4_;
          }
        }
        lVar4 = of_get_next_available_child(param_1,lVar4);
      } while (lVar4 != 0);
    }
    iVar3 = 0;
  }
LAB_0013291c:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- smb5_iio_get_prop @ 001329d8 ---- */

uint smb5_iio_get_prop(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ushort local_48 [2];
  byte local_44 [4];
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_38 = *(long *)(lVar5 + 0x5e0);
  local_40 = 0;
  local_44[0] = 0;
  local_48[0] = 0;
  *param_3 = 0;
  if (0xea < param_2) {
code_r0x00133014:
    _printk("<3>get prop %d is not supported\n",param_2);
    uVar1 = 0xffffffea;
    goto LAB_00132f5c;
  }
  uVar1 = 1;
  switch(param_2) {
  case 0:
    uVar4 = *(undefined8 *)(param_1 + 0x510);
    pcVar6 = "PD_VOTER";
    goto LAB_00132e2c;
  case 1:
    uVar1 = smblib_get_usb_prop_typec_mode(param_1,param_3);
    goto LAB_00132e94;
  case 2:
    uVar1 = smblib_get_prop_typec_power_role(param_1,param_3);
    goto LAB_00132e94;
  case 3:
    uVar1 = smblib_get_prop_typec_cc_orientation(param_1,param_3);
    goto LAB_00132e94;
  case 4:
    uVar2 = *(uint *)(param_1 + 0x1158);
    break;
  case 5:
  case 0x21:
    uVar1 = smblib_get_charge_param(param_1,param_1 + 0xc0,&local_40);
    goto joined_r0x00132da4;
  default:
    goto code_r0x00133014;
  case 7:
    uVar2 = (uint)*(byte *)(param_1 + 0x1160);
    break;
  case 8:
    uVar4 = *(undefined8 *)(param_1 + 0x510);
    pcVar6 = "CTM_VOTER";
    goto LAB_00132e2c;
  case 9:
    uVar1 = smblib_get_charge_current(param_1,param_3);
    goto LAB_00132e94;
  case 10:
    if (*(int *)(param_1 + 0x1158) == 0) {
      *param_3 = *(uint *)(param_1 + 0x128c);
      *(undefined8 *)(param_1 + 0x1304) = 0;
      uVar1 = *param_3;
    }
    else {
      uVar1 = 9;
      *param_3 = 9;
    }
    _printk("<6>real_type=%d\n",uVar1);
    uVar1 = 1;
    goto code_r0x00132f9c;
  case 0xb:
    uVar2 = *(uint *)(param_1 + 0x1154);
    break;
  case 0xc:
    uVar2 = *(uint *)(param_1 + 0x1150);
    break;
  case 0xd:
    uVar2 = *(uint *)(param_1 + 0x119c);
    break;
  case 0xe:
    uVar2 = smblib_get_prop_connector_health(param_1);
    goto LAB_00132f90;
  case 0xf:
    uVar2 = *(uint *)(param_1 + 0x1268);
    if (uVar2 == 0) {
      uVar1 = smblib_get_prop_usb_voltage_max_design(param_1,&local_40);
      goto LAB_00132f4c;
    }
    break;
  case 0x10:
    mutex_lock(param_1 + 0x2c0);
    *param_3 = *(uint *)(param_1 + 0x1144);
    mutex_unlock(param_1 + 0x2c0);
    uVar1 = 1;
    goto code_r0x00132f9c;
  case 0x11:
    uVar2 = *(uint *)(param_1 + 0x1148);
    break;
  case 0x12:
    uVar2 = *(uint *)(param_1 + 0x460);
    break;
  case 0x13:
    uVar2 = (uint)*(byte *)(param_1 + 0x1234);
    break;
  case 0x14:
    uVar2 = *(byte *)(param_1 + 0x12dd) ^ 1;
    break;
  case 0x15:
    if (*(char *)(param_1 + 0x1237) == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 7;
      *param_3 = 6;
    }
    if (*(char *)(param_1 + 0x1238) != '\0') {
      uVar1 = 1;
      *param_3 = uVar2;
      goto code_r0x00132f9c;
    }
    goto LAB_00132e98;
  case 0x16:
    uVar1 = smblib_get_prop_vph_voltage_now(param_1,param_3);
    goto LAB_00132e94;
  case 0x17:
    uVar4 = *(undefined8 *)(param_1 + 0x510);
    pcVar6 = "THERMAL_THROTTLE_VOTER";
    goto LAB_00132e2c;
  case 0x18:
    uVar2 = smblib_get_skin_temp_status(param_1);
    goto LAB_00132f90;
  case 0x19:
  case 0x26:
  case 0x33:
  case 0x3d:
  case 0x40:
    goto code_r0x00132f9c;
  case 0x1a:
    uVar2 = (uint)*(byte *)(param_1 + 0x1280);
    break;
  case 0x1b:
    if (*(int *)(param_1 + 0x2b4) != 0) {
      uVar1 = smblib_read(param_1,*(int *)(param_1 + 0x2b4) + 0x58,local_44);
      if (uVar1 == 0) {
        uVar2 = (uint)local_44[0];
        break;
      }
      goto LAB_00132e94;
    }
    goto LAB_00132e98;
  case 0x1c:
    if (*(int *)(param_1 + 0x2b4) != 0) {
      uVar1 = smblib_batch_read(param_1,*(int *)(param_1 + 0x2b4) + 0x54,local_48,2);
      if (uVar1 == 0) {
        uVar2 = (uint)local_48[0] * 0x40e;
        break;
      }
      goto LAB_00132e94;
    }
    goto LAB_00132e98;
  case 0x1d:
    uVar1 = smblib_get_prop_typec_select_rp(param_1,param_3);
    goto LAB_00132e94;
  case 0x1e:
    uVar2 = (uint)*(byte *)(param_1 + 0x115c);
    break;
  case 0x1f:
    uVar2 = (uint)*(byte *)(param_1 + 0x1164);
    break;
  case 0x20:
    uVar2 = (uint)*(byte *)(param_1 + 0x115e);
    break;
  case 0x22:
    uVar1 = smblib_get_prop_input_voltage_settled(param_1,param_3);
    goto LAB_00132e94;
  case 0x23:
    uVar1 = smblib_get_prop_fcc_delta(param_1,param_3);
    goto LAB_00132e94;
  case 0x24:
    uVar2 = (uint)*(byte *)(param_1 + 0x12dd);
    break;
  case 0x25:
    if (*(int *)(param_1 + 0x111c) == 3) {
      uVar1 = schgm_flash_get_vreg_ok(param_1,param_3);
      goto LAB_00132e94;
    }
    goto LAB_00132e98;
  case 0x27:
    uVar2 = *(uint *)(param_1 + 0x1210);
    break;
  case 0x28:
    uVar1 = smblib_get_irq_status(param_1,param_3);
    goto LAB_00132e94;
  case 0x29:
  case 0x2e:
    lVar5 = param_1 + 0x20;
    goto LAB_00132d50;
  case 0x2a:
    lVar5 = param_1 + 0x70;
    goto LAB_00132d50;
  case 0x2b:
    uVar2 = *(uint *)(param_1 + 0x1270);
    break;
  case 0x2c:
    uVar2 = *(uint *)(param_1 + 0x464);
    break;
  case 0x2d:
    lVar5 = param_1 + 0x48;
LAB_00132d50:
    uVar1 = smblib_get_charge_param(param_1,lVar5,param_3);
    goto LAB_00132e94;
  case 0x2f:
    uVar1 = smblib_get_icl_current(param_1,param_3);
    goto LAB_00132e94;
  case 0x30:
    uVar1 = smblib_get_prop_smb_health(param_1);
    *param_3 = uVar1;
    goto joined_r0x00132d88;
  case 0x31:
    uVar1 = smblib_get_prop_voltage_wls_output(param_1,&local_40);
joined_r0x00132da4:
    if (uVar1 == 0) {
      uVar2 = (uint)local_40;
      break;
    }
    goto LAB_00132e94;
  case 0x32:
    uVar2 = 3;
    break;
  case 0x34:
    uVar2 = (uint)*(byte *)(param_1 + 0x127c);
    break;
  case 0x35:
    uVar1 = smblib_get_prop_charger_temp(param_1,param_3);
    goto LAB_00132e94;
  case 0x36:
    uVar2 = *(uint *)(param_1 + 0x11e0);
    break;
  case 0x37:
    uVar1 = smblib_get_prop_input_current_limited(param_1,param_3);
    goto LAB_00132e94;
  case 0x38:
    uVar2 = (uint)*(byte *)(param_1 + 0x1195);
    break;
  case 0x39:
    uVar1 = smblib_get_prop_batt_charge_done(param_1,param_3);
    goto LAB_00132e94;
  case 0x3a:
    uVar4 = *(undefined8 *)(param_1 + 0x520);
    pcVar6 = "USER_VOTER";
LAB_00132e2c:
    uVar2 = get_client_vote(uVar4,pcVar6);
    goto LAB_00132f90;
  case 0x3b:
    uVar1 = smblib_get_prop_ship_mode(param_1,param_3);
    goto LAB_00132e94;
  case 0x3c:
    uVar1 = smblib_get_die_health(param_1,param_3);
    goto LAB_00132e94;
  case 0x3e:
    uVar2 = *(uint *)(param_1 + 0x12bc);
    break;
  case 0x3f:
    uVar2 = *(uint *)(param_1 + 0x11d0);
    break;
  case 0x41:
    uVar2 = (uint)*(byte *)(param_1 + 0x11f8);
    break;
  case 100:
    uVar1 = smblib_get_usb_prop_typec_accessory_mode(param_1,param_3);
LAB_00132e94:
    if ((int)uVar1 < 0) {
LAB_00132f5c:
      _printk("<3>Couldn't get prop %d rc = %d\n",param_2,uVar1);
    }
    else {
LAB_00132e98:
      uVar1 = 1;
    }
    goto code_r0x00132f9c;
  case 0x78:
    uVar2 = *(uint *)(param_1 + 0x1310);
    break;
  case 0x7b:
    uVar2 = *(byte *)(param_1 + 0x11f0) ^ 1;
    break;
  case 0xac:
    uVar2 = *(uint *)(param_1 + 0x1304);
    break;
  case 0xad:
    uVar2 = *(uint *)(param_1 + 0x1308);
    break;
  case 0xb2:
    uVar1 = smblib_get_prop_battery_cp_input_suspend(param_1,&local_40);
    goto LAB_00132f4c;
  case 0xb3:
    uVar1 = smblib_get_prop_battery_charging_enabled(param_1,&local_40);
    goto LAB_00132f4c;
  case 0xbd:
    uVar4 = *(undefined8 *)(param_1 + 0x508);
    goto LAB_00132f18;
  case 0xbe:
    uVar4 = *(undefined8 *)(param_1 + 0x4f8);
LAB_00132f18:
    uVar2 = get_client_vote_locked(uVar4,"QNOVO_VOTER");
    goto LAB_00132f90;
  case 0xbf:
    uVar1 = smblib_get_prop_battery_charging_limited(param_1,&local_40);
    goto LAB_00132f4c;
  case 0xc0:
    uVar1 = smblib_get_quick_charge_type(param_1,&local_40);
LAB_00132f4c:
    *param_3 = (uint)local_40;
joined_r0x00132d88:
    if (-1 < (int)uVar1) goto LAB_00132e98;
    goto LAB_00132f5c;
  case 0xc2:
    uVar2 = smblib_get_fastcharge_mode(param_1);
    goto LAB_00132f90;
  case 0xc3:
    iVar3 = get_client_vote(*(undefined8 *)(param_1 + 0x510),"USB_PSY_VOTER");
    local_40 = CONCAT44(local_40._4_4_,iVar3);
    *param_3 = iVar3 / 1000;
    _printk("<6>%s:mtbf_current is %d \n","smb5_iio_get_prop");
    uVar1 = 1;
    goto code_r0x00132f9c;
  case 0xc5:
    uVar2 = smblib_get_recharge_mode(param_1);
LAB_00132f90:
    uVar1 = 1;
    *param_3 = uVar2;
    goto code_r0x00132f9c;
  case 0xea:
    if (*(char *)(param_1 + 0x12c9) != '\0') {
      uVar1 = 1;
      *param_3 = 1;
      goto code_r0x00132f9c;
    }
    if (*(char *)(param_1 + 0x12ca) != '\0') {
      uVar2 = 2;
      break;
    }
    goto LAB_00132e98;
  }
  uVar1 = 1;
  *param_3 = uVar2;
code_r0x00132f9c:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ---- smb5_iio_set_prop @ 001330c0 ---- */

int smb5_iio_set_prop(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_54;
  ulong local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_48 = *(long *)(lVar5 + 0x5e0);
  uVar1 = *(uint *)(param_1 + 0x128c);
  local_50 = 0;
  local_54 = 0;
  if (0xc5 < param_2) {
code_r0x001337d4:
    _printk("<3>get prop %d is not supported\n",param_2);
LAB_001337e4:
    iVar3 = -0x16;
    goto LAB_001337e8;
  }
  switch(param_2) {
  case 0:
    iVar3 = smblib_set_prop_pd_current_max(param_1,param_3);
    break;
  default:
    goto code_r0x001337d4;
  case 2:
    iVar3 = smblib_set_prop_typec_power_role(param_1,param_3);
    break;
  case 4:
    iVar3 = smblib_set_prop_pd_active(param_1,param_3);
    break;
  case 8:
    iVar3 = vote(*(undefined8 *)(param_1 + 0x510),"CTM_VOTER",~param_3 >> 0x1f,param_3);
    break;
  case 0xb:
    iVar3 = smblib_set_prop_pd_voltage_max(param_1,param_3);
    break;
  case 0xc:
    iVar3 = smblib_set_prop_pd_voltage_min(param_1,param_3);
    break;
  case 0xe:
    lVar5 = *(long *)(param_1 + 0x420);
    *(uint *)(param_1 + 0x12c4) = param_3;
    goto joined_r0x00133494;
  case 0xf:
    smblib_set_prop_usb_voltage_max_limit(param_1,param_3);
    goto LAB_00133750;
  case 0x12:
    iVar3 = 0;
    *(uint *)(param_1 + 0x460) = param_3;
    goto LAB_00133754;
  case 0x17:
    uVar4 = is_client_vote_enabled(*(undefined8 *)(param_1 + 0x510),"THERMAL_THROTTLE_VOTER");
    if ((uVar4 & 1) == 0) {
      iVar3 = get_effective_result(*(undefined8 *)(param_1 + 0x510));
      *(int *)(param_1 + 0x126c) = iVar3;
    }
    else {
      iVar3 = get_client_vote(*(undefined8 *)(param_1 + 0x510),"THERMAL_THROTTLE_VOTER");
    }
    if (499999 < (int)(iVar3 + param_3)) {
      iVar3 = vote(*(undefined8 *)(param_1 + 0x510),"THERMAL_THROTTLE_VOTER",
                   iVar3 + param_3 != *(int *)(param_1 + 0x126c));
      break;
    }
    goto LAB_001337e4;
  case 0x19:
    del_timer_sync(param_1 + 0x10d8);
    *(undefined1 *)(param_1 + 0x1280) = 0;
    smblib_rerun_apsd(param_1);
    goto LAB_00133750;
  case 0x1d:
    iVar3 = smblib_set_prop_typec_select_rp(param_1,param_3);
    break;
  case 0x1e:
    iVar3 = smblib_set_prop_pd_in_hard_reset(param_1,param_3);
    break;
  case 0x1f:
    iVar3 = 0;
    *(bool *)(param_1 + 0x1164) = param_3 != 0;
    goto LAB_00133754;
  case 0x20:
    iVar3 = smblib_set_prop_pr_swap_in_progress(param_1,param_3);
    break;
  case 0x24:
    if ((*(int *)(param_1 + 0x111c) == 3) && (*(byte *)(param_1 + 0x12dd) != param_3)) {
      *(bool *)(param_1 + 0x12dd) = param_3 != 0;
      iVar3 = smblib_get_prop_usb_present(param_1,&local_50);
      if (iVar3 < 0) {
        _printk("<3>Failed to get USB preset status rc=%d\n",iVar3);
        if ((int)local_50 != 0) goto LAB_001332d8;
LAB_00133818:
        vote(*(undefined8 *)(param_1 + 0x510),"SW_ICL_MAX_VOTER",1,100000);
        lVar5 = *(long *)(param_1 + 0x418);
      }
      else {
        if ((int)local_50 == 0) goto LAB_00133818;
LAB_001332d8:
        uVar9 = 4;
        if (*(char *)(param_1 + 0x12dd) != '\0') {
          uVar9 = 8;
        }
        iVar3 = smblib_force_vbus_voltage(param_1,uVar9);
        if (iVar3 < 0) {
          _printk("<3>Failed to force 5V\n");
          lVar5 = *(long *)(param_1 + 0x418);
        }
        else {
          *(undefined4 *)(param_1 + 0x12bc) = 0;
          lVar5 = *(long *)(param_1 + 0x418);
        }
      }
      if (lVar5 != 0) {
        power_supply_changed();
      }
      break;
    }
    goto LAB_00133750;
  case 0x26:
    iVar3 = smblib_toggle_smb_en(param_1,param_3);
    break;
  case 0x27:
    uVar6 = *(undefined8 *)(param_1 + 0x4f8);
    *(uint *)(param_1 + 0x1210) = param_3;
    goto LAB_001333a8;
  case 0x29:
    vote_override(*(undefined8 *)(param_1 + 0x500),"CC_MODE_VOTER",~param_3 >> 0x1f,param_3);
    if (-1 < (int)param_3) {
      *(uint *)(param_1 + 0x112c) = param_3;
    }
    if ((int)param_3 < 0) {
      vote(*(undefined8 *)(param_1 + 0x500),"WLS_PL_CHARGING_VOTER",0,0);
    }
LAB_001333a4:
    uVar6 = *(undefined8 *)(param_1 + 0x4f8);
LAB_001333a8:
    rerun_election(uVar6);
    goto LAB_00133750;
  case 0x2a:
    vote_override(*(undefined8 *)(param_1 + 0x510),"CC_MODE_VOTER",~param_3 >> 0x1f,param_3);
    if ((uVar1 & 0xfffffffe) == 0xe) goto LAB_001333a4;
    goto LAB_00133750;
  case 0x2c:
    iVar3 = smblib_set_prop_thermal_overheat(param_1,param_3);
    break;
  case 0x2d:
    lVar5 = param_1 + 0x48;
    goto LAB_00133744;
  case 0x2e:
    iVar3 = smblib_get_qc3_main_icl_offset(param_1,&local_54);
    if (iVar3 < 0) {
      local_54 = 0;
    }
    lVar5 = param_1 + 0x20;
    param_3 = local_54 + param_3;
LAB_00133744:
    iVar3 = smblib_set_charge_param(param_1,lVar5,param_3);
    break;
  case 0x2f:
    iVar3 = smblib_set_icl_current(param_1,param_3);
    break;
  case 0x31:
    local_50 = (ulong)param_3;
    iVar3 = smblib_set_prop_voltage_wls_output(param_1,&local_50);
    break;
  case 0x33:
    iVar3 = smblib_set_prop_dc_reset(param_1);
    break;
  case 0x37:
    iVar3 = 0;
    *(uint *)(param_1 + 0x11b0) = param_3;
    goto LAB_00133754;
  case 0x3a:
    uVar6 = *(undefined8 *)(param_1 + 0x520);
    bVar2 = param_3 != 0;
    pcVar7 = "USER_VOTER";
    goto LAB_00133724;
  case 0x3b:
    if (param_3 != 0) {
      if (*(long *)(param_1 + 0x278) != 0) {
        iio_write_channel_raw(*(undefined8 *)(*(long *)(param_1 + 0x278) + 0x10),param_3);
      }
      iVar3 = smblib_set_prop_ship_mode(param_1,param_3);
      break;
    }
    goto LAB_00133750;
  case 0x3c:
    lVar5 = *(long *)(param_1 + 0x418);
    *(uint *)(param_1 + 0x12c0) = param_3;
joined_r0x00133494:
    if (lVar5 != 0) {
      power_supply_changed();
    }
    goto LAB_00133750;
  case 0x3d:
    iVar3 = smblib_run_aicl(param_1,0);
    break;
  case 0x3e:
    if (*(char *)(param_1 + 0x1301) != '\0') {
      iVar3 = smblib_dp_dm_cp(param_1,param_3);
      break;
    }
    goto LAB_00133750;
  case 0x3f:
    iVar3 = smblib_set_prop_rechg_soc_thresh(param_1,param_3);
    break;
  case 0x40:
    vote(*(undefined8 *)(param_1 + 0x528),"FORCE_RECHARGE_VOTER",1,0);
    msleep(0x32);
    uVar6 = *(undefined8 *)(param_1 + 0x528);
    pcVar7 = "FORCE_RECHARGE_VOTER";
    goto LAB_00133720;
  case 0x41:
    iVar3 = 0;
    *(bool *)(param_1 + 0x11f8) = param_3 != 0;
    goto LAB_00133754;
  case 0x78:
    local_50 = (ulong)param_3;
    *(uint *)(param_1 + 0x1310) = param_3;
    iVar3 = smblib_set_prop_input_suspend(param_1,&local_50);
    break;
  case 0x7b:
    smblib_moisture_detection_enable(param_1,param_3);
    goto LAB_00133750;
  case 0xac:
    goto code_r0x001337c4;
  case 0xad:
    iVar3 = 0;
    *(uint *)(param_1 + 0x1308) = param_3;
    goto LAB_00133754;
  case 0xb3:
    uVar6 = *(undefined8 *)(param_1 + 0x510);
    pcVar7 = "MAIN_ICL_MIN_VOTER";
    if (param_3 != 0) goto LAB_00133720;
    bVar2 = true;
    uVar8 = 100000;
    goto LAB_00133728;
  case 0xbd:
    if (param_3 != 0xffffffea) {
      vote(*(undefined8 *)(param_1 + 0x508),"QNOVO_VOTER",1,param_3);
      uVar6 = *(undefined8 *)(param_1 + 0x508);
      goto LAB_00133718;
    }
    vote(*(undefined8 *)(param_1 + 0x508),"BATT_PROFILE_VOTER",1,*(undefined4 *)(param_1 + 0x12b4));
    uVar6 = *(undefined8 *)(param_1 + 0x508);
LAB_00133618:
    pcVar7 = "QNOVO_VOTER";
    goto LAB_00133720;
  case 0xbe:
    vote(*(undefined8 *)(param_1 + 0x520),"PL_QNOVO_VOTER",
         param_3 != 0xffffffea && (int)param_3 < 2000000,0);
    if (param_3 == 0xffffffea) {
      vote(*(undefined8 *)(param_1 + 0x4f8),"BATT_PROFILE_VOTER",1,*(undefined4 *)(param_1 + 0x12b0)
          );
      uVar6 = *(undefined8 *)(param_1 + 0x4f8);
      goto LAB_00133618;
    }
    vote(*(undefined8 *)(param_1 + 0x4f8),"QNOVO_VOTER",1,param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x4f8);
LAB_00133718:
    pcVar7 = "BATT_PROFILE_VOTER";
LAB_00133720:
    bVar2 = false;
LAB_00133724:
    uVar8 = 0;
LAB_00133728:
    vote(uVar6,pcVar7,bVar2,uVar8);
    goto LAB_00133750;
  case 0xbf:
    if (*(char *)(param_1 + 0x1301) != '\0') {
      if (param_3 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x510);
        uVar8 = 0;
LAB_001337ac:
        uVar9 = 2000000;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x510);
        if (uVar1 != 0xe) {
          uVar8 = 1;
          goto LAB_001337ac;
        }
        uVar9 = 500000;
        uVar8 = 1;
      }
      vote(uVar6,"MAIN_CHG_VOTER",uVar8,uVar9);
      rerun_election(*(undefined8 *)(param_1 + 0x510));
    }
    goto code_r0x001337c4;
  case 0xc2:
    local_50 = (ulong)param_3;
    iVar3 = smblib_set_fastcharge_mode(param_1,param_3);
    break;
  case 0xc3:
    *(uint *)(param_1 + 0x1314) = param_3 * 1000;
    iVar3 = smblib_set_prop_sdp_current_max(param_1);
    break;
  case 0xc5:
    local_50 = (ulong)param_3;
    iVar3 = smblib_set_recharge_mode(param_1,param_3);
  }
  if (iVar3 < 0) {
LAB_001337e8:
    _printk("<3>Couldn't set prop %d rc = %d\n",param_2,iVar3);
  }
  else {
LAB_00133750:
    iVar3 = 0;
  }
LAB_00133754:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
code_r0x001337c4:
  iVar3 = 0;
  *(uint *)(param_1 + 0x1304) = param_3;
  goto LAB_00133754;
}



/* ---- get_ext_channels @ 00133860 ---- */

long get_ext_channels(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *in_x18;
  int iVar3;
  long lVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((ulong)(long)(int)param_3 >> 0x3d == 0) &&
     (lVar1 = devm_kmalloc(param_1,-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)param_3 << 3,0xdc0), lVar1 != 0)) {
    if (0 < (int)param_3) {
      lVar4 = 0;
      do {
        uVar2 = devm_iio_channel_get(param_1,*(undefined8 *)(param_2 + lVar4));
        *(ulong *)(lVar1 + lVar4) = uVar2;
        if (0xfffffffffffff000 < uVar2) {
          iVar3 = (int)*(ulong *)(lVar1 + lVar4);
          if (iVar3 != -0x205) {
            _dev_err(param_1,"%s channel unavailable, %d\n",*(undefined8 *)(param_2 + lVar4),
                     *(ulong *)(lVar1 + lVar4) & 0xffffffff);
          }
          devm_kfree(param_1,lVar1);
          return (long)iVar3;
        }
        lVar4 = lVar4 + 8;
      } while ((ulong)param_3 * 8 != lVar4);
    }
  }
  else {
    lVar1 = -0xc;
  }
  return lVar1;
}



/* ---- init_module @ 00133a88 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  __platform_driver_register(&smb5_driver,&__this_module);
  return;
}



/* ---- cleanup_module @ 00133abc ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  platform_driver_unregister(&smb5_driver);
  return;
}


/* functions: 371 ok, 0 failed */
