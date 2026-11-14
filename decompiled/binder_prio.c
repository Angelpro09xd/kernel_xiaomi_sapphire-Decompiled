/* Decompiled with Ghidra from binder_prio.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 6binder_prio: module exit!
// [.rodata] com.miui.home
// [.rodata] ndroid.systemui
// [.rodata] 6binder_prio: module init!
// [.rodata] surfaceflinger
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=binder_prio
// [.modinfo] intree=Y
// [.modinfo] staging=Y
// [.modinfo] depends=
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] binder_prio
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] __tracepoint_android_vh_binder_trans
// [__versions] __tracepoint_android_vh_binder_set_priority
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] tracepoint_probe_unregister
// [__versions] sched_setscheduler_nocheck
// [__versions] tracepoint_probe_register
// [__versions] _printk
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .rela.exit.text
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] __versions
// [.shstrtab] .modinfo
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
// [.strtab] __tracepoint_android_vh_binder_set_priority
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] binder_prio_exit.cfi_jt
// [.strtab] binder_prio_init.cfi_jt
// [.strtab] extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt
// [.strtab] extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt
// [.strtab] binder_prio_exit
// [.strtab] binder_prio_init
// [.strtab] ____versions
// [.strtab] __tracepoint_android_vh_binder_trans
// [.strtab] tracepoint_probe_unregister
// [.strtab] tracepoint_probe_register
// [.strtab] extend_surfacefinger_binder_set_priority_handler
// [.strtab] extend_surfacefinger_binder_trans_handler
// [.strtab] strncmp
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] sched_setscheduler_nocheck
// [.strtab] __cfi_check
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] _note_9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.8
// [.strtab] $d.17
// [.strtab] $x.7
// [.strtab] __UNIQUE_ID_license606
// [.strtab] $d.6
// [.strtab] __UNIQUE_ID_scmversion295
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_depends294
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_staging293
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0
// [.strtab] extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.10

/* ---- extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0 @ 001010f0 ---- */

void extend_surfacefinger_binder_set_priority_handler_bc0fcba933797667b9181e6bbd3107d0
               (undefined8 param_1,long param_2,long param_3)

{
  char *__s1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *in_x18;
  uint uVar5;
  undefined8 unaff_x30;
  int local_40 [2];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  lVar4 = *(long *)(*(long *)(param_2 + 0x50) + 0x38);
  uVar5 = (uint)*(byte *)(lVar4 + 0x6a);
  bVar1 = *(byte *)(lVar4 + 0x69);
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) ||
      (lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x198), lVar4 == 0)) ||
     ((((*(byte *)(param_2 + 0x5c) & 1) != 0 || (*(int *)(lVar4 + 0x420) - 3U < 0xfffffffe)) ||
      (*(int *)(lVar4 + 0x5d8) != *(int *)(lVar4 + 0x5dc))))) {
LAB_001011b4:
    uVar3 = bVar1 & 3;
    if (uVar3 - 3 < 0xfffffffe) goto LAB_001011ec;
  }
  else {
    __s1 = (char *)(lVar4 + 0x7a8);
    iVar2 = strncmp(__s1,"com.miui.home",0xd);
    if (iVar2 != 0) {
      iVar2 = strncmp(__s1,"ndroid.systemui",0xf);
      if (iVar2 != 0) {
        iVar2 = strncmp(__s1,"surfaceflinger",0xe);
        if (iVar2 != 0) goto LAB_001011b4;
      }
    }
    uVar5 = 0x62;
    uVar3 = 1;
  }
  if (*(uint *)(param_3 + 0x420) != uVar3) {
    local_40[0] = 99 - uVar5;
    sched_setscheduler_nocheck(param_3,uVar3 | 0x40000000,local_40);
  }
LAB_001011ec:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0 @ 0010122c ---- */

void extend_surfacefinger_binder_trans_handler_bc0fcba933797667b9181e6bbd3107d0
               (undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) &&
       (iVar1 = strncmp((char *)(*(long *)(param_2 + 0x48) + 0x7a8),"surfaceflinger",0xe),
       iVar1 == 0)) && ((param_3 != 0 && (param_4 != 0)))) &&
     ((param_5 != 0 &&
      ((*(long *)(param_4 + 0x40) != 0 && ((*(byte *)(*(long *)(param_4 + 0x40) + 0x5c) & 1) == 0)))
      ))) {
    *(undefined8 *)(param_2 + 0x198) = 0x6200000001;
  }
  return;
}



/* ---- init_module @ 00101324 ---- */

undefined8 init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>binder_prio: module init!");
  tracepoint_probe_register
            (&__tracepoint_android_vh_binder_set_priority,
             extend_surfacefinger_binder_set_priority_handler_bc0fcba933797667b9181e6bbd3107d0_cfi_jt
             ,0);
  tracepoint_probe_register
            (&__tracepoint_android_vh_binder_trans,
             extend_surfacefinger_binder_trans_handler_bc0fcba933797667b9181e6bbd3107d0_cfi_jt,0);
  return 0;
}



/* ---- cleanup_module @ 00101384 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  tracepoint_probe_unregister
            (&__tracepoint_android_vh_binder_set_priority,
             extend_surfacefinger_binder_set_priority_handler_bc0fcba933797667b9181e6bbd3107d0_cfi_jt
             ,0);
  tracepoint_probe_unregister
            (&__tracepoint_android_vh_binder_trans,
             extend_surfacefinger_binder_trans_handler_bc0fcba933797667b9181e6bbd3107d0_cfi_jt,0);
  _printk("<6>binder_prio: module exit!");
  return;
}


/* functions: 4 ok, 0 failed */
