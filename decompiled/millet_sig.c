/* Decompiled with Ghidra from millet_sig.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 3millet_millet-sig: %s input invalid

// [.rodata] signals_sendmsg
// [.rodata] 3millet_millet-sig: enter sig_mod_init func!

// [__ksymtab_strings] millet_sig
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.74 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=millet_sig
// [.modinfo] intree=Y
// [.modinfo] depends=millet_core
// [.modinfo] scmversion=g25fb969a38e4
// [.gnu.linkonce.this_module] millet_sig
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] __tracepoint_android_vh_do_send_sig_info
// [__versions] system_freezing_cnt
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] tracepoint_probe_register
// [__versions] freezing_slow_path
// [__versions] __rcu_read_unlock
// [__versions] __rcu_read_lock
// [__versions] millet_sendto_user
// [__versions] init_millet_subsystem
// [__versions] register_millet_hook
// [__versions] _printk
// [__versions] millet_sendmsg
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] .bss
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .modinfo
// [.shstrtab] __ksymtab_gpl
// [.shstrtab] __kcrctab_gpl
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .rela___ksymtab_gpl+millet_sig
// [.shstrtab] .rela___kcrctab_gpl+millet_sig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] system_freezing_cnt
// [.strtab] millet_sig.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] signas_init_millet.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt
// [.strtab] signals_sendmsg.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt
// [.strtab] signas_init_millet
// [.strtab] ____versions
// [.strtab] tracepoint_probe_register
// [.strtab] millet_sendto_user
// [.strtab] __tracepoint_android_vh_do_send_sig_info
// [.strtab] init_millet_subsystem
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] last_report_task
// [.strtab] register_millet_hook
// [.strtab] __rcu_read_unlock
// [.strtab] __rcu_read_lock
// [.strtab] __cfi_check
// [.strtab] freezing_slow_path
// [.strtab] millet_sendmsg
// [.strtab] signals_sendmsg
// [.strtab] __kstrtabns_millet_sig
// [.strtab] __crc_millet_sig
// [.strtab] __kstrtab_millet_sig
// [.strtab] __ksymtab_millet_sig
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] _note_9
// [.strtab] $d.19
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.27
// [.strtab] $d.7
// [.strtab] $x.16
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] signas_init_millet.cd1a1c9c6c8232e446d1fde873d24f75
// [.strtab] signals_sendmsg.cd1a1c9c6c8232e446d1fde873d24f75
// [.strtab] $d.15
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $x.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $x.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $x.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.21
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] __UNIQUE_ID_license650
// [.strtab] $d.20
// [.strtab] $x.10

/* ---- millet_sig @ 001010f0 ---- */

void millet_sig(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  if ((param_2 < 0x10) && ((1 << (ulong)(param_2 & 0x1f) & 0x8248U) != 0)) {
    local_40 = sp_el0;
    local_38 = param_4;
    millet_sendmsg(1,param_4,&local_a8);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- signals_sendmsg.cd1a1c9c6c8232e446d1fde873d24f75 @ 00101194 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
signals_sendmsg_cd1a1c9c6c8232e446d1fde873d24f75(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 uVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_3 == 0)) {
    _printk("<3>millet_millet-sig: %s input invalid\n","signals_sendmsg");
    return 0xffffffff;
  }
  param_2[0x1e] = *(undefined4 *)(param_1 + 0x5dc);
  __rcu_read_lock();
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x790) + 4);
  __rcu_read_unlock();
  param_2[8] = uVar1;
  param_2[2] = 2;
  *param_2 = 1;
  if (((_system_freezing_cnt == 0) || (uVar2 = freezing_slow_path(param_1), (uVar2 & 1) == 0)) &&
     ((*(uint *)(param_1 + 0x3c) >> 0x10 & 1) == 0)) {
    if ((*(uint *)(param_1 + 0x3c) >> 0x15 & 1) == 0) {
      __rcu_read_lock();
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x978) + 0x48) + 0xe8);
      __rcu_read_unlock();
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_00101234;
    }
    if ((*(ushort *)(param_1 + 0x590) >> 6 & 1) == 0) {
      return 0;
    }
  }
LAB_00101234:
  if (param_2[0x1e] == **(int **)(param_3 + 0xe8)) {
    return 0;
  }
  **(int **)(param_3 + 0xe8) = param_2[0x1e];
  uVar3 = millet_sendto_user(param_1,param_2,param_3);
  return uVar3;
}



/* ---- signas_init_millet.cd1a1c9c6c8232e446d1fde873d24f75 @ 001012b4 ---- */

void signas_init_millet_cd1a1c9c6c8232e446d1fde873d24f75(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x84) = 1;
    *(undefined1 **)(param_1 + 0xe8) = &last_report_task;
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  return;
}



/* ---- init_module @ 00101350 ---- */

undefined8 init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>millet_millet-sig: enter sig_mod_init func!\n");
  register_millet_hook
            (1,0,signals_sendmsg_cd1a1c9c6c8232e446d1fde873d24f75_cfi_jt,
             signas_init_millet_cd1a1c9c6c8232e446d1fde873d24f75_cfi_jt);
  init_millet_subsystem(1);
  tracepoint_probe_register(&__tracepoint_android_vh_do_send_sig_info,millet_sig_cfi_jt,0);
  return 0;
}


/* functions: 4 ok, 0 failed */
