/* Decompiled with Ghidra from pd_policy_manager.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] fast_work_time
// [.rodata] stable_work_time
// [.rodata] fast_tune_step
// [.rodata] stable_tune_step
// [.rodata] status
// [.rodata] mi,pd-bat-curr-max
// [.rodata] mi,pd-bus-volt-max
// [.rodata] 3[USBPD-PM]: %s: usbpd_iio_init start

// [.rodata] usb_psy_change_work
// [.rodata] 6[USBPD-PM]: %s: curr_ibus_lmt:%d

// [.rodata] 6[USBPD-PM]: %s: entry2 reduce request_voltage:%d, request_current:%d

// [.rodata] 6[USBPD-PM]: %s: adapter volt tune ok, retry %d times

// [.rodata] update_smart_chg_cp_workmode
// [.rodata] usbpd_get_cp_workmode
// [.rodata] 3[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d

// [.rodata] 6[USBPD-PM]: %s: pd_active = %d

// [.rodata] PD_PM_STATE_FC2_TUNE
// [.rodata] PD_PM_STATE_FC2_EXIT
// [.rodata] 6[USBPD-PM]: %s: N7:enter HOLD state

// [.rodata] 6[USBPD-PM]: %s: Couldn't get batt temp prop:%d

// [.rodata] usbpd_pm_fc2_charge_algo
// [.rodata] usbpd_psy_notifier_cb
// [.rodata] bq_vbus_present
// [.rodata] 3[USBPD-PM]: %s: %s enter

// [.rodata] 6[USBPD-PM]: %s: N7:need switch cp mode

// [.rodata] 6[USBPD-PM]: %s: entry2 add request_voltage:%d, request_current:%d

// [.rodata] 6[USBPD-PM]: %s: Move to switch charging:%d

// [.rodata] 6[USBPD-PM]: %s: pm_config.bat_volt_lp_lmt:%d

// [.rodata] mi,cp-sec-enable
// [.rodata] sc_battery_present
// [.rodata] 3[USBPD-PM]: %s: set battey charging en = %d, ret = %d

// [.rodata] sc_alarm_status
// [.rodata] 6[USBPD-PM]: %s: N7:stop cp statemachine

// [.rodata] 6[USBPD-PM]: %s: N7:keep HOLD state

// [.rodata] 6[USBPD-PM]: %s: N7:smart chg ctrl val = %d

// [.rodata] bq_charging_enabled
// [.rodata] bq_bus_current
// [.rodata] battery_charging_enabled
// [.rodata] pd_policy_parse_dt
// [.rodata] PD_PM_STATE_FC2_ENTRY_1
// [.rodata] pd_disable_cp_by_jeita_status
// [.rodata] BQ_TAPER_FCC_VOTER
// [.rodata] LOW_FAST
// [.rodata] bq_alarm_status
// [.rodata] sc_battery_voltage
// [.rodata] bq_battery_voltage
// [.rodata] bq_battery_current
// [.rodata] mi,pd-bus-curr-compensate
// [.rodata] 6[USBPD-PM]: %s: Move to stop charging:%d

// [.rodata] 3[USBPD-PM]: %s: batt psy not found!

// [.rodata] NIGHT_CHARGING_VOTER
// [.rodata] 3[USBPD-PM]: %s: cp disabled due to other reason, return

// [.rodata] 3[USBPD-PM]: %s: pd-bus-curr-compensate property missing, use default val

// [.rodata] usbpd_pd_contact
// [.rodata] usbpd_pm_enable_sw
// [.rodata] battery
// [.rodata] 6[USBPD-PM]: %s: batt_volt-%d is ok, start flash charging

// [.rodata] 3[USBPD-PM]: %s: jeita returned to normal, batt_temp:%d

// [.rodata] sc_battery_temperature
// [.rodata] sc_vbus_error_status
// [.rodata] bq_present
// [.rodata] bq_status
// [.rodata] 3[USBPD-PM]: %s: Failed to get usb pd active state

// [.rodata] 6[USBPD-PM]: %s: is_temp_out_fc2_range:%d

// [.rodata] 6[USBPD-PM]: %s: batt_volt %d, waiting...

// [.rodata] 6[USBPD-PM]: %s: N7:ibat_request = %d, 2_1 mode = %d, 1_1 mode = %d

// [.rodata] sc_bus_current
// [.rodata] sc_fault_status
// [.rodata] 6[USBPD-PM]: %s: pm_config.bus_curr_compensate:%d

// [.rodata] PD_PM_STATE_HOLD
// [.rodata] 6[USBPD-PM]: %s: N7:switch PD_PM_STATE_ENTRY state

// [.rodata] 3[USBPD-PM]: %s: after cool and warm state recharge, batt_temp:%d,vbat_volt=%d,bat_volt_lp_lmt=%d,bq_cool_warm_done=%d

// [.rodata] 6[USBPD-PM]: %s: N7:get smart chg ctrl val = %d, night_charging ctrl val = %d

// [.rodata] 3[USBPD-PM]: %s: [cp_qc_psy_notifier_cb] BQ25960

// [.rodata] 3[USBPD-PM]: %s: voltage_max is not ready fail ret = %d

// [.rodata] usbpd_get_iio_channel
// [.rodata] sc_die_temperature
// [.rodata] 3[USBPD-PM]: %s: Failed to get battery psy.

// [.rodata] sc_battery_current
// [.rodata] is_smb_chan_valid
// [.rodata] apdo_volt
// [.rodata] mi,pd-bat-volt-max
// [.rodata] 6[USBPD-PM]: %s: pm_config.bus_volt_lp_lmt:%d

// [.rodata] 3[USBPD-PM]: %s: Failed to fetch pdo info

// [.rodata] 3[USBPD-PM]: %s: Failed to check sw enabled, ret = %d

// [.rodata] 6[USBPD-PM]: %s: N7:dive rate = %d in state FC2_ENTRY_2

// [.rodata] pd_get_batt_current_thermal_level
// [.rodata] 3[USBPD-PM]: %s: bat_ocp_fault:%d, bus_ocp_fault:%d, bat_ovp_fault:%d,bus_ovp_fault:%d

// [.rodata] sc_bus_temperature
// [.rodata] 6[USBPD-PM]: %s: pm_config.bat_curr_lp_lmt:%d

// [.rodata] 6[USBPD-PM]: %s: thermal too high or batt temp is out of fc2 range, waiting...

// [.rodata] 3[USBPD-PM]: %s: Failed to get input suspend, rc = %d

// [.rodata] 6[USBPD-PM]: %s: N7:release ctrl

// [.rodata] bq_battery_present
// [.rodata] bq_bus_voltage
// [.rodata] cp_input_suspend
// [.rodata] 6[USBPD-PM]: %s: pm_config.bus_curr_lp_lmt:%d

// [.rodata] 6[USBPD-PM]: %s: Failed to tune adapter volt into valid range, charge with switching charger

// [.rodata] 6[USBPD-PM]: %s: request_voltage:%d, request_current:%d

// [.rodata] 3[USBPD-PM]: %s: cp.charge_enabled:%d

// [.rodata] sc_set_cp_workmode
// [.rodata] bq_battery_temperature
// [.rodata] 3[USBPD-PM]: %s: pd-bus-volt-max property missing, use default val

// [.rodata] PD_PM_STATE_FC2_ENTRY
// [.rodata] 6[USBPD-PM]: %s: batt_volt %d is too high for cp,					charging with switch charger

// [.rodata] 6[USBPD-PM]: %s: Couldn't get fastcharge mode:%d

// [.rodata] SMART_CHARGING_VOTER
// [.rodata] 3[USBPD-PM]: %s: iio_type %d is not supported

// [.rodata] present
// [.rodata] 3[USBPD-PM]: %s: pd-bat-volt-max property missing, use default val

// [.rodata] 6[USBPD-PM]: %s: PPS supported, preferred APDO pos:%d, max volt:%d, current:%d

// [.rodata] 6[USBPD-PM]: %s: vbat:%d,lmt:%d; ibat:%d,lmt:%d; ibus:%d,lmt:%d
// [.rodata] is_warm_charge
// [.rodata] 3[USBPD-PM]: %s: [cp_qc_psy_notifier_cb] SC8541

// [.rodata] 3[USBPD-PM]: %s: qc3.0 can't find charge pump

// [.rodata] charging_enabled
// [.rodata] sc_vbus_present
// [.rodata] usbpd_pm_move_state
// [.rodata] 6[USBPD-PM]: %s: N7:dive rate = %d in state FC2_ENTRY_1

// [.rodata] usbpd_set_cp_workmode
// [.rodata] 6[USBPD-PM]: %s: tune adapter vbus_volt %d , vbat_volt %d tune_vbus_retry=%d

// [.rodata] 6[USBPD-PM]: %s: Move to switch charging, will try to recover flash charging:%d

// [.rodata] pdm_multi_mode_switch
// [.rodata] CHG_DISABLE
// [.rodata] 3[USBPD-PM]: %s: fcc_ibatt_diff:%d sicl_ibus_diff:%d

// [.rodata] 3[USBPD-PM]: %s: Couldn't parse device tree rc=%d

// [.rodata] mi,pd-bus-curr-max
// [.rodata] mi,pd-ffc-bat-volt-max
// [.rodata] 6[USBPD-PM]: %s: entry1 request_voltage:%d, request_current:%d

// [.rodata] bq_vbus_error_status
// [.rodata] usbpd_pm_probe
// [.rodata] usbpd_pm_evaluate_src_caps
// [.rodata] 6[USBPD-PM]: %s: N7:get fcc_limit = %d, ibus_limit = %d

// [.rodata] cycle_count_reduce_voltage
// [.rodata] apdo_curr
// [.rodata] 3[USBPD-PM]: %s: usbpd_iio_init end

// [.rodata] PD_PM_STATE_ENTRY
// [.rodata] bq_die_temperature
// [.rodata] 3[USBPD-PM]: %s: couldn't get usbpd device

// [.rodata] 6[USBPD-PM]: %s: system thermal level too high or batt temp is out of fc2 range

// [.rodata] bq_set_cp_workmode
// [.rodata] 6[USBPD-PM]: %s: Not qualified PPS adapter

// [.rodata] 3[USBPD-PM]: %s: bat_therm_fault:%d

// [.rodata] 6[USBPD-PM]: %s: step_vbat:%d step_ibat:%d step_ibus:%d sw_ctrl_steps:%d hw_ctrl_steps:%d steps:%d

// [.rodata] sc_bus_voltage
// [.rodata] 6[USBPD-PM]: %s: state change:%s -> %s

// [.rodata] usbpd_update_ibat_curr
// [.rodata] 6[USBPD-PM]: %s: because smart ctrl, cp enter hold state = %d

// [.rodata] bq_fault_status
// [.rodata] 6[USBPD-PM]: %s: N7:start cp statemachine

// [.rodata] usbpd_pm_check_sw_enabled
// [.rodata] usbpd_pm_sm
// [.rodata] 6[USBPD-PM]: %s: N7: update cp mode, get cp mode is %d, 2_1 mode is %d, 1_1 mode is %d, low_fast_working_flag is %d

// [.rodata] is_cool_charge
// [.rodata] 6[USBPD-PM]: %s: N7:set cp workmode is %d 

// [.rodata] is_cp_chan_valid
// [.rodata] usbpd_check_usb_psy
// [.rodata] PD_PM_STATE_FC2_ENTRY_2
// [.rodata] PD_PM_STATE_FC2_ENTRY_3
// [.rodata] 6[USBPD-PM]: %s: Failed to tune adapter volt into valid range, retry again

// [.rodata] 3[USBPD-PM]: %s: %s failed to get low_fast_votable

// [.rodata] 3[USBPD-PM]: %s: jeita lower limit reached, batt_temp:%d

// [.rodata] 3[USBPD-PM]: %s: charge pump taper charging done

// [.rodata] usbpd_set_iio_channel
// [.rodata] 3[USBPD-PM]: %s: pd-bat-curr-max property missing, use default val

// [.rodata] 3[USBPD-PM]: %s: usb psy not found!

// [.rodata] 3[USBPD-PM]: %s: %s failed to get low_fast_working_flag

// [.rodata] bq_bus_temperature
// [.rodata] pd_active
// [.rodata] 3[USBPD-PM]: %s: device tree node missing

// [.rodata] 6[USBPD-PM]: %s: pdpm->ffc_bat_volt_max:%d

// [.rodata] usbpd_iio_init
// [.rodata] 3[USBPD-PM]: %s: jeita upper limit reached, batt_temp:%d

// [.rodata] 6[USBPD-PM]: %s: bq set taper fcc to : %d uA

// [.rodata] 6[USBPD-PM]: %s: N7:get cp workmode is %d 

// [.rodata] 3[USBPD-PM]: %s: pd-bus-curr-max property missing, use default val

// [.rodata] usbpd_check_batt_psy
// [.rodata] 6[USBPD-PM]: %s: cool warm overcharge

// [.modinfo] parmtype=fast_work_time:int
// [.modinfo] parmtype=stable_work_time:int
// [.modinfo] parmtype=fast_tune_step:int
// [.modinfo] parmtype=stable_tune_step:int
// [.modinfo] description=USB Power Delivery Policy Driver
// [.modinfo] license=GPL v2
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=pd_policy_manager
// [.modinfo] intree=Y
// [.modinfo] depends=qcom-pmic-voter,usbpd
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] pd_policy_manager
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] system_wq
// [__versions] kmalloc_caches
// [__versions] param_ops_int
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] platform_driver_unregister
// [__versions] cancel_work_sync
// [__versions] cancel_delayed_work
// [__versions] power_supply_unreg_notifier
// [__versions] _raw_spin_unlock_irqrestore
// [__versions] queue_work_on
// [__versions] _raw_spin_lock_irqsave
// [__versions] __msecs_to_jiffies
// [__versions] get_client_vote
// [__versions] get_effective_result
// [__versions] find_votable
// [__versions] ktime_get
// [__versions] usbpd_select_pdo
// [__versions] power_supply_get_property
// [__versions] cancel_delayed_work_sync
// [__versions] queue_delayed_work_on
// [__versions] usbpd_get_src_cap_id
// [__versions] usbpd_fetch_pdo
// [__versions] smb_get_usbpd
// [__versions] devm_kmalloc
// [__versions] of_find_property
// [__versions] of_property_read_variable_u32_array
// [__versions] kmem_cache_alloc_trace
// [__versions] power_supply_reg_notifier
// [__versions] delayed_work_timer_fn
// [__versions] init_timer_key
// [__versions] power_supply_get_by_name
// [__versions] __platform_driver_register
// [__versions] iio_channel_get
// [__versions] iio_write_channel_raw
// [__versions] iio_read_channel_processed
// [__versions] _printk
// [__versions] ___ratelimit
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .rela.exit.text
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] .bss
// [.shstrtab] __versions
// [.shstrtab] .rela.data.usbpd_pm_driver
// [.shstrtab] .modinfo
// [.shstrtab] .rela__param
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.rodata.cp_iio_chan_name
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] power_supply_get_property
// [.strtab] of_find_property
// [.strtab] usbpd_pm_sm.tune_vbus_retry
// [.strtab] init_timer_key
// [.strtab] of_property_read_variable_u32_array
// [.strtab] usbpd_pm_sm.stop_sw
// [.strtab] usbpd_pm_enable_sw
// [.strtab] iio_write_channel_raw
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] usbpd_pm_sm.retry_count
// [.strtab] param_ops_int
// [.strtab] get_effective_result
// [.strtab] delayed_work_timer_fn.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] usb_psy_change_work.9dd61d1666a507981f34d36e5495bdac.cfi_jt
// [.strtab] usbpd_pm_remove.9dd61d1666a507981f34d36e5495bdac.cfi_jt
// [.strtab] usbpd_pm_probe.9dd61d1666a507981f34d36e5495bdac.cfi_jt
// [.strtab] usbpd_pm_workfunc.9dd61d1666a507981f34d36e5495bdac.cfi_jt
// [.strtab] usbpd_psy_notifier_cb.9dd61d1666a507981f34d36e5495bdac.cfi_jt
// [.strtab] ___ratelimit
// [.strtab] usbpd_pm_fc2_charge_algo.ibus_limit
// [.strtab] usbpd_pm_fc2_charge_algo.fcc_limit
// [.strtab] iio_channel_get
// [.strtab] ktime_get
// [.strtab] usbpd_pm_sm.g_status
// [.strtab] pd_disable_cp_by_jeita_status
// [.strtab] usbpd_set_iio_channel._rs
// [.strtab] usbpd_get_iio_channel._rs
// [.strtab] usbpd_pm_evaluate_src_caps
// [.strtab] ____versions
// [.strtab] __msecs_to_jiffies
// [.strtab] kmalloc_caches
// [.strtab] pm_str
// [.strtab] usbpd_pm_sm.recover
// [.strtab] usbpd_pm_driver
// [.strtab] platform_driver_unregister
// [.strtab] __platform_driver_register
// [.strtab] fc2_taper_timer
// [.strtab] usbpd_pm_fc2_charge_algo.cool_warm_overcharge_timer
// [.strtab] ibus_lmt_change_timer
// [.strtab] power_supply_unreg_notifier
// [.strtab] power_supply_reg_notifier
// [.strtab] system_wq
// [.strtab] __param_str_fast_tune_step
// [.strtab] __param_fast_tune_step
// [.strtab] __param_str_stable_tune_step
// [.strtab] __param_stable_tune_step
// [.strtab] msleep
// [.strtab] usbpd_select_pdo
// [.strtab] usbpd_fetch_pdo
// [.strtab] queue_work_on
// [.strtab] queue_delayed_work_on
// [.strtab] delayed_work_timer_fn
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] usbpd_set_iio_channel
// [.strtab] usbpd_get_iio_channel
// [.strtab] usbpd_pm_fc2_charge_algo.g_smartchg_val
// [.strtab] usbpd_pm_fc2_charge_algo.g_nightchg_val
// [.strtab] _printk
// [.strtab] usb_psy_change_work
// [.strtab] cancel_delayed_work
// [.strtab] __cfi_check
// [.strtab] usbpd_pm_of_match
// [.strtab] usbpd_psy_notifier_cb.first_flag
// [.strtab] usbpd_pm_remove
// [.strtab] _raw_spin_lock_irqsave
// [.strtab] get_client_vote
// [.strtab] _raw_spin_unlock_irqrestore
// [.strtab] __param_str_fast_work_time
// [.strtab] __param_fast_work_time
// [.strtab] __param_str_stable_work_time
// [.strtab] __param_stable_work_time
// [.strtab] power_supply_get_by_name
// [.strtab] cp_iio_chan_name
// [.strtab] smb_iio_chan_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] find_votable
// [.strtab] usbpd_set_cp_workmode
// [.strtab] usbpd_get_cp_workmode
// [.strtab] kmem_cache_alloc_trace
// [.strtab] usbpd_pm_probe
// [.strtab] smb_get_usbpd
// [.strtab] is_cp_chan_valid
// [.strtab] usbpd_get_src_cap_id
// [.strtab] iio_read_channel_processed
// [.strtab] usbpd_pm_check_sw_enabled
// [.strtab] devm_kmalloc
// [.strtab] cancel_work_sync
// [.strtab] cancel_delayed_work_sync
// [.strtab] usbpd_pm_workfunc
// [.strtab] usb_psy_change_work.9dd61d1666a507981f34d36e5495bdac
// [.strtab] usbpd_pm_remove.9dd61d1666a507981f34d36e5495bdac
// [.strtab] usbpd_pm_probe.9dd61d1666a507981f34d36e5495bdac
// [.strtab] usbpd_pm_workfunc.9dd61d1666a507981f34d36e5495bdac
// [.strtab] usbpd_psy_notifier_cb.9dd61d1666a507981f34d36e5495bdac
// [.strtab] usbpd_psy_notifier_cb
// [.strtab] _note_9
// [.strtab] __UNIQUE_ID_license469
// [.strtab] $d.59
// [.strtab] __UNIQUE_ID_fast_work_timetype449
// [.strtab] $d.49
// [.strtab] $d.39
// [.strtab] $d.29
// [.strtab] $d.19
// [.strtab] $x.9
// [.strtab] _note_8
// [.strtab] __UNIQUE_ID_description468
// [.strtab] $d.58
// [.strtab] $d.48
// [.strtab] $d.38
// [.strtab] $d.28
// [.strtab] $x.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.57
// [.strtab] $d.47
// [.strtab] $d.37
// [.strtab] $d.27
// [.strtab] $x.17
// [.strtab] $x.7
// [.strtab] $d.56
// [.strtab] $d.46
// [.strtab] $d.36
// [.strtab] $d.26
// [.strtab] $x.16
// [.strtab] $x.6
// [.strtab] $d.65
// [.strtab] $d.55
// [.strtab] $d.45
// [.strtab] $d.35
// [.strtab] $d.25
// [.strtab] $x.15
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.54
// [.strtab] $d.44
// [.strtab] $d.34
// [.strtab] $d.24
// [.strtab] $x.14
// [.strtab] $x.4
// [.strtab] pm_config.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.53
// [.strtab] $d.43
// [.strtab] $d.33
// [.strtab] $d.23
// [.strtab] $x.13
// [.strtab] $x.3
// [.strtab] pm_config.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] __UNIQUE_ID_stable_tune_steptype452
// [.strtab] $d.52
// [.strtab] $d.42
// [.strtab] $d.32
// [.strtab] $d.22
// [.strtab] $d.12
// [.strtab] $x.2
// [.strtab] pm_config.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] __UNIQUE_ID_fast_tune_steptype451
// [.strtab] $d.51
// [.strtab] $d.41
// [.strtab] $d.31
// [.strtab] $d.21
// [.strtab] $x.11
// [.strtab] $x.1
// [.strtab] pm_config.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] __UNIQUE_ID_stable_work_timetype450
// [.strtab] $d.50
// [.strtab] $d.40
// [.strtab] $d.30
// [.strtab] $x.20
// [.strtab] $x.10
// [.strtab] pm_config.10
// [.strtab] pm_config.0

/* ---- usbpd_get_iio_channel @ 00102160 ---- */

uint usbpd_get_iio_channel(undefined8 *param_1,int param_2,uint param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *in_x18;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar7 = (ulong)param_3;
  if (param_2 == 1) {
    lVar6 = param_1[0x55];
    uVar8 = *(ulong *)(lVar6 + uVar7 * 8);
    if (0xfffffffffffff000 < uVar8) {
      return 0xffffffed;
    }
    if (uVar8 != 0) goto LAB_001022e4;
    if (4 < param_3) goto LAB_00102354;
    puVar9 = (&smb_iio_chan_name)[uVar7];
    uVar4 = iio_channel_get(*param_1,puVar9);
    *(undefined8 *)(param_1[0x55] + uVar7 * 8) = uVar4;
    lVar6 = param_1[0x55];
    if (*(ulong *)(lVar6 + uVar7 * 8) < 0xfffffffffffff001) goto LAB_001022e4;
    *(undefined8 *)(lVar6 + uVar7 * 8) = 0;
    pcVar5 = "is_smb_chan_valid";
  }
  else {
    if (param_2 != 0) {
      iVar2 = ___ratelimit(&usbpd_get_iio_channel__rs,"usbpd_get_iio_channel");
      if (iVar2 == 0) {
        return 0xffffffea;
      }
      _printk("<3>[USBPD-PM]: %s: iio_type %d is not supported\n","usbpd_get_iio_channel",param_2);
      return 0xffffffea;
    }
    if (*(char *)((long)param_1 + 0x2cc) == '\0') {
      lVar6 = param_1[0x54];
      uVar8 = *(ulong *)(lVar6 + uVar7 * 8);
      if (0xfffffffffffff000 < uVar8) {
        return 0xffffffed;
      }
      if (uVar8 != 0) goto LAB_001022e4;
      if (0x1f < param_3) goto LAB_00102354;
      puVar9 = (&cp_iio_chan_name)[uVar7];
      uVar4 = iio_channel_get(*param_1,puVar9);
      *(undefined8 *)(param_1[0x54] + uVar7 * 8) = uVar4;
      lVar6 = param_1[0x54];
      if (*(ulong *)(lVar6 + uVar7 * 8) < 0xfffffffffffff001) goto LAB_001022e4;
      *(undefined8 *)(lVar6 + uVar7 * 8) = 0;
    }
    else {
      param_3 = param_3 + 0x10;
      uVar8 = (ulong)param_3;
      lVar6 = param_1[0x54];
      uVar7 = *(ulong *)(lVar6 + uVar8 * 8);
      if (0xfffffffffffff000 < uVar7) {
        return 0xffffffed;
      }
      if (uVar7 != 0) {
LAB_001022e4:
        uVar3 = iio_read_channel_processed(*(undefined8 *)(lVar6 + (long)(int)param_3 * 8),param_4);
        return uVar3 & (int)uVar3 >> 0x1f;
      }
      if (0x1f < param_3) {
LAB_00102354:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x102358);
        (*pcVar1)();
      }
      puVar9 = (&cp_iio_chan_name)[uVar8];
      uVar4 = iio_channel_get(*param_1,puVar9);
      *(undefined8 *)(param_1[0x54] + uVar8 * 8) = uVar4;
      lVar6 = param_1[0x54];
      if (*(ulong *)(lVar6 + uVar8 * 8) < 0xfffffffffffff001) goto LAB_001022e4;
      *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
    }
    pcVar5 = "is_cp_chan_valid";
  }
  _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n",pcVar5,puVar9);
  return 0xffffffed;
}



/* ---- is_cp_chan_valid @ 00102358 ---- */

undefined8 is_cp_chan_valid(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(ulong *)(param_1[0x54] + 0x80) < 0xfffffffffffff001) {
    if (*(ulong *)(param_1[0x54] + 0x80) == 0) {
      uVar1 = iio_channel_get(*param_1,"bq_present");
      *(undefined8 *)(param_1[0x54] + 0x80) = uVar1;
      if (0xfffffffffffff000 < *(ulong *)(param_1[0x54] + 0x80)) {
        *(undefined8 *)(param_1[0x54] + 0x80) = 0;
        _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_cp_chan_valid","bq_present");
        goto LAB_0010237c;
      }
    }
    uVar1 = 1;
  }
  else {
LAB_0010237c:
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- usbpd_set_iio_channel @ 001023f0 ---- */

uint usbpd_set_iio_channel(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *in_x18;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar7 = (ulong)param_3;
  if (param_2 == 1) {
    lVar6 = param_1[0x55];
    uVar8 = *(ulong *)(lVar6 + uVar7 * 8);
    if (0xfffffffffffff000 < uVar8) {
      return 0xffffffed;
    }
    if (uVar8 != 0) goto LAB_00102574;
    if (4 < param_3) goto LAB_001025e4;
    puVar9 = (&smb_iio_chan_name)[uVar7];
    uVar4 = iio_channel_get(*param_1,puVar9);
    *(undefined8 *)(param_1[0x55] + uVar7 * 8) = uVar4;
    lVar6 = param_1[0x55];
    if (*(ulong *)(lVar6 + uVar7 * 8) < 0xfffffffffffff001) goto LAB_00102574;
    *(undefined8 *)(lVar6 + uVar7 * 8) = 0;
    pcVar5 = "is_smb_chan_valid";
  }
  else {
    if (param_2 != 0) {
      iVar2 = ___ratelimit(&usbpd_set_iio_channel__rs,"usbpd_set_iio_channel");
      if (iVar2 == 0) {
        return 0xffffffea;
      }
      _printk("<3>[USBPD-PM]: %s: iio_type %d is not supported\n","usbpd_set_iio_channel",param_2);
      return 0xffffffea;
    }
    if (*(char *)((long)param_1 + 0x2cc) == '\0') {
      lVar6 = param_1[0x54];
      uVar8 = *(ulong *)(lVar6 + uVar7 * 8);
      if (0xfffffffffffff000 < uVar8) {
        return 0xffffffed;
      }
      if (uVar8 != 0) goto LAB_00102574;
      if (0x1f < param_3) goto LAB_001025e4;
      puVar9 = (&cp_iio_chan_name)[uVar7];
      uVar4 = iio_channel_get(*param_1,puVar9);
      *(undefined8 *)(param_1[0x54] + uVar7 * 8) = uVar4;
      lVar6 = param_1[0x54];
      if (*(ulong *)(lVar6 + uVar7 * 8) < 0xfffffffffffff001) goto LAB_00102574;
      *(undefined8 *)(lVar6 + uVar7 * 8) = 0;
    }
    else {
      param_3 = param_3 + 0x10;
      uVar8 = (ulong)param_3;
      lVar6 = param_1[0x54];
      uVar7 = *(ulong *)(lVar6 + uVar8 * 8);
      if (0xfffffffffffff000 < uVar7) {
        return 0xffffffed;
      }
      if (uVar7 != 0) {
LAB_00102574:
        uVar3 = iio_write_channel_raw(*(undefined8 *)(lVar6 + (long)(int)param_3 * 8),param_4);
        return uVar3 & (int)uVar3 >> 0x1f;
      }
      if (0x1f < param_3) {
LAB_001025e4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x1025e8);
        (*pcVar1)();
      }
      puVar9 = (&cp_iio_chan_name)[uVar8];
      uVar4 = iio_channel_get(*param_1,puVar9);
      *(undefined8 *)(param_1[0x54] + uVar8 * 8) = uVar4;
      lVar6 = param_1[0x54];
      if (*(ulong *)(lVar6 + uVar8 * 8) < 0xfffffffffffff001) goto LAB_00102574;
      *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
    }
    pcVar5 = "is_cp_chan_valid";
  }
  _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n",pcVar5,puVar9);
  return 0xffffffed;
}



/* ---- usbpd_set_cp_workmode @ 001025e8 ---- */

undefined4 usbpd_set_cp_workmode(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = usbpd_set_iio_channel(param_1,0,0xf,param_2);
  _printk("<6>[USBPD-PM]: %s: N7:set cp workmode is %d \n","usbpd_set_cp_workmode",param_2);
  return uVar1;
}



/* ---- usbpd_get_cp_workmode @ 00102644 ---- */

void usbpd_get_cp_workmode(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_20 = 0;
  uVar2 = usbpd_get_iio_channel(param_1,0,0xf,&local_20);
  if ((int)uVar2 == 0) {
    _printk("<6>[USBPD-PM]: %s: N7:get cp workmode is %d \n","usbpd_get_cp_workmode",local_20 & 0xffffffff);
    uVar2 = local_20 & 0xffffffff;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- usbpd_pm_probe.9dd61d1666a507981f34d36e5495bdac @ 001026c8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int usbpd_pm_probe_9dd61d1666a507981f34d36e5495bdac(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>[USBPD-PM]: %s: %s enter\n","usbpd_pm_probe","usbpd_pm_probe");
  uVar2 = power_supply_get_by_name("usb");
  iVar1 = -0x205;
  if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
    plVar3 = (long *)kmem_cache_alloc_trace(_DAT_00106178,0xdc0,0x2d8);
    if (plVar3 == (long *)0x0) {
      iVar1 = -0xc;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x300);
      *plVar3 = param_1 + 0x10;
      if (lVar5 == 0) {
        _printk("<3>[USBPD-PM]: %s: device tree node missing\n","pd_policy_parse_dt");
        iVar1 = -0x16;
      }
      else {
        iVar1 = of_property_read_variable_u32_array(lVar5,"mi,pd-bat-volt-max",plVar3 + 0x56,1,0);
        if (iVar1 < 0) {
          _printk("<3>[USBPD-PM]: %s: pd-bat-volt-max property missing, use default val\n","pd_policy_parse_dt");
        }
        else {
          pm_config_0 = (undefined4)plVar3[0x56];
        }
        _printk("<6>[USBPD-PM]: %s: pm_config.bat_volt_lp_lmt:%d\n","pd_policy_parse_dt",pm_config_0);
        iVar1 = of_property_read_variable_u32_array(lVar5,"mi,pd-bat-curr-max",plVar3 + 0x57,1,0);
        if (iVar1 < 0) {
          _printk("<3>[USBPD-PM]: %s: pd-bat-curr-max property missing, use default val\n","pd_policy_parse_dt");
        }
        else {
          pm_config_1 = (undefined4)plVar3[0x57];
        }
        _printk("<6>[USBPD-PM]: %s: pm_config.bat_curr_lp_lmt:%d\n","pd_policy_parse_dt",pm_config_1);
        iVar1 = of_property_read_variable_u32_array
                          (lVar5,"mi,pd-bus-volt-max",(undefined4 *)((long)plVar3 + 700),1,0);
        if (iVar1 < 0) {
          _printk("<3>[USBPD-PM]: %s: pd-bus-volt-max property missing, use default val\n","pd_policy_parse_dt");
        }
        else {
          pm_config_2 = *(undefined4 *)((long)plVar3 + 700);
        }
        _printk("<6>[USBPD-PM]: %s: pm_config.bus_volt_lp_lmt:%d\n","pd_policy_parse_dt",pm_config_2);
        iVar1 = of_property_read_variable_u32_array(lVar5,"mi,pd-bus-curr-max",plVar3 + 0x58,1,0);
        if (iVar1 < 0) {
          _printk("<3>[USBPD-PM]: %s: pd-bus-curr-max property missing, use default val\n","pd_policy_parse_dt");
        }
        else {
          pm_config_3 = (undefined4)plVar3[0x58];
        }
        _printk("<6>[USBPD-PM]: %s: pm_config.bus_curr_lp_lmt:%d\n","pd_policy_parse_dt",pm_config_3);
        iVar1 = of_property_read_variable_u32_array
                          (lVar5,"mi,pd-bus-curr-compensate",(undefined4 *)((long)plVar3 + 0x2c4),1,
                           0);
        if (iVar1 < 0) {
          _printk("<3>[USBPD-PM]: %s: pd-bus-curr-compensate property missing, use default val\n","pd_policy_parse_dt");
        }
        else {
          pm_config_4 = *(undefined4 *)((long)plVar3 + 0x2c4);
        }
        _printk("<6>[USBPD-PM]: %s: pm_config.bus_curr_compensate:%d\n","pd_policy_parse_dt",pm_config_4);
        lVar4 = of_find_property(lVar5,"mi,cp-sec-enable",0);
        pm_config_10 = lVar4 != 0;
        *(undefined1 *)(plVar3 + 0x59) = pm_config_10;
        iVar1 = of_property_read_variable_u32_array
                          (lVar5,"mi,pd-ffc-bat-volt-max",(long)plVar3 + 0x2b4,1,0);
        _printk("<6>[USBPD-PM]: %s: pdpm->ffc_bat_volt_max:%d\n","pd_policy_parse_dt",*(undefined4 *)((long)plVar3 + 0x2b4));
        if (-1 < iVar1) {
          lVar5 = plVar3[0x53];
          *(long **)(param_1 + 0xa8) = plVar3;
          *(undefined4 *)(plVar3 + 0x4d) = 0;
          if (lVar5 == 0) {
            lVar5 = power_supply_get_by_name("usb");
            plVar3[0x53] = lVar5;
            if (lVar5 == 0) {
              _printk("<3>[USBPD-PM]: %s: usb psy not found!\n","usbpd_check_usb_psy");
            }
          }
          _printk("<3>[USBPD-PM]: %s: usbpd_iio_init start\n","usbpd_iio_init");
          lVar5 = devm_kmalloc(*plVar3,0x100,0xdc0);
          plVar3[0x54] = lVar5;
          if (lVar5 != 0) {
            lVar5 = devm_kmalloc(*plVar3,0x28,0xdc0);
            plVar3[0x55] = lVar5;
            if (lVar5 != 0) {
              _printk("<3>[USBPD-PM]: %s: usbpd_iio_init end\n","usbpd_iio_init");
            }
          }
          plVar3[0x47] = 0xfffffffe0;
          plVar3[0x48] = (long)(plVar3 + 0x48);
          plVar3[0x49] = (long)(plVar3 + 0x48);
          plVar3[0x2c] = 0xfffffffe0;
          plVar3[0x4a] = (long)usb_psy_change_work_9dd61d1666a507981f34d36e5495bdac_cfi_jt;
          plVar3[0x2d] = (long)(plVar3 + 0x2d);
          plVar3[0x2e] = (long)(plVar3 + 0x2d);
          plVar3[0x2f] = (long)usbpd_pm_workfunc_9dd61d1666a507981f34d36e5495bdac_cfi_jt;
          init_timer_key(plVar3 + 0x32,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
          plVar3[0x3d] = (long)usbpd_psy_notifier_cb_9dd61d1666a507981f34d36e5495bdac_cfi_jt;
          power_supply_reg_notifier(plVar3 + 0x3d);
          usbpd_psy_notifier_cb_9dd61d1666a507981f34d36e5495bdac(plVar3 + 0x3d,0,plVar3[0x53]);
          return 0;
        }
      }
      _printk("<3>[USBPD-PM]: %s: Couldn't parse device tree rc=%d\n","usbpd_pm_probe",iVar1);
    }
  }
  return iVar1;
}



/* ---- usbpd_pm_remove.9dd61d1666a507981f34d36e5495bdac @ 00102b10 ---- */

undefined8 usbpd_pm_remove_9dd61d1666a507981f34d36e5495bdac(long param_1)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(param_1 + 0xa8);
  power_supply_unreg_notifier(lVar1 + 0x1e8);
  cancel_delayed_work(lVar1 + 0x160);
  cancel_work_sync(lVar1 + 0x238);
  return 0;
}



/* ---- usb_psy_change_work.9dd61d1666a507981f34d36e5495bdac @ 00102b58 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usb_psy_change_work_9dd61d1666a507981f34d36e5495bdac(long param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *in_x18;
  undefined8 *puVar9;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  puVar9 = (undefined8 *)(param_1 + -0x238);
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_30 = 0;
  uVar8 = **(ulong **)(param_1 + 0x70);
  if (uVar8 < 0xfffffffffffff001) {
    if (uVar8 == 0) {
      uVar6 = iio_channel_get(*puVar9,"pd_active");
      **(undefined8 **)(param_1 + 0x70) = uVar6;
      uVar8 = **(ulong **)(param_1 + 0x70);
      if (0xfffffffffffff000 < uVar8) {
        **(ulong **)(param_1 + 0x70) = 0;
        _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","pd_active");
        goto LAB_00102dc4;
      }
    }
    iVar5 = iio_read_channel_processed(uVar8,&local_30);
    if (iVar5 < 0) goto LAB_00102dc4;
    if ((*(char *)(param_1 + -0x1b9) == '\0') && ((int)local_30 == 2)) {
      *(undefined1 *)(param_1 + -0x1b9) = 1;
      _printk("<6>[USBPD-PM]: %s: pd_active = %d\n","usbpd_pd_contact",1);
      usbpd_pm_evaluate_src_caps(puVar9);
      if (*(char *)(param_1 + -0x1b8) != '\0') {
        queue_delayed_work_on(0x20,_system_wq,param_1 + -0xd8,0);
      }
      if (puVar9 == (undefined8 *)0x0) {
        puVar7 = "<6>[USBPD-PM]: %s: N7:start cp statemachine\n";
      }
      else {
        puVar7 = "<6>[USBPD-PM]: %s: N7:start cp statemachine\n";
        *(undefined2 *)(param_1 + 0x50) = 1;
        *(undefined4 *)(param_1 + 0x4c) = 2;
      }
    }
    else {
      if ((*(char *)(param_1 + -0x1b9) == '\0') || ((int)local_30 == 2)) goto LAB_00102dd8;
      *(undefined1 *)(param_1 + -0x1b9) = 0;
      _printk("<6>[USBPD-PM]: %s: pd_active = %d\n","usbpd_pd_contact",0);
      cancel_delayed_work_sync(param_1 + -0xd8);
      if (*(long *)(param_1 + 0x38) != 0) {
        vote(*(long *)(param_1 + 0x38),"BQ_TAPER_FCC_VOTER",0,0);
      }
      if (*(char *)(param_1 + -0x1bc) == '\0') {
        usbpd_pm_enable_sw(puVar9,1);
        usbpd_pm_check_sw_enabled(puVar9);
        bVar4 = *(char *)(param_1 + -0x1bc) == '\0';
      }
      else {
        bVar4 = false;
      }
      *(undefined1 *)(param_1 + -0x1b8) = 0;
      *(undefined1 *)(param_1 + 0x93) = 0;
      *(undefined2 *)(param_1 + 0x91) = 0;
      pm_config_1 = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + -0xec) = 0;
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + -0x1a0) = 0;
      *(undefined8 *)(param_1 + -0x198) = 0;
      *(undefined8 *)(param_1 + -400) = 0;
      *(undefined8 *)(param_1 + -0x188) = 0;
      *(undefined8 *)(param_1 + -0x180) = 0;
      *(undefined8 *)(param_1 + -0x178) = 0;
      *(undefined8 *)(param_1 + -0x170) = 0;
      *(undefined8 *)(param_1 + -0x168) = 0;
      *(undefined8 *)(param_1 + -0x160) = 0;
      *(undefined8 *)(param_1 + -0x158) = 0;
      *(undefined8 *)(param_1 + -0x150) = 0;
      *(undefined8 *)(param_1 + -0x148) = 0;
      *(undefined8 *)(param_1 + -0x140) = 0;
      *(undefined8 *)(param_1 + -0x138) = 0;
      *(undefined8 *)(param_1 + -0x130) = 0;
      *(undefined8 *)(param_1 + -0x128) = 0;
      *(undefined8 *)(param_1 + -0x120) = 0;
      *(undefined8 *)(param_1 + -0x118) = 0;
      *(undefined8 *)(param_1 + -0x110) = 0;
      *(undefined8 *)(param_1 + -0x108) = 0;
      *(undefined8 *)(param_1 + -0x100) = 0;
      if ((bVar4) || (*(char *)(param_1 + -0x1bb) != '\0')) {
        usbpd_pm_enable_sw(puVar9,1);
      }
      uVar1 = *(uint *)(param_1 + -0x230);
      if (7 < uVar1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x102e10);
        (*pcVar3)();
      }
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[uVar1],"PD_PM_STATE_ENTRY");
      *(uint *)(param_1 + -0x230) = 0;
      if (puVar9 == (undefined8 *)0x0) {
        puVar7 = "<6>[USBPD-PM]: %s: N7:stop cp statemachine\n";
      }
      else {
        *(undefined1 *)(param_1 + 0x49) = 0;
        puVar7 = "<6>[USBPD-PM]: %s: N7:stop cp statemachine\n";
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
    }
  }
  else {
LAB_00102dc4:
    puVar7 = "<3>[USBPD-PM]: %s: Failed to get usb pd active state\n";
  }
  _printk(puVar7,"usb_psy_change_work");
LAB_00102dd8:
  *(undefined1 *)(param_1 + -0x38) = 0;
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- usbpd_pm_workfunc.9dd61d1666a507981f34d36e5495bdac @ 00102e10 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usbpd_pm_workfunc_9dd61d1666a507981f34d36e5495bdac(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined8 *in_x18;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  uint *puVar25;
  undefined8 unaff_x30;
  ulong local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar12 = sp_el0;
  lVar21 = param_1 + -0x160;
  local_68 = *(long *)(lVar12 + 0x5e0);
  usbpd_pm_check_sw_enabled(lVar21);
  *(undefined1 *)(param_1 + -0xe3) = 0;
  local_70 = 0;
  iVar8 = usbpd_get_iio_channel(lVar21,0,8,&local_70);
  if (iVar8 == 0) {
    *(int *)(param_1 + -0x134) = (int)local_70;
  }
  iVar8 = usbpd_get_iio_channel(lVar21,0,9,&local_70);
  if (iVar8 == 0) {
    *(int *)(param_1 + -300) = (int)local_70;
  }
  iVar8 = usbpd_get_iio_channel(lVar21,0,1,&local_70);
  if (iVar8 == 0) {
    *(bool *)(param_1 + -0x154) = (int)local_70 != 0;
  }
  iVar8 = usbpd_get_iio_channel(lVar21,0,0xc,&local_70);
  if (iVar8 == 0) {
    *(byte *)(param_1 + -0x14d) = (byte)local_70 & 1;
    *(byte *)(param_1 + -0x14c) = (byte)local_70 >> 1 & 1;
    *(byte *)(param_1 + -0x14b) = (byte)local_70 >> 2 & 1;
    *(byte *)(param_1 + -0x14a) = (byte)local_70 >> 3 & 1;
    *(byte *)(param_1 + -0x149) = (byte)local_70 >> 7;
    *(byte *)(param_1 + -0x148) = (byte)local_70 >> 4 & 1;
    *(byte *)(param_1 + -0x147) = (byte)local_70 >> 5 & 1;
    *(byte *)(param_1 + -0x146) = (byte)local_70 >> 6 & 1;
  }
  iVar8 = usbpd_get_iio_channel(lVar21,0,0xd,&local_70);
  if (iVar8 == 0) {
    *(byte *)(param_1 + -0x151) = (byte)local_70 & 1;
    *(byte *)(param_1 + -0x150) = (byte)local_70 >> 1 & 1;
    *(byte *)(param_1 + -0x14f) = (byte)local_70 >> 2 & 1;
    *(byte *)(param_1 + -0x14e) = (byte)local_70 >> 3 & 1;
    *(byte *)(param_1 + -0x145) = (byte)local_70 >> 4 & 1;
    *(byte *)(param_1 + -0x144) = (byte)local_70 >> 5 & 1;
    *(byte *)(param_1 + -0x143) = (byte)local_70 >> 6 & 1;
  }
  lVar12 = *(long *)(param_1 + 0x130);
  local_70 = 0;
  if (lVar12 == 0) {
    lVar12 = power_supply_get_by_name("battery");
    *(long *)(param_1 + 0x130) = lVar12;
    if (lVar12 != 0) goto LAB_00102fac;
    _printk("<3>[USBPD-PM]: %s: Failed to get battery psy.\n","usbpd_update_ibat_curr");
  }
  else {
LAB_00102fac:
    iVar8 = power_supply_get_property(lVar12,0x11,&local_70);
    if (iVar8 == 0) {
      *(int *)(param_1 + -0x130) = (int)local_70 / 1000;
    }
    iVar8 = power_supply_get_property(*(undefined8 *)(param_1 + 0x130),0xc,&local_70);
    if (iVar8 == 0) {
      *(int *)(param_1 + -0x138) = (int)local_70 / 1000;
    }
  }
  if ((lVar21 != 0) && (*(char *)(param_1 + 0x16a) == '\0')) {
    if (*(long *)(param_1 + 0x110) == 0) {
      lVar12 = find_votable("FCC");
      *(long *)(param_1 + 0x110) = lVar12;
      if (lVar12 != 0) goto LAB_00103040;
      iVar8 = -0x16;
    }
    else {
LAB_00103040:
      iVar8 = get_effective_result();
      iVar8 = iVar8 / 1000;
    }
    _printk("<6>[USBPD-PM]: %s: N7:ibat_request = %d, 2_1 mode = %d, 1_1 mode = %d\n","pdm_multi_mode_switch",iVar8,*(undefined1 *)(param_1 + 0x128),
            *(undefined1 *)(param_1 + 0x129));
    uVar10 = 1;
    *(undefined2 *)(param_1 + 0x128) = 1;
    if (iVar8 - 0x7d1U < 400) {
      *(undefined1 *)(param_1 + 0x121) = 1;
      *(undefined2 *)(param_1 + 0x128) = 0x100;
    }
    else {
      uVar10 = 2;
      *(undefined1 *)(param_1 + 0x121) = 0;
    }
    *(undefined4 *)(param_1 + 0x124) = uVar10;
  }
  lVar12 = find_votable("LOW_FAST");
  if (lVar12 == 0) {
    puVar13 = "<3>[USBPD-PM]: %s: %s failed to get low_fast_votable\n";
LAB_001030d8:
    _printk(puVar13,"update_smart_chg_cp_workmode","update_smart_chg_cp_workmode");
  }
  else {
    iVar8 = get_effective_result();
    if (iVar8 < 0) {
      puVar13 = "<3>[USBPD-PM]: %s: %s failed to get low_fast_working_flag\n";
      goto LAB_001030d8;
    }
    local_70 = 0;
    uVar14 = usbpd_get_iio_channel(lVar21,0,0xf,&local_70);
    if ((int)uVar14 == 0) {
      _printk("<6>[USBPD-PM]: %s: N7:get cp workmode is %d \n","usbpd_get_cp_workmode",local_70 & 0xffffffff);
      uVar14 = local_70;
    }
    _printk("<6>[USBPD-PM]: %s: N7: update cp mode, get cp mode is %d, 2_1 mode is %d, 1_1 mode is %d, low_fast_working_flag is %d\n","update_smart_chg_cp_workmode",uVar14 & 0xffffffff,
            *(undefined1 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x129),iVar8);
    if (((int)uVar14 == 0) || (*(char *)(param_1 + 0x128) == '\0')) {
      if (((int)uVar14 == 0) && ((*(char *)(param_1 + 0x129) != '\0' && (iVar8 == 0)))) {
        uVar22 = 1;
        goto LAB_00103748;
      }
    }
    else {
      uVar22 = 0;
LAB_00103748:
      usbpd_set_iio_channel(lVar21,0,1,0);
      msleep(1000);
      usbpd_set_iio_channel(lVar21,0,0xf,uVar22);
      _printk("<6>[USBPD-PM]: %s: N7:set cp workmode is %d \n","usbpd_set_cp_workmode",uVar22);
      if (7 < *(uint *)(param_1 + -0x158)) goto switchD_0010310c_default;
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*(uint *)(param_1 + -0x158)],
              "PD_PM_STATE_ENTRY");
      *(undefined4 *)(param_1 + -0x158) = 0;
      _printk("<6>[USBPD-PM]: %s: N7:need switch cp mode\n","usbpd_pm_sm");
    }
  }
  puVar25 = (uint *)(param_1 + -0x158);
  switch(*puVar25) {
  case 0:
    usbpd_pm_sm_stop_sw = 0;
    usbpd_pm_sm_recover = '\0';
    *(undefined4 *)(param_1 + -0xd4) = fast_work_time;
    if (*(char *)(param_1 + -0xe4) == '\0') {
      usbpd_pm_enable_sw(lVar21,1);
    }
    lVar12 = *(long *)(param_1 + 0x130);
    local_70 = 0;
    if (lVar12 == 0) {
      lVar12 = power_supply_get_by_name("battery");
      *(long *)(param_1 + 0x130) = lVar12;
      if (lVar12 != 0) goto LAB_001036e4;
      _printk("<3>[USBPD-PM]: %s: batt psy not found!\n","usbpd_check_batt_psy");
      iVar8 = 0;
    }
    else {
LAB_001036e4:
      iVar8 = power_supply_get_property(lVar12,0x21,&local_70);
      if (iVar8 < 0) {
        _printk("<6>[USBPD-PM]: %s: Couldn't get fastcharge mode:%d\n","pd_get_batt_current_thermal_level",iVar8);
        iVar8 = 0;
      }
      else {
        iVar8 = (int)local_70;
      }
    }
    bVar7 = pd_disable_cp_by_jeita_status(lVar21);
    *(byte *)(param_1 + 0x16a) = bVar7 & 1;
    _printk("<6>[USBPD-PM]: %s: is_temp_out_fc2_range:%d\n","usbpd_pm_sm");
    if (*(long *)(param_1 + 0x110) == 0) {
      lVar12 = find_votable("FCC");
      *(long *)(param_1 + 0x110) = lVar12;
      if (lVar12 != 0) goto LAB_00103988;
    }
    else {
LAB_00103988:
      iVar9 = get_effective_result();
      if (999 < iVar9) {
        iVar11 = pm_config_1;
        if (iVar9 / 1000 <= pm_config_1) {
          iVar11 = iVar9 / 1000;
        }
        _printk("<6>[USBPD-PM]: %s: curr_ibus_lmt:%d\n","usbpd_pm_sm",iVar11 >> 1);
      }
    }
    if (*(int *)(param_1 + -0x138) < 3000) {
      usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),1,0,0);
      _printk("<6>[USBPD-PM]: %s: batt_volt %d, waiting...\n","usbpd_pm_sm",*(undefined4 *)(param_1 + -0x138));
      break;
    }
    if (pm_config_0 + -100 < *(int *)(param_1 + -0x138)) {
      _printk("<6>[USBPD-PM]: %s: batt_volt %d is too high for cp,\t\t\t\t\tcharging with switch charger\n","usbpd_pm_sm");
      if (7 < *puVar25) {
switchD_0010310c_default:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x104384);
        (*pcVar5)();
      }
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*puVar25],"PD_PM_STATE_FC2_EXIT");
      *puVar25 = 7;
      if (pm_config_0 < 0x1194) {
        usbpd_pm_sm_recover = '\x01';
      }
      break;
    }
    if ((iVar8 < 10) && (*(char *)(param_1 + 0x16a) == '\0')) {
      _printk("<6>[USBPD-PM]: %s: batt_volt-%d is ok, start flash charging\n","usbpd_pm_sm");
      if (7 < *puVar25) goto switchD_0010310c_default;
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*puVar25],"PD_PM_STATE_FC2_ENTRY");
      *puVar25 = 1;
      break;
    }
    usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),1,0,0);
    puVar13 = "<6>[USBPD-PM]: %s: thermal too high or batt temp is out of fc2 range, waiting...\n";
    goto LAB_00103fc4;
  case 1:
    uVar19 = 1;
    if (*(char *)(param_1 + -0xe3) == '\0') {
      usbpd_pm_enable_sw(lVar21,0);
      *(undefined1 *)(param_1 + -0xe3) = 1;
      usbpd_pm_check_sw_enabled(lVar21);
      uVar19 = *(uint *)(param_1 + -0x158);
      *(undefined1 *)(param_1 + -0xe3) = 0;
      if (7 < uVar19) goto switchD_0010310c_default;
    }
    _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[uVar19],"PD_PM_STATE_FC2_ENTRY_1");
    *puVar25 = 2;
    usbpd_pm_sm_retry_count = 0;
    break;
  case 2:
    _printk("<6>[USBPD-PM]: %s: N7:dive rate = %d in state FC2_ENTRY_1\n","usbpd_pm_sm",*(undefined4 *)(param_1 + 0x124));
    if (usbpd_pm_sm_retry_count < 1) {
      iVar8 = *(int *)(param_1 + 0x124) * *(int *)(param_1 + -0x138) + 400;
    }
    else {
      iVar8 = *(int *)(param_1 + -0xdc) + 0x14;
    }
    *(int *)(param_1 + -0xdc) = iVar8;
    *(int *)(param_1 + -0xd8) = *(int *)(param_1 + -0x18);
    usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),*(undefined4 *)(param_1 + -0x14),iVar8 * 1000,
                     *(int *)(param_1 + -0x18) * 1000);
    _printk("<6>[USBPD-PM]: %s: entry1 request_voltage:%d, request_current:%d\n","usbpd_pm_sm",*(undefined4 *)(param_1 + -0xdc),
            *(undefined4 *)(param_1 + -0xd8));
    if (7 < *(uint *)(param_1 + -0x158)) goto switchD_0010310c_default;
    _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*(uint *)(param_1 + -0x158)],
            "PD_PM_STATE_FC2_ENTRY_2");
    *puVar25 = 3;
    usbpd_pm_sm_tune_vbus_retry = 0;
    break;
  case 3:
    _printk("<6>[USBPD-PM]: %s: tune adapter vbus_volt %d , vbat_volt %d tune_vbus_retry=%d\n","usbpd_pm_sm",*(undefined4 *)(param_1 + -0x134),
            *(undefined4 *)(param_1 + -0x138),usbpd_pm_sm_tune_vbus_retry);
    _printk("<6>[USBPD-PM]: %s: N7:dive rate = %d in state FC2_ENTRY_2\n","usbpd_pm_sm",*(undefined4 *)(param_1 + 0x124));
    iVar8 = *(int *)(param_1 + 0x124) * *(int *)(param_1 + -0x138);
    if (*(int *)(param_1 + -0x134) < iVar8 + 0x15e) {
      usbpd_pm_sm_tune_vbus_retry = usbpd_pm_sm_tune_vbus_retry + 1;
      iVar8 = *(int *)(param_1 + -0xdc) + 0x14;
      *(int *)(param_1 + -0xdc) = iVar8;
      usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),*(undefined4 *)(param_1 + -0x14),
                       iVar8 * 1000,*(int *)(param_1 + -0xd8) * 1000);
      puVar13 = "<6>[USBPD-PM]: %s: entry2 add request_voltage:%d, request_current:%d\n";
    }
    else {
      if (*(int *)(param_1 + -0x134) <= iVar8 + 600) {
        _printk("<6>[USBPD-PM]: %s: adapter volt tune ok, retry %d times\n","usbpd_pm_sm");
        if (*puVar25 < 8) {
          _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*puVar25],"PD_PM_STATE_FC2_ENTRY_3")
          ;
          *puVar25 = 4;
          break;
        }
        goto switchD_0010310c_default;
      }
      usbpd_pm_sm_tune_vbus_retry = usbpd_pm_sm_tune_vbus_retry + 1;
      iVar8 = *(int *)(param_1 + -0xdc) + -0x14;
      *(int *)(param_1 + -0xdc) = iVar8;
      usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),*(undefined4 *)(param_1 + -0x14),
                       iVar8 * 1000,*(int *)(param_1 + -0xd8) * 1000);
      puVar13 = "<6>[USBPD-PM]: %s: entry2 reduce request_voltage:%d, request_current:%d\n";
    }
    _printk(puVar13,"usbpd_pm_sm",*(undefined4 *)(param_1 + -0xdc),*(undefined4 *)(param_1 + -0xd8))
    ;
    if (usbpd_pm_sm_tune_vbus_retry < 0x22) break;
    if (usbpd_pm_sm_retry_count < 1) {
      if (7 < *puVar25) goto switchD_0010310c_default;
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*puVar25],"PD_PM_STATE_FC2_ENTRY_1");
      puVar13 = "<6>[USBPD-PM]: %s: Failed to tune adapter volt into valid range, retry again\n";
      *puVar25 = 2;
      usbpd_pm_sm_retry_count = usbpd_pm_sm_retry_count + 1;
      goto LAB_00103fc4;
    }
    _printk("<6>[USBPD-PM]: %s: Failed to tune adapter volt into valid range, charge with switching charger\n","usbpd_pm_sm");
LAB_00104078:
    uVar19 = *puVar25;
joined_r0x00103f7c:
    if (uVar19 < 8) {
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[uVar19],"PD_PM_STATE_FC2_EXIT");
      *puVar25 = 7;
      break;
    }
    goto switchD_0010310c_default;
  case 4:
    if (*(char *)(param_1 + -0x154) == '\0') {
      usbpd_set_iio_channel(lVar21,0,1,1);
      msleep(0x1e);
      local_70 = 0;
      iVar8 = usbpd_get_iio_channel(lVar21,0,1,&local_70);
      if (iVar8 == 0) {
        *(bool *)(param_1 + -0x154) = (int)local_70 != 0;
        if ((int)local_70 == 0) break;
      }
      else if (*(char *)(param_1 + -0x154) == '\0') break;
    }
    if (*(char *)(param_1 + -0xe4) != '\0') {
      usbpd_pm_enable_sw(lVar21,0);
      usbpd_pm_check_sw_enabled(lVar21);
      *(undefined1 *)(param_1 + -0xe3) = 0;
    }
    if ((pm_config_10 == '\0') || (*(char *)(param_1 + -0x11c) != '\0')) {
      uVar22 = ktime_get();
      *(undefined8 *)(param_1 + 0x170) = uVar22;
      if (7 < *(uint *)(param_1 + -0x158)) goto switchD_0010310c_default;
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*(uint *)(param_1 + -0x158)],
              "PD_PM_STATE_FC2_TUNE");
      *puVar25 = 5;
      ibus_lmt_change_timer = 0;
      fc2_taper_timer = 0;
    }
    break;
  case 5:
    if (*(ulong *)(param_1 + -0xd0) < 0xfffffffffffff001) {
      iVar8 = *(int *)(param_1 + -0x20);
      iVar9 = usbpd_get_src_cap_id();
      if (iVar8 != iVar9) {
        uVar10 = usbpd_get_src_cap_id(*(undefined8 *)(param_1 + -0xd0));
        *(undefined4 *)(param_1 + -0x20) = uVar10;
        goto LAB_001035f8;
      }
    }
    else {
LAB_001035f8:
      usbpd_pm_evaluate_src_caps(lVar21);
    }
    lVar12 = *(long *)(param_1 + 0x130);
    local_70 = 0;
    if (lVar12 == 0) {
      lVar12 = power_supply_get_by_name("battery");
      *(long *)(param_1 + 0x130) = lVar12;
      if (lVar12 != 0) goto LAB_00103714;
      _printk("<3>[USBPD-PM]: %s: batt psy not found!\n","usbpd_check_batt_psy");
      iVar8 = 0;
    }
    else {
LAB_00103714:
      iVar8 = power_supply_get_property(lVar12,0x21,&local_70);
      if (iVar8 < 0) {
        _printk("<6>[USBPD-PM]: %s: Couldn't get fastcharge mode:%d\n","pd_get_batt_current_thermal_level",iVar8);
        iVar8 = 0;
      }
      else {
        iVar8 = (int)local_70;
      }
    }
    lVar12 = ktime_get();
    lVar23 = *(long *)(param_1 + 0x170);
    if (*(long *)(param_1 + 0x110) == 0) {
      lVar15 = find_votable("FCC");
      *(long *)(param_1 + 0x110) = lVar15;
      if (lVar15 != 0) goto LAB_00103ac4;
      iVar9 = -0x16;
    }
    else {
LAB_00103ac4:
      iVar9 = get_effective_result();
      iVar9 = iVar9 / 1000;
    }
    usbpd_pm_fc2_charge_algo_fcc_limit = iVar9;
    if (pm_config_1 <= iVar9) {
      usbpd_pm_fc2_charge_algo_fcc_limit = pm_config_1;
    }
    if (*(char *)(param_1 + 0x128) == '\0') {
      uVar19 = *(byte *)(param_1 + 0x129) ^ 1;
    }
    else {
      uVar19 = 1;
    }
    usbpd_pm_fc2_charge_algo_ibus_limit = usbpd_pm_fc2_charge_algo_fcc_limit >> (uVar19 & 0x1f);
    _printk("<6>[USBPD-PM]: %s: N7:get fcc_limit = %d, ibus_limit = %d\n","usbpd_pm_fc2_charge_algo");
    lVar15 = find_votable("CHG_DISABLE");
    *(long *)(param_1 + 0x118) = lVar15;
    if (lVar15 != 0) {
      usbpd_pm_fc2_charge_algo_g_smartchg_val = get_client_vote(lVar15,"SMART_CHARGING_VOTER");
      usbpd_pm_fc2_charge_algo_g_nightchg_val =
           get_client_vote(*(undefined8 *)(param_1 + 0x118),"NIGHT_CHARGING_VOTER");
    }
    _printk("<6>[USBPD-PM]: %s: N7:smart chg ctrl val = %d\n","usbpd_pm_fc2_charge_algo",usbpd_pm_fc2_charge_algo_g_smartchg_val);
    if (usbpd_pm_fc2_charge_algo_g_smartchg_val == 0 && usbpd_pm_fc2_charge_algo_g_nightchg_val == 0
       ) {
      if (*(char *)(param_1 + 0x120) == '\0') {
        iVar11 = *(int *)(param_1 + -0x138);
        iVar16 = pm_config_0 + -10;
        if (iVar16 < iVar11) {
          bVar1 = 5 < ibus_lmt_change_timer;
          ibus_lmt_change_timer = ibus_lmt_change_timer + 1;
          if (bVar1) {
            ibus_lmt_change_timer = 0;
            usbpd_pm_fc2_charge_algo_ibus_limit = usbpd_pm_fc2_charge_algo_ibus_limit + -100;
            if ((*(long *)(param_1 + 0x110) != 0) && (0x897 < iVar9)) {
              iVar9 = iVar9 * 1000 + -200000;
              vote(*(long *)(param_1 + 0x110),"BQ_TAPER_FCC_VOTER",1,iVar9);
              _printk("<6>[USBPD-PM]: %s: bq set taper fcc to : %d uA\n","usbpd_pm_fc2_charge_algo",iVar9);
              iVar11 = *(int *)(param_1 + -0x138);
              iVar16 = pm_config_0 + -10;
            }
          }
        }
        else {
          ibus_lmt_change_timer = 0;
        }
        iVar9 = *(int *)(param_1 + -300);
        uVar19 = (uint)(iVar11 < iVar16);
        if (pm_config_0 < iVar11) {
          uVar19 = 0xffffffff;
        }
        uVar2 = -(uint)(usbpd_pm_fc2_charge_algo_fcc_limit + 100 < *(int *)(param_1 + -0x130));
        if (*(int *)(param_1 + -0x130) < usbpd_pm_fc2_charge_algo_fcc_limit) {
          uVar2 = 1;
        }
        if (pm_config_10 != '\0') {
          iVar9 = *(int *)(param_1 + -0xf4) + iVar9;
        }
        uVar3 = -(uint)(usbpd_pm_fc2_charge_algo_ibus_limit + -0x50 < iVar9);
        if (iVar9 < usbpd_pm_fc2_charge_algo_ibus_limit + -0x50) {
          uVar3 = 1;
        }
        _printk("<6>[USBPD-PM]: %s: vbat:%d,lmt:%d; ibat:%d,lmt:%d; ibus:%d,lmt:%d","usbpd_pm_fc2_charge_algo");
        uVar4 = uVar19;
        if ((int)uVar3 <= (int)uVar19) {
          uVar4 = uVar3;
        }
        if ((int)uVar2 <= (int)uVar4) {
          uVar4 = uVar2;
        }
        if (0 < (int)uVar4) {
          uVar4 = 1;
        }
        if ((*(char *)(param_1 + -0x14c) == '\0') && (*(char *)(param_1 + -0x14a) == '\0')) {
          uVar17 = 0xffffffff;
          if (*(char *)(param_1 + -0x14b) == '\0') {
            uVar17 = 1;
          }
        }
        else {
          uVar17 = 0xffffffff;
        }
        local_70 = 0;
        iVar11 = usbpd_get_iio_channel(lVar21,0,1,&local_70);
        if (iVar11 == 0) {
          cVar6 = (int)local_70 != 0;
          *(char *)(param_1 + -0x154) = cVar6;
        }
        else {
          cVar6 = *(char *)(param_1 + -0x154);
        }
        if (cVar6 == '\0') {
          puVar13 = "<3>[USBPD-PM]: %s: cp disabled due to other reason, return\n";
LAB_00103ee4:
          _printk(puVar13,"usbpd_pm_fc2_charge_algo");
LAB_00103ef0:
          usbpd_pm_sm_g_status = 3;
          _printk("<6>[USBPD-PM]: %s: Move to switch charging, will try to recover flash charging:%d\n","usbpd_pm_sm",3);
          uVar19 = *puVar25;
          usbpd_pm_sm_recover = '\x01';
        }
        else {
          bVar7 = pd_disable_cp_by_jeita_status(lVar21);
          *(byte *)(param_1 + 0x16a) = bVar7 & 1;
          if (*(char *)(param_1 + -0x145) == '\0') {
            if (9 < iVar8 || (bVar7 & 1) != 0) {
              puVar13 = "<6>[USBPD-PM]: %s: system thermal level too high or batt temp is out of fc2 range\n";
              goto LAB_00103ee4;
            }
            cVar6 = *(char *)(param_1 + -0x14e);
            if (*(char *)(param_1 + -0x150) == '\0') {
              if (cVar6 != '\0') {
                cVar6 = '\x01';
                goto LAB_0010403c;
              }
              if ((*(char *)(param_1 + -0x151) != '\0') || (*(char *)(param_1 + -0x14f) != '\0')) {
                cVar6 = '\0';
                goto LAB_0010403c;
              }
              if (*(char *)(param_1 + -0x154) == '\0') {
                _printk("<3>[USBPD-PM]: %s: cp.charge_enabled:%d\n","usbpd_pm_fc2_charge_algo",0);
                goto LAB_00103ef0;
              }
              iVar8 = *(int *)(param_1 + -0x138);
              if (pm_config_0 < iVar8) {
                local_70 = 0;
                iVar8 = power_supply_get_property(*(undefined8 *)(param_1 + 0x130),0x33,&local_70);
                if (iVar8 == 0) {
                  if (0x95 < (int)local_70) goto LAB_00104110;
                }
                else if (iVar8 < 0) {
                  _printk("<6>[USBPD-PM]: %s: Couldn't get batt temp prop:%d\n","is_cool_charge",iVar8);
LAB_00104110:
                  iVar8 = *(int *)(param_1 + -0x138);
                  goto LAB_00104114;
                }
LAB_00104144:
                iVar8 = usbpd_pm_fc2_charge_algo_cool_warm_overcharge_timer + 1;
                bVar1 = 10 < usbpd_pm_fc2_charge_algo_cool_warm_overcharge_timer;
                usbpd_pm_fc2_charge_algo_cool_warm_overcharge_timer = iVar8;
                if (bVar1) {
                  _printk("<6>[USBPD-PM]: %s: cool warm overcharge\n","usbpd_pm_fc2_charge_algo");
                  usbpd_pm_fc2_charge_algo_cool_warm_overcharge_timer = 0;
                  *(undefined1 *)(param_1 + 0x16b) = 1;
                  goto LAB_00103ef0;
                }
              }
              else {
LAB_00104114:
                if (0x1004 < iVar8) {
                  local_70 = 0;
                  iVar8 = power_supply_get_property(*(undefined8 *)(param_1 + 0x130),0x33,&local_70)
                  ;
                  if (iVar8 == 0) {
                    if (0x1e0 < (int)local_70) goto LAB_00104144;
                  }
                  else if (iVar8 < 0) {
                    _printk("<6>[USBPD-PM]: %s: Couldn't get batt temp prop:%d\n","is_warm_charge",iVar8);
                  }
                }
                usbpd_pm_fc2_charge_algo_cool_warm_overcharge_timer = 0;
              }
              iVar8 = *(int *)(param_1 + -0x130);
              if ((*(int *)(param_1 + -0x138) <= pm_config_0 + -0x50) || (0x8fb < iVar8)) {
                fc2_taper_timer = 0;
LAB_00104208:
                uVar24 = uVar4;
                if ((int)uVar17 <= (int)uVar4) {
                  uVar24 = uVar17;
                }
                if (((0 < iVar9) && (0 < iVar8)) && ((int)((lVar12 - lVar23) / 1000000) < 10000)) {
                  iVar11 = iVar8 - usbpd_pm_fc2_charge_algo_fcc_limit;
                  if (iVar8 - usbpd_pm_fc2_charge_algo_fcc_limit == 0 ||
                      iVar8 < usbpd_pm_fc2_charge_algo_fcc_limit) {
                    iVar11 = usbpd_pm_fc2_charge_algo_fcc_limit - iVar8;
                  }
                  iVar8 = iVar9 - usbpd_pm_fc2_charge_algo_ibus_limit;
                  if (iVar9 - usbpd_pm_fc2_charge_algo_ibus_limit == 0 ||
                      iVar9 < usbpd_pm_fc2_charge_algo_ibus_limit) {
                    iVar8 = usbpd_pm_fc2_charge_algo_ibus_limit - iVar9;
                  }
                  _printk("<3>[USBPD-PM]: %s: fcc_ibatt_diff:%d sicl_ibus_diff:%d\n","usbpd_pm_fc2_charge_algo",iVar11,iVar8);
                  if ((iVar11 < 0x4b1) || (iVar8 < 0x1f5)) {
                    if ((699 < iVar11 - 0x1f5U) || (0xf9 < iVar8 - 0xfbU)) goto LAB_001042ec;
                    piVar18 = &stable_tune_step;
                    puVar20 = &stable_work_time;
                  }
                  else {
                    piVar18 = &fast_tune_step;
                    puVar20 = &fast_work_time;
                  }
                  *(undefined4 *)(param_1 + -0xd4) = *puVar20;
                  uVar24 = *piVar18 * uVar24;
                }
LAB_001042ec:
                _printk("<6>[USBPD-PM]: %s: step_vbat:%d step_ibat:%d step_ibus:%d sw_ctrl_steps:%d hw_ctrl_steps:%d steps:%d\n","usbpd_pm_fc2_charge_algo",uVar19,uVar2,uVar3,uVar4,uVar17,
                        uVar24);
                iVar9 = *(int *)(param_1 + -0xdc) + uVar24 * 0x14;
                iVar8 = 10000;
                if (*(int *)(param_1 + -0x1c) != 11000) {
                  iVar8 = *(int *)(param_1 + -0x1c);
                }
                if (iVar9 <= iVar8) {
                  iVar8 = iVar9;
                }
                *(int *)(param_1 + -0xdc) = iVar8;
                usbpd_pm_sm_g_status = 0;
                usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),*(undefined4 *)(param_1 + -0x14),
                                 iVar8 * 1000,*(int *)(param_1 + -0xd8) * 1000);
                _printk("<6>[USBPD-PM]: %s: request_voltage:%d, request_current:%d\n","usbpd_pm_sm",*(undefined4 *)(param_1 + -0xdc),
                        *(undefined4 *)(param_1 + -0xd8));
                break;
              }
              iVar11 = fc2_taper_timer + 1;
              bVar1 = fc2_taper_timer < 0xb;
              fc2_taper_timer = iVar11;
              if (bVar1) goto LAB_00104208;
              _printk("<3>[USBPD-PM]: %s: charge pump taper charging done\n","usbpd_pm_fc2_charge_algo");
              usbpd_pm_sm_g_status = 6;
              fc2_taper_timer = 0;
            }
            else {
LAB_0010403c:
              _printk("<3>[USBPD-PM]: %s: bat_ocp_fault:%d, bus_ocp_fault:%d, bat_ovp_fault:%d,bus_ovp_fault:%d\n","usbpd_pm_fc2_charge_algo",*(char *)(param_1 + -0x150),cVar6,
                      *(undefined1 *)(param_1 + -0x151),*(undefined1 *)(param_1 + -0x14f));
              usbpd_pm_sm_g_status = 2;
            }
            _printk("<6>[USBPD-PM]: %s: Move to switch charging:%d\n","usbpd_pm_sm");
            goto LAB_00104078;
          }
          _printk("<3>[USBPD-PM]: %s: bat_therm_fault:%d\n","usbpd_pm_fc2_charge_algo",1);
          usbpd_pm_sm_g_status = 1;
          _printk("<6>[USBPD-PM]: %s: Move to stop charging:%d\n","usbpd_pm_sm",1);
          uVar19 = *puVar25;
          usbpd_pm_sm_stop_sw = 1;
        }
        goto joined_r0x00103f7c;
      }
      *(undefined1 *)(param_1 + 0x120) = 0;
      _printk("<6>[USBPD-PM]: %s: N7:release ctrl\n","usbpd_pm_fc2_charge_algo");
      usbpd_pm_sm_g_status = 4;
    }
    else {
      _printk("<6>[USBPD-PM]: %s: N7:get smart chg ctrl val = %d, night_charging ctrl val = %d\n","usbpd_pm_fc2_charge_algo");
      usbpd_pm_sm_g_status = 5;
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
    _printk("<6>[USBPD-PM]: %s: because smart ctrl, cp enter hold state = %d\n","usbpd_pm_sm");
    if (7 < *puVar25) goto switchD_0010310c_default;
    _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*puVar25],"PD_PM_STATE_HOLD");
    *puVar25 = 6;
    break;
  case 6:
    _printk("<6>[USBPD-PM]: %s: N7:enter HOLD state\n","usbpd_pm_sm");
    if (usbpd_pm_sm_g_status == 4) {
      if (7 < *puVar25) goto switchD_0010310c_default;
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*puVar25],"PD_PM_STATE_ENTRY");
      *puVar25 = 0;
      puVar13 = "<6>[USBPD-PM]: %s: N7:switch PD_PM_STATE_ENTRY state\n";
    }
    else {
      if (usbpd_pm_sm_g_status != 5) break;
      usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),1,0,0);
      msleep(100);
      usbpd_set_iio_channel(lVar21,0,1,0);
      if (7 < *(uint *)(param_1 + -0x158)) goto switchD_0010310c_default;
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*(uint *)(param_1 + -0x158)],
              "PD_PM_STATE_FC2_TUNE");
      puVar13 = "<6>[USBPD-PM]: %s: N7:keep HOLD state\n";
      *puVar25 = 5;
    }
LAB_00103fc4:
    _printk(puVar13,"usbpd_pm_sm");
    break;
  case 7:
    usbpd_select_pdo(*(undefined8 *)(param_1 + -0xd0),1,0,0);
    if (*(long *)(param_1 + 0x110) != 0) {
      vote(*(long *)(param_1 + 0x110),"BQ_TAPER_FCC_VOTER",0,0);
    }
    *(undefined1 *)(param_1 + -0xe3) = 0;
    if ((((usbpd_pm_sm_stop_sw & 1) != 0) ||
        ((*(char *)(param_1 + -0xe4) == '\0' &&
         (usbpd_pm_enable_sw(lVar21,1), usbpd_pm_sm_stop_sw == 1)))) &&
       ((*(char *)(param_1 + -0xe4) != '\0' || (*(char *)(param_1 + -0xe3) != '\0')))) {
      usbpd_pm_enable_sw(lVar21,0);
    }
    usbpd_pm_check_sw_enabled(lVar21);
    *(undefined1 *)(param_1 + -0xe3) = 0;
    if (*(char *)(param_1 + -0x154) != '\0') {
      usbpd_set_iio_channel(lVar21,0,1,0);
      local_70 = 0;
      iVar8 = usbpd_get_iio_channel(lVar21,0,1,&local_70);
      if (iVar8 == 0) {
        *(bool *)(param_1 + -0x154) = (int)local_70 != 0;
      }
    }
    if (usbpd_pm_sm_recover == '\x01') {
      if (7 < *puVar25) goto switchD_0010310c_default;
      _printk("<6>[USBPD-PM]: %s: state change:%s -> %s\n","usbpd_pm_move_state",(&pm_str)[*puVar25],"PD_PM_STATE_ENTRY");
      *puVar25 = 0;
    }
    break;
  default:
    goto switchD_0010310c_default;
  }
  if (*(char *)(param_1 + -0xe1) != '\0') {
    uVar22 = __msecs_to_jiffies(*(undefined4 *)(param_1 + -0xd4));
    queue_delayed_work_on(0x20,_system_wq,param_1,uVar22);
  }
  lVar12 = sp_el0;
  if (*(long *)(lVar12 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- usbpd_psy_notifier_cb.9dd61d1666a507981f34d36e5495bdac @ 00104388 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
usbpd_psy_notifier_cb_9dd61d1666a507981f34d36e5495bdac(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar6 = sp_el0;
  local_38 = *(long *)(lVar6 + 0x5e0);
  if (param_2 != 0) goto LAB_00104490;
  if ((usbpd_psy_notifier_cb_first_flag & 1) == 0) {
    if (**(ulong **)(param_1 + 0xb8) < 0xfffffffffffff001) {
      if (**(ulong **)(param_1 + 0xb8) == 0) {
        uVar2 = iio_channel_get(*(undefined8 *)(param_1 + -0x1e8),"present");
        **(undefined8 **)(param_1 + 0xb8) = uVar2;
        if (0xfffffffffffff000 < **(ulong **)(param_1 + 0xb8)) {
          **(ulong **)(param_1 + 0xb8) = 0;
          _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_cp_chan_valid","present");
          goto LAB_001044d4;
        }
      }
      uVar5 = 0;
      puVar4 = &UNK_001011d2;
LAB_0010457c:
      usbpd_psy_notifier_cb_first_flag = 1;
      *(undefined1 *)(param_1 + 0xe4) = uVar5;
    }
    else {
LAB_001044d4:
      uVar3 = is_cp_chan_valid((undefined8 *)(param_1 + -0x1e8));
      if ((uVar3 & 1) != 0) {
        uVar5 = 1;
        puVar4 = "<3>[USBPD-PM]: %s: [cp_qc_psy_notifier_cb] BQ25960\n";
        goto LAB_0010457c;
      }
      usbpd_psy_notifier_cb_first_flag = 0;
      puVar4 = "<3>[USBPD-PM]: %s: qc3.0 can't find charge pump\n";
    }
    _printk(puVar4,"usbpd_psy_notifier_cb");
    lVar6 = *(long *)(param_1 + 0xb0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0xb0);
  }
  if (lVar6 == 0) {
    lVar6 = power_supply_get_by_name("usb");
    *(long *)(param_1 + 0xb0) = lVar6;
    if (lVar6 == 0) {
      _printk("<3>[USBPD-PM]: %s: usb psy not found!\n","usbpd_check_usb_psy");
    }
  }
  lVar6 = *(long *)(param_1 + 0xa8);
  if (lVar6 == 0) {
    lVar6 = power_supply_get_by_name("battery");
    *(long *)(param_1 + 0xa8) = lVar6;
    if (lVar6 != 0) goto LAB_00104400;
    _printk("<3>[USBPD-PM]: %s: batt psy not found!\n","usbpd_check_batt_psy");
  }
  else {
LAB_00104400:
    if (lVar6 == param_3) {
      local_40 = 0;
      iVar1 = power_supply_get_property(param_3,8,&local_40);
      if (iVar1 < 0) {
        _printk("<3>[USBPD-PM]: %s: voltage_max is not ready fail ret = %d\n","cycle_count_reduce_voltage",iVar1);
        pm_config_0 = 0x1194;
      }
      else {
        pm_config_0 = (int)local_40 / 1000;
      }
    }
  }
  if (*(long *)(param_1 + 0xb0) == param_3) {
    uVar2 = _raw_spin_lock_irqsave(param_1 + 0x80);
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
      queue_work_on(0x20,_system_wq,param_1 + 0x50);
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x80,uVar2);
  }
LAB_00104490:
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* ---- usbpd_pm_evaluate_src_caps @ 001045d4 ---- */

void usbpd_pm_evaluate_src_caps(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar4 = param_1[0x12];
  if (lVar4 == 0) {
    lVar4 = smb_get_usbpd();
    param_1[0x12] = lVar4;
    if (lVar4 == 0) {
      puVar5 = "<3>[USBPD-PM]: %s: couldn't get usbpd device\n";
      goto LAB_001047cc;
    }
  }
  iVar1 = usbpd_fetch_pdo(lVar4,param_1 + 0x13);
  if (iVar1 != 0) {
    puVar5 = "<3>[USBPD-PM]: %s: Failed to fetch pdo info\n";
LAB_001047cc:
    _printk(puVar5,"usbpd_pm_evaluate_src_caps");
    return;
  }
  *(undefined8 *)((long)param_1 + 0x144) = 0x7d000002710;
  if (((((((((*(int *)((long)param_1 + 0x9c) == 3) && (*(char *)(param_1 + 0x13) != '\0')) &&
           (iVar1 = *(int *)((long)param_1 + 0xac), iVar1 != 0)) &&
          ((iVar2 = *(int *)(param_1 + 0x14), 9999 < iVar2 &&
           (iVar8 = *(int *)(param_1 + 0x15), 1999 < iVar8)))) ||
         ((((*(int *)((long)param_1 + 0xb4) == 3 &&
            ((*(char *)(param_1 + 0x16) != '\0' &&
             (iVar1 = *(int *)((long)param_1 + 0xc4), iVar1 != 0)))) &&
           (iVar2 = *(int *)(param_1 + 0x17), 9999 < iVar2)) &&
          (iVar8 = *(int *)(param_1 + 0x18), 1999 < iVar8)))) ||
        ((((*(int *)((long)param_1 + 0xcc) == 3 && (*(char *)(param_1 + 0x19) != '\0')) &&
          (iVar1 = *(int *)((long)param_1 + 0xdc), iVar1 != 0)) &&
         ((iVar2 = *(int *)(param_1 + 0x1a), 9999 < iVar2 &&
          (iVar8 = *(int *)(param_1 + 0x1b), 1999 < iVar8)))))) ||
       ((((*(int *)((long)param_1 + 0xe4) == 3 &&
          ((*(char *)(param_1 + 0x1c) != '\0' &&
           (iVar1 = *(int *)((long)param_1 + 0xf4), iVar1 != 0)))) &&
         ((iVar2 = *(int *)(param_1 + 0x1d), 9999 < iVar2 &&
          (iVar8 = *(int *)(param_1 + 0x1e), 1999 < iVar8)))) ||
        ((((*(int *)((long)param_1 + 0xfc) == 3 && (*(char *)(param_1 + 0x1f) != '\0')) &&
          (iVar1 = *(int *)((long)param_1 + 0x10c), iVar1 != 0)) &&
         ((iVar2 = *(int *)(param_1 + 0x20), 9999 < iVar2 &&
          (iVar8 = *(int *)(param_1 + 0x21), 1999 < iVar8)))))))) ||
      (((*(int *)((long)param_1 + 0x114) == 3 &&
        ((*(char *)(param_1 + 0x22) != '\0' && (iVar1 = *(int *)((long)param_1 + 0x124), iVar1 != 0)
         ))) && ((iVar2 = *(int *)(param_1 + 0x23), 9999 < iVar2 &&
                 (iVar8 = *(int *)(param_1 + 0x24), 1999 < iVar8)))))) ||
     ((((*(int *)((long)param_1 + 300) == 3 && (*(char *)(param_1 + 0x25) != '\0')) &&
       (iVar1 = *(int *)((long)param_1 + 0x13c), iVar1 != 0)) &&
      ((iVar2 = *(int *)(param_1 + 0x26), 9999 < iVar2 &&
       (iVar8 = *(int *)(param_1 + 0x27), 1999 < iVar8)))))) {
    *(int *)((long)param_1 + 0x144) = iVar2;
    *(int *)(param_1 + 0x29) = iVar8;
    *(int *)((long)param_1 + 0x14c) = iVar1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      puVar5 = "<6>[USBPD-PM]: %s: Not qualified PPS adapter\n";
      goto LAB_001047cc;
    }
    iVar2 = 10000;
  }
  uVar7 = *(ulong *)(param_1[0x55] + 0x18);
  if (uVar7 < 0xfffffffffffff001) {
    if (uVar7 == 0) {
      uVar6 = iio_channel_get(*param_1,"apdo_volt");
      *(undefined8 *)(param_1[0x55] + 0x18) = uVar6;
      uVar7 = *(ulong *)(param_1[0x55] + 0x18);
      if (0xfffffffffffff000 < uVar7) {
        *(undefined8 *)(param_1[0x55] + 0x18) = 0;
        _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","apdo_volt");
        goto LAB_00104874;
      }
    }
    iio_write_channel_raw(uVar7,iVar2);
  }
LAB_00104874:
  uVar7 = *(ulong *)(param_1[0x55] + 0x20);
  if (uVar7 < 0xfffffffffffff001) {
    uVar3 = *(undefined4 *)(param_1 + 0x29);
    if (uVar7 == 0) {
      uVar6 = iio_channel_get(*param_1,"apdo_curr");
      *(undefined8 *)(param_1[0x55] + 0x20) = uVar6;
      uVar7 = *(ulong *)(param_1[0x55] + 0x20);
      if (0xfffffffffffff000 < uVar7) {
        *(undefined8 *)(param_1[0x55] + 0x20) = 0;
        _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","apdo_curr");
        goto LAB_001048e4;
      }
    }
    iio_write_channel_raw(uVar7,uVar3);
  }
LAB_001048e4:
  _printk("<6>[USBPD-PM]: %s: PPS supported, preferred APDO pos:%d, max volt:%d, current:%d\n","usbpd_pm_evaluate_src_caps",*(undefined4 *)((long)param_1 + 0x14c),
          *(undefined4 *)((long)param_1 + 0x144),*(undefined4 *)(param_1 + 0x29));
  if (*(int *)(param_1 + 0x29) < 0x7d1) {
    *(undefined4 *)(param_1 + 0x29) = 0x5dc;
  }
  if (0xfffffffffffff000 < (ulong)param_1[0x12]) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = usbpd_get_src_cap_id();
  if (iVar1 == iVar2) {
    return;
  }
  uVar3 = usbpd_get_src_cap_id(param_1[0x12]);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  return;
}



/* ---- usbpd_pm_enable_sw @ 00104944 ---- */

void usbpd_pm_enable_sw(undefined8 *param_1,byte param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar3 = *(ulong *)(param_1[0x55] + 0x10);
  if (uVar3 < 0xfffffffffffff001) {
    if (uVar3 == 0) {
      uVar2 = iio_channel_get(*param_1,"battery_charging_enabled");
      *(undefined8 *)(param_1[0x55] + 0x10) = uVar2;
      uVar3 = *(ulong *)(param_1[0x55] + 0x10);
      if (0xfffffffffffff000 < uVar3) {
        *(undefined8 *)(param_1[0x55] + 0x10) = 0;
        _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_charging_enabled");
        iVar1 = -0x13;
        goto LAB_001049f4;
      }
    }
    iVar1 = iio_write_channel_raw(uVar3,param_2 & 1);
    if (-1 < iVar1) {
      iVar1 = 0;
      *(byte *)((long)param_1 + 0x7c) = param_2 & 1;
    }
  }
  else {
    iVar1 = -0x13;
  }
LAB_001049f4:
  _printk("<3>[USBPD-PM]: %s: set battey charging en = %d, ret = %d\n","usbpd_pm_enable_sw",param_2 & 1,iVar1);
  return;
}



/* ---- usbpd_pm_check_sw_enabled @ 00104a24 ---- */

void usbpd_pm_check_sw_enabled(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0;
  uVar4 = *(ulong *)(param_1[0x55] + 0x10);
  if (uVar4 < 0xfffffffffffff001) {
    if (uVar4 == 0) {
      uVar3 = iio_channel_get(*param_1,"battery_charging_enabled");
      *(undefined8 *)(param_1[0x55] + 0x10) = uVar3;
      uVar4 = *(ulong *)(param_1[0x55] + 0x10);
      if (0xfffffffffffff000 < uVar4) {
        *(undefined8 *)(param_1[0x55] + 0x10) = 0;
        _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_charging_enabled");
        goto LAB_00104b00;
      }
    }
    iVar2 = iio_read_channel_processed(uVar4,&local_30);
    if (-1 < iVar2) {
      *(bool *)((long)param_1 + 0x7c) = (int)local_30 != 0;
      goto LAB_00104aac;
    }
  }
  else {
LAB_00104b00:
    iVar2 = -0x13;
  }
  _printk("<3>[USBPD-PM]: %s: Failed to check sw enabled, ret = %d\n","usbpd_pm_check_sw_enabled",iVar2);
LAB_00104aac:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- pd_disable_cp_by_jeita_status @ 00104b20 ---- */

void pd_disable_cp_by_jeita_status(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  if (param_1[0x52] == 0) {
    lVar4 = power_supply_get_by_name("battery");
    param_1[0x52] = lVar4;
    if (lVar4 == 0) {
      _printk("<3>[USBPD-PM]: %s: batt psy not found!\n","usbpd_check_batt_psy");
      bVar2 = true;
      goto LAB_00104d58;
    }
  }
  local_30 = 0;
  uVar7 = *(ulong *)(param_1[0x55] + 8);
  if (uVar7 < 0xfffffffffffff001) {
    if (uVar7 == 0) {
      uVar5 = iio_channel_get(*param_1,"cp_input_suspend");
      *(undefined8 *)(param_1[0x55] + 8) = uVar5;
      uVar7 = *(ulong *)(param_1[0x55] + 8);
      if (0xfffffffffffff000 < uVar7) {
        *(undefined8 *)(param_1[0x55] + 8) = 0;
        _printk("<3>[USBPD-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","cp_input_suspend");
        goto LAB_00104d3c;
      }
    }
    iVar3 = iio_read_channel_processed(uVar7,&local_30);
    if (iVar3 < 0) goto LAB_00104d40;
    iVar1 = (int)local_30;
    local_30 = 0;
    iVar3 = power_supply_get_property(param_1[0x52],0x33,&local_30);
    if (iVar3 != 0) {
      if (-1 < iVar3) {
        if (iVar1 == 0) {
          iVar3 = 0;
LAB_00104be0:
          if (*(char *)((long)param_1 + 0x2c9) == '\0') {
            puVar6 = "<3>[USBPD-PM]: %s: jeita lower limit reached, batt_temp:%d\n";
            goto LAB_00104c14;
          }
          goto LAB_00104c34;
        }
        goto LAB_00104c80;
      }
      puVar6 = "<6>[USBPD-PM]: %s: Couldn't get batt temp prop:%d\n";
      goto LAB_00104d48;
    }
    if (iVar1 != 0) {
LAB_00104c80:
      bVar2 = true;
      goto LAB_00104d58;
    }
    iVar3 = (int)local_30;
    if ((int)local_30 < 0x1e0) {
      if ((int)local_30 < 0x65) goto LAB_00104be0;
    }
    else if (*(char *)((long)param_1 + 0x2c9) == '\0') {
      puVar6 = "<3>[USBPD-PM]: %s: jeita upper limit reached, batt_temp:%d\n";
LAB_00104c14:
      _printk(puVar6,"pd_disable_cp_by_jeita_status");
      bVar2 = true;
      *(undefined1 *)((long)param_1 + 0x2c9) = 1;
      goto LAB_00104d58;
    }
LAB_00104c34:
    if (*(char *)((long)param_1 + 0x2cb) != '\0') {
      if ((((*(int *)(param_1 + 5) < pm_config_0 + -100) && (iVar3 < 0xb5)) ||
          (*(int *)(param_1 + 5) < 4000 && 0x1c1 < iVar3)) || (iVar3 - 0xb5U < 0x10d)) {
        _printk("<3>[USBPD-PM]: %s: after cool and warm state recharge, batt_temp:%d,vbat_volt=%d,bat_volt_lp_lmt=%d,bq_cool_warm_done=%d\n","pd_disable_cp_by_jeita_status");
        bVar2 = false;
        *(undefined1 *)((long)param_1 + 0x2cb) = 0;
        goto LAB_00104d58;
      }
      goto LAB_00104c80;
    }
    if (0x154 < iVar3 - 0x78U) {
      bVar2 = *(char *)((long)param_1 + 0x2c9) != '\0';
      goto LAB_00104d58;
    }
    if (*(char *)((long)param_1 + 0x2c9) != '\0') {
      _printk("<3>[USBPD-PM]: %s: jeita returned to normal, batt_temp:%d\n","pd_disable_cp_by_jeita_status");
      bVar2 = false;
      *(undefined1 *)((long)param_1 + 0x2c9) = 0;
      goto LAB_00104d58;
    }
  }
  else {
LAB_00104d3c:
    iVar3 = -0x13;
LAB_00104d40:
    puVar6 = "<3>[USBPD-PM]: %s: Failed to get input suspend, rc = %d\n";
LAB_00104d48:
    _printk(puVar6,"pd_disable_cp_by_jeita_status",iVar3);
  }
  bVar2 = false;
LAB_00104d58:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}



/* ---- init_module @ 00104de4 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  __platform_driver_register(&usbpd_pm_driver,&__this_module);
  return;
}



/* ---- cleanup_module @ 00104e18 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  platform_driver_unregister(&usbpd_pm_driver);
  return;
}


/* functions: 16 ok, 0 failed */
