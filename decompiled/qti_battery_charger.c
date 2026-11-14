/* Decompiled with Ghidra from qti_battery_charger.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] ship_mode_en
// [.rodata] &bcdev->rw_lock
// [.rodata] 0BATTERY_CHG: %s: Initiating a shutdown in 100 ms

// [.rodata] 3BATTERY_CHG: %s: Failed to send shutdown notification rc=%d

// [.rodata] wireless_fw_force_update
// [.rodata] wireless_fw_version_show
// [.rodata] 3BATTERY_CHG: %s: Failed to read prop USB_ADAP_TYPE, rc=%d

// [.rodata] wireless_fw_crc
// [.rodata] battery_chg_fw_write
// [.rodata] usb_typec_compliant
// [.rodata] block_tx
// [.rodata] 3BATTERY_CHG: %s: Failed to create charger debugfs directory, rc=%d

// [.rodata] moisture_detection_status
// [.rodata] moisture_detection_en
// [.rodata] wireless_fw_update_time_ms
// [.rodata] qti_battery_charger
// [.rodata] 3BATTERY_CHG: %s: Wireless FW update not done %d

// [.rodata] battery_psy_set_charge_current
// [.rodata] resistance
// [.rodata] wireless_fw_update
// [.rodata] PD_DRP
// [.rodata] battery_chg_add_debugfs
// [.rodata] wireless
// [.rodata] 3BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_push_buf_resp

// [.rodata] handle_message
// [.rodata] 3BATTERY_CHG: %s: Incorrect response length %zu for opcode %#x

// [.rodata] 3BATTERY_CHG: %s: Error in reading qcom,thermal-mitigation, rc=%d

// [.rodata] 6BATTERY_CHG: %s: Wireless FW update done

// [.rodata] Failed to register panel event notifier, rc=%d

// [.rodata] qcom,wireless-fw-name
// [.rodata] Unknown
// [.rodata] battery
// [.rodata] qcom,shutdown-voltage
// [.rodata] usb_real_type
// [.rodata] 3BATTERY_CHG: %s: Error, timed out sending message

// [.rodata] 3BATTERY_CHG: %s: Invalid firmware size %zu

// [.rodata] battery_chg_subsys_up_work
// [.rodata] 3BATTERY_CHG: %s: Incorrect response length %zu

// [.rodata] 3BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_check_update

// [.rodata] 3BATTERY_CHG: %s: Failed to register wireless power supply, rc=%d

// [.rodata] 3BATTERY_CHG: %s: Failed to read BATT_CAPACITY, rc=%d

// [.rodata] qcom-battery
// [.rodata] battery_chg_notify_disable
// [.rodata] 0BATTERY_CHG: %s: Failed to write ship mode: %d

// [.rodata] battery_chg_init_psy
// [.rodata] 3BATTERY_CHG: %s: Battery SOC should be at least 50%% or connect charger

// [.rodata] 3BATTERY_CHG: %s: Couldn't get firmware rc=%d

// [.rodata] wireless_fw_version
// [.rodata] HVDCP
// [.rodata] handle_notification
// [.rodata] qcom,thermal-mitigation-step
// [.rodata] 3BATTERY_CHG: %s: Incorrect num_thermal_levels

// [.rodata] wireless_boost_en
// [.rodata] 3BATTERY_CHG: %s: wireless FW name is not specified

// [.rodata] 3BATTERY_CHG: %s: Failed to set FCC (%u uA), rc=%d

// [.rodata] battery_chg_update_usb_type_work
// [.rodata] 3BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_update_status_resp

// [.rodata] 3BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_get_version

// [.rodata] qcom,display-panels
// [.rodata] restrict_chg
// [.rodata] BrickID
// [.rodata] 3BATTERY_CHG: %s: Failed to set FCC %u, rc=%d

// [.rodata] 3BATTERY_CHG: %s: Failed to enable notification rc=%d

// [.rodata] 3BATTERY_CHG: %s: No property id for property %d in psy %s

// [.rodata] Debug_Board
// [.rodata] 3BATTERY_CHG: %s: Wireless FW update not needed, rc=%d

// [.rodata] HVDCP_3
// [.rodata] battery_chg_write
// [.rodata] &bcdev->state_sem
// [.rodata] 3BATTERY_CHG: %s: Failed to read BATT_VOLT_NOW, rc=%d

// [.rodata] 0BATTERY_CHG: %s: Attempting kernel_power_off: Battery voltage low

// [.rodata] 3BATTERY_CHG: %s: Failed to read prop BATT_CHG_CTRL_LIM_MAX, rc=%d

// [.rodata] 3BATTERY_CHG: %s: Thermal levels should be in descending order

// [.rodata] 3BATTERY_CHG: %s: Invalid firmware

// [.rodata] 4BATTERY_CHG: %s: Wireless FW update not required

// [.rodata] 3BATTERY_CHG: %s: Failed to send FW chunk, rc=%d

// [.rodata] 3BATTERY_CHG: %s: Error, timed out updating firmware

// [.rodata] Failed to create battery_class rc=%d

// [.rodata] 3BATTERY_CHG: %s: Failed to disable notification rc=%d

// [.rodata] battery_chg_notify_enable
// [.rodata] 3BATTERY_CHG: %s: Failed to set ICL(%u uA), rc=%d

// [.rodata] __battery_psy_set_charge_current
// [.rodata] usb_psy_set_icl
// [.rodata] 3BATTERY_CHG: %s: Error in response for opcode %#x prop_id %u, rc=%d

// [.rodata] Failed to parse dt rc=%d

// [.rodata] 3BATTERY_CHG: %s: Failed to set ICL (%u uA) rc=%d

// [.rodata] 3BATTERY_CHG: %s: Failed to register USB power supply, rc=%d

// [.rodata] 3BATTERY_CHG: %s: Failed to get FW version rc=%d

// [.rodata] HVDCP_3P5
// [.rodata] 3BATTERY_CHG: %s: Failed to read USB_ADAP_TYPE rc=%d

// [.rodata] battery_chg_state_cb
// [.rodata] 3BATTERY_CHG: %s: Failed to register battery power supply, rc=%d

// [.rodata] restrict_cur
// [.rodata] battery_chg_check_status_work
// [.rodata] 3BATTERY_CHG: %s: Unknown opcode: %u

// [.rodata] validate_message
// [.rodata] battery_chg_ship_mode
// [.rodata] battery_charger
// [.rodata] Error in registering with pmic_glink %d

// [.rodata] &x->wait
// [.rodata] wireless_type
// [.rodata] 3BATTERY_CHG: %s: Failed to read BATT_STATUS, rc=%d

// [.rodata] fake_soc
// [.rodata] get_property_id
// [.rodata] 4BATTERY_CHG: %s: Driver not initialized, pmic_glink state %d

// [.rodata] battery_chg_parse_dt
// [.rodata] qcom,thermal-mitigation
// [.rodata] 3BATTERY_CHG: %s: thermal_fcc_step %d is invalid

// [.rodata] PD_PPS
// [.rodata] Failed to find active panel, rc=%d

// [.rodata] qcom,battery-charger
// [__ksymtab_strings] register_hboost_event_notifier
// [__ksymtab_strings] qti_battery_charger_get_prop
// [__ksymtab_strings] unregister_hboost_event_notifier
// [.modinfo] description=QTI Glink battery charger driver
// [.modinfo] license=GPL v2
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=qti_battery_charger
// [.modinfo] intree=Y
// [.modinfo] depends=panel_event_notifier,pmic_glink
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] qti_battery_charger
// [__versions] module_layout
// [__versions] __stack_chk_fail
// [__versions] system_wq
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] platform_driver_unregister
// [__versions] class_unregister
// [__versions] debugfs_remove
// [__versions] queue_work_on
// [__versions] debugfs_create_bool
// [__versions] debugfs_create_dir
// [__versions] kstrtouint
// [__versions] kstrtou16
// [__versions] pm_relax
// [__versions] release_firmware
// [__versions] strstr
// [__versions] firmware_request_nowarn
// [__versions] pm_stay_awake
// [__versions] kstrtoint
// [__versions] kstrtobool
// [__versions] scnprintf
// [__versions] devm_power_supply_register
// [__versions] of_property_read_variable_u32_array
// [__versions] of_property_read_u32_index
// [__versions] of_property_count_elems_of_size
// [__versions] of_property_read_string
// [__versions] ___ratelimit
// [__versions] pm_wakeup_dev_event
// [__versions] power_supply_changed
// [__versions] raw_notifier_call_chain
// [__versions] panel_event_notifier_register
// [__versions] of_drm_find_panel
// [__versions] of_parse_phandle
// [__versions] of_count_phandle_with_args
// [__versions] kernel_power_off
// [__versions] __init_swait_queue_head
// [__versions] devm_kmalloc
// [__versions] panel_event_notifier_unregister
// [__versions] unregister_reboot_notifier
// [__versions] complete
// [__versions] cancel_work_sync
// [__versions] pmic_glink_unregister_client
// [__versions] device_init_wakeup
// [__versions] __class_register
// [__versions] register_reboot_notifier
// [__versions] up_write
// [__versions] down_write
// [__versions] pmic_glink_register_client
// [__versions] __init_rwsem
// [__versions] __mutex_init
// [__versions] __platform_driver_register
// [__versions] __msecs_to_jiffies
// [__versions] mutex_unlock
// [__versions] _printk
// [__versions] wait_for_completion_timeout
// [__versions] pmic_glink_write
// [__versions] mutex_lock
// [__versions] up_read
// [__versions] down_read
// [__versions] power_supply_put
// [__versions] power_supply_get_drvdata
// [__versions] power_supply_get_by_name
// [__versions] raw_notifier_chain_unregister
// [__versions] raw_notifier_chain_register
// [.comment] Android (8508608, based on r450784e) clang version 14.0.7 (https://android.googlesource.com/toolchain/llvm-project 4c603efb0cca074e9238af8b4106c30add4418f6)
// [.comment] 
// [.shstrtab] .note.gnu.property
// [.shstrtab] .note.Linux
// [.shstrtab] .rela.exit.text
// [.shstrtab] .rela.init.text
// [.shstrtab] .comment
// [.shstrtab] .init.plt
// [.shstrtab] .bss
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .rela.data.battery_chg_driver
// [.shstrtab] .rela___ksymtab+register_hboost_event_notifier
// [.shstrtab] .rela___kcrctab+register_hboost_event_notifier
// [.shstrtab] .modinfo
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .rela.rodata.wls_psy_desc
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] __ksymtab
// [.shstrtab] .symtab
// [.shstrtab] __kcrctab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.strtab] memcpy
// [.strtab] init_completion.__key
// [.strtab] battery_chg_probe.__key
// [.strtab] of_property_read_variable_u32_array
// [.strtab] of_property_read_u32_index
// [.strtab] pm_relax
// [.strtab] usb_typec_compliant_show
// [.strtab] moisture_detection_status_show
// [.strtab] wireless_fw_update_time_ms_show
// [.strtab] restrict_cur_show
// [.strtab] wireless_fw_version_show
// [.strtab] wireless_boost_en_show
// [.strtab] moisture_detection_en_show
// [.strtab] ship_mode_en_show
// [.strtab] soh_show
// [.strtab] restrict_chg_show
// [.strtab] wireless_type_show
// [.strtab] usb_real_type_show
// [.strtab] resistance_show
// [.strtab] fake_soc_show
// [.strtab] qc_power_supply_wls_type_text
// [.strtab] qc_power_supply_usb_type_text
// [.strtab] power_supply_put
// [.strtab] wait_for_completion_timeout
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] kstrtouint
// [.strtab] kstrtoint
// [.strtab] pm_wakeup_dev_event
// [.strtab] pmic_glink_unregister_client
// [.strtab] pmic_glink_register_client
// [.strtab] class_attr_usb_typec_compliant
// [.strtab] unregister_hboost_event_notifier.cfi_jt
// [.strtab] qti_battery_charger_get_prop.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] usb_typec_compliant_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] moisture_detection_status_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_fw_update_time_ms_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] restrict_cur_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_fw_version_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_boost_en_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] moisture_detection_en_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] ship_mode_en_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] soh_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] restrict_chg_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_type_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] usb_real_type_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] resistance_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] fake_soc_show.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_psy_set_prop.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wls_psy_set_prop.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] usb_psy_set_prop.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_psy_get_prop.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wls_psy_get_prop.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] usb_psy_get_prop.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_check_status_work.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_subsys_up_work.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_update_usb_type_work.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] panel_event_notifier_callback.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_callback.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_remove.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_fw_update_time_ms_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] restrict_cur_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_boost_en_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] moisture_detection_en_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] ship_mode_en_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] restrict_chg_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_fw_update_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_fw_force_update_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wireless_fw_crc_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] fake_soc_store.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] wls_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] usb_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_ship_mode.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_probe.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] battery_chg_state_cb.15375c5abb3d4800e10be4094632ba89.cfi_jt
// [.strtab] __mutex_init
// [.strtab] ___ratelimit
// [.strtab] class_attr_moisture_detection_status
// [.strtab] battery_class_attrs
// [.strtab] validate_message._rs
// [.strtab] battery_class_groups
// [.strtab] battery_props
// [.strtab] wls_props
// [.strtab] usb_props
// [.strtab] ____versions
// [.strtab] class_attr_wireless_fw_update_time_ms
// [.strtab] of_count_phandle_with_args
// [.strtab] usb_psy_supported_types
// [.strtab] __msecs_to_jiffies
// [.strtab] class_attr_restrict_cur
// [.strtab] strstr
// [.strtab] _dev_err
// [.strtab] debugfs_create_dir
// [.strtab] battery_chg_driver
// [.strtab] class_unregister
// [.strtab] platform_driver_unregister
// [.strtab] panel_event_notifier_unregister
// [.strtab] raw_notifier_chain_unregister
// [.strtab] devm_power_supply_register
// [.strtab] __class_register
// [.strtab] __platform_driver_register
// [.strtab] panel_event_notifier_register
// [.strtab] raw_notifier_chain_register
// [.strtab] hboost_notifier
// [.strtab] unregister_reboot_notifier
// [.strtab] __kstrtabns_unregister_hboost_event_notifier
// [.strtab] __crc_unregister_hboost_event_notifier
// [.strtab] __kstrtab_unregister_hboost_event_notifier
// [.strtab] __ksymtab_unregister_hboost_event_notifier
// [.strtab] __kstrtabns_register_hboost_event_notifier
// [.strtab] __crc_register_hboost_event_notifier
// [.strtab] __kstrtab_register_hboost_event_notifier
// [.strtab] __ksymtab_register_hboost_event_notifier
// [.strtab] system_wq
// [.strtab] battery_class_group
// [.strtab] device_init_wakeup
// [.strtab] battery_psy_set_prop
// [.strtab] wls_psy_set_prop
// [.strtab] usb_psy_set_prop
// [.strtab] battery_psy_get_prop
// [.strtab] wls_psy_get_prop
// [.strtab] usb_psy_get_prop
// [.strtab] __kstrtabns_qti_battery_charger_get_prop
// [.strtab] __crc_qti_battery_charger_get_prop
// [.strtab] __kstrtab_qti_battery_charger_get_prop
// [.strtab] __ksymtab_qti_battery_charger_get_prop
// [.strtab] strcmp
// [.strtab] msleep
// [.strtab] battery_prop_map
// [.strtab] wls_prop_map
// [.strtab] usb_prop_map
// [.strtab] firmware_request_nowarn
// [.strtab] class_attr_wireless_fw_version
// [.strtab] queue_work_on
// [.strtab] raw_notifier_call_chain
// [.strtab] class_attr_wireless_boost_en
// [.strtab] class_attr_moisture_detection_en
// [.strtab] class_attr_ship_mode_en
// [.strtab] __init_rwsem
// [.strtab] kstrtobool
// [.strtab] debugfs_create_bool
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] of_drm_find_panel
// [.strtab] usb_psy_set_icl
// [.strtab] _printk
// [.strtab] battery_chg_check_status_work
// [.strtab] battery_chg_subsys_up_work
// [.strtab] battery_chg_update_usb_type_work
// [.strtab] mutex_unlock
// [.strtab] mutex_lock
// [.strtab] __cfi_check
// [.strtab] panel_event_notifier_callback
// [.strtab] battery_chg_callback
// [.strtab] class_attr_soh
// [.strtab] of_property_read_string
// [.strtab] class_attr_restrict_chg
// [.strtab] scnprintf
// [.strtab] kernel_power_off
// [.strtab] of_property_count_elems_of_size
// [.strtab] debugfs_remove
// [.strtab] battery_chg_remove
// [.strtab] up_write
// [.strtab] down_write
// [.strtab] pmic_glink_write
// [.strtab] battery_chg_write
// [.strtab] complete
// [.strtab] class_attr_wireless_fw_update
// [.strtab] wireless_fw_check_for_update
// [.strtab] class_attr_wireless_fw_force_update
// [.strtab] wireless_fw_update_time_ms_store
// [.strtab] restrict_cur_store
// [.strtab] wireless_boost_en_store
// [.strtab] moisture_detection_en_store
// [.strtab] ship_mode_en_store
// [.strtab] restrict_chg_store
// [.strtab] wireless_fw_update_store
// [.strtab] wireless_fw_force_update_store
// [.strtab] wireless_fw_crc_store
// [.strtab] fake_soc_store
// [.strtab] release_firmware
// [.strtab] wireless_fw_send_firmware
// [.strtab] class_attr_wireless_type
// [.strtab] class_attr_usb_real_type
// [.strtab] power_supply_get_by_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] of_parse_phandle
// [.strtab] battery_chg_match_table
// [.strtab] battery_psy_prop_is_writeable
// [.strtab] wls_psy_prop_is_writeable
// [.strtab] usb_psy_prop_is_writeable
// [.strtab] pm_stay_awake
// [.strtab] battery_chg_ship_mode
// [.strtab] class_attr_resistance
// [.strtab] battery_chg_probe
// [.strtab] power_supply_changed
// [.strtab] up_read
// [.strtab] down_read
// [.strtab] __init_swait_queue_head
// [.strtab] batt_psy_desc
// [.strtab] wls_psy_desc
// [.strtab] usb_psy_desc
// [.strtab] class_attr_wireless_fw_crc
// [.strtab] class_attr_fake_soc
// [.strtab] devm_kmalloc
// [.strtab] cancel_work_sync
// [.strtab] battery_chg_state_cb
// [.strtab] power_supply_get_drvdata
// [.strtab] _note_9
// [.strtab] $d.99
// [.strtab] usb_typec_compliant_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] moisture_detection_status_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_fw_update_time_ms_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] restrict_cur_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_fw_version_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_boost_en_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] moisture_detection_en_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] ship_mode_en_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] soh_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] restrict_chg_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_type_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] usb_real_type_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] resistance_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] fake_soc_show.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_psy_set_prop.15375c5abb3d4800e10be4094632ba89
// [.strtab] wls_psy_set_prop.15375c5abb3d4800e10be4094632ba89
// [.strtab] usb_psy_set_prop.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_psy_get_prop.15375c5abb3d4800e10be4094632ba89
// [.strtab] wls_psy_get_prop.15375c5abb3d4800e10be4094632ba89
// [.strtab] usb_psy_get_prop.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_check_status_work.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_subsys_up_work.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_update_usb_type_work.15375c5abb3d4800e10be4094632ba89
// [.strtab] panel_event_notifier_callback.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_callback.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_remove.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_fw_update_time_ms_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] restrict_cur_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_boost_en_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] moisture_detection_en_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] ship_mode_en_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] restrict_chg_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_fw_update_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_fw_force_update_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] wireless_fw_crc_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] fake_soc_store.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89
// [.strtab] wls_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89
// [.strtab] usb_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_ship_mode.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_probe.15375c5abb3d4800e10be4094632ba89
// [.strtab] battery_chg_state_cb.15375c5abb3d4800e10be4094632ba89
// [.strtab] $d.89
// [.strtab] $d.79
// [.strtab] $x.69
// [.strtab] $x.59
// [.strtab] $x.49
// [.strtab] $x.39
// [.strtab] $x.29
// [.strtab] $d.119
// [.strtab] $x.19
// [.strtab] $d.109
// [.strtab] $x.9
// [.strtab] _note_8
// [.strtab] $d.98
// [.strtab] $d.88
// [.strtab] $d.78
// [.strtab] $x.68
// [.strtab] $x.58
// [.strtab] $x.48
// [.strtab] $x.38
// [.strtab] $x.28
// [.strtab] $x.18
// [.strtab] $d.108
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.97
// [.strtab] $d.87
// [.strtab] $d.77
// [.strtab] $x.67
// [.strtab] $x.57
// [.strtab] $x.47
// [.strtab] __UNIQUE_ID_license337
// [.strtab] $x.37
// [.strtab] $x.27
// [.strtab] $x.17
// [.strtab] $d.17
// [.strtab] $d.107
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $d.96
// [.strtab] $d.86
// [.strtab] $d.76
// [.strtab] $x.66
// [.strtab] $x.56
// [.strtab] $x.46
// [.strtab] __UNIQUE_ID_description336
// [.strtab] $x.36
// [.strtab] $x.26
// [.strtab] kstrtou16
// [.strtab] $x.16
// [.strtab] $d.106
// [.strtab] battery_chg_probe.__key.6
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] $d.95
// [.strtab] $d.85
// [.strtab] $d.75
// [.strtab] $x.65
// [.strtab] $x.55
// [.strtab] $x.45
// [.strtab] $d.35
// [.strtab] $x.25
// [.strtab] $x.15
// [.strtab] $d.105
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.94
// [.strtab] $d.84
// [.strtab] $d.74
// [.strtab] $x.64
// [.strtab] $x.54
// [.strtab] $x.44
// [.strtab] $x.34
// [.strtab] $x.24
// [.strtab] $x.14
// [.strtab] $d.14
// [.strtab] $d.104
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.93
// [.strtab] $d.83
// [.strtab] $x.63
// [.strtab] $d.53
// [.strtab] $x.43
// [.strtab] $x.33
// [.strtab] $d.23
// [.strtab] $d.113
// [.strtab] $x.13
// [.strtab] $d.103
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.92
// [.strtab] $d.82
// [.strtab] $d.72
// [.strtab] $x.62
// [.strtab] $x.52
// [.strtab] $x.42
// [.strtab] $x.32
// [.strtab] $x.22
// [.strtab] $d.112
// [.strtab] battery_chg_probe.__key.12
// [.strtab] $x.12
// [.strtab] $d.102
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.91
// [.strtab] $d.81
// [.strtab] $x.71
// [.strtab] $x.61
// [.strtab] $d.51
// [.strtab] $x.41
// [.strtab] $x.31
// [.strtab] $x.21
// [.strtab] $d.111
// [.strtab] $x.11
// [.strtab] $d.101
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.90
// [.strtab] $d.80
// [.strtab] $d.70
// [.strtab] $x.60
// [.strtab] $x.50
// [.strtab] $x.40
// [.strtab] $x.30
// [.strtab] $d.20
// [.strtab] $d.110
// [.strtab] $x.10
// [.strtab] $d.100

/* ---- register_hboost_event_notifier @ 00102488 ---- */

void register_hboost_event_notifier(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  raw_notifier_chain_register(&hboost_notifier,param_1);
  return;
}



/* ---- unregister_hboost_event_notifier @ 001024b8 ---- */

void unregister_hboost_event_notifier(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  raw_notifier_chain_unregister(&hboost_notifier,param_1);
  return;
}



/* ---- qti_battery_charger_get_prop @ 001024e8 ---- */

void qti_battery_charger_get_prop(char *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  if ((param_2 == 0) &&
     (((iVar1 = strcmp(param_1,"battery"), iVar1 == 0 || (iVar1 = strcmp(param_1,"usb"), iVar1 == 0)
       ) || (iVar1 = strcmp(param_1,"wireless"), iVar1 == 0)))) {
    lVar3 = power_supply_get_by_name(param_1);
    if ((lVar3 == 0) || (lVar4 = power_supply_get_drvdata(), lVar4 == 0)) {
      uVar2 = 0xffffffed;
    }
    else {
      power_supply_put(lVar3);
      local_48 = *(undefined4 *)(lVar4 + 0x19c);
      local_3c = 0;
      local_44 = 0x1500000000;
      local_50 = 0x10000800a;
      uVar2 = battery_chg_write(lVar4,&local_50,0x18);
      if ((int)uVar2 == 0) {
        *param_3 = *(undefined4 *)(*(long *)(lVar4 + 400) + 0x54);
      }
    }
  }
  else {
    uVar2 = 0xffffffea;
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- battery_chg_write @ 001025fc ---- */

int battery_chg_write(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = param_1 + 0xd8;
  down_read(lVar1);
  if ((*(int *)(param_1 + 0x234) == 0) ||
     ((*(char *)(param_1 + 0x2ce) != '\0' && (*(char *)(param_1 + 0x2cc) != '\0')))) {
    up_read(lVar1);
    iVar3 = 0;
  }
  else {
    lVar2 = param_1 + 0xa8;
    mutex_lock(lVar2);
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x30f) = 0;
    iVar3 = pmic_glink_write(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    if (iVar3 == 0) {
      iVar3 = wait_for_completion_timeout(param_1 + 0x118,0xfa);
      if (iVar3 == 0) {
        _printk("<3>BATTERY_CHG: %s: Error, timed out sending message\n","battery_chg_write");
        up_read(lVar1);
        mutex_unlock(lVar2);
        return -0x6e;
      }
      if (*(char *)(param_1 + 0x30f) == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = -0x3d;
        *(undefined1 *)(param_1 + 0x30f) = 0;
      }
    }
    mutex_unlock(lVar2);
    up_read(lVar1);
  }
  return iVar3;
}



/* ---- battery_chg_probe.15375c5abb3d4800e10be4094632ba89 @ 00102710 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong battery_chg_probe_15375c5abb3d4800e10be4094632ba89(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 *in_x18;
  undefined8 uVar12;
  int iVar13;
  undefined8 unaff_x30;
  char *local_d0;
  undefined8 local_c8;
  long *local_c0;
  code *local_b8;
  code *local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar7 = sp_el0;
  lVar1 = param_1 + 0x10;
  local_68 = *(long *)(lVar7 + 0x5e0);
  local_b8 = (code *)0x0;
  local_b0 = (code *)0x0;
  local_c8 = 0;
  local_c0 = (long *)0x0;
  local_d0 = (char *)0x0;
  plVar6 = (long *)devm_kmalloc(lVar1,0x310,0xdc0);
  if (plVar6 != (long *)0x0) {
    plVar6[0x31] = (long)&battery_prop_map;
    plVar6[0x33] = 0x3000000018;
    plVar6[0x37] = (long)&usb_prop_map;
    *(undefined4 *)(plVar6 + 0x34) = 0x31;
    *(undefined4 *)(plVar6 + 0x3a) = 0x33;
    plVar6[0x39] = 0x320000000d;
    plVar6[0x3d] = (long)&wls_prop_map;
    *(undefined4 *)(plVar6 + 0x40) = 0x35;
    plVar6[0x3f] = 0x340000000b;
    lVar7 = devm_kmalloc(lVar1,0x60,0xdc0);
    plVar6[0x32] = lVar7;
    if (lVar7 != 0) {
      lVar7 = devm_kmalloc(lVar1,(ulong)*(uint *)(plVar6 + 0x39) << 2,0xdc0);
      plVar6[0x38] = lVar7;
      if (lVar7 != 0) {
        lVar7 = devm_kmalloc(lVar1,(ulong)*(uint *)(plVar6 + 0x3f) << 2,0xdc0);
        plVar6[0x3e] = lVar7;
        if (lVar7 != 0) {
          lVar7 = devm_kmalloc(lVar1,0x80,0xdc0);
          plVar6[0x30] = lVar7;
          if (lVar7 != 0) {
            __mutex_init(plVar6 + 0x15,"&bcdev->rw_lock",&battery_chg_probe___key_12);
            plVar2 = plVar6 + 0x1b;
            __init_rwsem(plVar2,"&bcdev->state_sem",&battery_chg_probe___key_12);
            *(undefined4 *)(plVar6 + 0x23) = 0;
            __init_swait_queue_head(plVar6 + 0x24,"&x->wait",&battery_chg_probe___key_12);
            *(undefined4 *)(plVar6 + 0x27) = 0;
            __init_swait_queue_head(plVar6 + 0x28,"&x->wait",&battery_chg_probe___key_12);
            *(undefined4 *)(plVar6 + 0x2b) = 0;
            __init_swait_queue_head(plVar6 + 0x2c,"&x->wait",&battery_chg_probe___key_12);
            plVar6[0x47] = 0xfffffffe0;
            plVar6[0x48] = (long)(plVar6 + 0x48);
            plVar6[0x49] = (long)(plVar6 + 0x48);
            plVar6[0x4a] = (long)battery_chg_subsys_up_work_15375c5abb3d4800e10be4094632ba89_cfi_jt;
            plVar6[0x4d] = 0xfffffffe0;
            plVar6[0x4e] = (long)(plVar6 + 0x4e);
            plVar6[0x4f] = (long)(plVar6 + 0x4e);
            plVar6[0x50] = (long)
                           battery_chg_update_usb_type_work_15375c5abb3d4800e10be4094632ba89_cfi_jt;
            plVar6[0x53] = 0xfffffffe0;
            plVar6[0x54] = (long)(plVar6 + 0x54);
            plVar6[0x55] = (long)(plVar6 + 0x54);
            uVar12 = *(undefined8 *)(param_1 + 0x300);
            *plVar6 = lVar1;
            plVar6[0x56] = (long)
                           battery_chg_check_status_work_15375c5abb3d4800e10be4094632ba89_cfi_jt;
            iVar3 = of_count_phandle_with_args(uVar12,"qcom,display-panels",0);
            if (0 < iVar3) {
              iVar13 = 0;
              do {
                lVar7 = of_parse_phandle(uVar12,"qcom,display-panels",iVar13);
                if (lVar7 == 0) {
                  uVar8 = 0xffffffed;
                  goto LAB_00102988;
                }
                uVar8 = of_drm_find_panel();
                if (uVar8 < 0xfffffffffffff001) {
                  if (uVar8 == 0) goto LAB_00102d98;
                  uVar8 = panel_event_notifier_register
                                    (1,5,uVar8,
                                     panel_event_notifier_callback_15375c5abb3d4800e10be4094632ba89_cfi_jt
                                     ,plVar6);
                  if (0xfffffffffffff000 < uVar8) {
                    _dev_err(*plVar6,"Failed to register panel event notifier, rc=%d\n",
                             uVar8 & 0xffffffff);
                    goto LAB_00102e80;
                  }
                  plVar6[0x42] = uVar8;
                  goto LAB_00102a00;
                }
                iVar13 = iVar13 + 1;
              } while (iVar3 != iVar13);
              if ((int)uVar8 == -0x205) {
                uVar8 = 0xfffffdfb;
                goto LAB_00102988;
              }
LAB_00102d98:
              _dev_err(*plVar6,"Failed to find active panel, rc=%d\n");
LAB_00102e80:
              if ((int)uVar8 < 0) goto LAB_00102988;
            }
LAB_00102a00:
            local_c8 = CONCAT44(local_c8._4_4_,0x800a);
            local_d0 = "battery_charger";
            local_b8 = battery_chg_callback_15375c5abb3d4800e10be4094632ba89_cfi_jt;
            local_b0 = battery_chg_state_cb_15375c5abb3d4800e10be4094632ba89_cfi_jt;
            local_c0 = plVar6;
            uVar8 = pmic_glink_register_client(lVar1,&local_d0);
            plVar6[0x14] = uVar8;
            if (uVar8 < 0xfffffffffffff001) {
              down_write(plVar2);
              *(undefined4 *)((long)plVar6 + 0x234) = 1;
              *(undefined1 *)((long)plVar6 + 0x30d) = 1;
              up_write(plVar2);
              plVar6[0x5c] = (long)battery_chg_ship_mode_15375c5abb3d4800e10be4094632ba89_cfi_jt;
              *(undefined4 *)(plVar6 + 0x5e) = 0xff;
              register_reboot_notifier(plVar6 + 0x5c);
              local_a4 = 0;
              uVar12 = *(undefined8 *)(*plVar6 + 0x2f0);
              of_property_read_string(uVar12,"qcom,wireless-fw-name",plVar6 + 0x44);
              of_property_read_variable_u32_array(uVar12,"qcom,shutdown-voltage",plVar6 + 0x46,1,0);
              local_98 = *(undefined4 *)((long)plVar6 + 0x19c);
              local_8c = 0;
              uStack_94 = 0;
              uStack_90 = 0xb;
              local_a0 = 0x10000800a;
              uVar4 = battery_chg_write(plVar6,&local_a0,0x18);
              if ((int)uVar4 < 0) {
                puVar10 = "<3>BATTERY_CHG: %s: Failed to read prop BATT_CHG_CTRL_LIM_MAX, rc=%d\n";
LAB_00102ecc:
                uVar8 = (ulong)uVar4;
                _printk(puVar10,"battery_chg_parse_dt",uVar8);
LAB_00102ef8:
                pcVar11 = "Failed to parse dt rc=%d\n";
LAB_00102f00:
                _dev_err(lVar1,pcVar11,uVar8);
              }
              else {
                iVar3 = of_property_count_elems_of_size(uVar12,"qcom,thermal-mitigation",4);
                if (0 < iVar3) {
                  *(undefined4 *)(plVar6 + 0x61) = 0;
                  iVar13 = 0;
                  uVar4 = *(uint *)(plVar6[0x32] + 0x2c);
                  do {
                    uVar5 = of_property_read_u32_index
                                      (uVar12,"qcom,thermal-mitigation",iVar13,&local_a4);
                    if ((int)uVar5 < 0) {
                      uVar8 = (ulong)uVar5;
                      goto LAB_00102ef8;
                    }
                    if (uVar4 < local_a4) {
                      _printk("<3>BATTERY_CHG: %s: Thermal levels should be in descending order\n","battery_chg_parse_dt");
                      *(undefined4 *)((long)plVar6 + 0x22c) = 0xffffffea;
                      goto LAB_00102c40;
                    }
                    iVar13 = iVar13 + 1;
                    uVar4 = local_a4;
                  } while (iVar3 != iVar13);
                  uVar4 = iVar3 + 1;
                  if ((ulong)(long)(int)uVar4 >> 0x3e == 0) {
                    puVar9 = (undefined4 *)
                             devm_kmalloc(*plVar6,-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 |
                                                  (ulong)uVar4 << 2,0xdc0);
                    plVar6[0x43] = (long)puVar9;
                    if (puVar9 != (undefined4 *)0x0) {
                      *puVar9 = *(undefined4 *)(plVar6[0x32] + 0x2c);
                      uVar4 = of_property_read_variable_u32_array
                                        (uVar12,"qcom,thermal-mitigation",puVar9 + 1,(long)iVar3,0);
                      if (-1 < (int)uVar4) {
                        lVar7 = plVar6[0x32];
                        goto LAB_00102c34;
                      }
                      puVar10 = "<3>BATTERY_CHG: %s: Error in reading qcom,thermal-mitigation, rc=%d\n";
                      goto LAB_00102ecc;
                    }
                    uVar8 = 0xfffffff4;
                  }
                  else {
                    uVar8 = 0xfffffff4;
                    plVar6[0x43] = 0;
                  }
                  goto LAB_00102ef8;
                }
                iVar3 = of_property_read_variable_u32_array
                                  (uVar12,"qcom,thermal-mitigation-step",&local_a4,1,0);
                if (-1 < iVar3) {
                  if ((local_a4 < 500000) ||
                     (lVar7 = plVar6[0x32], *(uint *)(lVar7 + 0x2c) <= local_a4)) {
                    _printk("<3>BATTERY_CHG: %s: thermal_fcc_step %d is invalid\n","battery_chg_parse_dt");
                    uVar8 = 0xffffffea;
                    goto LAB_00102ef8;
                  }
                  *(uint *)(plVar6 + 0x61) = local_a4;
                  uVar4 = 0;
                  if (local_a4 != 0) {
                    uVar4 = *(uint *)(lVar7 + 0x2c) / local_a4;
                  }
                  iVar3 = uVar4 - (*(uint *)(lVar7 + 0x2c) - uVar4 * local_a4 < 500000);
LAB_00102c34:
                  *(int *)((long)plVar6 + 0x22c) = iVar3;
                  *(undefined4 *)(plVar6 + 0x5f) = *(undefined4 *)(lVar7 + 0x2c);
                }
LAB_00102c40:
                lVar7 = *plVar6;
                *(long **)(param_1 + 0xa8) = plVar6;
                *(undefined4 *)(plVar6 + 0x59) = 0xffffffea;
                *(undefined4 *)((long)plVar6 + 0x2fc) = 1000000;
                local_a0 = *(undefined8 *)(lVar7 + 0x2f0);
                local_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_84 = 0;
                uStack_80 = 0;
                local_98 = 0;
                uStack_94 = 0;
                uStack_90 = SUB84(plVar6,0);
                local_8c = (undefined4)((ulong)plVar6 >> 0x20);
                uVar8 = devm_power_supply_register(lVar7,&usb_psy_desc,&local_a0);
                plVar6[0x35] = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
                  uVar8 = devm_power_supply_register(*plVar6,&wls_psy_desc,&local_a0);
                  plVar6[0x3b] = uVar8;
                  if (0xfffffffffffff000 < uVar8) {
                    plVar6[0x3b] = 0;
                    puVar10 = "<3>BATTERY_CHG: %s: Failed to register wireless power supply, rc=%d\n";
                    goto LAB_00102e20;
                  }
                  uVar8 = devm_power_supply_register(*plVar6,&batt_psy_desc,&local_a0);
                  plVar6[0x2f] = uVar8;
                  if (0xfffffffffffff000 < uVar8) {
                    puVar10 = "<3>BATTERY_CHG: %s: Failed to register battery power supply, rc=%d\n";
                    plVar6[0x2f] = 0;
                    goto LAB_00102e20;
                  }
LAB_00102ccc:
                  plVar6[1] = (long)"qcom-battery";
                  plVar6[3] = (long)&battery_class_groups;
                  uVar4 = __class_register(plVar6 + 1,&battery_chg_probe___key_12);
                  if (-1 < (int)uVar4) {
                    *(undefined4 *)(plVar6 + 0x5b) = 1000;
                    uVar8 = debugfs_create_dir("battery_charger",0);
                    if (uVar8 < 0xfffffffffffff001) {
                      plVar6[0x41] = uVar8;
                      debugfs_create_bool("block_tx",0x180,uVar8,(long)plVar6 + 0x2cc);
                    }
                    else {
                      _printk("<3>BATTERY_CHG: %s: Failed to create charger debugfs directory, rc=%d\n","battery_chg_add_debugfs");
                    }
                    *(undefined1 *)((long)plVar6 + 0x30e) = 0;
                    local_8c = 0;
                    uStack_88 = 0;
                    uStack_94 = 0;
                    uStack_90 = 0;
                    local_a0 = 0x20000800a;
                    local_98 = 4;
                    iVar3 = battery_chg_write(plVar6,&local_a0,0x1c);
                    if (iVar3 < 0) {
                      _printk("<3>BATTERY_CHG: %s: Failed to enable notification rc=%d\n","battery_chg_notify_enable",iVar3);
                    }
                    else {
                      *(undefined1 *)((long)plVar6 + 0x30e) = 1;
                    }
                    device_init_wakeup(*plVar6,1);
                    queue_work_on(0x20,_system_wq,plVar6 + 0x4d);
                    uVar8 = 0;
                    goto LAB_00102988;
                  }
                  uVar8 = (ulong)uVar4;
                  pcVar11 = "Failed to create battery_class rc=%d\n";
                  goto LAB_00102f00;
                }
                plVar6[0x35] = 0;
                puVar10 = "<3>BATTERY_CHG: %s: Failed to register USB power supply, rc=%d\n";
LAB_00102e20:
                _printk(puVar10,"battery_chg_init_psy",uVar8 & 0xffffffff);
                if (-1 < (int)uVar8) goto LAB_00102ccc;
              }
              down_write(plVar2);
              *(undefined4 *)((long)plVar6 + 0x234) = 0;
              *(undefined1 *)((long)plVar6 + 0x30d) = 0;
              up_write(plVar2);
              pmic_glink_unregister_client(plVar6[0x14]);
              cancel_work_sync(plVar6 + 0x4d);
              cancel_work_sync(plVar6 + 0x47);
              cancel_work_sync(plVar6 + 0x53);
              complete(plVar6 + 0x23);
              unregister_reboot_notifier(plVar6 + 0x5c);
            }
            else if ((int)uVar8 == -0x205) {
              uVar8 = 0xfffffdfb;
            }
            else {
              uVar8 = uVar8 & 0xffffffff;
              _dev_err(lVar1,"Error in registering with pmic_glink %d\n",uVar8);
            }
            if (plVar6[0x42] != 0) {
              panel_event_notifier_unregister();
            }
            goto LAB_00102988;
          }
        }
      }
    }
  }
  uVar8 = 0xfffffff4;
LAB_00102988:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8 & 0xffffffff;
}



/* ---- battery_chg_remove.15375c5abb3d4800e10be4094632ba89 @ 00102f80 ---- */

undefined8 battery_chg_remove_15375c5abb3d4800e10be4094632ba89(long param_1)

{
  undefined8 *in_x18;
  undefined8 *puVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  down_write(puVar1 + 0x1b);
  *(undefined4 *)((long)puVar1 + 0x234) = 0;
  *(undefined1 *)((long)puVar1 + 0x30d) = 0;
  up_write(puVar1 + 0x1b);
  if (puVar1[0x42] != 0) {
    panel_event_notifier_unregister();
  }
  device_init_wakeup(*puVar1,0);
  debugfs_remove(puVar1[0x41]);
  class_unregister(puVar1 + 1);
  pmic_glink_unregister_client(puVar1[0x14]);
  cancel_work_sync(puVar1 + 0x47);
  cancel_work_sync(puVar1 + 0x4d);
  cancel_work_sync(puVar1 + 0x53);
  unregister_reboot_notifier(puVar1 + 0x5c);
  return 0;
}



/* ---- battery_chg_subsys_up_work.15375c5abb3d4800e10be4094632ba89 @ 0010301c ---- */

void battery_chg_subsys_up_work_15375c5abb3d4800e10be4094632ba89(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  uint uVar4;
  undefined8 unaff_x30;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  lVar3 = param_1 + -0x238;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_44 = 0;
  local_4c = 0;
  if (*(char *)(param_1 + 0xd6) == '\0') {
    local_50 = 4;
    local_58 = 0x20000800a;
    iVar2 = battery_chg_write(lVar3,&local_58,0x1c);
    if (iVar2 < 0) {
      _printk("<3>BATTERY_CHG: %s: Failed to enable notification rc=%d\n","battery_chg_notify_enable",iVar2);
    }
    else {
      *(undefined1 *)(param_1 + 0xd6) = 1;
    }
  }
  msleep(200);
  uVar4 = *(uint *)(param_1 + 200);
  if (uVar4 != 0) {
    if (*(char *)(param_1 + 0xd4) != '\0') {
      if (*(uint *)(param_1 + 0xc4) <= uVar4) {
        uVar4 = *(uint *)(param_1 + 0xc4);
      }
      if (*(uint *)(param_1 + 0xc0) <= uVar4) {
        uVar4 = *(uint *)(param_1 + 0xc0);
      }
    }
    local_50 = *(undefined4 *)(param_1 + -0x98);
    local_44 = CONCAT44(local_44._4_4_,uVar4);
    local_4c = 0xa00000000;
    local_58 = 0x10000800a;
    iVar2 = battery_chg_write(lVar3,&local_58,0x18);
    if (iVar2 < 0) {
      _printk("<3>BATTERY_CHG: %s: Failed to set FCC %u, rc=%d\n","__battery_psy_set_charge_current",uVar4,iVar2);
      _printk("<3>BATTERY_CHG: %s: Failed to set FCC (%u uA), rc=%d\n","battery_chg_subsys_up_work",*(undefined4 *)(param_1 + 200),iVar2);
      iVar2 = *(int *)(param_1 + 0xcc);
      goto joined_r0x001030f4;
    }
    *(uint *)(param_1 + 200) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0xcc);
joined_r0x001030f4:
  if ((iVar2 != 0) && (iVar2 = usb_psy_set_icl(lVar3,5), iVar2 < 0)) {
    _printk("<3>BATTERY_CHG: %s: Failed to set ICL(%u uA), rc=%d\n","battery_chg_subsys_up_work",*(undefined4 *)(param_1 + 0xcc),iVar2);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- battery_chg_update_usb_type_work.15375c5abb3d4800e10be4094632ba89 @ 001031c0 ---- */

void battery_chg_update_usb_type_work_15375c5abb3d4800e10be4094632ba89(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34 = 0x700000000;
  local_38 = *(undefined4 *)(param_1 + -0x9c);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -0x268,&local_40,0x18);
  if (iVar2 < 0) {
    _printk("<3>BATTERY_CHG: %s: Failed to read USB_ADAP_TYPE rc=%d\n","battery_chg_update_usb_type_work",iVar2);
    goto LAB_001032cc;
  }
  iVar2 = *(int *)(*(long *)(param_1 + -0xa8) + 0x1c);
  if ((iVar2 != 1) && (iVar2 != 6)) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    iVar2 = *(int *)(*(long *)(param_1 + -0xa8) + 0x1c);
  }
  switch(iVar2) {
  case 2:
  case 9:
code_r0x00103280:
    DAT_00100168 = 5;
    break;
  case 3:
    DAT_00100168 = 6;
    break;
  case 4:
    DAT_00100168 = 7;
    break;
  case 5:
    DAT_00100168 = 8;
    break;
  case 6:
  case 7:
  case 8:
    DAT_00100168 = 9;
    break;
  default:
    if (iVar2 - 0x80U < 3) goto code_r0x00103280;
  case 1:
    DAT_00100168 = 4;
  }
LAB_001032cc:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- battery_chg_check_status_work.15375c5abb3d4800e10be4094632ba89 @ 00103318 ---- */

void battery_chg_check_status_work_15375c5abb3d4800e10be4094632ba89(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  lVar4 = param_1 + -0x298;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_38 = *(undefined4 *)(param_1 + -0xfc);
  local_34 = 0;
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(lVar4,&local_40,0x18);
  if (iVar2 < 0) {
    puVar3 = "<3>BATTERY_CHG: %s: Failed to read BATT_STATUS, rc=%d\n";
  }
  else {
    if (**(int **)(param_1 + -0x108) == 1) goto LAB_00103490;
    local_38 = *(undefined4 *)(param_1 + -0xfc);
    local_2c = 0;
    local_34 = 0x400000000;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(lVar4,&local_40,0x18);
    if (iVar2 < 0) {
      puVar3 = "<3>BATTERY_CHG: %s: Failed to read BATT_CAPACITY, rc=%d\n";
    }
    else {
      if (99 < *(int *)(*(long *)(param_1 + -0x108) + 0x10) + 0x32U) goto LAB_00103490;
      local_38 = *(undefined4 *)(param_1 + -0xfc);
      local_2c = 0;
      local_34 = 0x700000000;
      local_40 = 0x10000800a;
      iVar2 = battery_chg_write(lVar4,&local_40,0x18);
      if (-1 < iVar2) {
        if (*(uint *)(*(long *)(param_1 + -0x108) + 0x1c) / 1000 <= *(uint *)(param_1 + -0x68)) {
          _printk("<0>BATTERY_CHG: %s: Initiating a shutdown in 100 ms\n","battery_chg_check_status_work");
          msleep(100);
          _printk("<0>BATTERY_CHG: %s: Attempting kernel_power_off: Battery voltage low\n","battery_chg_check_status_work");
          kernel_power_off();
        }
        goto LAB_00103490;
      }
      puVar3 = "<3>BATTERY_CHG: %s: Failed to read BATT_VOLT_NOW, rc=%d\n";
    }
  }
  _printk(puVar3,"battery_chg_check_status_work",iVar2);
LAB_00103490:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- battery_chg_callback.15375c5abb3d4800e10be4094632ba89 @ 001034c0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
battery_chg_callback_15375c5abb3d4800e10be4094632ba89(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *in_x18;
  long *plVar9;
  undefined8 unaff_x30;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_38 = *(long *)(lVar5 + 0x5e0);
  down_read(param_1 + 0x1b);
  if (*(char *)((long)param_1 + 0x30d) == '\0') goto LAB_00103724;
  iVar6 = *(int *)(param_2 + 8);
  switch(iVar6) {
  case 4:
  case 5:
  case 0x36:
  case 0x47:
    goto code_r0x0010371c;
  default:
    puVar7 = "<3>BATTERY_CHG: %s: Unknown opcode: %u\n";
LAB_0010390c:
    _printk(puVar7,"handle_message",iVar6);
    break;
  case 7:
    if (param_3 != 0x10) {
      _printk("<3>BATTERY_CHG: %s: Incorrect response length %zu\n","handle_notification",param_3);
      goto LAB_00103724;
    }
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((uVar4 & 0xffff) == 0x79) {
      local_3c = uVar4 >> 0x10;
      raw_notifier_call_chain(&hboost_notifier,0,&local_3c);
      goto LAB_00103724;
    }
    if ((int)uVar4 < 0x34) {
      if (uVar4 == 0x30) {
LAB_00103798:
        plVar9 = param_1 + 0x2f;
        if (*(int *)(param_1 + 0x46) < 1) goto LAB_00103820;
        puVar8 = param_1 + 0x53;
      }
      else {
        if (uVar4 != 0x32) goto LAB_00103724;
        plVar9 = param_1 + 0x35;
        puVar8 = param_1 + 0x4d;
      }
      queue_work_on(0x20,_system_wq,puVar8);
    }
    else {
      if (uVar4 != 0x34) {
        if (uVar4 != 0x80) goto LAB_00103724;
        goto LAB_00103798;
      }
      plVar9 = param_1 + 0x3b;
    }
LAB_00103820:
    if ((plVar9 != (long *)0x0) && (*plVar9 != 0)) {
      power_supply_changed();
      pm_wakeup_dev_event(*param_1,0x32,1);
    }
    goto LAB_00103724;
  case 0x30:
    if ((param_3 != 0x90) || (puVar8 = (undefined8 *)param_1[0x30], puVar8 == (undefined8 *)0x0)) {
      if (param_3 == 0x18) {
        if (*(int *)(param_2 + 0x14) != 0) goto LAB_001036f0;
        if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x33)) {
          *(undefined4 *)(param_1[0x32] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
               *(undefined4 *)(param_2 + 0x10);
          goto code_r0x0010371c;
        }
      }
      else {
        _printk("<3>BATTERY_CHG: %s: Incorrect response length %zu for opcode %#x\n","validate_message",param_3,0x30);
      }
      break;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    puVar8[2] = *(undefined8 *)(param_2 + 0x20);
    puVar8[3] = uVar2;
    *puVar8 = uVar1;
    puVar8[1] = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puVar8[6] = *(undefined8 *)(param_2 + 0x40);
    puVar8[7] = uVar2;
    puVar8[4] = uVar1;
    puVar8[5] = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    puVar8[10] = *(undefined8 *)(param_2 + 0x60);
    puVar8[0xb] = uVar2;
    puVar8[8] = uVar1;
    puVar8[9] = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x88);
    uVar1 = *(undefined8 *)(param_2 + 0x70);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    puVar8[0xe] = *(undefined8 *)(param_2 + 0x80);
    puVar8[0xf] = uVar2;
    puVar8[0xc] = uVar1;
    puVar8[0xd] = uVar3;
    iVar6 = strcmp((char *)param_1[0x30],"Debug_Board");
    *(bool *)((long)param_1 + 0x2ce) = iVar6 == 0;
    goto code_r0x0010371c;
  case 0x31:
  case 0x33:
  case 0x35:
    if (param_3 == 0x18) {
      if (*(int *)(param_2 + 0x14) == 0) goto code_r0x0010371c;
LAB_001036f0:
      iVar6 = ___ratelimit(&validate_message__rs,"validate_message");
      if (iVar6 != 0) {
        _printk("<3>BATTERY_CHG: %s: Error in response for opcode %#x prop_id %u, rc=%d\n","validate_message",*(undefined4 *)(param_2 + 8),
                *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14));
      }
      *(undefined1 *)((long)param_1 + 0x30f) = 1;
    }
    else {
      _printk("<3>BATTERY_CHG: %s: Incorrect response length %zu for opcode %#x\n","validate_message",param_3);
    }
    break;
  case 0x32:
    if (param_3 == 0x18) {
      if (*(int *)(param_2 + 0x14) != 0) goto LAB_001036f0;
      if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x39)) {
        *(undefined4 *)(param_1[0x38] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
             *(undefined4 *)(param_2 + 0x10);
        goto code_r0x0010371c;
      }
    }
    else {
      _printk("<3>BATTERY_CHG: %s: Incorrect response length %zu for opcode %#x\n","validate_message",param_3,0x32);
    }
    break;
  case 0x34:
    if (param_3 == 0x18) {
      if (*(int *)(param_2 + 0x14) != 0) goto LAB_001036f0;
      if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x3f)) {
        *(undefined4 *)(param_1[0x3e] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
             *(undefined4 *)(param_2 + 0x10);
        goto code_r0x0010371c;
      }
    }
    else {
      _printk("<3>BATTERY_CHG: %s: Incorrect response length %zu for opcode %#x\n","validate_message",param_3,0x34);
    }
    break;
  case 0x40:
    if (param_3 != 0x10) {
      puVar7 = "<3>BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_check_update\n";
LAB_001038e8:
      _printk(puVar7,"handle_message",param_3);
      break;
    }
    if (*(int *)(param_2 + 0xc) == 1) {
      *(undefined1 *)((long)param_1 + 0x2cf) = 1;
    }
    goto code_r0x0010371c;
  case 0x42:
    if (param_3 != 0x10) {
      puVar7 = "<3>BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_update_status_resp\n";
      goto LAB_001038e8;
    }
    iVar6 = *(int *)(param_2 + 0xc);
    if (iVar6 != 1) {
      puVar7 = "<3>BATTERY_CHG: %s: Wireless FW update not done %d\n";
      goto LAB_0010390c;
    }
    complete(param_1 + 0x2b);
    break;
  case 0x43:
    if (param_3 != 0x10) {
      puVar7 = "<3>BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_push_buf_resp\n";
      goto LAB_001038e8;
    }
    if (*(int *)(param_2 + 0xc) == 1) {
      complete(param_1 + 0x27);
    }
    break;
  case 0x44:
    if (param_3 != 0x10) {
      puVar7 = "<3>BATTERY_CHG: %s: Incorrect response length %zu for wls_fw_get_version\n";
      goto LAB_001038e8;
    }
    *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0xc);
    goto code_r0x0010371c;
  }
  if (*(char *)((long)param_1 + 0x30f) != '\0') {
code_r0x0010371c:
    complete(param_1 + 0x23);
  }
LAB_00103724:
  up_read(param_1 + 0x1b);
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- battery_chg_state_cb.15375c5abb3d4800e10be4094632ba89 @ 00103938 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void battery_chg_state_cb_15375c5abb3d4800e10be4094632ba89(long param_1,int param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = param_1 + 0xd8;
  down_write(lVar1);
  if (*(char *)(param_1 + 0x30d) == '\0') {
    _printk("<4>BATTERY_CHG: %s: Driver not initialized, pmic_glink state %d\n","battery_chg_state_cb",param_2);
    up_write(lVar1);
  }
  else {
    *(int *)(param_1 + 0x234) = param_2;
    up_write(lVar1);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x30e) = 0;
    }
    else if (param_2 == 1) {
      queue_work_on(0x20,_system_wq,param_1 + 0x238);
    }
  }
  return;
}



/* ---- battery_chg_ship_mode.15375c5abb3d4800e10be4094632ba89 @ 001039dc ---- */

undefined8 battery_chg_ship_mode_15375c5abb3d4800e10be4094632ba89(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_38 = 0x20000800a;
  uStack_30 = 0x47;
  iVar3 = battery_chg_write(param_1 + -0x2e0,&local_38,0x10);
  if (iVar3 < 0) {
    _printk("<3>BATTERY_CHG: %s: Failed to send shutdown notification rc=%d\n","battery_chg_ship_mode",iVar3);
    cVar1 = *(char *)(param_1 + -0x13);
  }
  else {
    cVar1 = *(char *)(param_1 + -0x13);
  }
  if (cVar1 != '\0') {
    local_48 = 0x10000800a;
    uStack_40 = 0x36;
    if ((param_2 == 3) && (iVar3 = battery_chg_write(param_1 + -0x2e0,&local_48,0x10), iVar3 < 0)) {
      _printk("<0>BATTERY_CHG: %s: Failed to write ship mode: %d\n","battery_chg_ship_mode",iVar3);
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- usb_psy_set_icl @ 00103ad4 ---- */

int usb_psy_set_icl(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_50;
  undefined4 local_48;
  long local_44;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_44 = 0x700000000;
  local_48 = *(undefined4 *)(param_1 + 0x1cc);
  local_3c = 0;
  local_50 = 0x10000800a;
  iVar3 = battery_chg_write(param_1,&local_50,0x18);
  if (iVar3 < 0) {
    _printk("<3>BATTERY_CHG: %s: Failed to read prop USB_ADAP_TYPE, rc=%d\n","usb_psy_set_icl",iVar3);
  }
  else {
    iVar3 = -0x16;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x1c0) + 0x1c);
    if ((uVar1 < 7) && ((1 << (ulong)(uVar1 & 0x1f) & 0x4aU) != 0)) {
      if (param_3 < 0) {
        param_3 = -1;
      }
      local_50 = 0x10000800a;
      local_48 = *(undefined4 *)(param_1 + 0x1d0);
      local_44 = (ulong)param_2 << 0x20;
      local_3c = param_3;
      iVar3 = battery_chg_write(param_1,&local_50,0x18);
      if (iVar3 < 0) {
        _printk("<3>BATTERY_CHG: %s: Failed to set ICL (%u uA) rc=%d\n","usb_psy_set_icl",param_3,iVar3);
      }
      else {
        *(int *)(param_1 + 0x304) = param_3;
      }
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- usb_psy_get_prop.15375c5abb3d4800e10be4094632ba89 @ 00103c14 ---- */

ulong usb_psy_get_prop_15375c5abb3d4800e10be4094632ba89(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *in_x18;
  ulong uVar5;
  undefined8 unaff_x30;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = power_supply_get_drvdata();
  *param_3 = -0x3d;
  if (*(uint *)(lVar2 + 0x1c8) != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)(lVar2 + 0x1b8) + uVar5 * 4) == param_2) {
        if (-1 < (int)uVar5) {
          local_44 = 0;
          local_3c = 0;
          local_50 = 0x10000800a;
          local_48 = *(undefined4 *)(lVar2 + 0x1cc);
          iStack_40 = (int)uVar5;
          uVar3 = battery_chg_write(lVar2,&local_50,0x18);
          if ((int)uVar3 < 0) {
            uVar5 = uVar3 & 0xffffffff;
          }
          else {
            iVar1 = *(int *)(*(long *)(lVar2 + 0x1c0) + uVar5 * 4);
            *param_3 = iVar1;
            if (param_2 == 0x33) {
              iVar4 = -5;
              if (0 < iVar1) {
                iVar4 = 5;
              }
              uVar5 = 0;
              *param_3 = (iVar4 + iVar1) / 10;
            }
            else {
              uVar5 = 0;
            }
          }
        }
        goto LAB_00103c88;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(lVar2 + 0x1c8) != uVar5);
  }
  if (*(undefined8 **)(lVar2 + 0x1a8) != (undefined8 *)0x0) {
    _printk("<3>BATTERY_CHG: %s: No property id for property %d in psy %s\n","get_property_id",param_2,*(undefined8 *)**(undefined8 **)(lVar2 + 0x1a8))
    ;
  }
  uVar5 = 0xfffffffe;
LAB_00103c88:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
}



/* ---- usb_psy_set_prop.15375c5abb3d4800e10be4094632ba89 @ 00103d70 ---- */

ulong usb_psy_set_prop_15375c5abb3d4800e10be4094632ba89
                (undefined8 param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = power_supply_get_drvdata();
  if (*(uint *)(lVar1 + 0x1c8) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(long *)(lVar1 + 0x1b8) + uVar2 * 4) == param_2) {
        if (-1 < (int)uVar2) {
          if (param_2 == 0x25) {
            uVar2 = usb_psy_set_icl(lVar1,uVar2,*param_3);
            uVar2 = uVar2 & 0xffffffff;
          }
          else {
            uVar2 = 0;
          }
        }
        goto LAB_00103dc4;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(lVar1 + 0x1c8) != uVar2);
  }
  if (*(undefined8 **)(lVar1 + 0x1a8) != (undefined8 *)0x0) {
    _printk("<3>BATTERY_CHG: %s: No property id for property %d in psy %s\n","get_property_id",param_2,*(undefined8 *)**(undefined8 **)(lVar1 + 0x1a8))
    ;
  }
  uVar2 = 0xfffffffe;
LAB_00103dc4:
  return uVar2 & 0xffffffff;
}



/* ---- usb_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89 @ 00103e24 ---- */

bool usb_psy_prop_is_writeable_15375c5abb3d4800e10be4094632ba89(undefined8 param_1,int param_2)

{
  return param_2 == 0x25;
}



/* ---- panel_event_notifier_callback.15375c5abb3d4800e10be4094632ba89 @ 00103e38 ---- */

void panel_event_notifier_callback_15375c5abb3d4800e10be4094632ba89
               (undefined8 param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  if (param_2 != (int *)0x0) {
    if (*param_2 == 2) {
      local_34 = 0;
      local_3c = 0;
      if (*(char *)(param_3 + 0x30e) == '\0') {
        local_40 = 4;
        local_48 = 0x20000800a;
        iVar2 = battery_chg_write(param_3,&local_48,0x1c);
        if (iVar2 < 0) {
          _printk("<3>BATTERY_CHG: %s: Failed to enable notification rc=%d\n","battery_chg_notify_enable",iVar2);
        }
        else {
          *(undefined1 *)(param_3 + 0x30e) = 1;
        }
      }
    }
    else if (*param_2 == 1) {
      local_34 = 0;
      local_3c = 0;
      if (*(char *)(param_3 + 0x30e) != '\0') {
        local_40 = 5;
        local_48 = 0x20000800a;
        iVar2 = battery_chg_write(param_3,&local_48,0x1c);
        if (iVar2 < 0) {
          _printk("<3>BATTERY_CHG: %s: Failed to disable notification rc=%d\n","battery_chg_notify_disable",iVar2);
        }
        else {
          *(undefined1 *)(param_3 + 0x30e) = 0;
        }
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- wls_psy_get_prop.15375c5abb3d4800e10be4094632ba89 @ 00103f60 ---- */

ulong wls_psy_get_prop_15375c5abb3d4800e10be4094632ba89
                (undefined8 param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *in_x18;
  ulong uVar4;
  undefined8 unaff_x30;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = power_supply_get_drvdata();
  *param_3 = 0xffffffc3;
  if (*(uint *)(lVar2 + 0x1f8) != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(lVar2 + 0x1e8) + uVar4 * 4) == param_2) {
        if (-1 < (int)uVar4) {
          local_44 = 0;
          local_3c = 0;
          local_50 = 0x10000800a;
          local_48 = *(undefined4 *)(lVar2 + 0x1fc);
          iStack_40 = (int)uVar4;
          uVar3 = battery_chg_write(lVar2,&local_50,0x18);
          if ((int)uVar3 < 0) {
            uVar4 = uVar3 & 0xffffffff;
          }
          else {
            lVar1 = uVar4 * 4;
            uVar4 = 0;
            *param_3 = *(undefined4 *)(*(long *)(lVar2 + 0x1f0) + lVar1);
          }
        }
        goto LAB_00103fd4;
      }
      uVar4 = uVar4 + 1;
    } while (*(uint *)(lVar2 + 0x1f8) != uVar4);
  }
  if (*(undefined8 **)(lVar2 + 0x1d8) != (undefined8 *)0x0) {
    _printk("<3>BATTERY_CHG: %s: No property id for property %d in psy %s\n","get_property_id",param_2,*(undefined8 *)**(undefined8 **)(lVar2 + 0x1d8))
    ;
  }
  uVar4 = 0xfffffffe;
LAB_00103fd4:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 0xffffffff;
}



/* ---- wls_psy_set_prop.15375c5abb3d4800e10be4094632ba89 @ 00104080 ---- */

undefined8 wls_psy_set_prop_15375c5abb3d4800e10be4094632ba89(void)

{
  return 0;
}



/* ---- wls_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89 @ 00104090 ---- */

undefined8 wls_psy_prop_is_writeable_15375c5abb3d4800e10be4094632ba89(void)

{
  return 0;
}



/* ---- battery_psy_get_prop.15375c5abb3d4800e10be4094632ba89 @ 001040a0 ---- */

void battery_psy_get_prop_15375c5abb3d4800e10be4094632ba89
               (undefined8 param_1,int param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *in_x18;
  ulong uVar6;
  undefined8 unaff_x30;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = power_supply_get_drvdata();
  iVar5 = 0x3e;
  if (param_2 != 0x3d) {
    iVar5 = param_2;
  }
  *param_3 = 0xffffffc3;
  if (*(uint *)(lVar2 + 0x198) != 0) {
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(lVar2 + 0x188) + uVar6 * 4) == iVar5) {
        if ((int)uVar6 < 0) {
          uVar3 = uVar6 & 0xffffffff;
          goto LAB_00104120;
        }
        local_48 = *(undefined4 *)(lVar2 + 0x19c);
        uStack_3c = 0;
        local_50 = 0x10000800a;
        uStack_44 = 0;
        local_40 = (int)uVar6;
        uVar3 = battery_chg_write(lVar2,&local_50,0x18);
        if ((int)uVar3 < 0) goto LAB_00104120;
        switch(iVar5) {
        case 0x21:
          uVar4 = *(uint *)(lVar2 + 0x228);
          break;
        case 0x22:
          uVar4 = *(uint *)(lVar2 + 0x22c);
          break;
        default:
          uVar4 = *(uint *)(*(long *)(lVar2 + 400) + uVar6 * 4);
          break;
        case 0x2e:
          *param_3 = (*(int *)(*(long *)(lVar2 + 400) + uVar6 * 4) + 0x32U) / 100;
          goto LAB_00104120;
        case 0x33:
          iVar1 = *(int *)(*(long *)(lVar2 + 400) + uVar6 * 4);
          iVar5 = -5;
          if (0 < iVar1) {
            iVar5 = 5;
          }
          uVar4 = (iVar5 + iVar1) / 10;
          break;
        case 0x48:
          *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x180);
          goto LAB_00104120;
        }
        *param_3 = uVar4;
        goto LAB_00104120;
      }
      uVar6 = uVar6 + 1;
    } while (*(uint *)(lVar2 + 0x198) != uVar6);
  }
  if (*(undefined8 **)(lVar2 + 0x178) != (undefined8 *)0x0) {
    _printk("<3>BATTERY_CHG: %s: No property id for property %d in psy %s\n","get_property_id",iVar5,*(undefined8 *)**(undefined8 **)(lVar2 + 0x178));
  }
  uVar3 = 0xfffffffe;
LAB_00104120:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- battery_psy_set_prop.15375c5abb3d4800e10be4094632ba89 @ 00104270 ---- */

int battery_psy_set_prop_15375c5abb3d4800e10be4094632ba89
              (undefined8 param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *in_x18;
  uint uVar6;
  undefined8 unaff_x30;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_48 = *(long *)(lVar5 + 0x5e0);
  lVar5 = power_supply_get_drvdata();
  if (param_2 == 0x21) {
    iVar1 = *(int *)(lVar5 + 0x22c);
    if (iVar1 == 0) {
      iVar4 = 0;
      goto LAB_00104380;
    }
    if (-1 < iVar1) {
      uVar2 = *param_3;
      iVar4 = -0x16;
      if ((-1 < (int)uVar2) && ((int)uVar2 <= iVar1)) {
        if (*(int *)(lVar5 + 0x308) == 0) {
          uVar6 = *(uint *)(*(long *)(lVar5 + 0x218) + (ulong)uVar2 * 4);
        }
        else {
          uVar6 = *(int *)(*(long *)(lVar5 + 400) + 0x2c) - *(int *)(lVar5 + 0x308) * uVar2;
        }
        uVar3 = *(undefined4 *)(lVar5 + 0x2f8);
        *(uint *)(lVar5 + 0x2f8) = uVar6;
        if (*(char *)(lVar5 + 0x30c) != '\0') {
          if (*(uint *)(lVar5 + 0x2fc) <= uVar6) {
            uVar6 = *(uint *)(lVar5 + 0x2fc);
          }
        }
        local_58 = *(undefined4 *)(lVar5 + 0x1a0);
        local_54 = 0xa00000000;
        local_60 = 0x10000800a;
        local_4c = uVar6;
        iVar4 = battery_chg_write(lVar5,&local_60,0x18);
        if (iVar4 < 0) {
          _printk("<3>BATTERY_CHG: %s: Failed to set FCC %u, rc=%d\n","__battery_psy_set_charge_current",uVar6,iVar4);
        }
        else {
          *(uint *)(lVar5 + 0x300) = uVar6;
          if (iVar4 == 0) {
            *(uint *)(lVar5 + 0x228) = uVar2;
            goto LAB_00104380;
          }
        }
        *(undefined4 *)(lVar5 + 0x2f8) = uVar3;
      }
      goto LAB_00104380;
    }
    _printk("<3>BATTERY_CHG: %s: Incorrect num_thermal_levels\n","battery_psy_set_charge_current");
  }
  iVar4 = -0x16;
LAB_00104380:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- battery_psy_prop_is_writeable.15375c5abb3d4800e10be4094632ba89 @ 001043dc ---- */

bool battery_psy_prop_is_writeable_15375c5abb3d4800e10be4094632ba89(undefined8 param_1,int param_2)

{
  return param_2 == 0x21;
}



/* ---- soh_show.15375c5abb3d4800e10be4094632ba89 @ 001043f0 ---- */

long soh_show_15375c5abb3d4800e10be4094632ba89(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34 = 0x500000000;
  local_38 = *(undefined4 *)(param_1 + 0x194);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,"%d\n",
                      *(undefined4 *)(*(long *)(param_1 + 0x188) + 0x14));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- resistance_show.15375c5abb3d4800e10be4094632ba89 @ 001044a0 ---- */

long resistance_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34 = 0x1500000000;
  local_38 = *(undefined4 *)(param_1 + 0x194);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,"%u\n",
                      *(undefined4 *)(*(long *)(param_1 + 0x188) + 0x54));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- moisture_detection_status_show.15375c5abb3d4800e10be4094632ba89 @ 00104550 ---- */

long moisture_detection_status_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34 = 0x900000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,"%d\n",
                      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x24));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- moisture_detection_en_show.15375c5abb3d4800e10be4094632ba89 @ 00104600 ---- */

long moisture_detection_en_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34 = 0x800000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,"%d\n",
                      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x20));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- moisture_detection_en_store.15375c5abb3d4800e10be4094632ba89 @ 001046b0 ---- */

void moisture_detection_en_store_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_34 = 0x800000000;
    local_38 = *(undefined4 *)(param_1 + 0x1c8);
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- wireless_boost_en_show.15375c5abb3d4800e10be4094632ba89 @ 00104768 ---- */

long wireless_boost_en_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34 = 0x600000000;
  local_38 = *(undefined4 *)(param_1 + 500);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,"%d\n",
                      *(undefined4 *)(*(long *)(param_1 + 0x1e8) + 0x18));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- wireless_boost_en_store.15375c5abb3d4800e10be4094632ba89 @ 00104818 ---- */

void wireless_boost_en_store_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_34 = 0x600000000;
    local_38 = *(undefined4 *)(param_1 + 0x1f8);
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- fake_soc_show.15375c5abb3d4800e10be4094632ba89 @ 001048d0 ---- */

long fake_soc_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined4 *)(param_1 + 0x2c0));
  return (long)iVar1;
}



/* ---- fake_soc_store.15375c5abb3d4800e10be4094632ba89 @ 00104910 ---- */

undefined8
fake_soc_store_15375c5abb3d4800e10be4094632ba89
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  iVar2 = kstrtoint(param_3,0,&local_2c);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2c0) = local_2c;
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- wireless_fw_update_store.15375c5abb3d4800e10be4094632ba89 @ 0010499c ---- */

void wireless_fw_update_store_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  char local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_2c[0] = '\0';
  iVar2 = kstrtobool(param_3,local_2c);
  lVar3 = -0x16;
  if ((iVar2 == 0) && (local_2c[0] != '\0')) {
    iVar2 = wireless_fw_update(param_1 + -8,0);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- wireless_fw_update @ 00104a34 ---- */

int wireless_fw_update(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *in_x18;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x30;
  ulong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_58 = (ulong *)0x0;
  if (param_1[0x44] == 0) {
    _printk("<3>BATTERY_CHG: %s: wireless FW name is not specified\n","wireless_fw_update");
    iVar4 = -0x16;
    goto LAB_00104b28;
  }
  pm_stay_awake(*param_1);
  local_48 = *(undefined4 *)((long)param_1 + 0x1cc);
  local_44 = 0;
  local_3c = 0;
  local_50 = 0x10000800a;
  iVar4 = battery_chg_write(param_1,&local_50,0x18);
  if (-1 < iVar4) {
    if (*(int *)param_1[0x38] == 0) {
      local_48 = *(undefined4 *)((long)param_1 + 0x19c);
      local_3c = 0;
      local_44 = 0x400000000;
      local_50 = 0x10000800a;
      iVar4 = battery_chg_write(param_1,&local_50,0x18);
      if (-1 < iVar4) {
        if (0x270 < *(uint *)(param_1[0x32] + 0x10) >> 3) goto LAB_00104b78;
        _printk("<3>BATTERY_CHG: %s: Battery SOC should be at least 50%% or connect charger\n","wireless_fw_update");
        iVar4 = -0x16;
      }
    }
    else {
LAB_00104b78:
      iVar4 = firmware_request_nowarn(&local_58,param_1[0x44],*param_1);
      if (iVar4 == 0) {
        if (((local_58 == (ulong *)0x0) || (uVar9 = local_58[1], uVar9 == 0)) ||
           (uVar8 = *local_58, uVar8 == 0)) {
          _printk("<3>BATTERY_CHG: %s: Invalid firmware\n","wireless_fw_update");
LAB_00104bb8:
          iVar4 = -0x16;
        }
        else {
          if (uVar8 >> 0xe == 0) {
            _printk("<3>BATTERY_CHG: %s: Invalid firmware size %zu\n","wireless_fw_update",uVar8);
            goto LAB_00104bb8;
          }
          pcVar5 = strstr((char *)param_1[0x44],"9412");
          lVar2 = 0x86;
          if (pcVar5 != (char *)0x0) {
            lVar2 = 0x96;
          }
          lVar3 = 0x84;
          if (pcVar5 != (char *)0x0) {
            lVar3 = 0x94;
          }
          uVar1 = CONCAT22(*(undefined2 *)(uVar9 + lVar3),*(undefined2 *)(uVar9 + lVar2));
          if ((param_2 & 1) != 0) {
            uVar1 = 0xffffffff;
          }
          iVar4 = wireless_fw_check_for_update(param_1,uVar1,uVar8);
          if (iVar4 < 0) {
            puVar6 = "<3>BATTERY_CHG: %s: Wireless FW update not needed, rc=%d\n";
LAB_00104cb8:
            _printk(puVar6,"wireless_fw_update",iVar4);
          }
          else if (*(char *)((long)param_1 + 0x2cf) == '\0') {
            _printk("<4>BATTERY_CHG: %s: Wireless FW update not required\n","wireless_fw_update");
          }
          else {
            msleep(1000);
            *(undefined4 *)(param_1 + 0x2b) = 0;
            iVar4 = wireless_fw_send_firmware(param_1,local_58);
            if (iVar4 < 0) {
              puVar6 = "<3>BATTERY_CHG: %s: Failed to send FW chunk, rc=%d\n";
              goto LAB_00104cb8;
            }
            uVar7 = __msecs_to_jiffies(*(undefined4 *)(param_1 + 0x5b));
            iVar4 = wait_for_completion_timeout(param_1 + 0x2b,uVar7);
            if (iVar4 == 0) {
              _printk("<3>BATTERY_CHG: %s: Error, timed out updating firmware\n","wireless_fw_update");
              iVar4 = -0x6e;
            }
            else {
              _printk("<6>BATTERY_CHG: %s: Wireless FW update done\n","wireless_fw_update");
              iVar4 = 0;
            }
          }
        }
        *(undefined2 *)((long)param_1 + 0x2d4) = 0;
        release_firmware(local_58);
      }
      else {
        _printk("<3>BATTERY_CHG: %s: Couldn't get firmware rc=%d\n","wireless_fw_update",iVar4);
      }
    }
  }
  pm_relax(*param_1);
LAB_00104b28:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- wireless_fw_check_for_update @ 00104d24 ---- */

void wireless_fw_check_for_update(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_28 = 0x40;
  *(undefined1 *)(param_1 + 0x2cf) = 0;
  local_30 = 0x10000800a;
  uStack_1c = (uint)*(ushort *)(param_1 + 0x2d4);
  uStack_24 = param_2;
  local_20 = param_3;
  battery_chg_write(param_1,&local_30,0x18);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- wireless_fw_send_firmware @ 00104d9c ---- */

int wireless_fw_send_firmware(long param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *in_x18;
  undefined8 *__src;
  int iVar5;
  undefined8 unaff_x30;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  int local_6c;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x5e0);
  uVar4 = *param_2;
  iVar3 = (int)(uVar4 >> 7);
  if (iVar3 == 0) {
    iVar2 = -0x16;
    goto LAB_00104f6c;
  }
  iVar5 = 0;
  __src = (undefined8 *)param_2[1];
  lVar1 = param_1 + 0xd8;
  local_f8 = 0x10000800a;
  local_f0 = 0x41;
  do {
    iVar5 = iVar5 + 1;
    local_dc = __src[2];
    uStack_d4 = __src[3];
    local_ec = *__src;
    uStack_e4 = __src[1];
    local_bc = __src[6];
    uStack_b4 = __src[7];
    local_cc = __src[4];
    uStack_c4 = __src[5];
    local_9c = __src[10];
    uStack_94 = __src[0xb];
    local_ac = __src[8];
    uStack_a4 = __src[9];
    local_7c = __src[0xe];
    uStack_74 = __src[0xf];
    local_8c = __src[0xc];
    uStack_84 = __src[0xd];
    local_6c = iVar5;
    down_read(lVar1);
    if (*(int *)(param_1 + 0x234) == 0) goto LAB_00104f40;
    *(undefined4 *)(param_1 + 0x138) = 0;
    iVar2 = pmic_glink_write(*(undefined8 *)(param_1 + 0xa0),&local_f8,0x90);
    if (iVar2 == 0) {
      iVar2 = wait_for_completion_timeout(param_1 + 0x138,0x7d);
      if (iVar2 == 0) goto LAB_00104fac;
      up_read(lVar1);
    }
    else {
      up_read(lVar1);
      if (iVar2 < 0) goto LAB_00104f6c;
    }
    __src = __src + 0x10;
  } while (iVar3 != iVar5);
  if ((uVar4 & 0x7f) != 0) {
    local_6c = iVar3 + 1;
    local_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    local_cc = 0;
    uStack_c4 = 0;
    local_bc = 0;
    uStack_b4 = 0;
    local_ac = 0;
    uStack_a4 = 0;
    local_9c = 0;
    uStack_94 = 0;
    local_8c = 0;
    uStack_84 = 0;
    local_7c = 0;
    uStack_74 = 0;
    memcpy(&local_ec,__src,(ulong)((uint)uVar4 & 0x7f));
    down_read(lVar1);
    if (*(int *)(param_1 + 0x234) == 0) {
LAB_00104f40:
      iVar2 = -0x6b;
LAB_00104f44:
      up_read(lVar1);
      goto LAB_00104f6c;
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    iVar2 = pmic_glink_write(*(undefined8 *)(param_1 + 0xa0),&local_f8,0x90);
    if (iVar2 == 0) {
      iVar3 = wait_for_completion_timeout(param_1 + 0x138,0x7d);
      if (iVar3 == 0) {
LAB_00104fac:
        _printk("<3>BATTERY_CHG: %s: Error, timed out sending message\n","battery_chg_fw_write");
        iVar2 = -0x6e;
        goto LAB_00104f44;
      }
      up_read(lVar1);
    }
    else {
      up_read(lVar1);
      if (iVar2 < 0) goto LAB_00104f6c;
    }
  }
  iVar2 = 0;
LAB_00104f6c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- wireless_fw_force_update_store.15375c5abb3d4800e10be4094632ba89 @ 00104fd4 ---- */

void wireless_fw_force_update_store_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  char local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_2c[0] = '\0';
  iVar2 = kstrtobool(param_3,local_2c);
  lVar3 = -0x16;
  if ((iVar2 == 0) && (local_2c[0] != '\0')) {
    iVar2 = wireless_fw_update(param_1 + -8,1);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- wireless_fw_version_show.15375c5abb3d4800e10be4094632ba89 @ 0010506c ---- */

long wireless_fw_version_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_48 = 0x10000800a;
  local_40 = 0x44;
  iVar2 = battery_chg_write(param_1 + -8,&local_48,0xc);
  if (iVar2 < 0) {
    _printk("<3>BATTERY_CHG: %s: Failed to get FW version rc=%d\n","wireless_fw_version_show",iVar2);
  }
  else {
    iVar2 = scnprintf(param_3,0x1000,"%#x\n",*(undefined4 *)(param_1 + 0x2c8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- wireless_fw_crc_store.15375c5abb3d4800e10be4094632ba89 @ 00105138 ---- */

void wireless_fw_crc_store_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  short local_2c [2];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c[0] = 0;
  iVar2 = kstrtou16(param_3,0,local_2c);
  uVar3 = 0xffffffffffffffea;
  if ((iVar2 == 0) && (local_2c[0] != 0)) {
    *(short *)(param_1 + 0x2cc) = local_2c[0];
    uVar3 = param_4;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- wireless_fw_update_time_ms_show.15375c5abb3d4800e10be4094632ba89 @ 001051c8 ---- */

long wireless_fw_update_time_ms_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%u\n",*(undefined4 *)(param_1 + 0x2d0));
  return (long)iVar1;
}



/* ---- wireless_fw_update_time_ms_store.15375c5abb3d4800e10be4094632ba89 @ 00105208 ---- */

undefined8
wireless_fw_update_time_ms_store_15375c5abb3d4800e10be4094632ba89
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = kstrtouint(param_3,0,param_1 + 0x2d0);
  if (iVar1 != 0) {
    param_4 = 0xffffffffffffffea;
  }
  return param_4;
}



/* ---- wireless_type_show.15375c5abb3d4800e10be4094632ba89 @ 00105254 ---- */

long wireless_type_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_34 = 0x900000000;
  local_38 = *(undefined4 *)(param_1 + 500);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar3 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (-1 < iVar3) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x1e8) + 0x24);
    if (uVar1 < 4) {
      pcVar4 = (&qc_power_supply_wls_type_text)[uVar1];
    }
    else {
      pcVar4 = "Unknown";
    }
    iVar3 = scnprintf(param_3,0x1000,"%s\n",pcVar4);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar3;
}



/* ---- ship_mode_en_show.15375c5abb3d4800e10be4094632ba89 @ 00105324 ---- */

long ship_mode_en_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined1 *)(param_1 + 0x2c5));
  return (long)iVar1;
}



/* ---- ship_mode_en_store.15375c5abb3d4800e10be4094632ba89 @ 00105364 ---- */

undefined8
ship_mode_en_store_15375c5abb3d4800e10be4094632ba89
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = kstrtobool(param_3,param_1 + 0x2c5);
  if (iVar1 != 0) {
    param_4 = 0xffffffffffffffea;
  }
  return param_4;
}



/* ---- restrict_chg_show.15375c5abb3d4800e10be4094632ba89 @ 001053a8 ---- */

long restrict_chg_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined1 *)(param_1 + 0x304));
  return (long)iVar1;
}



/* ---- restrict_chg_store.15375c5abb3d4800e10be4094632ba89 @ 001053e8 ---- */

void restrict_chg_store_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  uint uVar4;
  undefined8 unaff_x30;
  char local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_54[0] = '\0';
  iVar2 = kstrtobool(param_3,local_54);
  if (iVar2 == 0) {
    lVar3 = 0x2f8;
    if (local_54[0] != '\0') {
      lVar3 = 0x2fc;
    }
    *(char *)(param_1 + 0x304) = local_54[0];
    uVar4 = *(uint *)(param_1 + -8 + lVar3);
    if (local_54[0] != '\0') {
      if (*(uint *)(param_1 + 0x2f4) <= uVar4) {
        uVar4 = *(uint *)(param_1 + 0x2f4);
      }
      if (*(uint *)(param_1 + 0x2f0) <= uVar4) {
        uVar4 = *(uint *)(param_1 + 0x2f0);
      }
    }
    local_48 = *(undefined4 *)(param_1 + 0x198);
    local_44 = 0xa00000000;
    local_50 = 0x10000800a;
    local_3c = uVar4;
    iVar2 = battery_chg_write(param_1 + -8,&local_50,0x18);
    if (iVar2 < 0) {
      _printk("<3>BATTERY_CHG: %s: Failed to set FCC %u, rc=%d\n","__battery_psy_set_charge_current",uVar4,iVar2);
    }
    else {
      *(uint *)(param_1 + 0x2f8) = uVar4;
    }
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}



/* ---- restrict_cur_show.15375c5abb3d4800e10be4094632ba89 @ 0010550c ---- */

long restrict_cur_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%u\n",*(undefined4 *)(param_1 + 0x2f4));
  return (long)iVar1;
}



/* ---- restrict_cur_store.15375c5abb3d4800e10be4094632ba89 @ 0010554c ---- */

long restrict_cur_store_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x5e0);
  local_64 = 0;
  iVar5 = kstrtouint(param_3,0,&local_64);
  if (iVar5 == 0) {
    uVar2 = *(uint *)(param_1 + 0x2f0);
    if (local_64 <= uVar2) {
      uVar3 = *(undefined4 *)(param_1 + 0x2f4);
      *(uint *)(param_1 + 0x2f4) = local_64;
      if (*(char *)(param_1 + 0x304) != '\0') {
        uVar1 = local_64;
        if (uVar2 <= local_64) {
          uVar1 = uVar2;
        }
        local_58 = *(undefined4 *)(param_1 + 0x198);
        local_54 = 0xa00000000;
        local_60 = 0x10000800a;
        local_4c = uVar1;
        iVar5 = battery_chg_write(param_1 + -8,&local_60,0x18);
        if (iVar5 < 0) {
          _printk("<3>BATTERY_CHG: %s: Failed to set FCC %u, rc=%d\n","__battery_psy_set_charge_current",uVar1,iVar5);
          param_4 = (long)iVar5;
          *(undefined4 *)(param_1 + 0x2f4) = uVar3;
        }
        else {
          *(uint *)(param_1 + 0x2f8) = uVar1;
        }
      }
      goto LAB_001055b4;
    }
  }
  param_4 = -0x16;
LAB_001055b4:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- usb_real_type_show.15375c5abb3d4800e10be4094632ba89 @ 00105670 ---- */

long usb_real_type_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_34 = 0xb00000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar4 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (iVar4 < 0) goto LAB_00105748;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1b8) + 0x2c);
  uVar6 = (ulong)uVar1;
  uVar8 = (ulong)(uVar1 - 0x80);
  if (uVar1 - 0x80 < 3) {
    ppuVar7 = &qc_power_supply_usb_type_text + uVar8;
    if (0x18 < uVar8 * 8 || uVar8 * -8 == -0x18) {
LAB_00105728:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10572c);
      (*pcVar3)();
    }
LAB_00105700:
    pcVar5 = *ppuVar7;
  }
  else {
    if (uVar1 < 10) {
      ppuVar7 = &power_supply_usb_type_text + uVar6;
      if (0x50 < uVar6 * 8 || uVar6 * -8 == -0x50) goto LAB_00105728;
      goto LAB_00105700;
    }
    pcVar5 = "Unknown";
  }
  iVar4 = scnprintf(param_3,0x1000,"%s\n",pcVar5);
LAB_00105748:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar4;
}



/* ---- usb_typec_compliant_show.15375c5abb3d4800e10be4094632ba89 @ 0010577c ---- */

long usb_typec_compliant_show_15375c5abb3d4800e10be4094632ba89
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34 = 0xc00000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,"%d\n",
                      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar2;
}



/* ---- init_module @ 001058f4 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  __platform_driver_register(&battery_chg_probe___key_12,&__this_module);
  return;
}



/* ---- cleanup_module @ 00105928 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  platform_driver_unregister(&battery_chg_probe___key_12);
  return;
}


/* functions: 52 ok, 0 failed */
