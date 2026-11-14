/* Decompiled with Ghidra from bootinfo.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] pureason
// [.rodata] pdreason
// [.rodata] pmic_wd
// [.rodata] poweroff_reason_details
// [.rodata] hw_reset
// [.rodata] dm_verity_keysclear
// [.rodata] dc_chg
// [.rodata] other
// [.rodata] dm_verity_logging
// [.rodata] cable
// [.rodata] powerup_reason_details
// [.rodata] kpd_and_resin
// [.rodata] 3bootinfo_init: subsystem_register failed

// [.rodata] 3get_powerdown_reason: pd_reason is null, powerdown_reason:%s

// [.rodata] long_power_key
// [.rodata] bootinfo
// [.rodata] dm_verity_enforcing
// [.rodata] 3get_powerup_reason: pu_reason is null, powerup_reason:%s

// [.rodata] 0x%x

// [.rodata] resin
// [.rodata] ps_hold
// [.rodata] fastboot_reboot
// [.rodata] poweroff_reason
// [.rodata] reboot
// [.rodata] usb_chg
// [.rodata] kpanic
// [.rodata] unknown reboot

// [.rodata] keypad
// [.rodata] powerup_reason
// [.modinfo] license=GPL
// [.modinfo] parmtype=pureason:string
// [.modinfo] parmtype=pdreason:string
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=bootinfo
// [.modinfo] depends=
// [.modinfo] scmversion=g9d833a42e53b
// [.gnu.linkonce.this_module] bootinfo
// [__versions] module_layout
// [__versions] param_ops_string
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] sysfs_remove_group
// [__versions] kstrtouint
// [__versions] strlen
// [__versions] snprintf
// [__versions] kobject_del
// [__versions] sysfs_create_group
// [__versions] _printk
// [__versions] kobject_create_and_add
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
// [.shstrtab] .rela.data.attr_group
// [.shstrtab] .modinfo
// [.shstrtab] .rela.rodata.__param_string_pureason
// [.shstrtab] .rela__param
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
// [.strtab] powerup_reason_details_show
// [.strtab] poweroff_reason_details_show
// [.strtab] powerup_reason_show
// [.strtab] poweroff_reason_show
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] kstrtouint
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] powerup_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt
// [.strtab] poweroff_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt
// [.strtab] powerup_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt
// [.strtab] poweroff_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt
// [.strtab] reset_reasons
// [.strtab] powerup_reasons
// [.strtab] powerdown_reasons
// [.strtab] ____versions
// [.strtab] powerup_reason_details_attr
// [.strtab] poweroff_reason_details_attr
// [.strtab] powerup_reason_attr
// [.strtab] poweroff_reason_attr
// [.strtab] is_abnormal_powerup
// [.strtab] attr_group
// [.strtab] sysfs_remove_group
// [.strtab] sysfs_create_group
// [.strtab] __param_str_pureason
// [.strtab] __param_pureason
// [.strtab] __param_string_pureason
// [.strtab] __param_str_pdreason
// [.strtab] __param_pdreason
// [.strtab] __param_string_pdreason
// [.strtab] pu_reason
// [.strtab] powerup_reason
// [.strtab] powerdown_reason
// [.strtab] pd_reason
// [.strtab] strlen
// [.strtab] __cfi_check_fail
// [.strtab] kobject_del
// [.strtab] _printk
// [.strtab] __cfi_check
// [.strtab] bootinfo_kobj
// [.strtab] param_ops_string
// [.strtab] snprintf
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] kobject_create_and_add
// [.strtab] _note_9
// [.strtab] $d.39
// [.strtab] $d.29
// [.strtab] $d.19
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.28
// [.strtab] $d.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.27
// [.strtab] $d.17
// [.strtab] $x.7
// [.strtab] $d.26
// [.strtab] $d.16
// [.strtab] $x.6
// [.strtab] $d.25
// [.strtab] $d.15
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_pdreasontype294
// [.strtab] $d.24
// [.strtab] $d.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] powerup_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3
// [.strtab] poweroff_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3
// [.strtab] powerup_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3
// [.strtab] poweroff_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3
// [.strtab] __UNIQUE_ID_scmversion293
// [.strtab] __UNIQUE_ID_pureasontype293
// [.strtab] $d.33
// [.strtab] $d.23
// [.strtab] $d.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_depends292
// [.strtab] __UNIQUE_ID_license292
// [.strtab] $d.32
// [.strtab] $d.22
// [.strtab] $d.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.31
// [.strtab] $d.21
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.30
// [.strtab] $d.20
// [.strtab] $x.10

/* ---- is_abnormal_powerup @ 001010d0 ---- */

uint is_abnormal_powerup(void)

{
  return pu_reason & 0x30000;
}



/* ---- powerup_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3 @ 001010e8 ---- */

long powerup_reason_show_bf9b48cf73207e6f4b34e63e29aad8e3
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  uint uVar5;
  undefined8 *in_x18;
  char *__s;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (powerup_reason == '\0') {
    _printk("<3>get_powerup_reason: pu_reason is null, powerup_reason:%s\n",&powerup_reason);
  }
  else {
    kstrtouint(&powerup_reason,0x10,0x100000);
  }
  if (powerdown_reason == '\0') {
    _printk("<3>get_powerdown_reason: pd_reason is null, powerdown_reason:%s\n",&powerdown_reason);
  }
  else {
    kstrtouint(&powerdown_reason,0x10,&pd_reason);
  }
  if ((pu_reason & 1) == 0) {
    if ((pu_reason >> 8 & 1) == 0) goto LAB_001011ac;
LAB_00101174:
    uVar5 = (pu_reason >> 0x10 & 0xaaaa) >> 1 | (pu_reason >> 0x10 & 0x5555) << 1;
    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
    uVar1 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
    uVar5 = 0x20;
    if (0xffff < pu_reason) {
      uVar5 = (uint)LZCOUNT((uVar1 >> 8 | (uVar1 & 0xff00ff) << 8) << 0x10);
    }
    if (7 < uVar5) goto LAB_001011ac;
    uVar1 = 2;
    if (uVar5 != 7) {
      uVar1 = uVar5;
    }
    __s = (&reset_reasons)[uVar1];
  }
  else {
    if ((pd_reason & 2) != 0 || (pu_reason & 0x100) != 0) goto LAB_00101174;
LAB_001011ac:
    if ((char)pd_reason < '\0') {
      lVar4 = 9;
    }
    else if ((pu_reason & 1) == 0) {
      if ((pu_reason >> 1 & 1) == 0) {
        if ((pu_reason >> 2 & 1) == 0) {
          if ((pu_reason >> 4 & 1) == 0) {
            if ((pu_reason >> 3 & 1) == 0) {
              if ((pu_reason >> 7 & 1) == 0) {
                if ((pu_reason >> 5 & 1) == 0) {
                  iVar2 = snprintf(param_3,0xf,"unknown reboot\n");
                  goto LAB_00101280;
                }
                lVar4 = 5;
              }
              else {
                lVar4 = 7;
              }
            }
            else {
              lVar4 = 3;
            }
          }
          else {
            lVar4 = 4;
          }
        }
        else {
          lVar4 = 2;
        }
      }
      else {
        lVar4 = 1;
      }
    }
    else {
      lVar4 = 0;
    }
    __s = (&powerup_reasons)[lVar4];
  }
  sVar3 = strlen(__s);
  iVar2 = snprintf(param_3,sVar3 + 2,"%s\n",__s);
LAB_00101280:
  return (long)iVar2;
}



/* ---- powerup_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3 @ 00101298 ---- */

long powerup_reason_details_show_bf9b48cf73207e6f4b34e63e29aad8e3
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (powerup_reason == '\0') {
    _printk("<3>get_powerup_reason: pu_reason is null, powerup_reason:%s\n",&powerup_reason);
  }
  else {
    kstrtouint(&powerup_reason,0x10,0x100000);
  }
  iVar1 = snprintf(param_3,0xb,"0x%x\n",pu_reason);
  return (long)iVar1;
}



/* ---- poweroff_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3 @ 00101320 ---- */

long poweroff_reason_show_bf9b48cf73207e6f4b34e63e29aad8e3
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *in_x18;
  char *__s;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (powerdown_reason == '\0') {
    _printk("<3>get_powerdown_reason: pd_reason is null, powerdown_reason:%s\n",&powerdown_reason);
  }
  else {
    kstrtouint(&powerdown_reason,0x10,&pd_reason);
  }
  if ((pd_reason & 1) == 0) {
    if ((pd_reason >> 1 & 1) == 0) {
      if ((pd_reason >> 2 & 1) == 0) {
        if ((pd_reason >> 3 & 1) == 0) {
          if ((pd_reason >> 4 & 1) == 0) {
            if ((pd_reason >> 5 & 1) == 0) {
              if ((pd_reason >> 6 & 1) == 0) {
                if ((pd_reason >> 7 & 1) == 0) {
                  iVar1 = snprintf(param_3,0xf,"unknown reboot\n");
                  goto LAB_0010141c;
                }
                lVar3 = 7;
              }
              else {
                lVar3 = 6;
              }
            }
            else {
              lVar3 = 5;
            }
          }
          else {
            lVar3 = 4;
          }
        }
        else {
          lVar3 = 3;
        }
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = 0;
  }
  __s = (&powerdown_reasons)[lVar3];
  sVar2 = strlen(__s);
  iVar1 = snprintf(param_3,sVar2 + 2,"%s\n",__s);
LAB_0010141c:
  return (long)iVar1;
}



/* ---- poweroff_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3 @ 00101434 ---- */

long poweroff_reason_details_show_bf9b48cf73207e6f4b34e63e29aad8e3
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (powerdown_reason == '\0') {
    _printk("<3>get_powerdown_reason: pd_reason is null, powerdown_reason:%s\n",&powerdown_reason);
  }
  else {
    kstrtouint(&powerdown_reason,0x10,&pd_reason);
  }
  iVar1 = snprintf(param_3,0xb,"0x%x\n",pd_reason);
  return (long)iVar1;
}



/* ---- init_module @ 00101524 ---- */

int init_module(void)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  bootinfo_kobj = kobject_create_and_add("bootinfo",0);
  if (bootinfo_kobj == 0) {
    _printk("<3>bootinfo_init: subsystem_register failed\n");
    iVar1 = -0xc;
  }
  else {
    iVar1 = sysfs_create_group(bootinfo_kobj,&attr_group);
    if (iVar1 != 0) {
      _printk("<3>bootinfo_init: subsystem_register failed\n");
      kobject_del(bootinfo_kobj);
    }
  }
  return iVar1;
}



/* ---- cleanup_module @ 001015ac ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (bootinfo_kobj != 0) {
    sysfs_remove_group(bootinfo_kobj,&attr_group);
    kobject_del(bootinfo_kobj);
  }
  return;
}


/* functions: 7 ok, 0 failed */
