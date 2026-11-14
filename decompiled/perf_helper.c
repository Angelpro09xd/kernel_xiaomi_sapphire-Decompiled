/* Decompiled with Ghidra from perf_helper.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] perflock_records
// [.rodata] %d-%02d-%02d %02d:%02d:%02d UTC { %s }

// [.rodata] reclaim %lu pages
// [.rodata] 3%s: create perflock_records node failed

// [.rodata] 3%s: create mimdlog node failed

// [.rodata] 3create mimd sysfs nodes group failed

// [.rodata] kswapd0
// [.rodata] 3%s: create global_reclaim node failed

// [.rodata] mimdtrigger
// [.rodata] 3%s: create kswapd_pid node failed

// [.rodata] mimdlog
// [.rodata] global_reclaim
// [.rodata] kswapd_pid
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=perf_helper
// [.modinfo] intree=Y
// [.modinfo] depends=
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] perf_helper
// [__versions] module_layout
// [__versions] memset
// [__versions] __stack_chk_fail
// [__versions] init_task
// [__versions] tasklist_lock
// [__versions] gic_nonsecure_priorities
// [__versions] cpu_hwcaps
// [__versions] cpu_hwcap_keys
// [__versions] arm64_const_caps_ready
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] kobject_put
// [__versions] sysfs_remove_group
// [__versions] remove_proc_entry
// [__versions] kstrtoint
// [__versions] _raw_read_unlock
// [__versions] _raw_read_lock
// [__versions] kstrtoull
// [__versions] try_to_free_mem_cgroup_pages
// [__versions] _raw_spin_trylock
// [__versions] snprintf
// [__versions] ktime_get_real_ts64
// [__versions] __arch_copy_from_user
// [__versions] __check_object_size
// [__versions] _raw_spin_unlock
// [__versions] _raw_spin_lock
// [__versions] seq_printf
// [__versions] rtc_time64_to_tm
// [__versions] single_open
// [__versions] single_release
// [__versions] seq_lseek
// [__versions] seq_read
// [__versions] sysfs_create_group
// [__versions] kobject_create_and_add
// [__versions] _printk
// [__versions] proc_create
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .rela.exit.text
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] .bss
// [.shstrtab] .rela.data.mimd_attrs
// [.shstrtab] .rela.rodata.perflock_records_ops
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] .modinfo
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .rela__jump_table
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] remove_proc_entry
// [.strtab] arm64_const_caps_ready
// [.strtab] perflock_records_show
// [.strtab] mimdtrigger_show
// [.strtab] global_reclaim_show
// [.strtab] mimd_show
// [.strtab] kswapd_pid_show
// [.strtab] kobject_put
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] kstrtoint
// [.strtab] seq_lseek.cfi_jt
// [.strtab] single_release.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] seq_read.cfi_jt
// [.strtab] perflock_records_show.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] mimdtrigger_show.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] global_reclaim_show.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] mimd_show.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] kswapd_pid_show.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] perflock_records_open.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] global_reclaim_open.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] mimdlog_open.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] kswapd_pid_open.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] perflock_records_write.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] global_reclaim_write.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] mimdlog_write.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] mimdtrigger_store.1cfc0b7182b84a20d2ff0c8de292c693.cfi_jt
// [.strtab] memset
// [.strtab] cpu_hwcap_keys
// [.strtab] mimd_attrs
// [.strtab] perflock_records_ops
// [.strtab] global_reclaim_ops
// [.strtab] mimdlog_ops
// [.strtab] kswapd_pid_ops
// [.strtab] cpu_hwcaps
// [.strtab] ____versions
// [.strtab] gic_nonsecure_priorities
// [.strtab] try_to_free_mem_cgroup_pages
// [.strtab] mimdtrigger_attr
// [.strtab] __arch_copy_from_user
// [.strtab] mimd_attr_group
// [.strtab] sysfs_remove_group
// [.strtab] sysfs_create_group
// [.strtab] strncmp
// [.strtab] perflock_records_open
// [.strtab] global_reclaim_open
// [.strtab] mimdlog_open
// [.strtab] single_open
// [.strtab] kswapd_pid_open
// [.strtab] plr_num
// [.strtab] ml_num
// [.strtab] rtc_time64_to_tm
// [.strtab] perflock_record.m
// [.strtab] mimd_record.m
// [.strtab] kstrtoull
// [.strtab] index_tail
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] init_task
// [.strtab] seq_lseek
// [.strtab] _raw_spin_trylock
// [.strtab] _raw_spin_unlock
// [.strtab] _raw_read_unlock
// [.strtab] tasklist_lock
// [.strtab] mr_lock
// [.strtab] plr_lock
// [.strtab] _raw_spin_lock
// [.strtab] ml_lock
// [.strtab] _raw_read_lock
// [.strtab] __cfi_check
// [.strtab] mimd_kobj
// [.strtab] snprintf
// [.strtab] seq_printf
// [.strtab] plr_buff
// [.strtab] reclaim_buff
// [.strtab] ml_buff
// [.strtab] __check_object_size
// [.strtab] perflock_records_write
// [.strtab] global_reclaim_write
// [.strtab] mimdlog_write
// [.strtab] proc_create
// [.strtab] single_release
// [.strtab] mimdtrigger_store
// [.strtab] mimdtrigger_type
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] kobject_create_and_add
// [.strtab] seq_read
// [.strtab] index_head
// [.strtab] _note_9
// [.strtab] $d.79
// [.strtab] $d.69
// [.strtab] $d.59
// [.strtab] $x.49
// [.strtab] $x.39
// [.strtab] $d.29
// [.strtab] $d.19
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.78
// [.strtab] $d.68
// [.strtab] $d.58
// [.strtab] __UNIQUE_ID_license448
// [.strtab] $x.48
// [.strtab] $x.38
// [.strtab] $x.28
// [.strtab] $x.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.77
// [.strtab] $d.67
// [.strtab] $d.57
// [.strtab] $d.47
// [.strtab] $x.37
// [.strtab] $d.27
// [.strtab] $d.17
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $d.86
// [.strtab] $d.76
// [.strtab] $d.66
// [.strtab] $d.56
// [.strtab] $x.46
// [.strtab] $x.36
// [.strtab] $x.26
// [.strtab] $x.16
// [.strtab] $x.6
// [.strtab] $d.75
// [.strtab] $d.65
// [.strtab] $x.55
// [.strtab] $d.45
// [.strtab] $d.35
// [.strtab] $d.25
// [.strtab] $d.15
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.74
// [.strtab] ktime_get_real_ts64
// [.strtab] $d.64
// [.strtab] $d.54
// [.strtab] $x.44
// [.strtab] $x.34
// [.strtab] $x.24
// [.strtab] $x.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] perflock_records_show.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] mimdtrigger_show.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] global_reclaim_show.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] mimd_show.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] kswapd_pid_show.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] perflock_records_open.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] global_reclaim_open.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] mimdlog_open.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] kswapd_pid_open.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] perflock_records_write.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] global_reclaim_write.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] mimdlog_write.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] mimdtrigger_store.1cfc0b7182b84a20d2ff0c8de292c693
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.73
// [.strtab] $d.63
// [.strtab] $x.53
// [.strtab] $x.43
// [.strtab] $d.33
// [.strtab] $d.23
// [.strtab] $d.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.72
// [.strtab] $d.62
// [.strtab] $x.52
// [.strtab] $x.42
// [.strtab] $x.32
// [.strtab] $x.22
// [.strtab] $x.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.71
// [.strtab] $d.61
// [.strtab] $x.51
// [.strtab] $x.41
// [.strtab] $d.31
// [.strtab] $d.21
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.80
// [.strtab] $d.70
// [.strtab] $d.60
// [.strtab] $d.50
// [.strtab] $x.40
// [.strtab] $x.30
// [.strtab] $x.20
// [.strtab] $x.10

/* ---- perflock_records_open.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191270 ---- */

void perflock_records_open_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  single_open(param_2,perflock_records_show_1cfc0b7182b84a20d2ff0c8de292c693_cfi_jt,0);
  return;
}



/* ---- perflock_records_write.1cfc0b7182b84a20d2ff0c8de292c693 @ 001912a4 ---- */

ulong perflock_records_write_1cfc0b7182b84a20d2ff0c8de292c693
                (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_38 = *(long *)(lVar5 + 0x5e0);
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
  local_b8 = 0;
  uStack_b0 = 0;
  if (param_3 < 0x81) {
    __check_object_size(&local_b8,param_3,0);
    lVar5 = _copy_from_user(&local_b8,param_2,param_3);
    if (lVar5 == 0) {
      iVar4 = _raw_spin_trylock(&plr_lock);
      if (iVar4 != 0) {
        index_tail = perflock_record_m;
        if (perflock_record_m < 0x800) {
          ktime_get_real_ts64(&DAT_00100170 + (ulong)perflock_record_m * 0x12);
          uVar6 = (ulong)perflock_record_m;
          uVar2 = perflock_record_m + 1;
          bVar1 = perflock_record_m < 0x800;
          perflock_record_m = uVar2;
          if (bVar1) {
            snprintf(&plr_buff + uVar6 * 0x90,0x80,"%s",&local_b8);
            if (0x7ff < (int)perflock_record_m) {
              perflock_record_m = 0;
            }
            plr_num = plr_num + 1;
            if (0x7ff < plr_num) {
              plr_num = 0x800;
              index_head = 0;
              if (index_tail + 1 < 0x800) {
                index_head = index_tail + 1;
              }
            }
            _raw_spin_unlock(&plr_lock);
            goto LAB_001913f4;
          }
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x191430);
        (*pcVar3)();
      }
    }
    else {
      param_3 = 0xfffffffffffffff2;
    }
  }
  else {
    param_3 = 0xffffffffffffffea;
  }
LAB_001913f4:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* ---- perflock_records_show.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191430 ---- */

undefined8 perflock_records_show_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *in_x18;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 unaff_x30;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x5e0);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  _raw_spin_lock(&plr_lock);
  if (plr_num < 0x800) {
    if (plr_num != 0) {
      uVar4 = 0;
      puVar5 = &plr_buff;
      do {
        if (uVar4 == 0x800) {
LAB_0019164c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x191650);
          (*pcVar2)();
        }
        rtc_time64_to_tm(*(undefined8 *)(puVar5 + 0x80),&local_90);
        seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",local_80._4_4_ + 0x76c,
                   (int)local_80 + 1,local_88._4_4_,local_88 & 0xffffffff,local_90._4_4_,
                   local_90 & 0xffffffff,puVar5);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x90;
      } while (uVar4 < plr_num);
    }
  }
  else {
    uVar4 = (ulong)index_head;
    if ((int)index_head < 0x800) {
      uVar6 = uVar4 * 0x90 + 0x80;
      uVar3 = index_head;
      if (index_head < 0x801) {
        uVar3 = 0x800;
      }
      do {
        if (uVar3 == uVar4) goto LAB_0019164c;
        if (0x47fff < uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x191654);
          (*pcVar2)();
        }
        rtc_time64_to_tm(*(undefined8 *)(&plr_buff + uVar6),&local_90);
        seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",local_80._4_4_ + 0x76c,
                   (int)local_80 + 1,local_88._4_4_,local_88 & 0xffffffff,local_90._4_4_,
                   local_90 & 0xffffffff,&UNK_00100070 + uVar6);
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 + 0x90;
      } while (uVar4 != 0x800);
    }
    if (index_tail < index_head) {
      uVar4 = 0xffffffffffffffff;
      puVar5 = &plr_buff;
      do {
        if (uVar4 == 0x7ff) goto LAB_0019164c;
        rtc_time64_to_tm(*(undefined8 *)(puVar5 + 0x80),&local_90);
        seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",local_80._4_4_ + 0x76c,
                   (int)local_80 + 1,local_88._4_4_,local_88 & 0xffffffff,local_90._4_4_,
                   local_90 & 0xffffffff,puVar5);
        puVar5 = puVar5 + 0x90;
        uVar4 = uVar4 + 1;
      } while (uVar4 < index_tail);
    }
  }
  _raw_spin_unlock(&plr_lock);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- _copy_from_user @ 00191658 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t _copy_from_user(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  ulong __n;
  ulong uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar2 = (undefined8 *)sp_el0;
  uVar3 = (long)(param_2 << 8) >> 8;
  if (((*(byte *)((long)puVar2 + 0x3e) >> 5 & 1) != 0) ||
     (uVar5 = param_2, ((uint)*puVar2 >> 0x1a & 1) != 0)) {
    uVar5 = param_2 & uVar3;
  }
  bVar4 = CARRY8(uVar5,param_3);
  uVar5 = uVar5 + param_3;
  uVar1 = 0;
  if (!bVar4 || uVar5 == 0) {
    uVar1 = 0x7fffffffff;
  }
  if (bVar4) {
    uVar5 = 0xffffffffffffffff;
  }
  __n = param_3;
  if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,(ulong)bVar4) || uVar5 == uVar1 + !bVar4) {
    if (((uint)_cpu_hwcaps >> 0x18 & 1) == 0) {
      uVar5 = daif;
      if ((uVar5 & 0x80) == 0) {
        uVar1 = daif;
        daif = uVar1 | 0xc0;
      }
      uVar1 = ttbr1_el1;
      ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
      InstructionSynchronizationBarrier();
      ttbr0_el1 = puVar2[1];
      InstructionSynchronizationBarrier();
      daif = uVar5;
    }
    if ((param_2 & uVar3 & 0xffffff8000000000) != 0) {
      param_2 = 0;
    }
    __n = __arch_copy_from_user(param_1,param_2,param_3);
    if (((uint)_cpu_hwcaps >> 0x18 & 1) == 0) {
      uVar3 = daif;
      if ((uVar3 & 0x80) == 0) {
        uVar5 = daif;
        daif = uVar5 | 0xc0;
      }
      uVar5 = ttbr1_el1;
      ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
      InstructionSynchronizationBarrier();
      ttbr1_el1 = uVar5 & 0xffffffffffff;
      InstructionSynchronizationBarrier();
      daif = uVar3;
    }
  }
  if (__n != 0) {
    memset((void *)(param_1 + (param_3 - __n)),0,__n);
  }
  return __n;
}



/* ---- mimdlog_open.1cfc0b7182b84a20d2ff0c8de292c693 @ 0019180c ---- */

void mimdlog_open_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  single_open(param_2,mimd_show_1cfc0b7182b84a20d2ff0c8de292c693_cfi_jt,0);
  return;
}



/* ---- mimdlog_write.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191840 ---- */

ulong mimdlog_write_1cfc0b7182b84a20d2ff0c8de292c693
                (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_38 = *(long *)(lVar5 + 0x5e0);
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
  local_b8 = 0;
  uStack_b0 = 0;
  if (param_3 < 0x81) {
    __check_object_size(&local_b8,param_3,0);
    lVar5 = _copy_from_user(&local_b8,param_2,param_3);
    if (lVar5 == 0) {
      iVar4 = _raw_spin_trylock(&ml_lock);
      if (iVar4 != 0) {
        if (mimd_record_m < 0x800) {
          ktime_get_real_ts64(&DAT_00148170 + (ulong)mimd_record_m * 0x12);
          uVar6 = (ulong)mimd_record_m;
          uVar2 = mimd_record_m + 1;
          bVar1 = mimd_record_m < 0x800;
          mimd_record_m = uVar2;
          if (bVar1) {
            snprintf(&ml_buff + uVar6 * 0x90,0x80,"%s",&local_b8);
            if (0x7ff < (int)mimd_record_m) {
              mimd_record_m = 0;
            }
            iVar4 = 0x800;
            if (ml_num + 1U < 0x800) {
              iVar4 = ml_num + 1;
            }
            ml_num = iVar4;
            _raw_spin_unlock(&ml_lock);
            goto LAB_0019196c;
          }
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x1919a8);
        (*pcVar3)();
      }
    }
    else {
      param_3 = 0xfffffffffffffff2;
    }
  }
  else {
    param_3 = 0xffffffffffffffea;
  }
LAB_0019196c:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* ---- mimd_show.1cfc0b7182b84a20d2ff0c8de292c693 @ 001919a8 ---- */

undefined8 mimd_show_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *in_x18;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 unaff_x30;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x5e0);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  _raw_spin_lock(&ml_lock);
  if (ml_num < 0x800) {
    if (ml_num != 0) {
      uVar4 = 0;
      puVar5 = &ml_buff;
      do {
        if (uVar4 == 0x800) {
LAB_00191bc4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x191bc8);
          (*pcVar2)();
        }
        rtc_time64_to_tm(*(undefined8 *)(puVar5 + 0x80),&local_90);
        seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",local_80._4_4_ + 0x76c,
                   (int)local_80 + 1,local_88._4_4_,local_88 & 0xffffffff,local_90._4_4_,
                   local_90 & 0xffffffff,puVar5);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x90;
      } while (uVar4 < ml_num);
    }
  }
  else {
    uVar4 = (ulong)index_head;
    if ((int)index_head < 0x800) {
      uVar6 = uVar4 * 0x90 + 0x80;
      uVar3 = index_head;
      if (index_head < 0x801) {
        uVar3 = 0x800;
      }
      do {
        if (uVar3 == uVar4) goto LAB_00191bc4;
        if (0x47fff < uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x191bcc);
          (*pcVar2)();
        }
        rtc_time64_to_tm(*(undefined8 *)(&ml_buff + uVar6),&local_90);
        seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",local_80._4_4_ + 0x76c,
                   (int)local_80 + 1,local_88._4_4_,local_88 & 0xffffffff,local_90._4_4_,
                   local_90 & 0xffffffff,uVar6 + 0x148070);
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 + 0x90;
      } while (uVar4 != 0x800);
    }
    if (index_tail < index_head) {
      uVar4 = 0xffffffffffffffff;
      puVar5 = &ml_buff;
      do {
        if (uVar4 == 0x7ff) goto LAB_00191bc4;
        rtc_time64_to_tm(*(undefined8 *)(puVar5 + 0x80),&local_90);
        seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",local_80._4_4_ + 0x76c,
                   (int)local_80 + 1,local_88._4_4_,local_88 & 0xffffffff,local_90._4_4_,
                   local_90 & 0xffffffff,puVar5);
        puVar5 = puVar5 + 0x90;
        uVar4 = uVar4 + 1;
      } while (uVar4 < index_tail);
    }
  }
  _raw_spin_unlock(&ml_lock);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- global_reclaim_open.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191bd0 ---- */

void global_reclaim_open_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  single_open(param_2,global_reclaim_show_1cfc0b7182b84a20d2ff0c8de292c693_cfi_jt,0);
  return;
}



/* ---- global_reclaim_write.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191c04 ---- */

ulong global_reclaim_write_1cfc0b7182b84a20d2ff0c8de292c693
                (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong param3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  long local_70 [10];
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_70[9] = *(long *)(lVar2 + 0x5e0);
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[0] = 0;
  if (param_3 < 0x41) {
    __check_object_size(local_70 + 1,param_3,0);
    lVar2 = _copy_from_user(local_70 + 1,param_2,param_3);
    if (lVar2 == 0) {
      iVar1 = kstrtoull(local_70 + 1,10,local_70);
      if (iVar1 == 0) {
        if (local_70[0] == 0) {
          param_3 = 0;
        }
        else {
          param3 = try_to_free_mem_cgroup_pages(0,local_70[0],0xcc0,1);
          iVar1 = _raw_spin_trylock(&mr_lock);
          if (iVar1 != 0) {
            snprintf(&reclaim_buff,0x40,"reclaim %lu pages",param3);
            _raw_spin_unlock(&mr_lock);
          }
        }
      }
      else {
        param_3 = (ulong)iVar1;
      }
    }
    else {
      param_3 = 0xfffffffffffffff2;
    }
  }
  else {
    param_3 = 0xffffffffffffffea;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_70[9]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* ---- global_reclaim_show.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191d2c ---- */

undefined8 global_reclaim_show_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _raw_spin_lock(&ml_lock);
  seq_printf(param_1,&DAT_001901d9,&reclaim_buff);
  _raw_spin_unlock(&ml_lock);
  return 0;
}



/* ---- kswapd_pid_open.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191d8c ---- */

void kswapd_pid_open_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  single_open(param_2,kswapd_pid_show_1cfc0b7182b84a20d2ff0c8de292c693_cfi_jt,0);
  return;
}



/* ---- kswapd_pid_show.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191dc0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 kswapd_pid_show_1cfc0b7182b84a20d2ff0c8de292c693(undefined8 param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _raw_read_lock(&tasklist_lock);
  puVar3 = _DAT_001935d0;
  if (_DAT_001935d0 != (undefined8 *)&DAT_001935d0) {
    do {
      if ((puVar3[10] == 0) && (iVar1 = strncmp((char *)(puVar3 + 0x5b),"kswapd0",7), iVar1 == 0)) {
        uVar2 = *(undefined4 *)(puVar3 + 0x21);
        goto LAB_00191e48;
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)&DAT_001935d0);
  }
  uVar2 = 0;
LAB_00191e48:
  _raw_read_unlock(&tasklist_lock);
  seq_printf(param_1,&DAT_001901ae,uVar2);
  return 0;
}



/* ---- mimdtrigger_show.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191e8c ---- */

long mimdtrigger_show_1cfc0b7182b84a20d2ff0c8de292c693
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)mimdtrigger_type);
  return (long)iVar1;
}



/* ---- mimdtrigger_store.1cfc0b7182b84a20d2ff0c8de292c693 @ 00191ed4 ---- */

long mimdtrigger_store_1cfc0b7182b84a20d2ff0c8de292c693
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c = 0;
  iVar2 = kstrtoint(param_3,10,&local_2c);
  if (iVar2 == 0) {
    mimdtrigger_type = local_2c;
  }
  else {
    param_4 = (long)iVar2;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- init_module @ 00191fc4 ---- */

undefined8 init_module(void)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = proc_create("perflock_records",0x1b4,0,&perflock_records_ops);
  if (lVar2 == 0) {
    _printk("<3>%s: create perflock_records node failed\n");
  }
  lVar2 = proc_create("mimdlog",0x1b4,0,&mimdlog_ops);
  if (lVar2 == 0) {
    _printk("<3>%s: create mimdlog node failed\n");
  }
  lVar2 = proc_create("global_reclaim",0x1b4,0,&global_reclaim_ops);
  if (lVar2 == 0) {
    _printk("<3>%s: create global_reclaim node failed\n");
  }
  lVar2 = proc_create("kswapd_pid",0x1b4,0,&kswapd_pid_ops);
  if (lVar2 == 0) {
    _printk("<3>%s: create kswapd_pid node failed\n");
  }
  mimd_kobj = kobject_create_and_add("mimd",&DAT_00192290);
  if ((mimd_kobj != 0) && (iVar1 = sysfs_create_group(mimd_kobj,&mimd_attr_group), iVar1 != 0)) {
    _printk("<3>create mimd sysfs nodes group failed\n");
  }
  return 0;
}



/* ---- cleanup_module @ 001920e8 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  remove_proc_entry("perflock_records",0);
  remove_proc_entry("mimdlog",0);
  remove_proc_entry("global_reclaim",0);
  remove_proc_entry("kswapd_pid",0);
  if (mimd_kobj == 0) {
    sysfs_remove_group(0,&mimd_attr_group);
    kobject_put(mimd_kobj);
  }
  return;
}


/* functions: 16 ok, 0 failed */
