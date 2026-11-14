/* Decompiled with Ghidra from sc8541_charger.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.data] sc,sc8541-standalone
// [.data] sc,sc8541-master
// [.data] sc,sc8541-slave
// [.rodata] sc,sc8541,vbus-ovp-alm-dis
// [.rodata] acrb2 config flag
// [.rodata] 3sc8541_init_iio_psy start

// [.rodata] status
// [.rodata] sc,sc8541,ibus-ucp-dis
// [.rodata] disable
// [.rodata] request irq for irq=%d failed, ret =%d

// [.rodata] vbus ovp flag
// [.rodata] vout ovp flag
// [.rodata] ibus ocp flag
// [.rodata] sc8541-standalone
// [.rodata] sc_battery_present_slave
// [.rodata] set_bus_protection_slave
// [.rodata] 1.0.0_G
// [.rodata] sc,sc8541,ibat-ocp
// [.rodata] sc,sc8541,ibat-ocp-alm
// [.rodata] sc,sc8541,tsbat-flt-dis
// [.rodata] sc,sc8541,tsbat-flt
// [.rodata] sc,sc8541,pmid2out-uvp
// [.rodata] ss timeout flag
// [.rodata] present_slave
// [.rodata] sc8541_enable_charge
// [.rodata] irq gpio not provided

// [.rodata] vac1 insert flag
// [.rodata] sc_alarm_status_slave
// [.rodata] sc,sc8541,tdie-alm
// [.rodata] sc,sc8541,vac1-pd-en
// [.rodata] sc,sc8541,vout-ovp-dis
// [.rodata] can not read %s 

// [.rodata] sc8541_irq
// [.rodata] sc8541-standalone-irq
// [.rodata] 3Couldn't read IIO channel %d, ret = %d

// [.rodata] %s fail to read VBUS_ERRORLO_STAT(%d)

// [.rodata] sc_battery_present
// [.rodata] sc_chip_vendor
// [.rodata] sc_battery_current_slave
// [.rodata] Suspend successfully!
// [.rodata] fail to valid gpio : %d

// [.rodata] vat insert flag
// [.rodata] sc8541_get_status
// [.rodata] 3hvdcp3_type: %d

// [.rodata] sc_alarm_status
// [.rodata] sc_bus_voltage_slave
// [.rodata] sc8541[%s] probe successfully!

// [.rodata] sc,sc8541,vac2-ovp
// [.rodata] %s:%d
// [.rodata] sc_vbus_error_status_slave
// [.rodata] sc8541_psy_register
// [.rodata] ibat ocp alm flag
// [.rodata] tsbus flt flag
// [.rodata] sc_battery_temperature_slave
// [.rodata] %s register irq fail(%d)

// [.rodata] registers
// [.rodata] sc,sc8541,tshut-dis
// [.rodata] sc,sc8541,fsw-set
// [.rodata] sc8541,intr_gpio
// [.rodata] %s Failed to reset registers(%d)

// [.rodata] 3Failed to register SC8541 IIO device, rc=%d

// [.rodata] Resume successfully!
// [.rodata] %x %x
// [.rodata] sc,sc8541,vbus-ovp
// [.rodata] acrb1 config flag
// [.rodata] %s fail to read VBUS_ERRORHI_STAT(%d)

// [.rodata] sc_battery_voltage
// [.rodata] sc_fault_status_slave
// [.rodata] %s fail(%d)

// [.rodata] sc,sc8541,vac1-ovp
// [.rodata] %s power supply register successfully

// [.rodata] vac2 ovp flag
// [.rodata] sc8541_charger_probe
// [.rodata] sc8541 probe fail

// [.rodata] sc,sc8541,ibus-ocp-dis
// [.rodata] sc8541_get_cp_workmode
// [.rodata] sc_battery_temperature
// [.rodata] sc_vbus_error_status
// [.rodata] sc_bus_current_slave
// [.rodata] sc8541 read field %d fail: %d

// [.rodata] %s Failed to set vbus in range(%d)

// [.rodata] %s reg[0x%02x] = 0x%02x

// [.rodata] %s failed to register psy

// [.rodata] sc-cp-master
// [.rodata] sc_bus_current
// [.rodata] sc_fault_status
// [.rodata] Reg[%.2X] = 0x%.2x

// [.rodata] pin diag fall flag
// [.rodata] ibus ucp fall flag
// [.rodata] vac1 ovp flag
// [.rodata] 6sc8541 iio get workmode =%d
// [.rodata] sc_die_temperature
// [.rodata] %s (%s)

// [.rodata] sc,sc8541,vbat-ovp-alm-dis
// [.rodata] sc,sc8541,ibat-ocp-dis
// [.rodata] sc,sc8541,vbus-pd-en
// [.rodata] sc-cp-slave
// [.rodata] sc_battery_current
// [.rodata] sc,sc8541,tsbus-flt-dis
// [.rodata] sc_bus_temperature
// [.rodata] status_slave
// [.rodata] sc_battery_voltage_slave
// [.rodata] Failed to initialize regmap

// [.rodata] standalone
// [.rodata] sc,sc8541,vbus-in-range-dis
// [.rodata] charger_name
// [.rodata] failed to request sc8541_irq

// [.rodata] wd timeout flag
// [.rodata] tshut flag
// [.rodata] set_bus_protection
// [.rodata] %s detect device fail

// [.rodata] master
// [.rodata] work mode is %s

// [.rodata] sc,sc8541,ibus-ocp
// [.rodata] sc,sc8541,vac2-pd-en
// [.rodata] sc8541-slave-irq
// [.rodata] sc8541-slave
// [.rodata] sc_set_cp_workmode
// [.rodata] sc_die_temperature_slave
// [.rodata] %s not find SC8541, ID = 0x%02x

// [.rodata] vac2 insert flag
// [.rodata] present
// [.rodata] sc8541
// [.rodata] sc,sc8541,vbus-ovp-alm
// [.rodata] sc8541 read %02x block failed %d

// [.rodata] 3Couldn't write IIO channel %d, rc = %d

// [.rodata] charging_enabled
// [.rodata] sc_vbus_present
// [.rodata] charging_enabled_slave
// [.rodata] %s parse dt failed(%d)

// [.rodata] 6sc8541 iio set workmode =%d
// [.rodata] sc_chip_vendor_slave
// [.rodata] sc,sc8541,ibat-ocp-alm-dis
// [.rodata] charger
// [.rodata] sc-cp-standalone
// [.rodata] vbus errorlo flag
// [.rodata] sc,sc8541,wd-timeout-dis
// [.rodata] vbus errorhi flag
// [.rodata] sc_chip_id
// [.rodata] Fail to set work mode!

// [.rodata] %s init device failed(%d)

// [.rodata] vbus ovp alm flag
// [.rodata] ibat ocp flag
// [.rodata] N7:%s:%d
// [.rodata] device tree match not found!

// [.rodata] sc,sc8541,ss-timeout
// [.rodata] sc8541_init_device
// [.rodata] sc8541_dump_reg
// [.rodata] 3POWER_SUPPLY_PROP_CHARGING_ENABLED: %s

// [.rodata] cannot allocate regmap field

// [.rodata] sc,sc8541,vbat-ovp-alm
// [.rodata] enable
// [.rodata] 3SC8541 IIO device, rc=%d

// [.rodata] slave
// [.rodata] sc,sc8541,vbat-ovp-dis
// [.rodata] sc,sc8541,wd-timeout
// [.rodata] vbat ovp flag
// [.rodata] vbus present flag
// [.rodata] tsbus tsbat alm flag
// [.rodata] sc8541-master-irq
// [.rodata] sc_bus_voltage
// [.rodata] sc_bus_temperature_slave
// [.rodata] sc,sc8541,tsbus-flt
// [.rodata] failed to gpio_to_irq

// [.rodata] sc8541_detect_device
// [.rodata] sc,sc8541,ms
// [.rodata] sc,sc8541,pmid2out-ovp
// [.rodata] INT OCCURED

// [.rodata] vbat ovp alm flag
// [.rodata] sc,sc8541,vbat-ovp
// [.rodata] trigger :%s

// [.rodata] tdie alm flag
// [.rodata] sc8541-master
// [.rodata] sc8541_set_cp_workmode
// [.rodata] sc,sc8541,ibus-ucp-fall-dg
// [.rodata] sc,sc8541,vout-ovp
// [.rodata] no charger name

// [.rodata] POWER_SUPPLY_PROP_ONLINE: %s

// [.rodata] tsbat flt flag
// [.rodata] adc done flag
// [.rodata] cp switching flag
// [.rodata] %s psy register failed(%d)

// [.rodata] sc,sc8541,ibat-sns-r
// [.rodata] sc8541_enable_adc
// [.rodata] sc_vbus_present_slave
// [.modinfo] description=SC SC8541 Driver
// [.modinfo] license=GPL v2
// [.modinfo] author=South Chip <Aiden-yu@southchip.com>
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=sc8541_charger
// [.modinfo] intree=Y
// [.modinfo] depends=
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] sc8541_charger
// [__versions] module_layout
// [__versions] memset
// [__versions] __stack_chk_fail
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] i2c_del_driver
// [__versions] enable_irq
// [__versions] disable_irq
// [__versions] devm_kfree
// [__versions] devm_kmalloc
// [__versions] __devm_iio_device_register
// [__versions] _printk
// [__versions] irq_set_irq_wake
// [__versions] power_supply_changed
// [__versions] gpio_to_desc
// [__versions] gpiod_to_irq
// [__versions] devm_request_threaded_irq
// [__versions] gpio_request_one
// [__versions] regmap_bulk_read
// [__versions] power_supply_get_drvdata
// [__versions] devm_power_supply_register
// [__versions] _dev_info
// [__versions] regmap_field_update_bits_base
// [__versions] of_get_named_gpio_flags
// [__versions] of_property_read_variable_u32_array
// [__versions] of_property_read_string
// [__versions] regmap_write
// [__versions] regmap_read
// [__versions] snprintf
// [__versions] device_create_file
// [__versions] regmap_field_read
// [__versions] power_supply_unregister
// [__versions] of_match_node
// [__versions] devm_regmap_field_alloc
// [__versions] __devm_regmap_init_i2c
// [__versions] devm_iio_device_alloc
// [__versions] i2c_register_driver
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
// [.shstrtab] .rela.data.sc8541_charger_driver
// [.shstrtab] .modinfo
// [.shstrtab] .rela.rodata.sc8541_pm
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] sc8541_charger_set_property
// [.strtab] sc8541_charger_get_property
// [.strtab] sc8541_init_iio_psy
// [.strtab] memcpy
// [.strtab] of_property_read_variable_u32_array
// [.strtab] sc8541_iio_write_raw
// [.strtab] sc8541_iio_read_raw
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] sc8541_register_interrupt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] sc8541_charger_set_property.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_charger_get_property.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_iio_write_raw.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_iio_read_raw.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_show_registers.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_store_register.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_irq_handler.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_charger_shutdown.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_charger_remove.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_iio_of_xlate.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_resume.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_charger_is_writeable.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_charger_probe.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] sc8541_suspend.210db71d0a6ac3023e89e9902927f246.cfi_jt
// [.strtab] memset
// [.strtab] sc8541_parse_dt
// [.strtab] sc8541_show_registers
// [.strtab] dev_attr_registers
// [.strtab] sc8541_charger_props
// [.strtab] ____versions
// [.strtab] sc8541_slave_iio_psy_channels
// [.strtab] sc8541_iio_psy_channels
// [.strtab] of_get_named_gpio_flags
// [.strtab] sc8541_reg_fields
// [.strtab] _dev_err
// [.strtab] i2c_register_driver
// [.strtab] sc8541_charger_driver
// [.strtab] i2c_del_driver
// [.strtab] power_supply_unregister
// [.strtab] sc8541_psy_register
// [.strtab] devm_power_supply_register
// [.strtab] sc8541_store_register
// [.strtab] __devm_iio_device_register
// [.strtab] sc8541_irq_handler
// [.strtab] gpiod_to_irq
// [.strtab] disable_irq
// [.strtab] enable_irq
// [.strtab] devm_request_threaded_irq
// [.strtab] msleep
// [.strtab] _dev_info
// [.strtab] sc8541_iio_info
// [.strtab] sc8541_charger_shutdown
// [.strtab] sc8541_pm
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] __cfi_check
// [.strtab] of_property_read_string
// [.strtab] sc8541_regmap_config
// [.strtab] cp_intr_flag
// [.strtab] snprintf
// [.strtab] sscanf
// [.strtab] sc8541_charger_remove
// [.strtab] regmap_write
// [.strtab] sc8541_iio_of_xlate
// [.strtab] regmap_field_update_bits_base
// [.strtab] gpio_request_one
// [.strtab] sc8541_resume
// [.strtab] sc8541_psy_name
// [.strtab] sc8541_irq_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] device_create_file
// [.strtab] sc8541_charger_match_table
// [.strtab] sc8541_charger_is_writeable
// [.strtab] irq_set_irq_wake
// [.strtab] devm_kfree
// [.strtab] of_match_node
// [.strtab] sc8541_get_cp_workmode
// [.strtab] sc8541_init_device
// [.strtab] sc8541_charger_probe
// [.strtab] sc8541_suspend
// [.strtab] power_supply_changed
// [.strtab] regmap_read
// [.strtab] regmap_bulk_read
// [.strtab] regmap_field_read
// [.strtab] gpio_to_desc
// [.strtab] devm_kmalloc
// [.strtab] devm_iio_device_alloc
// [.strtab] devm_regmap_field_alloc
// [.strtab] __devm_regmap_init_i2c
// [.strtab] power_supply_get_drvdata
// [.strtab] sc8541_mode_data
// [.strtab] ADC_CH
// [.strtab] _note_9
// [.strtab] $d.39
// [.strtab] $d.29
// [.strtab] $d.19
// [.strtab] $x.9
// [.strtab] _note_8
// [.strtab] $d.38
// [.strtab] $d.28
// [.strtab] $x.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.47
// [.strtab] $d.37
// [.strtab] $x.27
// [.strtab] $x.17
// [.strtab] $d.17
// [.strtab] $x.7
// [.strtab] __UNIQUE_ID_author456
// [.strtab] sc8541_charger_set_property.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_charger_get_property.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_iio_write_raw.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_iio_read_raw.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_show_registers.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_store_register.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_irq_handler.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_charger_shutdown.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_charger_remove.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_iio_of_xlate.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_resume.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_charger_is_writeable.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_charger_probe.210db71d0a6ac3023e89e9902927f246
// [.strtab] sc8541_suspend.210db71d0a6ac3023e89e9902927f246
// [.strtab] $d.46
// [.strtab] $d.36
// [.strtab] $d.26
// [.strtab] $x.16
// [.strtab] $x.6
// [.strtab] __UNIQUE_ID_license455
// [.strtab] $d.45
// [.strtab] $d.35
// [.strtab] $x.25
// [.strtab] $x.15
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] __UNIQUE_ID_description454
// [.strtab] $d.44
// [.strtab] $d.34
// [.strtab] $x.24
// [.strtab] $x.14
// [.strtab] $d.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.53
// [.strtab] $d.43
// [.strtab] $d.33
// [.strtab] $x.23
// [.strtab] $x.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.42
// [.strtab] $d.32
// [.strtab] $x.22
// [.strtab] $x.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] is_sc8541
// [.strtab] $d.41
// [.strtab] $d.31
// [.strtab] $x.21
// [.strtab] $x.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.40
// [.strtab] $d.30
// [.strtab] $x.20
// [.strtab] $x.10

/* ---- sc8541_charger_probe.210db71d0a6ac3023e89e9902927f246 @ 00103360 ---- */

ulong sc8541_charger_probe_210db71d0a6ac3023e89e9902927f246(long param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 *in_x18;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 unaff_x30;
  ulong local_70;
  ulong uStack_68;
  undefined4 local_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  lVar1 = param_1 + 0x20;
  local_58 = *(long *)(lVar5 + 0x5e0);
  uVar10 = *(undefined8 *)(param_1 + 0x310);
  _dev_err(lVar1,"%s (%s)\n","sc8541_charger_probe","1.0.0_G");
  is_sc8541 = 1;
  lVar5 = devm_iio_device_alloc(lVar1,0x388);
  plVar8 = *(long **)(lVar5 + 0x440);
  plVar8[0x6d] = lVar5;
  *plVar8 = lVar1;
  plVar8[1] = param_1;
  uVar6 = __devm_regmap_init_i2c(param_1,&sc8541_regmap_config,0,0);
  plVar8[2] = uVar6;
  if (uVar6 < 0xfffffffffffff001) {
    local_70 = 0x700000000;
    uStack_68 = 7;
    local_60 = 0;
    uVar6 = devm_regmap_field_alloc(*plVar8,uVar6,&local_70);
    lVar5 = 0;
    plVar8[3] = uVar6;
    if (uVar6 < 0xfffffffffffff001) {
      puVar12 = &DAT_001014ec;
      lVar11 = lVar5;
      do {
        if (lVar11 == 0x3b) {
          local_70 = local_70 & 0xffffffff00000000;
          uVar6 = regmap_field_read(plVar8[0x35],&local_70);
          uVar9 = uVar6 & 0xffffffff;
          if ((int)uVar6 < 0) {
            _dev_err(*plVar8,"sc8541 read field %d fail: %d\n",0x32,uVar9);
            pcVar7 = "%s fail(%d)\n";
          }
          else {
            if ((int)local_70 == 0x41) {
              *(long **)(param_1 + 0xb8) = plVar8;
              device_create_file(lVar1,&dev_attr_registers);
              lVar5 = of_match_node(&sc8541_charger_match_table,uVar10);
              if (lVar5 == 0) {
                _dev_err(*plVar8,"device tree match not found!\n");
                uVar9 = 0xffffffed;
                goto LAB_0010357c;
              }
              iVar3 = **(int **)(lVar5 + 0xc0);
              *(int *)((long)plVar8 + 0x294) = iVar3;
              pcVar7 = "master";
              if (iVar3 != 1) {
                pcVar7 = "slave";
              }
              pcVar2 = "standalone";
              if (iVar3 != 0) {
                pcVar2 = pcVar7;
              }
              _dev_err(*plVar8,"work mode is %s\n",pcVar2);
              if ((int)uVar6 != 0) {
                _dev_err(*plVar8,"Fail to set work mode!\n");
                goto LAB_0010357c;
              }
              iVar3 = sc8541_parse_dt(plVar8,lVar1);
              if (iVar3 < 0) {
                _dev_err(*plVar8,"%s parse dt failed(%d)\n","sc8541_charger_probe",iVar3);
                uVar9 = 0xfffffffb;
                goto LAB_0010357c;
              }
              uVar4 = sc8541_init_device(plVar8);
              if ((int)uVar4 < 0) {
                uVar9 = (ulong)uVar4;
                lVar5 = *plVar8;
                pcVar7 = "%s init device failed(%d)\n";
LAB_001036b4:
                _dev_err(lVar5,pcVar7,"sc8541_charger_probe",uVar9);
              }
              else {
                uVar4 = sc8541_psy_register(plVar8);
                if ((int)uVar4 < 0) {
                  uVar9 = (ulong)uVar4;
                  lVar5 = *plVar8;
                  pcVar7 = "%s psy register failed(%d)\n";
                  goto LAB_001036b4;
                }
                uVar4 = sc8541_register_interrupt(plVar8);
                if ((int)uVar4 < 0) {
                  uVar9 = (ulong)uVar4;
                  lVar5 = *plVar8;
                  pcVar7 = "%s register irq fail(%d)\n";
                  goto LAB_001036b4;
                }
                uVar6 = sc8541_init_iio_psy(plVar8);
                uVar9 = uVar6 & 0xffffffff;
                if ((int)uVar6 == 0) {
                  pcVar7 = "master";
                  if (*(int *)((long)plVar8 + 0x294) != 1) {
                    pcVar7 = "slave";
                  }
                  _dev_err(*plVar8,"sc8541[%s] probe successfully!\n",pcVar7);
                  goto LAB_0010358c;
                }
              }
              power_supply_unregister(plVar8[0x6c]);
              goto LAB_0010357c;
            }
            pcVar7 = "%s not find SC8541, ID = 0x%02x\n";
          }
          _dev_err(*plVar8,pcVar7,"sc8541_detect_device",uVar9);
          _dev_err(*plVar8,"%s detect device fail\n","sc8541_charger_probe");
          uVar9 = 0;
          is_sc8541 = 0;
          goto LAB_0010357c;
        }
        local_70 = *puVar12;
        uStack_68 = puVar12[1];
        local_60 = (undefined4)puVar12[2];
        uVar6 = devm_regmap_field_alloc(*plVar8,plVar8[2],&local_70);
        puVar12 = (ulong *)((long)puVar12 + 0x14);
        lVar5 = lVar11 + 1;
        plVar8[lVar11 + 4] = uVar6;
        lVar11 = lVar5;
      } while (uVar6 < 0xfffffffffffff001);
    }
    _dev_err(*plVar8,"cannot allocate regmap field\n");
    uVar9 = (plVar8 + 3)[lVar5];
  }
  else {
    _dev_err(*plVar8,"Failed to initialize regmap\n");
    uVar9 = (ulong)*(uint *)(plVar8 + 2);
  }
LAB_0010357c:
  _dev_err(lVar1,"sc8541 probe fail\n");
LAB_0010358c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9 & 0xffffffff;
}



/* ---- sc8541_charger_remove.210db71d0a6ac3023e89e9902927f246 @ 00103704 ---- */

undefined8 sc8541_charger_remove_210db71d0a6ac3023e89e9902927f246(long param_1)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(param_1 + 0xb8);
  power_supply_unregister(*(undefined8 *)(lVar1 + 0x360));
  devm_kfree(param_1 + 0x20,lVar1);
  return 0;
}



/* ---- sc8541_charger_shutdown.210db71d0a6ac3023e89e9902927f246 @ 0010374c ---- */

void sc8541_charger_shutdown_210db71d0a6ac3023e89e9902927f246(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 *puVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (is_sc8541 == '\x01') {
    puVar2 = *(undefined8 **)(param_1 + 0xb8);
    _dev_info(*puVar2,"%s:%d","sc8541_enable_adc",0);
    iVar1 = regmap_field_update_bits_base(puVar2[0x36],0xffffffff,0,0,0,0);
    if (iVar1 < 0) {
      _dev_err(*puVar2,"sc8541 read field %d fail: %d\n",0x33,iVar1);
    }
  }
  return;
}



/* ---- sc8541_parse_dt @ 001037e0 ---- */

int sc8541_parse_dt(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *in_x18;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x30;
  char *local_298 [3];
  long lStack_280;
  char *local_278;
  undefined8 *puStack_270;
  char *local_268;
  long lStack_260;
  char *local_258;
  undefined8 *puStack_250;
  char *local_248;
  long lStack_240;
  char *local_238;
  undefined8 *puStack_230;
  char *local_228;
  long lStack_220;
  char *local_218;
  undefined8 *puStack_210;
  char *local_208;
  long lStack_200;
  char *local_1f8;
  undefined8 *puStack_1f0;
  char *local_1e8;
  long lStack_1e0;
  char *local_1d8;
  undefined8 *puStack_1d0;
  char *local_1c8;
  long lStack_1c0;
  char *local_1b8;
  undefined8 *puStack_1b0;
  char *local_1a8;
  long lStack_1a0;
  char *local_198;
  undefined8 *puStack_190;
  char *local_188;
  long lStack_180;
  char *local_178;
  undefined8 *puStack_170;
  char *local_168;
  long lStack_160;
  char *local_158;
  undefined8 *puStack_150;
  char *local_148;
  long lStack_140;
  char *local_138;
  undefined8 *puStack_130;
  char *local_128;
  long lStack_120;
  char *local_118;
  undefined8 *puStack_110;
  char *local_108;
  long lStack_100;
  char *local_f8;
  undefined8 *puStack_f0;
  char *local_e8;
  long lStack_e0;
  char *local_d8;
  undefined8 *puStack_d0;
  char *local_c8;
  long lStack_c0;
  char *local_b8;
  undefined8 *puStack_b0;
  char *local_a8;
  long lStack_a0;
  char *local_98;
  undefined8 *local_90;
  char *local_88;
  long local_80;
  char *local_78;
  undefined8 *local_70;
  char *local_68;
  long local_60;
  char *local_58;
  undefined8 *local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x5e0);
  local_298[0] = "sc,sc8541,vbat-ovp-dis";
  local_298[1] = (char *)(param_1 + 0x3f);
  uVar3 = *(undefined8 *)(param_2 + 0x2f0);
  local_298[2] = "sc,sc8541,vbat-ovp";
  lStack_280 = (long)param_1 + 0x1fc;
  lVar4 = 0;
  local_278 = "sc,sc8541,vbat-ovp-alm-dis";
  puStack_270 = param_1 + 0x40;
  local_268 = "sc,sc8541,vbat-ovp-alm";
  lStack_260 = (long)param_1 + 0x204;
  local_258 = "sc,sc8541,ibat-ocp-dis";
  puStack_250 = param_1 + 0x41;
  local_248 = "sc,sc8541,ibat-ocp";
  lStack_240 = (long)param_1 + 0x20c;
  local_238 = "sc,sc8541,ibat-ocp-alm-dis";
  puStack_230 = param_1 + 0x42;
  local_228 = "sc,sc8541,ibat-ocp-alm";
  lStack_220 = (long)param_1 + 0x214;
  local_218 = "sc,sc8541,ibus-ucp-dis";
  puStack_210 = param_1 + 0x43;
  local_208 = "sc,sc8541,vbus-in-range-dis";
  lStack_200 = (long)param_1 + 0x21c;
  local_1f8 = "sc,sc8541,vbus-pd-en";
  puStack_1f0 = param_1 + 0x44;
  local_1e8 = "sc,sc8541,vbus-ovp";
  lStack_1e0 = (long)param_1 + 0x224;
  local_1d8 = "sc,sc8541,vbus-ovp-alm-dis";
  puStack_1d0 = param_1 + 0x45;
  local_1c8 = "sc,sc8541,vbus-ovp-alm";
  lStack_1c0 = (long)param_1 + 0x22c;
  local_1b8 = "sc,sc8541,ibus-ocp-dis";
  puStack_1b0 = param_1 + 0x46;
  local_1a8 = "sc,sc8541,ibus-ocp";
  lStack_1a0 = (long)param_1 + 0x234;
  local_198 = "sc,sc8541,tshut-dis";
  puStack_190 = param_1 + 0x47;
  local_188 = "sc,sc8541,tsbus-flt-dis";
  lStack_180 = (long)param_1 + 0x23c;
  local_178 = "sc,sc8541,tsbat-flt-dis";
  puStack_170 = param_1 + 0x48;
  local_168 = "sc,sc8541,tdie-alm";
  lStack_160 = (long)param_1 + 0x244;
  local_158 = "sc,sc8541,tsbus-flt";
  puStack_150 = param_1 + 0x49;
  local_148 = "sc,sc8541,tsbat-flt";
  lStack_140 = (long)param_1 + 0x24c;
  local_138 = "sc,sc8541,vac1-ovp";
  puStack_130 = param_1 + 0x4a;
  local_128 = "sc,sc8541,vac2-ovp";
  lStack_120 = (long)param_1 + 0x254;
  local_118 = "sc,sc8541,vac1-pd-en";
  puStack_110 = param_1 + 0x4b;
  local_108 = "sc,sc8541,vac2-pd-en";
  lStack_100 = (long)param_1 + 0x25c;
  local_f8 = "sc,sc8541,fsw-set";
  puStack_f0 = param_1 + 0x4c;
  local_e8 = "sc,sc8541,wd-timeout";
  lStack_e0 = (long)param_1 + 0x264;
  local_d8 = "sc,sc8541,wd-timeout-dis";
  puStack_d0 = param_1 + 0x4d;
  local_c8 = "sc,sc8541,ibat-sns-r";
  lStack_c0 = (long)param_1 + 0x26c;
  local_b8 = "sc,sc8541,ss-timeout";
  puStack_b0 = param_1 + 0x4e;
  local_98 = "sc,sc8541,vout-ovp-dis";
  local_a8 = "sc,sc8541,ibus-ucp-fall-dg";
  lStack_a0 = (long)param_1 + 0x274;
  local_88 = "sc,sc8541,vout-ovp";
  local_90 = param_1 + 0x4f;
  local_80 = (long)param_1 + 0x27c;
  local_78 = "sc,sc8541,ms";
  local_60 = (long)param_1 + 0x284;
  local_70 = param_1 + 0x50;
  local_68 = "sc,sc8541,pmid2out-uvp";
  local_58 = "sc,sc8541,pmid2out-ovp";
  local_50 = param_1 + 0x51;
  do {
    iVar1 = of_property_read_variable_u32_array
                      (uVar3,*(undefined8 *)((long)local_298 + lVar4),
                       *(undefined8 *)((long)local_298 + lVar4 + 8),1,0);
    if (iVar1 < 0) {
      _dev_err(*param_1,"can not read %s \n",*(undefined8 *)((long)local_298 + lVar4));
      goto LAB_00103aec;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x250);
  uVar2 = of_get_named_gpio_flags(uVar3,"sc8541,intr_gpio",0,0);
  *(uint *)((long)param_1 + 0x28c) = uVar2;
  if (uVar2 < 0x200) {
    iVar1 = of_property_read_string(uVar3,"charger_name",param_1 + 0x57);
    if (iVar1 < 0) {
      param_1[0x57] = "charger";
      _dev_err(*param_1,"no charger name\n");
    }
    iVar1 = 0;
  }
  else {
    _dev_err(*param_1,"fail to valid gpio : %d\n");
    iVar1 = -0x16;
  }
LAB_00103aec:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* ---- sc8541_init_device @ 00103b80 ---- */

int sc8541_init_device(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  undefined4 local_184;
  uint local_180 [74];
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_58 = *(long *)(lVar5 + 0x5e0);
  local_180[1] = *(uint *)(param_1 + 0x3f);
  local_180[3] = *(undefined4 *)((long)param_1 + 0x1fc);
  local_180[0] = 0;
  local_180[5] = *(uint *)(param_1 + 0x40);
  local_180[2] = 1;
  local_180[7] = *(undefined4 *)((long)param_1 + 0x204);
  local_180[4] = 2;
  local_180[9] = *(uint *)(param_1 + 0x41);
  local_180[6] = 3;
  local_180[0xb] = *(undefined4 *)((long)param_1 + 0x20c);
  local_180[8] = 4;
  local_180[0xd] = *(uint *)(param_1 + 0x42);
  local_180[10] = 5;
  local_180[0xf] = *(undefined4 *)((long)param_1 + 0x214);
  local_180[0xc] = 6;
  local_180[0x11] = *(uint *)(param_1 + 0x43);
  local_180[0xe] = 7;
  local_180[0x13] = *(undefined4 *)((long)param_1 + 0x21c);
  local_180[0x10] = 8;
  local_180[0x15] = *(uint *)(param_1 + 0x44);
  local_180[0x12] = 9;
  local_180[0x17] = *(undefined4 *)((long)param_1 + 0x224);
  local_180[0x14] = 10;
  local_180[0x19] = *(uint *)(param_1 + 0x45);
  local_180[0x16] = 0xb;
  local_180[0x1b] = *(undefined4 *)((long)param_1 + 0x22c);
  local_180[0x18] = 0xc;
  local_180[0x1d] = *(uint *)(param_1 + 0x46);
  local_180[0x1a] = 0xd;
  local_180[0x1f] = *(undefined4 *)((long)param_1 + 0x234);
  local_180[0x1c] = 0xe;
  local_180[0x21] = *(uint *)(param_1 + 0x47);
  local_180[0x1e] = 0xf;
  local_180[0x23] = *(undefined4 *)((long)param_1 + 0x23c);
  local_180[0x20] = 0x10;
  local_180[0x25] = *(uint *)(param_1 + 0x48);
  local_180[0x22] = 0x11;
  local_180[0x27] = *(undefined4 *)((long)param_1 + 0x244);
  local_180[0x24] = 0x12;
  local_180[0x29] = *(uint *)(param_1 + 0x49);
  local_180[0x26] = 0x13;
  local_180[0x2b] = *(undefined4 *)((long)param_1 + 0x24c);
  local_180[0x28] = 0x14;
  local_180[0x2d] = *(uint *)(param_1 + 0x4a);
  local_180[0x2a] = 0x15;
  local_180[0x2f] = *(undefined4 *)((long)param_1 + 0x254);
  local_180[0x2c] = 0x16;
  local_180[0x31] = *(uint *)(param_1 + 0x4b);
  local_180[0x2e] = 0x17;
  local_180[0x33] = *(undefined4 *)((long)param_1 + 0x25c);
  local_180[0x30] = 0x18;
  local_180[0x35] = *(uint *)(param_1 + 0x4c);
  local_180[0x32] = 0x19;
  local_180[0x37] = *(undefined4 *)((long)param_1 + 0x264);
  local_180[0x34] = 0x20;
  local_180[0x39] = *(uint *)(param_1 + 0x4d);
  local_180[0x36] = 0x21;
  local_180[0x3b] = *(undefined4 *)((long)param_1 + 0x26c);
  local_180[0x38] = 0x22;
  local_180[0x3d] = *(uint *)(param_1 + 0x4e);
  local_180[0x3a] = 0x23;
  local_180[0x3c] = 0x24;
  local_180[0x3f] = *(undefined4 *)((long)param_1 + 0x274);
  local_180[0x3e] = 0x25;
  local_180[0x40] = 0x26;
  local_180[0x43] = *(undefined4 *)((long)param_1 + 0x27c);
  local_180[0x42] = 0x27;
  local_180[0x45] = *(uint *)(param_1 + 0x50);
  local_180[0x41] = *(uint *)(param_1 + 0x4f);
  local_180[0x44] = 0x28;
  local_180[0x47] = *(undefined4 *)((long)param_1 + 0x284);
  local_180[0x46] = 0x38;
  local_180[0x49] = *(uint *)(param_1 + 0x51);
  local_180[0x48] = 0x39;
  iVar3 = regmap_field_update_bits_base(param_1[0x1d],0xffffffff,1,0,0,0);
  if (iVar3 < 0) {
    _dev_err(*param_1,"sc8541 read field %d fail: %d\n",0x1a,iVar3);
    _dev_err(*param_1,"%s Failed to reset registers(%d)\n","sc8541_init_device",iVar3);
  }
  msleep(10);
  lVar5 = 0;
  do {
    uVar1 = *(uint *)((long)local_180 + lVar5);
    if (0x3b < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x103fa4);
      (*pcVar2)();
    }
    iVar3 = regmap_field_update_bits_base
                      (param_1[(ulong)uVar1 + 3],0xffffffff,
                       *(undefined4 *)((long)local_180 + lVar5 + 4),0,0,0);
    if (iVar3 < 0) {
      _dev_err(*param_1,"sc8541 read field %d fail: %d\n",uVar1,iVar3);
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x128);
  _dev_info(*param_1,"%s:%d","sc8541_enable_adc",1);
  iVar4 = regmap_field_update_bits_base(param_1[0x36],0xffffffff,1,0,0,0);
  if (iVar4 < 0) {
    _dev_err(*param_1,"sc8541 read field %d fail: %d\n",0x33,iVar4);
  }
  if (*(int *)((long)param_1 + 0x294) == 2) {
    iVar3 = regmap_field_update_bits_base(param_1[0xc],0xffffffff,1,0,0,0);
    if (iVar3 < 0) {
      _dev_err(*param_1,"sc8541 read field %d fail: %d\n",9,iVar3);
      _dev_err(*param_1,"%s Failed to set vbus in range(%d)\n","sc8541_init_device",iVar3);
    }
  }
  iVar4 = 0;
  local_184 = 0;
  do {
    regmap_read(param_1[2],iVar4,&local_184);
    _dev_err(*param_1,"%s reg[0x%02x] = 0x%02x\n","sc8541_dump_reg",iVar4,local_184);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x43);
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- sc8541_psy_register @ 00103fa8 ---- */

undefined4 sc8541_psy_register(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  param_1[0x67] = (long)param_1;
  param_1[0x65] = *(long *)(*param_1 + 0x2f0);
  if (2 < *(uint *)((long)param_1 + 0x294)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x104098);
    (*pcVar1)();
  }
  puVar4 = (&sc8541_psy_name)[*(uint *)((long)param_1 + 0x294)];
  *(undefined4 *)(param_1 + 0x59) = 3;
  param_1[0x58] = (long)puVar4;
  param_1[0x5c] = (long)&sc8541_charger_props;
  param_1[0x5d] = 6;
  param_1[0x5e] = (long)sc8541_charger_get_property_210db71d0a6ac3023e89e9902927f246_cfi_jt;
  param_1[0x5f] = (long)sc8541_charger_set_property_210db71d0a6ac3023e89e9902927f246_cfi_jt;
  param_1[0x60] = (long)sc8541_charger_is_writeable_210db71d0a6ac3023e89e9902927f246_cfi_jt;
  uVar3 = devm_power_supply_register(*param_1,param_1 + 0x58,param_1 + 0x65);
  param_1[0x6c] = uVar3;
  if (uVar3 < 0xfffffffffffff001) {
    _dev_info(*param_1,"%s power supply register successfully\n",param_1[0x58]);
    uVar2 = 0;
  }
  else {
    _dev_err(*param_1,"%s failed to register psy\n","sc8541_psy_register");
    uVar2 = (undefined4)param_1[0x6c];
  }
  return uVar2;
}



/* ---- sc8541_register_interrupt @ 00104098 ---- */

int sc8541_register_interrupt(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(uint *)((long)param_1 + 0x28c) < 0x200) {
    iVar2 = gpio_request_one(*(uint *)((long)param_1 + 0x28c),1,"sc8541_irq");
    if (iVar2 == 0) {
      gpio_to_desc(*(undefined4 *)((long)param_1 + 0x28c));
      iVar2 = gpiod_to_irq();
      *(int *)(param_1 + 0x52) = iVar2;
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          return 0;
        }
        if (2 < *(uint *)((long)param_1 + 0x294)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x1041b0);
          (*pcVar1)();
        }
        iVar2 = devm_request_threaded_irq
                          (param_1[1] + 0x20,iVar2,0,
                           sc8541_irq_handler_210db71d0a6ac3023e89e9902927f246_cfi_jt,0x2002,
                           (&sc8541_irq_name)[*(uint *)((long)param_1 + 0x294)],param_1);
        if (iVar2 < 0) {
          _dev_err(*param_1,"request irq for irq=%d failed, ret =%d\n",
                   *(undefined4 *)(param_1 + 0x52),iVar2);
          return iVar2;
        }
        irq_set_irq_wake(*(undefined4 *)(param_1 + 0x52),1);
        return iVar2;
      }
      uVar3 = *param_1;
      pcVar4 = "failed to gpio_to_irq\n";
    }
    else {
      uVar3 = *param_1;
      pcVar4 = "failed to request sc8541_irq\n";
    }
  }
  else {
    uVar3 = *param_1;
    pcVar4 = "irq gpio not provided\n";
  }
  _dev_err(uVar3,pcVar4);
  return -0x16;
}



/* ---- sc8541_init_iio_psy @ 001041b0 ---- */

int sc8541_init_iio_psy(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *in_x18;
  undefined4 *puVar15;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar15 = (undefined4 *)param_1[0x6d];
  _printk("<3>sc8541_init_iio_psy start\n");
  lVar8 = devm_kmalloc(*param_1,0xb48,0xdc0);
  param_1[0x6e] = lVar8;
  if (lVar8 != 0) {
    lVar8 = devm_kmalloc(*param_1,0x1c8,0xdc0);
    param_1[0x6f] = lVar8;
    if (lVar8 != 0) {
      *(undefined1 **)(puVar15 + 0x10c) = &sc8541_iio_info;
      *(long *)(puVar15 + 0x1a) = *param_1;
      uVar9 = *(undefined8 *)(*param_1 + 0x2f0);
      *puVar15 = 1;
      *(undefined8 *)(puVar15 + 0xbe) = uVar9;
      lVar8 = param_1[0x6e];
      puVar15[0x106] = 0x13;
      *(long *)(puVar15 + 0x104) = lVar8;
      if (*(int *)((long)param_1 + 0x294) == 1) {
        lVar10 = 0;
        lVar8 = 0x88;
        *(char **)(puVar15 + 0x108) = "sc8541-master";
        lVar11 = 0;
        do {
          *(undefined4 **)(param_1[0x6f] + lVar11) = puVar15;
          uVar4 = *(undefined4 *)((long)&DAT_00101cf8 + lVar11);
          uVar5 = *(undefined4 *)((long)&DAT_00101cfc + lVar11);
          puVar1 = (undefined8 *)(param_1[0x6e] + lVar8);
          lVar8 = lVar8 + 0x98;
          *(undefined8 **)(param_1[0x6f] + lVar11 + 8) = puVar1 + -0x11;
          uVar9 = *(undefined8 *)((long)&sc8541_iio_psy_channels + lVar11);
          uVar14 = *(undefined8 *)((long)&DAT_00101d00 + lVar11);
          puVar1[-0xf] = lVar10;
          lVar10 = lVar10 + 1;
          *(undefined4 *)(puVar1 + -0x11) = uVar5;
          *(undefined4 *)((long)puVar1 + -0x84) = uVar4;
          puVar1[-1] = uVar9;
          *puVar1 = uVar9;
          puVar1[-0xc] = uVar14;
          lVar11 = lVar11 + 0x18;
        } while (lVar8 != 0xbd0);
      }
      else {
        if (*(int *)((long)param_1 + 0x294) == 2) {
          lVar10 = 0;
          lVar8 = 0xa8;
          *(char **)(puVar15 + 0x108) = "sc8541-slave";
          *(undefined4 **)param_1[0x6f] = puVar15;
          plVar12 = (long *)param_1[0x6e];
          *(long **)(param_1[0x6f] + 8) = plVar12;
          lVar11 = 1;
          plVar12[2] = 0;
          plVar13 = plVar12;
          do {
            uVar4 = *(undefined4 *)((long)&DAT_00101ec4 + lVar10);
            uVar14 = *(undefined8 *)((long)&sc8541_slave_iio_psy_channels + lVar10);
            *(undefined4 *)((long)plVar13 + lVar8 + -0xa4) =
                 *(undefined4 *)((long)&DAT_00101ec0 + lVar10);
            *(undefined4 *)plVar12 = uVar4;
            uVar9 = *(undefined8 *)((long)&DAT_00101ec8 + lVar10);
            *(undefined8 *)((long)plVar13 + lVar8 + -0x28) = uVar14;
            *(undefined8 *)((long)plVar13 + lVar8 + -0x20) = uVar14;
            *(undefined8 *)((long)plVar13 + lVar8 + -0x80) = uVar9;
            *(undefined4 **)(param_1[0x6f] + lVar10 + 0x18) = puVar15;
            plVar13 = (long *)param_1[0x6e];
            plVar2 = (long *)((long)plVar13 + lVar8);
            lVar8 = lVar8 + 0x98;
            lVar3 = param_1[0x6f] + lVar10;
            plVar12 = plVar2 + -2;
            lVar10 = lVar10 + 0x18;
            *(long **)(lVar3 + 0x20) = plVar12;
            *plVar2 = lVar11;
            lVar11 = lVar11 + 1;
          } while (lVar8 != 0xb58);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x10443c);
          (*pcVar6)();
        }
        lVar10 = 0;
        lVar8 = 0x88;
        *(char **)(puVar15 + 0x108) = "sc8541-standalone";
        lVar11 = 0;
        do {
          *(undefined4 **)(param_1[0x6f] + lVar11) = puVar15;
          uVar4 = *(undefined4 *)((long)&DAT_00101cf8 + lVar11);
          uVar5 = *(undefined4 *)((long)&DAT_00101cfc + lVar11);
          puVar1 = (undefined8 *)(param_1[0x6e] + lVar8);
          lVar8 = lVar8 + 0x98;
          *(undefined8 **)(param_1[0x6f] + lVar11 + 8) = puVar1 + -0x11;
          uVar9 = *(undefined8 *)((long)&sc8541_iio_psy_channels + lVar11);
          uVar14 = *(undefined8 *)((long)&DAT_00101d00 + lVar11);
          puVar1[-0xf] = lVar10;
          lVar10 = lVar10 + 1;
          *(undefined4 *)(puVar1 + -0x11) = uVar5;
          *(undefined4 *)((long)puVar1 + -0x84) = uVar4;
          puVar1[-1] = uVar9;
          *puVar1 = uVar9;
          puVar1[-0xc] = uVar14;
          lVar11 = lVar11 + 0x18;
        } while (lVar8 != 0xbd0);
      }
      iVar7 = __devm_iio_device_register(*param_1,puVar15,&__this_module);
      if (iVar7 != 0) {
        _printk("<3>Failed to register SC8541 IIO device, rc=%d\n",iVar7);
      }
      _printk("<3>SC8541 IIO device, rc=%d\n",iVar7);
      return iVar7;
    }
  }
  return -0xc;
}



/* ---- sc8541_show_registers.210db71d0a6ac3023e89e9902927f246 @ 0010443c ---- */

long sc8541_show_registers_210db71d0a6ac3023e89e9902927f246
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *in_x18;
  uint param3;
  long lVar3;
  undefined8 unaff_x30;
  uint local_198;
  char acStack_194 [300];
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_68 = *(long *)(lVar3 + 0x5e0);
  lVar3 = *(long *)(param_1 + 0x98);
  local_198 = 0;
  memset(acStack_194,0,300);
  iVar1 = snprintf(param_3,0x1000,"%s:\n","sc8541");
  param3 = 0;
  do {
    iVar2 = regmap_read(*(undefined8 *)(lVar3 + 0x10),param3,&local_198);
    if (iVar2 == 0) {
      iVar2 = snprintf(acStack_194,0x1000 - (long)iVar1,"Reg[%.2X] = 0x%.2x\n",param3,local_198);
      memcpy(param_3 + iVar1,acStack_194,(long)iVar2);
      iVar1 = iVar2 + iVar1;
    }
    param3 = param3 + 1;
  } while (param3 != 0x43);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar1;
}



/* ---- sc8541_store_register.210db71d0a6ac3023e89e9902927f246 @ 0010455c ---- */

undefined8
sc8541_store_register_210db71d0a6ac3023e89e9902927f246
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_30 = 0;
  iVar1 = sscanf(param_3,"%x %x",(uint *)((long)&local_30 + 4),(uint *)&local_30);
  if ((iVar1 == 2) && (local_30._4_4_ < 0x43)) {
    regmap_write(*(undefined8 *)(lVar2 + 0x10),local_30._4_4_,local_30 & 0xff);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- sc8541_charger_get_property.210db71d0a6ac3023e89e9902927f246 @ 001045fc ---- */

void sc8541_charger_get_property_210db71d0a6ac3023e89e9902927f246
               (undefined8 param_1,undefined4 param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  puVar3 = (undefined8 *)power_supply_get_drvdata();
  uVar4 = 0xffffffea;
  switch(param_2) {
  case 4:
    local_3c = 0;
    iVar2 = regmap_field_read(puVar3[0x32],&local_3c);
    if (iVar2 < 0) {
      _dev_err(*puVar3,"sc8541 read field %d fail: %d\n",0x2f,iVar2);
    }
    uVar5 = (uint)(local_3c != 0);
    *(bool *)(puVar3 + 0x53) = local_3c != 0;
    break;
  default:
    goto code_r0x00104834;
  case 0xc:
    local_3c = local_3c & 0xffff0000;
    iVar2 = regmap_bulk_read(puVar3[2],0x27,&local_3c,2);
    if (iVar2 < 0) {
      _dev_err(*puVar3,"sc8541 read %02x block failed %d\n",0x27);
      uVar5 = *(uint *)(puVar3 + 0x54);
    }
    else {
      if (iVar2 == 0) {
        *(uint *)(puVar3 + 0x54) =
             ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0x177) / 100;
      }
      uVar5 = *(uint *)(puVar3 + 0x54);
    }
    break;
  case 0x11:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar2 = regmap_bulk_read(puVar3[2],0x25,&local_3c,2);
    if (iVar2 < 0) {
      _dev_err(*puVar3,"sc8541 read %02x block failed %d\n",0x25);
      uVar5 = *(uint *)((long)puVar3 + 0x2a4);
    }
    else {
      if (iVar2 == 0) {
        *(uint *)((long)puVar3 + 0x2a4) =
             ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0x19) / 10;
      }
      uVar5 = *(uint *)((long)puVar3 + 0x2a4);
    }
    break;
  case 0x1d:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar2 = regmap_bulk_read(puVar3[2],0x31,&local_3c,2);
    if (iVar2 < 0) {
      _dev_err(*puVar3,"sc8541 read %02x block failed %d\n",0x31);
      uVar5 = *(uint *)((long)puVar3 + 0x2ac);
    }
    else {
      if (iVar2 == 0) {
        *(uint *)((long)puVar3 + 0x2ac) =
             ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0xc35) / 1000;
      }
      uVar5 = *(uint *)((long)puVar3 + 0x2ac);
    }
    break;
  case 0x1f:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar2 = regmap_bulk_read(puVar3[2],0x2f,&local_3c,2);
    if (iVar2 < 0) {
      _dev_err(*puVar3,"sc8541 read %02x block failed %d\n",0x2f);
      uVar5 = *(uint *)(puVar3 + 0x55);
    }
    else {
      if (iVar2 == 0) {
        *(uint *)(puVar3 + 0x55) =
             ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0x7d) / 100;
      }
      uVar5 = *(uint *)(puVar3 + 0x55);
    }
    break;
  case 0x33:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar2 = regmap_bulk_read(puVar3[2],0x37,&local_3c,2);
    if (iVar2 < 0) {
      _dev_err(*puVar3,"sc8541 read %02x block failed %d\n",0x37);
    }
    else if (iVar2 == 0) {
      *(uint *)(puVar3 + 0x56) = (uint)(ushort)(CONCAT11((undefined1)local_3c,local_3c._1_1_) >> 1);
    }
    uVar5 = *(uint *)(puVar3 + 0x56);
  }
  uVar4 = 0;
  *param_3 = uVar5;
code_r0x00104834:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- sc8541_charger_set_property.210db71d0a6ac3023e89e9902927f246 @ 0010490c ---- */

undefined8
sc8541_charger_set_property_210db71d0a6ac3023e89e9902927f246
          (undefined8 param_1,int param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar3 = (undefined8 *)power_supply_get_drvdata();
  if (param_2 == 4) {
    iVar2 = *param_3;
    _dev_info(*puVar3,"%s:%d","sc8541_enable_charge",iVar2 != 0);
    iVar2 = regmap_field_update_bits_base(puVar3[0x1f],0xffffffff,iVar2 != 0,0,0,0);
    if (iVar2 < 0) {
      _dev_err(*puVar3,"sc8541 read field %d fail: %d\n",0x1c,iVar2);
    }
    pcVar1 = "disable";
    if (*param_3 != 0) {
      pcVar1 = "enable";
    }
    _dev_info(*puVar3,"POWER_SUPPLY_PROP_ONLINE: %s\n",pcVar1);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffea;
  }
  return uVar4;
}



/* ---- sc8541_charger_is_writeable.210db71d0a6ac3023e89e9902927f246 @ 001049ec ---- */

undefined8 sc8541_charger_is_writeable_210db71d0a6ac3023e89e9902927f246(void)

{
  return 0;
}



/* ---- sc8541_irq_handler.210db71d0a6ac3023e89e9902927f246 @ 001049fc ---- */

undefined8
sc8541_irq_handler_210db71d0a6ac3023e89e9902927f246(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  byte local_5c [4];
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_58 = *(long *)(lVar4 + 0x5e0);
  _dev_err(*param_2,"INT OCCURED\n");
  lVar4 = 0;
  local_5c[0] = 0;
  do {
    uVar1 = *(undefined4 *)((long)&cp_intr_flag + lVar4);
    iVar3 = regmap_bulk_read(param_2[2],uVar1,local_5c,1);
    if (iVar3 < 0) {
      _dev_err(*param_2,"sc8541 read %02x block failed %d\n",uVar1,iVar3);
    }
    iVar3 = *(int *)((long)&DAT_001019bc + lVar4);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if ((*(uint *)((long)&DAT_001019c4 + lVar4) & (uint)local_5c[0]) != 0) {
      _dev_err(*param_2,"trigger :%s\n",
               *(undefined8 *)((long)&PTR_s_vbus_ovp_alm_flag_001019c8 + lVar4));
    }
    if ((*(uint *)((long)&DAT_001019d4 + lVar4) & (uint)local_5c[0]) != 0) {
      _dev_err(*param_2,"trigger :%s\n",*(undefined8 *)((long)&PTR_s_vbus_ovp_flag_001019d8 + lVar4)
              );
    }
    if (iVar3 != 2) {
      if ((*(uint *)((long)&DAT_001019e4 + lVar4) & (uint)local_5c[0]) != 0) {
        _dev_err(*param_2,"trigger :%s\n",
                 *(undefined8 *)((long)&PTR_s_ibat_ocp_alm_flag_001019e8 + lVar4));
      }
      if (iVar3 != 3) {
        if ((*(uint *)((long)&DAT_001019f4 + lVar4) & (uint)local_5c[0]) != 0) {
          _dev_err(*param_2,"trigger :%s\n",
                   *(undefined8 *)((long)&PTR_s_ibat_ocp_flag_001019f8 + lVar4));
        }
        if (iVar3 != 4) {
          if ((*(uint *)((long)&DAT_00101a04 + lVar4) & (uint)local_5c[0]) != 0) {
            _dev_err(*param_2,"trigger :%s\n",
                     *(undefined8 *)((long)&PTR_s_vout_ovp_flag_00101a08 + lVar4));
          }
          if (iVar3 != 5) {
            if ((*(uint *)((long)&DAT_00101a14 + lVar4) & (uint)local_5c[0]) != 0) {
              _dev_err(*param_2,"trigger :%s\n",
                       *(undefined8 *)((long)&PTR_s_vbat_ovp_alm_flag_00101a18 + lVar4));
            }
            if (iVar3 != 6) {
              if ((*(uint *)((long)&DAT_00101a24 + lVar4) & (uint)local_5c[0]) != 0) {
                _dev_err(*param_2,"trigger :%s\n",
                         *(undefined8 *)((long)&PTR_s_vbat_ovp_flag_00101a28 + lVar4));
              }
              if (iVar3 != 7) {
                if ((*(uint *)((long)&DAT_00101a34 + lVar4) & (uint)local_5c[0]) != 0) {
                  _dev_err(*param_2,"trigger :%s\n",*(undefined8 *)((long)&DAT_00101a38 + lVar4));
                }
                if (iVar3 != 8) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x104ca4);
                  (*pcVar2)();
                }
              }
            }
          }
        }
      }
    }
    lVar4 = lVar4 + 0x88;
    if (lVar4 == 0x2a8) {
      power_supply_changed(param_2[0x6c]);
      lVar4 = sp_el0;
      if (*(long *)(lVar4 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 1;
    }
  } while( true );
}



/* ---- sc8541_iio_read_raw.210db71d0a6ac3023e89e9902927f246 @ 00104ca4 ---- */

/* WARNING: Type propagation algorithm not settling */

void sc8541_iio_read_raw_210db71d0a6ac3023e89e9902927f246(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 *in_x18;
  undefined8 *puVar7;
  undefined8 unaff_x30;
  uint local_40;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  iVar3 = -0x16;
  puVar7 = *(undefined8 **)(param_1 + 0x440);
  *param_3 = 0;
  uVar5 = *(undefined4 *)(param_2 + 4);
  local_40 = 0;
  iVar2 = 1;
  switch(uVar5) {
  case 0x76:
    local_3c = 0;
    iVar3 = regmap_field_read(puVar7[0x32],&local_3c);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read field %d fail: %d\n",0x2f,iVar3);
    }
    iVar2 = 1;
    *(bool *)(puVar7 + 0x53) = local_3c != 0;
    *param_3 = (uint)(local_3c != 0);
    goto code_r0x00105030;
  default:
    goto code_r0x00105094;
  case 0x8f:
  case 0x91:
  case 0x96:
  case 0x99:
  case 0x9b:
  case 0x9d:
    goto code_r0x00105030;
  case 0x90:
    iVar2 = 1;
    *param_3 = *(uint *)((long)puVar7 + 0x29c);
    goto code_r0x00105030;
  case 0x92:
    iVar3 = regmap_field_read(puVar7[0x30],&local_40);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read field %d fail: %d\n",0x2d,iVar3);
    }
    else if (iVar3 == 0) {
      *(bool *)(puVar7 + 0x70) = local_40 != 0;
    }
    *param_3 = (uint)*(byte *)(puVar7 + 0x70);
    break;
  case 0x93:
    iVar3 = regmap_field_read(puVar7[0x31],&local_40);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read field %d fail: %d\n",0x2e,iVar3);
    }
    else if (iVar3 == 0) {
      *(bool *)((long)puVar7 + 0x381) = local_40 != 0;
    }
    *param_3 = (uint)*(byte *)((long)puVar7 + 0x381);
    break;
  case 0x94:
    local_3c = local_3c & 0xffff0000;
    iVar3 = regmap_bulk_read(puVar7[2],0x2f,&local_3c,2);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read %02x block failed %d\n",0x2f,iVar3);
    }
    else if (iVar3 == 0) {
      *(uint *)(puVar7 + 0x55) = ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0x7d) / 100;
    }
    *param_3 = *(uint *)(puVar7 + 0x55);
    break;
  case 0x95:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar3 = regmap_bulk_read(puVar7[2],0x31,&local_3c,2);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read %02x block failed %d\n",0x31,iVar3);
    }
    else if (iVar3 == 0) {
      *(uint *)((long)puVar7 + 0x2ac) =
           ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0xc35) / 1000;
    }
    *param_3 = *(uint *)((long)puVar7 + 0x2ac);
    break;
  case 0x97:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar3 = regmap_bulk_read(puVar7[2],0x27,&local_3c,2);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read %02x block failed %d\n",0x27,iVar3);
    }
    else if (iVar3 == 0) {
      *(uint *)(puVar7 + 0x54) = ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0x177) / 100
      ;
    }
    *param_3 = *(uint *)(puVar7 + 0x54);
    break;
  case 0x98:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar3 = regmap_bulk_read(puVar7[2],0x25,&local_3c,2);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read %02x block failed %d\n",0x25,iVar3);
    }
    else if (iVar3 == 0) {
      *(uint *)((long)puVar7 + 0x2a4) =
           ((uint)CONCAT11((undefined1)local_3c,local_3c._1_1_) * 0x19) / 10;
    }
    *param_3 = *(uint *)((long)puVar7 + 0x2a4);
    break;
  case 0x9a:
    local_3c = (uint)local_3c._2_2_ << 0x10;
    iVar3 = regmap_bulk_read(puVar7[2],0x37,&local_3c,2);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read %02x block failed %d\n",0x37,iVar3);
    }
    else if (iVar3 == 0) {
      *(uint *)(puVar7 + 0x56) = (uint)(ushort)(CONCAT11((undefined1)local_3c,local_3c._1_1_) >> 1);
    }
    *param_3 = *(uint *)(puVar7 + 0x56);
    break;
  case 0x9c:
    local_3c = 0;
    *(undefined4 *)((long)puVar7 + 900) = 0;
    iVar3 = regmap_field_read(puVar7[0x33],&local_3c);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read field %d fail: %d\n",0x30,iVar3);
      uVar4 = *puVar7;
      pcVar6 = "%s fail to read VBUS_ERRORHI_STAT(%d)\n";
LAB_001051f8:
      _dev_err(uVar4,pcVar6,"sc8541_get_status",iVar3);
    }
    else {
      if (local_3c != 0) {
        *(uint *)((long)puVar7 + 900) = *(uint *)((long)puVar7 + 900) | 1;
      }
      iVar3 = regmap_field_read(puVar7[0x34],&local_3c);
      if (iVar3 < 0) {
        _dev_err(*puVar7,"sc8541 read field %d fail: %d\n",0x31,iVar3);
        uVar4 = *puVar7;
        pcVar6 = "%s fail to read VBUS_ERRORLO_STAT(%d)\n";
        goto LAB_001051f8;
      }
      if (local_3c != 0) {
        *(uint *)((long)puVar7 + 900) = *(uint *)((long)puVar7 + 900) | 2;
      }
    }
    *param_3 = *(uint *)((long)puVar7 + 900);
    break;
  case 0xab:
    iVar3 = regmap_field_read(puVar7[0x35],&local_40);
    if (iVar3 < 0) {
      _dev_err(*puVar7,"sc8541 read field %d fail: %d\n",0x32,iVar3);
    }
    *param_3 = local_40;
    break;
  case 0xe9:
    iVar3 = sc8541_get_cp_workmode(puVar7,&local_40);
    *param_3 = local_40;
    _printk("<6>sc8541 iio get workmode =%d");
  }
  if (iVar3 < 0) {
    uVar5 = *(undefined4 *)(param_2 + 4);
code_r0x00105094:
    _printk("<3>Couldn't read IIO channel %d, ret = %d\n",uVar5,iVar3);
    iVar2 = iVar3;
  }
  else {
    iVar2 = 1;
  }
code_r0x00105030:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ---- sc8541_iio_write_raw.210db71d0a6ac3023e89e9902927f246 @ 00105210 ---- */

undefined8
sc8541_iio_write_raw_210db71d0a6ac3023e89e9902927f246(long param_1,long param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *in_x18;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 != 0x90) {
    puVar6 = *(undefined8 **)(param_1 + 0x440);
    if (iVar3 == 0xe9) {
      _dev_info(*puVar6,"N7:%s:%d","sc8541_set_cp_workmode",param_3);
      iVar3 = regmap_field_update_bits_base(puVar6[0x20],0xffffffff,param_3,0,0,0);
      if (iVar3 < 0) {
        _dev_err(*puVar6,"sc8541 read field %d fail: %d\n",0x1d,iVar3);
      }
      puVar4 = "<6>sc8541 iio set workmode =%d";
    }
    else {
      if (iVar3 != 0xbc) {
        if (iVar3 != 0x76) {
          uVar5 = 0xffffffea;
          _printk("<3>Couldn't write IIO channel %d, rc = %d\n",iVar3,0xffffffea);
          goto LAB_00105248;
        }
        _dev_info(*puVar6,"%s:%d","sc8541_enable_charge",param_3 != 0);
        iVar3 = regmap_field_update_bits_base(puVar6[0x1f],0xffffffff,param_3 != 0,0,0,0);
        if (iVar3 < 0) {
          _dev_err(*puVar6,"sc8541 read field %d fail: %d\n",0x1c,iVar3);
        }
        local_3c = 0;
        iVar3 = regmap_field_read(puVar6[0x32],&local_3c);
        if (iVar3 < 0) {
          _dev_err(*puVar6,"sc8541 read field %d fail: %d\n",0x2f,iVar3);
        }
        pcVar1 = "enable";
        if (param_3 == 0) {
          pcVar1 = "disable";
        }
        *(bool *)(puVar6 + 0x53) = local_3c != 0;
        _printk("<3>POWER_SUPPLY_PROP_CHARGING_ENABLED: %s\n",pcVar1);
        goto LAB_00105244;
      }
      puVar4 = "<3>hvdcp3_type: %d\n";
    }
    _printk(puVar4,param_3);
  }
LAB_00105244:
  uVar5 = 0;
LAB_00105248:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* ---- sc8541_iio_of_xlate.210db71d0a6ac3023e89e9902927f246 @ 001053ec ---- */

undefined4 sc8541_iio_of_xlate_210db71d0a6ac3023e89e9902927f246(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0xc);
  lVar3 = *(long *)(*(long *)(param_1 + 0x440) + 0x370);
  if (*(int *)(lVar3 + 4) == iVar1) {
    return 0;
  }
  if (*(int *)(lVar3 + 0x9c) == iVar1) {
    return 1;
  }
  if (*(int *)(lVar3 + 0x134) == iVar1) {
    return 2;
  }
  if (*(int *)(lVar3 + 0x1cc) == iVar1) {
    return 3;
  }
  if (*(int *)(lVar3 + 0x264) == iVar1) {
    return 4;
  }
  if (*(int *)(lVar3 + 0x2fc) == iVar1) {
    return 5;
  }
  if (*(int *)(lVar3 + 0x394) == iVar1) {
    return 6;
  }
  if (*(int *)(lVar3 + 0x42c) == iVar1) {
    return 7;
  }
  if (*(int *)(lVar3 + 0x4c4) == iVar1) {
    return 8;
  }
  if (*(int *)(lVar3 + 0x55c) == iVar1) {
    return 9;
  }
  if (*(int *)(lVar3 + 0x5f4) == iVar1) {
    return 10;
  }
  if (*(int *)(lVar3 + 0x68c) == iVar1) {
    return 0xb;
  }
  if (*(int *)(lVar3 + 0x724) == iVar1) {
    return 0xc;
  }
  if (*(int *)(lVar3 + 0x7bc) == iVar1) {
    return 0xd;
  }
  if (*(int *)(lVar3 + 0x854) == iVar1) {
    return 0xe;
  }
  if (*(int *)(lVar3 + 0x8ec) == iVar1) {
    return 0xf;
  }
  if (*(int *)(lVar3 + 0x984) == iVar1) {
    return 0x10;
  }
  if (*(int *)(lVar3 + 0xa1c) == iVar1) {
    return 0x11;
  }
  uVar2 = 0x12;
  if (*(int *)(lVar3 + 0xab4) != iVar1) {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ---- sc8541_get_cp_workmode @ 001055c8 ---- */

int sc8541_get_cp_workmode(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  iVar2 = regmap_field_read(param_1[0x20],&local_3c);
  if (iVar2 < 0) {
    _dev_err(*param_1,"sc8541 read field %d fail: %d\n",0x1d,iVar2);
  }
  *param_2 = local_3c;
  _dev_info(*param_1,"N7:%s:%d","sc8541_get_cp_workmode");
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- sc8541_suspend.210db71d0a6ac3023e89e9902927f246 @ 00105680 ---- */

undefined8 sc8541_suspend_210db71d0a6ac3023e89e9902927f246(long param_1)

{
  undefined8 *in_x18;
  undefined8 *puVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (is_sc8541 == '\x01') {
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    _dev_info(*puVar1,"Suspend successfully!");
    if (((*(ushort *)(param_1 + 0x10c) & 1) != 0) && (*(long *)(param_1 + 0x148) != 0)) {
      irq_set_irq_wake(*(undefined4 *)(puVar1 + 0x52),1);
    }
    disable_irq(*(undefined4 *)(puVar1 + 0x52));
  }
  return 0;
}



/* ---- sc8541_resume.210db71d0a6ac3023e89e9902927f246 @ 001056fc ---- */

undefined8 sc8541_resume_210db71d0a6ac3023e89e9902927f246(long param_1)

{
  undefined8 *in_x18;
  undefined8 *puVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (is_sc8541 == '\x01') {
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    _dev_info(*puVar1,"Resume successfully!");
    if (((*(ushort *)(param_1 + 0x10c) & 1) != 0) && (*(long *)(param_1 + 0x148) != 0)) {
      irq_set_irq_wake(*(undefined4 *)(puVar1 + 0x52),0);
    }
    enable_irq(*(undefined4 *)(puVar1 + 0x52));
  }
  return 0;
}



/* ---- init_module @ 001057d4 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  i2c_register_driver(&__this_module,&sc8541_charger_driver);
  return;
}



/* ---- cleanup_module @ 00105808 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  i2c_del_driver(&sc8541_charger_driver);
  return;
}


/* functions: 22 ok, 0 failed */
