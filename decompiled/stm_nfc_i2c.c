/* Decompiled with Ghidra from stm_nfc_i2c.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] &st21nfc_dev->read_wq
// [.rodata] ACTIVE_RW
// [.rodata] 6%s done Pulse Request

// [.rodata] 4%s Could not read rest of header after 7E7E: %d

// [.rodata] st21nfc_loc_set_polaritymode
// [.rodata] 4%s Could not read payload: %d

// [.rodata] st21nfc_dev_open
// [.rodata] pidle
// [.rodata] 6%s Recovery Request

// [.rodata] st21nfc_dev_write
// [.rodata] &st21nfc_dev->read_mutex
// [.rodata] 3%s: received too many bytes from i2c (%d)

// [.rodata] 6 ### ST21NFC_SET_POLARITY_HIGH ###

// [.rodata] st_pstate_work
// [.rodata] 6Loading st21nfc driver %s

// [.rodata] 7%s:[OPTIONAL] clk_pinctrl not set

// [.rodata] 4%s : failed to copy to user space

// [.rodata] 3%s : i2c_master_send returned %d

// [.rodata] st21nfc_probe
// [.rodata] &st21nfc_dev->irq_dir_mutex
// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/include/linux/i2c.h
// [.rodata] st,reset
// [.rodata] 7%s:[OPTIONAL] clk_pinctrl set

// [.rodata] 7%s : i2c-retry = %d

// [.rodata] 6%s done Double Pulse Request

// [.rodata] 0x%.2x

// [.rodata] 3%s: Did not get CORE_RESET_NTF, hardware issue? (%d)

// [.rodata] 4%s Read 7E7E7E... header, IRQ always high ? Stop

// [.rodata] 6%s : read called but no IRQ.

// [.rodata] version
// [.rodata] 6%s Read message (%d bytes): %02x %02x %02x %02x ...

// [.rodata] st21nfc_dev_read
// [.rodata] 2.2.0.19
// [.rodata] st21nfc_power_stats_switch
// [.rodata] 7%s Switching from %s to %s: %llx, ntf=%d

// [.rodata] st21nfc_recovery
// [.rodata] 3%s : devm_request_irq for power stats idle failed

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/../../vendor/stnfc/opensource/driver/nfc/st21nfc.c
// [.rodata] 3%s : devm_request_irq failed

// [.rodata] NFC subsystem
Idle mode:
	Cumulative count: 0x%llx
	Cumulative duration msec: 0x%llx
	Last entry timestamp msec: 0x%llx
	Last exit timestamp msec: 0x%llx
Active mode:
	Cumulative count: 0x%llx
	Cumulative duration msec: 0x%llx
	Last entry timestamp msec: 0x%llx
	Last exit timestamp msec: 0x%llx
Active Reader/Writer mode:
	Cumulative count: 0x%llx
	Cumulative duration msec: 0x%llx
	Last entry timestamp msec: 0x%llx
	Last exit timestamp msec: 0x%llx

Error transition header --> payload state machine: 0x%llx
Error transition from an Active state when not in Idle state: 0x%llx
Error transition from Idle state to Idle state: 0x%llx
Warning transition from Active Reader/Writer state to Idle state: 0x%llx
Error transition from Active state to Active state: 0x%llx
Error transition from Idle state to Active state with notification: 0x%llx
Error transition from Active Reader/Writer state to Active Reader/Writer state: 0x%llx
Error transition from Idle state to Active Reader/Writer state with notification: 0x%llx

Total uptime: 0x%llx Cumulative modes time: 0x%llx

// [.rodata] 4%s Could not read payload length: %d

// [.rodata] 4[OPTIONAL] %s: Unable to request pidle-gpio

// [.rodata] 6 ### ST21NFC_SET_POLARITY_RISING ###

// [.rodata] i2c-retry
// [.rodata] 6%s: recovery done (#%d), result = %d, try ping again

// [.rodata] 3%s : gpiod_direction_output failed

// [.rodata] st,clk_pinctrl
// [.rodata] 3%s : st21nfc_clock_select failed

// [.rodata] 3%s bad ioctl %u

// [.rodata] st,pidle_active_low
// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/include/linux/poll.h
// [.rodata] st21nfc_dev_ioctl
// [.rodata] 7Unable to add GPIO mapping table

// [.rodata] &st21nfc_dev->pidle_mutex
// [.rodata] 3%s : misc_register failed

// [.rodata] st21nfc
// [.rodata] 3%s : set_irq_type failed

// [.rodata] 3%s Error: Switched from %s to %s!: %llx, ntf=%d

// [.rodata] 3%s : memdup_user failed

// [.rodata] 6%s:[OPTIONAL] pidle_active_low set

// [.rodata] 7%s : debug irq_gpio = %d, client-irq =  %d, pidle_gpio = %d

// [.rodata] 6%s:[OPTIONAL] pidle_active_low not set

// [.rodata] 4[OPTIONAL] %s : Unable to request clkreq-gpios

// [.rodata] 3%s : device already opened ret= %d

// [.rodata] st21nfc_ping
// [.rodata] st,irq
// [.rodata] st21nfc_pw_stats_idle_handle
// [.rodata] 6%s Double Pulse Request

// [.rodata] 4%s : Unable to request reset-gpios

// [.rodata] st,clkreq
// [.rodata] ACTIVE
// [.rodata] 3%s : gpiod_direction_input failed

// [.rodata] i2c_addr
// [.rodata] 3%s : sysfs_create_group failed

// [.rodata] 4%s Could not read header: %d

// [.rodata] 3%s: i2c_master_recv returned %d

// [.rodata] 6Unloading st21nfc driver

// [.rodata] 3%s : need I2C_FUNC_I2C

// [.rodata] 3%s : Unable to request irq-gpios

// [.rodata] 3%s: Did not get CORE_RESET_NTF (%d), try recovery

// [.rodata] 6%s Recovery procedure finished

// [.rodata] power_stats
// [.rodata] nfc_ref_clk
// [.rodata] 'unsigned int (struct i2c_adapter *)'
// [.rodata] 'void (struct file *, struct wait_queue_head *, struct poll_table_struct *)'
// [.rodata] 'void (int, void *)'
// [.modinfo] author=STMicroelectronics
// [.modinfo] description=NFC ST21NFC driver
// [.modinfo] version=2.2.0.19
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=stm_nfc_i2c
// [.modinfo] depends=
// [.modinfo] alias=of:N*T*Cst,st21nfc
// [.modinfo] alias=of:N*T*Cst,st21nfcC*
// [.modinfo] srcversion=4B62C0721B9FA6B0596211D
// [.modinfo] scmversion=g11103ba200c2
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] memset
// [__versions] gic_nonsecure_priorities
// [__versions] cpu_hwcaps
// [__versions] cpu_hwcap_keys
// [__versions] arm64_const_caps_ready
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] i2c_del_driver
// [__versions] irq_set_irq_wake
// [__versions] clk_disable
// [__versions] wakeup_source_unregister
// [__versions] sysfs_remove_group
// [__versions] sysfs_remove_file_ns
// [__versions] kstrtoll
// [__versions] scnprintf
// [__versions] pm_wakeup_ws_event
// [__versions] __wake_up
// [__versions] devm_free_irq
// [__versions] enable_irq
// [__versions] _raw_spin_unlock_irqrestore
// [__versions] disable_irq_nosync
// [__versions] _raw_spin_lock_irqsave
// [__versions] memdup_user
// [__versions] __arch_copy_to_user
// [__versions] __check_object_size
// [__versions] no_llseek
// [__versions] gpiod_direction_input
// [__versions] gpiod_direction_output
// [__versions] usleep_range_state
// [__versions] i2c_transfer_buffer_flags
// [__versions] gpiod_set_value
// [__versions] of_property_read_variable_u32_array
// [__versions] clk_unprepare
// [__versions] clk_enable
// [__versions] clk_prepare
// [__versions] clk_get
// [__versions] queue_work_on
// [__versions] devm_request_threaded_irq
// [__versions] mutex_unlock
// [__versions] mutex_lock
// [__versions] ktime_get_with_offset
// [__versions] gpiod_get_value
// [__versions] device_property_present
// [__versions] devm_kmalloc
// [__versions] __cfi_slowpath_diag
// [__versions] destroy_workqueue
// [__versions] misc_deregister
// [__versions] wakeup_source_register
// [__versions] sysfs_create_group
// [__versions] misc_register
// [__versions] desc_to_gpio
// [__versions] __init_waitqueue_head
// [__versions] irq_set_irq_type
// [__versions] gpiod_to_irq
// [__versions] __mutex_init
// [__versions] alloc_workqueue
// [__versions] devm_gpiod_put
// [__versions] devm_gpiod_get
// [__versions] i2c_register_driver
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
// [.shstrtab] .rela.rodata.st21nfc_pm_ops
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] .rela.data.st21nfc_driver
// [.shstrtab] .rela.fixup
// [.shstrtab] .modinfo
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .rela__ex_table
// [.shstrtab] .rela__jump_table
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.strtab] st21nfc_probe.__key
// [.strtab] arm64_const_caps_ready
// [.strtab] of_property_read_variable_u32_array
// [.strtab] power_stats_show
// [.strtab] i2c_addr_show
// [.strtab] version_show
// [.strtab] gpiod_direction_output
// [.strtab] gpiod_direction_input
// [.strtab] devm_gpiod_put
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] pm_wakeup_ws_event
// [.strtab] device_property_present
// [.strtab] no_llseek.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] power_stats_show.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] i2c_addr_show.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] version_show.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_dev_power_stats_handler.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_dev_irq_handler.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_pstate_wq.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_dev_open.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_dev_ioctl.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_poll.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_remove.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_dev_write.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_release.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] i2c_addr_store.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_resume.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_probe.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_suspend.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] st21nfc_dev_read.15d3a2d0805a35b24ff490332e0a4c40.cfi_jt
// [.strtab] __mutex_init
// [.strtab] memset
// [.strtab] ktime_get_with_offset
// [.strtab] clk_get
// [.strtab] devm_gpiod_get
// [.strtab] st21nfc_clock_select
// [.strtab] cpu_hwcap_keys
// [.strtab] dev_attr_power_stats
// [.strtab] st21nfc_attrs
// [.strtab] st21nfc_dev_fops
// [.strtab] st21nfc_pm_ops
// [.strtab] cpu_hwcaps
// [.strtab] ____versions
// [.strtab] sysfs_remove_file_ns
// [.strtab] i2c_transfer_buffer_flags
// [.strtab] gic_nonsecure_priorities
// [.strtab] i2c_register_driver
// [.strtab] i2c_del_driver
// [.strtab] st21nfc_driver
// [.strtab] wakeup_source_unregister
// [.strtab] misc_deregister
// [.strtab] wakeup_source_register
// [.strtab] misc_register
// [.strtab] memdup_user
// [.strtab] __arch_copy_to_user
// [.strtab] st21nfc_dev_power_stats_handler
// [.strtab] st21nfc_dev_irq_handler
// [.strtab] dev_attr_i2c_addr
// [.strtab] st21nfc_pstate_wq
// [.strtab] gpiod_to_irq
// [.strtab] st21nfc_disable_irq
// [.strtab] enable_irq
// [.strtab] devm_free_irq
// [.strtab] devm_request_threaded_irq
// [.strtab] sysfs_remove_group
// [.strtab] sysfs_create_group
// [.strtab] __wake_up
// [.strtab] st21nfc_attr_grp
// [.strtab] msleep
// [.strtab] desc_to_gpio
// [.strtab] dev_attr_version
// [.strtab] queue_work_on
// [.strtab] st21nfc_dev_open
// [.strtab] st21nfc_dev_ioctl
// [.strtab] kstrtoll
// [.strtab] st21nfc_poll
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] _printk
// [.strtab] no_llseek
// [.strtab] mutex_unlock
// [.strtab] mutex_lock
// [.strtab] __cfi_check
// [.strtab] st21nfc_of_match
// [.strtab] st21nfc_ping
// [.strtab] __cfi_slowpath_diag
// [.strtab] scnprintf
// [.strtab] __check_object_size
// [.strtab] st21nfc_remove
// [.strtab] _raw_spin_lock_irqsave
// [.strtab] gpiod_set_value
// [.strtab] gpiod_get_value
// [.strtab] destroy_workqueue
// [.strtab] alloc_workqueue
// [.strtab] st21nfc_dev_write
// [.strtab] usleep_range_state
// [.strtab] st21nfc_release
// [.strtab] _raw_spin_unlock_irqrestore
// [.strtab] i2c_addr_store
// [.strtab] clk_unprepare
// [.strtab] clk_prepare
// [.strtab] irq_set_irq_type
// [.strtab] st21nfc_resume
// [.strtab] st21nfc_power_state_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] __mod_of__st21nfc_of_match_device_table
// [.strtab] clk_disable
// [.strtab] clk_enable
// [.strtab] irq_set_irq_wake
// [.strtab] kfree
// [.strtab] st21nfc_loc_set_polaritymode
// [.strtab] st21nfc_probe
// [.strtab] st21nfc_suspend
// [.strtab] st21nfc_id
// [.strtab] st21nfc_dev_read
// [.strtab] __init_waitqueue_head
// [.strtab] devm_kmalloc
// [.strtab] disable_irq_nosync
// [.strtab] st21nfc_unregister_st54spi_cb
// [.strtab] st21nfc_register_st54spi_cb
// [.strtab] st21nfc_st54spi_cb
// [.strtab] st21nfc_st54spi_data
// [.strtab] _note_9
// [.strtab] $d.99
// [.strtab] $x.89
// [.strtab] $x.79
// [.strtab] $x.69
// [.strtab] $x.59
// [.strtab] $x.49
// [.strtab] $x.39
// [.strtab] $d.29
// [.strtab] $d.19
// [.strtab] $d.109
// [.strtab] $x.9
// [.strtab] _note_8
// [.strtab] $d.98
// [.strtab] $x.88
// [.strtab] $d.78
// [.strtab] $d.68
// [.strtab] $d.58
// [.strtab] $d.48
// [.strtab] $d.38
// [.strtab] $x.28
// [.strtab] $d.118
// [.strtab] $x.18
// [.strtab] $d.108
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.97
// [.strtab] $x.87
// [.strtab] $x.77
// [.strtab] $x.67
// [.strtab] $x.57
// [.strtab] $x.47
// [.strtab] $x.37
// [.strtab] $d.27
// [.strtab] $d.117
// [.strtab] $d.17
// [.strtab] $d.107
// [.strtab] $x.7
// [.strtab] __UNIQUE_ID_license496
// [.strtab] __UNIQUE_ID_scmversion296
// [.strtab] $d.96
// [.strtab] $x.86
// [.strtab] $d.76
// [.strtab] $d.66
// [.strtab] $d.56
// [.strtab] $d.46
// [.strtab] st21nfc_probe.__key.36
// [.strtab] $d.36
// [.strtab] $x.26
// [.strtab] $d.116
// [.strtab] $x.16
// [.strtab] $d.106
// [.strtab] $x.6
// [.strtab] __UNIQUE_ID_version495
// [.strtab] __UNIQUE_ID_srcversion295
// [.strtab] $d.95
// [.strtab] $x.85
// [.strtab] $x.75
// [.strtab] $x.65
// [.strtab] $x.55
// [.strtab] $x.45
// [.strtab] $x.35
// [.strtab] $d.25
// [.strtab] $d.115
// [.strtab] $x.15
// [.strtab] $d.15
// [.strtab] $d.105
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_description494
// [.strtab] __UNIQUE_ID_alias294
// [.strtab] $d.94
// [.strtab] $x.84
// [.strtab] $d.74
// [.strtab] $d.64
// [.strtab] $d.54
// [.strtab] $d.44
// [.strtab] st21nfc_probe.__key.34
// [.strtab] $d.34
// [.strtab] $d.124
// [.strtab] $x.24
// [.strtab] $d.114
// [.strtab] $x.14
// [.strtab] $d.104
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_author493
// [.strtab] __UNIQUE_ID_alias293
// [.strtab] $x.93
// [.strtab] $x.83
// [.strtab] $x.73
// [.strtab] $x.63
// [.strtab] $x.53
// [.strtab] $x.43
// [.strtab] $x.33
// [.strtab] $d.23
// [.strtab] $d.113
// [.strtab] $x.13
// [.strtab] $d.103
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_depends292
// [.strtab] $d.92
// [.strtab] $x.82
// [.strtab] $d.72
// [.strtab] $d.62
// [.strtab] $d.52
// [.strtab] $d.42
// [.strtab] st21nfc_probe.__key.32
// [.strtab] $d.32
// [.strtab] $x.22
// [.strtab] $d.112
// [.strtab] $x.12
// [.strtab] $d.102
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $x.91
// [.strtab] $x.81
// [.strtab] $x.71
// [.strtab] $x.61
// [.strtab] $x.51
// [.strtab] $x.41
// [.strtab] $x.31
// [.strtab] $d.21
// [.strtab] $d.111
// [.strtab] $x.11
// [.strtab] $d.101
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $x.90
// [.strtab] $d.80
// [.strtab] $d.70
// [.strtab] $d.60
// [.strtab] $x.50
// [.strtab] power_stats_show.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] i2c_addr_show.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] version_show.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_dev_power_stats_handler.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_dev_irq_handler.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_pstate_wq.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_dev_open.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_dev_ioctl.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_poll.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_remove.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_dev_write.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_release.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] i2c_addr_store.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_resume.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_probe.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_suspend.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] st21nfc_dev_read.15d3a2d0805a35b24ff490332e0a4c40
// [.strtab] $d.40
// [.strtab] $x.30
// [.strtab] $x.20
// [.strtab] $d.110
// [.strtab] $x.10
// [.strtab] $d.100

/* ---- st21nfc_register_st54spi_cb @ 00102390 ---- */

void st21nfc_register_st54spi_cb(undefined8 param_1,undefined8 param_2)

{
  st21nfc_st54spi_cb = param_1;
  st21nfc_st54spi_data = param_2;
  return;
}



/* ---- st21nfc_unregister_st54spi_cb @ 001023ac ---- */

void st21nfc_unregister_st54spi_cb(void)

{
  st21nfc_st54spi_cb = 0;
  st21nfc_st54spi_data = 0;
  return;
}



/* ---- st21nfc_probe.15d3a2d0805a35b24ff490332e0a4c40 @ 001023c8 ---- */

int st21nfc_probe_15d3a2d0805a35b24ff490332e0a4c40(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *in_x18;
  long lVar13;
  code *pcVar14;
  undefined4 *puVar15;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar13 = *(long *)(param_1 + 0x18);
  pcVar14 = *(code **)(*(long *)(lVar13 + 0x10) + 0x20);
  __cfi_slowpath_diag(0x6871e466cec98751,pcVar14,&DAT_00100370);
  uVar8 = (*pcVar14)(lVar13);
  if ((uVar8 & 1) == 0) {
    puVar12 = "<3>%s : need I2C_FUNC_I2C\n";
LAB_00102580:
    _printk(puVar12,"st21nfc_probe");
    return -0x13;
  }
  lVar13 = param_1 + 0x20;
  lVar9 = devm_kmalloc(lVar13,1000,0xdc0);
  if (lVar9 == 0) {
    return -0xc;
  }
  *(long *)(lVar9 + 0xa8) = param_1;
  *(undefined4 *)(lVar9 + 0x21c) = 0;
  _printk("<7>Unable to add GPIO mapping table\n");
  uVar8 = devm_gpiod_get(lVar13,"st,irq",1);
  *(ulong *)(lVar9 + 0x3c0) = uVar8;
  if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
    puVar12 = "<3>%s : Unable to request irq-gpios\n";
    goto LAB_00102580;
  }
  uVar8 = devm_gpiod_get(lVar13,"st,reset",7);
  *(ulong *)(lVar9 + 0x3c8) = uVar8;
  if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
    _printk("<4>%s : Unable to request reset-gpios\n","st21nfc_probe");
LAB_001025a8:
    devm_gpiod_put(lVar13,*(undefined8 *)(lVar9 + 0x3c0));
    return -0x13;
  }
  uVar8 = devm_gpiod_get(lVar13,"pidle",1);
  *(ulong *)(lVar9 + 0x3d8) = uVar8;
  if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
    bVar3 = device_property_present(lVar13,"st,pidle_active_low");
    puVar12 = "<6>%s:[OPTIONAL] pidle_active_low set\n";
    if ((bVar3 & 1) == 0) {
      puVar12 = "<6>%s:[OPTIONAL] pidle_active_low not set\n";
    }
    _printk(puVar12,"st21nfc_probe");
    *(byte *)(lVar9 + 0x3e0) = bVar3 & 1;
    lVar10 = alloc_workqueue(&DAT_0010073e,0x40008,1,"st_pstate_work");
    *(long *)(lVar9 + 0x2c8) = lVar10;
    if (lVar10 == 0) {
      devm_gpiod_put(lVar13,*(undefined8 *)(lVar9 + 0x3d8));
      devm_gpiod_put(lVar13,*(undefined8 *)(lVar9 + 0x3c8));
      goto LAB_001025a8;
    }
    __mutex_init(lVar9 + 0x48,"&st21nfc_dev->pidle_mutex",&st21nfc_probe___key);
    *(undefined8 *)(lVar9 + 0x2d0) = 0xfffffffe0;
    *(long *)(lVar9 + 0x2d8) = lVar9 + 0x2d8;
    *(long *)(lVar9 + 0x2e0) = lVar9 + 0x2d8;
    *(code **)(lVar9 + 0x2e8) = st21nfc_pstate_wq_15d3a2d0805a35b24ff490332e0a4c40_cfi_jt;
    uVar11 = gpiod_to_irq(*(undefined8 *)(lVar9 + 0x3d8));
    *(int *)(lVar9 + 0x220) = (int)uVar11;
    iVar7 = irq_set_irq_type(uVar11,3);
    if (iVar7 == 0) {
      iVar7 = devm_request_threaded_irq
                        (lVar13,*(undefined4 *)(lVar9 + 0x220),
                         st21nfc_dev_power_stats_handler_15d3a2d0805a35b24ff490332e0a4c40_cfi_jt,0,3
                         ,"st21nfc_pw_stats_idle_handle",lVar9);
      if (iVar7 == 0) goto LAB_001025d0;
      puVar12 = "<3>%s : devm_request_irq for power stats idle failed\n";
    }
    else {
      puVar12 = "<3>%s : set_irq_type failed\n";
    }
    _printk(puVar12,"st21nfc_probe");
    goto LAB_001029c0;
  }
  _printk("<4>[OPTIONAL] %s: Unable to request pidle-gpio\n","st21nfc_probe");
LAB_001025d0:
  uVar8 = devm_gpiod_get(lVar13,"st,clkreq",1);
  *(ulong *)(lVar9 + 0x3d0) = uVar8;
  if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
    _printk("<4>[OPTIONAL] %s : Unable to request clkreq-gpios\n","st21nfc_probe");
LAB_001026b0:
    uVar4 = gpiod_to_irq(*(undefined8 *)(lVar9 + 0x3c0));
    *(undefined4 *)(param_1 + 0x3b4) = uVar4;
    iVar7 = of_property_read_variable_u32_array
                      (*(undefined8 *)(param_1 + 0x310),"i2c-retry",*(long *)(param_1 + 0x18) + 0x6c
                       ,1,0);
    if (iVar7 < 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = 0;
    }
    else {
      _printk("<7>%s : i2c-retry = %d\n","st21nfc_probe",*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c));
    }
    iVar7 = 0;
    lVar10 = lVar9 + 0x78;
    do {
      iVar5 = st21nfc_ping(lVar9);
      if (iVar5 == 0) goto LAB_00102898;
      _printk("<3>%s: Did not get CORE_RESET_NTF (%d), try recovery\n","st21nfc_probe",iVar5);
      _printk("<6>%s Recovery Request\n","st21nfc_recovery");
      mutex_lock(lVar10);
      uVar8 = *(ulong *)(lVar9 + 0x3c8);
      if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
LAB_00102818:
        msleep(0x14);
        gpiod_set_value(*(undefined8 *)(lVar9 + 0x3c0),0);
        msleep(0x14);
        gpiod_set_value(*(undefined8 *)(lVar9 + 0x3c0),1);
        msleep(0x14);
        gpiod_set_value(*(undefined8 *)(lVar9 + 0x3c0),0);
        msleep(0x14);
        _printk("<6>%s Recovery procedure finished\n","st21nfc_recovery");
        iVar5 = gpiod_direction_input(*(undefined8 *)(lVar9 + 0x3c0));
        uVar11 = 0;
        puVar12 = "<3>%s : gpiod_direction_input failed\n";
        if (iVar5 != 0) goto LAB_00102734;
      }
      else {
        gpiod_set_value(uVar8,0);
        usleep_range_state(10000,11000,2);
        iVar5 = gpiod_direction_output(*(undefined8 *)(lVar9 + 0x3c0),1);
        puVar12 = "<3>%s : gpiod_direction_output failed\n";
        if (iVar5 == 0) {
          gpiod_set_value(*(undefined8 *)(lVar9 + 0x3c0),1);
          usleep_range_state(10000,11000,2);
          gpiod_set_value(*(undefined8 *)(lVar9 + 0x3c8),1);
          _printk("<6>%s done Pulse Request\n","st21nfc_recovery");
          goto LAB_00102818;
        }
LAB_00102734:
        _printk(puVar12,"st21nfc_recovery");
        uVar11 = 0xffffffed;
      }
      mutex_unlock(lVar10);
      _printk("<6>%s: recovery done (#%d), result = %d, try ping again\n","st21nfc_probe",iVar7,uVar11);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 3);
    iVar7 = st21nfc_ping(lVar9);
    if (iVar7 != 0) {
      _printk("<3>%s: Did not get CORE_RESET_NTF, hardware issue? (%d)\n","st21nfc_probe",iVar7);
      goto LAB_001029c0;
    }
LAB_00102898:
    __init_waitqueue_head(lVar9,"&st21nfc_dev->read_wq",&st21nfc_probe___key);
    __mutex_init(lVar9 + 0x18,"&st21nfc_dev->read_mutex",&st21nfc_probe___key);
    __mutex_init(lVar10,"&st21nfc_dev->irq_dir_mutex",&st21nfc_probe___key);
    uVar4 = 0xffffffff;
    *(undefined4 *)(lVar9 + 0x214) = 0;
    if ((*(ulong *)(lVar9 + 0x3c0) != 0) && (*(ulong *)(lVar9 + 0x3c0) < 0xfffffffffffff001)) {
      uVar4 = desc_to_gpio();
    }
    uVar6 = 0xffffffff;
    uVar2 = *(undefined4 *)(param_1 + 0x3b4);
    if ((*(ulong *)(lVar9 + 0x3d8) != 0) && (*(ulong *)(lVar9 + 0x3d8) < 0xfffffffffffff001)) {
      uVar6 = desc_to_gpio();
    }
    _printk("<7>%s : debug irq_gpio = %d, client-irq =  %d, pidle_gpio = %d\n","st21nfc_probe",uVar4,uVar2,uVar6);
    puVar15 = (undefined4 *)(lVar9 + 0xb0);
    *puVar15 = 0xff;
    *(long *)(lVar9 + 0xd8) = lVar13;
    *(char **)(lVar9 + 0xb8) = "st21nfc";
    *(undefined ***)(lVar9 + 0xc0) = &st21nfc_dev_fops;
    *(long *)(param_1 + 0xb8) = lVar9;
    iVar7 = misc_register(puVar15);
    if (iVar7 != 0) {
      puVar12 = "<3>%s : misc_register failed\n";
      goto LAB_0010267c;
    }
    iVar7 = sysfs_create_group(lVar13,&st21nfc_attr_grp);
    if (iVar7 == 0) {
      uVar11 = wakeup_source_register(0,"st21nfc");
      *(undefined1 *)(lVar9 + 0x205) = 0;
      *(undefined8 *)(lVar9 + 0x208) = uVar11;
      return 0;
    }
    _printk("<3>%s : sysfs_create_group failed\n","st21nfc_probe");
    misc_deregister(puVar15);
    uVar8 = *(ulong *)(lVar9 + 0x3d8);
  }
  else {
    uVar8 = device_property_present(lVar13,"st,clk_pinctrl");
    bVar1 = (uVar8 & 1) == 0;
    if (bVar1) {
      _printk("<7>%s:[OPTIONAL] clk_pinctrl not set\n","st21nfc_probe");
      lVar10 = 0x3b8;
    }
    else {
      _printk("<7>%s:[OPTIONAL] clk_pinctrl set\n","st21nfc_probe");
      lVar10 = 0x3a8;
      *(undefined1 *)(lVar9 + 0x3b8) = 1;
    }
    *(bool *)(lVar9 + lVar10) = !bVar1;
    iVar7 = st21nfc_clock_select(lVar9);
    if (-1 < iVar7) goto LAB_001026b0;
    puVar12 = "<3>%s : st21nfc_clock_select failed\n";
LAB_0010267c:
    _printk(puVar12,"st21nfc_probe");
    uVar8 = *(ulong *)(lVar9 + 0x3d8);
  }
  if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
    sysfs_remove_file_ns(lVar13,&dev_attr_power_stats,0);
  }
LAB_001029c0:
  if (*(ulong *)(lVar9 + 0x3d8) < 0xfffffffffffff001) {
    destroy_workqueue(*(undefined8 *)(lVar9 + 0x2c8));
    devm_gpiod_put(lVar13,*(undefined8 *)(lVar9 + 0x3d8));
  }
  if ((*(ulong *)(lVar9 + 0x3c8) != 0) && (*(ulong *)(lVar9 + 0x3c8) < 0xfffffffffffff001)) {
    devm_gpiod_put(lVar13);
  }
  if ((*(ulong *)(lVar9 + 0x3c0) != 0) && (*(ulong *)(lVar9 + 0x3c0) < 0xfffffffffffff001)) {
    devm_gpiod_put(lVar13);
  }
  if ((*(ulong *)(lVar9 + 0x3d0) != 0) && (*(ulong *)(lVar9 + 0x3d0) < 0xfffffffffffff001)) {
    devm_gpiod_put(lVar13);
  }
  return iVar7;
}



/* ---- st21nfc_remove.15d3a2d0805a35b24ff490332e0a4c40 @ 00102b0c ---- */

undefined8 st21nfc_remove_15d3a2d0805a35b24ff490332e0a4c40(long param_1)

{
  undefined8 *in_x18;
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0xb8);
  uVar1 = *(ulong *)(lVar2 + 0x3b0);
  if (((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) && (*(char *)(lVar2 + 0x3a8) != '\0')) {
    clk_disable(uVar1);
    clk_unprepare(uVar1);
    *(undefined1 *)(lVar2 + 0x3a8) = 0;
  }
  misc_deregister(lVar2 + 0xb0);
  if ((*(ulong *)(lVar2 + 0x3d8) != 0) && (*(ulong *)(lVar2 + 0x3d8) < 0xfffffffffffff001)) {
    sysfs_remove_file_ns(param_1 + 0x20,&dev_attr_power_stats,0);
    devm_gpiod_put(param_1 + 0x20,*(undefined8 *)(lVar2 + 0x3d8));
  }
  param_1 = param_1 + 0x20;
  sysfs_remove_group(param_1,&st21nfc_attr_grp);
  if (*(long *)(lVar2 + 0x208) != 0) {
    wakeup_source_unregister();
    *(undefined8 *)(lVar2 + 0x208) = 0;
  }
  if ((*(ulong *)(lVar2 + 0x3c8) != 0) && (*(ulong *)(lVar2 + 0x3c8) < 0xfffffffffffff001)) {
    devm_gpiod_put(param_1);
  }
  if ((*(ulong *)(lVar2 + 0x3c0) != 0) && (*(ulong *)(lVar2 + 0x3c0) < 0xfffffffffffff001)) {
    devm_gpiod_put(param_1);
  }
  if ((*(ulong *)(lVar2 + 0x3d0) != 0) && (*(ulong *)(lVar2 + 0x3d0) < 0xfffffffffffff001)) {
    devm_gpiod_put(param_1);
  }
  return 0;
}



/* ---- st21nfc_pstate_wq.15d3a2d0805a35b24ff490332e0a4c40 @ 00102c1c ---- */

void st21nfc_pstate_wq_15d3a2d0805a35b24ff490332e0a4c40(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar10 = ktime_get_with_offset(1);
  lVar10 = lVar10 / 1000000;
  iVar9 = gpiod_get_value(*(undefined8 *)(param_1 + 0x108));
  uVar6 = *(uint *)(param_1 + -0xb8);
  bVar7 = iVar9 != 0;
  if (*(char *)(param_1 + 0x110) != '\0') {
    bVar7 = iVar9 == 0;
  }
  uVar3 = (uint)bVar7;
  mutex_lock(param_1 + -0x288);
  if (uVar6 == uVar3) {
    if ((uVar3 != 0) || (*(long *)(param_1 + -0x98) != 0)) {
      _printk("<3>%s Error: Switched from %s to %s!: %llx, ntf=%d\n","st21nfc_power_stats_switch",(&st21nfc_power_state_name)[uVar3],
              (&st21nfc_power_state_name)[uVar3],lVar10,0);
      lVar10 = -0x28;
      if (uVar3 == 0) {
        lVar10 = -0x38;
      }
      *(long *)(param_1 + lVar10) = *(long *)(param_1 + lVar10) + 1;
      goto LAB_00102d9c;
    }
    if (2 < uVar6) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102cb0);
      (*pcVar8)();
    }
  }
  else {
    if ((uVar6 == 0) || (uVar3 == 0)) {
      if ((uVar3 == 0) && (uVar6 == 2)) {
        *(long *)(param_1 + -0x30) = *(long *)(param_1 + -0x30) + 1;
        goto LAB_00102d38;
      }
    }
    else {
      *(long *)(param_1 + -0x40) = *(long *)(param_1 + -0x40) + 1;
    }
    if (2 < uVar6) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0x5512,0x102dc4);
      (*pcVar8)();
    }
  }
LAB_00102d38:
  _printk("<7>%s Switching from %s to %s: %llx, ntf=%d\n","st21nfc_power_stats_switch",(&st21nfc_power_state_name)[uVar6],
          (&st21nfc_power_state_name)[uVar3],lVar10,0);
  *(uint *)(param_1 + -0xb8) = uVar3;
  plVar1 = (long *)(param_1 + -0xa8 + (ulong)uVar3 * 0x20);
  lVar2 = param_1 + -0xa8 + (ulong)uVar6 * 0x20;
  lVar4 = *(long *)(lVar2 + 8);
  lVar5 = *(long *)(lVar2 + 0x10);
  *(long *)(lVar2 + 0x18) = lVar10;
  plVar1[2] = lVar10;
  *plVar1 = *plVar1 + 1;
  *(long *)(lVar2 + 8) = (lVar10 - lVar5) + lVar4;
LAB_00102d9c:
  mutex_unlock(param_1 + -0x288);
  return;
}



/* ---- st21nfc_dev_power_stats_handler.15d3a2d0805a35b24ff490332e0a4c40 @ 00102dc4 ---- */

undefined8
st21nfc_dev_power_stats_handler_15d3a2d0805a35b24ff490332e0a4c40(undefined8 param_1,long param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  queue_work_on(0x20,*(undefined8 *)(param_2 + 0x2c8),param_2 + 0x2d0);
  return 1;
}



/* ---- st21nfc_clock_select @ 00102df8 ---- */

undefined8 st21nfc_clock_select(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = clk_get(*(long *)(param_1 + 0xa8) + 0x20,"nfc_ref_clk");
  uVar3 = 0;
  *(ulong *)(param_1 + 0x3b0) = uVar2;
  if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      iVar1 = clk_prepare(uVar2);
      if (iVar1 == 0) {
        uVar3 = clk_enable(uVar2);
        if ((int)uVar3 == 0) {
          *(undefined1 *)(param_1 + 0x3a8) = 1;
        }
        else {
          clk_unprepare(uVar2);
          uVar3 = 0xffffffea;
        }
      }
      else {
        uVar3 = 0xffffffea;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ---- st21nfc_ping @ 00102e98 ---- */

undefined4 st21nfc_ping(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *in_x18;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(param_1 + 0x211) == '\0') {
    pcVar1 = (char *)(param_1 + 0x100);
    i2c_transfer_buffer_flags(*(undefined8 *)(param_1 + 0xa8),pcVar1,1,1);
    gpiod_set_value(*(undefined8 *)(param_1 + 0x3c8),0);
    msleep(0x14);
    gpiod_set_value(*(undefined8 *)(param_1 + 0x3c8),1);
    usleep_range_state(10000,11000,2);
    gpiod_set_value(*(undefined8 *)(param_1 + 0x3c8),0);
    msleep(0x14);
    gpiod_set_value(*(undefined8 *)(param_1 + 0x3c8),1);
    _printk("<6>%s done Double Pulse Request\n","st21nfc_ping");
    msleep(10);
    pcVar2 = (char *)(param_1 + 0x101);
    iVar10 = -4;
    uVar9 = 0xffffffed;
    do {
      while( true ) {
        iVar5 = gpiod_get_value(*(undefined8 *)(param_1 + 0x3c0));
        if (iVar5 == 0) {
          return uVar9;
        }
        iVar5 = i2c_transfer_buffer_flags(*(undefined8 *)(param_1 + 0xa8),pcVar1,3,1);
        if (iVar5 != 3) break;
        if (*pcVar1 == '~') {
          if (*pcVar2 == '~') {
            cVar3 = *(char *)(param_1 + 0x102);
            if (cVar3 == '~') {
              _printk("<4>%s Read 7E7E7E... header, IRQ always high ? Stop\n","st21nfc_ping");
              return uVar9;
            }
            *(char *)(param_1 + 0x100) = cVar3;
            uVar6 = i2c_transfer_buffer_flags(*(undefined8 *)(param_1 + 0xa8),pcVar2,2,1);
            if (uVar6 != 2) {
              puVar7 = "<4>%s Could not read rest of header after 7E7E: %d\n";
              goto LAB_001030ac;
            }
          }
          else {
            *(char *)(param_1 + 0x100) = *pcVar2;
            *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_1 + 0x102);
            uVar6 = i2c_transfer_buffer_flags
                              (*(undefined8 *)(param_1 + 0xa8),(char *)(param_1 + 0x102),1,1);
            if (uVar6 != 1) {
              puVar7 = &UNK_00100f16;
              goto LAB_001030ac;
            }
          }
        }
        uVar6 = i2c_transfer_buffer_flags
                          (*(undefined8 *)(param_1 + 0xa8),(undefined1 *)(param_1 + 0x103),
                           *(undefined1 *)(param_1 + 0x102),1);
        if (uVar6 != *(byte *)(param_1 + 0x102)) {
          puVar7 = "<4>%s Could not read payload: %d\n";
          goto LAB_001030ac;
        }
        _printk("<6>%s Read message (%d bytes): %02x %02x %02x %02x ...\n","st21nfc_ping",uVar6 + 3,*pcVar1,*pcVar2,uVar6,
                *(undefined1 *)(param_1 + 0x103));
        uVar8 = uVar9;
        if ((*pcVar1 == '`') && (uVar8 = 0, *pcVar2 != '\0')) {
          uVar8 = uVar9;
        }
        msleep(5);
        bVar4 = iVar10 == -1;
        iVar10 = iVar10 + 1;
        uVar9 = uVar8;
        if (bVar4) {
          return uVar8;
        }
      }
      _printk("<4>%s Could not read header: %d\n","st21nfc_ping",iVar5);
      bVar4 = iVar10 != -1;
      iVar10 = iVar10 + 1;
    } while (bVar4);
  }
  else {
    puVar7 = "<3>%s : device already opened ret= %d\n";
    uVar6 = 0xfffffff0;
    uVar9 = 0xfffffff0;
LAB_001030ac:
    _printk(puVar7,"st21nfc_ping",uVar6);
  }
  return uVar9;
}



/* ---- st21nfc_dev_read.15d3a2d0805a35b24ff490332e0a4c40 @ 00103130 ---- */

ulong st21nfc_dev_read_15d3a2d0805a35b24ff490332e0a4c40
                (long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  void *__s;
  int iVar2;
  uint uVar3;
  undefined8 *in_x18;
  long lVar4;
  ulong uVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_3 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0xd8);
  if (0x103 < param_3) {
    param_3 = 0x104;
  }
  iVar2 = gpiod_get_value(*(undefined8 *)(lVar4 + 0x310));
  if (iVar2 == 0) {
    _printk("<6>%s : read called but no IRQ.\n","st21nfc_dev_read");
    __s = (void *)(lVar4 + 0x50);
    memset(__s,0x7e,param_3);
    __check_object_size(__s,param_3,1);
    lVar4 = _copy_to_user(param_2,__s,param_3);
    uVar5 = param_3;
  }
  else {
    mutex_lock(lVar4 + -0x98);
    lVar1 = lVar4 + 0x50;
    uVar3 = i2c_transfer_buffer_flags(*(undefined8 *)(lVar4 + -8),lVar1,param_3 & 0xffffffff,1);
    mutex_unlock(lVar4 + -0x98);
    if ((int)uVar3 < 0) {
      _printk("<3>%s: i2c_master_recv returned %d\n","st21nfc_dev_read",uVar3);
      return (long)(int)uVar3;
    }
    uVar5 = (ulong)uVar3;
    if (param_3 < uVar5) {
      _printk("<3>%s: received too many bytes from i2c (%d)\n","st21nfc_dev_read",uVar3);
      return 0xfffffffffffffffb;
    }
    __check_object_size(lVar1,uVar5,1);
    lVar4 = _copy_to_user(param_2,lVar1,uVar5);
  }
  if (lVar4 != 0) {
    _printk("<4>%s : failed to copy to user space\n","st21nfc_dev_read");
    uVar5 = 0xfffffffffffffff2;
  }
  return uVar5;
}



/* ---- st21nfc_dev_write.15d3a2d0805a35b24ff490332e0a4c40 @ 001032a8 ---- */

long st21nfc_dev_write_15d3a2d0805a35b24ff490332e0a4c40
               (long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (0x103 < param_3) {
    param_3 = 0x104;
  }
  lVar3 = *(long *)(param_1 + 0xd8);
  uVar2 = memdup_user(param_2,param_3);
  if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
    _printk("<3>%s : memdup_user failed\n","st21nfc_dev_write");
    lVar3 = -0xe;
  }
  else {
    iVar1 = i2c_transfer_buffer_flags(*(undefined8 *)(lVar3 + -8),uVar2,param_3 & 0xffffffff,0);
    if (param_3 != (long)iVar1) {
      _printk("<3>%s : i2c_master_send returned %d\n","st21nfc_dev_write",iVar1);
      iVar1 = -5;
    }
    kfree(uVar2);
    lVar3 = (long)iVar1;
  }
  return lVar3;
}



/* ---- st21nfc_poll.15d3a2d0805a35b24ff490332e0a4c40 @ 0010336c ---- */

undefined8 st21nfc_poll_15d3a2d0805a35b24ff490332e0a4c40(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar5 = *(long *)(param_1 + 0xd8);
  if (param_2 != (undefined8 *)0x0) {
    pcVar3 = (code *)*param_2;
    if (lVar5 + -0xb0 != 0 && pcVar3 != (code *)0x0) {
      __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,&DAT_00100390);
      (*pcVar3)(param_1,lVar5 + -0xb0,param_2);
    }
  }
  iVar1 = gpiod_get_value(*(undefined8 *)(lVar5 + 0x310));
  mutex_lock(lVar5 + -0x38);
  uVar2 = _raw_spin_lock_irqsave(lVar5 + 0x164);
  if (iVar1 == 0) {
    if (*(char *)(lVar5 + 0x154) == '\0') {
      *(undefined1 *)(lVar5 + 0x154) = 1;
      enable_irq(*(undefined4 *)(*(long *)(lVar5 + -8) + 0x3b4));
    }
    uVar4 = 0;
  }
  else if (*(char *)(lVar5 + 0x154) == '\0') {
    uVar4 = 0x41;
  }
  else {
    disable_irq_nosync(*(undefined4 *)(*(long *)(lVar5 + -8) + 0x3b4));
    uVar4 = 0x41;
    *(undefined1 *)(lVar5 + 0x154) = 0;
  }
  _raw_spin_unlock_irqrestore(lVar5 + 0x164,uVar2);
  mutex_unlock(lVar5 + -0x38);
  return uVar4;
}



/* ---- st21nfc_dev_ioctl.15d3a2d0805a35b24ff490332e0a4c40 @ 00103480 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long st21nfc_dev_ioctl_15d3a2d0805a35b24ff490332e0a4c40(long param_1,uint param_2,int *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *in_x18;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pcVar3 = st21nfc_st54spi_cb;
  if ((param_2 & 0xff00) != 0xea00) {
    return -0x19;
  }
  lVar14 = *(long *)(param_1 + 0xd8);
  if ((int)param_2 < 0) {
    puVar2 = (undefined8 *)sp_el0;
    uVar10 = (ulong)(param_2 >> 0x10 & 0x3fff);
    if (((*(byte *)((long)puVar2 + 0x3e) >> 5 & 1) != 0) ||
       (piVar11 = param_3, ((uint)*puVar2 >> 0x1a & 1) != 0)) {
      piVar11 = (int *)((ulong)param_3 & ((long)param_3 << 8) >> 8);
    }
    bVar4 = CARRY8((ulong)piVar11,uVar10);
    uVar10 = (long)piVar11 + uVar10;
    uVar1 = 0;
    if (!bVar4 || uVar10 == 0) {
      uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
      uVar10 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar10,~uVar1) || CARRY8(uVar10 + ~uVar1,(ulong)bVar4)) && uVar10 != uVar1 + !bVar4)
    {
      return -0xe;
    }
  }
  if ((param_2 >> 0x1e & 1) != 0) {
    puVar2 = (undefined8 *)sp_el0;
    uVar10 = (ulong)(param_2 >> 0x10 & 0x3fff);
    if (((*(byte *)((long)puVar2 + 0x3e) >> 5 & 1) != 0) ||
       (piVar11 = param_3, ((uint)*puVar2 >> 0x1a & 1) != 0)) {
      piVar11 = (int *)((ulong)param_3 & ((long)param_3 << 8) >> 8);
    }
    bVar4 = CARRY8((ulong)piVar11,uVar10);
    uVar10 = (long)piVar11 + uVar10;
    uVar1 = 0;
    if (!bVar4 || uVar10 == 0) {
      uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
      uVar10 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar10,~uVar1) || CARRY8(uVar10 + ~uVar1,(ulong)bVar4)) && uVar10 != uVar1 + !bVar4)
    {
      return -0xe;
    }
  }
  lVar12 = lVar14 + -0xb0;
  switch(param_2) {
  case 0x8004ea01:
code_r0x001035a4:
    iVar5 = gpiod_get_value(*(undefined8 *)(lVar14 + 0x310));
    uVar7 = (uint)(iVar5 != 0);
    goto LAB_001035c0;
  case 0x8004ea02:
code_r0x00103750:
    _printk("<6>%s Double Pulse Request\n","st21nfc_dev_ioctl");
    pcVar3 = st21nfc_st54spi_cb;
    uVar10 = *(ulong *)(lVar14 + 0x318);
    if ((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) {
      if (st21nfc_st54spi_cb != (code *)0x0) {
        __cfi_slowpath_diag(0x77079828fb981a70,st21nfc_st54spi_cb,&DAT_001003b0);
        (*pcVar3)(1,st21nfc_st54spi_data);
        uVar10 = *(ulong *)(lVar14 + 0x318);
      }
      gpiod_set_value(uVar10,0);
      msleep(0x14);
      gpiod_set_value(*(undefined8 *)(lVar14 + 0x318),1);
      usleep_range_state(10000,11000,2);
      gpiod_set_value(*(undefined8 *)(lVar14 + 0x318),0);
      msleep(0x14);
      gpiod_set_value(*(undefined8 *)(lVar14 + 0x318),1);
      _printk("<6>%s done Double Pulse Request\n","st21nfc_dev_ioctl");
      pcVar3 = st21nfc_st54spi_cb;
      if (st21nfc_st54spi_cb != (code *)0x0) {
        __cfi_slowpath_diag(0x77079828fb981a70,st21nfc_st54spi_cb,&DAT_001003d0);
        (*pcVar3)(0,st21nfc_st54spi_data);
      }
    }
    uVar7 = 0;
    *(undefined4 *)(lVar14 + 0x16c) = 0;
    goto LAB_001035c0;
  case 0x8004ea03:
code_r0x001038f8:
    _printk("<6> ### ST21NFC_SET_POLARITY_RISING ###\n");
    uVar6 = 1;
    break;
  case 0x8004ea04:
  case 0x8004ea06:
    goto code_r0x0010391c;
  case 0x8004ea05:
code_r0x00103734:
    _printk("<6> ### ST21NFC_SET_POLARITY_HIGH ###\n");
    uVar6 = 4;
    break;
  case 0x8004ea07:
code_r0x001035bc:
    uVar7 = *(uint *)(lVar14 + 0x334);
    goto LAB_001035c0;
  case 0x8004ea08:
code_r0x00103784:
    _printk("<6>%s Recovery Request\n","st21nfc_dev_ioctl");
    lVar13 = lVar14 + -0x38;
    mutex_lock(lVar13);
    uVar10 = *(ulong *)(lVar14 + 0x318);
    if ((uVar10 != 0) && (uVar10 < 0xfffffffffffff001)) {
      if (*(char *)(lVar14 + 0x160) != '\0') {
        devm_free_irq(*(long *)(lVar14 + -8) + 0x20,*(undefined4 *)(*(long *)(lVar14 + -8) + 0x3b4),
                      lVar12);
        uVar10 = *(ulong *)(lVar14 + 0x318);
        *(undefined1 *)(lVar14 + 0x160) = 0;
      }
      gpiod_set_value(uVar10,0);
      usleep_range_state(10000,11000,2);
      iVar5 = gpiod_direction_output(*(undefined8 *)(lVar14 + 0x310),1);
      if (iVar5 != 0) {
        _printk("<3>%s : gpiod_direction_output failed\n","st21nfc_dev_ioctl");
        mutex_unlock(lVar13);
        uVar7 = 0xffffffed;
        goto LAB_001035c0;
      }
      gpiod_set_value(*(undefined8 *)(lVar14 + 0x310),1);
      usleep_range_state(10000,11000,2);
      gpiod_set_value(*(undefined8 *)(lVar14 + 0x318),1);
      _printk("<6>%s done Pulse Request\n","st21nfc_dev_ioctl");
    }
    msleep(0x14);
    gpiod_set_value(*(undefined8 *)(lVar14 + 0x310),0);
    msleep(0x14);
    gpiod_set_value(*(undefined8 *)(lVar14 + 0x310),1);
    msleep(0x14);
    gpiod_set_value(*(undefined8 *)(lVar14 + 0x310),0);
    msleep(0x14);
    _printk("<6>%s Recovery procedure finished\n","st21nfc_dev_ioctl");
    iVar5 = gpiod_direction_input(*(undefined8 *)(lVar14 + 0x310));
    if (iVar5 != 0) {
      _printk("<3>%s : gpiod_direction_input failed\n","st21nfc_dev_ioctl");
    }
    lVar8 = *(long *)(lVar14 + -8);
    *(undefined1 *)(lVar14 + 0x154) = 1;
    iVar5 = devm_request_threaded_irq
                      (lVar8 + 0x20,*(undefined4 *)(lVar8 + 0x3b4),
                       st21nfc_dev_irq_handler_15d3a2d0805a35b24ff490332e0a4c40_cfi_jt,0,
                       *(undefined4 *)(lVar14 + 0x334),lVar8 + 4,lVar12);
    if (iVar5 != 0) {
      _printk("<3>%s : devm_request_irq failed\n","st21nfc_dev_ioctl");
      mutex_unlock(lVar13);
      return -0x13;
    }
    *(undefined1 *)(lVar14 + 0x160) = 1;
    st21nfc_disable_irq(lVar12);
    mutex_unlock(lVar13);
    uVar7 = 0;
    goto LAB_001035c0;
  default:
    switch(param_2) {
    case 0xea01:
      goto code_r0x001035a4;
    case 0xea02:
      goto code_r0x00103750;
    case 0xea03:
      goto code_r0x001038f8;
    case 0xea04:
    case 0xea06:
      break;
    case 0xea05:
      goto code_r0x00103734;
    case 0xea07:
      goto code_r0x001035bc;
    case 0xea08:
      goto code_r0x00103784;
    default:
      if (param_2 == 0x4004ea09) {
        puVar2 = (undefined8 *)sp_el0;
        if (((*(byte *)((long)puVar2 + 0x3e) >> 5 & 1) != 0) ||
           (piVar11 = param_3, ((uint)*puVar2 >> 0x1a & 1) != 0)) {
          piVar11 = (int *)((ulong)param_3 & ((long)param_3 << 8) >> 8);
        }
        bVar4 = (int *)0xfffffffffffffffb < piVar11;
        piVar11 = piVar11 + 1;
        uVar10 = 0;
        if (!bVar4 || piVar11 == (int *)0x0) {
          uVar10 = 0x7fffffffff;
        }
        if (bVar4) {
          piVar11 = (int *)0xffffffffffffffff;
        }
        if ((CARRY8((ulong)piVar11,~uVar10) || CARRY8((long)piVar11 + ~uVar10,(ulong)bVar4)) &&
            piVar11 != (int *)(uVar10 + !bVar4)) {
          uVar7 = 0xfffffff2;
        }
        else {
          if (((ulong)param_3 & ((long)param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
            param_3 = (int *)0x0;
          }
          if (((uint)_cpu_hwcaps >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
              uVar1 = daif;
              daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
          }
          uVar7 = 0;
          iVar5 = *param_3;
          if (((uint)_cpu_hwcaps >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
              uVar1 = daif;
              daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar10;
          }
          if (st21nfc_st54spi_cb != (code *)0x0) {
            __cfi_slowpath_diag(0x77079828fb981a70,st21nfc_st54spi_cb,&DAT_001003f0);
            uVar9 = 2;
            if (iVar5 != 0) {
              uVar9 = 3;
            }
            (*pcVar3)(uVar9,st21nfc_st54spi_data);
            uVar7 = 0;
          }
        }
        goto LAB_001035c0;
      }
    }
    goto code_r0x0010391c;
  }
  st21nfc_loc_set_polaritymode(lVar12,uVar6);
  uVar7 = 0;
LAB_001035c0:
  return (long)(int)uVar7;
code_r0x0010391c:
  _printk("<3>%s bad ioctl %u\n","st21nfc_dev_ioctl",param_2);
  uVar7 = 0xffffffea;
  goto LAB_001035c0;
}



/* ---- st21nfc_dev_open.15d3a2d0805a35b24ff490332e0a4c40 @ 00103ad8 ---- */

undefined8 st21nfc_dev_open_15d3a2d0805a35b24ff490332e0a4c40(undefined8 param_1,long param_2)

{
  undefined8 *in_x18;
  undefined8 uVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(*(long *)(param_2 + 0xd8) + 0x161) == '\0') {
    uVar1 = 0;
    *(undefined1 *)(*(long *)(param_2 + 0xd8) + 0x161) = 1;
  }
  else {
    uVar1 = 0xfffffff0;
    _printk("<3>%s : device already opened ret= %d\n","st21nfc_dev_open",0xfffffff0);
  }
  return uVar1;
}



/* ---- st21nfc_release.15d3a2d0805a35b24ff490332e0a4c40 @ 00103b3c ---- */

undefined8 st21nfc_release_15d3a2d0805a35b24ff490332e0a4c40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_2 + 0xd8);
  if (*(char *)(lVar2 + 0x160) != '\0') {
    uVar1 = _raw_spin_lock_irqsave(lVar2 + 0x164);
    if (*(char *)(lVar2 + 0x154) != '\0') {
      disable_irq_nosync(*(undefined4 *)(*(long *)(lVar2 + -8) + 0x3b4));
      *(undefined1 *)(lVar2 + 0x154) = 0;
    }
    _raw_spin_unlock_irqrestore(lVar2 + 0x164,uVar1);
    devm_free_irq(*(long *)(lVar2 + -8) + 0x20,*(undefined4 *)(*(long *)(lVar2 + -8) + 0x3b4),
                  lVar2 + -0xb0);
    *(undefined1 *)(lVar2 + 0x160) = 0;
  }
  *(undefined1 *)(lVar2 + 0x161) = 0;
  return 0;
}



/* ---- _copy_to_user @ 00103bd0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _copy_to_user(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar2 = (undefined8 *)sp_el0;
  uVar3 = (long)(param_1 << 8) >> 8;
  if (((*(byte *)((long)puVar2 + 0x3e) >> 5 & 1) != 0) ||
     (uVar5 = param_1, ((uint)*puVar2 >> 0x1a & 1) != 0)) {
    uVar5 = param_1 & uVar3;
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
    if ((param_1 & uVar3 & 0xffffff8000000000) != 0) {
      param_1 = 0;
    }
    param_3 = __arch_copy_to_user(param_1);
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
  return param_3;
}



/* ---- st21nfc_disable_irq @ 00103d44 ---- */

void st21nfc_disable_irq(long param_1)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = _raw_spin_lock_irqsave(param_1 + 0x214);
  if (*(char *)(param_1 + 0x204) != '\0') {
    disable_irq_nosync(*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3b4));
    *(undefined1 *)(param_1 + 0x204) = 0;
  }
  _raw_spin_unlock_irqrestore(param_1 + 0x214,uVar1);
  return;
}



/* ---- st21nfc_loc_set_polaritymode @ 00103dac ---- */

void st21nfc_loc_set_polaritymode(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar4 = *(long *)(param_1 + 0xa8);
  iVar1 = param_2;
  if (param_2 != 4) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x3e4) = param_2;
  if (*(char *)(param_1 + 0x210) != '\0') {
    devm_free_irq(lVar4 + 0x20,*(undefined4 *)(lVar4 + 0x3b4),param_1);
    *(undefined1 *)(param_1 + 0x210) = 0;
  }
  iVar1 = irq_set_irq_type(*(undefined4 *)(lVar4 + 0x3b4),iVar1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x204) = 1;
    iVar1 = devm_request_threaded_irq
                      (lVar4 + 0x20,*(undefined4 *)(lVar4 + 0x3b4),
                       st21nfc_dev_irq_handler_15d3a2d0805a35b24ff490332e0a4c40_cfi_jt,0,
                       *(undefined4 *)(param_1 + 0x3e4),lVar4 + 4,param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x210) = 1;
      uVar2 = _raw_spin_lock_irqsave(param_1 + 0x214);
      if (*(char *)(param_1 + 0x204) != '\0') {
        disable_irq_nosync(*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3b4));
        *(undefined1 *)(param_1 + 0x204) = 0;
      }
      _raw_spin_unlock_irqrestore(param_1 + 0x214,uVar2);
      return;
    }
    puVar3 = "<3>%s : devm_request_irq failed\n";
  }
  else {
    puVar3 = "<3>%s : set_irq_type failed\n";
  }
  _printk(puVar3,"st21nfc_loc_set_polaritymode");
  return;
}



/* ---- st21nfc_dev_irq_handler.15d3a2d0805a35b24ff490332e0a4c40 @ 00103eac ---- */

undefined8 st21nfc_dev_irq_handler_15d3a2d0805a35b24ff490332e0a4c40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(long *)(param_2 + 0x208) != 0) {
    pm_wakeup_ws_event(*(long *)(param_2 + 0x208),500,0);
  }
  uVar1 = _raw_spin_lock_irqsave(param_2 + 0x214);
  if (*(char *)(param_2 + 0x204) != '\0') {
    disable_irq_nosync(*(undefined4 *)(*(long *)(param_2 + 0xa8) + 0x3b4));
    *(undefined1 *)(param_2 + 0x204) = 0;
  }
  _raw_spin_unlock_irqrestore(param_2 + 0x214,uVar1);
  __wake_up(param_2,3,1,0);
  return 1;
}



/* ---- i2c_addr_show.15d3a2d0805a35b24ff490332e0a4c40 @ 00103f40 ---- */

long i2c_addr_show_15d3a2d0805a35b24ff490332e0a4c40
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (param_1 == 0x20) {
    return -0x13;
  }
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"0x%.2x\n",*(undefined2 *)(param_1 + -0x1e));
  return (long)iVar1;
}



/* ---- i2c_addr_store.15d3a2d0805a35b24ff490332e0a4c40 @ 00103f94 ---- */

undefined8
i2c_addr_store_15d3a2d0805a35b24ff490332e0a4c40
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_40 = 0;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0xa8) == 0)) {
    param_4 = 0;
  }
  else {
    iVar1 = kstrtoll(param_3,10,&local_40);
    if (iVar1 == 0) {
      mutex_lock(lVar2 + 0x18);
      *(short *)(*(long *)(lVar2 + 0xa8) + 2) = (short)local_40;
      mutex_unlock(lVar2 + 0x18);
    }
    else {
      param_4 = 0xffffffffffffffea;
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- version_show.15d3a2d0805a35b24ff490332e0a4c40 @ 00104050 ---- */

long version_show_15d3a2d0805a35b24ff490332e0a4c40
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%s\n","2.2.0.19");
  return (long)iVar1;
}



/* ---- power_stats_show.15d3a2d0805a35b24ff490332e0a4c40 @ 00104090 ---- */

long power_stats_show_15d3a2d0805a35b24ff490332e0a4c40
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *in_x18;
  long lVar6;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar6 = *(long *)(param_1 + 0x98);
  mutex_lock(lVar6 + 0x48);
  *(undefined4 *)(lVar6 + 0x300) = *(undefined4 *)(lVar6 + 0x218);
  *(undefined8 *)(lVar6 + 0x388) = *(undefined8 *)(lVar6 + 0x2a8);
  *(undefined8 *)(lVar6 + 0x390) = *(undefined8 *)(lVar6 + 0x2b0);
  *(undefined8 *)(lVar6 + 0x398) = *(undefined8 *)(lVar6 + 0x2b8);
  *(undefined8 *)(lVar6 + 0x3a0) = *(undefined8 *)(lVar6 + 0x2c0);
  *(undefined8 *)(lVar6 + 0x368) = *(undefined8 *)(lVar6 + 0x288);
  *(undefined8 *)(lVar6 + 0x370) = *(undefined8 *)(lVar6 + 0x290);
  *(undefined8 *)(lVar6 + 0x378) = *(undefined8 *)(lVar6 + 0x298);
  *(undefined8 *)(lVar6 + 0x380) = *(undefined8 *)(lVar6 + 0x2a0);
  *(undefined8 *)(lVar6 + 0x360) = *(undefined8 *)(lVar6 + 0x280);
  *(undefined8 *)(lVar6 + 0x358) = *(undefined8 *)(lVar6 + 0x278);
  *(undefined8 *)(lVar6 + 0x350) = *(undefined8 *)(lVar6 + 0x270);
  *(undefined8 *)(lVar6 + 0x348) = *(undefined8 *)(lVar6 + 0x268);
  *(undefined8 *)(lVar6 + 0x340) = *(undefined8 *)(lVar6 + 0x260);
  *(undefined8 *)(lVar6 + 0x338) = *(undefined8 *)(lVar6 + 600);
  *(undefined8 *)(lVar6 + 0x330) = *(undefined8 *)(lVar6 + 0x250);
  *(undefined8 *)(lVar6 + 0x328) = *(undefined8 *)(lVar6 + 0x248);
  *(undefined8 *)(lVar6 + 800) = *(undefined8 *)(lVar6 + 0x240);
  *(undefined8 *)(lVar6 + 0x318) = *(undefined8 *)(lVar6 + 0x238);
  *(undefined8 *)(lVar6 + 0x310) = *(undefined8 *)(lVar6 + 0x230);
  *(undefined8 *)(lVar6 + 0x308) = *(undefined8 *)(lVar6 + 0x228);
  mutex_unlock(lVar6 + 0x48);
  lVar2 = ktime_get_with_offset(1);
  iVar1 = *(int *)(lVar6 + 0x300);
  lVar3 = *(long *)(lVar6 + 0x310);
  lVar2 = lVar2 / 1000000;
  if (iVar1 == 0) {
    lVar3 = (lVar3 + lVar2) - *(long *)(lVar6 + 0x318);
    lVar4 = *(long *)(lVar6 + 0x330);
    lVar5 = *(long *)(lVar6 + 0x350);
  }
  else {
    lVar4 = *(long *)(lVar6 + 0x330);
    if (iVar1 == 1) {
      lVar4 = (lVar4 + lVar2) - *(long *)(lVar6 + 0x338);
      lVar5 = *(long *)(lVar6 + 0x350);
    }
    else {
      lVar5 = *(long *)(lVar6 + 0x350);
      if (iVar1 == 2) {
        lVar5 = (lVar5 + lVar2) - *(long *)(lVar6 + 0x358);
      }
    }
  }
  iVar1 = scnprintf(param_3,0x1000,
                    "NFC subsystem\nIdle mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\nActive mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\nActive Reader/Writer mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\n\nError transition header --> payload state machine: 0x%llx\nError transition from an Active state when not in Idle state: 0x%llx\nError transition from Idle state to Idle state: 0x%llx\nWarning transition from Active Reader/Writer state to Idle state: 0x%llx\nError transition from Active state to Active state: 0x%llx\nError transition from Idle state to Active state with notification: 0x%llx\nError transition from Active Reader/Writer state to Active Reader/Writer state: 0x%llx\nError transition from Idle state to Active Reader/Writer state with notification: 0x%llx\n\nTotal uptime: 0x%llx Cumulative modes time: 0x%llx\n"
                    ,*(undefined8 *)(lVar6 + 0x308),lVar3,*(undefined8 *)(lVar6 + 0x318),
                    *(undefined8 *)(lVar6 + 800),*(undefined8 *)(lVar6 + 0x328),lVar4,
                    *(undefined8 *)(lVar6 + 0x338),*(undefined8 *)(lVar6 + 0x340),
                    *(undefined8 *)(lVar6 + 0x348),lVar5,*(undefined8 *)(lVar6 + 0x358),
                    *(undefined8 *)(lVar6 + 0x360),*(undefined8 *)(lVar6 + 0x368),
                    *(undefined8 *)(lVar6 + 0x370),*(undefined8 *)(lVar6 + 0x378),
                    *(undefined8 *)(lVar6 + 0x380),*(undefined8 *)(lVar6 + 0x388),
                    *(undefined8 *)(lVar6 + 0x390),*(undefined8 *)(lVar6 + 0x398),
                    *(undefined8 *)(lVar6 + 0x3a0),lVar2,lVar3 + lVar4 + lVar5);
  return (long)iVar1;
}



/* ---- st21nfc_suspend.15d3a2d0805a35b24ff490332e0a4c40 @ 0010429c ---- */

undefined8 st21nfc_suspend_15d3a2d0805a35b24ff490332e0a4c40(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  if ((*(char *)(lVar3 + 0x204) != '\0') &&
     (iVar1 = irq_set_irq_wake(*(undefined4 *)(param_1 + 0x394),1), iVar1 == 0)) {
    *(undefined1 *)(lVar3 + 0x205) = 1;
  }
  if ((*(ulong *)(lVar3 + 0x3d8) != 0) && (*(ulong *)(lVar3 + 0x3d8) < 0xfffffffffffff001)) {
    uVar2 = gpiod_get_value();
    *(undefined4 *)(lVar3 + 0x224) = uVar2;
  }
  return 0;
}



/* ---- st21nfc_resume.15d3a2d0805a35b24ff490332e0a4c40 @ 00104304 ---- */

undefined8 st21nfc_resume_15d3a2d0805a35b24ff490332e0a4c40(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x98);
  if ((*(char *)(lVar2 + 0x205) != '\0') &&
     (iVar1 = irq_set_irq_wake(*(undefined4 *)(param_1 + 0x394),0), iVar1 == 0)) {
    *(undefined1 *)(lVar2 + 0x205) = 0;
  }
  if (*(ulong *)(lVar2 + 0x3d8) < 0xfffffffffffff001) {
    iVar1 = gpiod_get_value();
    if ((*(int *)(lVar2 + 0x224) == iVar1) && ((*(int *)(lVar2 + 0x218) != 0 || (iVar1 == 0)))) {
      if (*(int *)(lVar2 + 0x218) != 1) {
        return 0;
      }
      if (iVar1 != 0) {
        return 0;
      }
    }
    queue_work_on(0x20,*(undefined8 *)(lVar2 + 0x2c8),lVar2 + 0x2d0);
  }
  return 0;
}



/* ---- init_module @ 001043f4 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>Loading st21nfc driver %s\n","2.2.0.19");
  i2c_register_driver(&__this_module,&st21nfc_driver);
  return;
}



/* ---- cleanup_module @ 0010443c ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>Unloading st21nfc driver\n");
  i2c_del_driver(&st21nfc_driver);
  return;
}


/* functions: 26 ok, 0 failed */
