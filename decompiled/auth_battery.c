/* Decompiled with Ghidra from auth_battery.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 3%s enter

// [.rodata] batt_verify
// [.rodata] lc_auth_battery_probe
// [.rodata] third_supplier
// [.rodata] 3auth_iio_init end

// [.rodata] auth_authen_result
// [.rodata] second_supplier
// [.rodata] 3Failed to initialize AUTH IIO PSY, ret=%d

// [.rodata] 3Unsupported AUTH IIO chan %d

// [.rodata] auth_batt_id
// [.rodata] auth_cycle_count
// [.rodata] lc,auth-battery
// [.rodata] unknown
// [.rodata] 3auth_iio_init start

// [.rodata] auth_chip_id
// [.rodata] auth_battery
// [.rodata] 3Couldn't write IIO channel %d, rc = %d

// [.rodata] 3Failed to allocate memory

// [.rodata] auth_manufacturer
// [.rodata] lc_auth_battery_remove
// [.rodata] main_suppiler
// [.rodata] 3Couldn't read IIO channel %d, rc = %d

// [.rodata] auth_battery_exit
// [.rodata] batt_manufacturer
// [.rodata] 3%s remove

// [.rodata] auth_battery_init
// [.rodata] 3No platform data found

// [.rodata] auth_chip_ok
// [.rodata] 3%s register verify psy fail

// [.rodata] 3Failed to register battery IIO device, rc=%d

// [.rodata] lc,auth-battery
// [.modinfo] description=auth battery driver
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=auth_battery
// [.modinfo] intree=Y
// [.modinfo] depends=battery_auth_class
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] auth_battery
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] platform_driver_unregister
// [__versions] auth_device_unregister
// [__versions] power_supply_unregister
// [__versions] devm_kmalloc
// [__versions] __devm_iio_device_register
// [__versions] power_supply_get_drvdata
// [__versions] auth_device_start_auth
// [__versions] auth_device_get_batt_id
// [__versions] power_supply_register
// [__versions] get_batt_auth_by_name
// [__versions] devm_iio_device_alloc
// [__versions] __platform_driver_register
// [__versions] _printk
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
// [.shstrtab] .rela.data.lc_auth_battery_driver
// [.shstrtab] .modinfo
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.rodata.auth_device_name
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] verify_get_property
// [.strtab] auth_index
// [.strtab] auth_iio_write_raw
// [.strtab] auth_iio_read_raw
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] verify_get_property.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] auth_iio_write_raw.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] auth_iio_read_raw.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] lc_auth_battery_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] auth_iio_of_xlate.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] lc_auth_battery_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] verify_props
// [.strtab] ____versions
// [.strtab] auth_iio_psy_channels
// [.strtab] lc_auth_battery_driver
// [.strtab] power_supply_unregister
// [.strtab] platform_driver_unregister
// [.strtab] auth_device_unregister
// [.strtab] power_supply_register
// [.strtab] __platform_driver_register
// [.strtab] __devm_iio_device_register
// [.strtab] auth_iio_info
// [.strtab] g_info
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] __cfi_check
// [.strtab] auth_device_start_auth
// [.strtab] auth_battery_dt_match
// [.strtab] lc_auth_battery_remove
// [.strtab] auth_iio_of_xlate
// [.strtab] get_batt_auth_by_name
// [.strtab] auth_device_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] kfree
// [.strtab] lc_auth_battery_probe
// [.strtab] auth_device_get_batt_id
// [.strtab] devm_kmalloc
// [.strtab] devm_iio_device_alloc
// [.strtab] verify_get_property.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] auth_iio_write_raw.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] auth_iio_read_raw.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] lc_auth_battery_remove.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] auth_iio_of_xlate.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] lc_auth_battery_probe.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] power_supply_get_drvdata
// [.strtab] _note_9
// [.strtab] __UNIQUE_ID_description339
// [.strtab] $d.19
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.17
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $d.16
// [.strtab] $x.6
// [.strtab] $d.15
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.24
// [.strtab] $d.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.23
// [.strtab] $d.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.22
// [.strtab] $x.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.21
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] __UNIQUE_ID_license340
// [.strtab] $d.30
// [.strtab] $d.20
// [.strtab] $x.10

/* ---- lc_auth_battery_probe.4e8b0154c58fc8baa75c3124f9a25b1c @ 001011a0 ---- */

void lc_auth_battery_probe_4e8b0154c58fc8baa75c3124f9a25b1c(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *in_x18;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined8 unaff_x30;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_58 = *(long *)(lVar4 + 0x5e0);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = (long *)0x0;
  local_90 = 0;
  if (*(long *)(param_1 + 0x300) == 0) {
    plVar10 = *(long **)(param_1 + 0xa0);
  }
  else {
    lVar4 = devm_iio_device_alloc(param_1 + 0x10,0xc0);
    if (lVar4 == 0) {
      _printk("<3>Failed to allocate memory\n");
      uVar5 = 0xfffffff4;
      goto LAB_001014b0;
    }
    plVar10 = *(long **)(lVar4 + 0x440);
    plVar10[0x16] = lVar4;
  }
  if (plVar10 == (long *)0x0) {
    _printk("<3>No platform data found\n");
  }
  lVar4 = get_batt_auth_by_name("main_suppiler");
  plVar11 = plVar10 + 1;
  *plVar11 = lVar4;
  lVar4 = get_batt_auth_by_name("second_supplier");
  plVar12 = plVar10 + 2;
  *plVar12 = lVar4;
  lVar4 = get_batt_auth_by_name("third_supplier");
  plVar10[5] = (long)"batt_verify";
  *(undefined4 *)(plVar10 + 6) = 1;
  plVar13 = plVar10 + 3;
  *plVar13 = lVar4;
  plVar10[9] = (long)&verify_props;
  plVar10[10] = 3;
  plVar10[0xb] = (long)verify_get_property_4e8b0154c58fc8baa75c3124f9a25b1c_cfi_jt;
  local_80 = plVar10;
  lVar4 = power_supply_register(0,plVar10 + 5,&local_90);
  plVar10[4] = lVar4;
  if (lVar4 == 0) {
    _printk("<3>%s register verify psy fail\n","lc_auth_battery_probe");
  }
  *(undefined1 *)(plVar10 + 0x17) = 0;
  g_info = plVar10;
  *(undefined2 *)(plVar10 + 0x12) = 0xff00;
  if (plVar10[1] == 0) {
    if (*plVar12 != 0) {
      uVar14 = 1;
      iVar3 = auth_device_start_auth();
      plVar13 = plVar12;
      goto joined_r0x001013bc;
    }
    if (*plVar13 != 0) {
      uVar14 = 2;
      iVar3 = auth_device_start_auth();
      goto joined_r0x001013bc;
    }
  }
  else {
    auth_device_get_batt_id(plVar10[1],(long)plVar10 + 0x91);
    uVar14 = 0;
    iVar3 = auth_device_start_auth(*plVar11);
    plVar13 = plVar11;
joined_r0x001013bc:
    if (iVar3 == 0) {
      auth_device_get_batt_id(*plVar13,(long)plVar10 + 0x91);
      auth_index = uVar14;
      *(undefined1 *)(plVar10 + 0x12) = 1;
      *(undefined1 *)(plVar10 + 0x17) = 1;
    }
  }
  plVar10[0x14] = param_1 + 0x10;
  *plVar10 = param_1;
  *(long **)(param_1 + 0xa8) = plVar10;
  puVar9 = (undefined4 *)plVar10[0x16];
  _printk("<3>auth_iio_init start\n");
  lVar4 = devm_kmalloc(plVar10[0x14],0x428,0xdc0);
  plVar10[0x13] = lVar4;
  if (lVar4 == 0) {
LAB_0010138c:
    _printk("<3>Failed to initialize AUTH IIO PSY, ret=%d\n",0xfffffff4);
  }
  else {
    lVar4 = devm_kmalloc(plVar10[0x14],0xa8,0xdc0);
    plVar10[0x15] = lVar4;
    if (lVar4 == 0) goto LAB_0010138c;
    lVar7 = 0;
    *(undefined1 **)(puVar9 + 0x10c) = &auth_iio_info;
    *(long *)(puVar9 + 0x1a) = plVar10[0x14];
    uVar5 = *(undefined8 *)(plVar10[0x14] + 0x2f0);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0xbe) = uVar5;
    lVar4 = plVar10[0x13];
    puVar9[0x106] = 7;
    *(long *)(puVar9 + 0x104) = lVar4;
    *(char **)(puVar9 + 0x108) = "auth_battery";
    lVar4 = 0x88;
    lVar6 = 0;
    do {
      *(undefined4 **)(plVar10[0x15] + lVar6) = puVar9;
      uVar14 = *(undefined4 *)((long)&DAT_001005f0 + lVar6);
      uVar2 = *(undefined4 *)((long)&DAT_001005f4 + lVar6);
      puVar1 = (undefined8 *)(plVar10[0x13] + lVar4);
      lVar4 = lVar4 + 0x98;
      *(undefined8 **)(plVar10[0x15] + lVar6 + 8) = puVar1 + -0x11;
      uVar5 = *(undefined8 *)((long)&auth_iio_psy_channels + lVar6);
      uVar8 = *(undefined8 *)((long)&DAT_001005f8 + lVar6);
      puVar1[-0xf] = lVar7;
      lVar7 = lVar7 + 1;
      *(undefined4 *)(puVar1 + -0x11) = uVar2;
      *(undefined4 *)((long)puVar1 + -0x84) = uVar14;
      puVar1[-1] = uVar5;
      *puVar1 = uVar5;
      puVar1[-0xc] = uVar8;
      lVar6 = lVar6 + 0x18;
    } while (lVar4 != 0x4b0);
    iVar3 = __devm_iio_device_register(plVar10[0x14],puVar9,&__this_module);
    if (iVar3 != 0) {
      _printk("<3>Failed to register battery IIO device, rc=%d\n",iVar3);
    }
    _printk("<3>auth_iio_init end\n");
  }
  uVar5 = 0;
  *(undefined8 *)(plVar10[0x14] + 0x98) = 0;
LAB_001014b0:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ---- lc_auth_battery_remove.4e8b0154c58fc8baa75c3124f9a25b1c @ 001014ec ---- */

undefined8 lc_auth_battery_remove_4e8b0154c58fc8baa75c3124f9a25b1c(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>%s remove\n","lc_auth_battery_remove");
  power_supply_unregister(*(undefined8 *)(g_info + 0x20));
  auth_device_unregister(*(undefined8 *)(g_info + 8));
  auth_device_unregister(*(undefined8 *)(g_info + 0x10));
  auth_device_unregister(*(undefined8 *)(g_info + 0x18));
  kfree(g_info);
  return 0;
}



/* ---- verify_get_property.4e8b0154c58fc8baa75c3124f9a25b1c @ 00101568 ---- */

undefined8
verify_get_property_4e8b0154c58fc8baa75c3124f9a25b1c(undefined8 param_1,int param_2,uint *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = power_supply_get_drvdata();
  if (param_2 == 4) {
    bVar1 = *(byte *)(lVar2 + 0x91);
  }
  else {
    if (param_2 == 0x49) {
      *(undefined **)param_3 = (&auth_device_name)[auth_index];
      return 0;
    }
    if (param_2 != 5) {
      return 0xffffffea;
    }
    bVar1 = *(byte *)(lVar2 + 0x90);
  }
  *param_3 = (uint)bVar1;
  return 0;
}



/* ---- auth_iio_read_raw.4e8b0154c58fc8baa75c3124f9a25b1c @ 001015f0 ---- */

undefined8
auth_iio_read_raw_4e8b0154c58fc8baa75c3124f9a25b1c(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x440);
  *param_3 = 0;
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0xb4:
    uVar1 = (uint)*(byte *)(lVar2 + 0x90);
    break;
  case 0xb5:
    uVar1 = (uint)*(byte *)(lVar2 + 0x91);
    break;
  case 0xb6:
    goto code_r0x00101674;
  default:
    _printk("<3>Couldn't read IIO channel %d, rc = %d\n",*(undefined4 *)(param_2 + 4),0xffffffea);
    return 0xffffffea;
  case 0xb9:
    uVar1 = auth_index;
    break;
  case 0xbb:
    uVar1 = (uint)*(byte *)(lVar2 + 0xb8);
  }
  *param_3 = uVar1;
code_r0x00101674:
  return 1;
}



/* ---- auth_iio_write_raw.4e8b0154c58fc8baa75c3124f9a25b1c @ 001016a8 ---- */

undefined8 auth_iio_write_raw_4e8b0154c58fc8baa75c3124f9a25b1c(undefined8 param_1,long param_2)

{
  undefined8 *in_x18;
  undefined8 uVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(uint *)(param_2 + 4) & 0xfffffffe) == 0xb6) {
    uVar1 = 0;
  }
  else {
    _printk("<3>Unsupported AUTH IIO chan %d\n");
    uVar1 = 0xffffffea;
    _printk("<3>Couldn't write IIO channel %d, rc = %d\n",*(undefined4 *)(param_2 + 4),0xffffffea);
  }
  return uVar1;
}



/* ---- auth_iio_of_xlate.4e8b0154c58fc8baa75c3124f9a25b1c @ 00101714 ---- */

undefined4 auth_iio_of_xlate_4e8b0154c58fc8baa75c3124f9a25b1c(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0xc);
  lVar3 = *(long *)(*(long *)(param_1 + 0x440) + 0x98);
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
  uVar2 = 6;
  if (*(int *)(lVar3 + 0x394) != iVar1) {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ---- init_module @ 00101834 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>%s enter\n","auth_battery_init");
  __platform_driver_register(&lc_auth_battery_driver,&__this_module);
  return;
}



/* ---- cleanup_module @ 0010187c ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>%s enter\n","auth_battery_exit");
  platform_driver_unregister(&lc_auth_battery_driver);
  return;
}


/* functions: 8 ok, 0 failed */
