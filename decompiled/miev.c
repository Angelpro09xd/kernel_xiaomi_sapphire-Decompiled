/* Decompiled with Ghidra from miev.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 3miev: add_str:new para over size, %p can not add %s
// [.rodata] 3miev: write_buf_in:kfifo_in write inner buf failed, reset fifo
// [.rodata] 3miev: write_buf_in:kfifo_out failed, reset fifo
// [.rodata] 3miev: device create failed!
// [.rodata] 3miev: released wk=%p msg=%p addr=%p invalid, not in [%p,%p]
// [.rodata] 3miev: class create failed!
// [.rodata] 3miev: copy miev_buffer from user failed
// [.rodata] 3miev: add_int:new para over size, %u can not add %s
// [.rodata] 3miev: buf over size
// [.rodata] 3miev: already init
// [.rodata] ,"%s":%ld
// [.rodata] 3miev: Fail to register_chrdev_region
// [.rodata] 3miev: kfifo_out failed
// [.rodata] 3miev: miev_alloc:add json head failed
// [.rodata] 3miev: try max cnt, not find enough space
// [.rodata] 3miev: Fail to add miev_dev
// [.rodata] &miev_dev->wait_queue
// [.rodata] "%s":"%s"
// [.rodata] 3miev: write_buf_in:try max cnt, not find enough space
// [.rodata] 3miev: write buf failed,reset fifo
// [.rodata] 3miev: event_write:event is null %d
// [.rodata] 3miev: event_write:%p para cnt %d, used %d
// [.rodata] 3miev: miev_get_work:invalid, wk=%p msg=%p
// [.rodata] ,"%s":"%s"
// [.rodata] 3miev: release kbuf input invalid
// [.rodata] 3miev: miev_alloc:mievent create error
// [.rodata] 3miev: miev_get_work:miev not init
// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/include/linux/poll.h
// [.rodata] "%s":%ld
// [.rodata] miev_workqueue
// [.rodata] 3miev: add_str:%p add %s failed
// [.rodata] 3miev: write_buf:kbuf input invalid
// [.rodata] 3miev: write_buf:wk=%p msg=%p addr=%p invalid, not in [%p,%p]
// [.rodata] EventId %d -t %lld -paraList {
// [.rodata] 3miev: add_int:para over size, %p can not add %s
// [.rodata] 3miev: Fail to create miev_device
// [.rodata] 3miev: event_write:add json end str failed %p
// [.rodata] 3miev: kfifo_alloc create failed
// [.rodata] 3miev: add_int:%u add %s failed, len %d
// [.rodata] 3miev: add_str:para over size, %p can not add %s
// [.rodata] &miev_dev->lock
// [.rodata] 3miev: create workqueue failed
// [.rodata] 3miev: copy_to_user failed
// [.rodata] 'void (struct file *, struct wait_queue_head *, struct poll_table_struct *)'
// [.modinfo] author=huangqibo <huangqibo@xiaomi.com>
// [.modinfo] description=exception log transfer.
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=miev
// [.modinfo] intree=Y
// [.modinfo] staging=Y
// [.modinfo] depends=
// [.modinfo] scmversion=gaf44d52a5e5f
// [__ksymtab_strings] cdev_tevent_write
// [__ksymtab_strings] cdev_tevent_alloc
// [__ksymtab_strings] cdev_tevent_add_str
// [__ksymtab_strings] cdev_tevent_destroy
// [__ksymtab_strings] cdev_tevent_add_int
// [__versions] module_layout
// [__versions] memset
// [__versions] __stack_chk_fail
// [__versions] strlen
// [__versions] snprintf
// [__versions] ktime_get_real_seconds
// [__versions] gic_nonsecure_priorities
// [__versions] cpu_hwcaps
// [__versions] cpu_hwcap_keys
// [__versions] arm64_const_caps_ready
// [__versions] kmalloc_caches
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] flush_workqueue
// [__versions] module_put
// [__versions] try_module_get
// [__versions] __cfi_slowpath_diag
// [__versions] __arch_copy_from_user
// [__versions] __check_object_size
// [__versions] __kfifo_to_user
// [__versions] kmem_cache_alloc_trace
// [__versions] unregister_chrdev_region
// [__versions] cdev_del
// [__versions] __kfifo_free
// [__versions] class_destroy
// [__versions] device_destroy
// [__versions] destroy_workqueue
// [__versions] alloc_workqueue
// [__versions] __init_waitqueue_head
// [__versions] __mutex_init
// [__versions] device_create
// [__versions] __class_create
// [__versions] __kfifo_alloc
// [__versions] cdev_add
// [__versions] cdev_init
// [__versions] alloc_chrdev_region
// [__versions] register_chrdev_region
// [__versions] queue_work_on
// [__versions] _raw_spin_unlock_irqrestore
// [__versions] _raw_spin_lock_irqsave
// [__versions] __wake_up
// [__versions] __kfifo_in
// [__versions] mutex_unlock
// [__versions] _printk
// [__versions] __kfifo_out
// [__versions] mutex_lock
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .rela.exit.text
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] .bss
// [.shstrtab] .rela.data.miev_fops
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .modinfo
// [.shstrtab] __ksymtab_gpl
// [.shstrtab] __kcrctab_gpl
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .rela__jump_table
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .rela___ksymtab_gpl+cdev_tevent_alloc
// [.shstrtab] .rela___kcrctab_gpl+cdev_tevent_alloc
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] __kstrtabns_cdev_tevent_destroy
// [.strtab] __crc_cdev_tevent_destroy
// [.strtab] __kstrtab_cdev_tevent_destroy
// [.strtab] __ksymtab_cdev_tevent_destroy
// [.strtab] class_destroy
// [.strtab] device_destroy
// [.strtab] miev_init_module.__key
// [.strtab] arm64_const_caps_ready
// [.strtab] nwork_index
// [.strtab] miev_dev
// [.strtab] module_put
// [.strtab] __kfifo_out
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] __kstrtabns_cdev_tevent_add_int
// [.strtab] __crc_cdev_tevent_add_int
// [.strtab] __kstrtab_cdev_tevent_add_int
// [.strtab] __ksymtab_cdev_tevent_add_int
// [.strtab] cdev_tevent_destroy.cfi_jt
// [.strtab] cdev_tevent_add_int.cfi_jt
// [.strtab] cdev_tevent_add_str.cfi_jt
// [.strtab] cdev_tevent_write.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] cdev_tevent_alloc.cfi_jt
// [.strtab] miev_open.f115832af8ad5745b85f1e178cf65304.cfi_jt
// [.strtab] miev_ioctl.f115832af8ad5745b85f1e178cf65304.cfi_jt
// [.strtab] miev_poll.f115832af8ad5745b85f1e178cf65304.cfi_jt
// [.strtab] do_miev_work.f115832af8ad5745b85f1e178cf65304.cfi_jt
// [.strtab] miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt
// [.strtab] miev_release.f115832af8ad5745b85f1e178cf65304.cfi_jt
// [.strtab] miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt
// [.strtab] __mutex_init
// [.strtab] cdev_init
// [.strtab] memset
// [.strtab] try_module_get
// [.strtab] cpu_hwcap_keys
// [.strtab] miev_fops
// [.strtab] cpu_hwcaps
// [.strtab] ____versions
// [.strtab] miev_works
// [.strtab] gic_nonsecure_priorities
// [.strtab] kmalloc_caches
// [.strtab] ktime_get_real_seconds
// [.strtab] __kstrtabns_cdev_tevent_add_str
// [.strtab] __crc_cdev_tevent_add_str
// [.strtab] __kstrtab_cdev_tevent_add_str
// [.strtab] __ksymtab_cdev_tevent_add_str
// [.strtab] __kfifo_to_user
// [.strtab] __arch_copy_from_user
// [.strtab] write_buf_inner
// [.strtab] __wake_up
// [.strtab] msleep
// [.strtab] unregister_chrdev_region
// [.strtab] alloc_chrdev_region
// [.strtab] queue_work_on
// [.strtab] __kfifo_in
// [.strtab] miev_open
// [.strtab] strlen
// [.strtab] miev_ioctl
// [.strtab] miev_poll
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] cdev_del
// [.strtab] _printk
// [.strtab] do_miev_work
// [.strtab] check_work
// [.strtab] mutex_unlock
// [.strtab] miev_spinlock
// [.strtab] mutex_lock
// [.strtab] __cfi_check
// [.strtab] miev_get_work_msg
// [.strtab] miev_release_work_msg
// [.strtab] __cfi_slowpath_diag
// [.strtab] write_kbuf
// [.strtab] snprintf
// [.strtab] __check_object_size
// [.strtab] get_integer_size
// [.strtab] _raw_spin_lock_irqsave
// [.strtab] destroy_workqueue
// [.strtab] miev_workqueue
// [.strtab] flush_workqueue
// [.strtab] alloc_workqueue
// [.strtab] miev_write
// [.strtab] __kstrtabns_cdev_tevent_write
// [.strtab] __crc_cdev_tevent_write
// [.strtab] __kstrtab_cdev_tevent_write
// [.strtab] __ksymtab_cdev_tevent_write
// [.strtab] __class_create
// [.strtab] device_create
// [.strtab] miev_release
// [.strtab] _raw_spin_unlock_irqrestore
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] kfree
// [.strtab] __kfifo_free
// [.strtab] kmem_cache_alloc_trace
// [.strtab] bInited
// [.strtab] cdev_add
// [.strtab] miev_read
// [.strtab] __init_waitqueue_head
// [.strtab] __kstrtabns_cdev_tevent_alloc
// [.strtab] __crc_cdev_tevent_alloc
// [.strtab] __kstrtab_cdev_tevent_alloc
// [.strtab] __ksymtab_cdev_tevent_alloc
// [.strtab] __kfifo_alloc
// [.strtab] _note_9
// [.strtab] $d.59
// [.strtab] __UNIQUE_ID_author349
// [.strtab] $x.49
// [.strtab] $x.39
// [.strtab] $x.29
// [.strtab] $x.19
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.58
// [.strtab] $d.48
// [.strtab] $d.38
// [.strtab] $d.28
// [.strtab] miev_init_module.__key.18
// [.strtab] $x.18
// [.strtab] $d.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.67
// [.strtab] $d.57
// [.strtab] $x.47
// [.strtab] $x.37
// [.strtab] $x.27
// [.strtab] $x.17
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $d.66
// [.strtab] $d.56
// [.strtab] $d.46
// [.strtab] $d.36
// [.strtab] $d.26
// [.strtab] $x.16
// [.strtab] $d.16
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] __UNIQUE_ID_scmversion295
// [.strtab] $d.65
// [.strtab] $d.55
// [.strtab] $x.45
// [.strtab] $x.35
// [.strtab] $x.25
// [.strtab] $d.25
// [.strtab] $x.15
// [.strtab] $d.15
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_depends294
// [.strtab] $d.64
// [.strtab] $x.54
// [.strtab] $d.44
// [.strtab] $d.34
// [.strtab] $d.24
// [.strtab] $x.14
// [.strtab] miev_open.f115832af8ad5745b85f1e178cf65304
// [.strtab] miev_ioctl.f115832af8ad5745b85f1e178cf65304
// [.strtab] miev_poll.f115832af8ad5745b85f1e178cf65304
// [.strtab] do_miev_work.f115832af8ad5745b85f1e178cf65304
// [.strtab] miev_write.f115832af8ad5745b85f1e178cf65304
// [.strtab] miev_release.f115832af8ad5745b85f1e178cf65304
// [.strtab] miev_read.f115832af8ad5745b85f1e178cf65304
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_staging293
// [.strtab] $d.73
// [.strtab] $d.63
// [.strtab] $d.53
// [.strtab] $x.43
// [.strtab] $x.33
// [.strtab] $x.23
// [.strtab] $x.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.62
// [.strtab] $x.52
// [.strtab] $d.42
// [.strtab] $d.32
// [.strtab] $d.22
// [.strtab] $x.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.61
// [.strtab] __UNIQUE_ID_license351
// [.strtab] $x.51
// [.strtab] $x.41
// [.strtab] $x.31
// [.strtab] $x.21
// [.strtab] $x.11
// [.strtab] $d.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.60
// [.strtab] __UNIQUE_ID_description350
// [.strtab] $d.50
// [.strtab] $d.40
// [.strtab] $d.30
// [.strtab] miev_init_module.__key.20
// [.strtab] $x.20
// [.strtab] $x.10
// [.strtab] $d.10

/* ---- write_buf_inner @ 001012d8 ---- */

int write_buf_inner(undefined8 param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_50;
  int local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  local_50 = 0;
  mutex_lock(miev_dev + 0xb0);
  if (0xfff < param_2) {
    param_2 = 0x1000;
  }
  iVar4 = -0x801;
  local_4c = param_2;
  do {
    if ((ulong)(long)(param_2 + 4) <=
        (ulong)((*(int *)(miev_dev + 0xa0) - *(int *)(miev_dev + 0x98)) + *(int *)(miev_dev + 0x9c)
               + 1)) {
      iVar4 = __kfifo_in(miev_dev + 0x98,&local_4c,4);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = __kfifo_in(miev_dev + 0x98,param_1,local_4c);
        if (iVar4 == 0) {
          _printk("<3>miev: write_buf_in:kfifo_in write inner buf failed, reset fifo");
          *(undefined8 *)(miev_dev + 0x98) = 0;
        }
      }
      mutex_unlock(miev_dev + 0xb0);
      __wake_up(miev_dev + 0xe0,1,1,0);
      goto LAB_0010142c;
    }
    iVar3 = __kfifo_out(miev_dev + 0x98,&local_50,4);
    if ((iVar3 != 0) &&
       ((local_50 - 0x1001U < 0xfffff000 ||
        (iVar3 = __kfifo_out(miev_dev + 0x98,miev_dev + 0xf8), iVar3 == 0)))) {
      _printk("<3>miev: write_buf_in:kfifo_out failed, reset fifo");
      *(undefined8 *)(miev_dev + 0x98) = 0;
    }
    bVar2 = iVar4 != -1;
    iVar4 = iVar4 + 1;
  } while (bVar2);
  _printk("<3>miev: write_buf_in:try max cnt, not find enough space");
  mutex_unlock(miev_dev + 0xb0);
  iVar4 = 0;
LAB_0010142c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- miev_get_work_msg @ 00101488 ---- */

char * miev_get_work_msg(void)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *__s;
  undefined8 *in_x18;
  char *pcVar4;
  ulong uVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((bInited & 1) == 0) {
    _printk("<3>miev: miev_get_work:miev not init");
    return (char *)0x0;
  }
  uVar3 = _raw_spin_lock_irqsave(&miev_spinlock);
  if (nwork_index == 10) goto LAB_001016f0;
  uVar5 = (ulong)nwork_index * 0x48;
  pcVar4 = &miev_works + uVar5;
  if (*pcVar4 == '\0') {
    if (0x2d0 < (uVar5 | 1)) goto LAB_001016f0;
    if ((&DAT_00100159)[(ulong)nwork_index * 0x48] != '\0') goto LAB_00101500;
    uVar1 = 0;
    if (nwork_index < 9) {
      uVar1 = nwork_index + 1;
    }
    *pcVar4 = '\x01';
    nwork_index = uVar1;
    _raw_spin_unlock_irqrestore(&miev_spinlock,uVar3);
    if (pcVar4 == (char *)0x0) goto LAB_001016d4;
  }
  else {
LAB_00101500:
    if (miev_works == '\0' && DAT_00100159 == '\0') {
      uVar5 = 0;
      pcVar4 = &miev_works;
    }
    else {
      pcVar4 = &DAT_001001a0;
      if (DAT_001001a0 == '\0' && DAT_001001a1 == '\0') {
        uVar5 = 0x48;
      }
      else {
        pcVar4 = &DAT_001001e8;
        if (DAT_001001e8 == '\0' && DAT_001001e9 == '\0') {
          uVar5 = 0x90;
        }
        else {
          pcVar4 = &DAT_00100230;
          if (DAT_00100230 == '\0' && DAT_00100231 == '\0') {
            uVar5 = 0xd8;
          }
          else {
            pcVar4 = &DAT_00100278;
            if (DAT_00100278 == '\0' && DAT_00100279 == '\0') {
              uVar5 = 0x120;
            }
            else {
              pcVar4 = &DAT_001002c0;
              if (DAT_001002c0 == '\0' && DAT_001002c1 == '\0') {
                uVar5 = 0x168;
              }
              else {
                pcVar4 = &DAT_00100308;
                if (DAT_00100308 == '\0' && DAT_00100309 == '\0') {
                  uVar5 = 0x1b0;
                }
                else {
                  pcVar4 = &DAT_00100350;
                  if (DAT_00100350 == '\0' && DAT_00100351 == '\0') {
                    uVar5 = 0x1f8;
                  }
                  else {
                    pcVar4 = &DAT_00100398;
                    if (DAT_00100398 == '\0' && DAT_00100399 == '\0') {
                      uVar5 = 0x240;
                    }
                    else {
                      pcVar4 = &DAT_001003e0;
                      if (DAT_001003e0 != '\0' || DAT_001003e1 != '\0') {
                        _raw_spin_unlock_irqrestore(&miev_spinlock,uVar3);
                        pcVar4 = (char *)0x0;
                        goto LAB_001016d4;
                      }
                      uVar5 = 0x288;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *pcVar4 = '\x01';
    _raw_spin_unlock_irqrestore(&miev_spinlock,uVar3);
  }
  if (uVar5 - 0x2b9 < 0xfffffffffffffd37) {
LAB_001016f0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f4);
    (*pcVar2)();
  }
  __s = *(void **)(pcVar4 + 0x10);
  if (__s != (void *)0x0) {
    memset(__s,0,0x1000);
    return pcVar4 + 0x10;
  }
LAB_001016d4:
  _printk("<3>miev: miev_get_work:invalid, wk=%p msg=%p",pcVar4,0);
  return (char *)0x0;
}



/* ---- check_work @ 001016f4 ---- */

bool check_work(undefined4 *param_1)

{
  return (undefined4 *)0x100157 < param_1 && param_1 < &nwork_index;
}



/* ---- miev_release_work_msg @ 00101720 ---- */

void miev_release_work_msg(long *param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    _printk("<3>miev: release kbuf input invalid");
  }
  else {
    param_1 = param_1 + -2;
    if ((param_1 < &miev_works) || ((long *)0x100427 < param_1)) {
      _printk("<3>miev: released wk=%p msg=%p addr=%p invalid, not in [%p,%p]");
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
  }
  return;
}



/* ---- write_kbuf @ 0010179c ---- */

undefined8 write_kbuf(long *param_1,int param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_3 < 0x1001) {
    if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
      plVar5 = param_1 + -2;
      if ((plVar5 < (long *)0x100158) || (&nwork_index <= plVar5)) {
        _printk("<3>miev: write_buf:wk=%p msg=%p addr=%p invalid, not in [%p,%p]",plVar5,*param_1,param_1,&miev_works,&nwork_index);
        return 0xffffffff;
      }
      lVar2 = sp_el0;
      *(int *)((long)param_1 + -0xc) = param_3;
      *(int *)(param_1 + -1) = param_2;
      puVar1 = (uint *)(lVar2 + 0x10);
      if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
        uVar3 = write_buf_inner(*param_1 + (long)param_2,param_3);
        return uVar3;
      }
      *(undefined1 *)((long)param_1 + -0xf) = 1;
      queue_work_on(0x20,miev_workqueue,param_1 + 1);
      return 0;
    }
    puVar4 = "<3>miev: write_buf:kbuf input invalid";
  }
  else {
    puVar4 = "<3>miev: buf over size";
  }
  _printk(puVar4);
  return 0xffffffff;
}



/* ---- do_miev_work.f115832af8ad5745b85f1e178cf65304 @ 001018a4 ---- */

void do_miev_work_f115832af8ad5745b85f1e178cf65304(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  write_buf_inner(*(long *)(param_1 + -8) + (long)*(int *)(param_1 + -0x10),
                  *(undefined4 *)(param_1 + -0x14));
  *(undefined1 *)(param_1 + -0x17) = 0;
  return;
}



/* ---- miev_read.f115832af8ad5745b85f1e178cf65304 @ 001018e8 ---- */

void miev_read_f115832af8ad5745b85f1e178cf65304(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_30 = 0;
  mutex_lock(miev_dev + 0xb0);
  if (((*(int *)(miev_dev + 0x98) == *(int *)(miev_dev + 0x9c)) ||
      (iVar2 = __kfifo_out((int *)(miev_dev + 0x98),&local_30,4), iVar2 == 0)) ||
     ((0xffffefff < (int)local_30 - 0x1001U &&
      (iVar2 = __kfifo_to_user(miev_dev + 0x98,param_2,local_30 & 0xffffffff,(long)&local_30 + 4),
      iVar2 == 0)))) {
    mutex_unlock(miev_dev + 0xb0);
    lVar3 = (long)local_30._4_4_;
  }
  else {
    lVar3 = miev_dev + 0xb0;
    *(undefined8 *)(miev_dev + 0x98) = 0;
    mutex_unlock(lVar3);
    _printk("<3>miev: copy_to_user failed");
    lVar3 = -0xe;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- miev_write.f115832af8ad5745b85f1e178cf65304 @ 001019d4 ---- */

void miev_write_f115832af8ad5745b85f1e178cf65304
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_64;
  ulong local_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_58 = *(long *)(lVar4 + 0x5e0);
  local_64 = 0;
  mutex_lock(miev_dev + 0xb0);
  if (0xfff < param_3) {
    param_3 = 0x1000;
  }
  iVar3 = -0x801;
  local_60 = param_3;
  do {
    if ((int)param_3 + 4U <=
        (*(int *)(miev_dev + 0xa0) - *(int *)(miev_dev + 0x98)) + *(int *)(miev_dev + 0x9c) + 1U) {
      lVar4 = miev_dev + 0xf8;
      __check_object_size(lVar4,param_3,0);
      lVar4 = _copy_from_user(lVar4,param_2,param_3);
      if (lVar4 != 0) {
        puVar6 = "<3>miev: copy miev_buffer from user failed";
        goto LAB_00101b88;
      }
      iVar3 = __kfifo_in(miev_dev + 0x98,&local_60,4);
      if ((iVar3 != 0) &&
         (iVar3 = __kfifo_in(miev_dev + 0x98,miev_dev + 0xf8,local_60 & 0xffffffff), iVar3 == 0)) {
        _printk("<3>miev: write buf failed,reset fifo");
        *(undefined8 *)(miev_dev + 0x98) = 0;
      }
      mutex_unlock(miev_dev + 0xb0);
      __wake_up(miev_dev + 0xe0,1,1,0);
      uVar5 = local_60;
      goto LAB_00101b3c;
    }
    iVar2 = __kfifo_out(miev_dev + 0x98,&local_64,4);
    if ((iVar2 != 0) &&
       ((local_64 - 0x1001U < 0xfffff000 ||
        (iVar2 = __kfifo_out(miev_dev + 0x98,miev_dev + 0xf8), iVar2 == 0)))) {
      _printk("<3>miev: kfifo_out failed");
      *(undefined8 *)(miev_dev + 0x98) = 0;
    }
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + 1;
  } while (bVar1);
  puVar6 = "<3>miev: try max cnt, not find enough space";
LAB_00101b88:
  _printk(puVar6);
  mutex_unlock(miev_dev + 0xb0);
  uVar5 = 0xfffffffffffffff2;
LAB_00101b3c:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ---- miev_poll.f115832af8ad5745b85f1e178cf65304 @ 00101bbc ---- */

undefined4 miev_poll_f115832af8ad5745b85f1e178cf65304(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  code *pcVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 != (undefined8 *)0x0) {
    pcVar3 = (code *)*param_2;
    lVar1 = miev_dev + 0xe0;
    if (lVar1 != 0 && pcVar3 != (code *)0x0) {
      __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,&DAT_00100550);
      (*pcVar3)(param_1,lVar1,param_2);
    }
  }
  mutex_lock(miev_dev + 0xb0);
  uVar2 = 0;
  if (*(int *)(miev_dev + 0x98) != *(int *)(miev_dev + 0x9c)) {
    uVar2 = 0x41;
  }
  mutex_unlock(miev_dev + 0xb0);
  return uVar2;
}



/* ---- miev_ioctl.f115832af8ad5745b85f1e178cf65304 @ 00101c78 ---- */

undefined8
miev_ioctl_f115832af8ad5745b85f1e178cf65304(undefined8 param_1,uint param_2,ulong param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  
  if ((param_2 & 0xfffc) != 0x6b00) {
    return 0xffffffffffffffea;
  }
  puVar1 = (undefined8 *)sp_el0;
  uVar3 = (ulong)(param_2 >> 0x10 & 0x3fff);
  if (((*(byte *)((long)puVar1 + 0x3e) >> 5 & 1) != 0) || (((uint)*puVar1 >> 0x1a & 1) != 0)) {
    param_3 = param_3 & (long)(param_3 << 8) >> 8;
  }
  bVar2 = CARRY8(param_3,uVar3);
  param_3 = param_3 + uVar3;
  uVar3 = 0;
  if (!bVar2 || param_3 == 0) {
    uVar3 = 0x7fffffffff;
  }
  if (bVar2) {
    param_3 = 0xffffffffffffffff;
  }
  if ((CARRY8(param_3,~uVar3) || CARRY8(param_3 + ~uVar3,(ulong)bVar2)) && param_3 != uVar3 + !bVar2
     ) {
    return 0xfffffffffffffff2;
  }
  if (((param_2 == 0x80046b02) || (param_2 == 0x40046b03)) || (param_2 == 0x6b01)) {
    return 0;
  }
  return 0xffffffffffffffe7;
}



/* ---- miev_open.f115832af8ad5745b85f1e178cf65304 @ 00101d1c ---- */

undefined8 miev_open_f115832af8ad5745b85f1e178cf65304(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  try_module_get(&__this_module);
  return 0;
}



/* ---- miev_release.f115832af8ad5745b85f1e178cf65304 @ 00101d4c ---- */

undefined8 miev_release_f115832af8ad5745b85f1e178cf65304(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  module_put(&__this_module);
  __wake_up(miev_dev + 0xe0,1,1,0);
  return 0;
}



/* ---- _copy_from_user @ 00101d98 ---- */

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



/* ---- cdev_tevent_alloc @ 00101fa4 ---- */

int * cdev_tevent_alloc(int param_1)

{
  int iVar1;
  long *plVar2;
  longlong param4;
  undefined *puVar3;
  undefined8 *in_x18;
  int *piVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar2 = (long *)miev_get_work_msg();
  if ((plVar2 == (long *)0x0) || (piVar4 = (int *)*plVar2, piVar4 == (int *)0x0)) {
    puVar3 = "<3>miev: miev_alloc:mievent create error";
  }
  else {
    *(long **)(piVar4 + 6) = plVar2;
    *piVar4 = param_1;
    param4 = ktime_get_real_seconds();
    piVar4[1] = 0;
    *(longlong *)(piVar4 + 4) = param4;
    iVar1 = snprintf((char *)(*plVar2 + 0x20),0xfe0,"EventId %d -t %lld -paraList {",*piVar4,param4)
    ;
    if (0 < iVar1) {
      piVar4[2] = iVar1 + 0x20;
      return piVar4;
    }
    puVar3 = "<3>miev: miev_alloc:add json head failed";
  }
  _printk(puVar3);
  return (int *)0x0;
}



/* ---- get_integer_size @ 00102054 ---- */

ulong get_integer_size(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1 >> 0x3f;
  do {
    uVar2 = (ulong)((int)uVar2 + 1);
    uVar1 = param_1 + 9;
    param_1 = (long)param_1 / 10;
  } while (0x12 < uVar1);
  return uVar2;
}



/* ---- cdev_tevent_add_int @ 00102090 ---- */

undefined8 cdev_tevent_add_int(undefined4 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char *__format;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 *in_x18;
  ulong uVar8;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar8 = param_3 >> 0x3f;
  uVar7 = param_3;
  do {
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    uVar2 = uVar7 + 9;
    uVar7 = (long)uVar7 / 10;
  } while (0x12 < uVar2);
  if (param_1 != (undefined4 *)0x0) {
    uVar4 = param_1[2];
    if (uVar4 < 0xfff) {
      iVar5 = param_1[1];
      lVar3 = 3;
      if (iVar5 != 0) {
        lVar3 = 4;
      }
      sVar6 = strlen(param_2);
      if (0xfff - (ulong)uVar4 <= sVar6 + (long)(int)uVar1 + lVar3) {
        _printk("<3>miev: add_int:new para over size, %u can not add %s",*param_1,param_2);
        return 0xffffffff;
      }
      __format = "\"%s\":%ld";
      if (iVar5 != 0) {
        __format = ",\"%s\":%ld";
      }
      iVar5 = snprintf((char *)((long)param_1 + (ulong)uVar4),(ulong)(0x1000 - uVar4),__format,
                       param_2,param_3);
      if (iVar5 < 1) {
        _printk("<3>miev: add_int:%u add %s failed, len %d",*param_1,param_2);
        return 0xffffffff;
      }
      param_1[1] = param_1[1] + 1;
      param_1[2] = param_1[2] + iVar5;
      return 0;
    }
  }
  _printk("<3>miev: add_int:para over size, %p can not add %s",param_1,param_2);
  return 0xffffffff;
}



/* ---- cdev_tevent_add_str @ 001021f0 ---- */

undefined8 cdev_tevent_add_str(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  char *__format;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined *puVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 8);
    if (uVar2 < 0xfff) {
      iVar3 = *(int *)(param_1 + 4);
      lVar1 = 5;
      if (iVar3 != 0) {
        lVar1 = 6;
      }
      sVar4 = strlen(param_2);
      sVar5 = strlen(param_3);
      if (sVar5 + sVar4 + lVar1 < 0xfff - (ulong)uVar2) {
        __format = "\"%s\":\"%s\"";
        if (iVar3 != 0) {
          __format = ",\"%s\":\"%s\"";
        }
        iVar3 = snprintf((char *)(param_1 + (ulong)uVar2),(ulong)(0x1000 - uVar2),__format,param_2,
                         param_3);
        if (0 < iVar3) {
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar3;
          return 0;
        }
        puVar6 = "<3>miev: add_str:%p add %s failed";
      }
      else {
        puVar6 = "<3>miev: add_str:new para over size, %p can not add %s";
      }
      goto LAB_001022dc;
    }
  }
  puVar6 = "<3>miev: add_str:para over size, %p can not add %s";
LAB_001022dc:
  _printk(puVar6,param_1,param_2);
  return 0xffffffff;
}



/* ---- cdev_tevent_write @ 0010230c ---- */

undefined8 cdev_tevent_write(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1 == 0) {
    lVar2 = sp_el0;
    _printk("<3>miev: event_write:event is null %d",*(undefined4 *)(lVar2 + 0x5d8));
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    if ((*(int *)(param_1 + 4) == 0) || (0xffe < uVar1)) {
      _printk("<3>miev: event_write:%p para cnt %d, used %d",param_1);
      uVar4 = 0xffffffff;
    }
    else {
      iVar3 = snprintf((char *)(param_1 + (ulong)uVar1),(ulong)(0x1000 - uVar1),"}");
      if (iVar3 < 1) {
        _printk("<3>miev: event_write:add json end str failed %p",param_1);
        uVar4 = 0xffffffff;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) + iVar3;
        *(int *)(param_1 + 8) = iVar3;
        write_kbuf(*(undefined8 *)(param_1 + 0x18),0x20,iVar3 + -0x20);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* ---- cdev_tevent_destroy @ 001023d8 ---- */

void cdev_tevent_destroy(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (param_1 != 0) {
    *in_x18 = unaff_x30;
    miev_release_work_msg(*(undefined8 *)(param_1 + 0x18));
  }
  return;
}



/* ---- init_module @ 00102414 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong init_module(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *in_x18;
  ulong uVar8;
  long lVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (bInited == '\x01') {
    _printk("<3>miev: already init");
    uVar8 = 0;
  }
  else {
    nwork_index = 0;
    miev_dev = (undefined4 *)kmem_cache_alloc_trace(_DAT_00104188,0xcc0,0x10f8);
    if (miev_dev == (undefined4 *)0x0) {
      _printk("<3>miev: Fail to create miev_device");
      uVar8 = 0xfffffff4;
    }
    else {
      *miev_dev = 0x20800000;
      iVar4 = register_chrdev_region(0x20800000,1,"miev");
      if ((iVar4 < 0) && (iVar4 = alloc_chrdev_region(miev_dev,0,1,"miev"), iVar4 < 0)) {
        _printk("<3>miev: Fail to register_chrdev_region");
        uVar8 = 0xffffffed;
      }
      else {
        cdev_init(miev_dev + 4,&miev_fops);
        puVar1 = miev_dev + 4;
        uVar2 = *miev_dev;
        *(undefined1 **)(miev_dev + 0x1c) = &__this_module;
        uVar5 = cdev_add(puVar1,uVar2,1);
        uVar8 = (ulong)uVar5;
        if ((int)uVar5 < 0) {
          _printk("<3>miev: Fail to add miev_dev");
        }
        else {
          iVar4 = __kfifo_alloc(miev_dev + 0x26,0x10000,1,0xcc0);
          if (iVar4 == 0) {
            uVar6 = __class_create(&__this_module,"miev",&miev_init_module___key_20);
            puVar1 = miev_dev;
            *(ulong *)(miev_dev + 2) = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
              uVar6 = device_create(uVar6,0,*puVar1,0,"miev");
              if (uVar6 < 0xfffffffffffff001) {
                __mutex_init(miev_dev + 0x2c,"&miev_dev->lock",&miev_init_module___key_20);
                __init_waitqueue_head
                          (miev_dev + 0x38,"&miev_dev->wait_queue",&miev_init_module___key_20);
                miev_workqueue = alloc_workqueue(&DAT_0010063c,0xe000a,1,"miev_workqueue");
                if (miev_workqueue == 0) {
                  _printk("<3>miev: create workqueue failed");
                  uVar8 = 0xffffffea;
                }
                else {
                  lVar9 = 0;
                  while( true ) {
                    uVar3 = _DAT_00104180;
                    *(undefined2 *)(&miev_works + lVar9) = 0;
                    *(undefined8 *)((long)&DAT_0010015c + lVar9) = 0;
                    lVar7 = kmem_cache_alloc_trace(uVar3,0xcc0,0x1000);
                    *(long *)((long)&DAT_00100168 + lVar9) = lVar7;
                    if (lVar7 == 0) break;
                    lVar7 = lVar9 + 0x48;
                    *(undefined8 *)((long)&DAT_00100170 + lVar9) = 0xfffffffe0;
                    *(long *)((long)&DAT_00100178 + lVar9) = (long)&DAT_00100178 + lVar9;
                    *(long *)((long)&DAT_00100180 + lVar9) = (long)&DAT_00100178 + lVar9;
                    *(code **)((long)&DAT_00100188 + lVar9) =
                         do_miev_work_f115832af8ad5745b85f1e178cf65304_cfi_jt;
                    lVar9 = lVar7;
                    if (lVar7 == 0x2d0) {
                      bInited = 1;
                      return 0;
                    }
                  }
                  lVar9 = 0x10;
                  do {
                    if (*(long *)(&miev_works + lVar9) != 0) {
                      kfree();
                    }
                    lVar9 = lVar9 + 0x48;
                  } while (lVar9 != 0x2e0);
                  destroy_workqueue(miev_workqueue);
                  miev_workqueue = 0;
                }
                device_destroy(*(undefined8 *)(miev_dev + 2),*miev_dev);
              }
              else {
                _printk("<3>miev: device create failed!");
                uVar8 = uVar6 & 0xffffffff;
              }
              class_destroy(*(undefined8 *)(miev_dev + 2));
            }
            else {
              _printk("<3>miev: class create failed!");
              uVar8 = (ulong)(uint)miev_dev[2];
            }
            __kfifo_free(miev_dev + 0x26);
          }
          else {
            _printk("<3>miev: kfifo_alloc create failed");
            uVar8 = 0xfffffff4;
          }
          cdev_del(miev_dev + 4);
        }
        unregister_chrdev_region(*miev_dev,1);
      }
      kfree(miev_dev);
    }
  }
  return uVar8;
}



/* ---- cleanup_module @ 00102764 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  long lVar1;
  uint uVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  bInited = 0;
  device_destroy(*(undefined8 *)(miev_dev + 2),*miev_dev);
  class_destroy(*(undefined8 *)(miev_dev + 2));
  __kfifo_free(miev_dev + 0x26);
  cdev_del(miev_dev + 4);
  unregister_chrdev_region(*miev_dev,1);
  kfree(miev_dev);
  lVar1 = 0;
  do {
    if ((&DAT_00100168)[lVar1 * 9] != 0) {
      uVar2 = 0xb;
      do {
        if (((&miev_works)[lVar1 * 0x48] == '\0') && ((&DAT_00100159)[lVar1 * 0x48] == '\0')) break;
        msleep(100);
        uVar2 = uVar2 - 1;
      } while (1 < uVar2);
      kfree((&DAT_00100168)[lVar1 * 9]);
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 10) {
      flush_workqueue(miev_workqueue);
      destroy_workqueue(miev_workqueue);
      miev_workqueue = 0;
      return;
    }
  } while( true );
}


/* functions: 21 ok, 0 failed */
