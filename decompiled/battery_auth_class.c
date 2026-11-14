/* Decompiled with Ghidra from battery_auth_class.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 3%s: battery id name = %s

// [.rodata] auth_device_get_batt_id
// [.rodata] onewire
// [.rodata] 3%s: name = %s

// [.rodata] auth_device_start_auth
// [.rodata] auth_device_get_chip_ok
// [.rodata] 3onewire gpio exit entry.

// [.rodata] auth_device_register
// [.rodata] 3 probe failed, exi t!

// [.rodata] battery_auth
// [.rodata] anonymous
// [.rodata] 3%s gpio_request (pin) failed

// [.rodata] 3%s onewire_gpio_probe start

// [.rodata] 3 probe successfully, onewire_gpio_detected = %d .

// [.rodata] 3onewire gpio init entry.

// [.rodata] 3%s: name = %s not fund

// [.rodata] onewire_gpio
// [.rodata] 3 platform_driver_register fail retval = %d 
 
// [.rodata] 3%s: battery id name = %s not fund

// [.rodata] 3%s: name = %s end 

// [.rodata] 3Unable to create auth class(%d)

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/drivers/power/supply/battery_secret/battery_auth_class.c
// [.rodata] onewire_gpio_probe
// [.rodata] xiaomi,onewire_gpio
// [.rodata] 'int (struct auth_device *)'
// [.rodata] 'int (struct auth_device *, unsigned char *)'
// [__ksymtab_strings] auth_device_get_batt_id
// [__ksymtab_strings] auth_device_start_auth
// [__ksymtab_strings] auth_device_get_chip_ok
// [__ksymtab_strings] auth_device_register
// [__ksymtab_strings] auth_device_unregister
// [__ksymtab_strings] get_batt_auth_by_name
// [__ksymtab_strings] onewire_gpio_get_status
// [__ksymtab_strings] auth_device_probe_done
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=battery_auth_class
// [.modinfo] intree=Y
// [.modinfo] depends=
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] battery_auth_class
// [__versions] module_layout
// [__versions] kmalloc_caches
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] platform_driver_unregister
// [__versions] snprintf
// [__versions] gpiod_direction_output
// [__versions] devm_gpiod_get_index
// [__versions] __class_create
// [__versions] __platform_driver_register
// [__versions] kmem_cache_alloc_trace
// [__versions] class_find_device
// [__versions] device_unregister
// [__versions] device_register
// [__versions] dev_set_name
// [__versions] __cfi_slowpath_diag
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
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .rela.rodata.auth_group
// [.shstrtab] .modinfo
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .rela___ksymtab+auth_device_start_auth
// [.shstrtab] .rela___kcrctab+auth_device_start_auth
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
// [.shstrtab] .rela.data..Lanon.a9d4f80347b128169cafa5375a6c274c.1
// [.strtab] onewire_gpio_probe.__key
// [.strtab] devm_gpiod_get_index
// [.strtab] name_show
// [.strtab] gpiod_direction_output
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] onewire_gpio_get_status.cfi_jt
// [.strtab] auth_device_unregister.cfi_jt
// [.strtab] auth_device_register.cfi_jt
// [.strtab] auth_device_get_chip_ok.cfi_jt
// [.strtab] auth_device_start_auth.cfi_jt
// [.strtab] auth_device_probe_done.cfi_jt
// [.strtab] get_batt_auth_by_name.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] auth_device_get_batt_id.cfi_jt
// [.strtab] name_show.33634cde82a06893a87983a1bb59cdad.cfi_jt
// [.strtab] auth_device_release.33634cde82a06893a87983a1bb59cdad.cfi_jt
// [.strtab] auth_match_device_by_name.33634cde82a06893a87983a1bb59cdad.cfi_jt
// [.strtab] onewire_gpio_probe.33634cde82a06893a87983a1bb59cdad.cfi_jt
// [.strtab] __kstrtabns_onewire_gpio_get_status
// [.strtab] __crc_onewire_gpio_get_status
// [.strtab] __kstrtab_onewire_gpio_get_status
// [.strtab] __ksymtab_onewire_gpio_get_status
// [.strtab] auth_class
// [.strtab] auth_attrs
// [.strtab] auth_groups
// [.strtab] ____versions
// [.strtab] kmalloc_caches
// [.strtab] onewire_gpio_driver
// [.strtab] platform_driver_unregister
// [.strtab] __kstrtabns_auth_device_unregister
// [.strtab] __crc_auth_device_unregister
// [.strtab] __kstrtab_auth_device_unregister
// [.strtab] __ksymtab_auth_device_unregister
// [.strtab] __platform_driver_register
// [.strtab] __kstrtabns_auth_device_register
// [.strtab] __crc_auth_device_register
// [.strtab] __kstrtab_auth_device_register
// [.strtab] __ksymtab_auth_device_register
// [.strtab] __typeid__ZTSFiP11auth_devicePhE_global_addr
// [.strtab] __typeid__ZTSFiP11auth_deviceE_global_addr
// [.strtab] auth_group
// [.strtab] strcmp
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] __kstrtabns_auth_device_get_chip_ok
// [.strtab] __crc_auth_device_get_chip_ok
// [.strtab] __kstrtab_auth_device_get_chip_ok
// [.strtab] __ksymtab_auth_device_get_chip_ok
// [.strtab] __cfi_check
// [.strtab] __kstrtabns_auth_device_start_auth
// [.strtab] __crc_auth_device_start_auth
// [.strtab] __kstrtab_auth_device_start_auth
// [.strtab] __ksymtab_auth_device_start_auth
// [.strtab] onewire_gpio_dt_match
// [.strtab] __cfi_slowpath_diag
// [.strtab] snprintf
// [.strtab] __class_create
// [.strtab] auth_device_release
// [.strtab] __kstrtabns_auth_device_probe_done
// [.strtab] __crc_auth_device_probe_done
// [.strtab] __kstrtab_auth_device_probe_done
// [.strtab] __ksymtab_auth_device_probe_done
// [.strtab] __kstrtabns_get_batt_auth_by_name
// [.strtab] __crc_get_batt_auth_by_name
// [.strtab] __kstrtab_get_batt_auth_by_name
// [.strtab] __ksymtab_get_batt_auth_by_name
// [.strtab] auth_match_device_by_name
// [.strtab] dev_set_name
// [.strtab] dev_attr_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] kfree
// [.strtab] class_find_device
// [.strtab] kmem_cache_alloc_trace
// [.strtab] onewire_gpio_probe
// [.strtab] gpiod
// [.strtab] __kstrtabns_auth_device_get_batt_id
// [.strtab] __crc_auth_device_get_batt_id
// [.strtab] __kstrtab_auth_device_get_batt_id
// [.strtab] __ksymtab_auth_device_get_batt_id
// [.strtab] onewire_gpio_detected
// [.strtab] name_show.33634cde82a06893a87983a1bb59cdad
// [.strtab] auth_device_release.33634cde82a06893a87983a1bb59cdad
// [.strtab] auth_match_device_by_name.33634cde82a06893a87983a1bb59cdad
// [.strtab] onewire_gpio_probe.33634cde82a06893a87983a1bb59cdad
// [.strtab] _note_9
// [.strtab] __UNIQUE_ID_license349
// [.strtab] $d.49
// [.strtab] $d.39
// [.strtab] $x.29
// [.strtab] $x.19
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.48
// [.strtab] $x.28
// [.strtab] $x.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.47
// [.strtab] $d.37
// [.strtab] $x.27
// [.strtab] $d.17
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $d.46
// [.strtab] $d.36
// [.strtab] $x.26
// [.strtab] $d.16
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] $d.45
// [.strtab] $d.35
// [.strtab] $x.25
// [.strtab] $d.15
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.54
// [.strtab] $d.44
// [.strtab] $x.34
// [.strtab] $x.24
// [.strtab] $d.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.53
// [.strtab] $d.43
// [.strtab] $d.33
// [.strtab] $x.23
// [.strtab] $d.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.52
// [.strtab] $d.42
// [.strtab] $x.32
// [.strtab] $x.22
// [.strtab] $x.12
// [.strtab] $d.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.51
// [.strtab] $d.41
// [.strtab] $x.31
// [.strtab] $x.21
// [.strtab] $x.11
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.60
// [.strtab] $d.50
// [.strtab] $d.40
// [.strtab] $x.30
// [.strtab] $x.20
// [.strtab] $x.10
// [.strtab] $d.10

/* ---- auth_device_start_auth @ 00101288 ---- */

undefined8 auth_device_start_auth(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((param_1 == 0) || (*(long **)(param_1 + 8) == (long *)0x0)) ||
     (**(long **)(param_1 + 8) == 0)) {
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
    }
    _printk("<3>%s: name = %s not fund\n","auth_device_start_auth",lVar2);
    uVar1 = 0xffffffa1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
    }
    _printk("<3>%s: name = %s\n","auth_device_start_auth",lVar2);
    pcVar3 = (code *)**(undefined8 **)(param_1 + 8);
    if (2 < ((ulong)(pcVar3 + -0x101270) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x96f00efcc0a25df2,pcVar3,&DAT_001001d0);
    }
    uVar1 = (*pcVar3)(param_1);
  }
  return uVar1;
}



/* ---- auth_device_get_batt_id @ 00101364 ---- */

undefined8 auth_device_get_batt_id(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
    }
    _printk("<3>%s: battery id name = %s not fund\n","auth_device_get_batt_id",lVar2);
    uVar1 = 0xffffffa1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
    }
    _printk("<3>%s: battery id name = %s\n","auth_device_get_batt_id",lVar2);
    pcVar3 = *(code **)(*(long *)(param_1 + 8) + 8);
    if (pcVar3 != auth_device_get_batt_id_cfi_jt) {
      __cfi_slowpath_diag(0xa254c4d8bbf82726,pcVar3,&DAT_001001f0);
    }
    uVar1 = (*pcVar3)(param_1,param_2);
  }
  return uVar1;
}



/* ---- auth_device_probe_done @ 00101448 ---- */

undefined8 auth_device_probe_done(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x10), pcVar2 == (code *)0x0)) {
    uVar1 = 0xffffffa1;
  }
  else {
    if (2 < ((ulong)(pcVar2 + -0x101270) >> 3 | (long)pcVar2 << 0x3d)) {
      __cfi_slowpath_diag(0x96f00efcc0a25df2,pcVar2,&DAT_00100210);
    }
    uVar1 = (*pcVar2)(param_1);
  }
  return uVar1;
}



/* ---- auth_device_get_chip_ok @ 001014d4 ---- */

undefined8 auth_device_get_chip_ok(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x18) == 0)) {
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
    }
    _printk("<3>%s: name = %s not fund\n","auth_device_get_chip_ok",lVar2);
    uVar1 = 0xffffffa1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
    }
    _printk("<3>%s: name = %s\n","auth_device_get_chip_ok",lVar2);
    pcVar3 = *(code **)(*(long *)(param_1 + 8) + 0x18);
    if (2 < ((ulong)(pcVar3 + -0x101270) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x96f00efcc0a25df2,pcVar3,&DAT_00100230);
    }
    uVar1 = (*pcVar3)(param_1);
  }
  return uVar1;
}



/* ---- auth_device_register @ 001015b0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long auth_device_register
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>%s: name = %s\n","auth_device_register",param_1);
  lVar4 = kmem_cache_alloc_trace(_DAT_001030d0,0xdc0,0x3c8);
  if (lVar4 == 0) {
    lVar4 = -0xc;
  }
  else {
    *(undefined8 *)(lVar4 + 0x78) = param_2;
    uVar2 = _gpiod;
    uVar1 = auth_class;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(code **)(lVar4 + 0x348) = auth_device_release_33634cde82a06893a87983a1bb59cdad_cfi_jt;
    *(undefined8 *)(lVar4 + 0x338) = uVar1;
    *(undefined8 *)(lVar4 + 0x3b0) = uVar2;
    dev_set_name(lVar4 + 0x18,param_1);
    *(undefined8 *)(lVar4 + 0xb0) = param_3;
    iVar3 = device_register(lVar4 + 0x18);
    if (iVar3 == 0) {
      *(undefined8 *)(lVar4 + 8) = param_4;
      _printk("<3>%s: name = %s end \n","auth_device_register",param_1);
    }
    else {
      kfree(lVar4);
      lVar4 = (long)iVar3;
    }
  }
  return lVar4;
}



/* ---- auth_device_release.33634cde82a06893a87983a1bb59cdad @ 001016b4 ---- */

void auth_device_release_33634cde82a06893a87983a1bb59cdad(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  kfree(param_1 + -0x18);
  return;
}



/* ---- auth_device_unregister @ 001016dc ---- */

void auth_device_unregister(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (param_1 != 0) {
    *in_x18 = unaff_x30;
    *(undefined8 *)(param_1 + 8) = 0;
    device_unregister(param_1 + 0x18);
  }
  return;
}



/* ---- get_batt_auth_by_name @ 00101714 ---- */

long get_batt_auth_by_name(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  lVar2 = 0;
  if (param_1 != 0) {
    *in_x18 = unaff_x30;
    lVar1 = class_find_device(auth_class,0,param_1,
                              auth_match_device_by_name_33634cde82a06893a87983a1bb59cdad_cfi_jt);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1 + -0x18;
    }
  }
  return lVar2;
}



/* ---- auth_match_device_by_name.33634cde82a06893a87983a1bb59cdad @ 00101764 ---- */

bool auth_match_device_by_name_33634cde82a06893a87983a1bb59cdad(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  __s1 = (char *)param_1[0xe];
  if (__s1 == (char *)0x0) {
    __s1 = (char *)*param_1;
  }
  iVar1 = strcmp(__s1,param_2);
  return iVar1 == 0;
}



/* ---- onewire_gpio_get_status @ 001017a0 ---- */

undefined1 onewire_gpio_get_status(void)

{
  return onewire_gpio_detected;
}



/* ---- onewire_gpio_probe.33634cde82a06893a87983a1bb59cdad @ 001017b4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong onewire_gpio_probe_33634cde82a06893a87983a1bb59cdad(long param_1)

{
  ulong uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  auth_class = __class_create(&__this_module,"battery_auth",&onewire_gpio_probe___key);
  if (auth_class < 0xfffffffffffff001) {
    *(undefined ***)(auth_class + 0x18) = &auth_groups;
    _printk("<3>%s onewire_gpio_probe start\n","onewire_gpio_probe");
    _gpiod = devm_gpiod_get_index(param_1 + 0x10,"onewire",0,0xb);
    if (_gpiod < 0xfffffffffffff001) {
      gpiod_direction_output(_gpiod,1);
      uVar1 = 0;
    }
    else {
      _printk("<3>%s gpio_request (pin) failed\n","onewire_gpio_probe");
      uVar1 = _gpiod & 0xffffffff;
    }
  }
  else {
    _printk("<3>Unable to create auth class(%d)\n");
    uVar1 = auth_class & 0xffffffff;
  }
  return uVar1;
}



/* ---- name_show.33634cde82a06893a87983a1bb59cdad @ 00101894 ---- */

long name_show_33634cde82a06893a87983a1bb59cdad(long param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pcVar1 = "anonymous";
  if (*(char **)(param_1 + -0x18) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + -0x18);
  }
  iVar2 = snprintf(param_3,0x14,"%s\n",pcVar1);
  return (long)iVar2;
}



/* ---- init_module @ 001019fc ---- */

int init_module(void)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  onewire_gpio_detected = 0;
  _printk("<3>onewire gpio init entry.\n");
  iVar1 = __platform_driver_register(&onewire_gpio_driver,&__this_module);
  if (iVar1 == 0) {
    onewire_gpio_detected = 1;
    _printk("<3> probe successfully, onewire_gpio_detected = %d .\n",1);
  }
  else {
    _printk("<3> platform_driver_register fail retval = %d \n ",iVar1);
    onewire_gpio_detected = 0;
    _printk("<3> probe failed, exi t!\n");
  }
  return iVar1;
}



/* ---- cleanup_module @ 00101a94 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>onewire gpio exit entry.\n");
  platform_driver_unregister(&onewire_gpio_driver);
  return;
}


/* functions: 14 ok, 0 failed */
