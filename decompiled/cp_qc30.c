/* Decompiled with Ghidra from cp_qc30.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] debug_mask
// [.rodata] CP_STATE_FLASH2_TUNE
// [.rodata] cp_qc30_iio_init
// [.rodata] status
// [.rodata] 3[FC2-PM]: %s: battery charging enabled: %d

// [.rodata] 6[FC2-PM]: %s: effective_usb_icl_val: %d voted by:%s

// [.rodata] qc3_get_bms_fastcharge_mode
// [.rodata] MAIN_CHG_VOTER
// [.rodata] bq_vbus_present
// [.rodata] cp_check_sw_limited
// [.rodata] 6[FC2-PM]: %s: is_temp_out_fc2_range:%d

// [.rodata] 6[FC2-PM]: %s: retry_enable_cp_count=%d

// [.rodata] 3[FC2-PM]: %s: entry3:vbat volt is ok, enable flash charging, charge_enabled=%d

// [.rodata] cp_move_state
// [.rodata] 3[FC2-PM]: %s: cp enable %d,ret is %d 

// [.rodata] cp_enable_charge_pump
// [.rodata] 3[FC2-PM]: %s: set sw charging en = %d

// [.rodata] cp_get_effective_usb_icl_val
// [.rodata] 3[FC2-PM]: %s: cp_tune_vbus_volt up

// [.rodata] 6[FC2-PM]: %s: Couldn't get fastcharge mode:%d

// [.rodata] mi,cp-sec-enable
// [.rodata] 3[FC2-PM]: %s: cp_qc30_iio_init end

// [.rodata] 3[FC2-PM]: %s: No state defined! Move to stop charging

// [.rodata] cp_limit_sw
// [.rodata] cp_tune_vbus_volt
// [.rodata] sc_battery_present
// [.rodata] 6[FC2-PM]: %s: vbus disconnected

// [.rodata] 6[FC2-PM]: %s: battery volt: %d is ok, proceeding to flash charging...

// [.rodata] 3[FC2-PM]: %s: set battey charging fail

// [.rodata] 3[FC2-PM]: %s: qc3-bat-volt-max property missing, use default val

// [.rodata] mi,qc3-ffc-bat-volt-max
// [.rodata] 3[FC2-PM]: %s: qc3-bus-volt-max property missing, use default val

// [.rodata] mi,qc3-bus-curr-max
// [.rodata] sc_alarm_status
// [.rodata] 3[FC2-PM]: %s: pm_state.sw_chager.charge_limited: %d

// [.rodata] 6[FC2-PM]: %s: thermal or batt temp recovery...

// [.rodata] 3[FC2-PM]: %s: batt_temp: %d

// [.rodata] 3[FC2-PM]: %s: set bus protection %d,ret is %d 

// [.rodata] bq_charging_enabled
// [.rodata] bq_bus_current
// [.rodata] bq_set_bus_protection
// [.rodata] battery_charging_enabled
// [.rodata] 6[FC2-PM]: %s: get input suspend:%d, rc = %d

// [.rodata] 6[FC2-PM]: %s: tune adapter voltage %s %s

// [.rodata] CP_STATE_STOP_CHARGE
// [.rodata] 6[FC2-PM]: %s: cp_get_usb_type:%d

// [.rodata] 6[FC2-PM]: %s: vbus connected

// [.rodata] 3[FC2-PM]: %s: entry1:vbat=%d,vbus=%d

// [.rodata] 3[FC2-PM]: %s: pm_state change:%s -> %s

// [.rodata] 3[FC2-PM]: %s: pm_state.charge_pump.charge_enabled: %d

// [.rodata] cp_set_qc_bus_protections
// [.rodata] cp_qc30_register_notifier
// [.rodata] cp_get_usb_type
// [.rodata] bq_alarm_status
// [.rodata] 3[FC2-PM]: %s: entry1:voltage tuned above expected voltage, retry %d times

// [.rodata] 3[FC2-PM]: %s: Move to stop charging:%d

// [.rodata] 3[FC2-PM]: %s: Failed to get input suspend, ret = %d

// [.rodata] 3[FC2-PM]: %s: return to normal batt_temp: %d

// [.rodata] cp_flash2_charge
// [.rodata] 3[FC2-PM]: %s: cp_tune_vbus_volt down

// [.rodata] sc_battery_voltage
// [.rodata] bq_battery_voltage
// [.rodata] bq_battery_current
// [.rodata] real_type
// [.rodata] 3[FC2-PM]: %s: vbat=%d,vbus=%d

// [.rodata] 6[FC2-PM]: %s: reset vbus volt %s

// [.rodata] 3[FC2-PM]: %s: cool batt_temp: %d

// [.rodata] battery
// [.rodata] 3[FC2-PM]: %s: Move to switch charging:%d

// [.rodata] cp_reset_vbus_volt
// [.rodata] 6[FC2-PM]: %s: Couldn't get batt temp prop:%d

// [.rodata] CP_STATE_SW_ENTRY_2
// [.rodata] sc_battery_temperature
// [.rodata] sc_vbus_error_status
// [.rodata] bq_present
// [.rodata] bq_status
// [.rodata] 3[FC2-PM]: %s: entry3:vbus volt is too high:%d, vbat:%d wait it down

// [.rodata] 3[FC2-PM]: %s: qc3p5_reset_vbus_retry=%d,vbus=%d

// [.rodata] qc3_get_batt_current_thermal_level
// [.rodata] sc_bus_current
// [.rodata] sc_fault_status
// [.rodata] 3[FC2-PM]: %s: Stop charging

// [.rodata] CP_STATE_SW_LOOP
// [.rodata] cp_qc30_probe
// [.rodata] 3[FC2-PM]: %s: Couldn't parse device tree rc=%d

// [.rodata] sc_die_temperature
// [.rodata] 3[FC2-PM]: %s: warm batt_temp: %d

// [.rodata] 3[FC2-PM]: %s: [cp_qc_psy_notifier_cb] SC8541

// [.rodata] CP_STATE_FLASH2_ENTRY_3
// [.rodata] 6[FC2-PM]: %s: %s enter

// [.rodata] 3[FC2-PM]: %s: qc3-bus-curr-max property missing, use default val

// [.rodata] sc_battery_current
// [.rodata] is_smb_chan_valid
// [.rodata] cp_statemachine
// [.rodata] 3[FC2-PM]: %s: Move to switch charging, will try to recover to flash charging:%d

// [.rodata] 3[FC2-PM]: %s: cp_limit_sw fail

// [.rodata] CP_STATE_ENTRY
// [.rodata] sc_bus_temperature
// [.rodata] battery_dp_dm
// [.rodata] USB_ICL
// [.rodata] cp_get_qc_hvdcp3_type
// [.rodata] CP_STATE_SW_ENTRY
// [.rodata] bq_battery_present
// [.rodata] bq_bus_voltage
// [.rodata] cp_input_suspend
// [.rodata] cp_update_batt_info
// [.rodata] 3[FC2-PM]: %s: Failed to reset qc3.5 adapter volt to 6.55v or less

// [.rodata] cp_get_batt_capacity
// [.rodata] 3[FC2-PM]: %s: device tree node missing

// [.rodata] bq_battery_temperature
// [.rodata] present
// [.rodata] successfully
// [.rodata] 6[FC2-PM]: %s: charge pump qc3 probe success

// [.rodata] cp_qc30_parse_dt
// [.rodata] charging_enabled
// [.rodata] sc_vbus_present
// [.rodata] hvdcp3_type
// [.rodata] 6[FC2-PM]: %s: thermal level (%d) too high or batt temp is out of fc2 range, pm_state.is_temp_out_fc2_range:%d

// [.rodata] mi,qc3-bat-volt-max
// [.rodata] 6[FC2-PM]: %s: thermal too high or batt temp out of range or slowly charging, waiting...

// [.rodata] 3[FC2-PM]: %s: [%s] find votable: USB_ICL failed!

// [.rodata] cp_get_effective_fcc_val
// [.rodata] CP_STATE_FLASH2_DELAY
// [.rodata] 6[FC2-PM]: %s: vbus_volt:%d

// [.rodata] 6[FC2-PM]: %s: sw check enable

// [.rodata] 6[FC2-PM]: %s: thermal(%d) too high or batt temp out of range

// [.rodata] 6[FC2-PM]: %s: effective_fcc_val: %d

// [.rodata] bq_vbus_error_status
// [.rodata] 6[FC2-PM]: %s: ibat:%d vbat_from_qg:%d 

// [.rodata] 3[FC2-PM]: %s: vbat=%d, vbus=%d

// [.rodata] 6[FC2-PM]: %s: capacity:%d

// [.rodata] sc_set_bus_protection
// [.rodata] 6[FC2-PM]: %s: enable sw charger

// [.rodata] CP_STATE_FLASH2_ENTRY
// [.rodata] bq_die_temperature
// [.rodata] 6[FC2-PM]: %s: Couldn't get themal level:%d

// [.rodata] 6[FC2-PM]: %s: cp_get_qc_hvdcp3_type:%d

// [.rodata] 6[FC2-PM]: %s: pm_state.usb_type: %d

// [.rodata] CP_STATE_FLASH2_ENTRY_1
// [.rodata] 3[FC2-PM]: %s: qc3-bat-curr-max property missing, use default val

// [.rodata] battery_charging_limited
// [.rodata] cp_check_sw_enabled
// [.rodata] cp_check_charge_pump_enabled
// [.rodata] cp_qc30_get_input_suspend
// [.rodata] cp_qc30_notifier_call
// [.rodata] 3[FC2-PM]: %s: qc3.0 can't find charge pump

// [.rodata] 3[FC2-PM]: %s: qc3-ffc-bat-volt-max property missing, use default

// [.rodata] sc_bus_voltage
// [.rodata] 6[FC2-PM]: %s: vbus=%d; ibus_lmt=%d,ibus:%d; vbat_lmt=%d,vbat=%d; ibat_lmt=%d,ibat=%d

// [.rodata] bq_fault_status
// [.rodata] is_cp_chan_valid
// [.rodata] qc3_disable_cp_by_jeita_status
// [.rodata] CP_STATE_DISCONNECT
// [.rodata] 3[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d

// [.rodata] mi,qc3-bat-curr-max
// [.rodata] mi,qc3-bus-volt-max
// [.rodata] 3[FC2-PM]: %s: cp_qc30_iio_init start

// [.rodata] bq_bus_temperature
// [.rodata] QC3P5_BQ_TAPER_FCC_VOTER
// [.rodata] 6[FC2-PM]: %s: unsupport qc3, use sw charging

// [.rodata] 3[FC2-PM]: %s: entry1:Failed to tune adapter volt into valid range, charge with switching charger

// [.rodata] cp_enable_sw
// [.rodata] 3[FC2-PM]: %s: val.intval: %d

// [.rodata] 3[FC2-PM]: %s: Couldn't register psy notifier rc = %d

// [.rodata] 3[FC2-PM]: %s: [cp_qc_psy_notifier_cb] BQ25960

// [.modinfo] parmtype=debug_mask:int
// [.modinfo] author=Fei Jiang<jiangfei1@xiaomi.com>
// [.modinfo] description=Xiaomi cp qc30
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=cp_qc30
// [.modinfo] intree=Y
// [.modinfo] depends=qcom-pmic-voter
// [.modinfo] scmversion=gaf44d52a5e5f
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] system_wq
// [__versions] param_ops_int
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] platform_driver_unregister
// [__versions] cancel_delayed_work
// [__versions] power_supply_reg_notifier
// [__versions] __msecs_to_jiffies
// [__versions] queue_delayed_work_on
// [__versions] get_effective_client
// [__versions] get_effective_result
// [__versions] usleep_range_state
// [__versions] iio_write_channel_raw
// [__versions] find_votable
// [__versions] power_supply_get_by_name
// [__versions] power_supply_get_property
// [__versions] iio_channel_get
// [__versions] iio_read_channel_processed
// [__versions] of_find_property
// [__versions] of_property_read_variable_u32_array
// [__versions] devm_kmalloc
// [__versions] delayed_work_timer_fn
// [__versions] init_timer_key
// [__versions] _printk
// [__versions] __platform_driver_register
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
// [.shstrtab] .rela.data.pm_state_str
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
// [.strtab] cp_statemachine.tune_vbus_retry
// [.strtab] cp_statemachine.recovery
// [.strtab] init_timer_key
// [.strtab] of_property_read_variable_u32_array
// [.strtab] cp_enable_sw
// [.strtab] iio_write_channel_raw
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] cp_statemachine.tune_vbus_count
// [.strtab] cp_statemachine.retry_enable_cp_count
// [.strtab] param_ops_int
// [.strtab] get_effective_client
// [.strtab] get_effective_result
// [.strtab] cp_reset_vbus_volt
// [.strtab] cp_tune_vbus_volt
// [.strtab] delayed_work_timer_fn.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] cp_qc30_notifier_call.3e24a9ffe7ca6358fc3521cec38d2d37.cfi_jt
// [.strtab] cp_qc30_remove.3e24a9ffe7ca6358fc3521cec38d2d37.cfi_jt
// [.strtab] cp_qc30_probe.3e24a9ffe7ca6358fc3521cec38d2d37.cfi_jt
// [.strtab] cp_workfunc.3e24a9ffe7ca6358fc3521cec38d2d37.cfi_jt
// [.strtab] cp_flash2_charge.ibat_limit
// [.strtab] cp_flash2_charge.ibus_limit
// [.strtab] iio_channel_get
// [.strtab] cp_update_sw_status
// [.strtab] cp_update_fc_status
// [.strtab] qc3_disable_cp_by_jeita_status
// [.strtab] ____versions
// [.strtab] __msecs_to_jiffies
// [.strtab] pm_state_str
// [.strtab] cp_qc30_driver
// [.strtab] platform_driver_unregister
// [.strtab] __platform_driver_register
// [.strtab] fc2_taper_timer
// [.strtab] power_supply_reg_notifier
// [.strtab] system_wq
// [.strtab] cp_enable_charge_pump
// [.strtab] strcmp
// [.strtab] msleep
// [.strtab] queue_delayed_work_on
// [.strtab] cp_qc30_notifier_call.usb_hvdcp3_on
// [.strtab] delayed_work_timer_fn
// [.strtab] cp_qc30_notifier_call
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] cp_q30_set_iio_channel
// [.strtab] cp_qc30_get_iio_channel
// [.strtab] cp_get_effective_usb_icl_val
// [.strtab] _printk
// [.strtab] __param_str_debug_mask
// [.strtab] __param_debug_mask
// [.strtab] cancel_delayed_work
// [.strtab] __cfi_check
// [.strtab] cp_qc30_of_match
// [.strtab] cp_qc30_notifier_call.first_flag
// [.strtab] cp_qc30_remove
// [.strtab] vote
// [.strtab] pm_state
// [.strtab] cp_move_state
// [.strtab] usleep_range_state
// [.strtab] cp_get_usb_type
// [.strtab] power_supply_get_by_name
// [.strtab] cp_iio_chan_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] find_votable
// [.strtab] cp_qc30_probe
// [.strtab] is_cp_chan_valid
// [.strtab] iio_read_channel_processed
// [.strtab] cp_check_charge_pump_enabled
// [.strtab] devm_kmalloc
// [.strtab] cp_workfunc
// [.strtab] _note_9
// [.strtab] __UNIQUE_ID_debug_masktype449
// [.strtab] $d.49
// [.strtab] $d.39
// [.strtab] $d.29
// [.strtab] $x.19
// [.strtab] $x.9
// [.strtab] _note_8
// [.strtab] __UNIQUE_ID_license458
// [.strtab] $d.58
// [.strtab] $d.48
// [.strtab] $d.38
// [.strtab] $d.28
// [.strtab] $x.18
// [.strtab] $x.8
// [.strtab] sys_config.8
// [.strtab] $d.8
// [.strtab] __UNIQUE_ID_description457
// [.strtab] $d.47
// [.strtab] cp_qc30_notifier_call.3e24a9ffe7ca6358fc3521cec38d2d37
// [.strtab] cp_qc30_remove.3e24a9ffe7ca6358fc3521cec38d2d37
// [.strtab] cp_qc30_probe.3e24a9ffe7ca6358fc3521cec38d2d37
// [.strtab] cp_workfunc.3e24a9ffe7ca6358fc3521cec38d2d37
// [.strtab] $d.37
// [.strtab] $d.27
// [.strtab] $x.17
// [.strtab] $x.7
// [.strtab] sys_config.7
// [.strtab] __UNIQUE_ID_author456
// [.strtab] $d.46
// [.strtab] $d.36
// [.strtab] $d.26
// [.strtab] $x.16
// [.strtab] $x.6
// [.strtab] sys_config.6
// [.strtab] $d.6
// [.strtab] $d.45
// [.strtab] $d.35
// [.strtab] $d.25
// [.strtab] $x.15
// [.strtab] $x.5
// [.strtab] sys_config.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.44
// [.strtab] $d.34
// [.strtab] $x.24
// [.strtab] $x.14
// [.strtab] $x.4
// [.strtab] sys_config.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.43
// [.strtab] $d.33
// [.strtab] $d.23
// [.strtab] $x.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.52
// [.strtab] $d.42
// [.strtab] $d.32
// [.strtab] $x.22
// [.strtab] $x.12
// [.strtab] $x.2
// [.strtab] sys_config.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.51
// [.strtab] $d.41
// [.strtab] $d.31
// [.strtab] $x.21
// [.strtab] $x.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.50
// [.strtab] $d.40
// [.strtab] $d.30
// [.strtab] $x.20
// [.strtab] $x.10
// [.strtab] sys_config.0

/* ---- cp_qc30_probe.3e24a9ffe7ca6358fc3521cec38d2d37 @ 00102158 ---- */

int cp_qc30_probe_3e24a9ffe7ca6358fc3521cec38d2d37(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>[FC2-PM]: %s: %s enter\n","cp_qc30_probe","cp_qc30_probe");
  plVar3 = (long *)devm_kmalloc(param_1 + 0x10,0xd8,0xdc0);
  if (plVar3 == (long *)0x0) {
    iVar2 = -0xc;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x300);
    *plVar3 = param_1 + 0x10;
    if (lVar4 == 0) {
      _printk("<3>[FC2-PM]: %s: device tree node missing\n","cp_qc30_parse_dt");
      iVar2 = -0x16;
    }
    else {
      iVar2 = of_property_read_variable_u32_array(lVar4,"mi,qc3-bat-volt-max",plVar3 + 1,1,0);
      if (iVar2 < 0) {
        _printk("<3>[FC2-PM]: %s: qc3-bat-volt-max property missing, use default val\n","cp_qc30_parse_dt");
      }
      else {
        sys_config_0 = (undefined2)plVar3[1];
      }
      iVar2 = of_property_read_variable_u32_array
                        (lVar4,"mi,qc3-ffc-bat-volt-max",(long)plVar3 + 0xc,1,0);
      if (iVar2 < 0) {
        _printk("<3>[FC2-PM]: %s: qc3-ffc-bat-volt-max property missing, use default\n","cp_qc30_parse_dt");
      }
      iVar2 = of_property_read_variable_u32_array(lVar4,"mi,qc3-bat-curr-max",plVar3 + 2,1,0);
      if (iVar2 < 0) {
        _printk("<3>[FC2-PM]: %s: qc3-bat-curr-max property missing, use default val\n","cp_qc30_parse_dt");
      }
      else {
        sys_config_2 = (undefined2)plVar3[2];
      }
      iVar2 = of_property_read_variable_u32_array
                        (lVar4,"mi,qc3-bus-volt-max",(long)plVar3 + 0x14,1,0);
      if (iVar2 < 0) {
        _printk("<3>[FC2-PM]: %s: qc3-bus-volt-max property missing, use default val\n","cp_qc30_parse_dt");
      }
      iVar2 = of_property_read_variable_u32_array(lVar4,"mi,qc3-bus-curr-max",plVar3 + 3,1,0);
      if (iVar2 < 0) {
        _printk("<3>[FC2-PM]: %s: qc3-bus-curr-max property missing, use default val\n","cp_qc30_parse_dt");
      }
      else {
        sys_config_4 = (undefined2)plVar3[3];
      }
      lVar4 = of_find_property(lVar4,"mi,cp-sec-enable",0);
      *(bool *)((long)plVar3 + 0x1c) = lVar4 != 0;
      uVar1 = sys_config_4;
      if (-1 < iVar2) {
        *(long **)(param_1 + 0xa8) = plVar3;
        DAT_00100090 = 0;
        DAT_00100008 = 1;
        DAT_00100006 = uVar1;
        *(undefined4 *)(plVar3 + 0x1a) = 100;
        _printk("<3>[FC2-PM]: %s: cp_qc30_iio_init start\n","cp_qc30_iio_init");
        lVar4 = devm_kmalloc(*plVar3,0x100,0xdc0);
        plVar3[0x18] = lVar4;
        if (lVar4 != 0) {
          lVar4 = devm_kmalloc(*plVar3,0x30,0xdc0);
          plVar3[0x19] = lVar4;
          if (lVar4 != 0) {
            _printk("<3>[FC2-PM]: %s: cp_qc30_iio_init end\n","cp_qc30_iio_init");
          }
        }
        plVar3[7] = 0xfffffffe0;
        plVar3[8] = (long)(plVar3 + 8);
        plVar3[9] = (long)(plVar3 + 8);
        plVar3[10] = (long)cp_workfunc_3e24a9ffe7ca6358fc3521cec38d2d37_cfi_jt;
        init_timer_key(plVar3 + 0xd,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
        plVar3[4] = (long)cp_qc30_notifier_call_3e24a9ffe7ca6358fc3521cec38d2d37_cfi_jt;
        iVar2 = power_supply_reg_notifier(plVar3 + 4);
        if (iVar2 < 0) {
          _printk("<3>[FC2-PM]: %s: Couldn't register psy notifier rc = %d\n","cp_qc30_register_notifier",iVar2);
        }
        _printk("<6>[FC2-PM]: %s: charge pump qc3 probe success\n","cp_qc30_probe");
        return 0;
      }
    }
    _printk("<3>[FC2-PM]: %s: Couldn't parse device tree rc=%d\n","cp_qc30_probe",iVar2);
  }
  return iVar2;
}



/* ---- cp_qc30_remove.3e24a9ffe7ca6358fc3521cec38d2d37 @ 00102484 ---- */

undefined8 cp_qc30_remove_3e24a9ffe7ca6358fc3521cec38d2d37(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  cancel_delayed_work(*(long *)(param_1 + 0xa8) + 0x38);
  return 0;
}



/* ---- cp_workfunc.3e24a9ffe7ca6358fc3521cec38d2d37 @ 001024b4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cp_workfunc_3e24a9ffe7ca6358fc3521cec38d2d37(long param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 *in_x18;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 unaff_x30;
  ulong local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar9 = sp_el0;
  puVar13 = (undefined8 *)(param_1 + -0x38);
  local_68 = *(long *)(lVar9 + 0x5e0);
  cp_get_usb_type(puVar13);
  cp_update_sw_status(puVar13);
  cp_update_fc_status(puVar13);
  if (DAT_001000aa == '\0') {
    DAT_00100008 = 1;
    cp_statemachine_recovery = '\x01';
    _printk("<6>[FC2-PM]: %s: vbus disconnected\n","cp_statemachine");
    if (DAT_00100008 < 0xb) goto LAB_00102528;
LAB_00102768:
    _printk("<3>[FC2-PM]: %s: No state defined! Move to stop charging\n","cp_statemachine");
LAB_001036b8:
    if (10 < DAT_00100008) goto LAB_00103d48;
    _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],
            PTR_s_CP_STATE_STOP_CHARGE_001001a0);
    if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
    *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
    DAT_00100008 = 10;
    goto LAB_00103714;
  }
  if (DAT_00100008 == 1) {
    _printk("<6>[FC2-PM]: %s: vbus connected\n","cp_statemachine");
    cp_statemachine_recovery = '\x01';
    DAT_00100110 = 0;
    if (10 < DAT_00100008) goto LAB_00103d48;
    _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],pm_state_str);
    uVar14 = DAT_00100008;
    if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
    DAT_00100008 = 0;
    *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = uVar14;
    DAT_0010008c = DAT_0010008c + 1 & 0x1f;
switchD_00102540_caseD_102818:
    *(undefined4 *)(param_1 + 0x98) = 100;
    if ((DAT_001000e8 != 0) || (DAT_001000e8 = find_votable("FCC"), DAT_001000e8 != 0)) {
      vote(DAT_001000e8,"QC3P5_BQ_TAPER_FCC_VOTER",0,0);
    }
    cp_get_usb_type(puVar13);
    local_70 = 0;
    if ((DAT_00100100 == 0) &&
       (DAT_00100100 = power_supply_get_by_name("battery"), DAT_00100100 == 0)) {
LAB_00102f04:
      local_70 = 0;
      DAT_00100100 = power_supply_get_by_name("battery");
      if (DAT_00100100 != 0) goto LAB_00102f20;
      iVar5 = 0;
    }
    else {
      iVar5 = power_supply_get_property(DAT_00100100,0x2e,&local_70);
      if (iVar5 == 0) {
        DAT_001000a4 = (int)local_70;
      }
      _printk("<6>[FC2-PM]: %s: capacity:%d\n","cp_get_batt_capacity",DAT_001000a4);
      local_70 = 0;
      if (DAT_00100100 == 0) goto LAB_00102f04;
LAB_00102f20:
      iVar5 = power_supply_get_property(DAT_00100100,0x21,&local_70);
      if (iVar5 < 0) {
        _printk("<6>[FC2-PM]: %s: Couldn't get themal level:%d\n","qc3_get_batt_current_thermal_level",iVar5);
        iVar5 = 0;
      }
      else {
        _printk("<3>[FC2-PM]: %s: val.intval: %d\n","qc3_get_batt_current_thermal_level",local_70 & 0xffffffff);
        iVar5 = (int)local_70;
      }
    }
    uVar4 = qc3_disable_cp_by_jeita_status(puVar13);
    DAT_00100110 = CONCAT11(uVar4,(undefined1)DAT_00100110) & 0x1ff;
    _printk("<6>[FC2-PM]: %s: is_temp_out_fc2_range:%d\n","cp_statemachine");
    if ((DAT_00100090 & 0xfffffffe) != 0xe) goto LAB_00102644;
    _printk("<6>[FC2-PM]: %s: vbus_volt:%d\n","cp_statemachine",DAT_001000c8);
    cp_reset_vbus_volt(puVar13);
    msleep(100);
    if ((iVar5 < 0xd) && (DAT_00100110._1_1_ == '\0')) {
      if (0xdab < DAT_001000c4) {
        if ((DAT_001000c4 <= (int)(sys_config_0 - 0xfa)) && (DAT_001000a4 < 0x5a))
        goto LAB_00103024;
        DAT_00100002 = CONCAT11(DAT_00100002._1_1_,1);
      }
      goto LAB_00103bfc;
    }
    cp_move_state(2);
    puVar10 = "<6>[FC2-PM]: %s: thermal too high or batt temp out of range or slowly charging, waiting...\n";
LAB_00103d38:
    _printk(puVar10,"cp_statemachine");
    goto LAB_00102644;
  }
  if (10 < DAT_00100008) goto LAB_00102768;
LAB_00102528:
  switch(&UNK_00102544 + (ulong)(&switchD_00102540::switchdataD_001002a8)[DAT_00100008] * 4) {
  case (undefined *)0x102548:
    if (DAT_001000e1 == '\0') {
      uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x28);
      if (uVar11 < 0xfffffffffffff001) {
        if (uVar11 == 0) {
          uVar8 = iio_channel_get(*puVar13,"battery_charging_limited");
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28) = uVar8;
          uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x28);
          if (0xfffffffffffff000 < uVar11) {
            *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28) = 0;
            _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_charging_limited");
            goto LAB_0010374c;
          }
        }
        iVar5 = iio_write_channel_raw(uVar11,1);
        if (iVar5 < 0) goto LAB_0010374c;
      }
      else {
LAB_0010374c:
        _printk("<3>[FC2-PM]: %s: cp_limit_sw fail\n","cp_limit_sw");
      }
      cp_update_sw_status(puVar13);
      if (DAT_001000e1 != '\0') {
        uVar11 = (ulong)DAT_00100008;
        if (10 < DAT_00100008) goto LAB_00103d48;
        goto LAB_00103040;
      }
    }
    else {
      uVar11 = 5;
LAB_00103040:
      _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[uVar11],
              PTR_s_CP_STATE_FLASH2_ENTRY_1_00100180);
      if (0x1f < (ulong)DAT_0010008c) {
LAB_00103d48:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x103d4c);
        (*pcVar2)();
      }
      cp_statemachine_tune_vbus_retry = 0;
      *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
      DAT_00100008 = 6;
      DAT_0010008c = DAT_0010008c + 1 & 0x1f;
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 8);
    if (uVar11 < 0xfffffffffffff001) {
      if (uVar11 == 0) {
        uVar8 = iio_channel_get(*puVar13,"hvdcp3_type");
        *(undefined8 *)(*(long *)(param_1 + 0x90) + 8) = uVar8;
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 8);
        if (0xfffffffffffff000 < uVar11) {
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 8) = 0;
          _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","hvdcp3_type");
          goto LAB_00102604;
        }
      }
      iVar5 = iio_read_channel_processed(uVar11,&local_70);
      if (-1 < iVar5) {
        DAT_00100094 = (int)local_70;
        _printk("<6>[FC2-PM]: %s: cp_get_qc_hvdcp3_type:%d\n","cp_get_qc_hvdcp3_type");
      }
    }
LAB_00102604:
    if (DAT_00100094 == 2) {
      sys_config_2 = 0x1518;
      DAT_00100006 = 0xa8c;
    }
    else {
      sys_config_2 = 0xe10;
      DAT_00100006 = 0x834;
    }
    sys_config_4 = DAT_00100006;
    break;
  case (undefined *)0x102818:
    goto switchD_00102540_caseD_102818;
  case (undefined *)0x1028ac:
    if ((DAT_001000e8 != 0) || (DAT_001000e8 = find_votable("FCC"), DAT_001000e8 != 0)) {
      vote(DAT_001000e8,"QC3P5_BQ_TAPER_FCC_VOTER",0,0);
    }
    if (DAT_001000a8 != '\0') {
      uVar6 = cp_q30_set_iio_channel(puVar13,1,0);
      _printk("<3>[FC2-PM]: %s: cp enable %d,ret is %d \n","cp_enable_charge_pump",0,uVar6);
      local_70 = 0;
      iVar5 = cp_qc30_get_iio_channel(puVar13,1,&local_70);
      if (iVar5 == 0) {
        DAT_001000a8 = (int)local_70 != 0;
      }
      _printk("<3>[FC2-PM]: %s: pm_state.charge_pump.charge_enabled: %d\n","cp_check_charge_pump_enabled",DAT_001000a8);
    }
    if ((DAT_001000e0 == '\0') || (DAT_001000e1 != '\0')) {
      cp_reset_vbus_volt(puVar13);
      cp_enable_sw(puVar13,1);
      cp_update_sw_status(puVar13);
    }
    cp_statemachine_tune_vbus_count = 0;
    cp_statemachine_retry_enable_cp_count = 0;
    sys_config_2 = 0xe10;
    sys_config_4 = 0x834;
    DAT_00100090 = 0;
    DAT_00100006 = 0x834;
    DAT_00100002 = 0;
    sys_config_6 = '\x01';
    sys_config_8 = '\x01';
    sys_config_5 = '\x01';
    sys_config_7 = '\x01';
    uVar6 = cp_q30_set_iio_channel(puVar13,0xf,0);
    _printk("<3>[FC2-PM]: %s: set bus protection %d,ret is %d \n","cp_set_qc_bus_protections",0,uVar6);
    break;
  case (undefined *)0x102948:
    if ((DAT_001000e8 != 0) || (DAT_001000e8 = find_votable("FCC"), DAT_001000e8 != 0)) {
      vote(DAT_001000e8,"QC3P5_BQ_TAPER_FCC_VOTER",0,0);
    }
    cp_reset_vbus_volt(puVar13);
    _printk("<3>[FC2-PM]: %s: vbat=%d,vbus=%d\n","cp_statemachine",DAT_001000c4,DAT_001000c8);
    _printk("<6>[FC2-PM]: %s: enable sw charger\n","cp_statemachine");
    cp_enable_sw(puVar13,1);
    if ((DAT_001000f0 == 0) && (DAT_001000f0 = find_votable("USB_ICL"), DAT_001000f0 == 0)) {
      _printk("<3>[FC2-PM]: %s: [%s] find votable: USB_ICL failed!\n","cp_get_effective_usb_icl_val","cp_get_effective_usb_icl_val");
      bVar1 = true;
    }
    else {
      iVar5 = get_effective_result();
      uVar8 = get_effective_client(DAT_001000f0);
      _printk("<6>[FC2-PM]: %s: effective_usb_icl_val: %d voted by:%s\n","cp_get_effective_usb_icl_val",iVar5,uVar8);
      bVar1 = iVar5 < 2000000;
    }
    if ((DAT_001000f0 != 0) && (bVar1)) {
      vote(DAT_001000f0,"MAIN_CHG_VOTER",1,2000000);
    }
    if (DAT_001000a8 != '\0') {
      uVar6 = cp_q30_set_iio_channel(puVar13,1,0);
      _printk("<3>[FC2-PM]: %s: cp enable %d,ret is %d \n","cp_enable_charge_pump",0,uVar6);
      local_70 = 0;
      iVar5 = cp_qc30_get_iio_channel(puVar13,1,&local_70);
      if (iVar5 == 0) {
        DAT_001000a8 = (int)local_70 != 0;
      }
      _printk("<3>[FC2-PM]: %s: pm_state.charge_pump.charge_enabled: %d\n","cp_check_charge_pump_enabled",DAT_001000a8);
      if (DAT_001000a8 != '\0') break;
    }
    if (10 < DAT_00100008) goto LAB_00103d48;
    _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],
            PTR_s_CP_STATE_SW_ENTRY_2_00100168);
    if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
    *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
    DAT_00100008 = 3;
    goto LAB_00103714;
  case (undefined *)0x102a10:
    _printk("<6>[FC2-PM]: %s: sw check enable\n","cp_statemachine");
    cp_update_sw_status(puVar13);
    if (DAT_001000e0 == '\0') break;
    if (10 < DAT_00100008) goto LAB_00103d48;
    _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],
            PTR_s_CP_STATE_SW_LOOP_00100170);
    if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
    *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
    DAT_00100008 = 4;
    goto LAB_00103714;
  case (undefined *)0x102a9c:
    _printk("<3>[FC2-PM]: %s: vbat=%d, vbus=%d\n","cp_statemachine",DAT_001000c4,DAT_001000c8);
    local_70 = 0;
    if ((DAT_00100100 == 0) &&
       (DAT_00100100 = power_supply_get_by_name("battery"), DAT_00100100 == 0)) {
LAB_00102ae0:
      iVar5 = 0;
    }
    else {
      iVar5 = power_supply_get_property(DAT_00100100,0x21,&local_70);
      if (iVar5 < 0) {
        _printk("<6>[FC2-PM]: %s: Couldn't get themal level:%d\n","qc3_get_batt_current_thermal_level",iVar5);
        goto LAB_00102ae0;
      }
      _printk("<3>[FC2-PM]: %s: val.intval: %d\n","qc3_get_batt_current_thermal_level",local_70 & 0xffffffff);
      iVar5 = (int)local_70;
    }
    if (4 < cp_statemachine_retry_enable_cp_count) {
      _printk("<6>[FC2-PM]: %s: retry_enable_cp_count=%d\n","cp_statemachine");
      break;
    }
    bVar3 = qc3_disable_cp_by_jeita_status(puVar13);
    DAT_00100110 = CONCAT11(bVar3,(undefined1)DAT_00100110) & 0x1ff;
    if (((0xc < iVar5) || ((bVar3 & 1) != 0)) || (cp_statemachine_recovery != '\x01')) {
      if ((0xc < iVar5) || (((bVar3 ^ 1) & 1) == 0)) {
        _printk("<6>[FC2-PM]: %s: thermal(%d) too high or batt temp out of range\n","cp_statemachine",iVar5);
      }
LAB_00102b34:
      local_70 = 0;
      if ((DAT_00100100 != 0) ||
         (DAT_00100100 = power_supply_get_by_name("battery"), DAT_00100100 != 0)) {
        iVar5 = power_supply_get_property(DAT_00100100,0x2e,&local_70);
        if (iVar5 == 0) {
          DAT_001000a4 = (int)local_70;
        }
        _printk("<6>[FC2-PM]: %s: capacity:%d\n","cp_get_batt_capacity",DAT_001000a4);
      }
      if (((int)(sys_config_0 - 0xfa) < DAT_001000c4) || (0x59 < DAT_001000a4)) {
        DAT_00100002 = CONCAT11(DAT_00100002._1_1_,1);
        break;
      }
      if ((((char)DAT_00100002 != '\0') || (cp_statemachine_recovery == '\x01')) ||
         (DAT_001000c4 < 0xdad)) break;
      _printk("<6>[FC2-PM]: %s: battery volt: %d is ok, proceeding to flash charging...\n","cp_statemachine");
      iVar5 = cp_get_effective_usb_icl_val();
      if ((DAT_001000f0 != 0) && (500000 < iVar5)) {
        vote(DAT_001000f0,"MAIN_CHG_VOTER",1,500000);
      }
LAB_00103024:
      cp_move_state(5);
      break;
    }
    if (cp_statemachine_tune_vbus_count < 2) {
      cp_statemachine_tune_vbus_count = cp_statemachine_tune_vbus_count + 1;
      _printk("<6>[FC2-PM]: %s: thermal or batt temp recovery...\n","cp_statemachine");
      cp_statemachine_recovery = '\0';
      goto LAB_00102b34;
    }
    puVar10 = "<6>[FC2-PM]: %s: unsupport qc3, use sw charging\n";
    goto LAB_00103d38;
  case (undefined *)0x102c00:
    cp_update_fc_status(puVar13);
    _printk("<3>[FC2-PM]: %s: entry1:vbat=%d,vbus=%d\n","cp_statemachine",DAT_001000c4,DAT_001000c8);
    iVar5 = (debug_mask * DAT_001000c4) / 10 + 0x96;
    if (iVar5 <= DAT_001000c8) {
      _printk("<3>[FC2-PM]: %s: entry1:voltage tuned above expected voltage, retry %d times\n","cp_statemachine",cp_statemachine_tune_vbus_retry);
      cp_move_state(7);
      break;
    }
    if (iVar5 - DAT_001000c8 < 0xa29) {
      uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
      if (uVar11 < 0xfffffffffffff001) {
        if (uVar11 == 0) {
          uVar8 = iio_channel_get(*puVar13,"battery_dp_dm");
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = uVar8;
          uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
          if (0xfffffffffffff000 < uVar11) {
            *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = 0;
            _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_dp_dm");
            goto LAB_00103cb8;
          }
        }
        iVar5 = iio_write_channel_raw(uVar11,4);
        if (iVar5 < 0) goto LAB_00103cb8;
        pcVar12 = "successfully";
      }
      else {
LAB_00103cb8:
        pcVar12 = "fail";
      }
      _printk("<6>[FC2-PM]: %s: tune adapter voltage %s %s\n","cp_tune_vbus_volt",&DAT_001017b6,pcVar12);
      cp_statemachine_tune_vbus_retry = cp_statemachine_tune_vbus_retry + 1;
    }
    else {
      iVar5 = 0xf;
      do {
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
        if (uVar11 < 0xfffffffffffff001) {
          if (uVar11 == 0) {
            uVar8 = iio_channel_get(*puVar13,"battery_dp_dm");
            *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = uVar8;
            uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
            if (0xfffffffffffff000 < uVar11) {
              *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = 0;
              _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_dp_dm");
              goto LAB_00102d0c;
            }
          }
          iVar7 = iio_write_channel_raw(uVar11,4);
          pcVar12 = "successfully";
          if (iVar7 < 0) goto LAB_00102d0c;
        }
        else {
LAB_00102d0c:
          pcVar12 = "fail";
        }
        _printk("<6>[FC2-PM]: %s: tune adapter voltage %s %s\n","cp_tune_vbus_volt",&DAT_001017b6,pcVar12);
        msleep(0x2d);
        iVar5 = iVar5 + -1;
        cp_statemachine_tune_vbus_retry = cp_statemachine_tune_vbus_retry + 1;
      } while (iVar5 != 0);
    }
    if (cp_statemachine_tune_vbus_retry < 0x18) break;
    _printk("<3>[FC2-PM]: %s: entry1:Failed to tune adapter volt into valid range, charge with switching charger\n","cp_statemachine");
    DAT_00100002 = CONCAT11(1,(char)DAT_00100002);
    cp_statemachine_recovery = '\x01';
LAB_00103bfc:
    cp_move_state(2);
    break;
  case (undefined *)0x102d74:
    if (DAT_001000c8 <= (debug_mask * DAT_001000c4) / 10 + 600) {
      _printk("<3>[FC2-PM]: %s: entry3:vbat volt is ok, enable flash charging, charge_enabled=%d\n","cp_statemachine",DAT_001000a8);
      if (DAT_001000a8 == '\0') {
        cp_enable_charge_pump(puVar13);
        cp_check_charge_pump_enabled(puVar13);
        if (DAT_001000a8 != '\0') goto LAB_00103a8c;
        cp_statemachine_retry_enable_cp_count = cp_statemachine_retry_enable_cp_count + 1;
        if (cp_statemachine_retry_enable_cp_count < 5) {
          uVar8 = 7;
        }
        else {
          uVar8 = 2;
        }
        cp_move_state(uVar8);
      }
      else {
LAB_00103a8c:
        if (0 < cp_statemachine_retry_enable_cp_count) {
          cp_statemachine_retry_enable_cp_count = 0;
        }
        if (10 < DAT_00100008) goto LAB_00103d48;
        _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],
                PTR_s_CP_STATE_FLASH2_TUNE_00100190);
        uVar14 = DAT_00100008;
        if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
        DAT_00100008 = 8;
        *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = uVar14;
        DAT_0010008c = DAT_0010008c + 1 & 0x1f;
        if (DAT_00100090 == 0xf) {
          cp_enable_sw(puVar13,0);
          cp_update_sw_status(puVar13);
        }
      }
      fc2_taper_timer = 0;
      break;
    }
    uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
    if (uVar11 < 0xfffffffffffff001) {
      if (uVar11 == 0) {
        uVar8 = iio_channel_get(*puVar13,"battery_dp_dm");
        *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = uVar8;
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
        if (0xfffffffffffff000 < uVar11) {
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = 0;
          _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_dp_dm");
          goto LAB_00103888;
        }
      }
      iVar5 = iio_write_channel_raw(uVar11,5);
      if (iVar5 < 0) goto LAB_00103888;
      pcVar12 = "successfully";
    }
    else {
LAB_00103888:
      pcVar12 = "fail";
    }
    _printk("<6>[FC2-PM]: %s: tune adapter voltage %s %s\n","cp_tune_vbus_volt","down",pcVar12);
    cp_update_fc_status(puVar13);
    _printk("<3>[FC2-PM]: %s: entry3:vbus volt is too high:%d, vbat:%d wait it down\n","cp_statemachine",DAT_001000c8,DAT_001000c4);
    break;
  case (undefined *)0x102e18:
    if ((DAT_001000e8 == 0) && (lVar9 = find_votable("FCC"), lVar9 == 0)) {
      uVar14 = 0xffffffea;
    }
    else {
      iVar5 = get_effective_result();
      uVar14 = iVar5 / 1000;
      _printk("<6>[FC2-PM]: %s: effective_fcc_val: %d\n","cp_get_effective_fcc_val",uVar14);
    }
    cp_flash2_charge_ibus_limit = uVar14 >> 1 & 0x7fff;
    local_70 = 0;
    if (DAT_00100006 <= cp_flash2_charge_ibus_limit) {
      cp_flash2_charge_ibus_limit = (uint)DAT_00100006;
    }
    if (DAT_00100100 == 0) {
      DAT_00100100 = power_supply_get_by_name("battery");
    }
    iVar5 = power_supply_get_property(DAT_00100100,1,&local_70);
    if (iVar5 < 0) {
      _printk("<6>[FC2-PM]: %s: Couldn't get fastcharge mode:%d\n","qc3_get_bms_fastcharge_mode",iVar5);
    }
    else {
      DAT_00100004 = (int)local_70 != 0;
    }
    local_70 = 0;
    if ((DAT_00100100 == 0) &&
       (DAT_00100100 = power_supply_get_by_name("battery"), DAT_00100100 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = power_supply_get_property(DAT_00100100,0x21,&local_70);
      if (iVar5 < 0) {
        _printk("<6>[FC2-PM]: %s: Couldn't get themal level:%d\n","qc3_get_batt_current_thermal_level",iVar5);
        iVar5 = 0;
      }
      else {
        _printk("<3>[FC2-PM]: %s: val.intval: %d\n","qc3_get_batt_current_thermal_level",local_70 & 0xffffffff);
        iVar5 = (int)local_70;
      }
    }
    uVar4 = qc3_disable_cp_by_jeita_status(puVar13);
    cp_flash2_charge_ibat_limit = uVar14 & 0xffff;
    if ((uint)sys_config_2 <= (uVar14 & 0xffff)) {
      cp_flash2_charge_ibat_limit = (uint)sys_config_2;
    }
    DAT_00100110 = CONCAT11(uVar4,(undefined1)DAT_00100110) & 0x1ff;
    _printk("<6>[FC2-PM]: %s: vbus=%d; ibus_lmt=%d,ibus:%d; vbat_lmt=%d,vbat=%d; ibat_lmt=%d,ibat=%d\n","cp_flash2_charge",DAT_001000c8,cp_flash2_charge_ibus_limit,DAT_001000d0,
            sys_config_0,DAT_001000c4,cp_flash2_charge_ibat_limit,DAT_001000cc);
    if (DAT_001000c8 < 0x251d) {
      iVar7 = -0x1c2;
      if (sys_config_6 == '\0') {
        iVar7 = -400;
      }
      if (DAT_001000d0 < (int)(iVar7 + cp_flash2_charge_ibus_limit)) {
        iVar7 = -400;
        if (sys_config_8 == '\0') {
          iVar7 = -600;
        }
        if ((DAT_001000cc < (int)(iVar7 + cp_flash2_charge_ibat_limit)) &&
           (DAT_001000c4 < (int)(sys_config_0 - 0x32))) {
          _printk("<3>[FC2-PM]: %s: cp_tune_vbus_volt up\n","cp_flash2_charge");
          cp_tune_vbus_volt(puVar13);
        }
      }
    }
    if ((int)(uint)sys_config_0 < DAT_001000c4) {
LAB_001034fc:
      _printk("<3>[FC2-PM]: %s: cp_tune_vbus_volt down\n","cp_flash2_charge");
      uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
      if (uVar11 < 0xfffffffffffff001) {
        if (uVar11 == 0) {
          uVar8 = iio_channel_get(*puVar13,"battery_dp_dm");
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = uVar8;
          uVar11 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x20);
          if (0xfffffffffffff000 < uVar11) {
            *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = 0;
            _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_dp_dm");
            goto LAB_00103580;
          }
        }
        iVar7 = iio_write_channel_raw(uVar11,5);
        if (iVar7 < 0) goto LAB_00103580;
        pcVar12 = "successfully";
      }
      else {
LAB_00103580:
        pcVar12 = "fail";
      }
      _printk("<6>[FC2-PM]: %s: tune adapter voltage %s %s\n","cp_tune_vbus_volt","down",pcVar12);
    }
    else {
      iVar7 = 0x15e;
      if (sys_config_7 == '\0') {
        iVar7 = 500;
      }
      if ((int)(iVar7 + cp_flash2_charge_ibat_limit) < DAT_001000cc) goto LAB_001034fc;
      iVar7 = 100;
      if (sys_config_5 == '\0') {
        iVar7 = 200;
      }
      if ((int)(iVar7 + cp_flash2_charge_ibus_limit) < DAT_001000d0) goto LAB_001034fc;
    }
    local_70 = 0;
    iVar7 = cp_qc30_get_iio_channel(puVar13,1,&local_70);
    if (iVar7 == 0) {
      DAT_001000a8 = (int)local_70 != 0;
    }
    _printk("<3>[FC2-PM]: %s: pm_state.charge_pump.charge_enabled: %d\n","cp_check_charge_pump_enabled",DAT_001000a8);
    if ((((DAT_001000b7 != '\0') || (DAT_001000ae != '\0')) || (DAT_001000ab != '\0')) ||
       (DAT_001000ad != '\0')) {
      _printk("<3>[FC2-PM]: %s: Move to stop charging:%d\n","cp_statemachine",0xffffffff);
      goto LAB_001036b8;
    }
    if (DAT_001000a8 == '\0') {
      uVar8 = 0xfffffffe;
LAB_0010362c:
      _printk("<3>[FC2-PM]: %s: Move to switch charging:%d\n","cp_statemachine",uVar8);
      if (10 < DAT_00100008) goto LAB_00103d48;
      _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],
              PTR_s_CP_STATE_SW_ENTRY_00100160);
      if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
      *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
      DAT_00100008 = 2;
    }
    else {
      if ((0xc < iVar5) || (DAT_00100110._1_1_ != '\0')) {
        _printk("<6>[FC2-PM]: %s: thermal level (%d) too high or batt temp is out of fc2 range, pm_state.is_temp_out_fc2_range:%d\n","cp_flash2_charge",iVar5);
        cp_statemachine_tune_vbus_count = 0;
        _printk("<3>[FC2-PM]: %s: Move to switch charging, will try to recover to flash charging:%d\n","cp_statemachine",2);
        cp_statemachine_recovery = '\x01';
        goto LAB_00103bfc;
      }
      if (((int)(sys_config_0 - 100) < DAT_001000c4) && (DAT_001000cc < 0x898)) {
        if (10 < fc2_taper_timer) {
          uVar8 = 1;
          fc2_taper_timer = 0;
          goto LAB_0010362c;
        }
        fc2_taper_timer = fc2_taper_timer + 1;
      }
      else {
        fc2_taper_timer = 0;
      }
      if (10 < DAT_00100008) goto LAB_00103d48;
      _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],
              PTR_s_CP_STATE_FLASH2_DELAY_00100198);
      if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
      *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
      DAT_00100008 = 9;
    }
    goto LAB_00103714;
  case (undefined *)0x102e40:
    *(undefined4 *)(param_1 + 0x98) = 1000;
    _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",PTR_s_CP_STATE_FLASH2_DELAY_00100198,
            PTR_s_CP_STATE_FLASH2_TUNE_00100190);
    if (0x1f < (ulong)DAT_0010008c) goto LAB_00103d48;
    *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
    DAT_00100008 = 8;
LAB_00103714:
    DAT_0010008c = DAT_0010008c + 1 & 0x1f;
    break;
  case (undefined *)0x102e98:
    _printk("<3>[FC2-PM]: %s: Stop charging\n","cp_statemachine");
    if (DAT_001000a8 != '\0') {
      uVar6 = cp_q30_set_iio_channel(puVar13,1,0);
      _printk("<3>[FC2-PM]: %s: cp enable %d,ret is %d \n","cp_enable_charge_pump",0,uVar6);
      local_70 = 0;
      iVar5 = cp_qc30_get_iio_channel(puVar13,1,&local_70);
      if (iVar5 == 0) {
        DAT_001000a8 = (int)local_70 != 0;
      }
      _printk("<3>[FC2-PM]: %s: pm_state.charge_pump.charge_enabled: %d\n","cp_check_charge_pump_enabled",DAT_001000a8);
    }
    if (DAT_001000e0 != '\0') {
      cp_enable_sw(puVar13,0);
      cp_update_sw_status(puVar13);
    }
  }
LAB_00102644:
  local_70 = 0;
  if (((DAT_00100108 != 0) ||
      (DAT_00100108 = power_supply_get_by_name("usb"), DAT_00100108 != 0)) &&
     (iVar5 = power_supply_get_property(DAT_00100108,3,&local_70), iVar5 == 0)) {
    DAT_00100098 = (int)local_70;
  }
  if (DAT_00100098 == 0) {
    uVar6 = cp_q30_set_iio_channel(puVar13,0xf,0);
    _printk("<3>[FC2-PM]: %s: set bus protection %d,ret is %d \n","cp_set_qc_bus_protections",0,uVar6);
  }
  else if (DAT_00100090 == 0xe) {
    uVar8 = __msecs_to_jiffies(*(undefined4 *)(param_1 + 0x98));
    queue_delayed_work_on(0x20,_system_wq,param_1,uVar8);
  }
  lVar9 = sp_el0;
  if (*(long *)(lVar9 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cp_get_usb_type @ 00103d50 ---- */

void cp_get_usb_type(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  uVar4 = *(ulong *)param_1[0x19];
  if (uVar4 < 0xfffffffffffff001) {
    if (uVar4 == 0) {
      uVar3 = iio_channel_get(*param_1,"real_type");
      *(undefined8 *)param_1[0x19] = uVar3;
      uVar4 = *(ulong *)param_1[0x19];
      if (0xfffffffffffff000 < uVar4) {
        *(ulong *)param_1[0x19] = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","real_type");
        goto LAB_00103dc8;
      }
    }
    iVar2 = iio_read_channel_processed(uVar4,&local_2c);
    if (-1 < iVar2) {
      DAT_00100090 = local_2c;
      _printk("<6>[FC2-PM]: %s: cp_get_usb_type:%d\n","cp_get_usb_type");
    }
  }
LAB_00103dc8:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cp_update_sw_status @ 00103e40 ---- */

void cp_update_sw_status(undefined8 *param_1)

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
  uVar4 = *(ulong *)(param_1[0x19] + 0x18);
  if (uVar4 < 0xfffffffffffff001) {
    if (uVar4 == 0) {
      uVar3 = iio_channel_get(*param_1,"battery_charging_enabled");
      *(undefined8 *)(param_1[0x19] + 0x18) = uVar3;
      uVar4 = *(ulong *)(param_1[0x19] + 0x18);
      if (0xfffffffffffff000 < uVar4) {
        *(undefined8 *)(param_1[0x19] + 0x18) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_charging_enabled");
        goto LAB_00103ef0;
      }
    }
    iVar2 = iio_read_channel_processed(uVar4,&local_30);
    if (-1 < iVar2) {
      DAT_001000e0 = (int)local_30 != 0;
    }
  }
LAB_00103ef0:
  _printk("<3>[FC2-PM]: %s: battery charging enabled: %d\n","cp_check_sw_enabled",DAT_001000e0);
  local_30 = 0;
  uVar4 = *(ulong *)(param_1[0x19] + 0x28);
  if (uVar4 < 0xfffffffffffff001) {
    if (uVar4 == 0) {
      uVar3 = iio_channel_get(*param_1,"battery_charging_limited");
      *(undefined8 *)(param_1[0x19] + 0x28) = uVar3;
      uVar4 = *(ulong *)(param_1[0x19] + 0x28);
      if (0xfffffffffffff000 < uVar4) {
        *(undefined8 *)(param_1[0x19] + 0x28) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_charging_limited");
        goto LAB_00103f90;
      }
    }
    iVar2 = iio_read_channel_processed(uVar4,&local_30);
    if (-1 < iVar2) {
      DAT_001000e1 = (int)local_30 != 0;
    }
  }
LAB_00103f90:
  _printk("<3>[FC2-PM]: %s: pm_state.sw_chager.charge_limited: %d\n","cp_check_sw_limited",DAT_001000e1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cp_update_fc_status @ 00103fd8 ---- */

void cp_update_fc_status(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_48 = 0;
  iVar2 = cp_qc30_get_iio_channel(param_1,8,&local_48);
  if (iVar2 == 0) {
    DAT_001000c8 = (int)local_48;
  }
  iVar2 = cp_qc30_get_iio_channel(param_1,9,&local_48);
  if (iVar2 == 0) {
    DAT_001000d0 = (int)local_48;
  }
  iVar2 = cp_qc30_get_iio_channel(param_1,10,&local_48);
  if (iVar2 == 0) {
    DAT_001000d8 = (int)local_48;
  }
  iVar2 = cp_qc30_get_iio_channel(param_1,7,&local_48);
  if (iVar2 == 0) {
    DAT_001000d4 = (int)local_48;
  }
  iVar2 = cp_qc30_get_iio_channel(param_1,0xb,&local_48);
  if (iVar2 == 0) {
    DAT_001000dc = (int)local_48;
  }
  iVar2 = cp_qc30_get_iio_channel(param_1,3,&local_48);
  if (iVar2 == 0) {
    DAT_001000a9 = (int)local_48 != 0;
  }
  iVar2 = cp_qc30_get_iio_channel(param_1,4,&local_48);
  if (iVar2 == 0) {
    DAT_001000aa = (int)local_48 != 0;
  }
  local_40 = 0;
  if ((DAT_00100100 != 0) || (DAT_00100100 = power_supply_get_by_name("battery"), DAT_00100100 != 0)
     ) {
    lVar1 = DAT_00100100;
    iVar2 = power_supply_get_property(DAT_00100100,0x11,&local_40);
    if (iVar2 == 0) {
      DAT_0010009c = (int)local_40 / 1000;
    }
    iVar2 = power_supply_get_property(lVar1,0xc,&local_40);
    if (iVar2 == 0) {
      DAT_001000a0 = (int)local_40 / 1000;
    }
    _printk("<6>[FC2-PM]: %s: ibat:%d vbat_from_qg:%d \n","cp_update_batt_info",DAT_0010009c,DAT_001000a0);
  }
  DAT_001000cc = DAT_0010009c;
  DAT_001000c4 = DAT_001000a0;
  iVar2 = cp_qc30_get_iio_channel(param_1,1,&local_48);
  if (iVar2 == 0) {
    DAT_001000a8 = (int)local_48 != 0;
  }
  iVar2 = cp_qc30_get_iio_channel(param_1,0xc,&local_48);
  if (iVar2 == 0) {
    DAT_001000af = (byte)local_48 & 1;
    DAT_001000b0 = (byte)local_48 >> 1 & 1;
    DAT_001000b1 = (byte)local_48 >> 2 & 1;
    DAT_001000b2 = (byte)local_48 >> 3 & 1;
    DAT_001000b3 = (byte)local_48 >> 7;
    DAT_001000b4 = (byte)local_48 >> 4 & 1;
    DAT_001000b5 = (byte)local_48 >> 5 & 1;
    DAT_001000b6 = (byte)local_48 >> 6 & 1;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cp_qc30_get_iio_channel @ 00104284 ---- */

uint cp_qc30_get_iio_channel(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined *puVar4;
  ulong uVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0xd4) == '\0') {
    uVar3 = *(ulong *)(param_1[0x18] + (ulong)param_2 * 8);
    if (0xfffffffffffff000 < uVar3) {
      return 0xffffffed;
    }
    if (uVar3 != 0) goto LAB_00104320;
    uVar5 = (ulong)param_2;
  }
  else {
    uVar5 = (ulong)(param_2 + 0x10);
    uVar3 = *(ulong *)(param_1[0x18] + uVar5 * 8);
    if (0xfffffffffffff000 < uVar3) {
      return 0xffffffed;
    }
    if (uVar3 != 0) goto LAB_00104320;
  }
  puVar4 = (&cp_iio_chan_name)[uVar5];
  uVar2 = iio_channel_get(*param_1,puVar4);
  *(undefined8 *)(param_1[0x18] + uVar5 * 8) = uVar2;
  uVar3 = *(ulong *)(param_1[0x18] + uVar5 * 8);
  if (0xfffffffffffff000 < uVar3) {
    *(undefined8 *)(param_1[0x18] + uVar5 * 8) = 0;
    _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_cp_chan_valid",puVar4);
    return 0xffffffed;
  }
LAB_00104320:
  uVar1 = iio_read_channel_processed(uVar3,param_3);
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ---- is_cp_chan_valid @ 00104370 ---- */

undefined8 is_cp_chan_valid(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(ulong *)(param_1[0x18] + 0x80) < 0xfffffffffffff001) {
    if (*(ulong *)(param_1[0x18] + 0x80) == 0) {
      uVar1 = iio_channel_get(*param_1,"bq_present");
      *(undefined8 *)(param_1[0x18] + 0x80) = uVar1;
      if (0xfffffffffffff000 < *(ulong *)(param_1[0x18] + 0x80)) {
        *(undefined8 *)(param_1[0x18] + 0x80) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_cp_chan_valid","bq_present");
        goto LAB_00104394;
      }
    }
    uVar1 = 1;
  }
  else {
LAB_00104394:
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- cp_move_state @ 00104408 ---- */

void cp_move_state(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (DAT_00100008 < 0xb) {
    _printk("<3>[FC2-PM]: %s: pm_state change:%s -> %s\n","cp_move_state",(&pm_state_str)[DAT_00100008],(&pm_state_str)[param_1]);
    if ((ulong)DAT_0010008c < 0x20) {
      uVar1 = param_1;
      *(uint *)(&DAT_0010000c + (ulong)DAT_0010008c * 4) = DAT_00100008;
      DAT_00100008 = uVar1;
      DAT_0010008c = DAT_0010008c + 1 & 0x1f;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x1044a4);
  (*pcVar2)();
}



/* ---- cp_enable_charge_pump @ 001044a4 ---- */

void cp_enable_charge_pump(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = cp_q30_set_iio_channel(param_1,1,1);
  _printk("<3>[FC2-PM]: %s: cp enable %d,ret is %d \n","cp_enable_charge_pump",1,uVar1);
  return;
}



/* ---- cp_check_charge_pump_enabled @ 001044ec ---- */

void cp_check_charge_pump_enabled(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_20 = 0;
  iVar2 = cp_qc30_get_iio_channel(param_1,1,&local_20);
  if (iVar2 == 0) {
    DAT_001000a8 = (int)local_20 != 0;
  }
  _printk("<3>[FC2-PM]: %s: pm_state.charge_pump.charge_enabled: %d\n","cp_check_charge_pump_enabled",DAT_001000a8);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cp_reset_vbus_volt @ 00104580 ---- */

void cp_reset_vbus_volt(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (DAT_00100090 == 0xf) {
    cp_update_fc_status(param_1);
    _printk("<3>[FC2-PM]: %s: vbat=%d,vbus=%d\n","cp_reset_vbus_volt",DAT_001000c4,DAT_001000c8);
    iVar2 = 1;
    do {
      if (DAT_001000c8 < 0x1997) {
        return;
      }
      uVar4 = *(ulong *)(param_1[0x19] + 0x20);
      if (uVar4 < 0xfffffffffffff001) {
        if (uVar4 == 0) {
          uVar3 = iio_channel_get(*param_1,"battery_dp_dm");
          *(undefined8 *)(param_1[0x19] + 0x20) = uVar3;
          uVar4 = *(ulong *)(param_1[0x19] + 0x20);
          if (0xfffffffffffff000 < uVar4) {
            *(undefined8 *)(param_1[0x19] + 0x20) = 0;
            _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_dp_dm");
            goto LAB_001046d0;
          }
        }
        iVar1 = iio_write_channel_raw(uVar4,5);
        pcVar5 = "successfully";
        if (iVar1 < 0) goto LAB_001046d0;
      }
      else {
LAB_001046d0:
        pcVar5 = "fail";
      }
      _printk("<6>[FC2-PM]: %s: tune adapter voltage %s %s\n","cp_tune_vbus_volt","down",pcVar5);
      cp_update_fc_status(param_1);
      usleep_range_state(10000,0x271a,2);
      _printk("<3>[FC2-PM]: %s: qc3p5_reset_vbus_retry=%d,vbus=%d\n","cp_reset_vbus_volt",iVar2,DAT_001000c8);
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x12e) {
        _printk("<3>[FC2-PM]: %s: Failed to reset qc3.5 adapter volt to 6.55v or less\n","cp_reset_vbus_volt");
        return;
      }
    } while( true );
  }
  uVar4 = *(ulong *)(param_1[0x19] + 0x20);
  if (uVar4 < 0xfffffffffffff001) {
    if (uVar4 == 0) {
      uVar3 = iio_channel_get(*param_1,"battery_dp_dm");
      *(undefined8 *)(param_1[0x19] + 0x20) = uVar3;
      uVar4 = *(ulong *)(param_1[0x19] + 0x20);
      if (0xfffffffffffff000 < uVar4) {
        *(undefined8 *)(param_1[0x19] + 0x20) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_dp_dm");
        goto LAB_001047a8;
      }
    }
    iVar2 = iio_write_channel_raw(uVar4,0xd);
    if (-1 < iVar2) {
      pcVar5 = "successfully";
      goto LAB_001047b0;
    }
  }
LAB_001047a8:
  pcVar5 = "fail";
LAB_001047b0:
  _printk("<6>[FC2-PM]: %s: reset vbus volt %s\n","cp_reset_vbus_volt",pcVar5);
  return;
}



/* ---- cp_enable_sw @ 001047f4 ---- */

void cp_enable_sw(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar3 = *(ulong *)(param_1[0x19] + 0x18);
  if (uVar3 < 0xfffffffffffff001) {
    if (uVar3 == 0) {
      uVar2 = iio_channel_get(*param_1,"battery_charging_enabled");
      *(undefined8 *)(param_1[0x19] + 0x18) = uVar2;
      uVar3 = *(ulong *)(param_1[0x19] + 0x18);
      if (0xfffffffffffff000 < uVar3) {
        *(undefined8 *)(param_1[0x19] + 0x18) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_charging_enabled");
        goto LAB_00104880;
      }
    }
    iVar1 = iio_write_channel_raw(uVar3,param_2 & 1);
    if (-1 < iVar1) goto LAB_00104894;
  }
LAB_00104880:
  _printk("<3>[FC2-PM]: %s: set battey charging fail\n","cp_enable_sw");
LAB_00104894:
  _printk("<3>[FC2-PM]: %s: set sw charging en = %d\n","cp_enable_sw",param_2 & 1);
  return;
}



/* ---- qc3_disable_cp_by_jeita_status @ 001048c0 ---- */

bool qc3_disable_cp_by_jeita_status(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = 0;
  local_30 = 0;
  uVar9 = *(ulong *)(param_1[0x19] + 0x10);
  if (uVar9 < 0xfffffffffffff001) {
    if (uVar9 == 0) {
      uVar6 = iio_channel_get(*param_1,"cp_input_suspend");
      *(undefined8 *)(param_1[0x19] + 0x10) = uVar6;
      uVar9 = *(ulong *)(param_1[0x19] + 0x10);
      if (0xfffffffffffff000 < uVar9) {
        *(undefined8 *)(param_1[0x19] + 0x10) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","cp_input_suspend");
        uVar9 = 0xffffffed;
        goto LAB_0010496c;
      }
    }
    uVar7 = iio_read_channel_processed(uVar9,&local_30);
    uVar9 = uVar7 & 0xffffffff;
    if ((int)uVar7 < 0) goto LAB_0010496c;
    iVar3 = (int)local_30;
    _printk("<6>[FC2-PM]: %s: get input suspend:%d, rc = %d\n","cp_qc30_get_input_suspend",local_30 & 0xffffffff,0);
    if ((DAT_00100100 != 0) ||
       (DAT_00100100 = power_supply_get_by_name("battery"), DAT_00100100 != 0)) {
      uVar5 = power_supply_get_property(DAT_00100100,0x33,&local_38);
      uVar9 = local_38;
      if (-1 < (int)uVar5) {
        iVar2 = (int)local_38;
        _printk("<3>[FC2-PM]: %s: batt_temp: %d\n","qc3_disable_cp_by_jeita_status",local_38 & 0xffffffff);
        if (iVar3 != 0) {
          bVar4 = true;
          goto LAB_00104984;
        }
        if ((iVar2 < 0x1c2) || ((char)DAT_00100110 != '\0')) {
          if ((100 < iVar2) || ((char)DAT_00100110 != '\0')) {
            if ((iVar2 - 0x1afU < 0xfffffec9) || ((char)DAT_00100110 == '\0')) {
              bVar4 = (char)DAT_00100110 != '\0';
              goto LAB_00104984;
            }
            DAT_00100110._0_1_ = '\0';
            puVar8 = "<3>[FC2-PM]: %s: return to normal batt_temp: %d\n";
            uVar9 = uVar9 & 0xffffffff;
            goto LAB_0010497c;
          }
          puVar8 = "<3>[FC2-PM]: %s: cool batt_temp: %d\n";
        }
        else {
          puVar8 = "<3>[FC2-PM]: %s: warm batt_temp: %d\n";
        }
        bVar4 = true;
        DAT_00100110._0_1_ = '\x01';
        _printk(puVar8,"qc3_disable_cp_by_jeita_status",uVar9 & 0xffffffff);
        goto LAB_00104984;
      }
      uVar9 = (ulong)uVar5;
      puVar8 = "<6>[FC2-PM]: %s: Couldn't get batt temp prop:%d\n";
      goto LAB_0010497c;
    }
  }
  else {
    uVar9 = 0xffffffed;
LAB_0010496c:
    puVar8 = "<3>[FC2-PM]: %s: Failed to get input suspend, ret = %d\n";
LAB_0010497c:
    _printk(puVar8,"qc3_disable_cp_by_jeita_status",uVar9);
  }
  bVar4 = false;
LAB_00104984:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



/* ---- cp_get_effective_usb_icl_val @ 00104acc ---- */

undefined4 cp_get_effective_usb_icl_val(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((DAT_001000f0 == 0) && (DAT_001000f0 = find_votable("USB_ICL"), DAT_001000f0 == 0)) {
    _printk("<3>[FC2-PM]: %s: [%s] find votable: USB_ICL failed!\n","cp_get_effective_usb_icl_val","cp_get_effective_usb_icl_val");
    return 0xffffffea;
  }
  uVar1 = get_effective_result();
  uVar2 = get_effective_client(DAT_001000f0);
  _printk("<6>[FC2-PM]: %s: effective_usb_icl_val: %d voted by:%s\n","cp_get_effective_usb_icl_val",uVar1,uVar2);
  return uVar1;
}



/* ---- cp_tune_vbus_volt @ 00104b64 ---- */

void cp_tune_vbus_volt(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar3 = *(ulong *)(param_1[0x19] + 0x20);
  if (uVar3 < 0xfffffffffffff001) {
    if (uVar3 == 0) {
      uVar2 = iio_channel_get(*param_1,"battery_dp_dm");
      *(undefined8 *)(param_1[0x19] + 0x20) = uVar2;
      uVar3 = *(ulong *)(param_1[0x19] + 0x20);
      if (0xfffffffffffff000 < uVar3) {
        *(undefined8 *)(param_1[0x19] + 0x20) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_smb_chan_valid","battery_dp_dm");
        goto LAB_00104bec;
      }
    }
    iVar1 = iio_write_channel_raw(uVar3,4);
    if (-1 < iVar1) {
      pcVar4 = "successfully";
      goto LAB_00104bf4;
    }
  }
LAB_00104bec:
  pcVar4 = "fail";
LAB_00104bf4:
  _printk("<6>[FC2-PM]: %s: tune adapter voltage %s %s\n","cp_tune_vbus_volt",&DAT_001017b6,pcVar4);
  return;
}



/* ---- cp_q30_set_iio_channel @ 00104c30 ---- */

uint cp_q30_set_iio_channel(undefined8 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined *puVar4;
  ulong uVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0xd4) == '\0') {
    uVar3 = *(ulong *)(param_1[0x18] + (ulong)param_2 * 8);
    if (0xfffffffffffff000 < uVar3) {
      return 0xffffffed;
    }
    if (uVar3 != 0) goto LAB_00104ccc;
    uVar5 = (ulong)param_2;
  }
  else {
    uVar5 = (ulong)(param_2 + 0x10);
    uVar3 = *(ulong *)(param_1[0x18] + uVar5 * 8);
    if (0xfffffffffffff000 < uVar3) {
      return 0xffffffed;
    }
    if (uVar3 != 0) goto LAB_00104ccc;
  }
  puVar4 = (&cp_iio_chan_name)[uVar5];
  uVar2 = iio_channel_get(*param_1,puVar4);
  *(undefined8 *)(param_1[0x18] + uVar5 * 8) = uVar2;
  uVar3 = *(ulong *)(param_1[0x18] + uVar5 * 8);
  if (0xfffffffffffff000 < uVar3) {
    *(undefined8 *)(param_1[0x18] + uVar5 * 8) = 0;
    _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_cp_chan_valid",puVar4);
    return 0xffffffed;
  }
LAB_00104ccc:
  uVar1 = iio_write_channel_raw(uVar3,param_3);
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ---- cp_qc30_notifier_call.3e24a9ffe7ca6358fc3521cec38d2d37 @ 00104d1c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
cp_qc30_notifier_call_3e24a9ffe7ca6358fc3521cec38d2d37
          (long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined8 *in_x18;
  undefined8 *puVar6;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 != 0) {
    return 1;
  }
  puVar6 = (undefined8 *)(param_1 + -0x20);
  if ((cp_qc30_notifier_call_first_flag & 1) != 0) goto LAB_00104d4c;
  if (**(ulong **)(param_1 + 0xa0) < 0xfffffffffffff001) {
    if (**(ulong **)(param_1 + 0xa0) == 0) {
      uVar2 = iio_channel_get(*puVar6,"present");
      **(undefined8 **)(param_1 + 0xa0) = uVar2;
      if (0xfffffffffffff000 < **(ulong **)(param_1 + 0xa0)) {
        **(ulong **)(param_1 + 0xa0) = 0;
        _printk("<3>[FC2-PM]: %s: Failed to get IIO channel %s, rc=%d\n","is_cp_chan_valid","present");
        goto LAB_00104e3c;
      }
    }
    uVar5 = 0;
    puVar4 = &UNK_00100dd5;
LAB_00104e64:
    cp_qc30_notifier_call_first_flag = 1;
    *(undefined1 *)(param_1 + 0xb4) = uVar5;
  }
  else {
LAB_00104e3c:
    uVar3 = is_cp_chan_valid(puVar6);
    if ((uVar3 & 1) != 0) {
      uVar5 = 1;
      puVar4 = "<3>[FC2-PM]: %s: [cp_qc_psy_notifier_cb] BQ25960\n";
      goto LAB_00104e64;
    }
    cp_qc30_notifier_call_first_flag = 0;
    puVar4 = "<3>[FC2-PM]: %s: qc3.0 can't find charge pump\n";
  }
  _printk(puVar4,"cp_qc30_notifier_call");
LAB_00104d4c:
  iVar1 = strcmp(*(char **)*param_3,"usb");
  if (iVar1 == 0) {
    cp_get_usb_type(puVar6);
    if ((DAT_00100090 & 0xfffffffe) == 0xe) {
      if ((*(ulong *)(param_1 + 0x18) & 1) == 0) {
        queue_delayed_work_on(0x20,_system_wq,(ulong *)(param_1 + 0x18),0x2ee);
      }
      cp_qc30_notifier_call_usb_hvdcp3_on = '\x01';
    }
    else {
      if (DAT_00100090 != 0) {
        return 1;
      }
      if (cp_qc30_notifier_call_usb_hvdcp3_on != '\x01') {
        return 1;
      }
      cancel_delayed_work(param_1 + 0x18);
      queue_delayed_work_on(0x20,_system_wq,param_1 + 0x18,0);
      _printk("<6>[FC2-PM]: %s: pm_state.usb_type: %d\n","cp_qc30_notifier_call",DAT_00100090);
      cp_qc30_notifier_call_usb_hvdcp3_on = '\0';
    }
  }
  return 1;
}



/* ---- init_module @ 00104f34 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  __platform_driver_register(&cp_qc30_driver,&__this_module);
  return;
}



/* ---- cleanup_module @ 00104f68 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  platform_driver_unregister(&cp_qc30_driver);
  return;
}


/* functions: 20 ok, 0 failed */
