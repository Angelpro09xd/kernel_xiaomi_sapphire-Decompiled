/* Decompiled with Ghidra from millet_oem_cgroup.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 3millet-oem_cgroup: Permission problem

// [.rodata] 3millet-oem_cgroup: enter oem_cgrp_init func!

// [.rodata] /home/work/data/miui_codes/build_home_rom-odm-merged/kernel_platform/msm-kernel/drivers/mihw/millet/oem_cgroup.c
// [.rodata] 'int (struct cgroup_taskset *)'
// [.rodata] 'void (struct cgroup_taskset *)'
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.74 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=millet_oem_cgroup
// [.modinfo] intree=Y
// [.modinfo] depends=
// [.modinfo] scmversion=g25fb969a38e4
// [.gnu.linkonce.this_module] millet_oem_cgroup
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] freezer_cgrp_subsys
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] __cfi_slowpath_diag
// [__versions] cgroup_taskset_next
// [__versions] _printk
// [__versions] capable
// [__versions] cgroup_taskset_first
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
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.shstrtab] .rela.data..Lanon.1f1a742903cffd25c76746409308d593.1
// [.strtab] cgroup_taskset_next
// [.strtab] cgroup_taskset_first
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] millet_can_attach.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] freezer_can_attach.d449473d61b6cabd71b4eea160666d69.cfi_jt
// [.strtab] freezer_cancel_attach.d449473d61b6cabd71b4eea160666d69.cfi_jt
// [.strtab] freezer_cgrp_subsys
// [.strtab] ____versions
// [.strtab] __typeid__ZTSFvP14cgroup_tasksetE_global_addr
// [.strtab] __typeid__ZTSFiP14cgroup_tasksetE_global_addr
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] oem_cgroup_hook
// [.strtab] __cfi_check
// [.strtab] millet_can_attach
// [.strtab] freezer_can_attach
// [.strtab] freezer_cancel_attach
// [.strtab] __cfi_slowpath_diag
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] capable
// [.strtab] _note_9
// [.strtab] freezer_can_attach.d449473d61b6cabd71b4eea160666d69
// [.strtab] freezer_cancel_attach.d449473d61b6cabd71b4eea160666d69
// [.strtab] $x.9
// [.strtab] _note_8
// [.strtab] $d.8
// [.strtab] $d.17
// [.strtab] $x.7
// [.strtab] $d.16
// [.strtab] $x.6
// [.strtab] __UNIQUE_ID_license645
// [.strtab] $d.15
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.23
// [.strtab] $d.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.10

/* ---- millet_can_attach @ 001010c0 ---- */

void millet_can_attach(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar1 = sp_el0;
  lVar5 = *(long *)(lVar1 + 0x798);
  local_40 = 0;
  lVar2 = cgroup_taskset_first(param_1,&local_40);
  do {
    uVar4 = 0;
    if (lVar2 == 0) {
LAB_00101104:
      lVar1 = sp_el0;
      if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
      }
      return;
    }
    if (((lVar2 != lVar1) && (*(int *)(lVar5 + 0x14) != 1000)) &&
       (uVar3 = capable(0x15), (uVar3 & 1) == 0)) {
      _printk("<3>millet-oem_cgroup: Permission problem\n");
      uVar4 = 1;
      goto LAB_00101104;
    }
    lVar2 = cgroup_taskset_next(param_1,&local_40);
  } while( true );
}



/* ---- freezer_can_attach.d449473d61b6cabd71b4eea160666d69 @ 00101188 ---- */

undefined8 freezer_can_attach_d449473d61b6cabd71b4eea160666d69(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pcVar1 = DAT_00100050;
  if (DAT_00100050 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    if (1 < ((ulong)(DAT_00100050 + -0x1010b0) >> 3 | (long)DAT_00100050 << 0x3d)) {
      __cfi_slowpath_diag(0x719af2cb1309317b,DAT_00100050,&DAT_00100100);
    }
    uVar2 = (*pcVar1)(param_1);
  }
  return uVar2;
}



/* ---- freezer_cancel_attach.d449473d61b6cabd71b4eea160666d69 @ 0010120c ---- */

void freezer_cancel_attach_d449473d61b6cabd71b4eea160666d69(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pcVar1 = DAT_00100058;
  if (DAT_00100058 != (code *)0x0) {
    if (DAT_00100058 != freezer_cancel_attach_d449473d61b6cabd71b4eea160666d69_cfi_jt) {
      __cfi_slowpath_diag(0xe3a725149a15a82,DAT_00100058,&DAT_00100120);
    }
    (*pcVar1)(param_1);
  }
  return;
}



/* ---- init_module @ 001012e4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>millet-oem_cgroup: enter oem_cgrp_init func!\n");
  DAT_00100050 = millet_can_attach_cfi_jt;
  _DAT_00102070 = freezer_can_attach_d449473d61b6cabd71b4eea160666d69_cfi_jt;
  _DAT_00102078 = freezer_cancel_attach_d449473d61b6cabd71b4eea160666d69_cfi_jt;
  return 0;
}


/* functions: 4 ok, 0 failed */
