/* Decompiled with Ghidra from millet_hs.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 3millet-millet_hs: %s input invalid

// [.rodata] 3millet-millet_hs: enter millet_hs_init func!

// [.rodata] hs_sendmsg
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.74 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=millet_hs
// [.modinfo] intree=Y
// [.modinfo] depends=millet_core
// [.modinfo] scmversion=g25fb969a38e4
// [.gnu.linkonce.this_module] millet_hs
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] unregister_millet_hook
// [__versions] millet_sendto_user
// [__versions] millet_sendmsg
// [__versions] init_millet_subsystem
// [__versions] register_millet_hook
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
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] hs_init_millet.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] hs_recv_hook.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] hs_sendmsg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
// [.strtab] hs_init_millet
// [.strtab] ____versions
// [.strtab] millet_sendto_user
// [.strtab] init_millet_subsystem
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] hs_recv_hook
// [.strtab] unregister_millet_hook
// [.strtab] __cfi_check
// [.strtab] millet_sendmsg
// [.strtab] hs_sendmsg
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] hs_init_millet.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] hs_recv_hook.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] hs_sendmsg.4e8b0154c58fc8baa75c3124f9a25b1c
// [.strtab] _note_9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.7
// [.strtab] $x.6
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] __UNIQUE_ID_license643
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

/* ---- hs_recv_hook.4e8b0154c58fc8baa75c3124f9a25b1c @ 00101118 ---- */

void hs_recv_hook_4e8b0154c58fc8baa75c3124f9a25b1c(void)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  uVar2 = sp_el0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
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
  millet_sendmsg(6,uVar2,&local_a8);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- hs_sendmsg.4e8b0154c58fc8baa75c3124f9a25b1c @ 00101198 ---- */

undefined8
hs_sendmsg_4e8b0154c58fc8baa75c3124f9a25b1c(undefined8 param_1,undefined4 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    _printk("<3>millet-millet_hs: %s input invalid\n","hs_sendmsg");
    uVar1 = 0xffffffff;
  }
  else {
    param_2[2] = 2;
    *param_2 = 6;
    uVar1 = millet_sendto_user();
  }
  return uVar1;
}



/* ---- hs_init_millet.4e8b0154c58fc8baa75c3124f9a25b1c @ 001011f0 ---- */

void hs_init_millet_4e8b0154c58fc8baa75c3124f9a25b1c(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2dc) = 1;
    *(undefined4 *)(param_1 + 0x348) = 1;
  }
  return;
}



/* ---- init_module @ 00101274 ---- */

undefined8 init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>millet-millet_hs: enter millet_hs_init func!\n");
  register_millet_hook
            (6,hs_recv_hook_4e8b0154c58fc8baa75c3124f9a25b1c_cfi_jt,
             hs_sendmsg_4e8b0154c58fc8baa75c3124f9a25b1c_cfi_jt,
             hs_init_millet_4e8b0154c58fc8baa75c3124f9a25b1c_cfi_jt);
  init_millet_subsystem(6);
  return 0;
}



/* ---- cleanup_module @ 001012cc ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  unregister_millet_hook(6);
  return;
}


/* functions: 5 ok, 0 failed */
