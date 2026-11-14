/* Decompiled with Ghidra from mi_thermal_interface.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] thermal_check_panel
// [.rodata] screen_state
// [.rodata] poor_modem_limit
// [.rodata] 3input param error, can not prase param

// [.rodata] ambient_sensor
// [.rodata] 3%s:can not find thermal kobj

// [.rodata] 3%s:can not find thermal_sd

// [.rodata] boost
// [.rodata] cpu_nolimit_temp
// [.rodata] mi_thermal_interface_init
// [.rodata] thermal-message
// [.rodata] board-sensor
// [.rodata] create_thermal_message_node
// [.rodata] ambient_sensor_temp
// [.rodata] ABT-SENSOR
// [.rodata] cpu%u %u
// [.rodata] Unknown
// [.rodata] modem_level
// [.rodata] modem_limit
// [.rodata] 3%s:prim_panel is NULL Failed to register for panel events

// [.rodata] 3%s cpu=%d

// [.rodata] 4%s: table has duplicate entries

// [.rodata] board_sensor_other_temp
// [.rodata] cpu_limits
// [.rodata] balance_mode
// [.rodata] board_sensor_temp_comp
// [.rodata] modem_rate
// [.rodata] 3%s: %s, screen_light = %d, %s

// [.rodata] 3%s: mi_thermal_notifier_call_chain error:%d

// [.rodata] 3%s ERROR: Cannot fine prim_panel of node!
// [.rodata] 3%s:Invalid notification

// [.rodata] 3%s: sysfs_sd is NULL

// [.rodata] sconfig
// [.rodata] board_sensor
// [.rodata] invalid
// [.rodata] 3%s:destroy_thermal_message_node
// [.rodata] 3%s: Failed to add freq constraint (%d)

// [.rodata] 6%s board sensor: %s

// [.rodata] 3%s: count of panel in node is: %d

// [.rodata] 3%s: screen_light = %d, so screen_state = %d, %s

// [.rodata] 3%s:Thermal: Can not parse thermal message node, return %d

// [.rodata] screen_state_for_thermal_callback
// [.rodata] 3%s: cpufreq policy not found for cpu%d

// [.rodata] thermal_max_brightness
// [.rodata] wifi_limit
// [.rodata] 3%s ERROR: Cannot find node with panel!
// [.rodata] screen_state_check
// [.rodata] temp_state
// [.rodata] destroy_thermal_message_node
// [.rodata] drivers/thermal/mi_thermal_interface.c
// [.rodata] thermal_message
// [.rodata] 3%s create device dev err

// [.rodata] cpu_thermal_init
// [.rodata] board_sensor_temp
// [.rodata] screen_state_wq
// [.rodata] 3%s:Failed to register for prim_panel events

// [.rodata] of_parse_thermal_message
// [.rodata] thermal
// [.rodata] 3%s ERROR: Cannot create sysfs structure!:%d

// [.rodata] board_sensor_second_temp
// [.rodata] class
// [.rodata] thermal_board_sensor_temp_store
// [.rodata] panel
// [.rodata] 3%s: count of panel in node PTR_ERR_prim_panel  is: %d

// [.rodata] market_download_limit
// [.rodata] mi_thermal_interface_exit
// [.rodata] thermal-screen
// [.rodata] 3%s:prim_panel_event_notifier_register register succeed

// [.rodata] 3%s: try to add of node panel: %s

// [.rodata] 3%s:can not find class_sd

// [.rodata] flash_state
// [.rodata] 3%s:prim_panel_event_notifier_unregister falt

// [__ksymtab_strings] mi_thermal_notifier
// [__ksymtab_strings] mi_thermal_unreg_notifier
// [__ksymtab_strings] mi_thermal_reg_notifier
// [__ksymtab_strings] mi_thermal_notifier_call_chain
// [.modinfo] author=Xiaomi thermal team
// [.modinfo] description=Xiaomi thermal control  interface
// [.modinfo] license=GPL v2
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=mi_thermal_interface
// [.modinfo] intree=Y
// [.modinfo] depends=panel_event_notifier
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] mi_thermal_interface
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] kernel_kobj
// [__versions] android_kmalloc_64_create
// [__versions] kmalloc_caches
// [__versions] __per_cpu_offset
// [__versions] nr_cpu_ids
// [__versions] __cpu_possible_mask
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] __list_del_entry_valid
// [__versions] freq_qos_remove_request
// [__versions] device_destroy
// [__versions] sysfs_remove_group
// [__versions] panel_event_notifier_unregister
// [__versions] destroy_workqueue
// [__versions] cancel_delayed_work_sync
// [__versions] simple_strtol
// [__versions] snprintf
// [__versions] kernfs_find_and_get_ns
// [__versions] sysfs_create_group
// [__versions] device_create
// [__versions] of_property_read_string
// [__versions] __list_add_valid
// [__versions] __kmalloc
// [__versions] kmem_cache_alloc_trace
// [__versions] mutex_unlock
// [__versions] mutex_lock
// [__versions] freq_qos_add_request
// [__versions] cpufreq_cpu_get
// [__versions] cpumask_next
// [__versions] queue_delayed_work_on
// [__versions] sysfs_notify
// [__versions] of_drm_find_panel
// [__versions] of_parse_phandle
// [__versions] of_count_phandle_with_args
// [__versions] panel_event_notifier_register
// [__versions] of_find_node_by_name
// [__versions] _printk
// [__versions] init_timer_key
// [__versions] alloc_workqueue
// [__versions] freq_qos_update_request
// [__versions] srcu_notifier_call_chain
// [__versions] srcu_notifier_chain_unregister
// [__versions] srcu_notifier_chain_register
// [__versions] delayed_work_timer_fn
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .data..percpu
// [.shstrtab] .rela.exit.text
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] .bss
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .rela.data.mi_thermal_notifier
// [.shstrtab] .rela___ksymtab_gpl+mi_thermal_notifier
// [.shstrtab] .rela___kcrctab_gpl+mi_thermal_notifier
// [.shstrtab] .modinfo
// [.shstrtab] __ksymtab_gpl
// [.shstrtab] __kcrctab_gpl
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .rela__bug_table
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] .symtab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] device_destroy
// [.strtab] sysfs_notify
// [.strtab] init_timer_key
// [.strtab] thermal_boost_show
// [.strtab] thermal_poor_modem_limit_show
// [.strtab] thermal_modem_limit_show
// [.strtab] thermal_wifi_limit_show
// [.strtab] thermal_market_download_limit_show
// [.strtab] cpu_limits_show
// [.strtab] thermal_max_brightness_show
// [.strtab] thermal_ambient_sensor_show
// [.strtab] thermal_board_sensor_show
// [.strtab] thermal_board_sensor_temp_comp_show
// [.strtab] thermal_cpu_nolimit_temp_show
// [.strtab] thermal_ambient_sensor_temp_show
// [.strtab] thermal_board_sensor_temp_show
// [.strtab] thermal_board_sensor_other_temp_show
// [.strtab] thermal_board_sensor_second_temp_show
// [.strtab] thermal_modem_level_show
// [.strtab] thermal_sconfig_show
// [.strtab] thermal_temp_state_show
// [.strtab] thermal_screen_state_show
// [.strtab] thermal_flash_state_show
// [.strtab] thermal_modem_rate_show
// [.strtab] thermal_balance_mode_show
// [.strtab] screen_state_dw
// [.strtab] mi_thermal_dev
// [.strtab] cpumask_next
// [.strtab] dev_attr_boost
// [.strtab] cpufreq_dev_list
// [.strtab] freq_qos_remove_request
// [.strtab] freq_qos_update_request
// [.strtab] freq_qos_add_request
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] screen_state_check.retry_count
// [.strtab] board_sensor_temp_comp_default
// [.strtab] cpu_nolimit_temp_default
// [.strtab] mi_thermal_unreg_notifier.cfi_jt
// [.strtab] mi_thermal_reg_notifier.cfi_jt
// [.strtab] mi_thermal_notifier_call_chain.cfi_jt
// [.strtab] delayed_work_timer_fn.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] thermal_boost_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_poor_modem_limit_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_modem_limit_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_wifi_limit_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_market_download_limit_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] cpu_limits_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_max_brightness_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_ambient_sensor_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_temp_comp_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_cpu_nolimit_temp_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_ambient_sensor_temp_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_temp_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_other_temp_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_second_temp_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_modem_level_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_sconfig_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_temp_state_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_screen_state_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_flash_state_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_modem_rate_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_balance_mode_show.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] screen_state_check.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] screen_state_for_thermal_callback.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_boost_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_poor_modem_limit_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_modem_limit_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_wifi_limit_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_market_download_limit_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] cpu_limits_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_max_brightness_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_temp_comp_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_cpu_nolimit_temp_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_ambient_sensor_temp_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_temp_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_other_temp_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_board_sensor_second_temp_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_modem_level_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_sconfig_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_temp_state_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_flash_state_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_modem_rate_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] thermal_balance_mode_store.90bf897c0b9ef9980ed8884a9219a250.cfi_jt
// [.strtab] dev_attr_modem_limit
// [.strtab] dev_attr_poor_modem_limit
// [.strtab] dev_attr_wifi_limit
// [.strtab] dev_attr_market_download_limit
// [.strtab] screen_light
// [.strtab] __per_cpu_offset
// [.strtab] cpufreq_cpu_get
// [.strtab] screen_last_status
// [.strtab] dev_attr_cpu_limits
// [.strtab] dev_attr_thermal_max_brightness
// [.strtab] ____versions
// [.strtab] kernfs_find_and_get_ns
// [.strtab] of_count_phandle_with_args
// [.strtab] kmalloc_caches
// [.strtab] nr_cpu_ids
// [.strtab] dev_attr_ambient_sensor
// [.strtab] dev_attr_board_sensor
// [.strtab] panel_event_notifier_unregister
// [.strtab] srcu_notifier_chain_unregister
// [.strtab] panel_event_notifier_register
// [.strtab] srcu_notifier_chain_register
// [.strtab] __kstrtabns_mi_thermal_notifier
// [.strtab] __crc_mi_thermal_notifier
// [.strtab] __kstrtab_mi_thermal_notifier
// [.strtab] __ksymtab_mi_thermal_notifier
// [.strtab] __kstrtabns_mi_thermal_unreg_notifier
// [.strtab] __crc_mi_thermal_unreg_notifier
// [.strtab] __kstrtab_mi_thermal_unreg_notifier
// [.strtab] __ksymtab_mi_thermal_unreg_notifier
// [.strtab] __kstrtabns_mi_thermal_reg_notifier
// [.strtab] __crc_mi_thermal_reg_notifier
// [.strtab] __kstrtab_mi_thermal_reg_notifier
// [.strtab] __ksymtab_mi_thermal_reg_notifier
// [.strtab] screen_state_wq
// [.strtab] qos_req
// [.strtab] mi_thermal_dev_attr_group
// [.strtab] sysfs_remove_group
// [.strtab] sysfs_create_group
// [.strtab] dev_attr_board_sensor_temp_comp
// [.strtab] dev_attr_cpu_nolimit_temp
// [.strtab] dev_attr_ambient_sensor_temp
// [.strtab] dev_attr_board_sensor_temp
// [.strtab] dev_attr_board_sensor_other_temp
// [.strtab] dev_attr_board_sensor_second_temp
// [.strtab] queue_delayed_work_on
// [.strtab] srcu_notifier_call_chain
// [.strtab] __kstrtabns_mi_thermal_notifier_call_chain
// [.strtab] __crc_mi_thermal_notifier_call_chain
// [.strtab] __kstrtab_mi_thermal_notifier_call_chain
// [.strtab] __ksymtab_mi_thermal_notifier_call_chain
// [.strtab] delayed_work_timer_fn
// [.strtab] simple_strtol
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] cpu_limits_set_level
// [.strtab] dev_attr_modem_level
// [.strtab] prim_panel
// [.strtab] of_drm_find_panel
// [.strtab] _printk
// [.strtab] __cpu_possible_mask
// [.strtab] mutex_unlock
// [.strtab] mutex_lock
// [.strtab] cpufreq_list_lock
// [.strtab] __cfi_check
// [.strtab] screen_state_check
// [.strtab] screen_state_for_thermal_callback
// [.strtab] kernel_kobj
// [.strtab] of_property_read_string
// [.strtab] dev_attr_sconfig
// [.strtab] boost_buf
// [.strtab] snprintf
// [.strtab] sscanf
// [.strtab] destroy_workqueue
// [.strtab] alloc_workqueue
// [.strtab] dev_attr_temp_state
// [.strtab] dev_attr_screen_state
// [.strtab] dev_attr_flash_state
// [.strtab] dev_attr_modem_rate
// [.strtab] device_create
// [.strtab] android_kmalloc_64_create
// [.strtab] thermal_boost_store
// [.strtab] thermal_poor_modem_limit_store
// [.strtab] thermal_modem_limit_store
// [.strtab] thermal_wifi_limit_store
// [.strtab] thermal_market_download_limit_store
// [.strtab] cpu_limits_store
// [.strtab] thermal_max_brightness_store
// [.strtab] thermal_board_sensor_temp_comp_store
// [.strtab] thermal_cpu_nolimit_temp_store
// [.strtab] thermal_ambient_sensor_temp_store
// [.strtab] thermal_board_sensor_temp_store
// [.strtab] thermal_board_sensor_other_temp_store
// [.strtab] thermal_board_sensor_second_temp_store
// [.strtab] thermal_modem_level_store
// [.strtab] thermal_sconfig_store
// [.strtab] thermal_temp_state_store
// [.strtab] thermal_flash_state_store
// [.strtab] thermal_modem_rate_store
// [.strtab] thermal_balance_mode_store
// [.strtab] of_find_node_by_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] of_parse_phandle
// [.strtab] cookie
// [.strtab] kfree
// [.strtab] switch_mode
// [.strtab] dev_attr_balance_mode
// [.strtab] kmem_cache_alloc_trace
// [.strtab] __list_del_entry_valid
// [.strtab] __list_add_valid
// [.strtab] __kmalloc
// [.strtab] cancel_delayed_work_sync
// [.strtab] mi_thermal_notifier_head_srcu_data
// [.strtab] .Ltmp9
// [.strtab] _note_9
// [.strtab] $d.99
// [.strtab] $x.89
// [.strtab] $x.79
// [.strtab] $x.69
// [.strtab] $d.159
// [.strtab] $x.59
// [.strtab] $d.149
// [.strtab] $x.49
// [.strtab] $d.139
// [.strtab] $x.39
// [.strtab] $d.129
// [.strtab] $x.29
// [.strtab] $d.119
// [.strtab] $x.19
// [.strtab] __UNIQUE_ID_author509
// [.strtab] $d.109
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $d.98
// [.strtab] $x.88
// [.strtab] $x.78
// [.strtab] $d.68
// [.strtab] $x.58
// [.strtab] $d.148
// [.strtab] $d.48
// [.strtab] $d.138
// [.strtab] $x.38
// [.strtab] $d.128
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
// [.strtab] $d.147
// [.strtab] $x.47
// [.strtab] $d.137
// [.strtab] $x.37
// [.strtab] $d.127
// [.strtab] $d.27
// [.strtab] $d.117
// [.strtab] $x.17
// [.strtab] $d.107
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $d.96
// [.strtab] $x.86
// [.strtab] $d.76
// [.strtab] $x.66
// [.strtab] $d.56
// [.strtab] $d.146
// [.strtab] $x.46
// [.strtab] $d.136
// [.strtab] $x.36
// [.strtab] $d.126
// [.strtab] $x.26
// [.strtab] $d.116
// [.strtab] $x.16
// [.strtab] $d.106
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] $x.85
// [.strtab] $x.75
// [.strtab] $x.65
// [.strtab] $x.55
// [.strtab] $d.145
// [.strtab] $x.45
// [.strtab] $d.135
// [.strtab] $x.35
// [.strtab] $d.125
// [.strtab] $x.25
// [.strtab] $d.115
// [.strtab] $d.15
// [.strtab] $d.105
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.94
// [.strtab] $d.84
// [.strtab] $x.74
// [.strtab] $d.64
// [.strtab] $x.54
// [.strtab] $d.144
// [.strtab] $d.44
// [.strtab] $d.134
// [.strtab] $x.34
// [.strtab] $d.124
// [.strtab] $x.24
// [.strtab] $d.114
// [.strtab] $d.14
// [.strtab] $d.104
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.93
// [.strtab] $x.83
// [.strtab] $x.73
// [.strtab] $x.63
// [.strtab] $d.153
// [.strtab] $x.53
// [.strtab] $d.143
// [.strtab] $x.43
// [.strtab] $d.133
// [.strtab] $x.33
// [.strtab] $d.123
// [.strtab] $x.23
// [.strtab] $d.113
// [.strtab] $x.13
// [.strtab] $d.103
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] .Ltmp2
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $x.92
// [.strtab] $x.82
// [.strtab] $d.72
// [.strtab] $x.62
// [.strtab] $d.152
// [.strtab] $d.52
// [.strtab] $d.142
// [.strtab] $x.42
// [.strtab] $d.132
// [.strtab] $x.32
// [.strtab] $d.122
// [.strtab] $d.22
// [.strtab] $d.112
// [.strtab] $x.12
// [.strtab] $d.102
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.91
// [.strtab] $x.81
// [.strtab] $x.71
// [.strtab] $x.61
// [.strtab] $d.151
// [.strtab] $x.51
// [.strtab] $d.141
// [.strtab] $x.41
// [.strtab] $d.131
// [.strtab] $x.31
// [.strtab] $d.121
// [.strtab] $x.21
// [.strtab] __UNIQUE_ID_license511
// [.strtab] $d.111
// [.strtab] $x.11
// [.strtab] $d.11
// [.strtab] $d.101
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $x.90
// [.strtab] $d.80
// [.strtab] $x.70
// [.strtab] $d.60
// [.strtab] thermal_boost_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_poor_modem_limit_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_modem_limit_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_wifi_limit_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_market_download_limit_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] cpu_limits_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_max_brightness_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_ambient_sensor_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_temp_comp_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_cpu_nolimit_temp_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_ambient_sensor_temp_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_temp_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_other_temp_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_second_temp_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_modem_level_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_sconfig_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_temp_state_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_screen_state_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_flash_state_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_modem_rate_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_balance_mode_show.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] screen_state_check.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] screen_state_for_thermal_callback.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_boost_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_poor_modem_limit_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_modem_limit_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_wifi_limit_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_market_download_limit_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] cpu_limits_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_max_brightness_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_temp_comp_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_cpu_nolimit_temp_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_ambient_sensor_temp_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_temp_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_other_temp_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_board_sensor_second_temp_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_modem_level_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_sconfig_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_temp_state_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_flash_state_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_modem_rate_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] thermal_balance_mode_store.90bf897c0b9ef9980ed8884a9219a250
// [.strtab] $d.150
// [.strtab] $x.50
// [.strtab] $d.140
// [.strtab] $x.40
// [.strtab] $d.130
// [.strtab] $d.30
// [.strtab] $d.120
// [.strtab] $x.20
// [.strtab] __UNIQUE_ID_description510
// [.strtab] $d.110
// [.strtab] $x.10
// [.strtab] $d.100

/* ---- mi_thermal_reg_notifier @ 00102368 ---- */

void mi_thermal_reg_notifier(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  srcu_notifier_chain_register(&mi_thermal_notifier,param_1);
  return;
}



/* ---- mi_thermal_unreg_notifier @ 00102398 ---- */

void mi_thermal_unreg_notifier(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  srcu_notifier_chain_unregister(&mi_thermal_notifier,param_1);
  return;
}



/* ---- mi_thermal_notifier_call_chain @ 001023c8 ---- */

void mi_thermal_notifier_call_chain(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_1c;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c = param_2;
  srcu_notifier_call_chain(&mi_thermal_notifier,param_1,&local_1c);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- cpu_limits_set_level @ 00102430 ---- */

void cpu_limits_set_level(int param_1,uint param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  ppuVar2 = (undefined **)cpufreq_dev_list;
  if ((undefined **)cpufreq_dev_list == &cpufreq_dev_list) {
    return;
  }
  while (*(int *)(ppuVar2 + -4) != param_1) {
    ppuVar2 = (undefined **)*ppuVar2;
    if (ppuVar2 == &cpufreq_dev_list) {
      return;
    }
  }
  uVar4 = 0;
  while (uVar3 = (uint)uVar4, param_2 < *(uint *)(ppuVar2[-2] + uVar4 * 4)) {
    uVar4 = (ulong)(uVar3 + 1);
    if (*(uint *)(ppuVar2 + -3) < uVar3 + 1) {
      return;
    }
  }
  if (*(uint *)(ppuVar2 + -3) < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1024d4);
    (*pcVar1)();
  }
  if (*(uint *)((long)ppuVar2 + -0x1c) == uVar3) {
    return;
  }
  *(uint *)((long)ppuVar2 + -0x1c) = uVar3;
  freq_qos_update_request(ppuVar2[2],*(undefined4 *)(ppuVar2[-2] + uVar4 * 4));
  return;
}



/* ---- screen_state_check.90bf897c0b9ef9980ed8884a9219a250 @ 001024d8 ---- */

void screen_state_check_90bf897c0b9ef9980ed8884a9219a250(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  int iVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = of_find_node_by_name(0,"thermal-screen");
  if (lVar2 == 0) {
    puVar3 = "<3>%s ERROR: Cannot find node with panel!";
  }
  else {
    iVar1 = of_count_phandle_with_args(lVar2,"panel",0);
    _printk("<3>%s: count of panel in node is: %d\n","thermal_check_panel",iVar1);
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        uVar4 = of_parse_phandle(lVar2,"panel",iVar5);
        _printk("<3>%s: try to add of node panel: %s\n","thermal_check_panel",uVar4);
        prim_panel = of_drm_find_panel(uVar4);
        if (prim_panel < 0xfffffffffffff001) {
          if (prim_panel == 0xfffffffffffffdfb) {
            _printk("<3>%s ERROR: Cannot fine prim_panel of node!","thermal_check_panel",0xfffffffffffffdfb);
          }
          break;
        }
        iVar5 = iVar5 + 1;
        prim_panel = 0;
      } while (iVar1 != iVar5);
      _printk("<3>%s: count of panel in node PTR_ERR_prim_panel  is: %d\n","thermal_check_panel",prim_panel);
    }
    if (prim_panel == 0) {
      if ((int)screen_state_check_retry_count < 1) {
        return;
      }
      _printk("<3>%s:prim_panel is NULL Failed to register for panel events\n","screen_state_check");
      screen_state_check_retry_count._0_4_ = (int)screen_state_check_retry_count + -1;
      queue_delayed_work_on(0x20,screen_state_wq,&screen_state_dw,0x4e2);
      return;
    }
    if (cookie != 0) {
      return;
    }
    cookie = panel_event_notifier_register
                       (1,4,prim_panel,
                        screen_state_for_thermal_callback_90bf897c0b9ef9980ed8884a9219a250_cfi_jt,0)
    ;
    if (cookie < 0xfffffffffffff001) {
      puVar3 = "<3>%s:prim_panel_event_notifier_register register succeed\n";
    }
    else {
      puVar3 = "<3>%s:Failed to register for prim_panel events\n";
    }
  }
  _printk(puVar3,"screen_state_check");
  return;
}



/* ---- screen_state_for_thermal_callback.90bf897c0b9ef9980ed8884a9219a250 @ 001026cc ---- */

void screen_state_for_thermal_callback_90bf897c0b9ef9980ed8884a9219a250(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == (int *)0x0) {
    _printk("<3>%s:Invalid notification\n","screen_state_for_thermal_callback");
  }
  else if ((char)param_2[3] == '\0') {
    if (param_1 == 1) {
      iVar1 = *param_2;
      if ((iVar1 == 1) || (iVar1 == 3)) {
        screen_light = screen_light & 2;
        if (iVar1 == 1) {
          pcVar2 = "Off";
        }
        else if (iVar1 == 2) {
          pcVar2 = "On";
        }
        else if (iVar1 == 3) {
          pcVar2 = "Doze";
        }
        else {
          pcVar2 = "Unknown";
        }
      }
      else {
        if (iVar1 != 2) {
          return;
        }
        pcVar2 = "On";
        screen_light = screen_light | 1;
      }
      _printk("<3>%s: %s, screen_light = %d, %s\n","screen_state_for_thermal_callback",pcVar2,screen_light,
              &board_sensor_temp);
    }
    screen_state = screen_light != 0;
    _printk("<3>%s: screen_light = %d, so screen_state = %d, %s\n","screen_state_for_thermal_callback",screen_light,screen_state,
            &board_sensor_temp);
    if (screen_last_status != screen_state) {
      sysfs_notify(mi_thermal_dev,0,"screen_state");
      screen_last_status = (uint)screen_state;
    }
  }
  return;
}



/* ---- thermal_temp_state_show.90bf897c0b9ef9980ed8884a9219a250 @ 0010285c ---- */

long thermal_temp_state_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)temp_state);
  return (long)iVar1;
}



/* ---- thermal_temp_state_store.90bf897c0b9ef9980ed8884a9219a250 @ 001028a4 ---- */

undefined8
thermal_temp_state_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  temp_state = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- cpu_limits_show.90bf897c0b9ef9980ed8884a9219a250 @ 001028f0 ---- */

undefined8 cpu_limits_show_90bf897c0b9ef9980ed8884a9219a250(void)

{
  return 0;
}



/* ---- cpu_limits_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102900 ---- */

undefined8
cpu_limits_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_30 [2];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30[0] = 0;
  local_30[1] = 0;
  iVar3 = sscanf(param_3,"cpu%u %u",local_30 + 1,local_30);
  if (iVar3 == 2) {
    if ((undefined **)cpufreq_dev_list != &cpufreq_dev_list) {
      ppuVar4 = (undefined **)cpufreq_dev_list;
      do {
        if (*(int *)(ppuVar4 + -4) == local_30[1]) {
          uVar6 = 0;
          goto LAB_0010298c;
        }
        ppuVar4 = (undefined **)*ppuVar4;
      } while (ppuVar4 != &cpufreq_dev_list);
    }
  }
  else {
    _printk("<3>input param error, can not prase param\n");
    param_4 = 0xffffffffffffffea;
  }
  goto LAB_001029e4;
  while (uVar6 = (ulong)(uVar5 + 1), uVar5 + 1 <= *(uint *)(ppuVar4 + -3)) {
LAB_0010298c:
    uVar5 = (uint)uVar6;
    if (*(uint *)(ppuVar4[-2] + uVar6 * 4) <= local_30[0]) {
      if (*(uint *)(ppuVar4 + -3) < uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x800,0x102a18);
        (*pcVar2)();
      }
      if (*(uint *)((long)ppuVar4 + -0x1c) != uVar5) {
        *(uint *)((long)ppuVar4 + -0x1c) = uVar5;
        freq_qos_update_request(ppuVar4[2],*(undefined4 *)(ppuVar4[-2] + uVar6 * 4));
      }
      break;
    }
  }
LAB_001029e4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- thermal_sconfig_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102a20 ---- */

long thermal_sconfig_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)switch_mode);
  return (long)iVar1;
}



/* ---- thermal_sconfig_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102a68 ---- */

undefined8
thermal_sconfig_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  switch_mode = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_screen_state_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102ab4 ---- */

long thermal_screen_state_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)screen_state);
  return (long)iVar1;
}



/* ---- thermal_boost_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102af4 ---- */

long thermal_boost_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,&boost_buf);
  return (long)iVar1;
}



/* ---- thermal_boost_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102b2c ---- */

undefined8
thermal_boost_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  snprintf(&boost_buf,0x80,param_3);
  return param_4;
}



/* ---- thermal_board_sensor_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102b6c ---- */

long thermal_board_sensor_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (board_sensor == (char *)0x0) {
    board_sensor = "invalid";
  }
  iVar1 = snprintf(param_3,0x1000,"%s");
  return (long)iVar1;
}



/* ---- thermal_board_sensor_temp_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102bbc ---- */

long thermal_board_sensor_temp_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,&board_sensor_temp);
  return (long)iVar1;
}



/* ---- thermal_board_sensor_temp_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102bf4 ---- */

undefined8
thermal_board_sensor_temp_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  snprintf(&board_sensor_temp,0x80,param_3);
  local_2c = simple_strtol(param_3,0,10);
  local_2c = local_2c / 100;
  iVar2 = srcu_notifier_call_chain(&mi_thermal_notifier,0,&local_2c);
  if (iVar2 != 0) {
    _printk("<3>%s: mi_thermal_notifier_call_chain error:%d\n","thermal_board_sensor_temp_store",iVar2);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- thermal_board_sensor_second_temp_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102cc4 ---- */

long thermal_board_sensor_second_temp_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,&board_sensor_second_temp);
  return (long)iVar1;
}



/* ---- thermal_board_sensor_second_temp_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102cfc ---- */

undefined8
thermal_board_sensor_second_temp_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  snprintf(&board_sensor_second_temp,0x80,param_3);
  return param_4;
}



/* ---- thermal_board_sensor_other_temp_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102d3c ---- */

long thermal_board_sensor_other_temp_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,&board_sensor_other_temp);
  return (long)iVar1;
}



/* ---- thermal_board_sensor_other_temp_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102d74 ---- */

undefined8
thermal_board_sensor_other_temp_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  snprintf(&board_sensor_other_temp,0x80,param_3);
  return param_4;
}



/* ---- thermal_balance_mode_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102db4 ---- */

long thermal_balance_mode_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)balance_mode);
  return (long)iVar1;
}



/* ---- thermal_balance_mode_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102dfc ---- */

undefined8
thermal_balance_mode_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  balance_mode = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_modem_limit_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102e48 ---- */

long thermal_modem_limit_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)modem_limit);
  return (long)iVar1;
}



/* ---- thermal_modem_limit_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102e90 ---- */

undefined8
thermal_modem_limit_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  modem_limit = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_wifi_limit_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102edc ---- */

long thermal_wifi_limit_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)wifi_limit);
  return (long)iVar1;
}



/* ---- thermal_wifi_limit_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102f24 ---- */

undefined8
thermal_wifi_limit_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  wifi_limit = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_flash_state_show.90bf897c0b9ef9980ed8884a9219a250 @ 00102f70 ---- */

long thermal_flash_state_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)flash_state);
  return (long)iVar1;
}



/* ---- thermal_flash_state_store.90bf897c0b9ef9980ed8884a9219a250 @ 00102fb8 ---- */

undefined8
thermal_flash_state_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  flash_state = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_max_brightness_show.90bf897c0b9ef9980ed8884a9219a250 @ 00103004 ---- */

long thermal_max_brightness_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)thermal_max_brightness);
  return (long)iVar1;
}



/* ---- thermal_max_brightness_store.90bf897c0b9ef9980ed8884a9219a250 @ 0010304c ---- */

undefined8
thermal_max_brightness_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  thermal_max_brightness = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_market_download_limit_show.90bf897c0b9ef9980ed8884a9219a250 @ 00103098 ---- */

long thermal_market_download_limit_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)market_download_limit);
  return (long)iVar1;
}



/* ---- thermal_market_download_limit_store.90bf897c0b9ef9980ed8884a9219a250 @ 001030e0 ---- */

undefined8
thermal_market_download_limit_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  market_download_limit = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_board_sensor_temp_comp_show.90bf897c0b9ef9980ed8884a9219a250 @ 0010312c ---- */

long thermal_board_sensor_temp_comp_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)board_sensor_temp_comp_default);
  return (long)iVar1;
}



/* ---- thermal_board_sensor_temp_comp_store.90bf897c0b9ef9980ed8884a9219a250 @ 00103174 ---- */

undefined8
thermal_board_sensor_temp_comp_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  board_sensor_temp_comp_default = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_poor_modem_limit_show.90bf897c0b9ef9980ed8884a9219a250 @ 001031c0 ---- */

long thermal_poor_modem_limit_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)poor_modem_limit);
  return (long)iVar1;
}



/* ---- thermal_poor_modem_limit_store.90bf897c0b9ef9980ed8884a9219a250 @ 00103208 ---- */

undefined8
thermal_poor_modem_limit_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  poor_modem_limit = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_cpu_nolimit_temp_show.90bf897c0b9ef9980ed8884a9219a250 @ 00103254 ---- */

long thermal_cpu_nolimit_temp_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)cpu_nolimit_temp_default);
  return (long)iVar1;
}



/* ---- thermal_cpu_nolimit_temp_store.90bf897c0b9ef9980ed8884a9219a250 @ 0010329c ---- */

undefined8
thermal_cpu_nolimit_temp_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  cpu_nolimit_temp_default = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_modem_rate_show.90bf897c0b9ef9980ed8884a9219a250 @ 001032e8 ---- */

long thermal_modem_rate_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)modem_rate);
  return (long)iVar1;
}



/* ---- thermal_modem_rate_store.90bf897c0b9ef9980ed8884a9219a250 @ 00103330 ---- */

undefined8
thermal_modem_rate_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  modem_rate = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_modem_level_show.90bf897c0b9ef9980ed8884a9219a250 @ 0010337c ---- */

long thermal_modem_level_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)modem_level);
  return (long)iVar1;
}



/* ---- thermal_modem_level_store.90bf897c0b9ef9980ed8884a9219a250 @ 001033c4 ---- */

undefined8
thermal_modem_level_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  modem_level = simple_strtol(param_3,0,10);
  return param_4;
}



/* ---- thermal_ambient_sensor_show.90bf897c0b9ef9980ed8884a9219a250 @ 00103410 ---- */

undefined8
thermal_ambient_sensor_show_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,char *param_3)

{
  builtin_strncpy(param_3,"ABT-SENSOR",0xb);
  return 10;
}



/* ---- thermal_ambient_sensor_temp_show.90bf897c0b9ef9980ed8884a9219a250 @ 0010343c ---- */

long thermal_ambient_sensor_temp_show_90bf897c0b9ef9980ed8884a9219a250
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,&ambient_sensor_temp);
  return (long)iVar1;
}



/* ---- thermal_ambient_sensor_temp_store.90bf897c0b9ef9980ed8884a9219a250 @ 00103474 ---- */

undefined8
thermal_ambient_sensor_temp_store_90bf897c0b9ef9980ed8884a9219a250
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  snprintf(&ambient_sensor_temp,0x80,param_3);
  return param_4;
}



/* ---- init_module @ 0010357c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 init_module(void)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 *in_x18;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  screen_state_wq = alloc_workqueue(&DAT_00100c6c,0xe000a,1,"screen_state_wq");
  if (screen_state_wq != 0) {
    screen_state_dw = 0xfffffffe0;
    DAT_00100118 = &DAT_00100118;
    DAT_00100120 = &DAT_00100118;
    DAT_00100128 = screen_state_check_90bf897c0b9ef9980ed8884a9219a250_cfi_jt;
    init_timer_key(&DAT_00100140,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
    queue_delayed_work_on(0x20,screen_state_wq,&screen_state_dw,0x4e2);
  }
  uVar5 = cpumask_next(0xffffffff,&__cpu_possible_mask);
  if (_nr_cpu_ids <= uVar5) {
LAB_00103860:
    lVar7 = of_find_node_by_name(0,"thermal-message");
    if ((lVar7 == 0) ||
       (iVar6 = of_property_read_string(lVar7,"board-sensor",&board_sensor), iVar6 != 0)) {
      _printk("<3>%s:Thermal: Can not parse thermal message node, return %d\n","mi_thermal_interface_init",0xffffffea);
    }
    else {
      _printk("<6>%s board sensor: %s\n","of_parse_thermal_message",board_sensor);
    }
    lVar7 = *(long *)(*(long *)(_kernel_kobj + 0x30) + 8);
    if (lVar7 == 0) {
      puVar9 = "<3>%s: sysfs_sd is NULL\n";
    }
    else {
      lVar7 = kernfs_find_and_get_ns(lVar7,"class",0);
      if (lVar7 == 0) {
        puVar9 = "<3>%s:can not find class_sd\n";
      }
      else {
        lVar7 = kernfs_find_and_get_ns(lVar7,"thermal",0);
        if (lVar7 == 0) {
          puVar9 = "<3>%s:can not find thermal_sd\n";
        }
        else if (*(long *)(lVar7 + 0x60) == 0) {
          puVar9 = "<3>%s:can not find thermal kobj\n";
        }
        else {
          if (DAT_00100240 != 0) {
            return 0;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0x60) + 0x220);
          if (lVar7 == 0) {
            return 0;
          }
          DAT_00100240 = lVar7;
          mi_thermal_dev = device_create(lVar7,0,0x48,0,"thermal_message");
          if (mi_thermal_dev != 0) {
            DAT_00100260 = &mi_thermal_dev_attr_group;
            iVar6 = sysfs_create_group();
            if (iVar6 == 0) {
              return 0;
            }
            _printk("<3>%s ERROR: Cannot create sysfs structure!:%d\n","create_thermal_message_node",iVar6);
            return 0;
          }
          puVar9 = "<3>%s create device dev err\n";
          mi_thermal_dev = 0;
        }
      }
    }
    _printk(puVar9,"create_thermal_message_node");
    return 0;
  }
LAB_00103668:
  uVar12 = (ulong)uVar5;
  if (0x1f < uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x1039f0);
    (*pcVar4)();
  }
  lVar14 = *(long *)(&__per_cpu_offset + uVar12 * 8);
  lVar7 = cpufreq_cpu_get(uVar12);
  if (lVar7 == 0) {
    puVar9 = "<3>%s: cpufreq policy not found for cpu%d\n";
    goto LAB_0010385c;
  }
  _printk("<3>%s cpu=%d\n","cpu_thermal_init",uVar12);
  if (*(long *)(lVar7 + 400) != 0) {
    uVar5 = 0;
    piVar10 = (int *)(*(long *)(lVar7 + 400) + 8);
    do {
      if (*piVar10 != -1) {
        if (*piVar10 == -2) goto LAB_001036dc;
        uVar5 = uVar5 + 1;
      }
      piVar10 = piVar10 + 3;
    } while( true );
  }
  goto LAB_00103860;
LAB_001036dc:
  if (uVar5 != 0) {
    lVar2 = 0x38;
    if (android_kmalloc_64_create != '\0') {
      lVar2 = 0x30;
    }
    puVar8 = (undefined4 *)
             kmem_cache_alloc_trace(*(undefined8 *)(&kmalloc_caches + lVar2),0xdc0,0x38);
    if (puVar8 != (undefined4 *)0x0) {
      *(long *)(puVar8 + 6) = lVar7;
      *(undefined1 **)(puVar8 + 0xc) = qos_req + lVar14;
      puVar8[2] = uVar5 - 1;
      *puVar8 = *(undefined4 *)(lVar7 + 0x1c);
      lVar14 = __kmalloc((ulong)uVar5 << 2,0xcc0);
      *(long *)(puVar8 + 4) = lVar14;
      if (lVar14 != 0) {
        uVar15 = 0;
        uVar5 = 0xffffffff;
LAB_00103750:
        uVar13 = 0;
        puVar11 = (uint *)(*(long *)(lVar7 + 400) + 8);
        do {
          uVar3 = *puVar11;
          if (uVar3 != 0xffffffff) {
            if (uVar3 == 0xfffffffe) goto LAB_00103788;
            if (uVar5 <= uVar3 || uVar3 <= uVar13) {
              uVar3 = uVar13;
            }
            uVar13 = uVar3;
          }
          puVar11 = puVar11 + 3;
        } while( true );
      }
    }
  }
  goto LAB_00103860;
LAB_00103788:
  *(uint *)(*(long *)(puVar8 + 4) + uVar15 * 4) = uVar13;
  if (uVar13 == 0) {
    _printk("<4>%s: table has duplicate entries\n","cpu_thermal_init");
  }
  uVar3 = (int)uVar15 + 1;
  uVar15 = (ulong)uVar3;
  uVar5 = uVar13;
  if ((uint)puVar8[2] < uVar3) goto LAB_001037b8;
  goto LAB_00103750;
LAB_001037b8:
  uVar5 = freq_qos_add_request
                    (lVar7 + 0xa0,*(undefined8 *)(puVar8 + 0xc),2,**(undefined4 **)(puVar8 + 4));
  if ((int)uVar5 < 0) {
    uVar12 = (ulong)uVar5;
    puVar9 = "<3>%s: Failed to add freq constraint (%d)\n";
LAB_0010385c:
    _printk(puVar9,"cpu_thermal_init",uVar12);
    goto LAB_00103860;
  }
  mutex_lock(&cpufreq_list_lock);
  puVar9 = cpufreq_dev_list;
  puVar1 = puVar8 + 8;
  uVar15 = __list_add_valid(puVar1,&cpufreq_dev_list,cpufreq_dev_list);
  if ((uVar15 & 1) != 0) {
    *(undefined4 **)(puVar9 + 8) = puVar1;
    *(undefined **)(puVar8 + 8) = puVar9;
    *(undefined ***)(puVar8 + 10) = &cpufreq_dev_list;
    cpufreq_dev_list = (undefined *)puVar1;
  }
  mutex_unlock(&cpufreq_list_lock);
  uVar5 = cpumask_next(uVar12,&__cpu_possible_mask);
  if (_nr_cpu_ids <= uVar5) goto LAB_00103860;
  goto LAB_00103668;
}



/* ---- cleanup_module @ 001039f0 ---- */

void cleanup_module(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (screen_state_wq != 0) {
    cancel_delayed_work_sync(&screen_state_dw);
    destroy_workqueue(screen_state_wq);
  }
  if ((prim_panel == 0) || (0xfffffffffffff000 < cookie)) {
    _printk("<3>%s:prim_panel_event_notifier_unregister falt\n","mi_thermal_interface_exit");
  }
  else {
    panel_event_notifier_unregister();
  }
  _printk("<3>%s:destroy_thermal_message_node","destroy_thermal_message_node");
  sysfs_remove_group(mi_thermal_dev,&DAT_00100248);
  if (DAT_00100240 != 0) {
    device_destroy(DAT_00100240,0x48);
    DAT_00100240 = 0;
  }
  ppuVar4 = (undefined **)cpufreq_dev_list;
  if ((undefined **)cpufreq_dev_list != &cpufreq_dev_list) {
    do {
      ppuVar5 = (undefined **)*ppuVar4;
      freq_qos_remove_request(ppuVar4[2]);
      uVar3 = __list_del_entry_valid(ppuVar4);
      if ((uVar3 & 1) != 0) {
        puVar1 = *ppuVar4;
        plVar2 = (long *)ppuVar4[1];
        *(long **)(puVar1 + 8) = plVar2;
        *plVar2 = (long)puVar1;
      }
      *ppuVar4 = (undefined *)0xdead000000000100;
      ppuVar4[1] = (undefined *)0xdead000000000122;
      kfree(ppuVar4[-2]);
      kfree(ppuVar4 + -4);
      ppuVar4 = ppuVar5;
    } while (ppuVar5 != &cpufreq_dev_list);
  }
  return;
}


/* functions: 49 ok, 0 failed */
