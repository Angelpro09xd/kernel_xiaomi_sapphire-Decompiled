/* Decompiled with Ghidra from focaltech_ts_i2c.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.data] samsung_ft3519t
// [.data] FT5X46
// [.data] FT5X46i
// [.data] ShortCircuit_ResMin
// [.data] ShortCircuit_VkResMin
// [.data] OpenTest_CBMin
// [.data] OpenTest_Check_K1
// [.data] OpenTest_K1Threshold
// [.data] OpenTest_Check_K2
// [.data] OpenTest_K2Threshold
// [.data] CBTest_Min
// [.data] CBTest_Max
// [.data] CBTest_VKey_Check
// [.data] CBTest_Min_Vkey
// [.data] CBTest_Max_Vkey
// [.data] RawDataTest_Min
// [.data] RawDataTest_Max
// [.data] RawDataTest_VKey_Check
// [.data] RawDataTest_Min_VKey
// [.data] RawDataTest_Max_VKey
// [.data] LCD_NoiseTest_Frame
// [.data] LCD_NoiseTest_Coefficient
// [.data] LCD_NoiseTest_Coefficient_key
// [.data] OpenTest_DifferMin
// [.data] OpenTest_DifferMax
// [.data] RawDataTest_High_Min
// [.data] RawDataTest_High_Max
// [.data] RawDataTest_HighFreq
// [.data] RawDataTest_Low_Min
// [.data] RawDataTest_Low_Max
// [.data] RawDataTest_LowFreq
// [.data] UniformityTest_Check_Tx
// [.data] UniformityTest_Check_Rx
// [.data] UniformityTest_Check_MinMax
// [.data] UniformityTest_Tx_Hole
// [.data] UniformityTest_Rx_Hole
// [.data] UniformityTest_MinMax_Hole
// [.data] SCapCbTest_OFF_Min
// [.data] SCapCbTest_OFF_Max
// [.data] ScapCBTest_SetWaterproof_OFF
// [.data] SCapCbTest_ON_Min
// [.data] SCapCbTest_ON_Max
// [.data] ScapCBTest_SetWaterproof_ON
// [.data] SCapRawDataTest_OFF_Min
// [.data] SCapRawDataTest_OFF_Max
// [.data] SCapRawDataTest_SetWaterproof_OFF
// [.data] SCapRawDataTest_ON_Min
// [.data] SCapRawDataTest_ON_Max
// [.data] SCapRawDataTest_SetWaterproof_ON
// [.data] WeakShortTest_CG
// [.data] WeakShortTest_CC
// [.data] PanelDifferTest_Min
// [.data] PanelDifferTest_Max
// [.data] SCapCbTest_High_Min
// [.data] SCapCbTest_High_Max
// [.data] ScapCBTest_SetHighSensitivity
// [.data] SCapRawDataTest_High_Min
// [.data] SCapRawDataTest_High_Max
// [.data] SCapRawDataTest_SetHighSensitivity
// [.data] SCapCbTest_Hov_Min
// [.data] SCapCbTest_Hov_Max
// [.data] ScapCBTest_SetHov
// [.data] SCapRawDataTest_Hov_Min
// [.data] SCapRawDataTest_Hov_Max
// [.data] SCapRawDataTest_SetHov
// [.data] RawDataTest_Min
// [.data] RawDataTest_Max
// [.data] CbTest_Min
// [.data] CbTest_Max
// [.data] DeltaCbTest_Base
// [.data] DeltaCbTest_Differ_Max
// [.data] DeltaCbTest_Include_Key_Test
// [.data] DeltaCbTest_Key_Differ_Max
// [.data] DeltaCbTest_Deviation_S1
// [.data] DeltaCbTest_Deviation_S2
// [.data] DeltaCbTest_Deviation_S3
// [.data] DeltaCbTest_Deviation_S4
// [.data] DeltaCbTest_Deviation_S5
// [.data] DeltaCbTest_Deviation_S6
// [.data] DeltaCbTest_Set_Critical
// [.data] DeltaCbTest_Critical_S1
// [.data] DeltaCbTest_Critical_S2
// [.data] DeltaCbTest_Critical_S3
// [.data] DeltaCbTest_Critical_S4
// [.data] DeltaCbTest_Critical_S5
// [.data] DeltaCbTest_Critical_S6
// [.rodata] 3[FTS_TS/E]%s:Key X Coords undefined!

// [.rodata] 6[FTS_TS/I]%s:VK Number:%d, key:(%d,%d,%d), coords:(%d,%d),(%d,%d),(%d,%d)

// [.rodata] focaltech,irq-gpio
// [.rodata] focaltech,avdd-gpio
// [.rodata] fts_avdd_gpio
// [.rodata] 3[FTS_TS/E]%s:read touchdata fails,ret:%d

// [.rodata] 6[FTS_TS/I]%s:APK execute HW Reset

// [.rodata] reset gpio:%d,int gpio:%d,irq:%d

// [.rodata] fts_irq_store
// [.rodata] tp is in boot mode

// [.rodata] 6[FTS_TS/I]%s:[EX-FUN]set to fw mode

// [.rodata] 3[FTS_TS/E]%s:read chip id fail,ret:%d

// [.rodata] 3[FTS_TS/E]%s:ecc init cmd write fail

// [.rodata] 3[FTS_TS/E]%s:app write fail

// [.rodata] 3[FTS_TS/E]%s:pram/bootloader read 03(SPI) command fail

// [.rodata] fts_pram_ecc_cal_xor
// [.rodata] fts_read_file_request_firmware
// [.rodata] 6[FTS_TS/I]%s:fw in tp isn't IDE version

// [.rodata] fts_fwupg_auto_upgrade
// [.rodata] 6[FTS_TS/I]%s:**********tp fw(app/param) no upgrade/upgrade success**********

// [.rodata] write start scan mode fail

// [.rodata] 3[FTS_TS/E][TEST]%s:read rawdata fail


// [.rodata] cb buffer malloc fail

// [.rodata] compare_array
// [.rodata] 3[FTS_TS/E][TEST]%s:read 0x54 register fail

// [.rodata] 3[FTS_TS/E][TEST]%s:name/data is null

// [.rodata] 3[FTS_TS/E][TEST]%s:get key_num fail

// [.rodata] 3[FTS_TS/I][TEST]%s:node_num:%d, tx:%d, rx:%d, key:%d

// [.rodata] fts_test_get_item_count_scap_csv
// [.rodata] 3[FTS_TS/E][TEST]%s:read reg06 fail


// [.rodata] 3[FTS_TS/E][TEST]%s:no IC type match

// [.rodata] get_basic_threshold
// [.rodata] RawData_Min_High_Tx
// [.rodata] [FTS_TS][TEST]%s:uniformity_min_max_hole:%d

// [.rodata] [FTS_TS][TEST]%s:scap_rawdata_off_min:%d

// [.rodata] get_test_threshold_sc
// [.rodata] [FTS_TS][TEST]%s:dcb_ds3:%d

// [.rodata] read 0xFB error,ret=%d

// [.rodata] switch no-mapping fail,ret=%d

// [.rodata] 3[FTS_TS/E]%s:Touch Screen(I2C BUS) driver probe fail

// [.rodata] 6[FTS_TS/I]%s:Touch Screen(I2C BUS) driver prboe successfully

// [.rodata] focaltech,reset-gpio
// [.rodata] 6[FTS_TS/I]%s:fw is invalid, need read boot id

// [.rodata] 3[FTS_TS/E]%s:Touchscreen Disabled, Can't enable irq.

// [.rodata] 6[FTS_TS/I]%s:%s: FB_BLANK_UNBLANK

// [.rodata] 6[FTS_TS/I]%s:%s: FB_BLANK %s, suspend function will be called

// [.rodata] 6[FTS_TS/I]%s:mode:%d, value:%d:%d:%d:%d

// [.rodata] 6[FTS_TS/I]%s:ENTER into

// [.rodata] 6[FTS_TS/I]%s:[EX]: sysfs_create_group() succeeded!!

// [.rodata] lct_fts_tp_work_callback
// [.rodata] 3[FTS_TS/E]%s:kzalloc for ta_buf fails

// [.rodata] fts_tprwreg_store
// [.rodata] 6[FTS_TS/I]%s:read 0x%02x, %d bytes successful

// [.rodata] FW Ver:0x%02x

// [.rodata] pen event:%s

// [.rodata] fts_ta_mode
// [.rodata] get_flow_cnt
// [.rodata] fts_fwupg_erase
// [.rodata] 6[FTS_TS/I]%s:***********read flash***********

// [.rodata] 6[FTS_TS/I]%s:upgrade param area(times:%d)

// [.rodata] 6[FTS_TS/I]%s:fw in host&tp not equal, need upgrade app+param

// [.rodata] 6[FTS_TS/I]%s:fw len(%x) < paramcfg offset(%x), no IDE

// [.rodata] focaltech_ts_fw_
// [.rodata] read_mass_data
// [.rodata] get short(adc) data fail

// [.rodata] 3[FTS_TS/E][TEST]%s:write short test mode fail


// [.rodata] 6[FTS_TS/I]%s:remove /proc/%s


// [.rodata] fts_test_start
// [.rodata] fts_test_main_exit
// [.rodata] 3[FTS_TS/I][TEST]%s:test item:0x%x in ini

// [.rodata] get_test_threshold_mc_sc
// [.rodata] RawDataTest_Max
// [.rodata] [FTS_TS][TEST]%s:dcb_cs3:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:enter factory mode fail,ret=%d


// [.rodata] 
------ scap cb test NG

// [.rodata] error_ch buffer malloc fail

// [.rodata] short_test_channel_to_channel
// [.rodata] 6[FTS_TS/I]%s:fod_status = %d


// [.rodata] 3[FTS_TS/E]%s:input initialize fail

// [.rodata] 3[FTS_TS/E]%s:not focal IC, unregister driver

// [.rodata] 3[FTS_TS/E]%s:Unable to get display-coords

// [.rodata] 3[FTS_TS/E]%s:Input device registration failed

// [.rodata] fts_power_source_init
// [.rodata] 3[FTS_TS/E]%s:Pin state[suspend] not found

// [.rodata] 3[FTS_TS/E]%s:disable vcc_i2c regulator failed,ret=%d

// [.rodata] 3[FTS_TS/E]%s:start cmd write fail

// [.rodata] 6[FTS_TS/I]%s:succuss to get gesture data in irq handler

// [.rodata] 3[FTS_TS/E]%s:tmpbuf zalloc fail

// [.rodata] 6[FTS_TS/I]%s:set CF reg

// [.rodata] 6[FTS_TS/I]%s:fts_reset_game_mode enter

// [.rodata] TpOpenTestFail
// [.rodata] lct_get_lockdown_info
// [.rodata] [Vendor]samsung,[FW]unknow,[IC]ft3519t

// [.rodata] 3[FTS_TS/E]%s:init_lct_tp_grip_area Failed!

// [.rodata] Param status:0x%02x

// [.rodata] fts_irq
// [.rodata] 3[FTS_TS/E]%s:read gesture header data fail

// [.rodata] fts_gesture_suspend
// [.rodata] 3[FTS_TS/E]%s:failed to allocate memory for bus_tx_buf

// [.rodata] 6[FTS_TS/I]%s:fw bin file len:%d

// [.rodata] 3[FTS_TS/E]%s:pramboot set write address(%d) fail

// [.rodata] 3[FTS_TS/E]%s:upg/func is null

// [.rodata] 6[FTS_TS/I]%s:tp_info: [Vendor]samsung,[FW]0x%02x,[IC]ft3519t


// [.rodata] 3[FTS_TS/E]%s:fw len(0x%0x) < fw ver offset(0x%x)

// [.rodata] 3[FTS_TS/E]%s:upg/ts_data/dev is null

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/../../vendor/qcom/opensource/touch-drivers/./fts_touch_i2c/focaltech_test/focaltech_test.c
// [.rodata] scan fail

// [.rodata] set mc_sc mode fail

// [.rodata] fts_test_save_data
// [.rodata] test functions init fail
// [.rodata] 3[FTS_TS/E][TEST]%s:get channel num fail

// [.rodata] tp_test_proc_write
// [.rodata] [FTS_TS][TEST]%s:section name:%s, key name:%s

// [.rodata] 3[FTS_TS/E][TEST]%s:mark(=)in keyword line fail

// [.rodata] [FTS_TS][TEST]%s:section num:%d, keyword num total:%d

// [.rodata] ini_get_ic_code
// [.rodata] 3[FTS_TS/E][TEST]%s:get mc_sc threshold fail


// [.rodata] ScapRawData_High_Min_
// [.rodata] [FTS_TS][TEST]%s:scap_rawdata_on_max:%d

// [.rodata] print_thr_sc
// [.rodata] 3[FTS_TS/E][TEST]%s:write normalize fail,ret=%d


// [.rodata] ft5452_panel_differ_test
// [.rodata] get rawdata fail

// [.rodata] &ts_data->fod_mutex
// [.rodata] 3[FTS_TS/E]%s:Key number undefined!

// [.rodata] 3[FTS_TS/E]%s:can't get ic informaton

// [.rodata] 6[FTS_TS/I]%s:get ic information, chip id = 0x%02x%02x(cid type=0x%x)

// [.rodata] fts_read_and_report_foddata
// [.rodata] fts_palm_sensor_cmd
// [.rodata] 6[FTS_TS/I]%s:mode:%d, value:%d,temp_value:%d, game value:0x%x,0x%x

// [.rodata] 3[FTS_TS/E]%s:lockdown info read error

// [.rodata] 3[FTS_TS/E]%s:PROC_READ_DATA read error

// [.rodata] Invalid cmd line

// [.rodata] Driver Ver:%s

// [.rodata] fts_log_level
// [.rodata] hover
// [.rodata] Cover Mode:%s

// [.rodata] fts_gesture_switch
// [.rodata] 6[FTS_TS/I]%s:AOD Code=%d

// [.rodata] fts_create_gesture_sysfs
// [.rodata] 6[FTS_TS/I]%s:**********write data to flash**********

// [.rodata] fts_flash_write_buf
// [.rodata] 3[FTS_TS/E]%s:upgrade/func/ts_data is null

// [.rodata] 3[FTS_TS/E]%s:write FC=0xAA fail

// [.rodata] 6[FTS_TS/I]%s:write pram and remap

// [.rodata] fts_pram_ecc_cal
// [.rodata] 6[FTS_TS/I]%s:read boot id:0x%02x%02x%02x

// [.rodata] 3[FTS_TS/E][TEST]%s:read mass data fail


// [.rodata] scan timeout

// [.rodata] 3[FTS_TS/E][TEST]%s:failed to enter factory mode,ret=%d


// [.rodata] 3[FTS_TS/E][TEST]%s:write start clb fail


// [.rodata] read cb fail

// [.rodata] fts_test_save_data_csv
// [.rodata] 3[FTS_TS/E][TEST]%s:malloc memory for test fail

// [.rodata] 3[FTS_TS/E][TEST]%s:malloc lct_tp_data_dump memory fail

// [.rodata] 3[FTS_TS/E][TEST]%s:malloc memory for ini tmp fail

// [.rodata] get incell threshold fail

// [.rodata] [FTS_TS][TEST]%s:basic thr:%s not found

// [.rodata] [FTS_TS][TEST]%s:cb_min_vk:%d

// [.rodata] get_test_item_mc_sc
// [.rodata] ScapRawData_ON_Min_
// [.rodata] [FTS_TS][TEST]%s:scap_rawdata_on_min:%d

// [.rodata] DeltaCxTest_Sort
// [.rodata] [FTS_TS][TEST]%s:dcb_ds5:%d

// [.rodata] write normalize fail,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:restore 0xFB fail,ret=%d


// [.rodata] ------ rawdata test NG

// [.rodata]  Tx Linearity:

// [.rodata] 3[FTS_TS/E][TEST]%s:get adc data of ca fails,ret:%d


// [.rodata] 3[FTS_TS/E][TEST]%s:w_buf buffer malloc fail


// [.rodata] Rx%d with
// [.rodata] 3[FTS_TS/E][TEST]%s:get rawdata fail


// [.rodata] TpParamParseFail
// [.rodata] 3[FTS_TS/E]%s:create apk debug node fail

// [.rodata] vcc_i2c
// [.rodata] pmx_ts_release
// [.rodata] 3[FTS_TS/E]%s:TP not ready, read:0x%02x%02x

// [.rodata] 3[FTS_TS/E]%s:read touch data fails

// [.rodata] 6[FTS_TS/I]%s:Already in suspend state

// [.rodata] 6[FTS_TS/I]%s:Mode:Nonui_Mode  nonui_status = %d

// [.rodata] 6[FTS_TS/I]%s:Change i2c addr 0x%x to 0x%x

// [.rodata] 6[FTS_TS/I]%s:Write 0x%02x, %d bytes successful

// [.rodata] 6[FTS_TS/I]%s:upgrade with bin file through sysfs node

// [.rodata] fts_driver_info
// [.rodata] Charger Reg(0x8B):%d

// [.rodata] 6[FTS_TS/I]%s:ecc in tp:%x, host:%x

// [.rodata] 3[FTS_TS/I][TEST]%s:enter factory mode success

// [.rodata] 3[FTS_TS/E][TEST]%s:start short test fail


// [.rodata] [FTS_TS][TEST]%s:reg%x=%x,retry:%d

// [.rodata] fts_test_init
// [.rodata] 3[FTS_TS/E][TEST]%s:TP selftest FAIL

// [.rodata] 3[FTS_TS/E][TEST]%s:test malloc for threshold fail

// [.rodata] [FTS_TS][TEST]%s:not support key, don't read key num register

// [.rodata] 3[FTS_TS/E][TEST]%s:[focal] %s() - ERROR: create fts_tp_differ proc()  failed.

// [.rodata] 3[FTS_TS/E][TEST]%s:malloc diffdata memory fail

// [.rodata] lct_tp_get_diffdata
// [.rodata] 3[FTS_TS/E][TEST]%s:section is null

// [.rodata] print_ini_data
// [.rodata] InvalidNode[%d][%d]
// [.rodata] 3[FTS_TS/I][TEST]%s:test items in total of driver:%d

// [.rodata] special basic thr init fail

// [.rodata] [FTS_TS][TEST]%s:scap_cb_wp_off_check:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_cs4:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_cs5:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:read 0x0A fail,ret=%d


// [.rodata] 
------ scap cb test PASS

// [.rodata] 3[FTS_TS/E][TEST]%s:scap_rawdata_on/off_min/max is null


// [.rodata] 3[FTS_TS/E][TEST]%s:scan scap rawdata fail


// [.rodata] ------ short test PASS

// [.rodata] ------ short test NG

// [.rodata] 3[FTS_TS/E][TEST]%s:failed to set error channels,ret:%d


// [.rodata] 3[FTS_TS/E][TEST]%s:read 0xFB fail,ret=%d


// [.rodata] lct_fts_tp_gesture_callback
// [.rodata] fts_ts_init
// [.rodata] fts_ts
// [.rodata] 3[FTS_TS/E]%s:invalid:%s, size:%d

// [.rodata] fts_input_init
// [.rodata] 3[FTS_TS/E]%s:touch point ID(%d) beyond max_touch_number(%d)

// [.rodata] 6[FTS_TS/I]%s:registered for panel notifications panel: 0x%x


// [.rodata] fts_ts_panel_notifier_callback
// [.rodata] 3[FTS_TS/E]%s:%s fts_write_reg CF failed

// [.rodata] fod_test
// [.rodata] Write Reg: [%02X]-[%02X]

// [.rodata] ESD count:0x%02x

// [.rodata] fts_pen
// [.rodata] fts_fwupg_enter_into_boot
// [.rodata] 6[FTS_TS/I]%s:force upgrade fw app(times:%d)

// [.rodata] 6[FTS_TS/I]%s:send 0xAA and 0x55 to FW, reset to boot environment

// [.rodata] 6[FTS_TS/I]%s:tp run in pramboot

// [.rodata] fts_fwupg_reset_to_romboot
// [.rodata] fts_pram_write_buf
// [.rodata] 6[FTS_TS/I]%s:fts_param_ide_in_host fail

// [.rodata] 6[FTS_TS/I]%s:fw paramcfg version offset:%x

// [.rodata] 3[FTS_TS/E]%s:**********tp fw(app/param) upgrade failed**********

// [.rodata] 3[FTS_TS/E]%s:upgrade mode(09) cmd write fail

// [.rodata] print_buffer
// [.rodata] fts_test_write
// [.rodata] short test timeout, ADC data not OK

// [.rodata] start_scan
// [.rodata] get_rawdata_mc_sc
// [.rodata] 3[FTS_TS/E][TEST]%s:test functions init fail

// [.rodata] 

=======Tp test pass.

// [.rodata] get channel number fail

// [.rodata] tx_num:%d, rx_num:%d, key_num:%d

// [.rodata] 3[FTS_TS/I][TEST]%s:match test function,type:%x

// [.rodata] 3[FTS_TS/E][TEST]%s:lct_tp_get_rawdata() failed, ret = %d

// [.rodata] 3[FTS_TS/E][TEST]%s:read diffdata fail

// [.rodata] [FTS_TS][TEST]%s:ini is null

// [.rodata] [FTS_TS][TEST]%s:normalize:%d

// [.rodata] [FTS_TS][TEST]%s:cb_min:%d

// [.rodata] [FTS_TS][TEST]%s:rawdata2_max:%d

// [.rodata] McapCMBTest_Max_Hole
// [.rodata] [FTS_TS][TEST]%s:rawdata_l_min:%d

// [.rodata] [FTS_TS][TEST]%s:uniformity_check_tx:%d

// [.rodata] ft5452_scap_cb_test
// [.rodata] 3[FTS_TS/E][TEST]%s:scap rawdata num(%d) > buffer length(%d)

// [.rodata] get scap(WP_ON) rawdata fail

// [.rodata] 3[FTS_TS/E][TEST]%s:adc_data buffer malloc fail


// [.rodata] get adc data of cc fails,ret:%d

// [.rodata] 3[FTS_TS/E]%s:init gesture fail

// [.rodata] fts_parse_dt
// [.rodata] 6[FTS_TS/I]%s:Already in awake state

// [.rodata] 3[FTS_TS/E]%s:Invalid notification


// [.rodata] 6[FTS_TS/I]%s:fw upgrade in process, can't suspend

// [.rodata] 6[FTS_TS/I]%s:gesture_support:%d  poweroff_on_sleep:%d 

// [.rodata] 6[FTS_TS/I]%s:%s,buf:%s,count:%u


// [.rodata] 6[FTS_TS/I]%s:Mode:FodIcon  fod_icon_status = %d

// [.rodata] fts_get_mode_all
// [.rodata] fts_gesture_mode
// [.rodata] gesture bmode:%d

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/../../vendor/qcom/opensource/touch-drivers/./fts_touch_i2c/focaltech_flash.c
// [.rodata] 3[FTS_TS/E]%s:pram/bootloader write 03 command fail

// [.rodata] fts_pram_write_init
// [.rodata] 3[FTS_TS/E]%s:pramboot(before) init fail

// [.rodata] 6[FTS_TS/I]%s:write pramboot to pram

// [.rodata] 6[FTS_TS/I]%s:remap to start pramboot

// [.rodata] fts_fwupg_check_flash_status
// [.rodata] fts_fwupg_get_ver_in_tp
// [.rodata] 3[FTS_TS/E]%s:read IDE PARAM STATUS in tp fail

// [.rodata] test fail,rx%d=%5d,range=(%5d,%5d)

// [.rodata] [FTS_TS][TEST]%s:name:%s,len:%d

// [.rodata] fts_tp_txt_result
// [.rodata] wirte line/start addr fail

// [.rodata] tp_data_dump
// [.rodata] 3[FTS_TS/E][TEST]%s:Failed to Scan ...

// [.rodata] 3[FTS_TS/E][TEST]%s:ini_init_inidata fail

// [.rodata] INVALID_NODES
// [.rodata] RawData_Max_Low_Tx
// [.rodata] Rx_Linearity_Max_Tx
// [.rodata] 3[FTS_TS/E][TEST]%s:tx/rx_lmax/node_valid is null


// [.rodata] 3[FTS_TS/E][TEST]%s:switch no-mapping fail,ret=%d


// [.rodata] scan scap rawdata fail

// [.rodata] Offset:%d, Code1:%d

// [.rodata] get adc data of cg(70K) fails,ret:%d

// [.rodata] 
Mutual Short:

// [.rodata] 3[FTS_TS/E]%s:parse drm-panel fail

// [.rodata] focaltech,key-y-coords
// [.rodata] 6[FTS_TS/I]%s:display x(%d %d) y(%d %d)

// [.rodata] 3[FTS_TS/E]%s:read touchdata2 fails,ret:%d

// [.rodata] 6[FTS_TS/I]%s:make TP enter into sleep mode

// [.rodata] fts_create_sysfs
// [.rodata] 3[FTS_TS/E]%s:write FTS_SET_ANGLE, err


// [.rodata] 6[FTS_TS/I]%s:init_lct_tp_work Succeeded!

// [.rodata] fts_bootmode_store
// [.rodata] 3[FTS_TS/E]%s:MODE_CHARGER switch to %d fail

// [.rodata] Gesture PointNum:%d

// [.rodata] esdcheck_algorithm
// [.rodata] 3[FTS_TS/E]%s:read reg0x91 fail,ret:%d

// [.rodata] PRC: %s

// [.rodata] 3[FTS_TS/E]%s:fts_data/client/cmdlen(%d)/data/datalen(%d) is invalid

// [.rodata] fts_bus_init
// [.rodata] 6[FTS_TS/I]%s:pram supported, write pramboot and init

// [.rodata] 3[FTS_TS/E]%s:erase cmd fail

// [.rodata] 6[FTS_TS/I]%s:tp run in romboot

// [.rodata] 6[FTS_TS/I]%s:fw invalid, need upgrade fw

// [.rodata] get_cb_sc
// [.rodata] write cb addr offset fail

// [.rodata] 3[FTS_TS/E][TEST]%s:data/node_valid is null


// [.rodata] 3[FTS_TS/E][TEST]%s:data/min/max/node_valid is null


// [.rodata] 3[FTS_TS/E][TEST]%s:wait state update fail


// [.rodata] get rawdata fail,ret=%d

// [.rodata] SCap Rx: 
// [.rodata] ini_init_inidata
// [.rodata] 3[FTS_TS/E][TEST]%s:ini_parse_keyword fail

// [.rodata] [FTS_TS][TEST]%s:rawdata_max_vk:%d

// [.rodata] [FTS_TS][TEST]%s:open_diff_min:%d

// [.rodata] ScapRawData_Hov_Min_
// [.rodata] [FTS_TS][TEST]%s:dcb_ds6:%d

// [.rodata] Rawdata Test
// [.rodata] 3[FTS_TS/E][TEST]%s:failed to switch_to_mapping,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:short_resistance buffer malloc fail


// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/include/linux/i2c.h
// [.rodata] 3[FTS_TS/E]%s:fail to get power(regulator)

// [.rodata] 3[FTS_TS/E]%s:power on fail, ret=%d

// [.rodata] 3data invalided!

// [.rodata] BUS:%s,addr:0x%x

// [.rodata] fts_gesture_resume
// [.rodata] 6[FTS_TS/I]%s:Enter. type = %u, code = %u, value = %d

// [.rodata] 3[FTS_TS/E]%s:read chip id 3 times fail, need execute TP reset

// [.rodata] 3[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail

// [.rodata] 3[FTS_TS/E]%s:pram/bootloader read 03(SPI_V2) command fail

// [.rodata] 3[FTS_TS/E]%s:read flash fail

// [.rodata] 6[FTS_TS/I]%s:tp fw invaild

// [.rodata] 3[FTS_TS/E]%s:pramboot init fail

// [.rodata] 6[FTS_TS/I]%s:read out pramboot checksum

// [.rodata] fts_read_file
// [.rodata] 6[FTS_TS/I]%s:fw is invalid, upgrade app+param

// [.rodata] 6[FTS_TS/I]%s:fw in host&tp are both ide

// [.rodata] 3[FTS_TS/E]%s:read fw param ver from tp fail

// [.rodata] fts_fwupg_work
// [.rodata] fts_ft5452j_pram_write_remap
// [.rodata] fts_ft5452j_pram_ecc_cal_algo
// [.rodata] 3[FTS_TS/E][TEST]%s:set fir fail,ret=%d


// [.rodata] 3[FTS_TS/E][TEST]%s:get rawdata fail,ret=%d


// [.rodata] write short test mode fail

// [.rodata] 3[FTS_TS/I][TEST]%s:test buffer length:%d

// [.rodata] fts_test_malloc_free_data_txt
// [.rodata] 3[FTS_TS/E][TEST]%s:rawdata and diffdata not free!

// [.rodata] 3[FTS_TS/E][TEST]%s:read rawdata failed

// [.rodata] read normalize fail,ret=%d

// [.rodata] ft5452_uniformity_test
// [.rodata] SCAP CB Test
// [.rodata] 3[FTS_TS/E][TEST]%s:read 5A fails


// [.rodata] 3[FTS_TS/E]%s:vcc_i2c regulator set_vtg failed,ret=%d

// [.rodata] 3[FTS_TS/E]%s:read fod failed, ret:%d

// [.rodata] get tp fw version fail!

// [.rodata] 3[FTS_TS/E]%s:apk proc read count(%d) fail

// [.rodata] fts_ta_read
// [.rodata] Write %02X failed, ret: %d

// [.rodata] fts_dump_reg
// [.rodata] Param Ver:0x%02x

// [.rodata] fts_boot_mode
// [.rodata] 6[FTS_TS/I]%s:[GESTURE]Write fod reg:%d success!


// [.rodata] 3[FTS_TS/E]%s:set flash address fail

// [.rodata] 6[FTS_TS/I]%s:upgrade fw bin success

// [.rodata] 6[FTS_TS/I]%s:fw upgrade init function

// [.rodata] 3[FTS_TS/E]%s:write start pram cmd fail

// [.rodata] 3[FTS_TS/E]%s:get fw ver in tp fail

// [.rodata] read rawdata fail

// [.rodata] data/min/max/node_valid is null

// [.rodata] fts_tp_csv_test
// [.rodata] read_rawdata
// [.rodata] fts_test_malloc_free_thr
// [.rodata] 3[FTS_TS/E][TEST]%s:tdata->testresult malloc fail


// [.rodata] %s, %d, %d, %d, %d, %d, 
// [.rodata] ini_get_key
// [.rodata] 3[FTS_TS/I][TEST]%s:firmware request(%s) success

// [.rodata] 3[FTS_TS/E][TEST]%s:section num(%d)>max(%d), please check MAX_INI_SECTION_NUM

// [.rodata] [FTS_TS][TEST]%s:lcdnoise_frame:%d

// [.rodata] ScapCB_Hov_Min_
// [.rodata] [FTS_TS][TEST]%s:rawdata_set_lfreq:%d

// [.rodata] [FTS_TS][TEST]%s:panel_differ_max:%d

// [.rodata] failed to switch_to_mapping,ret=%d
// [.rodata] Check Tx Linearity

// [.rodata] scap_cb in waterproof off mode:

// [.rodata] 
------ scap rawdata test NG

// [.rodata] short test of channel to all fails

// [.rodata] 3[FTS_TS/E][TEST]%s:------ short test NG


// [.rodata] 3[FTS_TS/E][TEST]%s:get adc data of cc fails,ret:%d


// [.rodata] [FTS_TS][TEST]%s:channel to channel test fail

// [.rodata] fts_get_dt_coords
// [.rodata] 3[FTS_TS/E]%s:Pin state[release] not found

// [.rodata] 3[FTS_TS/E]%s:Bus don't resume from pm(deep),timeout,skip irq

// [.rodata] fts_set_cur_value
// [.rodata] 6[FTS_TS/I]%s:2.FTS_REG_GESTURE_EN = %d

// [.rodata] 6[FTS_TS/I]%s:update tp_info:%s

// [.rodata] fts_debug_write
// [.rodata] 3[FTS_TS/E]%s:cmd(PROC_READ_DATA) length(%d) fail

// [.rodata] Result: success

// [.rodata] Glove Reg(0xC0):%d

// [.rodata] fts_fod_recovery
// [.rodata] 6[FTS_TS/I]%s:resume from gesture successfully

// [.rodata] 3[FTS_TS/E]%s:fw not in bootloader, fail

// [.rodata] fts_flash_read
// [.rodata] 3[FTS_TS/E]%s:write FC=0x55 fail

// [.rodata] 3[FTS_TS/E]%s:not in pramboot

// [.rodata] fts_param_get_ver_in_tp
// [.rodata] fts_ft5452j_pram_start
// [.rodata] test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)

// [.rodata] mapping_switch
// [.rodata] write short state fail

// [.rodata] 3[FTS_TS/E][TEST]%s:[focal] %s() - ERROR: create fts_tp_differ_txt proc()  failed.

// [.rodata] fts_test_get_ini_via_request_firmware
// [.rodata] [FTS_TS][TEST]%s:open_k2_value:%d

// [.rodata] ScapCB_OFF_Max_
// [.rodata] 
============ Test Item: rawdata test

// [.rodata] ------ rawdata test PASS

// [.rodata] ------ panel differ test NG

// [.rodata] 3[FTS_TS/E]%s:set gpio reset to high failed

// [.rodata] 3[FTS_TS/E]%s:Unable to read %s, please check dts

// [.rodata] fts_irq_handler
// [.rodata] fts_power_source_resume
// [.rodata] fts_create_apk_debug_channel
// [.rodata] 6[FTS_TS/I]%s:create /proc/tp_info & /proc/tp_lockdown_info succeeded

// [.rodata] 6[FTS_TS/I]%s:init_lct_tp_selftest Succeeded!

// [.rodata] %02X 
// [.rodata] fts_force_upgrade
// [.rodata] log level:%d

// [.rodata] fts_touch_size
// [.rodata] 6[FTS_TS/I]%s:[GESTURE]Write gesture reg success!


// [.rodata] 3[FTS_TS/E]%s:make IC exit gesture(resume) fail,state:%x

// [.rodata] fts_gesture_bm
// [.rodata] 3[FTS_TS/E]%s:pram write_init fail

// [.rodata] 3[FTS_TS/E]%s:enter into pramboot/bootloader fail

// [.rodata] 6[FTS_TS/I]%s:param don't need upgrade

// [.rodata] 3[FTS_TS/E]%s:get fw file(default) fail

// [.rodata] 3[FTS_TS/E]%s:param version in host invalid

// [.rodata] 3[FTS_TS/E]%s:fw len(%x) < paramcfg ver offset(%x)

// [.rodata] 3[FTS_TS/E]%s:erase cmd write fail

// [.rodata] Wait State Update fail,reg%x=%x

// [.rodata] fts_test_main_init
// [.rodata] get_channel_num
// [.rodata] TestItem Num, %d, 
// [.rodata] [FTS_TS][TEST]%s:open_diff_max:%d

// [.rodata] ScapCB_ON_Max_
// [.rodata] [FTS_TS][TEST]%s:scap_cb_off_min:%d

// [.rodata] [FTS_TS][TEST]%s:scap_rawdata_off_max:%d

// [.rodata] ini_init_test_sc
// [.rodata] min:%d, max:%d, get value of min/max:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:get adc data of cg fails,ret:%d


// [.rodata] 
GND Short:

// [.rodata] Tx%d with
// [.rodata] read 0xFB fail,ret=%d

// [.rodata] fts_ts_probe
// [.rodata] TpFirmwareLoadFail
// [.rodata] 6[FTS_TS/I]%s:abnormal touch data from fw

// [.rodata] 6[FTS_TS/I]%s:resume reset

// [.rodata] 3[FTS_TS/E]%s:%s fts_fod_reg_write failed

// [.rodata] 6[FTS_TS/I]%s:fts_game_value[0]:%d,fts_game_value[1]:%d

// [.rodata] 6[FTS_TS/I]%s:%s Touchpad

// [.rodata] 3[FTS_TS/E]%s:init_lct_tp_work Failed!

// [.rodata] 3[FTS_TS/E]%s:apk proc count(%d) fail

// [.rodata] BUS:%s,mode:%d,max_freq:%d

// [.rodata] 6[FTS_TS/I]%s:disable irq

// [.rodata] 3[FTS_TS/E]%s:gesture sys node create fail

// [.rodata] 3[FTS_TS/E]%s:ecc flash status check fail

// [.rodata] 3[FTS_TS/E]%s:ecc calc cmd write fail

// [.rodata] 3[FTS_TS/E]%s:upgrade func/upgrade is null, return immediately

// [.rodata] 6[FTS_TS/I]%s:pramboot initialization

// [.rodata] 3[FTS_TS/E]%s:upg/func/buf is null

// [.rodata] 6[FTS_TS/I]%s:pramboot len=%d

// [.rodata] 3[FTS_TS/E]%s:ecc_finish read cmd fail

// [.rodata] 3[FTS_TS/E]%s:ver is NULL

// [.rodata] 3[FTS_TS/E]%s:upgrade/func/fw is NULL

// [.rodata] 6[FTS_TS/I]%s:fw in tp is IDE version

// [.rodata] 6[FTS_TS/I]%s:param version in tp invalid

// [.rodata] %s%s.bin
// [.rodata] read_mass_data_u16
// [.rodata] set fir fail,ret=%d

// [.rodata] [FTS_TS][TEST]%s:adc data:


// [.rodata] 3[FTS_TS/E][TEST]%s:test fail,rx%d=%5d,range=(%5d,%5d)


// [.rodata] compare_mc_sc
// [.rodata] 3[FTS_TS/E][TEST]%s:test init basicinfo fail

// [.rodata] 









// [.rodata] lct_tp_get_rawdata
// [.rodata] FTS_testdata.csv
// [.rodata] [FTS_TS][TEST]%s:ini/data/tmp is null

// [.rodata] ini_init_interface
// [.rodata] 3[FTS_TS/E][TEST]%s:basic_thr string length > count


// [.rodata] Basic_Threshold
// [.rodata] ScapCB_High_Max_
// [.rodata] ScapCB_Hov_Max_
// [.rodata] Panel_Differ_Max_Tx
// [.rodata] switch mapping fail,ret=%d

// [.rodata] tx/rx_lmax/node_valid is null

// [.rodata] Check Rx Linearity

// [.rodata] min_max out of range, set value: %d

// [.rodata] uniformity test is OK

// [.rodata] 3[FTS_TS/E][TEST]%s:get scap(WP_ON) rawdata fail


// [.rodata] short test of channel to channel fails

// [.rodata] focaltech,display-coords
// [.rodata] 3[FTS_TS/E]%s:find drm_panel count(%d) fail

// [.rodata] fts_show_touch_buffer
// [.rodata] 6[FTS_TS/I]%s:finger_in_fod:%d fod_finger_skip:%d  ts_data->fod_pressed:%d

// [.rodata] 3[FTS_TS/E]%s:don't support


// [.rodata] 3[FTS_TS/E]%s:set palm sensor cmd failed: %d


// [.rodata] fts_palm_sensor_write
// [.rodata] 3[FTS_TS/E]%s:[EX]: sysfs_create_group() failed!!

// [.rodata] 3[FTS_TS/E]%s:init_lct_tp_gesture Failed!

// [.rodata] 3[FTS_TS/E]%s:apk proc buf zalloc fail

// [.rodata] 6[FTS_TS/I]%s:Original i2c addr 0x%x

// [.rodata] fts_ta_open
// [.rodata] 3[FTS_TS/E]%s:Invalid cmd buffer

// [.rodata] charge stat:0x%02x

// [.rodata] Reg(0xD0)=%d

// [.rodata] 6[FTS_TS/I]%s:**********read out checksum**********

// [.rodata] 6[FTS_TS/I]%s:tp is in pramboot, need send reset cmd before upgrade

// [.rodata] fts_fwupg_get_boot_state
// [.rodata] 3[FTS_TS/E]%s:pram start fail

// [.rodata] 6[FTS_TS/I]%s:firmware(%s) request fail,ret=%d

// [.rodata] 6[FTS_TS/I]%s:fts_param_ide_in_tp fail

// [.rodata] read mass data fail

// [.rodata] 3[FTS_TS/E][TEST]%s:write 0x54 register fail

// [.rodata] 3[FTS_TS/E][TEST]%s:allocate memory for test data(txt) fail

// [.rodata] fts_test
// [.rodata] FTS_testresult.txt
// [.rodata] 3[FTS_TS/E][TEST]%s:section_num(%d) fail

// [.rodata] 3[FTS_TS/I][TEST]%s:section:%s, keyword offset:%d

// [.rodata] [FTS_TS][TEST]%s:section name:[%s] keyword num:%d

// [.rodata] Normalize_Type
// [.rodata] ini_init_test_incell
// [.rodata] [FTS_TS][TEST]%s:short_res_vk_min:%d

// [.rodata] [FTS_TS][TEST]%s:rawdata_h_min:%d

// [.rodata] [FTS_TS][TEST]%s:scap_cb_on_min:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:rawdata_h_min/max is null


// [.rodata] 3[FTS_TS/E][TEST]%s:switch mapping fail,ret=%d


// [.rodata] 3[FTS_TS/E][TEST]%s:read 0xFB error,ret=%d


// [.rodata] restore normalize fail,ret=%d

// [.rodata] scap cb num(%d) > buffer length(%d)
// [.rodata] 3[FTS_TS/E][TEST]%s:read sc_mode fail,ret=%d


// [.rodata] 3[FTS_TS/E][TEST]%s:write sc mode fail,ret=%d


// [.rodata] 3[FTS_TS/E][TEST]%s:
------ scap cb test NG


// [.rodata] scap_rawdata_on/off_min/max is null

// [.rodata] short test of channel to gnd fails

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/../../vendor/qcom/opensource/touch-drivers/./fts_touch_i2c/focaltech_core.c
// [.rodata] &ts_data->bus_lock
// [.rodata] 3[FTS_TS/E]%s:failed to alloc memory for touch buf

// [.rodata] fts_pinctrl_select_normal
// [.rodata] fts_power_source_ctrl
// [.rodata] 3[FTS_TS/E]%s:invalid point_num(%d)

// [.rodata] 3[FTS_TS/E]%s:%s fts_fod_reg_write failed


// [.rodata] fts_fod_test_store
// [.rodata] 6[FTS_TS/I]%s:Mode:FOD  fod_status = %d

// [.rodata] lct_create_procfs
// [.rodata] 3[FTS_TS/E]%s:touch_analysis is disabled, or ta_buf is NULL

// [.rodata] fts_esdcheck_init
// [.rodata] fts_esd_mode
// [.rodata] 3[FTS_TS/E]%s:fts_data/client/data/datalen(%d) is invalid

// [.rodata] 3[FTS_TS/E]%s:failed to allocate memory for bus_rx_buf

// [.rodata] fts_fwupg_ecc_cal
// [.rodata] fts_fwupg_reset_to_boot
// [.rodata] 3[FTS_TS/E]%s:write 55 cmd fail

// [.rodata] 6[FTS_TS/I]%s:tp run in bootloader

// [.rodata] 3[FTS_TS/E]%s:write flash type fail

// [.rodata] fts_ft5452j_pram_write_init
// [.rodata] 3[FTS_TS/E][TEST]%s:malloc memory for bus write data fail

// [.rodata] 3[FTS_TS/E][TEST]%s:Wait State Update fail,reg%x=%x


// [.rodata] 3[FTS_TS/E][TEST]%s:set mc_sc mode fail


// [.rodata] 3[FTS_TS/E][TEST]%s:set frequecy fail,ret=%d


// [.rodata] short_get_adc_data_mc
// [.rodata] 6[FTS_TS/I]%s:In suspend, no test, return now

// [.rodata] ini_file_name:%s

// [.rodata] 6[FTS_TS/I]%s:remove /proc/%s

// [.rodata] fts_test_get_testparam_from_ini
// [.rodata] [FTS_TS][TEST]%s:section:%s,%s=%s

// [.rodata] ScapCB_OFF_Min_
// [.rodata] 3[FTS_TS/E][TEST]%s:get sc threshold fail


// [.rodata] [FTS_TS][TEST]%s:dcb_ds2:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_cs2:%d

// [.rodata] restore 0xFB fail,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:get scap(WP_OFF) rawdata fail


// [.rodata] 3[FTS_TS/E][TEST]%s:short test of channel to all fails


// [.rodata] 3[FTS_TS/E][TEST]%s:get adc data of cg(70K) fails,ret:%d


// [.rodata] get adc data of cc(70K) fails,ret:%d

// [.rodata] ------ panel differ test PASS

// [.rodata] 3[FTS_TS/E]%s:init point report check fail

// [.rodata] focaltech,max-touch-number
// [.rodata] 3[FTS_TS/E]%s:[GPIO]set_direction for irq gpio failed

// [.rodata] 6[FTS_TS/I]%s:Report_0x152 UP for FingerPrint

// [.rodata] 3[FTS_TS/E]%s:fts mode not support:%d

// [.rodata] fts_reset_mode
// [.rodata] 3[FTS_TS/E]%s:mode:%d

// [.rodata] 6[FTS_TS/I]%s:Touch is suspended, cannot read firmware version!!

// [.rodata] focal_driver
// [.rodata] fts_rw_reg
// [.rodata] 3[FTS_TS/E]%s:allocate memory failed!


// [.rodata] 3[FTS_TS/E]%s:fw bin name's length(%d) fail

// [.rodata] touch size:%d

// [.rodata] 3[FTS_TS/E]%s:MODE_COVER switch to %d fail

// [.rodata] fts_cover_mode
// [.rodata] fts_gesture_readdata
// [.rodata] 6[FTS_TS/I]%s:Gesture Code=%d

// [.rodata] 3[FTS_TS/E]%s:fts_create_esd_sysfs(sysfs) create fail

// [.rodata] 6[FTS_TS/I]%s:data buf start addr=0x%x, len=0x%x

// [.rodata] 3[FTS_TS/E]%s:upgrade/buf is NULL or len is 0

// [.rodata] 6[FTS_TS/I]%s:read packet_number:%d, remainder:%d

// [.rodata] fts_fwupg_upgrade
// [.rodata] fts_fwupg_init
// [.rodata] 3[FTS_TS/E]%s:pramboot write data(%d) fail

// [.rodata] fts_ft5452j_pram_write_buf
// [.rodata] 3[FTS_TS/E]%s:data len cmd write fail

// [.rodata] 3[FTS_TS/I][TEST]%s:enter work mode success

// [.rodata] 3[FTS_TS/E][TEST]%s:Enter work mode fail

// [.rodata] test/func is null

// [.rodata] 3[FTS_TS/E][TEST]%s:rawdata buffer is null


// [.rodata] get_key_num
// [.rodata] test ic type(%d) fail

// [.rodata] fts_test_store
// [.rodata] 3[FTS_TS/E][TEST]%s:key:%s %d,dthr_num(%d>=%d) fail

// [.rodata] [FTS_TS][TEST]%s:cb_vkey_check:%d

// [.rodata] RawData_Max_High_Tx
// [.rodata] Panel_Differ_Min_Tx
// [.rodata] [FTS_TS][TEST]%s:rawdata_l_max:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:restore 0x0A fail,ret=%d


// [.rodata] scap rawdata num(%d) > buffer length(%d)
// [.rodata] 
============ Test Item: Short Test

// [.rodata] write 5A fails,ret:%d

// [.rodata] [FTS_TS][TEST]%s:cg:%d,

// [.rodata] failed to set error channels,ret:%d

// [.rodata] Rx%d with GND:
// [.rodata] 3[FTS_TS/E]%s:Focaltech touch screen driver init failed!

// [.rodata] 3[FTS_TS/E]%s:create fts workqueue fail

// [.rodata] 6[FTS_TS/I]%s:set key capabilities

// [.rodata] 6[FTS_TS/I]%s:no touch point information(%02x)

// [.rodata] fts_read_palm_data
// [.rodata] fts_ts_resume
// [.rodata] fts_touch_dfs_test
// [.rodata] 3[FTS_TS/E]%s:[APK]: copy from user error!!

// [.rodata] Gesture Mode:0x%02x

// [.rodata] Max Touchs:%d

// [.rodata] 6[FTS_TS/I]%s:reg 0xCF do not need to be modified, reg_value = %02X

// [.rodata] 6[FTS_TS/I]%s:**********pram write and init**********

// [.rodata] 3[FTS_TS/E]%s:pramboot ecc check fail

// [.rodata] fts_fwupg_get_ver_in_host
// [.rodata] 6[FTS_TS/I]%s:********************FTS enter upgrade********************

// [.rodata] [FTS_TS][TEST]%s:%s

// [.rodata] [FTS_TS][TEST]%s: Enter

// [.rodata] 3[FTS_TS/E][TEST]%s:test/func is null


// [.rodata] 3[FTS_TS/E][TEST]%s:write short state fail


// [.rodata] test fail,tx%d=%5d,range=(%5d,%5d)

// [.rodata] 3[FTS_TS/E][TEST]%s:test result is null

// [.rodata] tp_data_dump_proc_open
// [.rodata] 
DIFF DATA

// [.rodata] 3[FTS_TS/E][TEST]%s:ini_get_line fail

// [.rodata] 3[FTS_TS/E][TEST]%s:keyword num(%d)>max(%d),please check MAX_KEYWORD_NUM

// [.rodata] 3[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)


// [.rodata] 3[FTS_TS/I][TEST]%s:basic_thr string length(%d), count(%d)


// [.rodata] [FTS_TS][TEST]%s:basic thr:%s=%d

// [.rodata] [FTS_TS][TEST]%s:cb_max:%d

// [.rodata] Tx_Linearity_Max_Tx
// [.rodata] ScapRawData_High_Max_
// [.rodata] [FTS_TS][TEST]%s:scap_cb_on_max:%d

// [.rodata] [FTS_TS][TEST]%s:panel_differ_min:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_key_check:%d

// [.rodata] start_test_ft5452
// [.rodata] ft5452_rawdata_test
// [.rodata] read 0x0A fail,ret=%d

// [.rodata] Rx Linearity:

// [.rodata] 3[FTS_TS/E][TEST]%s:------ panel differ test NG


// [.rodata] enabled
// [.rodata] 3[FTS_TS/E]%s:hid2std cmd read fail

// [.rodata] 3[FTS_TS/E]%s:init glove/cover/charger fail

// [.rodata] 6[FTS_TS/I]%s:max touch number:%d, irq gpio:%d, reset gpio:%d

// [.rodata] fts_irq_gpio
// [.rodata] pmx_ts_suspend
// [.rodata] 6[FTS_TS/I]%s:verify id:0x%02x%02x

// [.rodata] 6[FTS_TS/I]%s:unknown touch event(%d)

// [.rodata] 3[FTS_TS/E]%s:don't support touch dfs test

// [.rodata] 3[FTS_TS/E]%s:init_lct_tp_selftest Failed!

// [.rodata] 3[FTS_TS/E]%s:PROC_READ_REGISTER read error

// [.rodata] INT count:0x%02x

// [.rodata] 3[FTS_TS/E]%s:[GESTURE]Write gesture reg failed!


// [.rodata] 6[FTS_TS/I]%s:In apk/adb command mode, not check esd

// [.rodata] 6[FTS_TS/I]%s:write data, num:%d remainder:%d

// [.rodata] 6[FTS_TS/I]%s:pram ecc in tp:%x, host:%x

// [.rodata] fts_pram_ecc_cal_algo
// [.rodata] get_rawdata
// [.rodata] compare_data
// [.rodata] set frequecy fail,ret=%d

// [.rodata] [FTS_TS][TEST]%s:fwname:%s.

// [.rodata] fts_test_malloc_free_incell
// [.rodata] init_node_valid
// [.rodata] 3[FTS_TS/E][TEST]%s:get basic thr fail


// [.rodata] get_detail_threshold
// [.rodata] [FTS_TS][TEST]%s:short_res_min:%d

// [.rodata] [FTS_TS][TEST]%s:open_cb_min:%d

// [.rodata] [FTS_TS][TEST]%s:open_k1_check:%d

// [.rodata] [FTS_TS][TEST]%s:rawdata_min_vk:%d

// [.rodata] [FTS_TS][TEST]%s:scap_cb_off_max:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_ds1:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_ds4:%d

// [.rodata] Check Min/Max

// [.rodata] scap_cb_on/off_min/max is null

// [.rodata] read sc_cb fail,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:error_ch buffer malloc fail


// [.rodata] Tx%d with GND:
// [.rodata]  Tx%d
// [.rodata] 3[FTS_TS/E]%s:Failed to create fod_test sysfs group!


// [.rodata] 3[FTS_TS/E]%s:[GPIO]set_direction for reset gpio failed

// [.rodata] fts_irq_read_report
// [.rodata] 3[FTS_TS/E]%s:create /proc/tp_info & /proc/tp_lockdown_info fail

// [.rodata] 3[FTS_TS/E]%s:copy to user error

// [.rodata] 3[FTS_TS/E]%s:Could not read 0x%02x

// [.rodata] fts_create_esd_sysfs
// [.rodata] fts_point_report_check_init
// [.rodata] 3[FTS_TS/E]%s:reset before read boot id when fw invalid fail

// [.rodata] 3[FTS_TS/E]%s:buf is NULL or len is 0

// [.rodata] 3[FTS_TS/E]%s:reset to romboot fail

// [.rodata] 6[FTS_TS/I]%s:fw in host isn't IDE version

// [.rodata] ft5452j_write_pramboot_private
// [.rodata] fts_ft5452j_fwupg_reset_to_romboot
// [.rodata] enter_factory_mode
// [.rodata] 3[FTS_TS/E][TEST]%s:short test timeout, ADC data not OK


// [.rodata] 3[FTS_TS/E][TEST]%s:test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)


// [.rodata] 3[FTS_TS/E][TEST]%s:get sc cb fail


// [.rodata] 3[FTS_TS/E][TEST]%s:tdata/func is NULL


// [.rodata] 3[FTS_TS/E][TEST]%s:get rx_num fail

// [.rodata] 
RAW DATA

// [.rodata] FTS_CSV_FILE_NAME:%s

// [.rodata] 3[FTS_TS/E][TEST]%s:line length(%d)>max(%d)

// [.rodata] 3[FTS_TS/E][TEST]%s:buffer is null


// [.rodata] RawData_Max_Tx
// [.rodata] [FTS_TS][TEST]%s:cb_max_vk:%d

// [.rodata] ScapCB_ON_Min_
// [.rodata] ScapRawData_Hov_Max_
// [.rodata] [FTS_TS][TEST]%s:dcb_cs1:%d

// [.rodata] 3[FTS_TS/I][TEST]%s:test item:0x%x

// [.rodata] 3[FTS_TS/E][TEST]%s:rawdata_linearity buffer malloc fail

// [.rodata] 3[FTS_TS/E][TEST]%s:scap_cb_on/off_min/max is null


// [.rodata] enter factory mode fail,ret=%d

// [.rodata] adc_data buffer malloc fail

// [.rodata] get adc data of ca fails,ret:%d

// [.rodata] [FTS_TS][TEST]%s:cc:%d,

// [.rodata] 3[FTS_TS/E]%s:wait tp fw valid timeout

// [.rodata] 3[FTS_TS/E]%s:I2C not supported

// [.rodata] 3[FTS_TS/E]%s:allocate memory for platform_data fail

// [.rodata] focal
// [.rodata] 3[FTS_TS/E]%s:create procfs node fail

// [.rodata] 3[FTS_TS/E]%s:touch_analysis is disabled

// [.rodata] fts_read_parse_touchdata
// [.rodata] fts_get_mode_value
// [.rodata] 3[FTS_TS/E]%s:create proc entry fail

// [.rodata] Read %02X: %02X

// [.rodata] Read %02X failed, ret: %d

// [.rodata] Write %02X, %02X success

// [.rodata] 6[FTS_TS/I]%s:force upgrade through sysfs node

// [.rodata] 3[FTS_TS/E]%s:upgrade/func is null

// [.rodata] 6[FTS_TS/I]%s:success upgrade to fw param version %02x

// [.rodata] 3[FTS_TS/E]%s:pram write fail, ret=%d

// [.rodata] 3[FTS_TS/E]%s:upg/func/ts_data/fw_sts is null

// [.rodata] fts_pram_write_remap
// [.rodata] 3[FTS_TS/E]%s:flash write fail

// [.rodata] failed to enter factory mode,ret=%d

// [.rodata] [FTS_TS][TEST]%s:rawdata_vkey_check:%d

// [.rodata] RawData_Min_Low_Tx
// [.rodata] ScapRawData_OFF_Max_
// [.rodata] [FTS_TS][TEST]%s:short_cg:%d

// [.rodata] CbTest_Max
// [.rodata] [FTS_TS][TEST]%s:dcb_critical_check:%d

// [.rodata] 
============ Test Item: Scap Rawdata Test

// [.rodata] get scap(WP_OFF) rawdata fail

// [.rodata] fts_wait_tp_to_valid
// [.rodata] 3[FTS_TS/E]%s:hid2std cmd write fail

// [.rodata] 3[FTS_TS/E]%s:allocate memory for fts_data fail

// [.rodata] 3[FTS_TS/E]%s:request irq failed

// [.rodata] 3[FTS_TS/E]%s:Unable to get max-touch-number, please check dts

// [.rodata] drm_check_dt
// [.rodata] fts_buffer_init
// [.rodata] 3[FTS_TS/E]%s:fail to enable power(regulator)

// [.rodata] 3[FTS_TS/E]%s:Set normal pin state error:%d

// [.rodata] 3[FTS_TS/E]%s:ID(%d) beyond max_touch_number

// [.rodata] 6[FTS_TS/I]%s:nonui_status is two, don't report 152

// [.rodata] fts_ts_suspend
// [.rodata] 6[FTS_TS/I]%s:temp_value:%d,aod_changed:%d

// [.rodata] 3[FTS_TS/E]%s:tp is suspended or flashing, can not to set


// [.rodata] 6[FTS_TS/I]%s:enable irq

// [.rodata] 6[FTS_TS/I]%s:[EX-FUN]set to boot mode

// [.rodata] 3[FTS_TS/E]%s:create sysfs(ex_mode) fail

// [.rodata] Cover Reg(0xC1):%d

// [.rodata] fts_charger_mode
// [.rodata] Charger Mode:%s

// [.rodata] 3[FTS_TS/E]%s:[GESTURE]Write fod reg failed!


// [.rodata] 6[FTS_TS/I]%s:Enter into gesture(suspend) successfully

// [.rodata] Gesture ID:%d

// [.rodata] 3[FTS_TS/E]%s:create prc sysfs fail

// [.rodata] 3[FTS_TS/E]%s:ecc read cmd write fail

// [.rodata] 6[FTS_TS/I]%s:success upgrade to fw version %02x

// [.rodata] fts_pram_init
// [.rodata] 3[FTS_TS/E]%s:pramboot length(%d) fail

// [.rodata] fts_param_need_upgrade
// [.rodata] 3[FTS_TS/E]%s:get file fail, can't upgrade

// [.rodata] get_rawdata_mc
// [.rodata] 3[FTS_TS/I][TEST]%s:TP selftest PASS

// [.rodata] get_tx_rx_num
// [.rodata] 3[FTS_TS/I][TEST]%s:buflen:%d

// [.rodata] FW version:0x%02x

// [.rodata] fts_test_func_init
// [.rodata] fts_tp_data_dump_proc_init
// [.rodata] fts_init_buffer
// [.rodata] get_test_item
// [.rodata] [FTS_TS][TEST]%s:keyshort_k1:%d

// [.rodata] [FTS_TS][TEST]%s:uniformity_tx_hole:%d

// [.rodata] CbTest_Min
// [.rodata] 3[FTS_TS/E][TEST]%s:uniformity test is NG


// [.rodata] 3[FTS_TS/E][TEST]%s:scap cb num(%d) > buffer length(%d)

// [.rodata] 3[FTS_TS/E][TEST]%s:min_70k_ch buffer malloc fail


// [.rodata] 3[FTS_TS/E]%s:init esd check fail

// [.rodata] focaltech,have-key
// [.rodata] 3[FTS_TS/E]%s:[GPIO]reset gpio request failed

// [.rodata] lct_fts_tp_set_screen_angle_callback
// [.rodata] Write Data: 
// [.rodata] %02x 
// [.rodata] fts_read
// [.rodata] fts_write
// [.rodata] fts_fwupg_reset_in_boot
// [.rodata] 6[FTS_TS/I]%s:**********erase now**********

// [.rodata] 3[FTS_TS/E]%s:read fw bin file(%s) fail, len:%d

// [.rodata] 6[FTS_TS/I]%s:tp isn't in romboot, need send reset to romboot

// [.rodata] 6[FTS_TS/I]%s:fw version offset:0x%x

// [.rodata] 3[FTS_TS/E]%s:read fw ver from tp fail

// [.rodata] 6[FTS_TS/I]%s:fw upgrade work function

// [.rodata] fts_ft5452j_fwupg_get_boot_state
// [.rodata] 3[FTS_TS/E][TEST]%s:scan fail


// [.rodata] 3[FTS_TS/E][TEST]%s:cb buffer malloc fail


// [.rodata] Ch/Tx_%02d:  
// [.rodata] 3[FTS_TS/E][TEST]%s:rx num(%d) fail

// [.rodata] 3[FTS_TS/I][TEST]%s:save data in csv format

// [.rodata] fts_test_save_result_txt
// [.rodata] ini_get_string_value
// [.rodata] 3[FTS_TS/E][TEST]%s:init node valid fail

// [.rodata] TestItem
// [.rodata] CB_Max_Tx
// [.rodata] print_thr_incell
// [.rodata] [FTS_TS][TEST]%s:rawdata_min:%d

// [.rodata] [FTS_TS][TEST]%s:open_delta_V:%d

// [.rodata] 
============ Test Item: rawdata unfiormity test

// [.rodata] 3[FTS_TS/E][TEST]%s:failed to get weak short data,ret=%d


// [.rodata] short_test_channel_to_gnd
// [.rodata] 3[FTS_TS/E][TEST]%s:cg_short_resistance buffer malloc fail


// [.rodata] [FTS_TS][TEST]%s:channel to gnd test fail

// [.rodata] 3[FTS_TS/E]%s:create sysfs node fail

// [.rodata] focaltech,keys
// [.rodata] focaltech,key-x-coords
// [.rodata] 3[FTS_TS/E]%s:Failed to allocate memory for input device

// [.rodata] fts_reset_gpio
// [.rodata] 3[FTS_TS/E]%s:read palm data error


// [.rodata] %02x%02x%02x%02x%02x%02x%02x%02x

// [.rodata] 6[FTS_TS/I]%s:init_lct_tp_grip_area Succeeded!

// [.rodata] fts_parse_buf
// [.rodata] LCD Initcode Ver:0x%02x

// [.rodata] fts_fwforceupg_store
// [.rodata] tp is in fw mode

// [.rodata] 6[FTS_TS/I]%s:start upgrade with fw bin

// [.rodata] 3[FTS_TS/E]%s:no upgrade function match, can't upgrade

// [.rodata] 3[FTS_TS/E]%s:ic not support pram

// [.rodata] 3[FTS_TS/E]%s:wait ecc finish fail

// [.rodata] 3[FTS_TS/E]%s:get IDE param ver in tp fail

// [.rodata] fts_param_ide_in_tp
// [.rodata] 3[FTS_TS/E]%s:fw file len(%d) fail

// [.rodata] chip clb timeout

// [.rodata] get_cb_incell
// [.rodata] data/node_valid is null

// [.rodata] wait state update fail

// [.rodata] SCap Tx: 
// [.rodata] fts_test_entry
// [.rodata] 3[FTS_TS/E][TEST]%s:enter factory mode fail


// [.rodata] read high_channel_sel fail,ret=%d

// [.rodata] 6[FTS_TS/I]%s:create /proc/%s

// [.rodata] 3[FTS_TS/E][TEST]%s:get rx_num fail, ret=%d

// [.rodata] FTS_TXT_FILE_NAME:%s

// [.rodata] 3[FTS_TS/E][TEST]%s:section_name/key_name/rval is null

// [.rodata] ini_parse_section
// [.rodata] CB_Min_Tx
// [.rodata] get mc_sc threshold fail

// [.rodata] ScapCB_High_Min_
// [.rodata] DeltaCbTest_Base
// [.rodata] restore 0x0A fail,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:min_max out of range, set value: %d


// [.rodata] write sc mode fail,ret=%d

// [.rodata] failed to get weak short data,ret=%d

// [.rodata] short_test_channel_to_all
// [.rodata] w_buf buffer malloc fail

// [.rodata] cc_short_resistance buffer malloc fail

// [.rodata] :%d(K), ADC:%d

// [.rodata] 
============ Test Item: Panel Differ Test

// [.rodata] 6[FTS_TS/I]%s:The gesture mode will be %s the next time you wakes up.

// [.rodata] fts_wq
// [.rodata] &ts_data->ts_waitqueue
// [.rodata] fts_pinctrl_init
// [.rodata] 3[FTS_TS/E]%s:Pin state[active] not found

// [.rodata] fts_get_chip_types
// [.rodata] fts_irq_registration
// [.rodata] 3[FTS_TS/E]%s:invalid touch event num(%d)

// [.rodata] ftxxxx-debug
// [.rodata] 6[FTS_TS/I]%s:init_lct_tp_gesture Succeeded!

// [.rodata] fts_debug_read
// [.rodata] Resolution:(%d,%d)~(%d,%d)

// [.rodata] irq_depth:%d

// [.rodata] fts_touch_point
// [.rodata] 3[FTS_TS/E]%s:MODE_GLOVE switch to %d fail

// [.rodata] fts_prc
// [.rodata] 3[FTS_TS/E]%s:i2c_transfer(write) fail,ret:%d

// [.rodata] 6[FTS_TS/I]%s:***********enter into pramboot/bootloader***********

// [.rodata] 6[FTS_TS/I]%s:ecc calc num:%d, remainder:%d

// [.rodata] 3[FTS_TS/E]%s:upg/upg->func is null

// [.rodata] 3[FTS_TS/E]%s:write pramboot fail

// [.rodata] 6[FTS_TS/I]%s:firmware(%s) request successfully

// [.rodata] 3[FTS_TS/E]%s:upgrade/func/fw/ver is NULL

// [.rodata] 6[FTS_TS/I]%s:fw paramcfg version in tp:%x, host:%x

// [.rodata] 3[FTS_TS/E][TEST]%s:scan timeout


// [.rodata] 3[FTS_TS/E][TEST]%s:write cb addr offset fail


// [.rodata] 3[FTS_TS/E][TEST]%s:wirte line/start addr fail


// [.rodata] fts_test_init_basicinfo
// [.rodata] enter factory mode fail

// [.rodata] fts_test_save_data_csv_private
// [.rodata] 3[FTS_TS/E][TEST]%s:test item data is null

// [.rodata] 3[FTS_TS/E][TEST]%s:read high_channel_sel fail,ret=%d


// [.rodata] [FTS_TS][TEST]%s:section name:%s keyword num:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:section line length fail

// [.rodata] [FTS_TS][TEST]%s:test item:%s not found

// [.rodata] 3[FTS_TS/E][TEST]%s:special basic thr init fail


// [.rodata] [FTS_TS][TEST]%s:rawdata2_min:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:read normalize fail,ret=%d


// [.rodata] rawdata_linearity buffer malloc fail
// [.rodata] 
============ Test Item: Scap CB Test

// [.rodata] ft5452_scap_rawdata_test
// [.rodata] get adc data of cg fails,ret:%d

// [.rodata] fts_recover_after_reset
// [.rodata] &ts_data->report_mutex
// [.rodata] 3[FTS_TS/E]%s:Key Y Coords undefined!

// [.rodata] 3[FTS_TS/E]%s:[GPIO]vdd gpio avdd failed

// [.rodata] 3[FTS_TS/E]%s:read boot id fail

// [.rodata] 3[FTS_TS/E]%s:read boot id fail,read:0x%02x%02x

// [.rodata] 6[FTS_TS/I]%s:touch buff is 0xff, need recovery state

// [.rodata] 3[FTS_TS/E]%s:Set palm sensor switch failed!


// [.rodata] 6[FTS_TS/I]%s:palm sensor ON, switch to OFF

// [.rodata] 3[FTS_TS/E]%s:create proc_ta entry fail

// [.rodata] [Vendor]samsung,[FW]0x%02x,[IC]ft3519t

// [.rodata] Enable
// [.rodata] 6[FTS_TS/I]%s:fts_ta close

// [.rodata] fts_ta_release
// [.rodata] Power Mode:0x%02x

// [.rodata] 3[FTS_TS/E]%s:pram/bootloader read 03 command fail

// [.rodata] 6[FTS_TS/I]%s:upgrade fw app(times:%d)

// [.rodata] fts_fwupg_check_fw_valid
// [.rodata] 3[FTS_TS/E]%s:read flash type fail

// [.rodata] 3[FTS_TS/E]%s:fw buffer vmalloc fail

// [.rodata] 3[FTS_TS/E]%s:get fw ver in host fail

// [.rodata] 6[FTS_TS/I]%s:fw version in tp:%x, host:%x

// [.rodata] 3[FTS_TS/E][TEST]%s:Enter factory mode fail

// [.rodata] write cb_h addr offset fail

// [.rodata] rawdata buffer is null

// [.rodata] 3[FTS_TS/E][TEST]%s:get no-mapping rx_num fail

// [.rodata] 3[FTS_TS/E][TEST]%s:tx num(%d) fail

// [.rodata] 3[FTS_TS/E][TEST]%s:test ic type(%d) fail


// [.rodata] 3[FTS_TS/E][TEST]%s:line2_buffer malloc fail


// [.rodata] tp_result_proc_write
// [.rodata] 3[FTS_TS/E][TEST]%s:ERROR: create /proc/%s failed.

// [.rodata] 3[FTS_TS/E][TEST]%s:malloc rawdata memory fail

// [.rodata] fts_tp_data_dump_proc_exit
// [.rodata] 3[FTS_TS/E][TEST]%s:ini init fail

// [.rodata] basic_thr string length > count

// [.rodata] [FTS_TS][TEST]%s:lcdnoise_coefficient_vkey:%d

// [.rodata] [FTS_TS][TEST]%s:open_nmos:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:restore normalize fail,ret=%d


// [.rodata] uniformity test is NG

// [.rodata] Panel Differ Test
// [.rodata] disabled
// [.rodata] fts_hid2std
// [.rodata] 6[FTS_TS/I]%s:Touch Screen(I2C BUS) driver prboe...

// [.rodata] 3[FTS_TS/E]%s:init host test fail

// [.rodata] tp_dev
// [.rodata] 3[FTS_TS/E]%s:Keys undefined!

// [.rodata] 3[FTS_TS/E]%s:[GPIO]irq gpio request failed

// [.rodata] fts_read_touchdata
// [.rodata] 6[FTS_TS/I]%s:%s: FB_BLANK %s

// [.rodata] fts_ta
// [.rodata] 3[FTS_TS/E]%s:apk proc wirte buf zalloc fail

// [.rodata] failed, ret: %d

// [.rodata] touch point buffer:

// [.rodata] default
// [.rodata] fts_ex_mode_init
// [.rodata] Gesture Mode:%s

// [.rodata] 3[FTS_TS/E]%s:reset to normal boot fail

// [.rodata] 6[FTS_TS/I]%s:upgrade function is null, no upgrade

// [.rodata] 6[FTS_TS/I]%s:fw auto upgrade function

// [.rodata] 6[FTS_TS/I]%s:fw upgrade flag:%d

// [.rodata] 6[FTS_TS/I]%s:tp fw vaild

// [.rodata] 3[FTS_TS/E]%s:flash status fail,ok:%04x,read:%04x,retries:%d

// [.rodata] 6[FTS_TS/I]%s:param invalid, need upgrade param

// [.rodata] 6[FTS_TS/I]%s:fw in host is IDE version

// [.rodata] 3[FTS_TS/E]%s:buffer/len(%x) is invalid

// [.rodata] fts_test_read
// [.rodata] [FTS_TS][TEST]%s: Exit(%d)

// [.rodata] 3[FTS_TS/E][TEST]%s:mass data buffer malloc fail


// [.rodata] short_get_adcdata_incell
// [.rodata] wait_state_update
// [.rodata] write start clb fail

// [.rodata] write cb addr high fail

// [.rodata] 3[FTS_TS/E][TEST]%s:write cb addr high fail


// [.rodata] 3[FTS_TS/E][TEST]%s:write cb_h addr offset fail


// [.rodata] get_cb_mc_sc
// [.rodata] 3[FTS_TS/E][TEST]%s:malloc memory for item(%d) data fail

// [.rodata] lct_tp_selftest_all
// [.rodata] 3[FTS_TS/E][TEST]%s:get key number fail

// [.rodata] ECC, 85, 170, IC Name, %s, IC Code, %x

// [.rodata] 3[FTS_TS/I][TEST]%s:test result length in txt:%d

// [.rodata] ini_init_test
// [.rodata] get_test_threshold_incell
// [.rodata] [FTS_TS][TEST]%s:keyshort_cb_max:%d

// [.rodata] ini_init_test_mc_sc
// [.rodata] [FTS_TS][TEST]%s:scap_cb_wp_on_check:%d

// [.rodata] [FTS_TS][TEST]%s:scap_rawdata_wp_off_check:%d

// [.rodata] [FTS_TS][TEST]%s:short_cc:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_differ_max:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_cs6:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:read sc_cb fail,ret=%d


// [.rodata] read 5A fails

// [.rodata] 3[FTS_TS/E][TEST]%s:short test of channel to channel fails


// [.rodata] 3[FTS_TS/E][TEST]%s:panel_differ_h_min/max is null


// [.rodata] 6[FTS_TS/I]%s:irq:%d, flag:%x

// [.rodata] 6[FTS_TS/I]%s:make TP enter resume mode

// [.rodata] POWER DOWN
// [.rodata] TpShortTestFail
// [.rodata] 6[FTS_TS/I]%s:mode:%d, set cur:%d, get cur:%d, def:%d min:%d max:%d

// [.rodata] fts_pinctrl_select_release
// [.rodata] 6[FTS_TS/I]%s:Create proc entry success!

// [.rodata] Result: failed, ret: %d

// [.rodata] 3[FTS_TS/E]%s:cmd buffer error!

// [.rodata] 6[FTS_TS/I]%s:%s, tp is in suspend mode, write 0xD0 to 1

// [.rodata] 6[FTS_TS/I]%s:Click Code=%d

// [.rodata] 3[FTS_TS/E]%s:malloc memory for upgrade fail

// [.rodata] fts_fwupg_need_upgrade
// [.rodata] 6[FTS_TS/I]%s:param version in host invalid

// [.rodata] 6[FTS_TS/I]%s:upgrade fw file len:%d

// [.rodata] 6[FTS_TS/I]%s:********************FTS exit upgrade********************

// [.rodata] 3[FTS_TS/E][TEST]%s:sysfs(test) create fail

// [.rodata] 3[FTS_TS/E][TEST]%s:get channel number fail

// [.rodata] 3[FTS_TS/E][TEST]%s:get tx_num fail

// [.rodata] 3[FTS_TS/I][TEST]%s:csv length:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:read water_channel_sel fail,ret=%d


// [.rodata] 3[FTS_TS/E][TEST]%s:disable auto clb fail, ret=%d

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/../../vendor/qcom/opensource/touch-drivers/./fts_touch_i2c/focaltech_test/focaltech_test_ini.c
// [.rodata] 3[FTS_TS/E][TEST]%s:tdata/node_valid/node_valid_sc is null

// [.rodata] RawData_Min_Tx
// [.rodata] [FTS_TS][TEST]%s:scap_rawdata_wp_on_check:%d

// [.rodata] rawdata_h_min/max is null

// [.rodata] 
------ scap rawdata test PASS

// [.rodata] fts_ts_probe_entry
// [.rodata] 3[FTS_TS/E]%s:Failed to create device !

// [.rodata] focaltech,key-number
// [.rodata] pmx_ts_active
// [.rodata] %02X,
// [.rodata] &x->wait
// [.rodata] 6[FTS_TS/I]%s:%s: FB_BLANK_UNBLANK, resume function will be called

// [.rodata] 3[FTS_TS/E]%s:PROC_WRITE_DATA write error

// [.rodata] 6[FTS_TS/I]%s:fts_ta open

// [.rodata] IC ID:0x%02x%02x

// [.rodata] Esd check: %s

// [.rodata] 3[FTS_TS/E]%s:fts workqueue is NULL, can't run point report check function

// [.rodata] 3[FTS_TS/E]%s:read pramboot ecc fail

// [.rodata] 3[FTS_TS/E]%s:write pramboot ecc cal cmd fail

// [.rodata] 3[FTS_TS/E]%s:enter into pramboot/bootloader fail,ret=%d

// [.rodata] 3[FTS_TS/E]%s:ecc check fail

// [.rodata] enter_work_mode
// [.rodata] show_data
// [.rodata] fts_test_exit
// [.rodata] 3[FTS_TS/E][TEST]%s:get testparam fail

// [.rodata] tdata/func is NULL

// [.rodata] 3[FTS_TS/E][TEST]%s:no test function match, can't test

// [.rodata] ini_get_line
// [.rodata] INVALID_NODE
// [.rodata] SpecialSet
// [.rodata] [FTS_TS][TEST]%s:open_k1_value:%d

// [.rodata] [FTS_TS][TEST]%s:rawdata_set_hfreq:%d

// [.rodata] [FTS_TS][TEST]%s:uniformity_check_rx:%d

// [.rodata] [FTS_TS][TEST]%s:dcb_key_differ_max:%d

// [.rodata] read sc_mode fail,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:write 5A fails,ret:%d


// [.rodata] %d(K), ADC:%d

// [.rodata] panel_differ_h_min/max is null

// [.rodata] 3[FTS_TS/E]%s:TP Not Ready,ReadData:0x%02x,ret:%d

// [.rodata] 3[FTS_TS/E]%s:init fw upgrade fail

// [.rodata] 6[FTS_TS/I]%s:find drm_panel successfully

// [.rodata] 3[FTS_TS/E]%s:Failed to get pinctrl, please check dts

// [.rodata] 6[FTS_TS/I]%s:gesture_support:%d  poweroff_on_sleep:%d

// [.rodata] fts_ts_register_for_panel_events
// [.rodata] 3[FTS_TS/E]%s:don't support

// [.rodata] fts_init_touchmode_data
// [.rodata] %02x

// [.rodata] Read Reg: [%02X]-[%02X]

// [.rodata] 3[FTS_TS/E]%s:Could not write 0x%02x

// [.rodata] fts_hw_reset
// [.rodata] hw reset executed

// [.rodata] fts_gesture_reg_write
// [.rodata] %3d(%4d,%4d) 
// [.rodata] 3[FTS_TS/E]%s:fts workqueue is NULL, can't run esd check function

// [.rodata] get_chip_id
// [.rodata] 3[FTS_TS/E]%s:i2c_transfer(read) fail,ret:%d

// [.rodata] 3[FTS_TS/E]%s:ecc flash status read fail

// [.rodata] 3[FTS_TS/E]%s:upgrade/func/buf/len is invalid

// [.rodata] 3[FTS_TS/E]%s:write 90 cmd fail

// [.rodata] 6[FTS_TS/I]%s:upgrade success, reset to normal boot

// [.rodata] chip_clb
// [.rodata] 3[FTS_TS/E][TEST]%s:write cb addr low fail


// [.rodata] 3[FTS_TS/E][TEST]%s:read cb fail


// [.rodata] malloc memory for cb buffer fail

// [.rodata] 3[FTS_TS/E][TEST]%s:malloc memory for cb buffer fail


// [.rodata] 3[FTS_TS/E][TEST]%s:txt_buffer malloc fail


// [.rodata] 3[FTS_TS/E][TEST]%s:test buffer(%d) malloc fail

// [.rodata] 3[FTS_TS/E][TEST]%s:get channel number fail


// [.rodata] read water_channel_sel fail,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:ini->data buffer vmalloc fail

// [.rodata] ini_parse_keyword
// [.rodata] IC_Type
// [.rodata] 3[FTS_TS/I][TEST]%s:ic name:%s, ic code:%x

// [.rodata] get basic thr fail

// [.rodata] 3[FTS_TS/E][TEST]%s:key_name/thr is null

// [.rodata] [FTS_TS][TEST]%s:open_k2_check:%d

// [.rodata] [FTS_TS][TEST]%s:rawdata_max:%d

// [.rodata] [FTS_TS][TEST]%s:lcdnoise_coefficient:%d

// [.rodata] [FTS_TS][TEST]%s:mux_open_cb_min:%d

// [.rodata] McapCMBTest_Min_Hole
// [.rodata] ScapRawData_OFF_Min_
// [.rodata] scap_cb in waterproof on mode:

// [.rodata] scap_rawdata in waterproof off mode:

// [.rodata] short_resistance buffer malloc fail

// [.rodata] min_70k_ch buffer malloc fail

// [.rodata] [FTS_TS][TEST]%s:cc(70K):%d,

// [.rodata] 3[FTS_TS/E][TEST]%s:get adc data of cc(70K) fails,ret:%d


// [.rodata] 6[FTS_TS/I]%s:%s

// [.rodata] Focaltech V3.4 20211214
// [.rodata] 3[FTS_TS/E]%s:platform_data is null

// [.rodata] 3[FTS_TS/E]%s:no find drm_panel

// [.rodata] fts_get_ic_information
// [.rodata] 6[FTS_TS/I]%s:Set palm sensor switch: %d


// [.rodata] 3[FTS_TS/E]%s:Failed to register for panel events


// [.rodata] fts_fwupgradebin_store
// [.rodata] Gesture Points Buffer:

// [.rodata] fts_flash_read_buf
// [.rodata] 6[FTS_TS/I]%s:force_upgrade function is null, no upgrade

// [.rodata] 3[FTS_TS/E]%s:ts_data/workqueue is NULL, can't run upgrade function

// [.rodata] 6[FTS_TS/I]%s:read boot id:0x%02x%02x

// [.rodata] fts_param_get_ver_in_host
// [.rodata] fts_fwupg_get_fw_file
// [.rodata] fts_get_fw_file_via_request_firmware
// [.rodata] [FTS_TS][TEST]%s:buffer/length(%d) fail

// [.rodata] 3[FTS_TS/E][TEST]%s:write buffer fail

// [.rodata] mass data buffer malloc fail

// [.rodata] 3[FTS_TS/I][TEST]%s:mass data len:%d

// [.rodata] start short test fail

// [.rodata] 3[FTS_TS/E][TEST]%s:write start scan mode fail


// [.rodata] Conf_MultipleTest_ft3519t.ini
// [.rodata] 

=======Tp test failure.

// [.rodata] 3[FTS_TS/E][TEST]%s:get no-mappint tx_num fail

// [.rodata] 3[FTS_TS/E][TEST]%s:get key num, fw:%d > max:%d

// [.rodata] 3[FTS_TS/I][TEST]%s:test item count:%d

// [.rodata] 3[FTS_TS/E][TEST]%s:enter factory mode fail, ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:get tx_num fail, ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:write 1 to reg06 fail


// [.rodata] 3[FTS_TS/E][TEST]%s:restore reg06 fail

// [.rodata] tp_data_dump_proc_show
// [.rodata] 3[FTS_TS/I][TEST]%s:firmware request(%s) fail,ret=%d

// [.rodata] 3[FTS_TS/E][TEST]%s:ini_parse_section fail

// [.rodata] Interface
// [.rodata] InvalidNodeS[%d][%d]
// [.rodata] 3[FTS_TS/E][TEST]%s:get incell threshold fail


// [.rodata] ScapRawData_ON_Max_
// [.rodata] [FTS_TS][TEST]%s:uniformity_rx_hole:%d

// [.rodata] scap_rawdata in waterproof on mode:

// [.rodata] SCAP Rawdata Test
// [.rodata] ft5452_short_test
// [.rodata] 3[FTS_TS/E][TEST]%s:cc_short_resistance buffer malloc fail


// [.rodata] panel
// [.rodata] 6[FTS_TS/I]%s:palm sensor OFF, switch to ON

// [.rodata] 6[FTS_TS/I]%s:1.FTS_REG_GESTURE_EN = %d

// [.rodata] lct_fts_get_tpfwver
// [.rodata] 3[FTS_TS/E]%s:PROC_READ_DATA write error

// [.rodata] Vendor ID:0x%02x

// [.rodata] fts_upgrade_bin
// [.rodata] touch analysis:%s

// [.rodata] Glove Mode:%s

// [.rodata] fts_fod_reg_write
// [.rodata] 3[FTS_TS/E]%s:make IC enter into gesture(suspend) fail,state:%x

// [.rodata] 6[FTS_TS/I]%s:Exit

// [.rodata] 3[FTS_TS/E]%s:upgrade fw bin failed

// [.rodata] fts_pram_start
// [.rodata] fts_param_ide_in_host
// [.rodata] 3[FTS_TS/E]%s:upg/ts_data is null

// [.rodata] 6[FTS_TS/I]%s:upgrade fail, reset to normal boot

// [.rodata] 3[FTS_TS/E][TEST]%s:chip clb timeout


// [.rodata] %5d, 
// [.rodata] get sc cb fail

// [.rodata] [FTS_TS][TEST]%s:sysfs(test) create successfully

// [.rodata] /odm/firmware/
// [.rodata] 3[FTS_TS/E][TEST]%s:get ini(default) fail

// [.rodata] print_thr_mc_sc
// [.rodata] [FTS_TS][TEST]%s:rawdata_h_max:%d

// [.rodata] get sc threshold fail

// [.rodata] RawDataTest_Min
// [.rodata] restore 5A fails
// [.rodata] 3[FTS_TS/E][TEST]%s:restore 5A fails

// [.rodata] cg_short_resistance buffer malloc fail

// [.rodata] 3[FTS_TS/E]%s:bus initialize fail

// [.rodata] 3[FTS_TS/E]%s:buffer init fail

// [.rodata] 3[FTS_TS/E]%s:configure the gpios fail

// [.rodata] TpTransferErr
// [.rodata] fts_gpio_configure
// [.rodata] 3[FTS_TS/E]%s:enable vcc_i2c regulator failed,ret=%d

// [.rodata] fts_read_bootid
// [.rodata] 3[FTS_TS/E]%s:set TP to sleep mode fail, ret=%d

// [.rodata] 3[FTS_TS/E]%s:Set gesture pin state error:%d

// [.rodata] Disable
// [.rodata] 3[FTS_TS/E]%s:PROC_WRITE_REGISTER write error

// [.rodata] fts_fw_version
// [.rodata] Result: 
// [.rodata] fts_ex_mode_switch
// [.rodata] fts_glove_mode
// [.rodata] fts_gesture_report
// [.rodata] fts_gesture_buf
// [.rodata] 6[FTS_TS/I]%s:reset in boot environment

// [.rodata] 3[FTS_TS/E]%s:enter into romboot/bootloader fail

// [.rodata] 6[FTS_TS/I]%s:**********read boot id**********

// [.rodata] 3[FTS_TS/E]%s:upg/func/pramboot is null

// [.rodata] 6[FTS_TS/I]%s:fw in host&tp are both no ide

// [.rodata] fts_ft5452j_upgrade
// [.rodata] 3[FTS_TS/E][TEST]%s:read buffer fail

// [.rodata] 3[FTS_TS/E][TEST]%s:get short(adc) data fail


// [.rodata] 3[FTS_TS/I][TEST]%s:cb packet:%d,remainder:%d

// [.rodata] write cb addr low fail

// [.rodata] 3[FTS_TS/E][TEST]%s:csv_buffer malloc fail


// [.rodata] 3[FTS_TS/E][TEST]%s:fts_test_main_init fail

// [.rodata] 3[FTS_TS/E][TEST]%s:test func/start_test func is null

// [.rodata] 3[FTS_TS/I][TEST]%s:init test function

// [.rodata] 3[FTS_TS/E][TEST]%s:Data Invalid!

// [.rodata] FTS_INI_FILE_PATH:%s

// [.rodata] [FTS_TS][TEST]%s:section num:%d

// [.rodata] [FTS_TS][TEST]%s:%s=%s

// [.rodata] [FTS_TS][TEST]%s:test item:%s=%d

// [.rodata] [FTS_TS][TEST]%s:uniformity_check_min_max:%d

// [.rodata] Rawdata Uniformity Test
// [.rodata] 3[FTS_TS/E][TEST]%s:short test of channel to gnd fails


// [.rodata]  Rx%d
// [.rodata] focaltech,fts
// [.rodata] 'unsigned int (struct i2c_adapter *)'
// [.rodata] 'void (void)'
// [.rodata] 'int (void)'
// [.rodata] 'int (unsigned char *, unsigned int)'
// [.rodata] 'void (void)'
// [.rodata] 'int (void)'
// [.rodata] 'void (char *, int *)'
// [.rodata] SHORT_CIRCUIT_TEST
// [.rodata] OPEN_TEST
// [.rodata] CB_TEST
// [.rodata] RAWDATA_TEST
// [.rodata] LCD_NOISE_TEST
// [.rodata] KEY_SHORT_TEST
// [.rodata] MUX_OPEN_TEST
// [.rodata] 'int (void)'
// [.rodata] RAWDATA_TEST
// [.rodata] UNIFORMITY_TEST
// [.rodata] SCAP_CB_TEST
// [.rodata] SCAP_RAWDATA_TEST
// [.rodata] WEAK_SHORT_CIRCUIT_TEST
// [.rodata] PANEL_DIFFER_TEST
// [.rodata] NOISE_TEST
// [.rodata] Mcap_CMB_TEST
// [.rodata] RAWDATA_TEST
// [.rodata] CB_TEST
// [.rodata] DELTA_CB_TEST
// [.rodata] WEAK_SHORT_TEST
// [.modinfo] softdep=pre: msm_drm
// [.modinfo] author=FocalTech Driver Team
// [.modinfo] description=FocalTech Touchscreen Driver
// [.modinfo] license=GPL v2
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=focaltech_ts_i2c
// [.modinfo] depends=lct_tp,qpnp-smb5-main,panel_event_notifier,xiaomi_touch_game
// [.modinfo] alias=of:N*T*Cfocaltech,fts
// [.modinfo] alias=of:N*T*Cfocaltech,ftsC*
// [.modinfo] scmversion=gc3130bf798da
// [__ksymtab_strings] lct_fts_tp_selftest_callback
// [__ksymtab_strings] lct_fts_get_tpfwver
// [.gnu.linkonce.this_module] focaltech_ts_i2c
// [__versions] module_layout
// [__versions] memset
// [__versions] __stack_chk_fail
// [__versions] strlen
// [__versions] single_release
// [__versions] seq_lseek
// [__versions] seq_printf
// [__versions] single_open
// [__versions] seq_read
// [__versions] proc_create
// [__versions] remove_proc_entry
// [__versions] disable_irq
// [__versions] release_firmware
// [__versions] vmalloc
// [__versions] request_firmware
// [__versions] vfree
// [__versions] __const_udelay
// [__versions] i2c_transfer
// [__versions] sysfs_remove_file_ns
// [__versions] queue_delayed_work_on
// [__versions] delayed_work_timer_fn
// [__versions] init_timer_key
// [__versions] cancel_delayed_work_sync
// [__versions] irq_set_irq_wake
// [__versions] gic_nonsecure_priorities
// [__versions] cpu_hwcaps
// [__versions] cpu_hwcap_keys
// [__versions] arm64_const_caps_ready
// [__versions] android_kmalloc_64_create
// [__versions] finish_wait
// [__versions] schedule
// [__versions] prepare_to_wait_event
// [__versions] init_wait_entry
// [__versions] __arch_copy_from_user
// [__versions] __arch_copy_to_user
// [__versions] __check_object_size
// [__versions] __kmalloc
// [__versions] PDE_DATA
// [__versions] uninit_lct_tp_info
// [__versions] uninit_lct_tp_selftest
// [__versions] uninit_lct_tp_grip_area
// [__versions] uninit_lct_tp_gesture
// [__versions] uninit_lct_tp_work
// [__versions] init_lct_tp_work
// [__versions] init_lct_tp_gesture
// [__versions] init_lct_tp_grip_area
// [__versions] init_lct_tp_selftest
// [__versions] set_lct_tp_info_callback
// [__versions] init_lct_tp_info
// [__versions] set_lct_tp_work_status
// [__versions] update_lct_tp_info
// [__versions] sysfs_remove_group
// [__versions] sysfs_create_group
// [__versions] proc_remove
// [__versions] proc_create_data
// [__versions] jiffies
// [__versions] kmalloc_caches
// [__versions] g_touchscreen_usb_pulgin
// [__versions] system_wq
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] i2c_del_driver
// [__versions] complete
// [__versions] panel_event_notifier_unregister
// [__versions] kstrtoint
// [__versions] sysfs_create_file_ns
// [__versions] cancel_work_sync
// [__versions] flush_workqueue
// [__versions] panel_event_notifier_register
// [__versions] __init_swait_queue_head
// [__versions] get_lct_tp_work_status
// [__versions] update_palm_sensor_value
// [__versions] snprintf
// [__versions] update_fod_press_status
// [__versions] __wake_up
// [__versions] wait_for_completion_timeout
// [__versions] gpiod_to_irq
// [__versions] request_threaded_irq
// [__versions] regulator_disable
// [__versions] regulator_enable
// [__versions] pinctrl_select_state
// [__versions] devm_pinctrl_put
// [__versions] pinctrl_lookup_state
// [__versions] devm_pinctrl_get
// [__versions] regulator_put
// [__versions] regulator_set_voltage
// [__versions] regulator_count_voltages
// [__versions] regulator_get
// [__versions] gpiod_direction_input
// [__versions] gpio_request
// [__versions] input_free_device
// [__versions] input_register_device
// [__versions] input_set_abs_params
// [__versions] input_mt_init_slots
// [__versions] input_set_capability
// [__versions] input_allocate_device
// [__versions] of_drm_find_panel
// [__versions] of_parse_phandle
// [__versions] of_count_phandle_with_args
// [__versions] of_property_read_variable_u32_array
// [__versions] of_find_property
// [__versions] of_get_named_gpio_flags
// [__versions] destroy_workqueue
// [__versions] input_unregister_device
// [__versions] gpio_free
// [__versions] device_destroy
// [__versions] xiaomitouch_register_modedata
// [__versions] device_create
// [__versions] get_xiaomi_touch_class
// [__versions] __init_waitqueue_head
// [__versions] __mutex_init
// [__versions] alloc_workqueue
// [__versions] xiaomi_touch_mievent_report_int
// [__versions] kmem_cache_alloc_trace
// [__versions] __cfi_slowpath_diag
// [__versions] i2c_register_driver
// [__versions] input_event
// [__versions] _raw_spin_unlock_irqrestore
// [__versions] gpio_to_desc
// [__versions] gpiod_direction_output_raw
// [__versions] queue_work_on
// [__versions] mutex_unlock
// [__versions] input_mt_report_slot_state
// [__versions] mutex_lock
// [__versions] enable_irq
// [__versions] irq_to_desc
// [__versions] disable_irq_nosync
// [__versions] _raw_spin_lock_irqsave
// [__versions] set_lct_tp_gesture_status
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
// [.shstrtab] .rela.rodata.fts_dev_pm_ops
// [.shstrtab] .rela.altinstructions
// [.shstrtab] __versions
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .rela___ksymtab+lct_fts_get_tpfwver
// [.shstrtab] .rela___kcrctab+lct_fts_get_tpfwver
// [.shstrtab] .modinfo
// [.shstrtab] .rela.data.fts_usb_plugin_work
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .rela__jump_table
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] __ksymtab
// [.shstrtab] .symtab
// [.shstrtab] __kcrctab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.strtab] of_find_property
// [.strtab] input_set_capability
// [.strtab] fts_esdcheck_proc_busy
// [.strtab] fts_test_entry
// [.strtab] init_wait_entry
// [.strtab] remove_proc_entry
// [.strtab] fts_tp_state_recovery
// [.strtab] fts_gesture_recovery
// [.strtab] fts_ex_mode_recovery
// [.strtab] fts_fod_recovery
// [.strtab] memcpy
// [.strtab] strlcpy
// [.strtab] device_destroy
// [.strtab] init_timer_key
// [.strtab] fts_ts_probe_entry.__key
// [.strtab] init_completion.__key
// [.strtab] arm64_const_caps_ready
// [.strtab] compare_array
// [.strtab] of_property_read_variable_u32_array
// [.strtab] __const_udelay
// [.strtab] sys_delay
// [.strtab] fts_test_show
// [.strtab] fts_hw_reset_show
// [.strtab] fts_tpfwver_show
// [.strtab] fts_irq_show
// [.strtab] fts_driverinfo_show
// [.strtab] fts_fwupgradebin_show
// [.strtab] fts_pen_show
// [.strtab] fts_gesture_bm_show
// [.strtab] fts_log_level_show
// [.strtab] fts_esdcheck_show
// [.strtab] fts_fwforceupg_show
// [.strtab] fts_tprwreg_show
// [.strtab] fts_dumpreg_show
// [.strtab] fts_tpbuf_show
// [.strtab] fts_gesture_buf_show
// [.strtab] fts_touchsize_show
// [.strtab] fts_gesture_show
// [.strtab] fts_bootmode_show
// [.strtab] fts_tamode_show
// [.strtab] fts_cover_mode_show
// [.strtab] fts_charger_mode_show
// [.strtab] fts_glove_mode_show
// [.strtab] fts_prc_show
// [.strtab] fts_test_proc_show
// [.strtab] fts_result_proc_show
// [.strtab] tp_data_dump_proc_show
// [.strtab] gpiod_direction_output_raw
// [.strtab] fts_test_malloc_free_data_txt
// [.strtab] gpiod_direction_input
// [.strtab] regulator_put
// [.strtab] devm_pinctrl_put
// [.strtab] wait_for_completion_timeout
// [.strtab] fts_crc16_calc_host
// [.strtab] module_list
// [.strtab] test_func_list
// [.strtab] upgrade_func_list
// [.strtab] gpio_request
// [.strtab] uninit_lct_tp_selftest
// [.strtab] fts_ftest
// [.strtab] ini_init_test
// [.strtab] dev_attr_fts_test
// [.strtab] fts_touch_dfs_test
// [.strtab] dev_attr_fod_test
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] fts_pram_start
// [.strtab] fts_fwupg_enter_into_boot
// [.strtab] fts_fwupg_reset_in_boot
// [.strtab] kstrtoint
// [.strtab] dev_attr_fts_touch_point
// [.strtab] xiaomi_touch_mievent_report_int
// [.strtab] input_event
// [.strtab] prepare_to_wait_event
// [.strtab] fts_enter_test_environment
// [.strtab] lct_fts_get_tpfwver.cfi_jt
// [.strtab] delayed_work_timer_fn.cfi_jt
// [.strtab] seq_lseek.cfi_jt
// [.strtab] lct_fts_tp_selftest_callback.cfi_jt
// [.strtab] fts_ts_usb_event_callback.cfi_jt
// [.strtab] lct_fts_tp_work_callback.cfi_jt
// [.strtab] lct_fts_tp_gesture_callback.cfi_jt
// [.strtab] lct_fts_tp_set_screen_angle_callback.cfi_jt
// [.strtab] fts_gesture_switch.cfi_jt
// [.strtab] fts_esdcheck_show.ee9e47ebc1d7c732d345b7931318f4ff.cfi_jt
// [.strtab] fts_esdcheck_store.ee9e47ebc1d7c732d345b7931318f4ff.cfi_jt
// [.strtab] esdcheck_func.ee9e47ebc1d7c732d345b7931318f4ff.cfi_jt
// [.strtab] fts_gesture_bm_show.7ec25d043f24ee1eddac8db61187129f.cfi_jt
// [.strtab] fts_gesture_buf_show.7ec25d043f24ee1eddac8db61187129f.cfi_jt
// [.strtab] fts_gesture_show.7ec25d043f24ee1eddac8db61187129f.cfi_jt
// [.strtab] fts_gesture_bm_store.7ec25d043f24ee1eddac8db61187129f.cfi_jt
// [.strtab] fts_gesture_buf_store.7ec25d043f24ee1eddac8db61187129f.cfi_jt
// [.strtab] fts_gesture_store.7ec25d043f24ee1eddac8db61187129f.cfi_jt
// [.strtab] ft5452j_write_pramboot_private.cfi_jt
// [.strtab] single_release.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] seq_read.cfi_jt
// [.strtab] fts_test_show.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] fts_test_proc_show.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] fts_result_proc_show.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] tp_data_dump_proc_show.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] fts_test_proc_open.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] fts_result_proc_open.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] tp_data_dump_proc_open.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] tp_test_proc_write.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] tp_result_proc_write.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] fts_test_store.a9c62907dad159691dbfc888f4846a3d.cfi_jt
// [.strtab] fts_fwupg_work.b389cb1971f7e0f880fff3568d7a700a.cfi_jt
// [.strtab] fts_cover_mode_show.79295666be4190291f0ed10100b7ec08.cfi_jt
// [.strtab] fts_charger_mode_show.79295666be4190291f0ed10100b7ec08.cfi_jt
// [.strtab] fts_glove_mode_show.79295666be4190291f0ed10100b7ec08.cfi_jt
// [.strtab] fts_cover_mode_store.79295666be4190291f0ed10100b7ec08.cfi_jt
// [.strtab] fts_charger_mode_store.79295666be4190291f0ed10100b7ec08.cfi_jt
// [.strtab] fts_glove_mode_store.79295666be4190291f0ed10100b7ec08.cfi_jt
// [.strtab] fts_hw_reset_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tpfwver_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_irq_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_driverinfo_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_fwupgradebin_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_pen_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_log_level_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_fwforceupg_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tprwreg_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_dumpreg_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tpbuf_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_touchsize_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_bootmode_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tamode_show.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_ta_open.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_debug_write.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_ta_release.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_hw_reset_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tpfwver_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_irq_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_driverinfo_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_fwupgradebin_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_pen_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_log_level_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_fwforceupg_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tprwreg_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_dumpreg_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tpbuf_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_touchsize_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_bootmode_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_tamode_store.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_debug_read.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_ta_read.846ca4183596b142ab693d00ccc31166.cfi_jt
// [.strtab] fts_prc_show.79506f61a855b0c46bf242c94e782315.cfi_jt
// [.strtab] fts_prc_store.79506f61a855b0c46bf242c94e782315.cfi_jt
// [.strtab] fts_prc_func.79506f61a855b0c46bf242c94e782315.cfi_jt
// [.strtab] fts_touch_dfs_test.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_irq_handler.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_get_mode_all.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_sleep2gesture_work.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_resume_work.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_ts_panel_notifier_callback.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_ts_remove.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_set_cur_value.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_get_mode_value.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_palm_sensor_write.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_fod_test_store.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_pm_resume.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_reset_mode.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_ts_probe.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_pm_suspend.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_ts_usb_plugin_work_func.1d9115c5b63d3299251e53d84922b4f4.cfi_jt
// [.strtab] fts_ft5452j_upgrade.d30ed8dcadd5a165705240bfada92773.cfi_jt
// [.strtab] start_test_ft5452.c69b38e6b1471012195533529a7a73b0.cfi_jt
// [.strtab] fts_test_exit
// [.strtab] fts_bus_exit
// [.strtab] fts_esdcheck_exit
// [.strtab] fts_point_report_check_exit
// [.strtab] fts_fwupg_exit
// [.strtab] fts_gesture_exit
// [.strtab] fts_ex_mode_exit
// [.strtab] fts_power_source_exit
// [.strtab] __mutex_init
// [.strtab] fts_test_init
// [.strtab] fts_bus_init
// [.strtab] fts_esdcheck_init
// [.strtab] fts_point_report_check_init
// [.strtab] fts_fwupg_init
// [.strtab] fts_pram_write_init
// [.strtab] fts_gesture_init
// [.strtab] fts_ex_mode_init
// [.strtab] finish_wait
// [.strtab] memset
// [.strtab] dev_attr_fts_hw_reset
// [.strtab] fts_recover_after_reset
// [.strtab] regulator_get
// [.strtab] devm_pinctrl_get
// [.strtab] cpu_hwcap_keys
// [.strtab] update_fod_press_status
// [.strtab] set_lct_tp_work_status
// [.strtab] get_lct_tp_work_status
// [.strtab] set_lct_tp_gesture_status
// [.strtab] input_mt_init_slots
// [.strtab] get_xiaomi_touch_class
// [.strtab] fts_touch_mode_attrs
// [.strtab] fts_gesture_mode_attrs
// [.strtab] fts_esd_mode_attrs
// [.strtab] tp_test_proc_fops
// [.strtab] tp_result_proc_fops
// [.strtab] fts_proc_fops
// [.strtab] tp_data_dump_proc_fops
// [.strtab] fts_procta_fops
// [.strtab] fts_dev_pm_ops
// [.strtab] cpu_hwcaps
// [.strtab] ____versions
// [.strtab] sysfs_remove_file_ns
// [.strtab] sysfs_create_file_ns
// [.strtab] input_set_abs_params
// [.strtab] of_count_phandle_with_args
// [.strtab] of_get_named_gpio_flags
// [.strtab] fts_remove_sysfs
// [.strtab] fts_create_sysfs
// [.strtab] lct_remove_procfs
// [.strtab] lct_create_procfs
// [.strtab] fts_test_attributes
// [.strtab] fts_attributes
// [.strtab] ic_types
// [.strtab] gic_nonsecure_priorities
// [.strtab] jiffies
// [.strtab] kmalloc_caches
// [.strtab] regulator_count_voltages
// [.strtab] xiaomi_touch_interfaces
// [.strtab] fts_abs
// [.strtab] fts_test_malloc_free_thr
// [.strtab] __kstrtabns_lct_fts_get_tpfwver
// [.strtab] __crc_lct_fts_get_tpfwver
// [.strtab] __kstrtab_lct_fts_get_tpfwver
// [.strtab] __ksymtab_lct_fts_get_tpfwver
// [.strtab] fts_ts_driver
// [.strtab] i2c_register_driver
// [.strtab] i2c_del_driver
// [.strtab] panel_event_notifier_unregister
// [.strtab] panel_event_notifier_register
// [.strtab] __arch_copy_to_user
// [.strtab] __arch_copy_from_user
// [.strtab] fts_irq_handler
// [.strtab] fts_release_all_finger
// [.strtab] i2c_transfer
// [.strtab] print_buffer
// [.strtab] __typeid__ZTSFvvE_global_addr
// [.strtab] __typeid__ZTSFivE_global_addr
// [.strtab] __typeid__ZTSFiPhjE_global_addr
// [.strtab] system_wq
// [.strtab] dev_attr_fts_irq
// [.strtab] gpiod_to_irq
// [.strtab] disable_irq
// [.strtab] enable_irq
// [.strtab] free_irq
// [.strtab] request_threaded_irq
// [.strtab] get_fw_wp
// [.strtab] sysfs_remove_group
// [.strtab] fts_test_attribute_group
// [.strtab] sysfs_create_group
// [.strtab] fts_esd_group
// [.strtab] __wake_up
// [.strtab] fts_param_get_ver_in_tp
// [.strtab] fts_fwupg_get_ver_in_tp
// [.strtab] strncmp
// [.strtab] msleep
// [.strtab] lct_tp_data_dump_p
// [.strtab] dev_attr_fts_driver_info
// [.strtab] uninit_lct_tp_info
// [.strtab] update_lct_tp_info
// [.strtab] lct_get_lockdown_info
// [.strtab] dev_attr_fts_fw_version
// [.strtab] queue_work_on
// [.strtab] queue_delayed_work_on
// [.strtab] g_touchscreen_usb_pulgin
// [.strtab] dev_attr_fts_upgrade_bin
// [.strtab] delayed_work_timer_fn
// [.strtab] single_open
// [.strtab] fts_test_proc_open
// [.strtab] fts_result_proc_open
// [.strtab] tp_data_dump_proc_open
// [.strtab] fts_ta_open
// [.strtab] dev_attr_fts_pen
// [.strtab] strlen
// [.strtab] start_scan
// [.strtab] get_tx_rx_num
// [.strtab] get_test_item
// [.strtab] dev_attr_fts_gesture_bm
// [.strtab] fts_power_source_ctrl
// [.strtab] bthr_name_incell
// [.strtab] get_cb_incell
// [.strtab] short_get_adcdata_incell
// [.strtab] lct_tp_selftest_all
// [.strtab] fts_get_mode_all
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] dev_attr_fts_log_level
// [.strtab] fts_create_apk_debug_channel
// [.strtab] fts_release_apk_debug_channel
// [.strtab] active_panel
// [.strtab] of_drm_find_panel
// [.strtab] fts_fwupg_ecc_cal
// [.strtab] _printk
// [.strtab] uninit_lct_tp_work
// [.strtab] fts_usb_plugin_work
// [.strtab] fts_fwupg_work
// [.strtab] fts_prc_queue_work
// [.strtab] fts_sleep2gesture_work
// [.strtab] fts_resume_work
// [.strtab] seq_lseek
// [.strtab] mutex_unlock
// [.strtab] mutex_lock
// [.strtab] __cfi_check
// [.strtab] __kstrtabns_lct_fts_tp_selftest_callback
// [.strtab] __crc_lct_fts_tp_selftest_callback
// [.strtab] __kstrtab_lct_fts_tp_selftest_callback
// [.strtab] __ksymtab_lct_fts_tp_selftest_callback
// [.strtab] fts_ts_usb_event_callback
// [.strtab] fts_ts_panel_notifier_callback
// [.strtab] set_lct_tp_info_callback
// [.strtab] lct_fts_tp_work_callback
// [.strtab] lct_fts_tp_gesture_callback
// [.strtab] lct_fts_tp_set_screen_angle_callback
// [.strtab] lct_fts_tp_get_screen_angle_callback
// [.strtab] pb_file_ft5452j
// [.strtab] upgrade_func_ft5452j
// [.strtab] fts_test_get_testparam_from_ini
// [.strtab] fts_esdcheck_switch
// [.strtab] mapping_switch
// [.strtab] fts_gesture_switch
// [.strtab] fts_dt_match
// [.strtab] dev_attr_fts_rw_reg
// [.strtab] dev_attr_fts_dump_reg
// [.strtab] fts_test_write_reg
// [.strtab] fts_write_reg
// [.strtab] fts_test_read_reg
// [.strtab] fts_read_reg
// [.strtab] __cfi_slowpath_diag
// [.strtab] fts_flash_write_buf
// [.strtab] dev_attr_fts_gesture_buf
// [.strtab] fts_flash_read_buf
// [.strtab] snprintf
// [.strtab] seq_printf
// [.strtab] sscanf
// [.strtab] fts_esdcheck_show.ee9e47ebc1d7c732d345b7931318f4ff
// [.strtab] fts_esdcheck_store.ee9e47ebc1d7c732d345b7931318f4ff
// [.strtab] esdcheck_func.ee9e47ebc1d7c732d345b7931318f4ff
// [.strtab] fts_gesture_bm_show.7ec25d043f24ee1eddac8db61187129f
// [.strtab] fts_gesture_buf_show.7ec25d043f24ee1eddac8db61187129f
// [.strtab] fts_gesture_show.7ec25d043f24ee1eddac8db61187129f
// [.strtab] fts_gesture_bm_store.7ec25d043f24ee1eddac8db61187129f
// [.strtab] fts_gesture_buf_store.7ec25d043f24ee1eddac8db61187129f
// [.strtab] fts_gesture_store.7ec25d043f24ee1eddac8db61187129f
// [.strtab] __check_object_size
// [.strtab] dev_attr_fts_touch_size
// [.strtab] fts_ts_remove
// [.strtab] proc_remove
// [.strtab] _raw_spin_lock_irqsave
// [.strtab] fts_set_cur_value
// [.strtab] update_palm_sensor_value
// [.strtab] ini_get_string_value
// [.strtab] fts_get_mode_value
// [.strtab] get_keyword_value
// [.strtab] destroy_workqueue
// [.strtab] flush_workqueue
// [.strtab] alloc_workqueue
// [.strtab] fts_test_write
// [.strtab] fts_write
// [.strtab] fts_palm_sensor_write
// [.strtab] fts_debug_write
// [.strtab] fts_gesture_reg_write
// [.strtab] fts_fod_reg_write
// [.strtab] tp_test_proc_write
// [.strtab] tp_result_proc_write
// [.strtab] complete
// [.strtab] ft5452j_write_pramboot_private
// [.strtab] fts_fwupg_get_boot_state
// [.strtab] fts_ft5452j_fwupg_get_boot_state
// [.strtab] input_mt_report_slot_state
// [.strtab] pinctrl_select_state
// [.strtab] pinctrl_lookup_state
// [.strtab] device_create
// [.strtab] proc_create
// [.strtab] android_kmalloc_64_create
// [.strtab] wait_state_update
// [.strtab] fts_fwupg_erase
// [.strtab] single_release
// [.strtab] fts_ta_release
// [.strtab] uninit_lct_tp_gesture
// [.strtab] _raw_spin_unlock_irqrestore
// [.strtab] fts_test_store
// [.strtab] fts_fod_test_store
// [.strtab] fts_hw_reset_store
// [.strtab] fts_tpfwver_store
// [.strtab] fts_irq_store
// [.strtab] fts_driverinfo_store
// [.strtab] fts_fwupgradebin_store
// [.strtab] fts_pen_store
// [.strtab] fts_gesture_bm_store
// [.strtab] fts_log_level_store
// [.strtab] fts_esdcheck_store
// [.strtab] fts_fwforceupg_store
// [.strtab] fts_tprwreg_store
// [.strtab] fts_dumpreg_store
// [.strtab] fts_tpbuf_store
// [.strtab] fts_gesture_buf_store
// [.strtab] fts_touchsize_store
// [.strtab] fts_gesture_store
// [.strtab] fts_bootmode_store
// [.strtab] fts_tamode_store
// [.strtab] fts_cover_mode_store
// [.strtab] fts_charger_mode_store
// [.strtab] fts_glove_mode_store
// [.strtab] fts_prc_store
// [.strtab] request_firmware
// [.strtab] release_firmware
// [.strtab] fts_test_read_one
// [.strtab] fts_pm_resume
// [.strtab] fts_esdcheck_resume
// [.strtab] fts_gesture_resume
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] schedule
// [.strtab] fw_file
// [.strtab] of_parse_phandle
// [.strtab] __mod_of__fts_dt_match_device_table
// [.strtab] regulator_disable
// [.strtab] fts_irq_disable
// [.strtab] regulator_enable
// [.strtab] fts_irq_enable
// [.strtab] irq_set_irq_wake
// [.strtab] regulator_set_voltage
// [.strtab] vfree
// [.strtab] kfree
// [.strtab] gpio_free
// [.strtab] enter_factory_mode
// [.strtab] dev_attr_fts_boot_mode
// [.strtab] fts_reset_mode
// [.strtab] dev_attr_fts_cover_mode
// [.strtab] lct_fts_set_charger_mode
// [.strtab] dev_attr_fts_charger_mode
// [.strtab] enter_work_mode
// [.strtab] dev_attr_fts_glove_mode
// [.strtab] dev_attr_fts_gesture_mode
// [.strtab] dev_attr_fts_esd_mode
// [.strtab] dev_attr_fts_ta_mode
// [.strtab] fwupgrade
// [.strtab] fts_ft5452j_upgrade
// [.strtab] fts_fwupg_upgrade
// [.strtab] dev_attr_fts_force_upgrade
// [.strtab] input_unregister_device
// [.strtab] input_register_device
// [.strtab] input_allocate_device
// [.strtab] input_free_device
// [.strtab] kmem_cache_alloc_trace
// [.strtab] fts_ts_probe
// [.strtab] fts_hid2std
// [.strtab] fts_pm_suspend
// [.strtab] fts_esdcheck_suspend
// [.strtab] fts_gesture_suspend
// [.strtab] get_detail_threshold
// [.strtab] get_basic_threshold
// [.strtab] fts_wait_tp_to_valid
// [.strtab] fts_check_cid
// [.strtab] fts_ts_id
// [.strtab] fts_test_read
// [.strtab] fts_read
// [.strtab] seq_read
// [.strtab] fts_flash_read
// [.strtab] fts_debug_read
// [.strtab] fts_ta_read
// [.strtab] __init_waitqueue_head
// [.strtab] __init_swait_queue_head
// [.strtab] fts_test_show.a9c62907dad159691dbfc888f4846a3d
// [.strtab] fts_test_proc_show.a9c62907dad159691dbfc888f4846a3d
// [.strtab] fts_result_proc_show.a9c62907dad159691dbfc888f4846a3d
// [.strtab] tp_data_dump_proc_show.a9c62907dad159691dbfc888f4846a3d
// [.strtab] fts_test_proc_open.a9c62907dad159691dbfc888f4846a3d
// [.strtab] fts_result_proc_open.a9c62907dad159691dbfc888f4846a3d
// [.strtab] tp_data_dump_proc_open.a9c62907dad159691dbfc888f4846a3d
// [.strtab] tp_test_proc_write.a9c62907dad159691dbfc888f4846a3d
// [.strtab] tp_result_proc_write.a9c62907dad159691dbfc888f4846a3d
// [.strtab] fts_test_store.a9c62907dad159691dbfc888f4846a3d
// [.strtab] irq_to_desc
// [.strtab] gpio_to_desc
// [.strtab] bthr_name_sc
// [.strtab] compare_mc_sc
// [.strtab] bthr_name_mc_sc
// [.strtab] get_cb_mc_sc
// [.strtab] get_rawdata_mc_sc
// [.strtab] show_data_mc_sc
// [.strtab] get_cb_sc
// [.strtab] dev_attr_fts_prc
// [.strtab] tp_test_proc
// [.strtab] tp_result_proc
// [.strtab] fts_reset_proc
// [.strtab] fts_free_proc
// [.strtab] vmalloc
// [.strtab] __kmalloc
// [.strtab] fts_malloc
// [.strtab] disable_irq_nosync
// [.strtab] cancel_work_sync
// [.strtab] cancel_delayed_work_sync
// [.strtab] fts_ts_usb_plugin_work_func
// [.strtab] esdcheck_func
// [.strtab] fts_prc_func
// [.strtab] get_rawdata_mc
// [.strtab] short_get_adc_data_mc
// [.strtab] chip_clb
// [.strtab] fts_input_report_b
// [.strtab] lct_tp_get_rawdata
// [.strtab] read_rawdata
// [.strtab] lct_tp_get_diffdata
// [.strtab] xiaomitouch_register_modedata
// [.strtab] fts_gesture_readdata
// [.strtab] show_data
// [.strtab] fts_data
// [.strtab] read_mass_data
// [.strtab] fts_esdcheck_data
// [.strtab] fts_test_save_data
// [.strtab] proc_create_data
// [.strtab] fts_gesture_data
// [.strtab] compare_data
// [.strtab] uninit_lct_tp_grip_area
// [.strtab] fts_fwupg_work.b389cb1971f7e0f880fff3568d7a700a
// [.strtab] PDE_DATA
// [.strtab] _note_9
// [.strtab] $x.99
// [.strtab] $x.89
// [.strtab] $d.79
// [.strtab] $d.69
// [.strtab] $d.59
// [.strtab] $x.49
// [.strtab] $d.49
// [.strtab] $d.139
// [.strtab] $x.39
// [.strtab] $d.39
// [.strtab] fts_touch_mode_group.llvm.1106586353771003229
// [.strtab] $d.129
// [.strtab] fts_ts_probe_entry.__key.29
// [.strtab] $x.29
// [.strtab] $d.29
// [.strtab] $d.119
// [.strtab] $x.19
// [.strtab] $d.19
// [.strtab] $x.109
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $x.98
// [.strtab] $x.88
// [.strtab] $x.78
// [.strtab] $d.78
// [.strtab] $x.68
// [.strtab] $d.68
// [.strtab] $x.58
// [.strtab] $d.58
// [.strtab] $d.148
// [.strtab] $x.48
// [.strtab] $d.48
// [.strtab] $d.138
// [.strtab] $x.38
// [.strtab] $d.38
// [.strtab] $d.128
// [.strtab] $x.28
// [.strtab] $d.28
// [.strtab] $x.18
// [.strtab] $d.18
// [.strtab] fts_cover_mode_show.79295666be4190291f0ed10100b7ec08
// [.strtab] fts_charger_mode_show.79295666be4190291f0ed10100b7ec08
// [.strtab] fts_glove_mode_show.79295666be4190291f0ed10100b7ec08
// [.strtab] fts_cover_mode_store.79295666be4190291f0ed10100b7ec08
// [.strtab] fts_charger_mode_store.79295666be4190291f0ed10100b7ec08
// [.strtab] fts_glove_mode_store.79295666be4190291f0ed10100b7ec08
// [.strtab] $x.108
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $x.97
// [.strtab] $x.87
// [.strtab] $d.77
// [.strtab] $d.67
// [.strtab] $d.57
// [.strtab] $d.147
// [.strtab] $x.47
// [.strtab] $d.47
// [.strtab] $d.137
// [.strtab] $x.37
// [.strtab] $d.37
// [.strtab] $d.127
// [.strtab] $x.27
// [.strtab] $d.27
// [.strtab] $d.117
// [.strtab] $x.17
// [.strtab] $d.17
// [.strtab] $x.107
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] $x.96
// [.strtab] $x.86
// [.strtab] $x.76
// [.strtab] fts_hw_reset_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tpfwver_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_irq_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_driverinfo_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_fwupgradebin_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_pen_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_log_level_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_fwforceupg_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tprwreg_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_dumpreg_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tpbuf_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_touchsize_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_bootmode_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tamode_show.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_ta_open.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_debug_write.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_ta_release.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_hw_reset_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tpfwver_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_irq_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_driverinfo_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_fwupgradebin_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_pen_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_log_level_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_fwforceupg_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tprwreg_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_dumpreg_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tpbuf_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_touchsize_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_bootmode_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_tamode_store.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_debug_read.846ca4183596b142ab693d00ccc31166
// [.strtab] fts_ta_read.846ca4183596b142ab693d00ccc31166
// [.strtab] $x.66
// [.strtab] $d.66
// [.strtab] $x.56
// [.strtab] $d.56
// [.strtab] $d.146
// [.strtab] $x.46
// [.strtab] $d.46
// [.strtab] $d.136
// [.strtab] $x.36
// [.strtab] $d.36
// [.strtab] $d.126
// [.strtab] $x.26
// [.strtab] $d.26
// [.strtab] read_mass_data_u16
// [.strtab] $d.116
// [.strtab] $x.16
// [.strtab] $d.16
// [.strtab] $x.106
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] __UNIQUE_ID_scmversion295
// [.strtab] $x.95
// [.strtab] $x.85
// [.strtab] $d.75
// [.strtab] $d.65
// [.strtab] $x.55
// [.strtab] $d.55
// [.strtab] $d.145
// [.strtab] $x.45
// [.strtab] $d.45
// [.strtab] $d.135
// [.strtab] $x.35
// [.strtab] $d.35
// [.strtab] $d.125
// [.strtab] $x.25
// [.strtab] $d.25
// [.strtab] fts_prc_show.79506f61a855b0c46bf242c94e782315
// [.strtab] fts_prc_store.79506f61a855b0c46bf242c94e782315
// [.strtab] fts_prc_func.79506f61a855b0c46bf242c94e782315
// [.strtab] $d.115
// [.strtab] $x.15
// [.strtab] $d.15
// [.strtab] $x.105
// [.strtab] $x.5
// [.strtab] rw_op.5
// [.strtab] $d.5
// [.strtab] fts_touch_dfs_test.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_irq_handler.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_get_mode_all.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_sleep2gesture_work.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_resume_work.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_ts_panel_notifier_callback.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_ts_remove.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_set_cur_value.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_get_mode_value.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_palm_sensor_write.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_fod_test_store.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_pm_resume.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_reset_mode.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_ts_probe.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_pm_suspend.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] fts_ts_usb_plugin_work_func.1d9115c5b63d3299251e53d84922b4f4
// [.strtab] __UNIQUE_ID_alias294
// [.strtab] $x.94
// [.strtab] $x.84
// [.strtab] $x.74
// [.strtab] $x.64
// [.strtab] $d.64
// [.strtab] $x.54
// [.strtab] $d.54
// [.strtab] $x.44
// [.strtab] $d.44
// [.strtab] $d.134
// [.strtab] $x.34
// [.strtab] $d.34
// [.strtab] $d.124
// [.strtab] $x.24
// [.strtab] $d.24
// [.strtab] $d.114
// [.strtab] $x.14
// [.strtab] $d.14
// [.strtab] $x.104
// [.strtab] $x.4
// [.strtab] rw_op.4
// [.strtab] $d.4
// [.strtab] fw_file3
// [.strtab] __UNIQUE_ID_license493
// [.strtab] __UNIQUE_ID_alias293
// [.strtab] $x.93
// [.strtab] $x.83
// [.strtab] fts_ft5452j_upgrade.d30ed8dcadd5a165705240bfada92773
// [.strtab] $d.73
// [.strtab] $d.63
// [.strtab] $x.53
// [.strtab] $d.53
// [.strtab] $x.43
// [.strtab] $d.43
// [.strtab] $d.133
// [.strtab] fts_ts_probe_entry.__key.33
// [.strtab] $x.33
// [.strtab] $d.33
// [.strtab] $d.123
// [.strtab] $x.23
// [.strtab] $d.23
// [.strtab] $x.113
// [.strtab] $x.13
// [.strtab] $d.13
// [.strtab] $x.103
// [.strtab] $x.3
// [.strtab] rw_op.3
// [.strtab] $d.3
// [.strtab] fw_file2
// [.strtab] __UNIQUE_ID_description492
// [.strtab] __UNIQUE_ID_depends292
// [.strtab] $x.92
// [.strtab] $x.82
// [.strtab] $x.72
// [.strtab] $x.62
// [.strtab] $d.62
// [.strtab] start_test_ft5452
// [.strtab] test_func_ft5452
// [.strtab] $x.52
// [.strtab] $d.52
// [.strtab] fts_attribute_group.llvm.614020873397002742
// [.strtab] $x.42
// [.strtab] $d.42
// [.strtab] $d.132
// [.strtab] $x.32
// [.strtab] $d.32
// [.strtab] $d.122
// [.strtab] $x.22
// [.strtab] $d.22
// [.strtab] $x.112
// [.strtab] $x.12
// [.strtab] $d.12
// [.strtab] $x.102
// [.strtab] $x.2
// [.strtab] rw_op.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_author491
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $x.91
// [.strtab] $d.81
// [.strtab] $d.71
// [.strtab] $d.61
// [.strtab] $x.51
// [.strtab] $d.51
// [.strtab] $x.41
// [.strtab] $d.41
// [.strtab] $d.131
// [.strtab] fts_ts_probe_entry.__key.31
// [.strtab] $x.31
// [.strtab] $d.31
// [.strtab] $d.121
// [.strtab] $x.21
// [.strtab] $d.21
// [.strtab] fts_gesture_group.llvm.11375988175110845411
// [.strtab] $x.111
// [.strtab] $x.11
// [.strtab] $d.11
// [.strtab] $x.101
// [.strtab] $x.1
// [.strtab] rw_op.1
// [.strtab] $d.1
// [.strtab] start_test_ft5452.c69b38e6b1471012195533529a7a73b0
// [.strtab] __UNIQUE_ID_softdep490
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $x.90
// [.strtab] $x.80
// [.strtab] $d.80
// [.strtab] $x.70
// [.strtab] $d.70
// [.strtab] $x.60
// [.strtab] $d.60
// [.strtab] $x.50
// [.strtab] $d.50
// [.strtab] $x.40
// [.strtab] $d.40
// [.strtab] $d.130
// [.strtab] $x.30
// [.strtab] $d.30
// [.strtab] $d.120
// [.strtab] $x.20
// [.strtab] $d.20
// [.strtab] $x.110
// [.strtab] $x.10
// [.strtab] $d.10
// [.strtab] $x.100
// [.strtab] rw_op.0

/* ---- fts_ts_usb_plugin_work_func.1d9115c5b63d3299251e53d84922b4f4 @ 001117a8 ---- */

void fts_ts_usb_plugin_work_func_1d9115c5b63d3299251e53d84922b4f4(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(fts_data + 0x321) == '\0') {
    if ((*(char *)(fts_data + 0x322) == '\0') && (*(int *)(fts_data + 0x4a4) == 0)) {
      lct_fts_set_charger_mode(DAT_00132251);
    }
  }
  else {
    msleep(8);
  }
  return;
}



/* ---- lct_fts_tp_gesture_callback @ 00111800 ---- */

undefined8 lct_fts_tp_gesture_callback(uint param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = fts_data;
  if (*(char *)(fts_data + 0x321) == '\0') {
    set_lct_tp_gesture_status(param_1 & 1);
    uVar3 = 0;
    if ((param_1 & 1) == 0) {
      *(undefined1 *)(lVar2 + 0x32d) = 0;
      *(undefined1 *)(lVar2 + 0x32f) = 0;
    }
    else {
      *(undefined1 *)(lVar2 + 0x32d) = 1;
      *(undefined1 *)(lVar2 + 0x32f) = 1;
    }
  }
  else {
    pcVar1 = "enabled";
    if ((param_1 & 1) == 0) {
      pcVar1 = "disabled";
    }
    _printk("<6>[FTS_TS/I]%s:The gesture mode will be %s the next time you wakes up.\n","lct_fts_tp_gesture_callback",pcVar1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ---- fts_ts_usb_event_callback @ 00111898 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fts_ts_usb_event_callback(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  queue_work_on(0x20,_system_wq,&fts_usb_plugin_work);
  return;
}



/* ---- fts_check_cid @ 001118d0 ---- */

undefined4 fts_check_cid(long param_1,ushort param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x3c) == 0) {
    return 0xffffffc3;
  }
  param_2 = param_2 & 0xff;
  if ((((((0xff < *(ushort *)(param_1 + 0x3e)) && (*(ushort *)(param_1 + 0x3e) >> 8 == param_2)) ||
        ((0xff < *(ushort *)(param_1 + 0x40) && (*(ushort *)(param_1 + 0x40) >> 8 == param_2)))) ||
       ((0xff < *(ushort *)(param_1 + 0x42) && (*(ushort *)(param_1 + 0x42) >> 8 == param_2)))) ||
      ((0xff < *(ushort *)(param_1 + 0x44) && (*(ushort *)(param_1 + 0x44) >> 8 == param_2)))) ||
     ((((0xff < *(ushort *)(param_1 + 0x46) && (*(ushort *)(param_1 + 0x46) >> 8 == param_2)) ||
       ((0xff < *(ushort *)(param_1 + 0x48) && (*(ushort *)(param_1 + 0x48) >> 8 == param_2)))) ||
      ((0xff < *(ushort *)(param_1 + 0x4a) && (*(ushort *)(param_1 + 0x4a) >> 8 == param_2)))))) {
    return 0;
  }
  uVar1 = 0;
  if (*(ushort *)(param_1 + 0x4c) >> 8 != param_2 || *(ushort *)(param_1 + 0x4c) < 0x100) {
    uVar1 = 0xffffffc3;
  }
  return uVar1;
}



/* ---- fts_wait_tp_to_valid @ 001119c4 ---- */

void fts_wait_tp_to_valid(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 *in_x18;
  int iVar7;
  undefined8 unaff_x30;
  byte local_50 [4];
  undefined1 local_4c [4];
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar3 = fts_data;
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x5e0);
  iVar7 = 0x14;
  local_50[0] = 0;
  bVar1 = *(byte *)(fts_data + 0x34);
  do {
    local_4c[0] = 0xa3;
    uVar4 = fts_read(local_4c,1,local_50,1);
    if ((ushort)local_50[0] == (ushort)bVar1) {
LAB_00111b28:
      uVar5 = 0;
      goto LAB_00111b2c;
    }
    if (*(short *)(lVar3 + 0x3c) != 0) {
      if ((*(ushort *)(lVar3 + 0x3e) < 0x100) ||
         (*(ushort *)(lVar3 + 0x3e) >> 8 != (ushort)local_50[0])) {
        uVar6 = (ushort)local_50[0];
        if (((((*(ushort *)(lVar3 + 0x40) < 0x100) || (*(ushort *)(lVar3 + 0x40) >> 8 != uVar6)) &&
             ((*(ushort *)(lVar3 + 0x42) < 0x100 || (*(ushort *)(lVar3 + 0x42) >> 8 != uVar6)))) &&
            ((*(ushort *)(lVar3 + 0x44) < 0x100 || (*(ushort *)(lVar3 + 0x44) >> 8 != uVar6)))) &&
           ((*(ushort *)(lVar3 + 0x46) < 0x100 || (*(ushort *)(lVar3 + 0x46) >> 8 != uVar6)))) {
          if (((*(ushort *)(lVar3 + 0x48) < 0x100) ||
              (*(ushort *)(lVar3 + 0x48) >> 8 != (ushort)local_50[0])) &&
             ((*(ushort *)(lVar3 + 0x4a) < 0x100 ||
              (*(ushort *)(lVar3 + 0x4a) >> 8 != (ushort)local_50[0])))) {
            if ((*(ushort *)(lVar3 + 0x4c) < 0x100) || (*(ushort *)(lVar3 + 0x4c) >> 8 != uVar6))
            goto LAB_00111a1c;
          }
        }
      }
      goto LAB_00111b28;
    }
LAB_00111a1c:
    _printk("<3>[FTS_TS/E]%s:TP Not Ready,ReadData:0x%02x,ret:%d\n","fts_wait_tp_to_valid",local_50[0],uVar4);
    msleep(0x32);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar5 = 0xfffffffb;
LAB_00111b2c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ---- fts_tp_state_recovery @ 00111b6c ---- */

void fts_tp_state_recovery(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  fts_wait_tp_to_valid();
  fts_ex_mode_recovery(param_1);
  fts_gesture_recovery(param_1);
  if (1 < *(int *)(param_1 + 0x4d8) + 1U) {
    if (*(char *)(param_1 + 0x321) != '\0') {
      fts_gesture_reg_write(1,1);
    }
    fts_fod_reg_write(2,1);
  }
  return;
}



/* ---- fts_reset_proc @ 00111bdc ---- */

undefined8 fts_reset_proc(int param_1)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = gpio_to_desc(*(undefined4 *)(*(long *)(fts_data + 0x28) + 0x10));
  gpiod_direction_output_raw(uVar1,0);
  msleep(1);
  uVar1 = gpio_to_desc(*(undefined4 *)(*(long *)(fts_data + 0x28) + 0x10));
  gpiod_direction_output_raw(uVar1,1);
  if (param_1 != 0) {
    msleep(param_1);
  }
  return 0;
}



/* ---- fts_recover_after_reset @ 00111c54 ---- */

undefined8 fts_recover_after_reset(void)

{
  long lVar1;
  undefined8 *in_x18;
  int iVar2;
  undefined8 unaff_x30;
  char local_30 [4];
  undefined1 local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  iVar2 = 0x14;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30[0] = '\0';
  do {
    local_2c[0] = 0xa3;
    fts_read(local_2c,1,local_30,1);
    if (local_30[0] == 'T') goto LAB_00111ccc;
    msleep(10);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _printk("<3>[FTS_TS/E]%s:wait tp fw valid timeout\n","fts_recover_after_reset");
LAB_00111ccc:
  if (1 < *(int *)(fts_data + 0x4d8) + 1U) {
    _printk("<6>[FTS_TS/I]%s:fod_status = %d\n\n","fts_recover_after_reset");
    fts_fod_recovery();
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- fts_irq_disable @ 00111d34 ---- */

void fts_irq_disable(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = _raw_spin_lock_irqsave(fts_data + 0x280);
  lVar2 = fts_data;
  if (*(char *)(fts_data + 0x323) == '\0') {
    disable_irq_nosync(*(undefined4 *)(fts_data + 0x2f0));
    lVar2 = fts_data;
    *(undefined1 *)(fts_data + 0x323) = 1;
  }
  _raw_spin_unlock_irqrestore(lVar2 + 0x280,uVar1);
  return;
}



/* ---- fts_irq_enable @ 00111d9c ---- */

void fts_irq_enable(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = irq_to_desc(*(undefined4 *)(fts_data + 0x2f0));
  uVar2 = _raw_spin_lock_irqsave(fts_data + 0x280);
  if ((*(int *)(lVar1 + 0x88) == 1) || (lVar1 = fts_data, *(char *)(fts_data + 0x323) != '\0')) {
    enable_irq(*(undefined4 *)(fts_data + 0x2f0));
    lVar1 = fts_data;
    *(undefined1 *)(fts_data + 0x323) = 0;
  }
  _raw_spin_unlock_irqrestore(lVar1 + 0x280,uVar2);
  return;
}



/* ---- fts_hid2std @ 00111e24 ---- */

void fts_hid2std(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined2 local_1c;
  undefined1 local_1a;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c = 0xaaeb;
  local_1a = 9;
  if (*(int *)(fts_data + 0x4a0) == 1) {
    iVar2 = fts_write(&local_1c,3);
    if (iVar2 < 0) {
      puVar3 = "<3>[FTS_TS/E]%s:hid2std cmd write fail\n";
    }
    else {
      msleep(10);
      local_1a = 0;
      local_1c = 0;
      iVar2 = fts_read(0,0,&local_1c,3);
      if (-1 < iVar2) goto LAB_00111ea0;
      puVar3 = "<3>[FTS_TS/E]%s:hid2std cmd read fail\n";
    }
    _printk(puVar3,"fts_hid2std");
  }
LAB_00111ea0:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- fts_release_all_finger @ 00111ef0 ---- */

void fts_release_all_finger(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  int iVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = fts_data;
  lVar1 = fts_data + 0x288;
  uVar4 = *(undefined8 *)(fts_data + 0x18);
  iVar2 = *(int *)(*(long *)(fts_data + 0x28) + 0x60);
  *(undefined1 *)(fts_data + 0x4e1) = 0;
  *(undefined4 *)(lVar3 + 0x4e4) = 0;
  mutex_lock(lVar1);
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      input_event(uVar4,3,0x2f,iVar5);
      input_mt_report_slot_state(uVar4,0,0);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  input_event(uVar4,1,0x152,0);
  input_event(uVar4,1,0x14a,0);
  input_event(uVar4,0,0,0);
  *(undefined8 *)(lVar3 + 0x474) = 0;
  mutex_unlock(lVar1);
  return;
}



/* ---- fts_ts_probe.1d9115c5b63d3299251e53d84922b4f4 @ 00111fd4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fts_ts_probe_1d9115c5b63d3299251e53d84922b4f4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  undefined2 uVar18;
  long lVar19;
  undefined8 *in_x18;
  long lVar20;
  code *pcVar21;
  undefined4 *puVar22;
  undefined8 unaff_x30;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar20 = sp_el0;
  local_68 = *(long *)(lVar20 + 0x5e0);
  _printk("<6>[FTS_TS/I]%s:Touch Screen(I2C BUS) driver prboe...\n","fts_ts_probe");
  lVar20 = *(long *)(param_1 + 0x18);
  pcVar21 = *(code **)(*(long *)(lVar20 + 0x10) + 0x20);
  __cfi_slowpath_diag(0x6871e466cec98751,pcVar21,&DAT_00104b50);
  uVar9 = (*pcVar21)(lVar20);
  if ((uVar9 & 1) == 0) {
    _printk("<3>[FTS_TS/E]%s:I2C not supported\n","fts_ts_probe");
    iVar6 = -0x13;
    goto LAB_001128ec;
  }
  plVar10 = (long *)kmem_cache_alloc_trace(_init_lct_tp_grip_area,0xdc0,0x590);
  if (plVar10 == (long *)0x0) {
    _printk("<3>[FTS_TS/E]%s:allocate memory for fts_data fail\n","fts_ts_probe");
    iVar6 = -0xc;
    goto LAB_001128ec;
  }
  *plVar10 = param_1;
  fts_data = plVar10;
  plVar10[2] = param_1 + 0x20;
  *(undefined4 *)(plVar10 + 0x94) = 1;
  *(undefined1 *)(plVar10 + 0x66) = 0;
  *(long **)(param_1 + 0xb8) = plVar10;
  *(undefined8 *)((long)plVar10 + 0x2f4) = 1;
  _printk("<6>[FTS_TS/I]%s:%s\n","fts_ts_probe_entry","Focaltech V3.4 20211214");
  puVar11 = (undefined8 *)kmem_cache_alloc_trace(_set_lct_tp_work_status,0xdc0,100);
  plVar10[5] = (long)puVar11;
  if (puVar11 == (undefined8 *)0x0) {
    iVar6 = -0xc;
    puVar12 = "<3>[FTS_TS/E]%s:allocate memory for platform_data fail\n";
LAB_0011211c:
    _printk(puVar12,"fts_ts_probe_entry");
LAB_001128d0:
    _printk("<3>[FTS_TS/E]%s:Touch Screen(I2C BUS) driver probe fail\n","fts_ts_probe");
    kfree(plVar10);
  }
  else {
    lVar20 = *(long *)(plVar10[2] + 0x2f0);
    if (lVar20 == 0) {
      puVar15 = *(undefined8 **)(plVar10[2] + 0x90);
      if (puVar15 == (undefined8 *)0x0) {
        iVar6 = -0x13;
        puVar12 = "<3>[FTS_TS/E]%s:platform_data is null\n";
        goto LAB_0011211c;
      }
      *puVar11 = *puVar15;
      uVar2 = puVar15[4];
      uVar13 = puVar15[1];
      uVar16 = puVar15[2];
      puVar11[3] = puVar15[3];
      puVar11[4] = uVar2;
      puVar11[1] = uVar13;
      puVar11[2] = uVar16;
      uVar2 = puVar15[8];
      uVar13 = puVar15[5];
      uVar16 = puVar15[6];
      puVar11[7] = puVar15[7];
      puVar11[8] = uVar2;
      puVar11[5] = uVar13;
      puVar11[6] = uVar16;
      uVar13 = puVar15[10];
      uVar2 = puVar15[0xb];
      uVar16 = puVar15[9];
      *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(puVar15 + 0xc);
      puVar11[10] = uVar13;
      puVar11[0xb] = uVar2;
      puVar11[9] = uVar16;
    }
    else {
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      lVar19 = of_find_property(lVar20,"focaltech,display-coords",0);
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) {
LAB_00112238:
        _printk("<3>[FTS_TS/E]%s:Unable to get display-coords\n","fts_parse_dt");
      }
      else {
        if (*(int *)(lVar19 + 8) >> 2 != 4) {
          _printk("<3>[FTS_TS/E]%s:invalid:%s, size:%d\n","fts_get_dt_coords","focaltech,display-coords");
          goto LAB_00112238;
        }
        iVar6 = of_property_read_variable_u32_array(lVar20,"focaltech,display-coords",&local_78,4,0)
        ;
        if (iVar6 < 0) {
          _printk("<3>[FTS_TS/E]%s:Unable to read %s, please check dts\n","fts_get_dt_coords","focaltech,display-coords");
          puVar11[10] = 0x96000000438;
          puVar11[0xb] = 0;
          goto LAB_00112238;
        }
        *(undefined4 *)(puVar11 + 0xb) = (undefined4)local_78;
        *(undefined4 *)((long)puVar11 + 0x5c) = local_78._4_4_;
        *(undefined4 *)(puVar11 + 10) = (undefined4)local_70;
        *(undefined4 *)((long)puVar11 + 0x54) = local_70._4_4_;
        _printk("<6>[FTS_TS/I]%s:display x(%d %d) y(%d %d)\n","fts_get_dt_coords");
      }
      lVar19 = of_find_property(lVar20,"focaltech,have-key",0);
      *(bool *)(puVar11 + 3) = lVar19 != 0;
      if (lVar19 != 0) {
        puVar17 = (uint *)((long)puVar11 + 0x1c);
        iVar6 = of_property_read_variable_u32_array(lVar20,"focaltech,key-number",puVar17,1,0);
        if (iVar6 < 0) {
          _printk("<3>[FTS_TS/E]%s:Key number undefined!\n","fts_parse_dt");
        }
        iVar6 = of_property_read_variable_u32_array
                          (lVar20,"focaltech,keys",puVar11 + 4,*(undefined4 *)((long)puVar11 + 0x1c)
                           ,0);
        if (iVar6 < 0) {
          _printk("<3>[FTS_TS/E]%s:Keys undefined!\n","fts_parse_dt");
          uVar14 = *puVar17;
        }
        else {
          uVar14 = *puVar17;
          if (4 < uVar14) {
            uVar14 = 4;
            *puVar17 = 4;
          }
        }
        iVar6 = of_property_read_variable_u32_array
                          (lVar20,"focaltech,key-x-coords",puVar11 + 8,uVar14,0);
        if (iVar6 < 0) {
          _printk("<3>[FTS_TS/E]%s:Key Y Coords undefined!\n","fts_parse_dt");
        }
        iVar6 = of_property_read_variable_u32_array
                          (lVar20,"focaltech,key-y-coords",puVar11 + 6,
                           *(undefined4 *)((long)puVar11 + 0x1c),0);
        if (iVar6 < 0) {
          _printk("<3>[FTS_TS/E]%s:Key X Coords undefined!\n","fts_parse_dt");
        }
        _printk("<6>[FTS_TS/I]%s:VK Number:%d, key:(%d,%d,%d), coords:(%d,%d),(%d,%d),(%d,%d)\n","fts_parse_dt",*(undefined4 *)((long)puVar11 + 0x1c),
                *(undefined4 *)(puVar11 + 4),*(undefined4 *)((long)puVar11 + 0x24),
                *(undefined4 *)(puVar11 + 5),*(undefined4 *)(puVar11 + 8),
                *(undefined4 *)(puVar11 + 6),*(undefined4 *)((long)puVar11 + 0x44),
                *(undefined4 *)((long)puVar11 + 0x34),*(undefined4 *)(puVar11 + 9),
                *(undefined4 *)(puVar11 + 7));
      }
      uVar8 = of_get_named_gpio_flags
                        (lVar20,"focaltech,reset-gpio",0,(undefined4 *)((long)puVar11 + 0x14));
      *(undefined4 *)(puVar11 + 2) = uVar8;
      uVar8 = of_get_named_gpio_flags
                        (lVar20,"focaltech,irq-gpio",0,(undefined4 *)((long)puVar11 + 0xc));
      *(undefined4 *)(puVar11 + 1) = uVar8;
      uVar8 = of_get_named_gpio_flags
                        (lVar20,"focaltech,avdd-gpio",0,(undefined4 *)((long)puVar11 + 4));
      *(undefined4 *)puVar11 = uVar8;
      iVar6 = of_property_read_variable_u32_array(lVar20,"focaltech,max-touch-number",&local_80,1,0)
      ;
      if (iVar6 < 0) {
        _printk("<3>[FTS_TS/E]%s:Unable to get max-touch-number, please check dts\n","fts_parse_dt");
LAB_00112424:
        uVar14 = 10;
      }
      else if (local_80 < 2) {
        uVar14 = 2;
      }
      else {
        uVar14 = local_80;
        if (10 < local_80) goto LAB_00112424;
      }
      *(uint *)(puVar11 + 0xc) = uVar14;
      _printk("<6>[FTS_TS/I]%s:max touch number:%d, irq gpio:%d, reset gpio:%d\n","fts_parse_dt",uVar14,*(undefined4 *)(puVar11 + 1),
              *(undefined4 *)(puVar11 + 2));
      uVar13 = *(undefined8 *)(plVar10[2] + 0x2f0);
      iVar6 = of_count_phandle_with_args(uVar13,"panel",0);
      if (iVar6 < 1) {
        _printk("<3>[FTS_TS/E]%s:find drm_panel count(%d) fail\n","drm_check_dt",iVar6);
      }
      else {
        iVar7 = 0;
        do {
          of_parse_phandle(uVar13,"panel",iVar7);
          uVar9 = of_drm_find_panel();
          if (uVar9 < 0xfffffffffffff001) {
            _printk("<6>[FTS_TS/I]%s:find drm_panel successfully\n","drm_check_dt");
            fts_ts_probe_entry___key_33 = uVar9;
            goto LAB_00112530;
          }
          iVar7 = iVar7 + 1;
        } while (iVar6 != iVar7);
        _printk("<3>[FTS_TS/E]%s:no find drm_panel\n","drm_check_dt");
        if ((int)uVar9 != 0) {
          _printk("<3>[FTS_TS/E]%s:parse drm-panel fail\n","fts_ts_probe_entry");
        }
      }
    }
LAB_00112530:
    lVar20 = alloc_workqueue(&DAT_00106b2d,0xe000a,1,"fts_wq");
    plVar10[10] = lVar20;
    if (lVar20 == 0) {
      _printk("<3>[FTS_TS/E]%s:create fts workqueue fail\n","fts_ts_probe_entry");
    }
    *(undefined4 *)(plVar10 + 0x50) = 0;
    __mutex_init(plVar10 + 0x51,"&ts_data->report_mutex",&fts_ts_probe_entry___key_33);
    __mutex_init(plVar10 + 0x57,"&ts_data->bus_lock",&fts_ts_probe_entry___key_33);
    __init_waitqueue_head(plVar10 + 0x45,"&ts_data->ts_waitqueue",&fts_ts_probe_entry___key_33);
    __mutex_init(plVar10 + 0x9d,"&ts_data->fod_mutex",&fts_ts_probe_entry___key_33);
    *(undefined1 *)((long)plVar10 + 0x519) = 0;
    plVar10[0x9b] = 0x1ffffffff;
    iVar6 = fts_bus_init(plVar10);
    if (iVar6 == 0) {
      lVar20 = plVar10[5];
      puVar11 = (undefined8 *)input_allocate_device();
      if (puVar11 == (undefined8 *)0x0) {
        _printk("<3>[FTS_TS/E]%s:Failed to allocate memory for input device\n","fts_input_init");
        iVar6 = -0xc;
LAB_00112848:
        _printk("<3>[FTS_TS/E]%s:input initialize fail\n","fts_ts_probe_entry");
        if (plVar10[10] != 0) {
LAB_00112864:
          destroy_workqueue();
        }
        goto LAB_00112868;
      }
      *puVar11 = "fts_ts";
      uVar18 = 0x18;
      if ((int)plVar10[0x94] != 1) {
        uVar18 = 0x1c;
      }
      *(undefined2 *)(puVar11 + 3) = uVar18;
      lVar19 = plVar10[2];
      puVar11[0x5b] = plVar10;
      puVar11[0xb] = puVar11[0xb] | 0x400;
      puVar11[0x54] = lVar19;
      puVar11[4] = puVar11[4] | 2;
      puVar11[5] = puVar11[5] | 0xb;
      if ((((*(char *)(lVar20 + 0x18) != '\0') &&
           (_printk("<6>[FTS_TS/I]%s:set key capabilities\n","fts_input_init"), *(int *)(lVar20 + 0x1c) != 0)) &&
          (input_set_capability(puVar11,1,*(undefined4 *)(lVar20 + 0x20)),
          1 < *(uint *)(lVar20 + 0x1c))) &&
         (((input_set_capability(puVar11,1,*(undefined4 *)(lVar20 + 0x24)),
           2 < *(uint *)(lVar20 + 0x1c) &&
           (input_set_capability(puVar11,1,*(undefined4 *)(lVar20 + 0x28)),
           3 < *(uint *)(lVar20 + 0x1c))) &&
          (input_set_capability(puVar11,1,*(undefined4 *)(lVar20 + 0x2c)),
          4 < *(uint *)(lVar20 + 0x1c))))) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(0x5512,0x1134a8);
        (*pcVar21)();
      }
      input_mt_init_slots(puVar11,*(undefined4 *)(lVar20 + 0x60),2);
      input_set_abs_params
                (puVar11,0x35,*(undefined4 *)(lVar20 + 0x58),*(undefined4 *)(lVar20 + 0x50),0,0);
      input_set_abs_params
                (puVar11,0x36,*(undefined4 *)(lVar20 + 0x5c),*(undefined4 *)(lVar20 + 0x54),0,0);
      input_set_abs_params(puVar11,0x30,0,0xff,0,0);
      input_set_capability(puVar11,1,0x152);
      input_set_abs_params
                (puVar11,0x32,*(undefined4 *)(lVar20 + 0x58),*(int *)(lVar20 + 0x50) + -1,0,0);
      input_set_abs_params
                (puVar11,0x33,*(undefined4 *)(lVar20 + 0x58),*(int *)(lVar20 + 0x50) + -1,0,0);
      iVar6 = input_register_device(puVar11);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:Input device registration failed\n","fts_input_init");
        puVar11[0x5b] = 0;
        input_free_device(puVar11);
        goto LAB_00112848;
      }
      plVar10[3] = (long)puVar11;
      lVar20 = kmem_cache_alloc_trace(_init_lct_tp_gesture,0xdc0,0x1000);
      plVar10[0x8d] = lVar20;
      if (lVar20 == 0) {
        _printk("<3>[FTS_TS/E]%s:failed to alloc memory for touch buf\n","fts_buffer_init");
        _printk("<3>[FTS_TS/E]%s:buffer init fail\n","fts_ts_probe_entry");
        iVar6 = -0xc;
LAB_00112e0c:
        input_unregister_device(plVar10[3]);
        if (plVar10[10] == 0) goto LAB_00112868;
        goto LAB_00112864;
      }
      puVar17 = (uint *)plVar10[5];
      *(undefined1 *)(plVar10 + 0x65) = 0;
      *(undefined4 *)(plVar10 + 0x8b) = 0x3e;
      *(undefined8 *)((long)plVar10 + 0x47c) = 0;
      if (puVar17[2] < 0x200) {
        iVar6 = gpio_request(puVar17[2],"fts_irq_gpio");
        if (iVar6 != 0) {
          puVar12 = "<3>[FTS_TS/E]%s:[GPIO]irq gpio request failed\n";
          goto LAB_00112db8;
        }
        gpio_to_desc(*(undefined4 *)(plVar10[5] + 8));
        iVar6 = gpiod_direction_input();
        if (iVar6 == 0) {
          puVar17 = (uint *)plVar10[5];
          goto LAB_00112978;
        }
        _printk("<3>[FTS_TS/E]%s:[GPIO]set_direction for irq gpio failed\n","fts_gpio_configure");
LAB_00112e4c:
        if (*(uint *)(plVar10[5] + 8) < 0x200) {
          gpio_free();
        }
LAB_00112dc4:
        xiaomi_touch_mievent_report_int(0x365c07eb,0,"TpParamParseFail","focal",1);
        _printk("<3>[FTS_TS/E]%s:configure the gpios fail\n","fts_ts_probe_entry");
LAB_00112dfc:
        if (plVar10[0x8d] != 0) {
          kfree();
          plVar10[0x8d] = 0;
        }
        goto LAB_00112e0c;
      }
LAB_00112978:
      if (puVar17[4] < 0x200) {
        iVar6 = gpio_request(puVar17[4],"fts_reset_gpio");
        if (iVar6 != 0) {
          puVar12 = "<3>[FTS_TS/E]%s:[GPIO]reset gpio request failed\n";
          goto LAB_00112db8;
        }
        uVar13 = gpio_to_desc(*(undefined4 *)(plVar10[5] + 0x10));
        iVar6 = gpiod_direction_output_raw(uVar13,0);
        if (iVar6 != 0) {
          _printk("<3>[FTS_TS/E]%s:[GPIO]set_direction for reset gpio failed\n","fts_gpio_configure");
          if (*(uint *)(plVar10[5] + 0x10) < 0x200) {
            gpio_free();
          }
          goto LAB_00112e4c;
        }
        puVar17 = (uint *)plVar10[5];
      }
      if ((*puVar17 < 0x200) && (iVar6 = gpio_request(*puVar17,"fts_avdd_gpio"), iVar6 != 0)) {
        puVar12 = "<3>[FTS_TS/E]%s:[GPIO]vdd gpio avdd failed\n";
LAB_00112db8:
        _printk(puVar12,"fts_gpio_configure");
        goto LAB_00112dc4;
      }
      uVar9 = regulator_get(plVar10[2],"vcc_i2c");
      plVar10[0x96] = uVar9;
      if ((((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) &&
          (iVar6 = regulator_count_voltages(), 0 < iVar6)) &&
         (iVar6 = regulator_set_voltage(plVar10[0x96],1800000,1800000), iVar6 != 0)) {
        _printk("<3>[FTS_TS/E]%s:vcc_i2c regulator set_vtg failed,ret=%d\n","fts_power_source_init",iVar6);
        regulator_put(plVar10[0x96]);
      }
      uVar9 = devm_pinctrl_get(plVar10[2]);
      plVar1 = plVar10 + 0x97;
      plVar10[0x97] = uVar9;
      if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
        _printk("<3>[FTS_TS/E]%s:Failed to get pinctrl, please check dts\n","fts_pinctrl_init");
LAB_00112b70:
        plVar10[0x99] = 0;
        plVar10[0x9a] = 0;
        *plVar1 = 0;
        plVar10[0x98] = 0;
      }
      else {
        uVar9 = pinctrl_lookup_state(uVar9,"pmx_ts_active");
        puVar12 = "<3>[FTS_TS/E]%s:Pin state[active] not found\n";
        plVar10[0x98] = uVar9;
        if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
LAB_00112b58:
          _printk(puVar12,"fts_pinctrl_init");
          if (*plVar1 != 0) {
            devm_pinctrl_put();
          }
          goto LAB_00112b70;
        }
        uVar9 = pinctrl_lookup_state(plVar10[0x97],"pmx_ts_suspend");
        puVar12 = "<3>[FTS_TS/E]%s:Pin state[suspend] not found\n";
        plVar10[0x99] = uVar9;
        if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) goto LAB_00112b58;
        uVar9 = pinctrl_lookup_state(plVar10[0x97],"pmx_ts_release");
        plVar10[0x9a] = uVar9;
        if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
          _printk("<3>[FTS_TS/E]%s:Pin state[release] not found\n","fts_pinctrl_init");
        }
      }
      if (((*plVar1 != 0) && (plVar10[0x98] != 0)) && (iVar6 = pinctrl_select_state(), iVar6 < 0)) {
        _printk("<3>[FTS_TS/E]%s:Set normal pin state error:%d\n","fts_pinctrl_select_normal",iVar6);
      }
      *(undefined1 *)((long)plVar10 + 0x324) = 1;
      iVar6 = fts_power_source_ctrl(plVar10,1);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:fail to enable power(regulator)\n","fts_power_source_init");
        xiaomi_touch_mievent_report_int(0x365c07eb,0,"TpParamParseFail","focal",0);
        puVar12 = "<3>[FTS_TS/E]%s:fail to get power(regulator)\n";
LAB_0011326c:
        _printk(puVar12,"fts_ts_probe_entry");
LAB_00113278:
        fts_power_source_exit(plVar10);
        puVar17 = (uint *)plVar10[5];
        if (puVar17[4] < 0x200) {
          gpio_free();
          puVar17 = (uint *)plVar10[5];
        }
        if (puVar17[2] < 0x200) {
          gpio_free();
          puVar17 = (uint *)plVar10[5];
        }
        if (*puVar17 < 0x200) {
          gpio_free();
        }
        goto LAB_00112dfc;
      }
      uVar13 = gpio_to_desc(*(undefined4 *)(fts_data[5] + 0x10));
      iVar6 = gpiod_direction_output_raw(uVar13,1);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:set gpio reset to high failed\n","fts_ts_probe_entry");
      }
      msleep(100);
      if (0 < (int)fts_data[0x9b]) {
        _printk("<6>[FTS_TS/I]%s:fod_status = %d\n\n","fts_ts_probe_entry");
        fts_fod_recovery();
      }
      iVar6 = 0;
      local_7c = 0;
      *(undefined2 *)(plVar10 + 6) = 0x100;
      do {
        local_78._0_1_ = 0xa3;
        fts_read(&local_78,1,&local_7c,1);
        local_78 = CONCAT71(local_78._1_7_,0x9f);
        iVar7 = fts_read(&local_78,1,(ulong)&local_7c | 1,1);
        if (((-1 < iVar7) && (cVar3 = (char)local_7c, (char)local_7c != '\0')) &&
           (cVar4 = local_7c._1_1_, local_7c._1_1_ != '\0')) {
          _printk("<6>[FTS_TS/I]%s:verify id:0x%02x%02x\n","fts_get_chip_types",(char)local_7c,local_7c._1_1_);
          if ((cVar3 == 'T') && (cVar4 == 'R')) {
            *(undefined8 *)((long)plVar10 + 0x32) = 0x525452540089;
            *(undefined2 *)((long)plVar10 + 0x3a) = 0x5e54;
            if (iVar6 < 1000) goto LAB_00112f84;
            break;
          }
          _printk("<3>[FTS_TS/E]%s:TP not ready, read:0x%02x%02x\n","fts_get_ic_information",(char)local_7c,local_7c._1_1_);
        }
        msleep(0x32);
        iVar6 = iVar6 + 0x32;
      } while (iVar6 != 1000);
      _printk("<6>[FTS_TS/I]%s:fw is invalid, need read boot id\n","fts_get_ic_information");
      if (*(char *)((long)plVar10 + 0x31) != '\0') {
        local_78 = CONCAT53(local_78._3_5_,0x90000);
        local_78 = CONCAT62(local_78._2_6_,0xaaeb);
        if ((int)fts_data[0x94] == 1) {
          iVar6 = fts_write(&local_78,3);
          if (iVar6 < 0) {
            puVar12 = "<3>[FTS_TS/E]%s:hid2std cmd write fail\n";
          }
          else {
            msleep(10);
            local_78 = local_78 & 0xffffffffff000000;
            iVar6 = fts_read(0,0,&local_78,3);
            if (-1 < iVar6) goto LAB_00112ea0;
            puVar12 = "<3>[FTS_TS/E]%s:hid2std cmd read fail\n";
          }
          _printk(puVar12,"fts_hid2std");
        }
      }
LAB_00112ea0:
      local_80 = local_80 & 0xffff0000;
      local_78 = CONCAT44(local_78._4_4_,0xaa55);
      iVar6 = fts_write(&local_78,2);
      if (iVar6 < 0) {
        _printk("<3>[FTS_TS/E]%s:start cmd write fail\n","fts_read_bootid");
LAB_00113218:
        puVar12 = "<3>[FTS_TS/E]%s:read boot id fail\n";
LAB_00113220:
        _printk(puVar12,"fts_get_ic_information");
        xiaomi_touch_mievent_report_int(0x365c07e9,0,"TpTransferErr","focal",(long)iVar6);
        puVar12 = "<3>[FTS_TS/E]%s:not focal IC, unregister driver\n";
        goto LAB_0011326c;
      }
      msleep(0xc);
      uVar8 = 4;
      if ((char)plVar10[6] != '\0') {
        uVar8 = 1;
      }
      local_78 = CONCAT44(local_78._4_4_,0x90);
      iVar6 = fts_read(&local_78,uVar8,&local_80,2);
      cVar3 = (char)local_80;
      cVar4 = local_80._1_1_;
      if (((iVar6 < 0) || ((local_80 & 0xff) == 0)) || (local_80._1_1_ == '\0')) {
        _printk("<3>[FTS_TS/E]%s:read boot id fail,read:0x%02x%02x\n","fts_read_bootid",(char)local_80,local_80._1_1_);
        iVar6 = -5;
        goto LAB_00113218;
      }
      local_7c = (undefined2)local_80;
      _printk("<6>[FTS_TS/I]%s:verify id:0x%02x%02x\n","fts_get_chip_types",local_80 & 0xff,local_80._1_1_);
      iVar6 = -0x3d;
      puVar12 = "<3>[FTS_TS/E]%s:can't get ic informaton\n";
      if ((cVar3 != 'T') || (cVar4 != 'R' && cVar4 != '^')) goto LAB_00113220;
      *(undefined8 *)((long)plVar10 + 0x32) = 0x525452540089;
      *(undefined2 *)((long)plVar10 + 0x3a) = 0x5e54;
LAB_00112f84:
      _printk("<6>[FTS_TS/I]%s:get ic information, chip id = 0x%02x%02x(cid type=0x%x)\n","fts_get_ic_information",0x54,0x52,*(undefined2 *)((long)plVar10 + 0x3c)
             );
      iVar6 = fts_create_apk_debug_channel(plVar10);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:create apk debug node fail\n","fts_ts_probe_entry");
      }
      iVar6 = lct_create_procfs(plVar10);
      if (iVar6 < 0) {
        _printk("<3>[FTS_TS/E]%s:create procfs node fail\n","fts_ts_probe_entry");
      }
      iVar6 = fts_create_sysfs(plVar10);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:create sysfs node fail\n","fts_ts_probe_entry");
      }
      iVar6 = fts_point_report_check_init(plVar10);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:init point report check fail\n","fts_ts_probe_entry");
      }
      iVar6 = fts_ex_mode_init(plVar10);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:init glove/cover/charger fail\n","fts_ts_probe_entry");
      }
      iVar6 = fts_gesture_init(plVar10);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:init gesture fail\n","fts_ts_probe_entry");
      }
      iVar6 = fts_test_init(plVar10);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:init host test fail\n","fts_ts_probe_entry");
      }
      iVar6 = fts_esdcheck_init(plVar10);
      if (iVar6 != 0) {
        _printk("<3>[FTS_TS/E]%s:init esd check fail\n","fts_ts_probe_entry");
      }
      lVar20 = plVar10[5];
      gpio_to_desc(*(undefined4 *)(lVar20 + 8));
      uVar8 = gpiod_to_irq();
      *(undefined4 *)(plVar10 + 0x5e) = uVar8;
      *(undefined4 *)(lVar20 + 0xc) = 0x2002;
      _printk("<6>[FTS_TS/I]%s:irq:%d, flag:%x\n","fts_irq_registration",(int)plVar10[0x5e],0x2002);
      iVar6 = request_threaded_irq
                        ((int)plVar10[0x5e],0,
                         fts_irq_handler_1d9115c5b63d3299251e53d84922b4f4_cfi_jt,
                         *(undefined4 *)(lVar20 + 0xc),"fts_ts",plVar10);
      if (iVar6 != 0) {
        puVar12 = "<3>[FTS_TS/E]%s:request irq failed\n";
        goto LAB_0011326c;
      }
      iVar6 = fts_fwupg_init(plVar10);
      if (iVar6 != 0) {
        xiaomi_touch_mievent_report_int(0x365c07ea,0,"TpFirmwareLoadFail","focal",(long)iVar6);
        _printk("<3>[FTS_TS/E]%s:init fw upgrade fail\n","fts_ts_probe_entry");
      }
      if (plVar10[10] != 0) {
        plVar10[0x33] = 0xfffffffe0;
        plVar10[0x34] = (long)(plVar10 + 0x34);
        plVar10[0x35] = (long)(plVar10 + 0x34);
        plVar10[0x3f] = 0xfffffffe0;
        plVar10[0x36] = (long)fts_resume_work_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
        plVar10[0x40] = (long)(plVar10 + 0x40);
        plVar10[0x41] = (long)(plVar10 + 0x40);
        plVar10[0x42] = (long)fts_sleep2gesture_work_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
      }
      *(undefined4 *)(plVar10 + 0x60) = 0;
      __init_swait_queue_head(plVar10 + 0x61,"&x->wait",&fts_data);
      *(undefined1 *)(plVar10 + 100) = 0;
      if (fts_ts_probe_entry___key_33 != 0) {
        lVar20 = panel_event_notifier_register
                           (1,0,fts_ts_probe_entry___key_33,
                            fts_ts_panel_notifier_callback_1d9115c5b63d3299251e53d84922b4f4_cfi_jt,
                            plVar10);
        if (lVar20 == 0) {
          _printk("<3>[FTS_TS/E]%s:Failed to register for panel events\n\n","fts_ts_register_for_panel_events");
        }
        else {
          _printk("<6>[FTS_TS/I]%s:registered for panel notifications panel: 0x%x\n\n","fts_ts_register_for_panel_events",fts_ts_probe_entry___key_33);
          plVar10[0xa8] = lVar20;
        }
      }
      _kmalloc_caches = fts_ts_usb_event_callback_cfi_jt;
      if (plVar10[0xb1] == 0) {
        lVar20 = get_xiaomi_touch_class();
        plVar10[0xb1] = lVar20;
        if (lVar20 == 0) goto LAB_001128b4;
        uVar9 = device_create(lVar20,0,0x38,plVar10,"tp_dev");
        plVar10[0xb0] = uVar9;
        if (uVar9 < 0xfffffffffffff001) {
          *(long **)(uVar9 + 0x98) = plVar10;
          iVar7 = sysfs_create_file_ns(plVar10[0xb0],&dev_attr_fod_test,0);
          if (iVar7 == 0) {
            memset(&xiaomi_touch_interfaces,0,0x5f0);
            DAT_00100380 = fts_get_mode_value_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
            DAT_00100370 = fts_set_cur_value_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
            DAT_001003a0 = fts_palm_sensor_write_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
            DAT_00100388 = fts_get_mode_all_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
            DAT_00100390 = fts_reset_mode_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
            DAT_001007b0 = fts_touch_dfs_test_1d9115c5b63d3299251e53d84922b4f4_cfi_jt;
            _printk("<6>[FTS_TS/I]%s:ENTER into\n","fts_init_touchmode_data");
            xiaomi_touch_interfaces = 0;
            DAT_001001c8 = 0;
            _DAT_001001d8 = 0;
            _DAT_001001e0 = 0;
            DAT_00100200 = 4;
            DAT_00100218 = 4;
            DAT_001001d0 = 1;
            DAT_001001e8 = 1;
            DAT_00100290 = 3;
            DAT_00100280 = 0;
            DAT_00100288 = 0;
            DAT_00100274 = 0x300000000;
            _DAT_001001f0 = 0;
            _DAT_001001f8 = 2;
            DAT_00100208 = 0;
            DAT_00100210 = 2;
            DAT_00100270 = 2;
            DAT_00100268 = 0x200000002;
            _printk("<6>[FTS_TS/I]%s:mode:%d, set cur:%d, get cur:%d, def:%d min:%d max:%d\n","fts_init_touchmode_data",0,0,0,0,0,1);
            lVar20 = -0x11;
            puVar22 = &DAT_001001e8;
            do {
              _printk("<6>[FTS_TS/I]%s:mode:%d, set cur:%d, get cur:%d, def:%d min:%d max:%d\n","fts_init_touchmode_data",(int)lVar20 + 0x12,puVar22[-4],
                      puVar22[-3],puVar22[-2],puVar22[-1],*puVar22);
              bVar5 = lVar20 != -1;
              lVar20 = lVar20 + 1;
              puVar22 = puVar22 + 6;
            } while (bVar5);
            xiaomitouch_register_modedata(&xiaomi_touch_interfaces);
            goto LAB_001128b4;
          }
          puVar12 = "<3>[FTS_TS/E]%s:Failed to create fod_test sysfs group!\n\n";
        }
        else {
          puVar12 = "<3>[FTS_TS/E]%s:Failed to create device !\n";
        }
        _printk(puVar12,"fts_ts_probe_entry");
        device_destroy(plVar10[0xb1],0x38);
        plVar10[0xb1] = 0;
        goto LAB_00113278;
      }
    }
    else {
      _printk("<3>[FTS_TS/E]%s:bus initialize fail\n","fts_ts_probe_entry");
LAB_00112868:
      if (plVar10[0x92] == 0) {
        if (plVar10[0x93] == 0) goto LAB_00112878;
LAB_00112898:
        kfree();
        plVar10[0x93] = 0;
        lVar20 = plVar10[5];
      }
      else {
        kfree();
        plVar10[0x92] = 0;
        if (plVar10[0x93] != 0) goto LAB_00112898;
LAB_00112878:
        lVar20 = plVar10[5];
      }
      if (lVar20 != 0) {
        kfree();
        plVar10[5] = 0;
      }
      if (iVar6 != 0) goto LAB_001128d0;
    }
LAB_001128b4:
    _printk("<6>[FTS_TS/I]%s:Touch Screen(I2C BUS) driver prboe successfully\n","fts_ts_probe");
    iVar6 = 0;
  }
LAB_001128ec:
  lVar20 = sp_el0;
  if (*(long *)(lVar20 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* ---- fts_ts_remove.1d9115c5b63d3299251e53d84922b4f4 @ 001134a8 ---- */

undefined8 fts_ts_remove_1d9115c5b63d3299251e53d84922b4f4(long param_1)

{
  uint *puVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0xb8);
  cancel_work_sync(fts_data + 0x198);
  fts_point_report_check_exit(lVar2);
  fts_release_apk_debug_channel(lVar2);
  lct_remove_procfs(lVar2);
  sysfs_remove_group(*(undefined8 *)(lVar2 + 0x10),&fts_attribute_group_llvm_614020873397002742);
  sysfs_remove_group(*(undefined8 *)(lVar2 + 0x10),&fts_touch_mode_group_llvm_1106586353771003229);
  fts_fwupg_exit(lVar2);
  fts_test_exit(lVar2);
  fts_esdcheck_exit(lVar2);
  sysfs_remove_group(*(undefined8 *)(lVar2 + 0x10),&fts_gesture_group_llvm_11375988175110845411);
  free_irq(*(undefined4 *)(lVar2 + 0x2f0),lVar2);
  fts_bus_exit(lVar2);
  input_unregister_device(*(undefined8 *)(lVar2 + 0x18));
  if (*(long *)(lVar2 + 0x50) != 0) {
    destroy_workqueue();
  }
  if ((fts_ts_probe_entry___key_33 != 0) && (*(long *)(lVar2 + 0x540) != 0)) {
    panel_event_notifier_unregister();
  }
  puVar1 = *(uint **)(lVar2 + 0x28);
  if (puVar1[4] < 0x200) {
    gpio_free();
    puVar1 = *(uint **)(lVar2 + 0x28);
  }
  if (puVar1[2] < 0x200) {
    gpio_free();
    puVar1 = *(uint **)(lVar2 + 0x28);
  }
  if (*puVar1 < 0x200) {
    gpio_free();
  }
  fts_power_source_exit(lVar2);
  device_destroy(*(undefined8 *)(lVar2 + 0x588),0x38);
  *(undefined8 *)(lVar2 + 0x588) = 0;
  if (*(long *)(lVar2 + 0x468) != 0) {
    kfree();
    *(undefined8 *)(lVar2 + 0x468) = 0;
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    kfree();
    *(undefined8 *)(lVar2 + 0x28) = 0;
  }
  if (lVar2 != 0) {
    kfree(lVar2);
  }
  return 0;
}



/* ---- fts_resume_work.1d9115c5b63d3299251e53d84922b4f4 @ 00113608 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fts_resume_work_1d9115c5b63d3299251e53d84922b4f4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar8 = fts_data;
  if (*(char *)(fts_data + 0x321) == '\0') {
    _printk("<6>[FTS_TS/I]%s:Already in awake state\n","fts_ts_resume");
  }
  else {
    puVar1 = (undefined1 *)(fts_data + 0x4e1);
    puVar2 = (undefined1 *)(fts_data + 0x4e2);
    puVar3 = (undefined1 *)(fts_data + 0x519);
    *(undefined1 *)(fts_data + 0x321) = 0;
    _printk("<6>[FTS_TS/I]%s:finger_in_fod:%d fod_finger_skip:%d  ts_data->fod_pressed:%d\n","fts_ts_resume",*puVar1,*puVar2,*puVar3);
    if (((*(char *)(lVar8 + 0x4e1) == '\0') && (*(char *)(lVar8 + 0x4e2) == '\0')) &&
       (*(char *)(lVar8 + 0x519) == '\0')) {
      _printk("<6>[FTS_TS/I]%s:resume reset\n","fts_ts_resume");
      uVar6 = gpio_to_desc(*(undefined4 *)(*(long *)(fts_data + 0x28) + 0x10));
      gpiod_direction_output_raw(uVar6,0);
      msleep(1);
      uVar6 = gpio_to_desc(*(undefined4 *)(*(long *)(fts_data + 0x28) + 0x10));
      gpiod_direction_output_raw(uVar6,1);
      msleep(0x32);
      fts_recover_after_reset();
      fts_release_all_finger();
      update_fod_press_status(0);
    }
    *(undefined1 *)(lVar8 + 0x519) = 0;
    if (*(char *)(lVar8 + 0x30) == '\0') {
      if (((*(long *)(lVar8 + 0x4b8) != 0) && (*(long *)(lVar8 + 0x4c0) != 0)) &&
         (iVar5 = pinctrl_select_state(), iVar5 < 0)) {
        _printk("<3>[FTS_TS/E]%s:Set normal pin state error:%d\n","fts_pinctrl_select_normal",iVar5);
      }
      iVar5 = fts_power_source_ctrl(lVar8,1);
      if (iVar5 < 0) {
        _printk("<3>[FTS_TS/E]%s:power on fail, ret=%d\n","fts_power_source_resume",iVar5);
      }
    }
    fts_wait_tp_to_valid();
    fts_ex_mode_recovery(lVar8);
    fts_esdcheck_resume(lVar8);
    if (*(int *)(lVar8 + 0x548) != 0) {
      iVar5 = fts_write_reg(0x9a,5);
      if (iVar5 < 0) {
        _printk("<3>[FTS_TS/E]%s:Set palm sensor switch failed!\n\n","fts_palm_sensor_cmd");
      }
      else {
        _printk("<6>[FTS_TS/I]%s:Set palm sensor switch: %d\n\n","fts_palm_sensor_cmd",1);
      }
      _printk("<6>[FTS_TS/I]%s:palm sensor OFF, switch to ON\n","fts_ts_resume");
    }
    _printk("<6>[FTS_TS/I]%s:gesture_support:%d  poweroff_on_sleep:%d\n","fts_ts_resume",*(undefined1 *)(lVar8 + 0x32d),
            *(undefined1 *)(lVar8 + 0x330));
    if ((*(char *)(lVar8 + 0x32d) != '\0') && (*(char *)(lVar8 + 0x330) == '\0')) {
      fts_gesture_resume(lVar8);
    }
    *(undefined1 *)(lVar8 + 0x330) = 0;
    uVar7 = get_lct_tp_work_status();
    if ((uVar7 & 1) == 0) {
      _printk("<3>[FTS_TS/E]%s:Touchscreen Disabled, Can't enable irq.\n","fts_ts_resume");
    }
    else {
      lVar8 = irq_to_desc(*(undefined4 *)(fts_data + 0x2f0));
      uVar6 = _raw_spin_lock_irqsave(fts_data + 0x280);
      if ((*(int *)(lVar8 + 0x88) == 1) || (lVar8 = fts_data, *(char *)(fts_data + 0x323) != '\0'))
      {
        enable_irq(*(undefined4 *)(fts_data + 0x2f0));
        lVar8 = fts_data;
        *(undefined1 *)(fts_data + 0x323) = 0;
      }
      _raw_spin_unlock_irqrestore(lVar8 + 0x280,uVar6);
    }
    _printk("<6>[FTS_TS/I]%s:make TP enter resume mode\n","fts_ts_resume");
    pcVar4 = _kmalloc_caches;
    if (g_touchscreen_usb_pulgin != '\0') {
      if (1 < ((ulong)(_kmalloc_caches + -0x1114f8) >> 3 | (long)_kmalloc_caches << 0x3d)) {
        __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,_kmalloc_caches,&DAT_00104b70);
      }
      (*pcVar4)();
    }
  }
  return;
}



/* ---- fts_sleep2gesture_work.1d9115c5b63d3299251e53d84922b4f4 @ 001138e8 ---- */

void fts_sleep2gesture_work_1d9115c5b63d3299251e53d84922b4f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = param_1 + -0x1f8;
  uVar1 = _raw_spin_lock_irqsave(fts_data + 0x280);
  lVar2 = fts_data;
  if (*(char *)(fts_data + 0x323) == '\0') {
    disable_irq_nosync(*(undefined4 *)(fts_data + 0x2f0));
    lVar2 = fts_data;
    *(undefined1 *)(fts_data + 0x323) = 1;
  }
  _raw_spin_unlock_irqrestore(lVar2 + 0x280,uVar1);
  uVar1 = gpio_to_desc(*(undefined4 *)(*(long *)(fts_data + 0x28) + 0x10));
  gpiod_direction_output_raw(uVar1,0);
  msleep(1);
  uVar1 = gpio_to_desc(*(undefined4 *)(*(long *)(fts_data + 0x28) + 0x10));
  gpiod_direction_output_raw(uVar1,1);
  msleep(0x32);
  fts_wait_tp_to_valid();
  fts_ex_mode_recovery(lVar3);
  fts_gesture_recovery(lVar3);
  if (1 < *(int *)(param_1 + 0x2e0) + 1U) {
    if (*(char *)(param_1 + 0x129) != '\0') {
      fts_gesture_reg_write(1,1);
    }
    fts_fod_reg_write(2,1);
  }
  lVar2 = irq_to_desc(*(undefined4 *)(fts_data + 0x2f0));
  uVar1 = _raw_spin_lock_irqsave(fts_data + 0x280);
  if ((*(int *)(lVar2 + 0x88) == 1) || (lVar2 = fts_data, *(char *)(fts_data + 0x323) != '\0')) {
    enable_irq(*(undefined4 *)(fts_data + 0x2f0));
    lVar2 = fts_data;
    *(undefined1 *)(fts_data + 0x323) = 0;
  }
  _raw_spin_unlock_irqrestore(lVar2 + 0x280,uVar1);
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x135) = 1;
    fts_gesture_suspend(lVar3);
  }
  return;
}



/* ---- fts_get_mode_value.1d9115c5b63d3299251e53d84922b4f4 @ 00113a4c ---- */

undefined4 fts_get_mode_value_1d9115c5b63d3299251e53d84922b4f4(uint param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1 < 0x12) {
    if (5 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x113ab0);
      (*pcVar1)();
    }
    uVar2 = *(undefined4 *)
             ((long)&xiaomi_touch_interfaces + (ulong)param_2 * 4 + (ulong)param_1 * 0x18);
  }
  else {
    _printk("<3>[FTS_TS/E]%s:don't support\n\n","fts_get_mode_value");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ---- fts_set_cur_value.1d9115c5b63d3299251e53d84922b4f4 @ 00113ab0 ---- */

undefined8 fts_set_cur_value_1d9115c5b63d3299251e53d84922b4f4(uint param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 *in_x18;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 unaff_x30;
  char local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x5e0);
  local_74[0] = '\0';
  if (0x11 < param_1) {
    _printk("<3>[FTS_TS/E]%s:fts mode not support:%d\n","fts_set_cur_value",param_1);
    goto LAB_00113f74;
  }
  uVar11 = (ulong)param_1;
  lVar1 = uVar11 + (ulong)param_1 * 2;
  piVar2 = (int *)(&xiaomi_touch_interfaces + lVar1);
  iVar7 = (&DAT_001001d0)[lVar1 * 2];
  if ((iVar7 < *piVar2) ||
     (iVar7 = *(int *)((long)&DAT_001001c8 + uVar11 * 0x18 + 4), *piVar2 < iVar7)) {
    *piVar2 = iVar7;
  }
  if ((param_1 == 0x10) && (-1 < param_2)) {
    _printk("<6>[FTS_TS/I]%s:Mode:FodIcon  fod_icon_status = %d\n","fts_set_cur_value",param_2);
    *(int *)(fts_data + 0x4dc) = param_2;
    goto LAB_00113f74;
  }
  if ((param_1 == 0x11) && (-1 < param_2)) {
    _printk("<6>[FTS_TS/I]%s:Mode:Nonui_Mode  nonui_status = %d\n","fts_set_cur_value",param_2);
    *(int *)(fts_data + 0x51c) = param_2;
    goto LAB_00113f74;
  }
  if ((param_1 == 10) && (-1 < param_2)) {
    _printk("<6>[FTS_TS/I]%s:Mode:FOD  fod_status = %d\n","fts_set_cur_value",param_2);
    lVar6 = fts_data;
    *(int *)(fts_data + 0x4d8) = param_2;
    if (param_2 == 0) {
      *(undefined1 *)(lVar6 + 0x4e0) = 0;
      if (*(char *)(lVar6 + 0x4e1) == '\0') {
        fts_fod_reg_write(2,0);
        iVar7 = *(int *)(fts_data + 0x4d8);
        lVar6 = fts_data;
        goto joined_r0x00113ca8;
      }
    }
    else {
      *(undefined1 *)(lVar6 + 0x4e0) = 1;
      iVar7 = param_2;
joined_r0x00113ca8:
      if (iVar7 == 2) {
        fts_fod_recovery();
        iVar7 = *(int *)(fts_data + 0x4d8);
        lVar6 = fts_data;
      }
      if (iVar7 == 1) {
        if (*(char *)(lVar6 + 0x321) != '\0') {
          flush_workqueue(*(undefined8 *)(lVar6 + 0x50));
          local_70[0] = 0xd0;
          fts_read(local_70,1,local_74,1);
          _printk("<6>[FTS_TS/I]%s:1.FTS_REG_GESTURE_EN = %d\n","fts_set_cur_value",local_74[0]);
          if (local_74[0] == '\0') {
            flush_workqueue(*(undefined8 *)(fts_data + 0x50));
            local_6c[0] = 0xd0;
            fts_read(local_6c,1,local_74,1);
            _printk("<6>[FTS_TS/I]%s:2.FTS_REG_GESTURE_EN = %d\n","fts_set_cur_value",local_74[0]);
            if (local_74[0] == '\0') {
              queue_work_on(0x20,*(undefined8 *)(fts_data + 0x50),fts_data + 0x1f8);
              goto LAB_00113f74;
            }
          }
        }
        fts_fod_recovery();
        goto LAB_00113f74;
      }
    }
    uVar10 = 0;
    uVar9 = 0;
    *piVar2 = param_2;
    uVar8 = 0;
  }
  else {
    *piVar2 = param_2;
    bVar5 = DAT_001002c8;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    switch(param_1) {
    case 1:
      uVar8 = (uint)(byte)DAT_001001d8;
      uVar10 = (uint)((byte)DAT_001001d8 == 1);
      fts_write_reg(0x93,uVar10);
      uVar9 = 0x90;
      break;
    case 2:
      uVar8 = (uint)(byte)DAT_001001f0;
      switch((byte)DAT_001001f0) {
      case 1:
      case 2:
      case 3:
      case 4:
        uVar9 = 0x81;
        uVar10 = uVar8;
LAB_00113d24:
        uVar8 = uVar10;
        break;
      default:
        uVar10 = 0;
        uVar9 = 0x81;
      }
      break;
    case 3:
      uVar8 = (uint)(byte)DAT_00100208;
      switch((byte)DAT_00100208) {
      case 1:
      case 2:
      case 3:
      case 4:
        uVar9 = 0x85;
        uVar10 = uVar8;
        goto LAB_00113d24;
      default:
        uVar10 = 0;
        uVar9 = 0x85;
      }
      break;
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
      break;
    case 7:
      uVar8 = (uint)(byte)DAT_00100268;
      uVar9 = 0x8d;
      uVar10 = 1;
      switch(uVar8) {
      case 0:
        break;
      case 1:
        uVar9 = 0x8d;
        uVar10 = 2;
        break;
      case 2:
        uVar9 = 0x8d;
        uVar10 = 3;
        break;
      case 3:
        uVar9 = 0x8d;
        uVar10 = 4;
        break;
      default:
        uVar10 = 0;
        uVar9 = 0x8d;
      }
      break;
    case 8:
      uVar8 = (uint)DAT_00100280 & 0xff;
      if (((uint)DAT_00100280 & 0xfd) != 0) {
        if (uVar8 == 1) {
          uVar9 = 0x8c;
          uVar10 = uVar8;
          goto LAB_00113d24;
        }
        if (uVar8 == 3) {
          uVar9 = 0x8c;
          uVar10 = 2;
          break;
        }
      }
      uVar10 = 0;
      uVar9 = 0x8c;
      break;
    case 0xb:
      uVar8 = (uint)DAT_001002c8;
      bVar4 = DAT_001002c8 != 1;
      if (bVar4) {
        *(undefined1 *)(fts_data + 0x32c) = 0;
      }
      else {
        bVar5 = 1;
        *(undefined1 *)(fts_data + 0x32c) = 1;
      }
      _printk("<6>[FTS_TS/I]%s:temp_value:%d,aod_changed:%d\n","fts_set_cur_value",bVar5,!bVar4);
      uVar10 = 0;
      uVar9 = 0;
      break;
    default:
      uVar10 = 0;
      uVar9 = 0;
    }
  }
  _printk("<6>[FTS_TS/I]%s:mode:%d, value:%d,temp_value:%d, game value:0x%x,0x%x\n","fts_set_cur_value",param_1,param_2,uVar8,uVar9,uVar10);
  iVar7 = (int)xiaomi_touch_interfaces;
  if (0x5f8 < (lVar1 * 8 | 4U)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x113ff0);
    (*pcVar3)();
  }
  *(int *)((long)&xiaomi_touch_interfaces + uVar11 * 0x18 + 4) = *piVar2;
  if (iVar7 != 0) {
    fts_write_reg(uVar9,uVar10);
    _printk("<6>[FTS_TS/I]%s:fts_game_value[0]:%d,fts_game_value[1]:%d\n","fts_set_cur_value",uVar9,uVar10);
  }
LAB_00113f74:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- fts_reset_mode.1d9115c5b63d3299251e53d84922b4f4 @ 00113ff0 ---- */

undefined8 fts_reset_mode_1d9115c5b63d3299251e53d84922b4f4(uint param_1)

{
  undefined8 *in_x18;
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>[FTS_TS/I]%s:fts_reset_game_mode enter\n","fts_reset_mode");
  if (param_1 - 1 < 0x11) {
    *(undefined4 *)(&xiaomi_touch_interfaces + (ulong)param_1 * 3) =
         *(undefined4 *)(&DAT_001001c8 + (ulong)param_1 * 3);
    fts_set_cur_value_1d9115c5b63d3299251e53d84922b4f4(param_1);
  }
  else if (param_1 == 0) {
    uVar1 = 0x12;
    puVar2 = (undefined4 *)0x100360;
    do {
      uVar1 = uVar1 - 1;
      if ((uint)uVar1 < 4 || (uint)uVar1 == 7) {
        puVar2[-2] = *puVar2;
        fts_set_cur_value_1d9115c5b63d3299251e53d84922b4f4(uVar1 & 0xffffffff);
      }
      puVar2 = puVar2 + -6;
    } while (uVar1 != 0);
  }
  else {
    _printk("<3>[FTS_TS/E]%s:don't support\n","fts_reset_mode");
  }
  _printk("<3>[FTS_TS/E]%s:mode:%d\n","fts_reset_mode",param_1);
  return 0;
}



/* ---- fts_get_mode_all.1d9115c5b63d3299251e53d84922b4f4 @ 001140d8 ---- */

undefined8 fts_get_mode_all_1d9115c5b63d3299251e53d84922b4f4(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1 < 0x12) {
    uVar6 = (ulong)param_1;
    if (0x5f8 < ((uVar6 + (ulong)param_1 * 2) * 8 | 4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x114198);
      (*pcVar5)();
    }
    uVar1 = *(undefined4 *)((long)&xiaomi_touch_interfaces + uVar6 * 0x18 + 4);
    *param_2 = uVar1;
    uVar2 = *(undefined4 *)(&DAT_001001c8 + uVar6 * 3);
    param_2[1] = uVar2;
    uVar3 = *(undefined4 *)((long)&DAT_001001c8 + uVar6 * 0x18 + 4);
    param_2[2] = uVar3;
    uVar4 = (&DAT_001001d0)[uVar6 * 6];
    param_2[3] = uVar4;
  }
  else {
    _printk("<3>[FTS_TS/E]%s:don't support\n\n","fts_get_mode_all");
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
  }
  _printk("<6>[FTS_TS/I]%s:mode:%d, value:%d:%d:%d:%d\n","fts_get_mode_all",param_1,uVar1,uVar2,uVar3,uVar4);
  return 0;
}



/* ---- fts_palm_sensor_write.1d9115c5b63d3299251e53d84922b4f4 @ 00114198 ---- */

int fts_palm_sensor_write_1d9115c5b63d3299251e53d84922b4f4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (fts_data == 0) {
    iVar1 = -0x16;
  }
  else {
    pcVar3 = (char *)(fts_data + 0x321);
    *(int *)(fts_data + 0x548) = param_1;
    if (*pcVar3 == '\0') {
      uVar4 = 0;
      if (param_1 != 0) {
        uVar4 = 5;
      }
      iVar1 = fts_write_reg(0x9a,uVar4);
      if (iVar1 < 0) {
        _printk("<3>[FTS_TS/E]%s:Set palm sensor switch failed!\n\n","fts_palm_sensor_cmd");
        puVar2 = "<3>[FTS_TS/E]%s:set palm sensor cmd failed: %d\n\n";
        pcVar3 = "fts_palm_sensor_write";
      }
      else {
        puVar2 = "<6>[FTS_TS/I]%s:Set palm sensor switch: %d\n\n";
        pcVar3 = "fts_palm_sensor_cmd";
      }
      _printk(puVar2,pcVar3,param_1);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ---- fts_touch_dfs_test.1d9115c5b63d3299251e53d84922b4f4 @ 0011424c ---- */

void fts_touch_dfs_test_1d9115c5b63d3299251e53d84922b4f4(int param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1 < 0x365c07eb) {
    if (param_1 == 0x365c07e9) {
      pcVar2 = "TpTransferErr";
      uVar1 = 0x365c07e9;
    }
    else {
      if (param_1 != 0x365c07ea) {
LAB_001143a8:
        _printk("<3>[FTS_TS/E]%s:don't support touch dfs test\n","fts_touch_dfs_test");
        return;
      }
      pcVar2 = "TpFirmwareLoadFail";
      uVar1 = 0x365c07ea;
    }
  }
  else {
    if (param_1 == 0x365c07eb) {
      xiaomi_touch_mievent_report_int(0x365c07eb,0,"TpParamParseFail","focal",2);
      xiaomi_touch_mievent_report_int(0x365c07eb,0,"TpParamParseFail","focal",0);
      uVar1 = 0x365c07eb;
      pcVar2 = "TpParamParseFail";
      uVar3 = 1;
      goto LAB_00114390;
    }
    if (param_1 == 0x365c0bd1) {
      pcVar2 = "TpOpenTestFail";
      uVar1 = 0x365c0bd1;
    }
    else {
      if (param_1 != 0x365c0bd2) goto LAB_001143a8;
      pcVar2 = "TpShortTestFail";
      uVar1 = 0x365c0bd2;
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_00114390:
  xiaomi_touch_mievent_report_int(uVar1,0,pcVar2,"focal",uVar3);
  return;
}



/* ---- fts_power_source_exit @ 001143c0 ---- */

void fts_power_source_exit(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(long *)(param_1 + 0x4b8) != 0) {
    if ((*(ulong *)(param_1 + 0x4d0) == 0) || (0xfffffffffffff000 < *(ulong *)(param_1 + 0x4d0))) {
      devm_pinctrl_put();
      *(undefined8 *)(param_1 + 0x4b8) = 0;
    }
    else {
      iVar1 = pinctrl_select_state();
      if (iVar1 < 0) {
        _printk("<3>[FTS_TS/E]%s:Set gesture pin state error:%d\n","fts_pinctrl_select_release",iVar1);
      }
    }
  }
  fts_power_source_ctrl(param_1,0);
  if ((*(ulong *)(param_1 + 0x4a8) != 0) && (*(ulong *)(param_1 + 0x4a8) < 0xfffffffffffff001)) {
    iVar1 = regulator_count_voltages();
    if (0 < iVar1) {
      regulator_set_voltage(*(undefined8 *)(param_1 + 0x4a8),0,3300000);
    }
    regulator_put(*(undefined8 *)(param_1 + 0x4a8));
  }
  if ((*(ulong *)(param_1 + 0x4b0) != 0) && (*(ulong *)(param_1 + 0x4b0) < 0xfffffffffffff001)) {
    iVar1 = regulator_count_voltages();
    if (0 < iVar1) {
      regulator_set_voltage(*(undefined8 *)(param_1 + 0x4b0),0,1800000);
    }
    regulator_put(*(undefined8 *)(param_1 + 0x4b0));
  }
  return;
}



/* ---- fts_power_source_ctrl @ 001144ac ---- */

int fts_power_source_ctrl(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined1 uVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x324) != '\0') {
      return 0;
    }
    uVar2 = gpio_to_desc(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x10));
    gpiod_direction_output_raw(uVar2,0);
    uVar3 = 1;
    msleep(1);
    uVar2 = gpio_to_desc(**(undefined4 **)(param_1 + 0x28));
    gpiod_direction_output_raw(uVar2,0);
    iVar1 = 0;
    if ((*(ulong *)(param_1 + 0x4b0) != 0) && (*(ulong *)(param_1 + 0x4b0) < 0xfffffffffffff001)) {
      iVar1 = regulator_disable();
      if (iVar1 != 0) {
        _printk("<3>[FTS_TS/E]%s:disable vcc_i2c regulator failed,ret=%d\n","fts_power_source_ctrl",iVar1);
      }
      uVar3 = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x324) == '\0') {
      return 0;
    }
    uVar2 = gpio_to_desc(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x10));
    gpiod_direction_output_raw(uVar2,0);
    msleep(1);
    uVar2 = gpio_to_desc(**(undefined4 **)(param_1 + 0x28));
    gpiod_direction_output_raw(uVar2,1);
    uVar3 = 0;
    iVar1 = 0;
    if ((*(ulong *)(param_1 + 0x4b0) != 0) && (*(ulong *)(param_1 + 0x4b0) < 0xfffffffffffff001)) {
      iVar1 = regulator_enable();
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        _printk("<3>[FTS_TS/E]%s:enable vcc_i2c regulator failed,ret=%d\n","fts_power_source_ctrl",iVar1);
        uVar3 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x324) = uVar3;
  return iVar1;
}



/* ---- fts_irq_handler.1d9115c5b63d3299251e53d84922b4f4 @ 001145f0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fts_irq_handler_1d9115c5b63d3299251e53d84922b4f4(void)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *in_x18;
  void *__s;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 unaff_x30;
  char local_7c [4];
  undefined8 local_78;
  char local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar4 = fts_data;
  lVar12 = sp_el0;
  local_68 = *(long *)(lVar12 + 0x5e0);
  if (((*(char *)(fts_data + 0x321) != '\0') && (*(char *)(fts_data + 800) != '\0')) &&
     (iVar7 = wait_for_completion_timeout(fts_data + 0x300,0xaf), iVar7 == 0)) {
    _printk("<3>[FTS_TS/E]%s:Bus don't resume from pm(deep),timeout,skip irq\n","fts_irq_handler");
    goto LAB_00114f00;
  }
  *(undefined8 *)(lVar4 + 0x2e8) = _jiffies;
  fts_prc_queue_work(lVar4);
  __s = *(void **)(lVar4 + 0x468);
  local_7c[0] = -1;
  uVar1 = *(uint *)(*(long *)(lVar4 + 0x28) + 0x60);
  uVar20 = (ulong)uVar1;
  memset(__s,0xff,0x1000);
  *(undefined4 *)(lVar4 + 0x480) = *(undefined4 *)(lVar4 + 0x458);
  iVar7 = *(int *)(*(long *)(lVar4 + 0x28) + 0x60);
  *(undefined1 *)(lVar4 + 0x454) = 1;
  iVar8 = fts_read(lVar4 + 0x454,1,__s);
  local_70 = '\0';
  local_78 = 0;
  *(undefined1 *)(lVar4 + 0x45c) = 0xe1;
  *(undefined4 *)(lVar4 + 0x460) = 9;
  iVar9 = fts_read(lVar4 + 0x45c,1,&local_78,9);
  if (iVar9 < 0) {
    _printk("<3>[FTS_TS/E]%s:read fod failed, ret:%d\n","fts_read_and_report_foddata",iVar9);
  }
  else if (local_78._1_1_ == '&') {
    if (local_70 == '\0') {
      uVar5 = local_78._4_2_;
      uVar6 = local_78._6_2_;
      uVar21 = local_78 >> 0x18 & 0xff;
      mutex_lock(lVar4 + 0x288);
      if (*(char *)(lVar4 + 0x4e2) == '\0') {
        *(undefined4 *)(lVar4 + 0x4e4) = 100;
      }
      if (*(char *)(lVar4 + 0x520) != (char)local_78) {
        if (*(char *)(lVar4 + 0x520) == -1) {
          *(char *)(lVar4 + 0x520) = (char)local_78;
        }
        else {
          *(undefined1 *)(lVar4 + 0x518) = 1;
        }
      }
      *(undefined1 *)(lVar4 + 0x4e1) = 1;
      if ((*(char *)(lVar4 + 0x321) != '\0') && (*(int *)(lVar4 + 0x4d8) != 0)) {
        if (*(int *)(lVar4 + 0x51c) == 2) {
          _printk("<6>[FTS_TS/I]%s:nonui_status is two, don't report 152\n","fts_read_and_report_foddata");
        }
        else if (*(char *)(lVar4 + 0x4e2) == '\0') {
          input_event(*(undefined8 *)(lVar4 + 0x18),3,0x2f);
          input_mt_report_slot_state(*(undefined8 *)(lVar4 + 0x18),0,1);
          input_event(*(undefined8 *)(lVar4 + 0x18),1,0x152,1);
          update_fod_press_status(1);
          input_event(*(undefined8 *)(lVar4 + 0x18),1,0x14a,1);
          input_event(*(undefined8 *)(lVar4 + 0x18),1,0x145,1);
          input_event(*(undefined8 *)(lVar4 + 0x18),3,0x35,
                      ((uVar5 & 0xff00) << 8 | (uint)uVar5 << 0x18) >> 0x10);
          input_event(*(undefined8 *)(lVar4 + 0x18),3,0x36,
                      ((uVar6 & 0xff00) << 8 | (uint)uVar6 << 0x18) >> 0x10);
          input_event(*(undefined8 *)(lVar4 + 0x18),3,0x30,uVar21);
          input_event(*(undefined8 *)(lVar4 + 0x18),3,0x32,*(undefined4 *)(lVar4 + 0x4e4));
          input_event(*(undefined8 *)(lVar4 + 0x18),3,0x33,*(undefined4 *)(lVar4 + 0x4e4));
          uVar10 = *(undefined8 *)(lVar4 + 0x18);
          uVar14 = 0x3a;
          goto LAB_00114938;
        }
      }
    }
    else {
      input_event(*(undefined8 *)(lVar4 + 0x18),1,0x152,0);
      update_fod_press_status(0);
      input_event(*(undefined8 *)(lVar4 + 0x18),0,0,0);
      *(undefined1 *)(lVar4 + 0x518) = 0;
      *(undefined2 *)(lVar4 + 0x4e1) = 0;
      *(undefined1 *)(lVar4 + 0x520) = 0xff;
      _printk("<6>[FTS_TS/I]%s:Report_0x152 UP for FingerPrint\n","fts_read_and_report_foddata");
      *(undefined4 *)(lVar4 + 0x4e4) = 0;
      if (*(char *)(lVar4 + 0x321) == '\0') {
        if (*(int *)(lVar4 + 0x4d8) == 0) {
          fts_fod_reg_write(2,0);
        }
        goto LAB_00114958;
      }
      mutex_lock(lVar4 + 0x288);
      input_event(*(undefined8 *)(lVar4 + 0x18),3,0x2f,local_78 & 0xff);
      input_mt_report_slot_state(*(undefined8 *)(lVar4 + 0x18),0,0);
      input_event(*(undefined8 *)(lVar4 + 0x18),1,0x14a,0);
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
      uVar14 = 0x39;
      uVar21 = 0xffffffff;
LAB_00114938:
      input_event(uVar10,3,uVar14,uVar21);
      input_event(*(undefined8 *)(lVar4 + 0x18),0,0,0);
    }
    mutex_unlock(lVar4 + 0x288);
  }
  else {
    *(undefined4 *)(lVar4 + 0x4e4) = 0;
  }
LAB_00114958:
  if (iVar8 < 0) {
    puVar11 = "<3>[FTS_TS/E]%s:read touchdata fails,ret:%d\n";
LAB_00114e18:
    _printk(puVar11,"fts_read_touchdata",iVar8);
    _printk("<3>[FTS_TS/E]%s:read touch data fails\n","fts_read_parse_touchdata");
  }
  else {
    if (((*(char *)(lVar4 + 0x32c) == '\0') || (*(char *)(lVar4 + 0x32d) != '\0')) ||
       (iVar9 = fts_gesture_readdata(lVar4,0), iVar9 != 0)) {
      bVar13 = *(byte *)((long)__s + 1);
      if (bVar13 < 0x10) {
        if (*(char *)((long)__s + (ulong)(*(int *)(lVar4 + 0x458) - 1)) != -1) {
          uVar16 = iVar7 * 6 + 2;
          goto LAB_001149fc;
        }
      }
      else {
        if (bVar13 >> 4 == 8) {
          uVar16 = (((*(ushort *)((long)__s + 2) & 0xff00) << 8 |
                    (uint)*(ushort *)((long)__s + 2) << 0x18) >> 0x10) + (bVar13 & 0xf) * 6 + 4;
          if (0xfff < uVar16) {
            uVar16 = 0x1000;
          }
        }
        else {
          if (bVar13 >> 4 != 2) goto LAB_00114a4c;
          uVar16 = (bVar13 & 0xf) * 6 + 2;
        }
LAB_001149fc:
        uVar15 = *(uint *)(lVar4 + 0x458);
        if (uVar15 < uVar16) {
          *(uint *)(lVar4 + 0x480) = uVar16;
          bVar3 = true;
          *(char *)(lVar4 + 0x454) = *(char *)(lVar4 + 0x454) + (char)uVar15;
          iVar8 = fts_read(lVar4 + 0x454,1,(long)__s + (ulong)uVar15,uVar16 - uVar15);
          if (iVar8 < 0) {
            puVar11 = "<3>[FTS_TS/E]%s:read touchdata2 fails,ret:%d\n";
            goto LAB_00114e18;
          }
          goto LAB_00114a50;
        }
      }
LAB_00114a4c:
      bVar3 = true;
    }
    else {
      _printk("<6>[FTS_TS/I]%s:succuss to get gesture data in irq handler\n","fts_read_touchdata");
      bVar3 = false;
    }
LAB_00114a50:
    if (2 < *(int *)(lVar4 + 0x2f4)) {
      uVar16 = *(uint *)(lVar4 + 0x480);
      lVar12 = kmem_cache_alloc_trace(_init_lct_tp_selftest,0xdc0,0x400);
      if (lVar12 == 0) {
        _printk("<3>[FTS_TS/E]%s:tmpbuf zalloc fail\n","fts_show_touch_buffer");
      }
      else {
        if (uVar16 != 0) {
          uVar21 = 0;
          uVar22 = 0;
          do {
            iVar7 = snprintf((char *)(lVar12 + uVar22),(ulong)(0x400 - (int)uVar22),"%02X,",
                             (uint)*(byte *)((long)__s + uVar21));
            uVar15 = iVar7 + (int)uVar22;
            uVar22 = (ulong)uVar15;
            if (0x3ff < uVar15) break;
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar16);
        }
        kfree(lVar12);
      }
    }
    if (bVar3) {
      if ((*(char *)(lVar4 + 0x321) != '\0') && (*(char *)(lVar4 + 0x32d) != '\0')) {
        local_78._1_7_ = (undefined7)(local_78 >> 8);
        local_78 = CONCAT71(local_78._1_7_,0xd0);
        iVar7 = fts_read(&local_78,1,local_7c,1);
        if ((-1 < iVar7) && (local_7c[0] == '\x01')) {
          iVar7 = fts_gesture_readdata(lVar4,__s);
          if (iVar7 == 0) {
            _printk("<6>[FTS_TS/I]%s:succuss to get gesture data in irq handler\n","fts_irq_read_report");
          }
          goto LAB_00114e68;
        }
      }
      if (*(byte *)((long)__s + 1) == 0xff) {
        if (((*(char *)((long)__s + 2) == -1) && (*(char *)((long)__s + 3) == -1)) &&
           (*(char *)((long)__s + 4) == -1)) {
          _printk("<6>[FTS_TS/I]%s:touch buff is 0xff, need recovery state\n","fts_read_parse_touchdata");
          fts_release_all_finger();
          fts_wait_tp_to_valid();
          fts_ex_mode_recovery(lVar4);
          fts_gesture_recovery(lVar4);
          if (1 < *(int *)(lVar4 + 0x4d8) + 1U) {
            if (*(char *)(lVar4 + 0x321) != '\0') {
              fts_gesture_reg_write(1,1);
            }
            fts_fod_reg_write(2,1);
          }
        }
        else {
          bVar13 = 0xf;
LAB_00115020:
          _printk("<6>[FTS_TS/I]%s:unknown touch event(%d)\n","fts_irq_read_report",bVar13);
        }
      }
      else {
        bVar13 = *(byte *)((long)__s + 1) >> 4;
        if (bVar13 != 8) {
          if (bVar13 == 2) {
            uVar16 = *(byte *)((long)__s + 1) & 0xf;
            uVar21 = (ulong)uVar16;
            if (((*(byte *)((long)__s + 1) & 0xf) != 0) && ((int)uVar16 <= (int)uVar1)) {
              lVar12 = 0;
              puVar17 = (uint *)(lVar4 + 0x378);
              *(uint *)(lVar4 + 0x470) = uVar16;
              do {
                uVar22 = (ulong)((int)lVar12 + 2) & 0xfe;
                bVar13 = *(byte *)((long)__s + uVar22 + 2) >> 4;
                if ((int)uVar1 <= (int)(uint)bVar13) goto LAB_00115064;
                puVar17[-1] = (uint)bVar13;
                puVar17[-2] = (uint)(*(byte *)((long)__s + uVar22) >> 6);
                puVar17[-5] = (uint)*(byte *)((long)__s + (uVar22 | 1)) |
                              (*(byte *)((long)__s + uVar22) & 0xf) << 8;
                puVar17[-4] = (uint)*(byte *)((long)__s + uVar22 + 3) |
                              (*(byte *)((long)__s + uVar22 + 2) & 0xf) << 8;
                uVar15 = (uint)*(byte *)((long)__s + uVar22 + 4);
                puVar17[-3] = uVar15;
                uVar16 = (uint)*(byte *)((long)__s + uVar22 + 5);
                *puVar17 = uVar16;
                if (uVar15 == 0) {
                  puVar17[-3] = 0x3f;
                }
                if (uVar16 == 0) {
                  *puVar17 = 9;
                }
                lVar12 = lVar12 + 6;
                puVar17 = puVar17 + 6;
              } while (uVar21 * 6 != lVar12);
              goto LAB_00114e4c;
            }
LAB_00114f5c:
            puVar11 = "<3>[FTS_TS/E]%s:invalid touch event num(%d)\n";
          }
          else {
            if (bVar13 != 0) goto LAB_00115020;
            bVar13 = *(byte *)((long)__s + 1);
            uVar16 = bVar13 & 0xf;
            uVar21 = (ulong)uVar16;
            if ((int)uVar1 < (int)uVar16) {
              puVar11 = "<3>[FTS_TS/E]%s:invalid point_num(%d)\n";
            }
            else {
              if (0 < (int)uVar1) {
                uVar21 = 0;
                puVar17 = (uint *)(lVar4 + 0x378);
                uVar22 = 2;
                do {
                  uVar19 = uVar22 & 0xfe;
                  bVar2 = *(byte *)((long)__s + uVar19 + 2);
                  if (0x9f < bVar2) goto LAB_00114e38;
                  bVar2 = bVar2 >> 4;
                  if ((int)uVar1 <= (int)(uint)bVar2) {
                    _printk("<3>[FTS_TS/E]%s:ID(%d) beyond max_touch_number\n","fts_irq_read_report",bVar2);
                    goto LAB_00114ec0;
                  }
                  puVar17[-1] = (uint)bVar2;
                  bVar2 = *(byte *)((long)__s + uVar19);
                  uVar15 = (uint)(bVar2 >> 6);
                  puVar17[-2] = uVar15;
                  puVar17[-5] = (uint)*(byte *)((long)__s + (uVar19 | 1)) << 3 |
                                (*(byte *)((long)__s + uVar19) & 0xf) << 0xb |
                                *(byte *)((long)__s + uVar19 + 4) >> 5 & 0xfffffffe |
                                *(byte *)((long)__s + uVar19) >> 5 & 1;
                  puVar17[-4] = (uint)*(byte *)((long)__s + uVar19 + 3) << 4 |
                                (*(byte *)((long)__s + uVar19 + 2) & 0xf) << 0xc |
                                *(byte *)((long)__s + uVar19 + 4) >> 2 & 0xc |
                                *(byte *)((long)__s + uVar19) >> 3 & 2 |
                                (uint)(*(byte *)((long)__s + uVar19 + 5) >> 7);
                  uVar18 = (uint)*(byte *)((long)__s + uVar19 + 5);
                  uVar16 = 9;
                  if (uVar18 != 0) {
                    uVar16 = uVar18;
                  }
                  *puVar17 = uVar16;
                  if (((bVar2 < 0x40) || (uVar15 == 2)) && ((bVar13 & 0xf) == 0)) {
                    puVar11 = "<6>[FTS_TS/I]%s:abnormal touch data from fw\n";
                    goto LAB_001150f8;
                  }
                  uVar21 = uVar21 + 1;
                  puVar17 = puVar17 + 6;
                  uVar22 = (ulong)((int)uVar22 + 6);
                } while (uVar20 != uVar21);
                uVar21 = uVar20;
LAB_00114e38:
                if ((uVar21 & 0xff) != 0) {
                  *(uint *)(lVar4 + 0x470) = (uint)uVar21 & 0xff;
                  goto LAB_00114e4c;
                }
              }
              uVar21 = (ulong)*(byte *)((long)__s + 2);
              puVar11 = "<6>[FTS_TS/I]%s:no touch point information(%02x)\n";
            }
          }
          _printk(puVar11,"fts_irq_read_report",uVar21);
          goto LAB_00114ec0;
        }
        if (*(char *)(lVar4 + 0x328) == '\0') {
          puVar11 = "<3>[FTS_TS/E]%s:touch_analysis is disabled\n";
LAB_001150f8:
          _printk(puVar11,"fts_irq_read_report");
          goto LAB_00114ec0;
        }
        uVar16 = *(byte *)((long)__s + 1) & 0xf;
        uVar21 = (ulong)uVar16;
        if (((*(byte *)((long)__s + 1) & 0xf) == 0) || ((int)uVar1 < (int)uVar16))
        goto LAB_00114f5c;
        lVar12 = 0;
        puVar17 = (uint *)(lVar4 + 0x378);
        *(uint *)(lVar4 + 0x470) = uVar16;
        do {
          uVar22 = (ulong)((int)lVar12 + 4) & 0xfe;
          bVar13 = *(byte *)((long)__s + uVar22 + 2) >> 4;
          if ((int)uVar1 <= (int)(uint)bVar13) goto LAB_00115064;
          puVar17[-1] = (uint)bVar13;
          puVar17[-2] = (uint)(*(byte *)((long)__s + uVar22) >> 6);
          puVar17[-5] = (uint)*(byte *)((long)__s + (uVar22 | 1)) |
                        (*(byte *)((long)__s + uVar22) & 0xf) << 8;
          puVar17[-4] = (uint)*(byte *)((long)__s + uVar22 + 3) |
                        (*(byte *)((long)__s + uVar22 + 2) & 0xf) << 8;
          uVar15 = (uint)*(byte *)((long)__s + uVar22 + 4);
          puVar17[-3] = uVar15;
          uVar16 = (uint)*(byte *)((long)__s + uVar22 + 5);
          *puVar17 = uVar16;
          if (uVar15 == 0) {
            puVar17[-3] = 0x3f;
          }
          if (uVar16 == 0) {
            *puVar17 = 9;
          }
          lVar12 = lVar12 + 6;
          puVar17 = puVar17 + 6;
        } while (uVar21 * 6 != lVar12);
LAB_00114e4c:
        mutex_lock(lVar4 + 0x288);
        fts_input_report_b(lVar4,lVar4 + 0x364);
        mutex_unlock(lVar4 + 0x288);
      }
    }
  }
LAB_00114e68:
  if ((*(int *)(lVar4 + 0x548) != 0) && (local_7c[0] = '\0', fts_data != 0)) {
    local_78 = CONCAT71(local_78._1_7_,0x9b);
    iVar7 = fts_read(&local_78,1,local_7c,1);
    if (iVar7 < 0) {
      _printk("<3>[FTS_TS/E]%s:read palm data error\n\n","fts_read_palm_data");
    }
    else {
      if (local_7c[0] == '\0') {
        uVar10 = 0;
      }
      else {
        if (local_7c[0] != '\x01') goto LAB_00114ec0;
        uVar10 = 1;
      }
      update_palm_sensor_value(uVar10);
    }
  }
LAB_00114ec0:
  if ((*(char *)(lVar4 + 0x328) != '\0') && (*(int *)(lVar4 + 0x47c) != 0)) {
    *(undefined4 *)(lVar4 + 0x47c) = 0;
    if ((*(void **)(lVar4 + 0x488) != (void *)0x0) && (*(uint *)(lVar4 + 0x480) != 0)) {
      memcpy(*(void **)(lVar4 + 0x488),*(void **)(lVar4 + 0x468),(ulong)*(uint *)(lVar4 + 0x480));
    }
    __wake_up(lVar4 + 0x228,1,1,0);
  }
LAB_00114f00:
  lVar12 = sp_el0;
  if (*(long *)(lVar12 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
LAB_00115064:
  _printk("<3>[FTS_TS/E]%s:touch point ID(%d) beyond max_touch_number(%d)\n","fts_irq_read_report",bVar13,uVar20);
  goto LAB_00114ec0;
}



/* ---- fts_input_report_b @ 0011510c ---- */

void fts_input_report_b(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 *in_x18;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  bool bVar15;
  uint *puVar16;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar6 = *(long *)(param_1 + 0x28);
  uVar13 = *(uint *)(param_1 + 0x474);
  uVar1 = *(uint *)(lVar6 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x470)) {
    lVar14 = 0;
    bVar15 = false;
    uVar10 = 0;
    do {
      piVar12 = (int *)(param_2 + lVar14 * 0x18);
      iVar3 = piVar12[1];
      if ((*(char *)(lVar6 + 0x18) != '\0') && (*(uint *)(lVar6 + 0x1c) != 0)) {
        uVar7 = 0;
        do {
          lVar8 = (long)(int)uVar7;
          iVar2 = *(int *)(lVar6 + (long)(int)uVar7 * 4 + 0x40);
          if ((iVar2 + -10 <= *piVar12 && *piVar12 <= iVar2 + 10) &&
             (iVar2 = *(int *)(lVar6 + lVar8 * 4 + 0x30),
             iVar2 + -10 <= iVar3 && iVar3 <= iVar2 + 10)) {
            iVar3 = *(int *)(param_2 + lVar14 * 0x18 + 0xc);
            if (iVar3 == 2) {
LAB_001151f8:
              uVar11 = 1 << (ulong)(uVar7 & 0x1f);
              if ((*(uint *)(param_1 + 0x478) & uVar11) == 0) {
                if (3 < uVar7) goto LAB_00115480;
                input_event(*(undefined8 *)(param_1 + 0x18),1,
                            *(undefined4 *)(lVar6 + lVar8 * 4 + 0x20),1);
                *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) | uVar11;
                goto LAB_0011531c;
              }
              if (iVar3 != 1) goto LAB_0011531c;
            }
            else {
              if (iVar3 != 1) {
                if (iVar3 == 0) goto LAB_001151f8;
                goto LAB_0011531c;
              }
              uVar11 = 1 << (ulong)(uVar7 & 0x1f);
              if ((*(uint *)(param_1 + 0x478) & uVar11) == 0) goto LAB_0011531c;
            }
            if (3 < uVar7) {
LAB_00115480:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x115484);
              (*pcVar4)();
            }
            input_event(*(undefined8 *)(param_1 + 0x18),1,*(undefined4 *)(lVar6 + lVar8 * 4 + 0x20),
                        0);
            *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & (uVar11 ^ 0xffffffff);
            goto LAB_0011531c;
          }
          uVar7 = uVar7 + 1;
        } while (*(uint *)(lVar6 + 0x1c) != uVar7);
      }
      if ((*(uint *)(param_2 + lVar14 * 0x18 + 0xc) | 2) == 2) {
        puVar16 = (uint *)(param_2 + lVar14 * 0x18 + 0x10);
        input_event(uVar9,3,0x2f,*puVar16);
        input_mt_report_slot_state(uVar9,0,1);
        if (((*(char *)(param_1 + 0x4e2) == '\0') && (*(int *)(param_1 + 0x4e4) == 100)) &&
           (*(char *)(param_1 + 0x321) == '\0')) {
          input_event(uVar9,1,0x152,1);
          update_fod_press_status(1);
        }
        input_event(uVar9,3,0x30,*(undefined4 *)(param_2 + lVar14 * 0x18 + 0x14));
        input_event(uVar9,3,0x35,*piVar12);
        input_event(uVar9,3,0x36,piVar12[1]);
        bVar15 = true;
        uVar7 = 1 << (ulong)(*puVar16 & 0x1f);
        uVar10 = uVar7 | uVar10;
        uVar13 = uVar7 | uVar13;
      }
      else {
        lVar6 = param_2 + lVar14 * 0x18;
        input_event(uVar9,3,0x2f,*(undefined4 *)(lVar6 + 0x10));
        input_mt_report_slot_state(uVar9,0,0);
        bVar15 = true;
        uVar13 = uVar13 & (1 << (ulong)(*(uint *)(lVar6 + 0x10) & 0x1f) ^ 0xffffffffU);
      }
LAB_0011531c:
      lVar14 = lVar14 + 1;
      if (*(int *)(param_1 + 0x470) <= lVar14) goto LAB_001153b8;
      lVar6 = *(long *)(param_1 + 0x28);
    } while( true );
  }
  uVar10 = 0;
  bVar15 = false;
LAB_001153b8:
  if ((uVar13 ^ uVar10) != 0 && uVar1 != 0) {
    uVar7 = 0;
    do {
      if (((uVar13 ^ uVar10) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
        input_event(uVar9,3,0x2f,uVar7);
        input_mt_report_slot_state(uVar9,0,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  if (uVar10 == 0) {
    if ((!bVar15) && (*(int *)(param_1 + 0x474) == 0)) goto LAB_001153fc;
    update_fod_press_status(0);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  input_event(uVar9,1,0x14a,uVar5);
LAB_001153fc:
  *(uint *)(param_1 + 0x474) = uVar10;
  input_event(uVar9,0,0,0);
  return;
}



/* ---- fts_ts_panel_notifier_callback.1d9115c5b63d3299251e53d84922b4f4 @ 00115484 ---- */

void fts_ts_panel_notifier_callback_1d9115c5b63d3299251e53d84922b4f4
               (undefined8 param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == (int *)0x0) {
    puVar3 = "<3>[FTS_TS/E]%s:Invalid notification\n\n";
    pcVar5 = "fts_ts_panel_notifier_callback";
  }
  else {
    iVar2 = *param_2;
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        if ((char)param_2[3] != '\0') {
          return;
        }
        _printk("<6>[FTS_TS/I]%s:%s: FB_BLANK %s\n","fts_ts_panel_notifier_callback","fts_ts_panel_notifier_callback",
                "POWER DOWN");
        if (*(char *)(param_3 + 0x321) != '\0') {
          return;
        }
        pcVar5 = "POWER DOWN";
        if (*param_2 != 3) {
          pcVar5 = "LP";
        }
        _printk("<6>[FTS_TS/I]%s:%s: FB_BLANK %s, suspend function will be called\n","fts_ts_panel_notifier_callback","fts_ts_panel_notifier_callback",
                pcVar5);
        flush_workqueue(*(undefined8 *)(param_3 + 0x50));
        uVar4 = *(undefined8 *)(param_3 + 0x50);
        param_3 = param_3 + 0x1c8;
      }
      else {
        if (iVar2 != 2) {
          return;
        }
        if ((char)param_2[3] == '\0') {
          return;
        }
        _printk("<6>[FTS_TS/I]%s:%s: FB_BLANK_UNBLANK\n","fts_ts_panel_notifier_callback","fts_ts_panel_notifier_callback");
        if (*(char *)(param_3 + 0x321) == '\0') {
          return;
        }
        _printk("<6>[FTS_TS/I]%s:%s: FB_BLANK_UNBLANK, resume function will be called\n","fts_ts_panel_notifier_callback","fts_ts_panel_notifier_callback");
        flush_workqueue(*(undefined8 *)(param_3 + 0x50));
        uVar4 = *(undefined8 *)(param_3 + 0x50);
        param_3 = param_3 + 0x198;
      }
      queue_work_on(0x20,uVar4,param_3);
      return;
    }
    if ((char)param_2[3] == '\0') {
      return;
    }
    cancel_work_sync(fts_data + 0x198);
    lVar1 = fts_data;
    if (*(char *)(fts_data + 0x321) == '\0') {
      if (*(char *)(fts_data + 0x322) == '\0') {
        if (*(int *)(fts_data + 0x548) != 0) {
          _printk("<6>[FTS_TS/I]%s:palm sensor ON, switch to OFF\n","fts_ts_suspend");
          update_palm_sensor_value(0);
          iVar2 = fts_write_reg(0x9a,0);
          if (iVar2 < 0) {
            _printk("<3>[FTS_TS/E]%s:Set palm sensor switch failed!\n\n","fts_palm_sensor_cmd");
          }
          else {
            _printk("<6>[FTS_TS/I]%s:Set palm sensor switch: %d\n\n","fts_palm_sensor_cmd",0);
          }
        }
        if (((*(char *)(lVar1 + 0x4e0) != '\0') || (*(char *)(lVar1 + 0x32f) != '\0')) ||
           (uVar6 = 0, *(char *)(lVar1 + 0x32c) != '\0')) {
          uVar6 = 1;
        }
        *(undefined1 *)(lVar1 + 0x32d) = uVar6;
        if (((*(int *)(lVar1 + 0x4d8) < 1) || (*(int *)(lVar1 + 0x4d8) == 100)) &&
           (iVar2 = fts_fod_reg_write(2,0), iVar2 < 0)) {
          _printk("<3>[FTS_TS/E]%s:%s fts_fod_reg_write failed\n","fts_ts_suspend","fts_ts_suspend");
        }
        if ((0 < *(int *)(lVar1 + 0x4d8)) && (*(int *)(lVar1 + 0x4d8) != 100)) {
          _printk("<6>[FTS_TS/I]%s:set CF reg\n","fts_ts_suspend");
          iVar2 = fts_fod_reg_write(2,1);
          if (iVar2 < 0) {
            _printk("<3>[FTS_TS/E]%s:%s fts_write_reg CF failed\n","fts_ts_suspend","fts_ts_suspend");
          }
          iVar2 = fts_gesture_reg_write(1,1);
          if (iVar2 < 0) {
            _printk("<3>[FTS_TS/E]%s:%s fts_fod_reg_write failed\n\n","fts_ts_suspend","fts_ts_suspend");
          }
        }
        fts_esdcheck_suspend(lVar1);
        _printk("<6>[FTS_TS/I]%s:gesture_support:%d  poweroff_on_sleep:%d \n","fts_ts_suspend",*(undefined1 *)(lVar1 + 0x32d),
                *(undefined1 *)(lVar1 + 0x330));
        if ((*(char *)(lVar1 + 0x32d) == '\0') || (*(char *)(lVar1 + 0x330) != '\0')) {
          uVar4 = _raw_spin_lock_irqsave(fts_data + 0x280);
          lVar7 = fts_data;
          if (*(char *)(fts_data + 0x323) == '\0') {
            disable_irq_nosync(*(undefined4 *)(fts_data + 0x2f0));
            lVar7 = fts_data;
            *(undefined1 *)(fts_data + 0x323) = 1;
          }
          _raw_spin_unlock_irqrestore(lVar7 + 0x280,uVar4);
          _printk("<6>[FTS_TS/I]%s:make TP enter into sleep mode\n","fts_ts_suspend");
          iVar2 = fts_write_reg(0xa5,3);
          if (iVar2 < 0) {
            _printk("<3>[FTS_TS/E]%s:set TP to sleep mode fail, ret=%d\n","fts_ts_suspend",iVar2);
          }
        }
        else {
          fts_gesture_suspend(lVar1);
        }
        fts_release_all_finger();
        *(undefined1 *)(lVar1 + 0x321) = 1;
        return;
      }
      puVar3 = "<6>[FTS_TS/I]%s:fw upgrade in process, can't suspend\n";
    }
    else {
      puVar3 = &UNK_001065b4;
    }
    pcVar5 = "fts_ts_suspend";
  }
  _printk(puVar3,pcVar5);
  return;
}



/* ---- fts_fod_test_store.1d9115c5b63d3299251e53d84922b4f4 @ 0011580c ---- */

undefined8
fts_fod_test_store_1d9115c5b63d3299251e53d84922b4f4
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_3c = 0;
  _printk("<6>[FTS_TS/I]%s:%s,buf:%s,count:%u\n\n","fts_fod_test_store","fts_fod_test_store",param_3,param_4);
  iVar1 = kstrtoint(param_3,10,&local_3c);
  if (iVar1 == 0) {
    if (local_3c == 0) {
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x2f,0);
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x33,0);
      input_mt_report_slot_state(*(undefined8 *)(lVar2 + 0x18),0,0);
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x39,0xffffffff);
      input_event(*(undefined8 *)(lVar2 + 0x18),1,0x152,0);
      update_fod_press_status(0);
    }
    else {
      input_event(*(undefined8 *)(lVar2 + 0x18),1,0x152,1);
      update_fod_press_status(1);
      input_event(*(undefined8 *)(lVar2 + 0x18),0,0,0);
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x2f,0);
      input_mt_report_slot_state(*(undefined8 *)(lVar2 + 0x18),0,1);
      input_event(*(undefined8 *)(lVar2 + 0x18),1,0x14a,1);
      input_event(*(undefined8 *)(lVar2 + 0x18),1,0x145,1);
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x39,0);
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x33,1);
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x35,0x21c0);
      input_event(*(undefined8 *)(lVar2 + 0x18),3,0x36,0x83d0);
    }
    input_event(*(undefined8 *)(lVar2 + 0x18),0,0,0);
  }
  else {
    param_4 = 0xffffffffffffffed;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_pm_suspend.1d9115c5b63d3299251e53d84922b4f4 @ 00115a08 ---- */

undefined8 fts_pm_suspend_1d9115c5b63d3299251e53d84922b4f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  *(undefined1 *)(lVar1 + 800) = 1;
  *(undefined4 *)(lVar1 + 0x300) = 0;
  return 0;
}



/* ---- fts_pm_resume.1d9115c5b63d3299251e53d84922b4f4 @ 00115a2c ---- */

undefined8 fts_pm_resume_1d9115c5b63d3299251e53d84922b4f4(long param_1)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(param_1 + 0x98);
  *(undefined1 *)(lVar1 + 800) = 0;
  complete(lVar1 + 0x300);
  return 0;
}



/* ---- fts_create_apk_debug_channel @ 00115ab8 ---- */

undefined4 fts_create_apk_debug_channel(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *in_x18;
  undefined4 uVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = proc_create_data("ftxxxx-debug",0x1ff,0,&fts_proc_fops,param_1);
  uVar3 = 0xfffffff4;
  *(long *)(param_1 + 0x240) = lVar1;
  if (lVar1 == 0) {
    puVar2 = "<3>[FTS_TS/E]%s:create proc entry fail\n";
  }
  else {
    lVar1 = proc_create_data("fts_ta",0x1ff,0,&fts_procta_fops,param_1);
    puVar2 = "<3>[FTS_TS/E]%s:create proc_ta entry fail\n";
    if (lVar1 != 0) {
      puVar2 = "<6>[FTS_TS/I]%s:Create proc entry success!\n";
    }
    uVar3 = 0xfffffff4;
    if (lVar1 != 0) {
      uVar3 = 0;
    }
    *(long *)(param_1 + 0x260) = lVar1;
  }
  _printk(puVar2,"fts_create_apk_debug_channel");
  return uVar3;
}



/* ---- fts_release_apk_debug_channel @ 00115b70 ---- */

void fts_release_apk_debug_channel(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(long *)(param_1 + 0x240) != 0) {
    proc_remove();
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    proc_remove();
  }
  return;
}



/* ---- fts_create_sysfs @ 00115bb4 ---- */

undefined8 fts_create_sysfs(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = sysfs_create_group(*(undefined8 *)(param_1 + 0x10),
                             &fts_attribute_group_llvm_614020873397002742);
  if (iVar1 == 0) {
    _printk("<6>[FTS_TS/I]%s:[EX]: sysfs_create_group() succeeded!!\n","fts_create_sysfs");
    uVar2 = 0;
  }
  else {
    _printk("<3>[FTS_TS/E]%s:[EX]: sysfs_create_group() failed!!\n","fts_create_sysfs");
    sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),&fts_attribute_group_llvm_614020873397002742)
    ;
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}



/* ---- fts_remove_sysfs @ 00115c38 ---- */

undefined8 fts_remove_sysfs(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),&fts_attribute_group_llvm_614020873397002742);
  return 0;
}



/* ---- lct_get_lockdown_info @ 00115c6c ---- */

undefined8 lct_get_lockdown_info(void)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_60;
  char local_58 [64];
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_58[0x30] = '\0';
  local_58[0x31] = '\0';
  local_58[0x32] = '\0';
  local_58[0x33] = '\0';
  local_58[0x34] = '\0';
  local_58[0x35] = '\0';
  local_58[0x36] = '\0';
  local_58[0x37] = '\0';
  local_58[0x38] = '\0';
  local_58[0x39] = '\0';
  local_58[0x3a] = '\0';
  local_58[0x3b] = '\0';
  local_58[0x3c] = '\0';
  local_58[0x3d] = '\0';
  local_58[0x3e] = '\0';
  local_58[0x3f] = '\0';
  local_58[0x20] = '\0';
  local_58[0x21] = '\0';
  local_58[0x22] = '\0';
  local_58[0x23] = '\0';
  local_58[0x24] = '\0';
  local_58[0x25] = '\0';
  local_58[0x26] = '\0';
  local_58[0x27] = '\0';
  local_58[0x28] = '\0';
  local_58[0x29] = '\0';
  local_58[0x2a] = '\0';
  local_58[0x2b] = '\0';
  local_58[0x2c] = '\0';
  local_58[0x2d] = '\0';
  local_58[0x2e] = '\0';
  local_58[0x2f] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_60 = 0;
  iVar2 = fts_flash_read(0x1e000,&local_60,8);
  if (iVar2 != 0) {
    _printk("<3>[FTS_TS/E]%s:lockdown info read error\n","lct_get_lockdown_info");
  }
  snprintf(local_58,0x40,"%02x%02x%02x%02x%02x%02x%02x%02x\n",(uint)(byte)local_60,
           (uint)local_60._1_1_,(uint)local_60._2_1_,(uint)local_60._3_1_,(uint)local_60._4_1_,
           (uint)local_60._5_1_,(uint)local_60._6_1_,(uint)local_60._7_1_);
  update_lct_tp_info(0,local_58);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- lct_fts_get_tpfwver @ 00115d48 ---- */

void lct_fts_get_tpfwver(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_70 [4];
  undefined1 local_6c [4];
  char local_68 [24];
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = fts_data;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_68[8] = '\0';
  local_68[9] = '\0';
  local_68[10] = '\0';
  local_68[0xb] = '\0';
  local_68[0xc] = '\0';
  local_68[0xd] = '\0';
  local_68[0xe] = '\0';
  local_68[0xf] = '\0';
  local_70[0] = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68[0x10] = '\0';
  local_68[0x11] = '\0';
  local_68[0x12] = '\0';
  local_68[0x13] = '\0';
  local_68[0x14] = '\0';
  local_68[0x15] = '\0';
  local_68[0x16] = '\0';
  local_68[0x17] = '\0';
  local_50 = 0;
  if (*(char *)(fts_data + 0x321) == '\0') {
    lVar1 = *(long *)(fts_data + 0x18) + 0x208;
    mutex_lock(lVar1);
    fts_esdcheck_proc_busy(lVar2,1);
    local_6c[0] = 0xa6;
    fts_read(local_6c,1,local_70,1);
    if ((local_70[0] + 1 & 0xff) < 2) {
      local_50 = local_50 & 0xffffffffffffff00;
      builtin_strncpy(local_68,"get tp fw version fail!\n",0x18);
    }
    else {
      snprintf(local_68,0x40,"[Vendor]samsung,[FW]0x%02x,[IC]ft3519t\n",(uint)local_70[0]);
    }
    mutex_unlock(lVar1);
    update_lct_tp_info(local_68,0);
    lct_get_lockdown_info();
    _printk("<6>[FTS_TS/I]%s:update tp_info:%s\n","lct_fts_get_tpfwver",local_68);
    msleep(0x14);
    fts_esdcheck_proc_busy(lVar2,0);
    uVar3 = 0;
  }
  else {
    _printk("<6>[FTS_TS/I]%s:Touch is suspended, cannot read firmware version!!\n","lct_fts_get_tpfwver");
    uVar3 = 0xffffffff;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- lct_fts_tp_selftest_callback @ 00115ea4 ---- */

undefined8 lct_fts_tp_selftest_callback(byte param_1)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (param_1 < 4) {
    *in_x18 = unaff_x30;
    uVar1 = lct_tp_selftest_all();
    return uVar1;
  }
  return 0;
}



/* ---- lct_fts_tp_get_screen_angle_callback @ 00115ee0 ---- */

undefined8 lct_fts_tp_get_screen_angle_callback(void)

{
  return 0xffffffff;
}



/* ---- lct_fts_tp_set_screen_angle_callback @ 00115ef0 ---- */

int lct_fts_tp_set_screen_angle_callback(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(char *)(fts_data + 0x321) == '\0') && (*(char *)(fts_data + 0x322) == '\0')) {
    iVar1 = (uint)(param_1 == 0x10e) << 1;
    if (param_1 == 0x5a) {
      iVar1 = 1;
    }
    iVar1 = fts_write_reg(0x8c,iVar1);
    if (-1 < iVar1) {
      return iVar1;
    }
    puVar2 = "<3>[FTS_TS/E]%s:write FTS_SET_ANGLE, err\n\n";
  }
  else {
    iVar1 = -5;
    puVar2 = "<3>[FTS_TS/E]%s:tp is suspended or flashing, can not to set\n\n";
  }
  _printk(puVar2,"lct_fts_tp_set_screen_angle_callback");
  return iVar1;
}



/* ---- lct_fts_tp_work_callback @ 00115f80 ---- */

undefined8 lct_fts_tp_work_callback(uint param_1)

{
  undefined8 *in_x18;
  char *pcVar1;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_1 & 1) == 0) {
    fts_irq_disable();
    fts_release_all_finger();
    pcVar1 = "Disable";
  }
  else {
    fts_release_all_finger();
    fts_irq_enable();
    pcVar1 = "Enable";
  }
  set_lct_tp_work_status(param_1 & 1);
  _printk("<6>[FTS_TS/I]%s:%s Touchpad\n","lct_fts_tp_work_callback",pcVar1);
  return 0;
}



/* ---- lct_create_procfs @ 00115ff8 ---- */

int lct_create_procfs(void)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = init_lct_tp_info("[Vendor]samsung,[FW]unknow,[IC]ft3519t\n",0);
  if (iVar1 == 0) {
    set_lct_tp_info_callback(lct_fts_get_tpfwver_cfi_jt);
    _printk("<6>[FTS_TS/I]%s:create /proc/tp_info & /proc/tp_lockdown_info succeeded\n","lct_create_procfs");
    iVar1 = init_lct_tp_selftest(lct_fts_tp_selftest_callback_cfi_jt);
    if (iVar1 < 0) {
      _printk("<3>[FTS_TS/E]%s:init_lct_tp_selftest Failed!\n","lct_create_procfs");
    }
    else {
      _printk("<6>[FTS_TS/I]%s:init_lct_tp_selftest Succeeded!\n","lct_create_procfs");
      iVar1 = init_lct_tp_grip_area(lct_fts_tp_set_screen_angle_callback_cfi_jt,0);
      if (iVar1 < 0) {
        _printk("<3>[FTS_TS/E]%s:init_lct_tp_grip_area Failed!\n","lct_create_procfs");
      }
      else {
        _printk("<6>[FTS_TS/I]%s:init_lct_tp_grip_area Succeeded!\n","lct_create_procfs");
        iVar1 = init_lct_tp_gesture(lct_fts_tp_gesture_callback_cfi_jt);
        if (iVar1 < 0) {
          _printk("<3>[FTS_TS/E]%s:init_lct_tp_gesture Failed!\n","lct_create_procfs");
        }
        else {
          _printk("<6>[FTS_TS/I]%s:init_lct_tp_gesture Succeeded!\n","lct_create_procfs");
          iVar1 = init_lct_tp_work(lct_fts_tp_work_callback_cfi_jt);
          if (-1 < iVar1) {
            _printk("<6>[FTS_TS/I]%s:init_lct_tp_work Succeeded!\n","lct_create_procfs");
            return iVar1;
          }
          _printk("<3>[FTS_TS/E]%s:init_lct_tp_work Failed!\n","lct_create_procfs");
          uninit_lct_tp_work();
        }
        uninit_lct_tp_gesture();
      }
      uninit_lct_tp_grip_area();
    }
    uninit_lct_tp_selftest();
  }
  else {
    _printk("<3>[FTS_TS/E]%s:create /proc/tp_info & /proc/tp_lockdown_info fail\n","lct_create_procfs");
  }
  uninit_lct_tp_info();
  return iVar1;
}



/* ---- lct_remove_procfs @ 0011618c ---- */

undefined8 lct_remove_procfs(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uninit_lct_tp_gesture();
  uninit_lct_tp_work();
  uninit_lct_tp_selftest();
  uninit_lct_tp_grip_area();
  uninit_lct_tp_info();
  return 0;
}



/* ---- fts_debug_read.846ca4183596b142ab693d00ccc31166 @ 001161c4 ---- */

void fts_debug_read_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *in_x18;
  uint uVar6;
  undefined8 unaff_x30;
  undefined1 local_14c [4];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x5e0);
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
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  lVar4 = PDE_DATA(*(undefined8 *)(param_1 + 0x20));
  if ((int)param_3 < 1) {
    _printk("<3>[FTS_TS/E]%s:apk proc read count(%d) fail\n","fts_debug_read",param_3);
    lVar4 = -0x16;
    goto LAB_0011638c;
  }
  if (param_3 < 0x101) {
    puVar5 = &local_148;
  }
  else {
    puVar5 = (undefined8 *)__kmalloc((long)(int)param_3,0xdc0);
    if (puVar5 == (undefined8 *)0x0) {
      _printk("<3>[FTS_TS/E]%s:apk proc buf zalloc fail\n","fts_debug_read");
      lVar4 = -0xc;
      goto LAB_0011638c;
    }
  }
  cVar1 = *(char *)(lVar4 + 0x248);
  uVar6 = param_3;
  if (cVar1 == '\x15') {
    if (0x3f < param_3) {
      *(char *)puVar5 = (char)*(undefined4 *)(lVar4 + 0x4a0);
      snprintf((char *)(puVar5 + 4),(ulong)(param_3 - 0x20),"%s","Focaltech V3.4 20211214");
LAB_0011631c:
      uVar3 = param_3;
      goto LAB_00116324;
    }
    uVar3 = 0;
  }
  else {
    if (cVar1 == '\a') {
      uVar3 = fts_read(0,0,puVar5,param_3);
      if (-1 < (int)uVar3) goto LAB_0011631c;
      _printk("<3>[FTS_TS/E]%s:PROC_READ_DATA read error\n","fts_debug_read");
    }
    else {
      if (cVar1 != '\x01') {
        uVar3 = 0;
        goto joined_r0x001163c8;
      }
      local_14c[0] = *(undefined1 *)(lVar4 + 0x24a);
      uVar3 = fts_read(local_14c,1,puVar5,1);
      if ((int)uVar3 < 0) {
        _printk("<3>[FTS_TS/E]%s:PROC_READ_REGISTER read error\n","fts_debug_read");
        uVar6 = 1;
      }
      else {
        uVar3 = 1;
        uVar6 = 1;
      }
    }
LAB_00116324:
    __check_object_size(puVar5,uVar6,1);
    lVar4 = _copy_to_user(param_2,puVar5,uVar6);
    if (lVar4 != 0) {
      _printk("<3>[FTS_TS/E]%s:copy to user error\n","fts_debug_read");
      uVar3 = 0xfffffff2;
    }
  }
joined_r0x001163c8:
  if ((0x100 < param_3) && (puVar5 != (undefined8 *)0x0)) {
    kfree(puVar5);
  }
  lVar4 = (long)(int)uVar3;
LAB_0011638c:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}



/* ---- fts_debug_write.846ca4183596b142ab693d00ccc31166 @ 00116434 ---- */

void fts_debug_write_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  long *plVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined8 *in_x18;
  ulong __n;
  uint uVar8;
  long lVar9;
  undefined8 unaff_x30;
  long local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  byte local_148 [256];
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar9 = sp_el0;
  local_48 = *(long *)(lVar9 + 0x5e0);
  local_148[0xf0] = 0;
  local_148[0xf1] = 0;
  local_148[0xf2] = 0;
  local_148[0xf3] = 0;
  local_148[0xf4] = 0;
  local_148[0xf5] = 0;
  local_148[0xf6] = 0;
  local_148[0xf7] = 0;
  local_148[0xf8] = 0;
  local_148[0xf9] = 0;
  local_148[0xfa] = 0;
  local_148[0xfb] = 0;
  local_148[0xfc] = 0;
  local_148[0xfd] = 0;
  local_148[0xfe] = 0;
  local_148[0xff] = 0;
  local_148[0xe0] = 0;
  local_148[0xe1] = 0;
  local_148[0xe2] = 0;
  local_148[0xe3] = 0;
  local_148[0xe4] = 0;
  local_148[0xe5] = 0;
  local_148[0xe6] = 0;
  local_148[0xe7] = 0;
  local_148[0xe8] = 0;
  local_148[0xe9] = 0;
  local_148[0xea] = 0;
  local_148[0xeb] = 0;
  local_148[0xec] = 0;
  local_148[0xed] = 0;
  local_148[0xee] = 0;
  local_148[0xef] = 0;
  local_148[0xd0] = 0;
  local_148[0xd1] = 0;
  local_148[0xd2] = 0;
  local_148[0xd3] = 0;
  local_148[0xd4] = 0;
  local_148[0xd5] = 0;
  local_148[0xd6] = 0;
  local_148[0xd7] = 0;
  local_148[0xd8] = 0;
  local_148[0xd9] = 0;
  local_148[0xda] = 0;
  local_148[0xdb] = 0;
  local_148[0xdc] = 0;
  local_148[0xdd] = 0;
  local_148[0xde] = 0;
  local_148[0xdf] = 0;
  local_148[0xc0] = 0;
  local_148[0xc1] = 0;
  local_148[0xc2] = 0;
  local_148[0xc3] = 0;
  local_148[0xc4] = 0;
  local_148[0xc5] = 0;
  local_148[0xc6] = 0;
  local_148[199] = 0;
  local_148[200] = 0;
  local_148[0xc9] = 0;
  local_148[0xca] = 0;
  local_148[0xcb] = 0;
  local_148[0xcc] = 0;
  local_148[0xcd] = 0;
  local_148[0xce] = 0;
  local_148[0xcf] = 0;
  local_148[0xb0] = 0;
  local_148[0xb1] = 0;
  local_148[0xb2] = 0;
  local_148[0xb3] = 0;
  local_148[0xb4] = 0;
  local_148[0xb5] = 0;
  local_148[0xb6] = 0;
  local_148[0xb7] = 0;
  local_148[0xb8] = 0;
  local_148[0xb9] = 0;
  local_148[0xba] = 0;
  local_148[0xbb] = 0;
  local_148[0xbc] = 0;
  local_148[0xbd] = 0;
  local_148[0xbe] = 0;
  local_148[0xbf] = 0;
  local_148[0xa0] = 0;
  local_148[0xa1] = 0;
  local_148[0xa2] = 0;
  local_148[0xa3] = 0;
  local_148[0xa4] = 0;
  local_148[0xa5] = 0;
  local_148[0xa6] = 0;
  local_148[0xa7] = 0;
  local_148[0xa8] = 0;
  local_148[0xa9] = 0;
  local_148[0xaa] = 0;
  local_148[0xab] = 0;
  local_148[0xac] = 0;
  local_148[0xad] = 0;
  local_148[0xae] = 0;
  local_148[0xaf] = 0;
  local_148[0x90] = 0;
  local_148[0x91] = 0;
  local_148[0x92] = 0;
  local_148[0x93] = 0;
  local_148[0x94] = 0;
  local_148[0x95] = 0;
  local_148[0x96] = 0;
  local_148[0x97] = 0;
  local_148[0x98] = 0;
  local_148[0x99] = 0;
  local_148[0x9a] = 0;
  local_148[0x9b] = 0;
  local_148[0x9c] = 0;
  local_148[0x9d] = 0;
  local_148[0x9e] = 0;
  local_148[0x9f] = 0;
  local_148[0x80] = 0;
  local_148[0x81] = 0;
  local_148[0x82] = 0;
  local_148[0x83] = 0;
  local_148[0x84] = 0;
  local_148[0x85] = 0;
  local_148[0x86] = 0;
  local_148[0x87] = 0;
  local_148[0x88] = 0;
  local_148[0x89] = 0;
  local_148[0x8a] = 0;
  local_148[0x8b] = 0;
  local_148[0x8c] = 0;
  local_148[0x8d] = 0;
  local_148[0x8e] = 0;
  local_148[0x8f] = 0;
  local_148[0x70] = 0;
  local_148[0x71] = 0;
  local_148[0x72] = 0;
  local_148[0x73] = 0;
  local_148[0x74] = 0;
  local_148[0x75] = 0;
  local_148[0x76] = 0;
  local_148[0x77] = 0;
  local_148[0x78] = 0;
  local_148[0x79] = 0;
  local_148[0x7a] = 0;
  local_148[0x7b] = 0;
  local_148[0x7c] = 0;
  local_148[0x7d] = 0;
  local_148[0x7e] = 0;
  local_148[0x7f] = 0;
  local_148[0x60] = 0;
  local_148[0x61] = 0;
  local_148[0x62] = 0;
  local_148[99] = 0;
  local_148[100] = 0;
  local_148[0x65] = 0;
  local_148[0x66] = 0;
  local_148[0x67] = 0;
  local_148[0x68] = 0;
  local_148[0x69] = 0;
  local_148[0x6a] = 0;
  local_148[0x6b] = 0;
  local_148[0x6c] = 0;
  local_148[0x6d] = 0;
  local_148[0x6e] = 0;
  local_148[0x6f] = 0;
  local_148[0x50] = 0;
  local_148[0x51] = 0;
  local_148[0x52] = 0;
  local_148[0x53] = 0;
  local_148[0x54] = 0;
  local_148[0x55] = 0;
  local_148[0x56] = 0;
  local_148[0x57] = 0;
  local_148[0x58] = 0;
  local_148[0x59] = 0;
  local_148[0x5a] = 0;
  local_148[0x5b] = 0;
  local_148[0x5c] = 0;
  local_148[0x5d] = 0;
  local_148[0x5e] = 0;
  local_148[0x5f] = 0;
  local_148[0x40] = 0;
  local_148[0x41] = 0;
  local_148[0x42] = 0;
  local_148[0x43] = 0;
  local_148[0x44] = 0;
  local_148[0x45] = 0;
  local_148[0x46] = 0;
  local_148[0x47] = 0;
  local_148[0x48] = 0;
  local_148[0x49] = 0;
  local_148[0x4a] = 0;
  local_148[0x4b] = 0;
  local_148[0x4c] = 0;
  local_148[0x4d] = 0;
  local_148[0x4e] = 0;
  local_148[0x4f] = 0;
  local_148[0x30] = 0;
  local_148[0x31] = 0;
  local_148[0x32] = 0;
  local_148[0x33] = 0;
  local_148[0x34] = 0;
  local_148[0x35] = 0;
  local_148[0x36] = 0;
  local_148[0x37] = 0;
  local_148[0x38] = 0;
  local_148[0x39] = 0;
  local_148[0x3a] = 0;
  local_148[0x3b] = 0;
  local_148[0x3c] = 0;
  local_148[0x3d] = 0;
  local_148[0x3e] = 0;
  local_148[0x3f] = 0;
  local_148[0x20] = 0;
  local_148[0x21] = 0;
  local_148[0x22] = 0;
  local_148[0x23] = 0;
  local_148[0x24] = 0;
  local_148[0x25] = 0;
  local_148[0x26] = 0;
  local_148[0x27] = 0;
  local_148[0x28] = 0;
  local_148[0x29] = 0;
  local_148[0x2a] = 0;
  local_148[0x2b] = 0;
  local_148[0x2c] = 0;
  local_148[0x2d] = 0;
  local_148[0x2e] = 0;
  local_148[0x2f] = 0;
  local_148[0x10] = 0;
  local_148[0x11] = 0;
  local_148[0x12] = 0;
  local_148[0x13] = 0;
  local_148[0x14] = 0;
  local_148[0x15] = 0;
  local_148[0x16] = 0;
  local_148[0x17] = 0;
  local_148[0x18] = 0;
  local_148[0x19] = 0;
  local_148[0x1a] = 0;
  local_148[0x1b] = 0;
  local_148[0x1c] = 0;
  local_148[0x1d] = 0;
  local_148[0x1e] = 0;
  local_148[0x1f] = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_148[4] = 0;
  local_148[5] = 0;
  local_148[6] = 0;
  local_148[7] = 0;
  local_148[8] = 0;
  local_148[9] = 0;
  local_148[10] = 0;
  local_148[0xb] = 0;
  local_148[0xc] = 0;
  local_148[0xd] = 0;
  local_148[0xe] = 0;
  local_148[0xf] = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  local_240 = 0;
  plVar5 = (long *)PDE_DATA(*(undefined8 *)(param_1 + 0x20));
  if ((int)param_3 < 1) {
    _printk("<3>[FTS_TS/E]%s:apk proc count(%d) fail\n","fts_debug_write",param_3);
    lVar9 = -0x16;
    goto LAB_00116590;
  }
  lVar9 = (long)(int)param_3;
  if (param_3 < 0x101) {
    pbVar6 = local_148;
  }
  else {
    pbVar6 = (byte *)__kmalloc(lVar9,0xdc0);
    if (pbVar6 == (byte *)0x0) {
      _printk("<3>[FTS_TS/E]%s:apk proc wirte buf zalloc fail\n","fts_debug_write");
      lVar9 = -0xc;
      goto LAB_00116590;
    }
  }
  __check_object_size(pbVar6,lVar9,0);
  lVar9 = _copy_from_user(pbVar6,param_2,lVar9);
  if (lVar9 == 0) {
    bVar1 = *pbVar6;
    uVar4 = param_3 - 1;
    __n = (ulong)uVar4;
    *(byte *)(plVar5 + 0x49) = bVar1;
    if (uVar4 == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = param_3;
      switch(bVar1) {
      case 1:
        *(byte *)((long)plVar5 + 0x24a) = pbVar6[1];
        break;
      case 2:
        uVar4 = fts_write_reg(pbVar6[1],pbVar6[2]);
        if ((int)uVar4 < 0) {
          puVar7 = "<3>[FTS_TS/E]%s:PROC_WRITE_REGISTER write error\n";
LAB_001166d4:
          _printk(puVar7,"fts_debug_write");
          uVar8 = uVar4;
        }
        break;
      case 6:
        uVar4 = fts_write(pbVar6 + 1,__n);
        if ((int)uVar4 < 0) {
          puVar7 = "<3>[FTS_TS/E]%s:PROC_WRITE_DATA write error\n";
          goto LAB_001166d4;
        }
        break;
      case 7:
        if (uVar4 < 0x10) {
          memcpy((void *)((long)plVar5 + 0x24a),pbVar6 + 1,__n);
          *(char *)((long)plVar5 + 0x249) = (char)uVar4;
          uVar4 = fts_write(pbVar6 + 1,__n);
          if ((int)uVar4 < 0) {
            puVar7 = "<3>[FTS_TS/E]%s:PROC_READ_DATA write error\n";
            goto LAB_001166d4;
          }
        }
        else {
          _printk("<3>[FTS_TS/E]%s:cmd(PROC_READ_DATA) length(%d) fail\n","fts_debug_write",uVar4);
          uVar8 = 0;
        }
        break;
      case 8:
        if (pbVar6[1] == 0) {
          fts_esdcheck_switch(plVar5,1);
        }
        else {
          fts_esdcheck_switch(plVar5,0);
        }
        break;
      case 10:
        _printk("<6>[FTS_TS/I]%s:Original i2c addr 0x%x\n","fts_debug_write",(ulong)*(ushort *)(*plVar5 + 2) << 1);
        if (*(ushort *)(*plVar5 + 2) != (ushort)pbVar6[1]) {
          *(ushort *)(*plVar5 + 2) = (ushort)pbVar6[1];
          _printk("<6>[FTS_TS/I]%s:Change i2c addr 0x%x to 0x%x\n","fts_debug_write",(ulong)*(ushort *)(*plVar5 + 2) << 1,
                  (ulong)pbVar6[1] << 1);
        }
        break;
      case 0xb:
        if (param_3 < 0x100) {
          snprintf((char *)&local_248,0x100,"%s",pbVar6 + 1);
          if (0xff < param_3 - 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x116880);
            (*pcVar3)();
          }
          *(undefined1 *)((long)&local_248 + (ulong)(param_3 - 1)) = 0;
          if (local_248 == 0x72645f6c61636f66 && (int)local_240 == 0x72657669) {
            _printk("<6>[FTS_TS/I]%s:APK execute HW Reset\n","fts_debug_write");
            fts_reset_proc(0);
          }
        }
        break;
      case 0xd:
        if (pbVar6[1] == 0) {
          *(undefined4 *)(plVar5 + 0x5f) = 1;
        }
        else {
          *(undefined4 *)(plVar5 + 0x5f) = 0;
        }
        break;
      case 0x14:
        if (pbVar6[1] == 0) {
          fts_irq_disable();
        }
        else {
          fts_irq_enable();
        }
      }
    }
  }
  else {
    _printk("<3>[FTS_TS/E]%s:[APK]: copy from user error!!\n","fts_debug_write");
    uVar8 = 0xfffffff2;
  }
  if ((0x100 < param_3) && (pbVar6 != (byte *)0x0)) {
    kfree(pbVar6);
  }
  lVar9 = (long)(int)uVar8;
LAB_00116590:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar9);
  }
  return;
}



/* ---- _copy_to_user @ 00116880 ---- */

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



/* ---- _copy_from_user @ 001169f4 ---- */

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



/* ---- fts_ta_open.846ca4183596b142ab693d00ccc31166 @ 00116ba8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fts_ta_open_846ca4183596b142ab693d00ccc31166(void)

{
  long lVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = PDE_DATA();
  if (*(char *)(lVar1 + 0x328) != '\0') {
    _printk("<6>[FTS_TS/I]%s:fts_ta open\n","fts_ta_open");
    lVar2 = kmem_cache_alloc_trace(_init_lct_tp_gesture,0xdc0,0x1000);
    *(long *)(lVar1 + 0x488) = lVar2;
    if (lVar2 == 0) {
      _printk("<3>[FTS_TS/E]%s:kzalloc for ta_buf fails\n","fts_ta_open");
      return 0xfffffff4;
    }
  }
  return 0;
}



/* ---- fts_ta_read.846ca4183596b142ab693d00ccc31166 @ 00116c30 ---- */

void fts_ta_read_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 uVar4;
  undefined8 unaff_x30;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = PDE_DATA(*(undefined8 *)(param_1 + 0x20));
  if ((*(char *)(lVar2 + 0x328) == '\0') || (*(long *)(lVar2 + 0x488) == 0)) {
    _printk("<3>[FTS_TS/E]%s:touch_analysis is disabled, or ta_buf is NULL\n","fts_ta_read");
    lVar2 = -0x16;
  }
  else {
    if ((*(byte *)(param_1 + 0x41) >> 3 & 1) == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      *(undefined4 *)(lVar2 + 0x47c) = 1;
      local_60 = 0;
      init_wait_entry(&local_60,0);
      while( true ) {
        lVar3 = prepare_to_wait_event(lVar2 + 0x228,&local_60,1);
        if (*(int *)(lVar2 + 0x47c) == 0) break;
        if (lVar3 != 0) goto LAB_00116cdc;
        schedule();
      }
      finish_wait(lVar2 + 0x228,&local_60);
    }
LAB_00116cdc:
    uVar1 = *(uint *)(lVar2 + 0x480);
    if (param_3 <= *(uint *)(lVar2 + 0x480)) {
      uVar1 = param_3;
    }
    if (0 < (int)uVar1) {
      uVar4 = *(undefined8 *)(lVar2 + 0x488);
      __check_object_size(uVar4,uVar1,1);
      lVar2 = _copy_to_user(param_2,uVar4,uVar1);
      if (lVar2 != 0) {
        _printk("<3>[FTS_TS/E]%s:copy to user error\n","fts_ta_read");
        lVar2 = -0xe;
        goto LAB_00116d1c;
      }
    }
    lVar2 = (long)(int)uVar1;
  }
LAB_00116d1c:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}



/* ---- fts_ta_release.846ca4183596b142ab693d00ccc31166 @ 00116d88 ---- */

undefined8 fts_ta_release_846ca4183596b142ab693d00ccc31166(void)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = PDE_DATA();
  if (*(char *)(lVar1 + 0x328) != '\0') {
    _printk("<6>[FTS_TS/I]%s:fts_ta close\n","fts_ta_release");
    *(undefined4 *)(lVar1 + 0x47c) = 0;
    if (*(long *)(lVar1 + 0x488) != 0) {
      kfree();
      *(undefined8 *)(lVar1 + 0x488) = 0;
    }
  }
  return 0;
}



/* ---- fts_tpfwver_show.846ca4183596b142ab693d00ccc31166 @ 00116df0 ---- */

long fts_tpfwver_show_846ca4183596b142ab693d00ccc31166
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40[0] = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar1);
  local_3c[0] = 0xa6;
  iVar2 = fts_read(local_3c,1,local_40,1);
  if (-1 < iVar2) {
    if ((local_40[0] != 0xff) && (local_40[0] != 0)) {
      iVar2 = snprintf(param_3,0x1000,"%02x\n",(uint)local_40[0]);
      lVar3 = (long)iVar2;
      goto LAB_00116ea0;
    }
  }
  builtin_strncpy(param_3,"get tp fw version fail!\n",0x19);
  lVar3 = 0x18;
LAB_00116ea0:
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* ---- fts_tpfwver_store.846ca4183596b142ab693d00ccc31166 @ 00116ee0 ---- */

undefined8 fts_tpfwver_store_846ca4183596b142ab693d00ccc31166(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_tprwreg_show.846ca4183596b142ab693d00ccc31166 @ 00116ef0 ---- */

long fts_tprwreg_show_846ca4183596b142ab693d00ccc31166
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *__format;
  ulong uVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar1);
  if (rw_op_2 < 0) {
    iVar3 = 0x11;
    builtin_strncpy(param_3,"Invalid cmd line\n",0x12);
    goto LAB_00117130;
  }
  if (rw_op_2 != 1) {
    if ((rw_op_0 & 1) == 0) {
      iVar2 = snprintf(param_3,0x1000,"Read Reg: [%02X]-[%02X]\n",rw_op_1,rw_op_1 + rw_op_2);
      iVar3 = iVar2 + 8;
      builtin_strncpy(param_3 + iVar2,"Result: ",9);
      if (rw_op_4 == 0) {
        if (rw_op_5 != (byte *)0x0) {
          if (0 < rw_op_2) {
            iVar2 = snprintf(param_3 + iVar3,0x1000,"%02X ",(uint)*rw_op_5);
            iVar3 = iVar2 + iVar3;
            if (1 < rw_op_2) {
              lVar5 = 1;
              do {
                iVar2 = snprintf(param_3 + iVar3,0x1000,"%02X ",(uint)rw_op_5[lVar5]);
                iVar3 = iVar2 + iVar3;
                lVar5 = lVar5 + 1;
              } while (lVar5 < rw_op_2);
            }
          }
          (param_3 + iVar3)[0] = '\n';
          (param_3 + iVar3)[1] = '\0';
          iVar3 = iVar3 + 1;
        }
      }
      else {
        iVar2 = snprintf(param_3 + iVar3,0x1000,"failed, ret: %d\n",rw_op_4);
        iVar3 = iVar2 + iVar3;
      }
    }
    else {
      iVar3 = snprintf(param_3,0x1000,"Write Reg: [%02X]-[%02X]\n",rw_op_1,(rw_op_1 + rw_op_2) - 1);
      iVar2 = iVar3 + 0xc;
      builtin_strncpy(param_3 + iVar3,"Write Data: ",0xd);
      if (rw_op_5 != (byte *)0x0) {
        if (1 < rw_op_2) {
          iVar3 = snprintf(param_3 + iVar2,0x1000,"%02X ",(uint)rw_op_5[1]);
          iVar2 = iVar3 + iVar2;
          if (2 < rw_op_2) {
            lVar5 = 2;
            do {
              iVar3 = snprintf(param_3 + iVar2,0x1000,"%02X ",(uint)rw_op_5[lVar5]);
              iVar2 = iVar3 + iVar2;
              lVar5 = lVar5 + 1;
            } while (lVar5 < rw_op_2);
          }
        }
        (param_3 + iVar2)[0] = '\n';
        (param_3 + iVar2)[1] = '\0';
        iVar2 = iVar2 + 1;
      }
      if (rw_op_4 == 0) {
        iVar3 = iVar2 + 0x10;
        builtin_strncpy(param_3 + iVar2,"Result: success\n",0x11);
      }
      else {
        iVar3 = snprintf(param_3 + iVar2,0x1000,"Result: failed, ret: %d\n",rw_op_4);
        iVar3 = iVar3 + iVar2;
      }
    }
    goto LAB_00117130;
  }
  uVar4 = (ulong)rw_op_4;
  if ((rw_op_0 & 1) == 0) {
    if (rw_op_4 == 0) {
      __format = "Read %02X: %02X\n";
      goto LAB_0011711c;
    }
    __format = "Read %02X failed, ret: %d\n";
  }
  else if (rw_op_4 == 0) {
    __format = "Write %02X, %02X success\n";
LAB_0011711c:
    uVar4 = (ulong)rw_op_3;
  }
  else {
    __format = "Write %02X failed, ret: %d\n";
  }
  iVar3 = snprintf(param_3,0x1000,__format,(ulong)rw_op_1,uVar4);
LAB_00117130:
  mutex_unlock(lVar1);
  return (long)iVar3;
}



/* ---- fts_tprwreg_store.846ca4183596b142ab693d00ccc31166 @ 001171e4 ---- */

long fts_tprwreg_store_846ca4183596b142ab693d00ccc31166
               (long param_1,undefined8 param_2,byte *param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  char cVar19;
  char cVar20;
  undefined *puVar21;
  char *pcVar22;
  ulong uVar23;
  ulong uVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  char cVar33;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_74 [4];
  byte local_70 [4];
  undefined1 local_6c [4];
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_68 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar2);
  if (rw_op_5 != (char *)0x0) {
    kfree();
    rw_op_5 = (char *)0x0;
  }
  if (param_4 == 5) {
    rw_op_0 = 1;
    rw_op_2 = 1;
    bVar18 = param_3[1];
    if (bVar18 - 0x30 < 10) {
      iVar29 = -0x30;
LAB_00117364:
      bVar7 = *param_3;
      if (bVar7 - 0x30 < 10) {
        iVar31 = -0x30;
      }
      else if (bVar7 - 0x61 < 0x1a) {
        iVar31 = -0x57;
      }
      else {
        if (0x19 < bVar7 - 0x41) goto LAB_00117460;
        iVar31 = -0x37;
      }
      rw_op_1 = iVar29 + (uint)bVar18 + (iVar31 + (uint)bVar7) * 0x10;
    }
    else {
      if (bVar18 - 0x61 < 0x1a) {
        iVar29 = -0x57;
        goto LAB_00117364;
      }
      if (bVar18 - 0x41 < 0x1a) {
        iVar29 = -0x37;
        goto LAB_00117364;
      }
LAB_00117460:
      rw_op_1 = 0xffffffea;
    }
    bVar18 = param_3[3];
    if (bVar18 - 0x30 < 10) {
      iVar29 = -0x30;
LAB_001174a8:
      bVar7 = param_3[2];
      if (bVar7 - 0x30 < 10) {
        iVar31 = -0x30;
      }
      else if (bVar7 - 0x61 < 0x1a) {
        iVar31 = -0x57;
      }
      else {
        if (0x19 < bVar7 - 0x41) goto LAB_001174f4;
        iVar31 = -0x37;
      }
      rw_op_3 = iVar29 + (uint)bVar18 + (iVar31 + (uint)bVar7) * 0x10;
    }
    else {
      if (bVar18 - 0x61 < 0x1a) {
        iVar29 = -0x57;
        goto LAB_001174a8;
      }
      if (bVar18 - 0x41 < 0x1a) {
        iVar29 = -0x37;
        goto LAB_001174a8;
      }
LAB_001174f4:
      rw_op_3 = 0xffffffea;
    }
LAB_00117500:
    rw_op_4 = fts_write_reg(rw_op_1,rw_op_3);
LAB_0011750c:
    if (-1 < rw_op_4) {
      _printk("<6>[FTS_TS/I]%s:Write 0x%02x, %d bytes successful\n","fts_tprwreg_store",rw_op_3,rw_op_2);
      rw_op_4 = 0;
      goto LAB_00117818;
    }
    puVar21 = "<3>[FTS_TS/E]%s:Could not write 0x%02x\n";
  }
  else {
    if (param_4 != 3) {
      if ((long)(param_4 - 1U) < 5) {
        _printk("<3>[FTS_TS/E]%s:Invalid cmd buffer\n","fts_tprwreg_store");
        param_4 = -0x16;
        goto LAB_00117818;
      }
      bVar18 = param_3[2];
      if (bVar18 - 0x30 < 10) {
        iVar29 = 0xd0;
LAB_00117574:
        bVar7 = param_3[1];
        if (bVar7 - 0x30 < 10) {
          iVar31 = 0xd0;
        }
        else if (bVar7 - 0x61 < 0x1a) {
          iVar31 = 0xa9;
        }
        else {
          if (0x19 < bVar7 - 0x41) goto LAB_001175c0;
          iVar31 = 0xc9;
        }
        uVar32 = iVar29 + (uint)bVar18 + (iVar31 + (uint)bVar7) * 0x10;
      }
      else {
        if (bVar18 - 0x61 < 0x1a) {
          iVar29 = 0xa9;
          goto LAB_00117574;
        }
        if (bVar18 - 0x41 < 0x1a) {
          iVar29 = 0xc9;
          goto LAB_00117574;
        }
LAB_001175c0:
        uVar32 = 0xea;
      }
      rw_op_1 = uVar32 & 0xff;
      pbVar3 = param_3 + 3;
      bVar18 = param_3[4];
      if (bVar18 - 0x30 < 10) {
        iVar29 = -0x30;
LAB_00117610:
        bVar7 = *pbVar3;
        if (bVar7 - 0x30 < 10) {
          iVar31 = -0x30;
        }
        else if (bVar7 - 0x61 < 0x1a) {
          iVar31 = -0x57;
        }
        else {
          if (0x19 < bVar7 - 0x41) goto LAB_0011765c;
          iVar31 = -0x37;
        }
        uVar32 = iVar29 + (uint)bVar18 + (iVar31 + (uint)bVar7) * 0x10;
      }
      else {
        if (bVar18 - 0x61 < 0x1a) {
          iVar29 = -0x57;
          goto LAB_00117610;
        }
        if (bVar18 - 0x41 < 0x1a) {
          iVar29 = -0x37;
          goto LAB_00117610;
        }
LAB_0011765c:
        uVar32 = 0xffffffea;
      }
      if (*param_3 != 0x31) {
        if ((ulong)(long)(int)(uVar32 * 2 + 5) <= param_4 - 1U) {
          rw_op_2 = uVar32 + 1;
          rw_op_0 = 1;
          goto LAB_001176bc;
        }
        _printk("<3>data invalided!\n");
        rw_op_2 = 0xffffffea;
LAB_00117804:
        _printk("<3>[FTS_TS/E]%s:cmd buffer error!\n","fts_tprwreg_store");
        goto LAB_00117818;
      }
      rw_op_0 = 0;
      rw_op_2 = uVar32;
LAB_001176bc:
      bVar18 = *param_3 != 0x31;
      if ((int)rw_op_2 < 1) {
        pcVar22 = (char *)0x0;
      }
      else {
        pcVar22 = (char *)__kmalloc(rw_op_2,0xdc0);
        bVar18 = rw_op_0;
        if (pcVar22 == (char *)0x0) {
          _printk("<3>[FTS_TS/E]%s:allocate memory failed!\n\n","fts_parse_buf");
          rw_op_2 = 0xfffffff4;
          goto LAB_00117804;
        }
        if ((rw_op_0 & 1) != 0) {
          uVar24 = (ulong)rw_op_2;
          *pcVar22 = (char)rw_op_1;
          if (1 < (int)rw_op_2) {
            uVar28 = uVar24 - 1;
            if (uVar28 < 2) {
              uVar30 = 1;
            }
            else {
              uVar30 = 1;
              uVar32 = (uint)(uVar24 - 2);
              if (((uVar32 * 2 < 0x7ffffffe) && (!CARRY4(uVar32,uVar32))) &&
                 (uVar24 - 2 >> 0x20 == 0)) {
                uVar30 = uVar28 | 1;
                iVar29 = 4;
                uVar23 = uVar28 & 0xfffffffffffffffe;
                pcVar11 = pcVar22;
                do {
                  bVar7 = (pbVar3 + iVar29)[1];
                  bVar8 = (pbVar3 + (iVar29 + -2))[1];
                  uVar26 = (uint)bVar7;
                  uVar27 = (uint)bVar8;
                  uVar32 = uVar27 - 0x30;
                  bVar1 = 9 < uVar26 - 0x30;
                  bVar14 = uVar26 - 0x30 < 10;
                  bVar15 = uVar27 - 0x61 < 0x1a;
                  bVar16 = uVar26 - 0x61 < 0x1a;
                  bVar17 = uVar26 - 0x41 < 0x1a;
                  cVar20 = -0x57;
                  if (9 >= uVar32 || !bVar15) {
                    cVar20 = -0x30;
                  }
                  cVar19 = -0x57;
                  if (!bVar1 || !bVar16) {
                    cVar19 = -0x30;
                  }
                  bVar25 = uVar27 - 0x41 < 0x1a & ((uVar32 < 10 || bVar15) ^ 0xffU);
                  cVar6 = -0x37;
                  if (bVar25 == 0) {
                    cVar6 = cVar20;
                  }
                  bVar12 = !bVar14;
                  bVar13 = !bVar16;
                  bVar25 = bVar25 | (9 < uVar32 && bVar15);
                  cVar20 = -0x37;
                  if (!bVar17 || (!bVar12 || !bVar13)) {
                    cVar20 = cVar19;
                  }
                  bVar10 = bVar25 | uVar32 < 10;
                  if (bVar10 == 1) {
                    bVar25 = pbVar3[iVar29 + -2];
                  }
                  bVar9 = bVar14;
                  if ((bVar17 && (bVar12 && bVar13) || bVar1 && bVar16) || bVar14) {
                    bVar9 = pbVar3[iVar29];
                  }
                  bVar4 = bVar9 - 0x30;
                  bVar5 = bVar10 & 9 < (byte)(bVar25 - 0x30);
                  bVar10 = bVar10 & (byte)(bVar25 - 0x30) < 10;
                  cVar19 = '\0';
                  if (bVar10 == 0) {
                    cVar19 = '\t';
                  }
                  cVar33 = '\0';
                  if (((!bVar17 || (!bVar12 || !bVar13)) && (!bVar1 || !bVar16)) && !bVar14 ||
                      9 < bVar4) {
                    cVar33 = '\t';
                  }
                  cVar19 = cVar6 + bVar8 + (cVar19 + bVar25) * '\x10';
                  cVar20 = cVar20 + bVar7 + (cVar33 + bVar9) * '\x10';
                  if (((bVar5 & 0x19 < (byte)(bVar25 + 0x9f) & (byte)(bVar25 + 0xbf) < 0x1a) == 0 &&
                      (bVar5 & (byte)(bVar25 + 0x9f) < 0x1a) == 0) && bVar10 == 0) {
                    cVar19 = -0x16;
                  }
                  iVar29 = iVar29 + 4;
                  if (((((((!bVar17 || (!bVar12 || !bVar13)) && (!bVar1 || !bVar16)) && !bVar14 ||
                         bVar4 < 10) || (byte)(bVar9 + 0x9f) < 0x1a) || 0x19 < (byte)(bVar9 + 0xbf))
                      && ((((!bVar17 || (!bVar12 || !bVar13)) && (!bVar1 || !bVar16)) && !bVar14 ||
                          bVar4 < 10) || 0x19 < (byte)(bVar9 + 0x9f))) &&
                      (((!bVar17 || (!bVar12 || !bVar13)) && (!bVar1 || !bVar16)) && !bVar14 ||
                      9 < bVar4)) {
                    cVar20 = -0x16;
                  }
                  uVar23 = uVar23 - 2;
                  pcVar11[1] = cVar19;
                  pcVar11[2] = cVar20;
                  pcVar11 = pcVar11 + 2;
                } while (uVar23 != 0);
                if (uVar28 == (uVar28 & 0xfffffffffffffffe)) goto LAB_001177f4;
              }
            }
            iVar29 = (int)uVar30 << 1;
            do {
              bVar7 = (pbVar3 + iVar29)[1];
              uVar32 = (uint)bVar7;
              if (uVar32 - 0x30 < 10) {
                cVar20 = -0x30;
LAB_001177ac:
                bVar8 = pbVar3[iVar29];
                uVar32 = (uint)bVar8;
                if (uVar32 - 0x30 < 10) {
                  cVar19 = '\0';
                }
                else if (uVar32 - 0x61 < 0x1a) {
                  cVar19 = -0x57;
                }
                else {
                  if (0x19 < uVar32 - 0x41) goto LAB_001177e4;
                  cVar19 = -0x37;
                }
                cVar20 = cVar20 + bVar7 + (cVar19 + bVar8) * '\x10';
              }
              else {
                if (uVar32 - 0x61 < 0x1a) {
                  cVar20 = -0x57;
                  goto LAB_001177ac;
                }
                if (uVar32 - 0x41 < 0x1a) {
                  cVar20 = -0x37;
                  goto LAB_001177ac;
                }
LAB_001177e4:
                cVar20 = -0x16;
              }
              pcVar22[uVar30] = cVar20;
              uVar30 = uVar30 + 1;
              iVar29 = iVar29 + 2;
            } while (uVar24 != uVar30);
          }
        }
LAB_001177f4:
        rw_op_5 = pcVar22;
      }
      if ((int)rw_op_2 < 0) goto LAB_00117804;
      if ((bVar18 & 1) == 0) {
        if (rw_op_2 == 1) goto LAB_001173d0;
        local_74[0] = (undefined1)rw_op_1;
        rw_op_4 = fts_read(local_74,1);
        goto LAB_00117400;
      }
      if (rw_op_2 == 1) goto LAB_00117500;
      rw_op_4 = fts_write(pcVar22,rw_op_2);
      goto LAB_0011750c;
    }
    rw_op_0 = 0;
    rw_op_2 = 1;
    bVar18 = param_3[1];
    if (bVar18 - 0x30 < 10) {
      iVar29 = -0x30;
LAB_00117328:
      bVar7 = *param_3;
      if (bVar7 - 0x30 < 10) {
        iVar31 = -0x30;
      }
      else if (bVar7 - 0x61 < 0x1a) {
        iVar31 = -0x57;
      }
      else {
        if (0x19 < bVar7 - 0x41) goto LAB_001173c4;
        iVar31 = -0x37;
      }
      rw_op_1 = iVar29 + (uint)bVar18 + (iVar31 + (uint)bVar7) * 0x10;
    }
    else {
      if (bVar18 - 0x61 < 0x1a) {
        iVar29 = -0x57;
        goto LAB_00117328;
      }
      if (bVar18 - 0x41 < 0x1a) {
        iVar29 = -0x37;
        goto LAB_00117328;
      }
LAB_001173c4:
      rw_op_1 = 0xffffffea;
    }
LAB_001173d0:
    local_70[0] = 0;
    local_6c[0] = (undefined1)rw_op_1;
    rw_op_4 = fts_read(local_6c,1,local_70,1);
    rw_op_3 = (uint)local_70[0];
LAB_00117400:
    if (-1 < rw_op_4) {
      _printk("<6>[FTS_TS/I]%s:read 0x%02x, %d bytes successful\n","fts_tprwreg_store",rw_op_1,rw_op_2);
      rw_op_4 = 0;
      goto LAB_00117818;
    }
    puVar21 = "<3>[FTS_TS/E]%s:Could not read 0x%02x\n";
  }
  _printk(puVar21,"fts_tprwreg_store",rw_op_1);
LAB_00117818:
  mutex_unlock(lVar2);
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_dumpreg_show.846ca4183596b142ab693d00ccc31166 @ 00117aec ---- */

long fts_dumpreg_show_846ca4183596b142ab693d00ccc31166
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40[0] = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar1);
  local_3c[0] = 0xa5;
  fts_read(local_3c,1,local_40,1);
  iVar2 = snprintf(param_3,0x1000,"Power Mode:0x%02x\n",(uint)local_40[0]);
  local_3c[0] = 0xa6;
  fts_read(local_3c,1,local_40,1);
  iVar3 = snprintf(param_3 + iVar2,0x1000,"FW Ver:0x%02x\n",(uint)local_40[0]);
  local_3c[0] = 0xe4;
  fts_read(local_3c,1,local_40,1);
  iVar4 = snprintf(param_3 + (iVar3 + iVar2),0x1000,"LCD Initcode Ver:0x%02x\n",(uint)local_40[0]);
  iVar4 = iVar4 + iVar3 + iVar2;
  local_3c[0] = 0xb5;
  fts_read(local_3c,1,local_40,1);
  iVar2 = snprintf(param_3 + iVar4,0x1000,"Param Ver:0x%02x\n",(uint)local_40[0]);
  iVar2 = iVar2 + iVar4;
  local_3c[0] = 0xb6;
  fts_read(local_3c,1,local_40,1);
  iVar4 = snprintf(param_3 + iVar2,0x1000,"Param status:0x%02x\n",(uint)local_40[0]);
  iVar4 = iVar4 + iVar2;
  local_3c[0] = 0xa8;
  fts_read(local_3c,1,local_40,1);
  iVar2 = snprintf(param_3 + iVar4,0x1000,"Vendor ID:0x%02x\n",(uint)local_40[0]);
  iVar2 = iVar2 + iVar4;
  local_3c[0] = 0xd0;
  fts_read(local_3c,1,local_40,1);
  iVar4 = snprintf(param_3 + iVar2,0x1000,"Gesture Mode:0x%02x\n",(uint)local_40[0]);
  iVar4 = iVar4 + iVar2;
  local_3c[0] = 0x8b;
  fts_read(local_3c,1,local_40,1);
  iVar2 = snprintf(param_3 + iVar4,0x1000,"charge stat:0x%02x\n",(uint)local_40[0]);
  iVar2 = iVar2 + iVar4;
  local_3c[0] = 0x8f;
  fts_read(local_3c,1,local_40,1);
  iVar4 = snprintf(param_3 + iVar2,0x1000,"INT count:0x%02x\n",(uint)local_40[0]);
  iVar4 = iVar4 + iVar2;
  local_3c[0] = 0x91;
  fts_read(local_3c,1,local_40,1);
  iVar2 = snprintf(param_3 + iVar4,0x1000,"ESD count:0x%02x\n",(uint)local_40[0]);
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)(iVar2 + iVar4);
}



/* ---- fts_dumpreg_store.846ca4183596b142ab693d00ccc31166 @ 00117da4 ---- */

undefined8 fts_dumpreg_store_846ca4183596b142ab693d00ccc31166(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_fwupgradebin_show.846ca4183596b142ab693d00ccc31166 @ 00117db4 ---- */

undefined8 fts_fwupgradebin_show_846ca4183596b142ab693d00ccc31166(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_fwupgradebin_store.846ca4183596b142ab693d00ccc31166 @ 00117dc4 ---- */

ulong fts_fwupgradebin_store_846ca4183596b142ab693d00ccc31166
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  char cStack_b9;
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
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if (param_4 - 0x60 < 0xffffffffffffffa1 || param_4 == 1) {
    _printk("<3>[FTS_TS/E]%s:fw bin name's length(%d) fail\n","fts_fwupgradebin_store",param_4 & 0xffffffff);
    param_4 = 0xffffffffffffffea;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    snprintf((char *)&local_b8,0x80,"%s",param_3);
    (&cStack_b9)[param_4] = '\0';
    _printk("<6>[FTS_TS/I]%s:upgrade with bin file through sysfs node\n","fts_fwupgradebin_store");
    lVar1 = lVar1 + 0x208;
    mutex_lock(lVar1);
    fts_upgrade_bin(&local_b8,0);
    mutex_unlock(lVar1);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_fwforceupg_show.846ca4183596b142ab693d00ccc31166 @ 00117ed4 ---- */

undefined8 fts_fwforceupg_show_846ca4183596b142ab693d00ccc31166(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_fwforceupg_store.846ca4183596b142ab693d00ccc31166 @ 00117ee4 ---- */

ulong fts_fwforceupg_store_846ca4183596b142ab693d00ccc31166
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *in_x18;
  long lVar1;
  undefined8 unaff_x30;
  char cStack_b9;
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
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if (param_4 - 0x60 < 0xffffffffffffffa1 || param_4 == 1) {
    _printk("<3>[FTS_TS/E]%s:fw bin name's length(%d) fail\n","fts_fwforceupg_store",param_4 & 0xffffffff);
    param_4 = 0xffffffffffffffea;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    snprintf((char *)&local_b8,0x80,"%s",param_3);
    (&cStack_b9)[param_4] = '\0';
    _printk("<6>[FTS_TS/I]%s:force upgrade through sysfs node\n","fts_fwforceupg_store");
    lVar1 = lVar1 + 0x208;
    mutex_lock(lVar1);
    fts_upgrade_bin(&local_b8,1);
    mutex_unlock(lVar1);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_driverinfo_show.846ca4183596b142ab693d00ccc31166 @ 00117ff4 ---- */

long fts_driverinfo_show_846ca4183596b142ab693d00ccc31166
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *in_x18;
  long *plVar5;
  long lVar6;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar5 = *(long **)(param_1 + 0x98);
  lVar4 = plVar5[3];
  lVar6 = plVar5[5];
  mutex_lock(lVar4 + 0x208);
  iVar1 = snprintf(param_3,0x1000,"Driver Ver:%s\n","Focaltech V3.4 20211214");
  iVar2 = snprintf(param_3 + iVar1,0x1000,"Resolution:(%d,%d)~(%d,%d)\n",*(int *)(lVar6 + 0x58),
                   *(int *)(lVar6 + 0x5c),*(int *)(lVar6 + 0x50),*(int *)(lVar6 + 0x54));
  iVar3 = snprintf(param_3 + (iVar2 + iVar1),0x1000,"Max Touchs:%d\n",*(int *)(lVar6 + 0x60));
  iVar3 = iVar3 + iVar2 + iVar1;
  iVar1 = snprintf(param_3 + iVar3,0x1000,"reset gpio:%d,int gpio:%d,irq:%d\n",
                   *(int *)(lVar6 + 0x10),*(int *)(lVar6 + 8),(int)plVar5[0x5e]);
  iVar1 = iVar1 + iVar3;
  iVar3 = snprintf(param_3 + iVar1,0x1000,"IC ID:0x%02x%02x\n",(uint)*(byte *)((long)plVar5 + 0x34),
                   (uint)*(byte *)((long)plVar5 + 0x35));
  iVar3 = iVar3 + iVar1;
  if ((int)plVar5[0x94] == 1) {
    iVar1 = snprintf(param_3 + iVar3,0x1000,"BUS:%s,addr:0x%x\n","I2C",
                     (uint)*(ushort *)(*plVar5 + 2));
  }
  else {
    iVar1 = snprintf(param_3 + iVar3,0x1000,"BUS:%s,mode:%d,max_freq:%d\n","SPI",
                     *(int *)(plVar5[1] + 0x3a8),*(int *)(plVar5[1] + 0x3a0));
  }
  mutex_unlock(lVar4 + 0x208);
  return (long)(iVar1 + iVar3);
}



/* ---- fts_driverinfo_store.846ca4183596b142ab693d00ccc31166 @ 00118150 ---- */

undefined8 fts_driverinfo_store_846ca4183596b142ab693d00ccc31166(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_hw_reset_show.846ca4183596b142ab693d00ccc31166 @ 00118160 ---- */

undefined8
fts_hw_reset_show_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar1);
  fts_reset_proc(0);
  builtin_strncpy(param_3,"hw reset executed\n",0x13);
  mutex_unlock(lVar1);
  return 0x12;
}



/* ---- fts_hw_reset_store.846ca4183596b142ab693d00ccc31166 @ 001181d0 ---- */

undefined8 fts_hw_reset_store_846ca4183596b142ab693d00ccc31166(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_irq_show.846ca4183596b142ab693d00ccc31166 @ 001181e0 ---- */

long fts_irq_show_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = irq_to_desc(*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x2f0));
  iVar1 = snprintf(param_3,0x1000,"irq_depth:%d\n",*(int *)(lVar2 + 0x88));
  return (long)iVar1;
}



/* ---- fts_irq_store.846ca4183596b142ab693d00ccc31166 @ 00118234 ---- */

undefined8
fts_irq_store_846ca4183596b142ab693d00ccc31166
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar1);
  if (*param_3 == '0') {
    _printk("<6>[FTS_TS/I]%s:disable irq\n","fts_irq_store");
    fts_irq_disable();
  }
  else if (*param_3 == '1') {
    _printk("<6>[FTS_TS/I]%s:enable irq\n","fts_irq_store");
    fts_irq_enable();
  }
  mutex_unlock(lVar1);
  return param_4;
}



/* ---- fts_bootmode_show.846ca4183596b142ab693d00ccc31166 @ 001182d8 ---- */

undefined8
fts_bootmode_show_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  if (*(int *)(lVar3 + 0x2f8) == 1) {
    uVar4 = 0x11;
    param_3[0x10] = '\n';
    param_3[0x11] = '\0';
    uVar2._0_1_ = ' ';
    uVar2._1_1_ = 'f';
    uVar2._2_1_ = 'w';
    uVar2._3_1_ = ' ';
    uVar2._4_1_ = 'm';
    uVar2._5_1_ = 'o';
    uVar2._6_1_ = 'd';
    uVar2._7_1_ = 'e';
  }
  else {
    uVar4 = 0x13;
    uVar2._0_1_ = ' ';
    uVar2._1_1_ = 'b';
    uVar2._2_1_ = 'o';
    uVar2._3_1_ = 'o';
    uVar2._4_1_ = 't';
    uVar2._5_1_ = ' ';
    uVar2._6_1_ = 'm';
    uVar2._7_1_ = 'o';
    builtin_strncpy(param_3 + 0x10,"de\n",4);
  }
  param_3[0] = 't';
  param_3[1] = 'p';
  param_3[2] = ' ';
  param_3[3] = 'i';
  param_3[4] = 's';
  param_3[5] = ' ';
  param_3[6] = 'i';
  param_3[7] = 'n';
  *(undefined8 *)(param_3 + 8) = uVar2;
  mutex_unlock(lVar1);
  return uVar4;
}



/* ---- fts_bootmode_store.846ca4183596b142ab693d00ccc31166 @ 00118374 ---- */

undefined8
fts_bootmode_store_846ca4183596b142ab693d00ccc31166
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *in_x18;
  undefined4 uVar3;
  long lVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar4 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar4 + 0x18) + 0x208;
  mutex_lock(lVar1);
  if (*param_3 == '1') {
    uVar3 = 0;
    puVar2 = "<6>[FTS_TS/I]%s:[EX-FUN]set to boot mode\n";
  }
  else {
    if (*param_3 != '0') goto LAB_001183bc;
    uVar3 = 1;
    puVar2 = "<6>[FTS_TS/I]%s:[EX-FUN]set to fw mode\n";
  }
  _printk(puVar2,"fts_bootmode_store");
  *(undefined4 *)(lVar4 + 0x2f8) = uVar3;
LAB_001183bc:
  mutex_unlock(lVar1);
  return param_4;
}



/* ---- fts_tpbuf_show.846ca4183596b142ab693d00ccc31166 @ 00118410 ---- */

long fts_tpbuf_show_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  lVar5 = 0;
  iVar4 = 0x14;
  builtin_strncpy(param_3,"touch point buffer:\n",0x15);
  do {
    iVar2 = snprintf(param_3 + iVar4,0x1000,"%02x ",
                     (uint)*(byte *)(*(long *)(lVar3 + 0x468) + lVar5));
    lVar5 = lVar5 + 1;
    iVar4 = iVar2 + iVar4;
  } while (lVar5 != 0x3e);
  (param_3 + iVar4)[0] = '\n';
  (param_3 + iVar4)[1] = '\0';
  mutex_unlock(lVar1);
  return (long)(iVar4 + 1);
}



/* ---- fts_tpbuf_store.846ca4183596b142ab693d00ccc31166 @ 001184c8 ---- */

undefined8 fts_tpbuf_store_846ca4183596b142ab693d00ccc31166(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_log_level_show.846ca4183596b142ab693d00ccc31166 @ 001184d8 ---- */

long fts_log_level_show_846ca4183596b142ab693d00ccc31166
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  iVar2 = snprintf(param_3,0x1000,"log level:%d\n",*(int *)(lVar3 + 0x2f4));
  mutex_unlock(lVar1);
  return (long)iVar2;
}



/* ---- fts_log_level_store.846ca4183596b142ab693d00ccc31166 @ 00118548 ---- */

undefined8
fts_log_level_store_846ca4183596b142ab693d00ccc31166
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_3c = 0;
  lVar1 = *(long *)(lVar2 + 0x18) + 0x208;
  mutex_lock(lVar1);
  sscanf(param_3,"%d",&local_3c);
  *(undefined4 *)(lVar2 + 0x2f4) = local_3c;
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_pen_show.846ca4183596b142ab693d00ccc31166 @ 001185ec ---- */

long fts_pen_show_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *param3;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  param3 = "default";
  if (*(char *)(lVar3 + 0x331) != '\0') {
    param3 = "hover";
  }
  iVar2 = snprintf(param_3,0x1000,"pen event:%s\n",param3);
  mutex_unlock(lVar1);
  return (long)iVar2;
}



/* ---- fts_pen_store.846ca4183596b142ab693d00ccc31166 @ 00118674 ---- */

undefined8
fts_pen_store_846ca4183596b142ab693d00ccc31166
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_3c = 0;
  lVar1 = *(long *)(lVar2 + 0x18) + 0x208;
  mutex_lock(lVar1);
  sscanf(param_3,"%d",&local_3c);
  *(char *)(lVar2 + 0x331) = (char)local_3c;
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_touchsize_show.846ca4183596b142ab693d00ccc31166 @ 00118718 ---- */

long fts_touchsize_show_846ca4183596b142ab693d00ccc31166
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  iVar2 = snprintf(param_3,0x1000,"touch size:%d\n",*(int *)(lVar3 + 0x458));
  mutex_unlock(lVar1);
  return (long)iVar2;
}



/* ---- fts_touchsize_store.846ca4183596b142ab693d00ccc31166 @ 00118788 ---- */

undefined8
fts_touchsize_store_846ca4183596b142ab693d00ccc31166
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_3c = 0;
  lVar1 = *(long *)(lVar2 + 0x18) + 0x208;
  mutex_lock(lVar1);
  sscanf(param_3,"%d",&local_3c);
  if (local_3c - 3U < 0xffd) {
    *(int *)(lVar2 + 0x458) = local_3c;
  }
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_tamode_show.846ca4183596b142ab693d00ccc31166 @ 00118838 ---- */

long fts_tamode_show_846ca4183596b142ab693d00ccc31166(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *param3;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  param3 = "Disable";
  if (*(char *)(lVar3 + 0x328) != '\0') {
    param3 = "Enable";
  }
  iVar2 = snprintf(param_3,0x1000,"touch analysis:%s\n",param3);
  mutex_unlock(lVar1);
  return (long)iVar2;
}



/* ---- fts_tamode_store.846ca4183596b142ab693d00ccc31166 @ 001188c0 ---- */

undefined8
fts_tamode_store_846ca4183596b142ab693d00ccc31166
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_3c = 0;
  lVar1 = *(long *)(lVar2 + 0x18) + 0x208;
  mutex_lock(lVar1);
  sscanf(param_3,"%d",&local_3c);
  *(bool *)(lVar2 + 0x328) = local_3c != 0;
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_ex_mode_recovery @ 0011896c ---- */

undefined8 fts_ex_mode_recovery(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(char *)(param_1 + 0x325) == '\0') || (iVar2 = fts_write_reg(0xc0,1), -1 < iVar2)) {
    cVar1 = *(char *)(param_1 + 0x326);
  }
  else {
    _printk("<3>[FTS_TS/E]%s:MODE_GLOVE switch to %d fail\n","fts_ex_mode_switch",1);
    cVar1 = *(char *)(param_1 + 0x326);
  }
  if ((cVar1 != '\0') && (iVar2 = fts_write_reg(0xc1,1), iVar2 < 0)) {
    _printk("<3>[FTS_TS/E]%s:MODE_COVER switch to %d fail\n","fts_ex_mode_switch",1);
  }
  if ((*(char *)(param_1 + 0x327) != '\0') && (iVar2 = fts_write_reg(0x8b,1), iVar2 < 0)) {
    _printk("<3>[FTS_TS/E]%s:MODE_CHARGER switch to %d fail\n","fts_ex_mode_switch",1);
  }
  return 0;
}



/* ---- lct_fts_set_charger_mode @ 00118a40 ---- */

int lct_fts_set_charger_mode(ulong param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 uVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_1 & 1) == 0) {
    iVar1 = fts_write_reg(0x8b,0);
    if (-1 < iVar1) {
      return iVar1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = fts_write_reg(0x8b,1);
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  _printk("<3>[FTS_TS/E]%s:MODE_CHARGER switch to %d fail\n","fts_ex_mode_switch",uVar2);
  return iVar1;
}



/* ---- fts_ex_mode_init @ 00118ac0 ---- */

int fts_ex_mode_init(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined2 *)(param_1 + 0x325) = 0;
  iVar1 = sysfs_create_group(*(undefined8 *)(param_1 + 0x10),
                             &fts_touch_mode_group_llvm_1106586353771003229);
  iVar2 = 0;
  if (iVar1 < 0) {
    _printk("<3>[FTS_TS/E]%s:create sysfs(ex_mode) fail\n","fts_ex_mode_init");
    sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),
                       &fts_touch_mode_group_llvm_1106586353771003229);
    iVar2 = iVar1;
  }
  return iVar2;
}



/* ---- fts_ex_mode_exit @ 00118b40 ---- */

undefined8 fts_ex_mode_exit(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),&fts_touch_mode_group_llvm_1106586353771003229)
  ;
  return 0;
}



/* ---- fts_glove_mode_show.79295666be4190291f0ed10100b7ec08 @ 00118b74 ---- */

long fts_glove_mode_show_79295666be4190291f0ed10100b7ec08
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *param3;
  int iVar2;
  int iVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar4 = *(long *)(param_1 + 0x98);
  local_40[0] = 0;
  lVar1 = *(long *)(lVar4 + 0x18) + 0x208;
  mutex_lock(lVar1);
  local_3c[0] = 0xc0;
  fts_read(local_3c,1,local_40,1);
  param3 = "Off";
  if (*(char *)(lVar4 + 0x325) != '\0') {
    param3 = "On";
  }
  iVar2 = snprintf(param_3,0x1000,"Glove Mode:%s\n",param3);
  iVar3 = snprintf(param_3 + iVar2,0x1000,"Glove Reg(0xC0):%d\n",(uint)local_40[0]);
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)(iVar3 + iVar2);
}



/* ---- fts_glove_mode_store.79295666be4190291f0ed10100b7ec08 @ 00118c68 ---- */

undefined8
fts_glove_mode_store_79295666be4190291f0ed10100b7ec08
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x98);
  if (*param_3 == '0') {
    if (*(char *)(lVar2 + 0x325) != '\0') {
      iVar1 = fts_write_reg(0xc0,0);
      if (iVar1 < 0) {
        _printk("<3>[FTS_TS/E]%s:MODE_GLOVE switch to %d fail\n","fts_ex_mode_switch",0);
      }
      else {
        *(undefined1 *)(lVar2 + 0x325) = 0;
      }
    }
  }
  else if ((*param_3 == '1') && (*(char *)(lVar2 + 0x325) == '\0')) {
    iVar1 = fts_write_reg(0xc0,1);
    if (iVar1 < 0) {
      _printk("<3>[FTS_TS/E]%s:MODE_GLOVE switch to %d fail\n","fts_ex_mode_switch",1);
    }
    else {
      *(undefined1 *)(lVar2 + 0x325) = 1;
    }
  }
  return param_4;
}



/* ---- fts_cover_mode_show.79295666be4190291f0ed10100b7ec08 @ 00118d30 ---- */

long fts_cover_mode_show_79295666be4190291f0ed10100b7ec08
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *param3;
  int iVar2;
  int iVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar4 = *(long *)(param_1 + 0x98);
  local_40[0] = 0;
  lVar1 = *(long *)(lVar4 + 0x18) + 0x208;
  mutex_lock(lVar1);
  local_3c[0] = 0xc1;
  fts_read(local_3c,1,local_40,1);
  param3 = "Off";
  if (*(char *)(lVar4 + 0x326) != '\0') {
    param3 = "On";
  }
  iVar2 = snprintf(param_3,0x1000,"Cover Mode:%s\n",param3);
  iVar3 = snprintf(param_3 + iVar2,0x1000,"Cover Reg(0xC1):%d\n",(uint)local_40[0]);
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)(iVar3 + iVar2);
}



/* ---- fts_cover_mode_store.79295666be4190291f0ed10100b7ec08 @ 00118e24 ---- */

undefined8
fts_cover_mode_store_79295666be4190291f0ed10100b7ec08
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x98);
  if (*param_3 == '0') {
    if (*(char *)(lVar2 + 0x326) != '\0') {
      iVar1 = fts_write_reg(0xc1,0);
      if (iVar1 < 0) {
        _printk("<3>[FTS_TS/E]%s:MODE_COVER switch to %d fail\n","fts_ex_mode_switch",0);
      }
      else {
        *(undefined1 *)(lVar2 + 0x326) = 0;
      }
    }
  }
  else if ((*param_3 == '1') && (*(char *)(lVar2 + 0x326) == '\0')) {
    iVar1 = fts_write_reg(0xc1,1);
    if (iVar1 < 0) {
      _printk("<3>[FTS_TS/E]%s:MODE_COVER switch to %d fail\n","fts_ex_mode_switch",1);
    }
    else {
      *(undefined1 *)(lVar2 + 0x326) = 1;
    }
  }
  return param_4;
}



/* ---- fts_charger_mode_show.79295666be4190291f0ed10100b7ec08 @ 00118eec ---- */

long fts_charger_mode_show_79295666be4190291f0ed10100b7ec08
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *param3;
  int iVar2;
  int iVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  lVar4 = *(long *)(param_1 + 0x98);
  local_40[0] = 0;
  lVar1 = *(long *)(lVar4 + 0x18) + 0x208;
  mutex_lock(lVar1);
  local_3c[0] = 0x8b;
  fts_read(local_3c,1,local_40,1);
  param3 = "Off";
  if (*(char *)(lVar4 + 0x327) != '\0') {
    param3 = "On";
  }
  iVar2 = snprintf(param_3,0x1000,"Charger Mode:%s\n",param3);
  iVar3 = snprintf(param_3 + iVar2,0x1000,"Charger Reg(0x8B):%d\n",(uint)local_40[0]);
  mutex_unlock(lVar1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)(iVar3 + iVar2);
}



/* ---- fts_charger_mode_store.79295666be4190291f0ed10100b7ec08 @ 00118fe0 ---- */

undefined8
fts_charger_mode_store_79295666be4190291f0ed10100b7ec08
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x98);
  if (*param_3 == '0') {
    if (*(char *)(lVar2 + 0x327) != '\0') {
      iVar1 = fts_write_reg(0x8b,0);
      if (iVar1 < 0) {
        _printk("<3>[FTS_TS/E]%s:MODE_CHARGER switch to %d fail\n","fts_ex_mode_switch",0);
      }
      else {
        *(undefined1 *)(lVar2 + 0x327) = 0;
      }
    }
  }
  else if ((*param_3 == '1') && (*(char *)(lVar2 + 0x327) == '\0')) {
    iVar1 = fts_write_reg(0x8b,1);
    if (iVar1 < 0) {
      _printk("<3>[FTS_TS/E]%s:MODE_CHARGER switch to %d fail\n","fts_ex_mode_switch",1);
    }
    else {
      *(undefined1 *)(lVar2 + 0x327) = 1;
    }
  }
  return param_4;
}



/* ---- fts_gesture_readdata @ 001190a8 ---- */

int fts_gesture_readdata(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x30;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_40 = 0;
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  if ((*(char *)(param_1 + 0x321) == '\0') ||
     ((uVar5 = *(undefined8 *)(param_1 + 0x18), *(char *)(param_1 + 0x32d) == '\0' &&
      (*(char *)(param_1 + 0x32c) == '\0')))) {
    iVar2 = -0x16;
    goto LAB_001192c4;
  }
  if (*(char *)(param_1 + 0x32e) == '\x01') {
    local_58 = *(undefined8 *)(param_2 + 0x3e);
    local_50 = *(undefined8 *)(param_2 + 0x46);
    local_48 = *(undefined8 *)(param_2 + 0x4e);
    local_40 = *(uint *)(param_2 + 0x56);
  }
  else {
    local_58 = 0xd30000;
    iVar2 = fts_read((ulong)&local_58 | 2,1,(ulong)&local_58 | 2,0x1a);
    if (iVar2 < 0) {
      _printk("<3>[FTS_TS/E]%s:read gesture header data fail\n","fts_gesture_readdata");
      goto LAB_001192c4;
    }
  }
  fts_gesture_data._0_1_ = local_58._2_1_;
  fts_gesture_data._1_1_ = local_58._3_1_;
  if (local_58._2_1_ == '&') {
    *(undefined1 *)(param_1 + 0x519) = 1;
  }
  fts_gesture_data._2_2_ = (ushort)local_58._5_1_ | (local_58._4_1_ & 0xf) << 8;
  DAT_001007f8._6_2_ = (ushort)local_58._7_1_ | (local_58._6_1_ & 0xf) << 8;
  fts_gesture_data._4_2_ = (ushort)local_50._1_1_ | ((byte)local_50 & 0xf) << 8;
  DAT_00100800._0_2_ = (ushort)local_50._3_1_ | (local_50._2_1_ & 0xf) << 8;
  fts_gesture_data._6_2_ = (ushort)local_50._5_1_ | (local_50._4_1_ & 0xf) << 8;
  DAT_00100800._2_2_ = (ushort)local_50._7_1_ | (local_50._6_1_ & 0xf) << 8;
  DAT_001007f8._0_2_ = (ushort)local_48._1_1_ | ((byte)local_48 & 0xf) << 8;
  DAT_00100800._4_2_ = (ushort)local_48._3_1_ | (local_48._2_1_ & 0xf) << 8;
  DAT_001007f8._2_2_ = (ushort)local_48._5_1_ | (local_48._4_1_ & 0xf) << 8;
  DAT_00100800._6_2_ = (ushort)local_48._7_1_ | (local_48._6_1_ & 0xf) << 8;
  DAT_001007f8._4_2_ = (ushort)local_40._1_1_ | (ushort)((local_40 & 0xf) << 8);
  DAT_00100808 = (ushort)local_40._3_1_ | (local_40._2_1_ & 0xf) << 8;
  if (local_58._2_1_ == '$') {
    if (*(char *)(fts_data + 0x32f) != '\0') {
      puVar3 = "<6>[FTS_TS/I]%s:Gesture Code=%d\n";
      uVar4 = 0x8f;
      uVar6 = 0x8f;
      goto LAB_00119348;
    }
  }
  else if (local_58._2_1_ == '\'') {
    if (*(char *)(fts_data + 0x32c) == '\0') {
      if ((*(int *)(fts_data + 0x4dc) == 0) || (*(char *)(fts_data + 0x4e0) == '\0'))
      goto LAB_001192c0;
      puVar3 = "<6>[FTS_TS/I]%s:Click Code=%d\n";
    }
    else {
      puVar3 = &UNK_00106084;
    }
    uVar4 = 0x162;
    uVar6 = 0x162;
LAB_00119348:
    _printk(puVar3,"fts_gesture_report",uVar4);
    input_event(uVar5,1,uVar6,1);
    input_event(uVar5,0,0,0);
    input_event(uVar5,1,uVar6,0);
    input_event(uVar5,0,0,0);
  }
LAB_001192c0:
  iVar2 = 0;
LAB_001192c4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- fts_gesture_recovery @ 001193a4 ---- */

void fts_gesture_recovery(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(char *)(param_1 + 0x32d) != '\0') && (*(char *)(param_1 + 0x321) != '\0')) {
    fts_write_reg(0xd1,0xff);
    fts_write_reg(0xd2,0xff);
    fts_write_reg(0xd5,0xff);
    fts_write_reg(0xd6,0xff);
    fts_write_reg(0xd7,0xff);
    fts_write_reg(0xd8,0xff);
    fts_write_reg(0xd0,1);
  }
  return;
}



/* ---- fts_fod_recovery @ 00119428 ---- */

void fts_fod_recovery(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(fts_data + 0x321) != '\0') {
    _printk("<6>[FTS_TS/I]%s:%s, tp is in suspend mode, write 0xD0 to 1\n","fts_fod_recovery","fts_fod_recovery");
    fts_gesture_reg_write(1,1);
  }
  fts_fod_reg_write(2,1);
  return;
}



/* ---- fts_gesture_reg_write @ 0011948c ---- */

undefined8 fts_gesture_reg_write(byte param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *in_x18;
  undefined8 uVar5;
  undefined8 unaff_x30;
  byte local_44 [4];
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_40[0] = 0;
  local_44[0] = 0;
  local_3c[0] = 0xd0;
  fts_read(local_3c,1,local_44,1);
  bVar1 = local_44[0] & (param_1 ^ 0xff);
  local_44[0] = local_44[0] | param_1;
  if ((param_2 & 1) == 0) {
    local_44[0] = bVar1;
  }
  fts_write_reg(0xd0);
  msleep(1);
  local_3c[0] = 0xd0;
  fts_read(local_3c,1,local_40,1);
  if (local_40[0] != local_44[0]) {
    bVar2 = ~param_1;
    local_3c[0] = 0xd0;
    fts_read(local_3c,1,local_44,1);
    bVar1 = local_44[0] & bVar2;
    local_44[0] = local_44[0] | param_1;
    if ((param_2 & 1) == 0) {
      local_44[0] = bVar1;
    }
    fts_write_reg(0xd0);
    msleep(1);
    local_3c[0] = 0xd0;
    fts_read(local_3c,1,local_40,1);
    if (local_40[0] != local_44[0]) {
      local_3c[0] = 0xd0;
      fts_read(local_3c,1,local_44,1);
      bVar1 = local_44[0] & bVar2;
      local_44[0] = local_44[0] | param_1;
      if ((param_2 & 1) == 0) {
        local_44[0] = bVar1;
      }
      fts_write_reg(0xd0);
      msleep(1);
      local_3c[0] = 0xd0;
      fts_read(local_3c,1,local_40,1);
      if (local_40[0] != local_44[0]) {
        local_3c[0] = 0xd0;
        fts_read(local_3c,1,local_44,1);
        bVar1 = local_44[0] & bVar2;
        local_44[0] = local_44[0] | param_1;
        if ((param_2 & 1) == 0) {
          local_44[0] = bVar1;
        }
        fts_write_reg(0xd0);
        msleep(1);
        local_3c[0] = 0xd0;
        fts_read(local_3c,1,local_40,1);
        if (local_40[0] != local_44[0]) {
          local_3c[0] = 0xd0;
          fts_read(local_3c,1,local_44,1);
          bVar2 = local_44[0] & bVar2;
          local_44[0] = local_44[0] | param_1;
          if ((param_2 & 1) == 0) {
            local_44[0] = bVar2;
          }
          fts_write_reg(0xd0);
          msleep(1);
          local_3c[0] = 0xd0;
          fts_read(local_3c,1,local_40,1);
          if (local_40[0] != local_44[0]) {
            uVar5 = 0xfffffffb;
            puVar4 = "<3>[FTS_TS/E]%s:[GESTURE]Write gesture reg failed!\n\n";
            goto LAB_001196e8;
          }
        }
      }
    }
  }
  uVar5 = 0;
  puVar4 = "<6>[FTS_TS/I]%s:[GESTURE]Write gesture reg success!\n\n";
LAB_001196e8:
  _printk(puVar4,"fts_gesture_reg_write");
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* ---- fts_fod_reg_write @ 0011973c ---- */

void fts_fod_reg_write(byte param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_44 [4];
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_40[0] = 0;
  local_44[0] = 0;
  local_3c[0] = 0xcf;
  fts_read(local_3c,1,local_44,1);
  bVar1 = local_44[0] | param_1;
  if ((param_2 & 1) == 0) {
    bVar1 = local_44[0] & (param_1 ^ 0xff);
  }
  bVar4 = local_44[0] == bVar1;
  local_44[0] = bVar1;
  if (bVar4) {
LAB_00119984:
    puVar5 = "<6>[FTS_TS/I]%s:reg 0xCF do not need to be modified, reg_value = %02X\n";
  }
  else {
    fts_write_reg(0xcf);
    msleep(1);
    local_3c[0] = 0xcf;
    fts_read(local_3c,1,local_40,1);
    if (local_40[0] != local_44[0]) {
      bVar2 = ~param_1;
      local_3c[0] = 0xcf;
      fts_read(local_3c,1,local_44,1);
      bVar1 = local_44[0] | param_1;
      if ((param_2 & 1) == 0) {
        bVar1 = local_44[0] & bVar2;
      }
      bVar4 = local_44[0] == bVar1;
      local_44[0] = bVar1;
      if (bVar4) goto LAB_00119984;
      fts_write_reg(0xcf);
      msleep(1);
      local_3c[0] = 0xcf;
      fts_read(local_3c,1,local_40,1);
      if (local_40[0] != local_44[0]) {
        local_3c[0] = 0xcf;
        fts_read(local_3c,1,local_44,1);
        bVar1 = local_44[0] | param_1;
        if ((param_2 & 1) == 0) {
          bVar1 = local_44[0] & bVar2;
        }
        bVar4 = local_44[0] == bVar1;
        local_44[0] = bVar1;
        if (bVar4) goto LAB_00119984;
        fts_write_reg(0xcf);
        msleep(1);
        local_3c[0] = 0xcf;
        fts_read(local_3c,1,local_40,1);
        if (local_40[0] != local_44[0]) {
          local_3c[0] = 0xcf;
          fts_read(local_3c,1,local_44,1);
          bVar1 = local_44[0] | param_1;
          if ((param_2 & 1) == 0) {
            bVar1 = local_44[0] & bVar2;
          }
          bVar4 = local_44[0] == bVar1;
          local_44[0] = bVar1;
          if (bVar4) goto LAB_00119984;
          fts_write_reg(0xcf);
          msleep(1);
          local_3c[0] = 0xcf;
          fts_read(local_3c,1,local_40,1);
          if (local_40[0] != local_44[0]) {
            local_3c[0] = 0xcf;
            fts_read(local_3c,1,local_44,1);
            bVar1 = local_44[0] | param_1;
            if ((param_2 & 1) == 0) {
              bVar1 = local_44[0] & bVar2;
            }
            bVar4 = local_44[0] == bVar1;
            local_44[0] = bVar1;
            if (bVar4) goto LAB_00119984;
            fts_write_reg(0xcf);
            msleep(1);
            local_3c[0] = 0xcf;
            fts_read(local_3c,1,local_40,1);
            if (local_40[0] != local_44[0]) {
              _printk("<3>[FTS_TS/E]%s:[GESTURE]Write fod reg failed!\n\n","fts_fod_reg_write");
              uVar6 = 0xfffffffb;
              goto LAB_001199e0;
            }
          }
        }
      }
    }
    puVar5 = "<6>[FTS_TS/I]%s:[GESTURE]Write fod reg:%d success!\n\n";
  }
  _printk(puVar5,"fts_fod_reg_write");
  uVar6 = 0;
LAB_001199e0:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}



/* ---- fts_gesture_suspend @ 00119a30 ---- */

undefined8 fts_gesture_suspend(long param_1)

{
  long lVar1;
  undefined8 *in_x18;
  int iVar2;
  undefined8 unaff_x30;
  char local_30 [4];
  undefined1 local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30[0] = -1;
  irq_set_irq_wake(*(undefined4 *)(param_1 + 0x2f0),1);
  iVar2 = 5;
  do {
    fts_write_reg(0xd1,0xff);
    fts_write_reg(0xd2,0xff);
    fts_write_reg(0xd5,0xff);
    fts_write_reg(0xd6,0xff);
    fts_write_reg(0xd7,0xff);
    fts_write_reg(0xd8,0xff);
    fts_write_reg(0xd0,1);
    msleep(1);
    local_2c[0] = 0xd0;
    fts_read(local_2c,1,local_30,1);
    if (local_30[0] == '\x01') {
      _printk("<6>[FTS_TS/I]%s:Enter into gesture(suspend) successfully\n","fts_gesture_suspend");
      goto LAB_00119b24;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _printk("<3>[FTS_TS/E]%s:make IC enter into gesture(suspend) fail,state:%x\n","fts_gesture_suspend");
LAB_00119b24:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- fts_gesture_resume @ 00119b58 ---- */

undefined8 fts_gesture_resume(long param_1)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  char local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_40[0] = -1;
  irq_set_irq_wake(*(undefined4 *)(param_1 + 0x2f0),0);
  fts_write_reg(0xd0,0);
  msleep(1);
  local_3c[0] = 0xd0;
  fts_read(local_3c,1,local_40,1);
  if (local_40[0] != '\0') {
    fts_write_reg(0xd0,0);
    msleep(1);
    local_38[0] = 0xd0;
    fts_read(local_38,1,local_40,1);
    if (local_40[0] != '\0') {
      fts_write_reg(0xd0,0);
      msleep(1);
      local_34[0] = 0xd0;
      fts_read(local_34,1,local_40,1);
      if (local_40[0] != '\0') {
        fts_write_reg(0xd0,0);
        msleep(1);
        local_30[0] = 0xd0;
        fts_read(local_30,1,local_40,1);
        if (local_40[0] != '\0') {
          fts_write_reg(0xd0,0);
          msleep(1);
          local_2c[0] = 0xd0;
          fts_read(local_2c,1,local_40,1);
          if (local_40[0] != '\0') {
            _printk("<3>[FTS_TS/E]%s:make IC exit gesture(resume) fail,state:%x\n","fts_gesture_resume");
            goto LAB_00119cb4;
          }
        }
      }
    }
  }
  _printk("<6>[FTS_TS/I]%s:resume from gesture successfully\n","fts_gesture_resume");
LAB_00119cb4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* ---- fts_gesture_switch @ 00119d00 ---- */

undefined8 fts_gesture_switch(undefined8 param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>[FTS_TS/I]%s:Enter. type = %u, code = %u, value = %d\n","fts_gesture_switch",param_2,param_3,param_4);
  if ((param_2 == 0) && (param_3 == 1)) {
    if (param_4 == 4) {
      uVar1 = 0;
    }
    else {
      if (param_4 != 5) goto LAB_00119d70;
      uVar1 = 1;
    }
    lct_fts_tp_gesture_callback(uVar1);
  }
LAB_00119d70:
  _printk("<6>[FTS_TS/I]%s:Exit\n","fts_gesture_switch");
  return 0;
}



/* ---- fts_gesture_init @ 00119da0 ---- */

undefined8 fts_gesture_init(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x18);
  input_set_capability(lVar2,1,0x162);
  input_set_capability(lVar2,1,0x8e);
  input_set_capability(lVar2,1,0x74);
  input_set_capability(lVar2,1,0x8f);
  input_set_capability(lVar2,1,0x67);
  input_set_capability(lVar2,1,0x6c);
  input_set_capability(lVar2,1,0x69);
  input_set_capability(lVar2,1,0x6a);
  input_set_capability(lVar2,1,0x18);
  input_set_capability(lVar2,1,0x12);
  input_set_capability(lVar2,1,0x32);
  input_set_capability(lVar2,1,0x26);
  input_set_capability(lVar2,1,0x11);
  input_set_capability(lVar2,1,0x1f);
  input_set_capability(lVar2,1,0x2f);
  input_set_capability(lVar2,1,0x2c);
  input_set_capability(lVar2,1,0x2e);
  *(ulong *)(lVar2 + 0x58) = *(ulong *)(lVar2 + 0x58) | 0x400000000;
  *(ulong *)(lVar2 + 0x38) = *(ulong *)(lVar2 + 0x38) | 0x168000000000;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 0xc000;
  *(ulong *)(lVar2 + 0x30) = *(ulong *)(lVar2 + 0x30) | 0x4d04081060000;
  *(code **)(lVar2 + 0x1f0) = fts_gesture_switch_cfi_jt;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = sysfs_create_group(uVar3,&fts_gesture_group_llvm_11375988175110845411);
  if (iVar1 != 0) {
    _printk("<3>[FTS_TS/E]%s:gesture sys node create fail\n","fts_create_gesture_sysfs");
    sysfs_remove_group(uVar3,&fts_gesture_group_llvm_11375988175110845411);
  }
  *(undefined2 *)(param_1 + 0x32d) = 0;
  DAT_00100808 = 0;
  DAT_001007f8 = 0;
  DAT_00100800 = 0;
  fts_gesture_data = 0;
  return 0;
}



/* ---- fts_gesture_exit @ 00119f84 ---- */

undefined8 fts_gesture_exit(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),&fts_gesture_group_llvm_11375988175110845411);
  return 0;
}



/* ---- fts_gesture_show.7ec25d043f24ee1eddac8db61187129f @ 00119fb8 ---- */

long fts_gesture_show_7ec25d043f24ee1eddac8db61187129f
               (long param_1,undefined8 param_2,char *param_3)

{
  char *param3;
  int iVar1;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  lVar3 = *(long *)(param_1 + 0x98);
  local_40[0] = 0;
  mutex_lock(*(long *)(lVar3 + 0x18) + 0x208);
  local_3c[0] = 0xd0;
  fts_read(local_3c,1,local_40,1);
  param3 = "Off";
  if (*(char *)(lVar3 + 0x32d) != '\0') {
    param3 = "On";
  }
  iVar1 = snprintf(param_3,0x1000,"Gesture Mode:%s\n",param3);
  iVar2 = snprintf(param_3 + iVar1,0x1000,"Reg(0xD0)=%d\n",(uint)local_40[0]);
  mutex_unlock(*(long *)(lVar3 + 0x18) + 0x208);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)(iVar2 + iVar1);
}



/* ---- fts_gesture_store.7ec25d043f24ee1eddac8db61187129f @ 0011a0ac ---- */

undefined8
fts_gesture_store_7ec25d043f24ee1eddac8db61187129f
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x98);
  mutex_lock(*(long *)(lVar2 + 0x18) + 0x208);
  if (*param_3 == '1') {
    uVar1 = 1;
  }
  else {
    if (*param_3 != '0') goto LAB_0011a100;
    uVar1 = 0;
  }
  lct_fts_tp_gesture_callback(uVar1);
LAB_0011a100:
  mutex_unlock(*(long *)(lVar2 + 0x18) + 0x208);
  return param_4;
}



/* ---- fts_gesture_buf_show.7ec25d043f24ee1eddac8db61187129f @ 0011a128 ---- */

long fts_gesture_buf_show_7ec25d043f24ee1eddac8db61187129f
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar1);
  iVar2 = snprintf(param_3,0x1000,"Gesture ID:%d\n",(uint)(byte)fts_gesture_data);
  iVar3 = snprintf(param_3 + iVar2,0x1000,"Gesture PointNum:%d\n",(uint)fts_gesture_data._1_1_);
  iVar4 = iVar3 + iVar2 + 0x17;
  builtin_strncpy(param_3 + (iVar3 + iVar2),"Gesture Points Buffer:\n",0x18);
  iVar2 = snprintf(param_3 + iVar4,0x1000,"%3d(%4d,%4d) ",0,(uint)fts_gesture_data._2_2_,
                   (uint)DAT_001007f8._6_2_);
  iVar2 = iVar2 + iVar4;
  iVar4 = snprintf(param_3 + iVar2,0x1000,"%3d(%4d,%4d) ",1,(uint)fts_gesture_data._4_2_,
                   (uint)(ushort)DAT_00100800);
  iVar4 = iVar4 + iVar2;
  iVar2 = snprintf(param_3 + iVar4,0x1000,"%3d(%4d,%4d) ",2,(uint)fts_gesture_data._6_2_,
                   (uint)DAT_00100800._2_2_);
  iVar2 = iVar2 + iVar4;
  iVar3 = snprintf(param_3 + iVar2,0x1000,"%3d(%4d,%4d) ",3,(uint)(ushort)DAT_001007f8,
                   (uint)DAT_00100800._4_2_);
  iVar3 = iVar3 + iVar2;
  iVar4 = iVar3 + 1;
  (param_3 + iVar3)[0] = '\n';
  (param_3 + iVar3)[1] = '\0';
  iVar2 = snprintf(param_3 + iVar4,0x1000,"%3d(%4d,%4d) ",4,(uint)DAT_001007f8._2_2_,
                   (uint)DAT_00100800._6_2_);
  iVar2 = iVar2 + iVar4;
  iVar4 = snprintf(param_3 + iVar2,0x1000,"%3d(%4d,%4d) ",5,(uint)DAT_001007f8._4_2_,
                   (uint)DAT_00100808);
  iVar4 = iVar4 + iVar2;
  (param_3 + iVar4)[0] = '\n';
  (param_3 + iVar4)[1] = '\0';
  mutex_unlock(lVar1);
  return (long)(iVar4 + 1);
}



/* ---- fts_gesture_buf_store.7ec25d043f24ee1eddac8db61187129f @ 0011a2c4 ---- */

undefined8 fts_gesture_buf_store_7ec25d043f24ee1eddac8db61187129f(void)

{
  return 0xffffffffffffffff;
}



/* ---- fts_gesture_bm_show.7ec25d043f24ee1eddac8db61187129f @ 0011a2d4 ---- */

long fts_gesture_bm_show_7ec25d043f24ee1eddac8db61187129f
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(param_1 + 0x98);
  mutex_lock(*(long *)(lVar2 + 0x18) + 0x208);
  iVar1 = snprintf(param_3,0x1000,"gesture bmode:%d\n",(uint)*(byte *)(lVar2 + 0x32e));
  mutex_unlock(*(long *)(lVar2 + 0x18) + 0x208);
  return (long)iVar1;
}



/* ---- fts_gesture_bm_store.7ec25d043f24ee1eddac8db61187129f @ 0011a33c ---- */

undefined8
fts_gesture_bm_store_7ec25d043f24ee1eddac8db61187129f
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_3c = 0xff;
  mutex_lock(*(long *)(lVar2 + 0x18) + 0x208);
  iVar1 = sscanf(param_3,"%d",&local_3c);
  if (iVar1 == 1) {
    *(char *)(lVar2 + 0x32e) = (char)local_3c;
  }
  mutex_unlock(*(long *)(lVar2 + 0x18) + 0x208);
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- fts_esdcheck_proc_busy @ 0011a3ec ---- */

void fts_esdcheck_proc_busy(long param_1,uint param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x32b) != '\0') {
    bVar1 = 4;
    if ((param_2 & 1) == 0) {
      bVar1 = 0;
    }
    fts_esdcheck_data = fts_esdcheck_data & 0xfb | bVar1;
  }
  return;
}



/* ---- fts_esdcheck_switch @ 0011a420 ---- */

void fts_esdcheck_switch(long param_1,ulong param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(param_1 + 0x32b) != '\0') {
    if ((fts_esdcheck_data & 1) != 0) {
      if ((param_2 & 1) == 0) {
        cancel_delayed_work_sync(param_1 + 0x88);
      }
      else {
        fts_esdcheck_data = fts_esdcheck_data & 0xf7;
        DAT_0010080f = 0;
        DAT_0010080d = 0;
        queue_delayed_work_on(0x20,*(undefined8 *)(param_1 + 0x50),param_1 + 0x88,0xfa);
      }
    }
  }
  return;
}



/* ---- fts_esdcheck_suspend @ 0011a490 ---- */

void fts_esdcheck_suspend(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(param_1 + 0x32b) != '\0') {
    if ((fts_esdcheck_data & 1) != 0) {
      cancel_delayed_work_sync(param_1 + 0x88);
    }
    fts_esdcheck_data = fts_esdcheck_data & 0xf7 | 2;
    DAT_0010080d._0_1_ = 0;
  }
  return;
}



/* ---- fts_esdcheck_resume @ 0011a4f0 ---- */

void fts_esdcheck_resume(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)(param_1 + 0x32b) != '\0') {
    if ((fts_esdcheck_data & 1) != 0) {
      fts_esdcheck_data = fts_esdcheck_data & 0xf7;
      DAT_0010080f = 0;
      DAT_0010080d = 0;
      queue_delayed_work_on(0x20,*(undefined8 *)(param_1 + 0x50),param_1 + 0x88,0xfa);
    }
    DAT_0010080d = DAT_0010080d & 0xff00;
    fts_esdcheck_data = fts_esdcheck_data & 0xf5;
  }
  return;
}



/* ---- fts_esdcheck_init @ 0011a56c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fts_esdcheck_init(long param_1)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 uVar2;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(long *)(param_1 + 0x50) == 0) {
    _printk("<3>[FTS_TS/E]%s:fts workqueue is NULL, can't run esd check function\n","fts_esdcheck_init");
    uVar2 = 0xffffffea;
  }
  else {
    *(undefined8 *)(param_1 + 0x88) = 0xfffffffe0;
    *(long *)(param_1 + 0x90) = param_1 + 0x90;
    *(long *)(param_1 + 0x98) = param_1 + 0x90;
    *(code **)(param_1 + 0xa0) = esdcheck_func_ee9e47ebc1d7c732d345b7931318f4ff_cfi_jt;
    init_timer_key(param_1 + 0xb8,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    DAT_00100814 = 0;
    _fts_esdcheck_data = 1;
    iVar1 = sysfs_create_group(uVar2,&fts_esd_group);
    if (iVar1 != 0) {
      _printk("<3>[FTS_TS/E]%s:fts_create_esd_sysfs(sysfs) create fail\n","fts_create_esd_sysfs");
      sysfs_remove_group(uVar2,&fts_esd_group);
    }
    *(undefined1 *)(param_1 + 0x32b) = 1;
    if ((_fts_esdcheck_data & 1) != 0) {
      _fts_esdcheck_data = _fts_esdcheck_data & 0xffffffff000000f7;
      _fts_esdcheck_data = (uint3)fts_esdcheck_data;
      queue_delayed_work_on(0x20,*(undefined8 *)(param_1 + 0x50),param_1 + 0x88,0xfa);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- esdcheck_func.ee9e47ebc1d7c732d345b7931318f4ff @ 0011a68c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esdcheck_func_ee9e47ebc1d7c732d345b7931318f4ff(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  byte local_44 [4];
  char local_40 [4];
  char local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_38 = *(long *)(lVar5 + 0x5e0);
  if ((*(char *)(param_1 + 0x2a3) == '\0') || ((fts_esdcheck_data & 1) == 0)) goto LAB_0011a8a4;
  lVar5 = param_1 + -0x88;
  local_44[0] = 0;
  if ((-1 < (_jiffies - *(long *)(param_1 + 0x260)) + -0x32) && ((fts_esdcheck_data >> 1 & 1) == 0))
  {
    if ((fts_esdcheck_data >> 2 & 1) == 0) {
      local_3c[0] = '\0';
      iVar3 = fts_read(local_3c,1,local_44,1);
      if (iVar3 < 0) {
        DAT_00100814._0_4_ = (int)DAT_00100814 + 1;
      }
      else if ((local_44[0] & 0x70) == 0x40) goto LAB_0011a890;
      cVar2 = *(char *)(param_1 + -0x54);
      local_40[0] = '\0';
      local_3c[0] = -0x5d;
      iVar3 = fts_read(local_3c,1,local_40,1);
      if (iVar3 < 0) {
        _printk("<3>[FTS_TS/E]%s:read chip id fail,ret:%d\n","get_chip_id",iVar3);
        piVar4 = (int *)&DAT_00100814;
LAB_0011a780:
        *piVar4 = *piVar4 + 1;
        msleep(10);
        local_3c[0] = -0x5d;
        iVar3 = fts_read(local_3c,1,local_40,1);
        if (iVar3 < 0) {
          _printk("<3>[FTS_TS/E]%s:read chip id fail,ret:%d\n","get_chip_id",iVar3);
          piVar4 = (int *)&DAT_00100814;
        }
        else {
          if ((local_40[0] == cVar2) || (iVar3 = fts_check_cid(lVar5), iVar3 == 0))
          goto LAB_0011a820;
          piVar4 = (int *)((long)&DAT_00100814 + 4);
        }
        *piVar4 = *piVar4 + 1;
        msleep(10);
        local_3c[0] = -0x5d;
        iVar3 = fts_read(local_3c,1,local_40,1);
        if (iVar3 < 0) {
          _printk("<3>[FTS_TS/E]%s:read chip id fail,ret:%d\n","get_chip_id",iVar3);
          piVar4 = (int *)&DAT_00100814;
        }
        else {
          if ((local_40[0] == cVar2) || (iVar3 = fts_check_cid(lVar5), iVar3 == 0))
          goto LAB_0011a820;
          piVar4 = (int *)((long)&DAT_00100814 + 4);
        }
        *piVar4 = *piVar4 + 1;
        msleep(10);
        _printk("<3>[FTS_TS/E]%s:read chip id 3 times fail, need execute TP reset\n","get_chip_id");
      }
      else {
        if ((local_40[0] != cVar2) && (iVar3 = fts_check_cid(lVar5), iVar3 != 0)) {
          piVar4 = (int *)((long)&DAT_00100814 + 4);
          goto LAB_0011a780;
        }
LAB_0011a820:
        local_3c[0] = '\0';
        local_40[0] = -0x6f;
        iVar3 = fts_read(local_40,1,local_3c,1);
        cVar2 = DAT_0010080f;
        if (iVar3 < 0) {
          _printk("<3>[FTS_TS/E]%s:read reg0x91 fail,ret:%d\n","get_flow_cnt",iVar3);
          DAT_00100814._0_4_ = (int)DAT_00100814 + 1;
        }
        else {
          DAT_0010080f = local_3c[0];
          bVar1 = 0;
          if (local_3c[0] == cVar2) {
            bVar1 = DAT_0010080d._1_1_ + 1;
          }
          DAT_0010080d._1_1_ = bVar1;
        }
        if (DAT_0010080d._1_1_ < 5) goto LAB_0011a890;
      }
      DAT_0010080d._1_1_ = 0;
      _DAT_00100810 = _DAT_00100810 + 1;
      fts_reset_proc(200);
      fts_release_all_finger();
      fts_tp_state_recovery(lVar5);
    }
    else {
      _printk("<6>[FTS_TS/I]%s:In apk/adb command mode, not check esd\n","esdcheck_algorithm");
    }
  }
LAB_0011a890:
  queue_delayed_work_on(0x20,*(undefined8 *)(param_1 + -0x38),param_1,0xfa);
LAB_0011a8a4:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- fts_esdcheck_exit @ 0011a9bc ---- */

undefined8 fts_esdcheck_exit(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0x32b) = 0;
  fts_esdcheck_data = fts_esdcheck_data & 0xfe;
  cancel_delayed_work_sync(param_1 + 0x88);
  sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),&fts_esd_group);
  return 0;
}



/* ---- fts_esdcheck_show.ee9e47ebc1d7c732d345b7931318f4ff @ 0011aa18 ---- */

long fts_esdcheck_show_ee9e47ebc1d7c732d345b7931318f4ff
               (long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *param3;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  param3 = "Off";
  if (*(char *)(lVar3 + 0x32b) != '\0') {
    param3 = "On";
  }
  iVar2 = snprintf(param_3,0x1000,"Esd check: %s\n",param3);
  mutex_unlock(lVar1);
  return (long)iVar2;
}



/* ---- fts_esdcheck_store.ee9e47ebc1d7c732d345b7931318f4ff @ 0011aaa0 ---- */

undefined8
fts_esdcheck_store_ee9e47ebc1d7c732d345b7931318f4ff
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  bVar2 = fts_esdcheck_data;
  if (*param_3 == '0') {
    if ((*(char *)(lVar3 + 0x32b) != '\0') && ((fts_esdcheck_data & 1) != 0)) {
      cancel_delayed_work_sync(lVar3 + 0x88);
    }
    *(undefined1 *)(lVar3 + 0x32b) = 0;
  }
  else if (*param_3 == '1') {
    *(undefined1 *)(lVar3 + 0x32b) = 1;
    if ((bVar2 & 1) != 0) {
      fts_esdcheck_data = bVar2 & 0xf7;
      DAT_0010080f = 0;
      DAT_0010080d = 0;
      queue_delayed_work_on(0x20,*(undefined8 *)(lVar3 + 0x50),lVar3 + 0x88,0xfa);
    }
  }
  mutex_unlock(lVar1);
  return param_4;
}



/* ---- fts_prc_queue_work @ 0011ab70 ---- */

void fts_prc_queue_work(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((*(char *)(param_1 + 0x329) != '\0') && (*(char *)(param_1 + 0x32a) == '\0')) &&
     (*(char *)(param_1 + 0x321) == '\0')) {
    queue_delayed_work_on(0x20,*(undefined8 *)(param_1 + 0x50),param_1 + 0x110,0x32);
    *(undefined1 *)(param_1 + 0x32a) = 1;
  }
  return;
}



/* ---- fts_point_report_check_init @ 0011abd0 ---- */

undefined8 fts_point_report_check_init(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(long *)(param_1 + 0x50) == 0) {
    _printk("<3>[FTS_TS/E]%s:fts workqueue is NULL, can't run point report check function\n","fts_point_report_check_init");
    uVar2 = 0xffffffea;
  }
  else {
    *(undefined8 *)(param_1 + 0x110) = 0xfffffffe0;
    *(long *)(param_1 + 0x118) = param_1 + 0x118;
    *(long *)(param_1 + 0x120) = param_1 + 0x118;
    *(code **)(param_1 + 0x128) = fts_prc_func_79506f61a855b0c46bf242c94e782315_cfi_jt;
    init_timer_key(param_1 + 0x140,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
    iVar1 = sysfs_create_file_ns(*(undefined8 *)(param_1 + 0x10),&dev_attr_fts_prc,0);
    if (iVar1 < 0) {
      _printk("<3>[FTS_TS/E]%s:create prc sysfs fail\n","fts_point_report_check_init");
    }
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x329) = 0;
  }
  return uVar2;
}



/* ---- fts_prc_func.79506f61a855b0c46bf242c94e782315 @ 0011ac94 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fts_prc_func_79506f61a855b0c46bf242c94e782315(long param_1)

{
  undefined1 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(char *)(param_1 + 0x219) != '\0') && (*(char *)(param_1 + 0x211) == '\0')) {
    if (-1 < (*(long *)(param_1 + 0x1d8) - _jiffies) + 0x19) {
      queue_delayed_work_on(0x20,*(undefined8 *)(param_1 + -0xc0),param_1,0x32);
      uVar1 = 1;
      goto LAB_0011acc8;
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x364) == 0) goto LAB_0011acc8;
    fts_release_all_finger();
  }
  uVar1 = 0;
LAB_0011acc8:
  *(undefined1 *)(param_1 + 0x21a) = uVar1;
  return;
}



/* ---- fts_point_report_check_exit @ 0011ad1c ---- */

undefined8 fts_point_report_check_exit(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  cancel_delayed_work_sync(param_1 + 0x110);
  sysfs_remove_file_ns(*(undefined8 *)(param_1 + 0x10),&dev_attr_fts_prc,0);
  return 0;
}



/* ---- fts_prc_show.79506f61a855b0c46bf242c94e782315 @ 0011ad68 ---- */

long fts_prc_show_79506f61a855b0c46bf242c94e782315(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *param3;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  param3 = "Disable";
  if (*(char *)(lVar3 + 0x329) != '\0') {
    param3 = "Enable";
  }
  iVar2 = snprintf(param_3,0x1000,"PRC: %s\n",param3);
  mutex_unlock(lVar1);
  return (long)iVar2;
}



/* ---- fts_prc_store.79506f61a855b0c46bf242c94e782315 @ 0011adf0 ---- */

undefined8
fts_prc_store_79506f61a855b0c46bf242c94e782315
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(lVar3 + 0x18) + 0x208;
  mutex_lock(lVar1);
  if (*param_3 == '1') {
    uVar2 = 1;
  }
  else {
    if (*param_3 != '0') goto LAB_0011ae50;
    cancel_delayed_work_sync(lVar3 + 0x110);
    uVar2 = 0;
  }
  *(undefined1 *)(lVar3 + 0x329) = uVar2;
LAB_0011ae50:
  mutex_unlock(lVar1);
  return param_4;
}



/* ---- fts_read @ 0011ae74 ---- */

int fts_read(void *param_1,uint param_2,void *param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  plVar5 = fts_data;
  lVar3 = sp_el0;
  local_58 = *(long *)(lVar3 + 0x5e0);
  if ((((fts_data == (long *)0x0) || (0x1000 < param_2)) || (0x1000 < param_4)) ||
     (((param_4 == 0 || (param_3 == (void *)0x0)) || (*fts_data == 0)))) {
    _printk("<3>[FTS_TS/E]%s:fts_data/client/cmdlen(%d)/data/datalen(%d) is invalid\n","fts_read",(ulong)param_2,(ulong)param_4);
    iVar6 = -0x16;
    goto LAB_0011af98;
  }
  plVar1 = fts_data + 0x57;
  mutex_lock(plVar1);
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  memcpy((void *)plVar5[0x92],param_1,(ulong)param_2);
  local_70 = plVar5[0x92];
  uVar4 = (ulong)local_78 >> 0x30;
  local_60 = plVar5[0x93];
  local_78 = CONCAT62((int6)(((ulong)CONCAT22((short)uVar4,(short)param_2) << 0x20) >> 0x10),
                      *(undefined2 *)(*plVar5 + 2));
  local_68._0_6_ = CONCAT24((short)param_4,0x10000);
  local_68 = CONCAT62(local_68._2_6_,*(undefined2 *)(*plVar5 + 2));
  puVar2 = &local_78;
  if (param_1 == (void *)0x0 || param_2 == 0) {
    puVar2 = &local_68;
  }
  uVar7 = 1;
  if (param_1 != (void *)0x0 && param_2 != 0) {
    uVar7 = 2;
  }
  iVar6 = i2c_transfer(*(undefined8 *)(*plVar5 + 0x18),puVar2,uVar7);
  if (iVar6 < 0) {
    _printk("<3>[FTS_TS/E]%s:i2c_transfer(read) fail,ret:%d\n","fts_read",iVar6);
    iVar6 = i2c_transfer(*(undefined8 *)(*plVar5 + 0x18),puVar2,uVar7);
    if (-1 < iVar6) goto LAB_0011af80;
    _printk("<3>[FTS_TS/E]%s:i2c_transfer(read) fail,ret:%d\n","fts_read",iVar6);
    iVar6 = i2c_transfer(*(undefined8 *)(*plVar5 + 0x18),puVar2,uVar7);
    if (-1 < iVar6) goto LAB_0011af80;
    _printk("<3>[FTS_TS/E]%s:i2c_transfer(read) fail,ret:%d\n","fts_read",iVar6);
  }
  else {
LAB_0011af80:
    memcpy(param_3,(void *)plVar5[0x93],(ulong)param_4);
  }
  mutex_unlock(plVar1);
LAB_0011af98:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* ---- fts_write @ 0011b080 ---- */

int fts_write(void *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  plVar3 = fts_data;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  if ((((fts_data == (long *)0x0) || (0xfff < param_2 - 1)) || (param_1 == (void *)0x0)) ||
     (*fts_data == 0)) {
    _printk("<3>[FTS_TS/E]%s:fts_data/client/data/datalen(%d) is invalid\n","fts_write",param_2);
    iVar4 = -0x16;
  }
  else {
    plVar1 = fts_data + 0x57;
    mutex_lock(plVar1);
    local_48 = 0;
    memcpy((void *)plVar3[0x92],param_1,(ulong)param_2);
    local_40 = plVar3[0x92];
    local_48._0_6_ = CONCAT24((short)param_2,(undefined4)local_48);
    local_48 = CONCAT62(local_48._2_6_,*(undefined2 *)(*plVar3 + 2));
    iVar4 = i2c_transfer(*(undefined8 *)(*plVar3 + 0x18),&local_48,1);
    if (iVar4 < 0) {
      _printk("<3>[FTS_TS/E]%s:i2c_transfer(write) fail,ret:%d\n","fts_write",iVar4);
      iVar4 = i2c_transfer(*(undefined8 *)(*plVar3 + 0x18),&local_48,1);
      if (iVar4 < 0) {
        _printk("<3>[FTS_TS/E]%s:i2c_transfer(write) fail,ret:%d\n","fts_write",iVar4);
        iVar4 = i2c_transfer(*(undefined8 *)(*plVar3 + 0x18),&local_48,1);
        if (iVar4 < 0) {
          _printk("<3>[FTS_TS/E]%s:i2c_transfer(write) fail,ret:%d\n","fts_write",iVar4);
        }
      }
    }
    mutex_unlock(plVar1);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- fts_read_reg @ 0011b20c ---- */

void fts_read_reg(undefined1 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_1c [4];
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c[0] = param_1;
  fts_read(local_1c,1,param_2,1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- fts_write_reg @ 0011b270 ---- */

void fts_write_reg(undefined1 param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_1c;
  undefined1 local_1b;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c = param_1;
  local_1b = param_2;
  fts_write(&local_1c,2);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- fts_bus_init @ 0011b2d0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fts_bus_init(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = kmem_cache_alloc_trace(_init_lct_tp_gesture,0xdc0,0x1000);
  *(long *)(param_1 + 0x490) = lVar1;
  if (lVar1 == 0) {
    puVar2 = "<3>[FTS_TS/E]%s:failed to allocate memory for bus_tx_buf\n";
  }
  else {
    lVar1 = kmem_cache_alloc_trace(_init_lct_tp_gesture,0xdc0,0x1000);
    *(long *)(param_1 + 0x498) = lVar1;
    if (lVar1 != 0) {
      return 0;
    }
    puVar2 = "<3>[FTS_TS/E]%s:failed to allocate memory for bus_rx_buf\n";
  }
  _printk(puVar2,"fts_bus_init");
  return 0xfffffff4;
}



/* ---- fts_bus_exit @ 0011b35c ---- */

undefined8 fts_bus_exit(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x490) != 0) {
      kfree();
      *(undefined8 *)(param_1 + 0x490) = 0;
    }
    if (*(long *)(param_1 + 0x498) != 0) {
      kfree();
      *(undefined8 *)(param_1 + 0x498) = 0;
    }
  }
  return 0;
}



/* ---- fts_fwupg_reset_in_boot @ 0011b3b0 ---- */

int fts_fwupg_reset_in_boot(void)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c[0] = 7;
  _printk("<6>[FTS_TS/I]%s:reset in boot environment\n","fts_fwupg_reset_in_boot");
  iVar2 = fts_write(local_2c,1);
  if (iVar2 < 0) {
    _printk("<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n","fts_fwupg_reset_in_boot");
  }
  else {
    msleep(0x50);
    iVar2 = 0;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- fts_fwupg_enter_into_boot @ 0011b45c ---- */

int fts_fwupg_enter_into_boot(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *in_x18;
  code *pcVar8;
  undefined8 unaff_x30;
  undefined1 local_40 [4];
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = fwupgrade;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  _printk("<6>[FTS_TS/I]%s:***********enter into pramboot/bootloader***********\n","fts_fwupg_enter_into_boot");
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
    iVar4 = -0x16;
    puVar5 = "<3>[FTS_TS/E]%s:upgrade/func is null\n";
  }
  else {
    iVar4 = fts_wait_tp_to_valid();
    puVar5 = "<6>[FTS_TS/I]%s:tp fw invaild\n";
    if (-1 < iVar4) {
      puVar5 = "<6>[FTS_TS/I]%s:tp fw vaild\n";
    }
    _printk(puVar5,"fts_fwupg_check_fw_valid");
    if (iVar4 < 0) {
      if (*(char *)(*(long *)(lVar2 + 0x10) + 0x33) == '\0') {
LAB_0011b504:
        if (*(char *)(*(long *)(lVar2 + 0x10) + 0x35) == '\0') {
          local_3c = 0;
          fts_fwupg_get_boot_state(lVar2,&local_3c);
          if (local_3c != 4) {
            uVar3 = 0;
            do {
              uVar6 = uVar3;
              msleep(0x14);
              if (uVar6 == 0x1d) break;
              fts_fwupg_get_boot_state(lVar2,&local_3c);
              uVar3 = uVar6 + 1;
            } while (local_3c != 4);
            if (0x1c < uVar6) {
              iVar4 = -5;
              puVar5 = "<3>[FTS_TS/E]%s:fw not in bootloader, fail\n";
              goto LAB_0011b4b8;
            }
          }
        }
        else {
          _printk("<6>[FTS_TS/I]%s:pram supported, write pramboot and init\n","fts_fwupg_enter_into_boot");
          pcVar8 = *(code **)(*(long *)(lVar2 + 0x10) + 0x50);
          if (pcVar8 == (code *)0x0) {
            iVar4 = fts_pram_write_init(lVar2);
          }
          else {
            if (2 < ((ulong)(pcVar8 + -0x111550) >> 3 | (long)pcVar8 << 0x3d)) {
              __cfi_slowpath_diag(0x2b3a43e29242445,pcVar8,&DAT_00104b90);
            }
            iVar4 = (*pcVar8)();
          }
          if (iVar4 < 0) {
            puVar5 = "<3>[FTS_TS/E]%s:pram write_init fail\n";
            goto LAB_0011b4b8;
          }
        }
        iVar4 = 0;
        goto LAB_0011b56c;
      }
      local_40[0] = 7;
      _printk("<6>[FTS_TS/I]%s:reset in boot environment\n","fts_fwupg_reset_in_boot");
      iVar4 = fts_write(local_40,1);
      if (-1 < iVar4) goto LAB_0011b6a0;
      _printk("<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n","fts_fwupg_reset_in_boot");
      puVar5 = "<3>[FTS_TS/E]%s:reset before read boot id when fw invalid fail\n";
    }
    else {
      _printk("<6>[FTS_TS/I]%s:send 0xAA and 0x55 to FW, reset to boot environment\n","fts_fwupg_reset_to_boot");
      if (*(long *)(lVar2 + 0x10) == 0) {
        uVar7 = 0xfc;
      }
      else {
        uVar7 = 0xfffffffc;
        if (*(char *)(*(long *)(lVar2 + 0x10) + 0x32) != '\0') {
          uVar7 = 0xffffffbc;
        }
      }
      iVar4 = fts_write_reg(uVar7,0xaa);
      if (iVar4 < 0) {
        puVar5 = "<3>[FTS_TS/E]%s:write FC=0xAA fail\n";
      }
      else {
        msleep(10);
        iVar4 = fts_write_reg(uVar7,0x55);
        if (-1 < iVar4) {
LAB_0011b6a0:
          msleep(0x50);
          goto LAB_0011b504;
        }
        puVar5 = "<3>[FTS_TS/E]%s:write FC=0x55 fail\n";
      }
      _printk(puVar5,"fts_fwupg_reset_to_boot");
      puVar5 = "<3>[FTS_TS/E]%s:enter into romboot/bootloader fail\n";
    }
  }
LAB_0011b4b8:
  _printk(puVar5,"fts_fwupg_enter_into_boot");
LAB_0011b56c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- fts_pram_write_init @ 0011b724 ---- */

/* WARNING: Removing unreachable block (ram,0x0011be04) */

uint fts_pram_write_init(long *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined5 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *in_x18;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  ulong uVar23;
  undefined8 unaff_x30;
  int local_98;
  ushort local_94 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar11 = sp_el0;
  local_68 = *(long *)(lVar11 + 0x5e0);
  local_98 = 0;
  _printk("<6>[FTS_TS/I]%s:**********pram write and init**********\n","fts_pram_write_init");
  if ((param_1 == (long *)0x0) || (param_1[2] == 0)) {
    puVar8 = "<3>[FTS_TS/E]%s:upgrade/func is null\n";
  }
  else {
    if (*(char *)(param_1[2] + 0x35) != '\0') {
      fts_fwupg_get_boot_state(param_1,&local_98);
      if (local_98 != 2) {
        if (local_98 == 3) {
          _printk("<6>[FTS_TS/I]%s:tp is in pramboot, need send reset cmd before upgrade\n","fts_pram_write_init");
          local_94[0] = local_94[0] & 0xff00;
          local_90 = local_90 & 0xffffffffff000000;
          _printk("<6>[FTS_TS/I]%s:pramboot initialization\n","fts_pram_init");
          local_90 = CONCAT71(local_90._1_7_,5);
          uVar6 = fts_read(&local_90,1,local_94,1);
          if ((int)uVar6 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:read flash type fail\n";
          }
          else {
            uVar23 = local_90 >> 0x10;
            local_90._0_2_ = CONCAT11((byte)local_94[0],5);
            local_90 = CONCAT62((int6)uVar23,(undefined2)local_90) & 0xffffffffff00ffff;
            uVar6 = fts_write(&local_90,3);
            if (-1 < (int)uVar6) goto LAB_0011b8b4;
            puVar8 = "<3>[FTS_TS/E]%s:write flash type fail\n";
          }
          _printk(puVar8,"fts_pram_init");
          puVar8 = "<3>[FTS_TS/E]%s:pramboot(before) init fail\n";
        }
        else {
LAB_0011b8b4:
          _printk("<6>[FTS_TS/I]%s:tp isn't in romboot, need send reset to romboot\n","fts_pram_write_init");
          local_90 = local_90 & 0xffffffff00000000;
          local_94[0] = CONCAT11(local_94[0]._1_1_,7);
          uVar6 = fts_write(local_94,1);
          if ((int)uVar6 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n";
          }
          else {
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            __const_udelay(0x418958);
            iVar17 = 0x1e;
            puVar8 = "<3>[FTS_TS/E]%s:reset to romboot fail\n";
            do {
              fts_fwupg_get_boot_state(param_1,&local_90);
              if ((uint)local_90 == 2) goto LAB_0011b9d0;
              __const_udelay(0x147aeb8);
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
            uVar6 = 0xfffffffb;
          }
          _printk(puVar8,"fts_fwupg_reset_to_romboot");
          puVar8 = "<3>[FTS_TS/E]%s:reset to romboot fail\n";
        }
LAB_0011b9c0:
        _printk(puVar8,"fts_pram_write_init");
        goto LAB_0011b798;
      }
LAB_0011b9d0:
      _printk("<6>[FTS_TS/I]%s:write pram and remap\n","fts_pram_write_remap");
      lVar11 = param_1[2];
      if ((lVar11 == 0) || (pbVar18 = *(byte **)(lVar11 + 0x38), pbVar18 == (byte *)0x0)) {
        _printk("<3>[FTS_TS/E]%s:upg/func/pramboot is null\n","fts_pram_write_remap");
LAB_0011ba08:
        uVar6 = 0xffffffea;
      }
      else {
        uVar10 = *(uint *)(lVar11 + 0x40);
        if (uVar10 < 0x120) {
          _printk("<3>[FTS_TS/E]%s:pramboot length(%d) fail\n","fts_pram_write_remap",uVar10);
          goto LAB_0011ba08;
        }
        uStack_70 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_72 = 0;
        local_90 = 0;
        uStack_88 = 0;
        _printk("<6>[FTS_TS/I]%s:write pramboot to pram\n","fts_pram_write_buf");
        if (param_1[2] == 0) {
          _printk("<3>[FTS_TS/E]%s:upg/func/buf is null\n","fts_pram_write_buf");
LAB_0011bac8:
          uVar6 = 0xffffffea;
LAB_0011bad0:
          puVar8 = "<3>[FTS_TS/E]%s:write pramboot fail\n";
LAB_0011bad4:
          _printk(puVar8,"fts_pram_write_remap");
        }
        else {
          _printk("<6>[FTS_TS/I]%s:pramboot len=%d\n","fts_pram_write_buf",uVar10);
          if (0x10000 < uVar10) {
            _printk("<3>[FTS_TS/E]%s:pramboot length(%d) fail\n","fts_pram_write_buf",uVar10);
            goto LAB_0011bac8;
          }
          uVar2 = uVar10 >> 5;
          uVar7 = uVar10 & 0x1f;
          if (uVar7 != 0) {
            uVar2 = uVar2 + 1;
          }
          uVar20 = 0;
          bVar21 = 0;
          uVar23 = 0x20;
          pbVar19 = pbVar18;
          do {
            uVar16 = local_90;
            uVar22 = uVar7;
            if (uVar20 != uVar2 - 1 || uVar7 == 0) {
              uVar22 = (uint)uVar23;
            }
            uVar23 = (ulong)uVar22;
            uVar3 = (undefined1)(uVar20 << 5);
            if (*(int *)(*param_1 + 0x4a0) == 3) {
              uVar4 = CONCAT41(local_90._4_4_,uVar3);
              local_90 = CONCAT71((uint7)(byte)((uVar20 & 0x7ffffff) >> 0xb),0xad);
              local_90._0_3_ = CONCAT12((char)((uVar20 & 0x7ffffff) >> 3),(undefined2)local_90);
              local_90 = CONCAT53(uVar4,(undefined3)local_90);
              uVar6 = fts_write(&local_90,4);
              if (-1 < (int)uVar6) {
                uVar12 = 1;
                local_90 = CONCAT71(local_90._1_7_,0xae);
                goto joined_r0x0011bb60;
              }
              puVar8 = "<3>[FTS_TS/E]%s:pramboot set write address(%d) fail\n";
LAB_0011bc48:
              _printk(puVar8,"fts_pram_write_buf",uVar20);
              goto LAB_0011bad0;
            }
            uVar12 = 6;
            local_90._0_2_ = CONCAT11((char)((uVar20 & 0x7ffffff) >> 0xb),0xae);
            local_90._0_3_ = CONCAT12((char)((uVar20 & 0x7ffffff) >> 3),(undefined2)local_90);
            local_90 = CONCAT53(CONCAT41(local_90._4_4_,uVar3),(undefined3)local_90);
            local_90._0_5_ = (uint5)(uint)local_90;
            local_90._6_2_ = SUB82(uVar16,6);
            local_90._0_6_ = CONCAT15((char)uVar22,(uint5)local_90);
joined_r0x0011bb60:
            if (uVar22 != 0) {
              lVar11 = param_1[2];
              uVar13 = (ulong)(0x28 - (int)uVar12);
              pbVar14 = (byte *)((ulong)&local_90 | uVar12);
              pbVar15 = pbVar19;
              uVar16 = uVar23;
              do {
                if (uVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x11bfac);
                  (*pcVar5)();
                }
                bVar1 = *pbVar15;
                uVar16 = uVar16 - 1;
                uVar13 = uVar13 - 1;
                *pbVar14 = bVar1;
                if (*(int *)(lVar11 + 0x24) != 0) {
                  bVar1 = 0;
                }
                bVar21 = bVar1 ^ bVar21;
                pbVar14 = pbVar14 + 1;
                pbVar15 = pbVar15 + 1;
              } while (uVar16 != 0);
            }
            uVar6 = fts_write(&local_90,(int)uVar12 + uVar22);
            if ((int)uVar6 < 0) {
              puVar8 = "<3>[FTS_TS/E]%s:pramboot write data(%d) fail\n";
              goto LAB_0011bc48;
            }
            uVar20 = uVar20 + 1;
            pbVar19 = pbVar19 + 0x20;
          } while (uVar20 != uVar2);
          lVar11 = param_1[2];
          if ((*(int *)(lVar11 + 0x24) == 1) || (0xff < *(int *)(lVar11 + 0x2c))) {
            uVar7 = fts_crc16_calc_host(pbVar18,uVar10);
            uVar7 = uVar7 & 0xffff;
          }
          else {
            uVar7 = (uint)bVar21;
          }
          if (lVar11 == 0) {
            _printk("<3>[FTS_TS/E]%s:upg/func is null\n","fts_pram_ecc_cal");
            uVar6 = 0xffffffea;
            puVar8 = "<3>[FTS_TS/E]%s:read pramboot ecc fail\n";
            goto LAB_0011bad4;
          }
          if ((*(int *)(lVar11 + 0x24) == 1) || (0xff < *(int *)(lVar11 + 0x2c))) {
            local_94[0] = 0;
            _printk("<6>[FTS_TS/I]%s:read out pramboot checksum\n","fts_pram_ecc_cal_algo");
            if (param_1[2] == 0) {
              _printk("<3>[FTS_TS/E]%s:upg/func is null\n","fts_pram_ecc_cal_algo");
              uVar6 = 0xffffffea;
            }
            else {
              local_90._0_5_ = CONCAT14((char)(uVar10 >> 0x10),0xcc);
              local_90._0_6_ = CONCAT15((char)(uVar10 >> 8),(uint5)local_90);
              local_90 = CONCAT26(CONCAT11(local_90._7_1_,(char)uVar10),(undefined6)local_90);
              uVar6 = fts_write(&local_90,7);
              if ((int)uVar6 < 0) {
                puVar8 = "<3>[FTS_TS/E]%s:write pramboot ecc cal cmd fail\n";
LAB_0011be50:
                _printk(puVar8,"fts_pram_ecc_cal_algo");
                if (-1 < (int)uVar6) goto LAB_0011be60;
              }
              else {
                iVar17 = 100;
                local_90 = CONCAT71(local_90._1_7_,0xce);
                do {
                  msleep(1);
                  uVar6 = fts_read(&local_90,1,local_94,1);
                  if ((int)uVar6 < 0) {
                    puVar8 = "<3>[FTS_TS/E]%s:ecc_finish read cmd fail\n";
                    goto LAB_0011be50;
                  }
                  if (*(char *)(param_1[2] + 0x30) == '\0') {
                    cVar9 = -0x5b;
                    if (*(int *)(param_1[2] + 0x2c) < 0x100) {
                      cVar9 = '\0';
                    }
                  }
                  else {
                    cVar9 = -0x5b;
                  }
                  if (cVar9 == (byte)local_94[0]) {
                    local_90 = CONCAT71(local_90._1_7_,0xcd);
                    uVar6 = fts_read(&local_90,1,local_94,2);
                    if (-1 < (int)uVar6) {
                      uVar6 = ((local_94[0] & 0xff00) << 8 | (uint)local_94[0] << 0x18) >> 0x10;
                      goto LAB_0011be60;
                    }
                    puVar8 = "<3>[FTS_TS/E]%s:read pramboot ecc fail\n";
                    goto LAB_0011be50;
                  }
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
                _printk("<3>[FTS_TS/E]%s:wait ecc finish fail\n","fts_pram_ecc_cal_algo");
                uVar6 = 0xfffffffb;
              }
            }
LAB_0011bce4:
            puVar8 = "<3>[FTS_TS/E]%s:read pramboot ecc fail\n";
            goto LAB_0011bad4;
          }
          local_94[0] = local_94[0] & 0xff00;
          _printk("<6>[FTS_TS/I]%s:read out pramboot checksum\n","fts_pram_ecc_cal_xor");
          local_90 = CONCAT71(local_90._1_7_,0xcc);
          uVar6 = fts_read(&local_90,1,local_94,1);
          if ((int)uVar6 < 0) {
            _printk("<3>[FTS_TS/E]%s:read pramboot ecc fail\n","fts_pram_ecc_cal_xor");
            if ((int)uVar6 < 0) goto LAB_0011bce4;
          }
          else {
            uVar6 = (uint)(byte)local_94[0];
          }
LAB_0011be60:
          _printk("<6>[FTS_TS/I]%s:pram ecc in tp:%x, host:%x\n","fts_pram_write_remap",uVar6,uVar7);
          if (uVar7 == uVar6) {
            uVar6 = fts_pram_start();
            if ((int)uVar6 < 0) {
              puVar8 = "<3>[FTS_TS/E]%s:pram start fail\n";
              goto LAB_0011bad4;
            }
            local_90 = local_90 & 0xffffffff00000000;
            fts_fwupg_get_boot_state(param_1,&local_90);
            if ((uint)local_90 != 3) {
              uVar6 = 0;
              do {
                uVar10 = uVar6;
                msleep(0x14);
                if (uVar10 == 0x1d) break;
                fts_fwupg_get_boot_state(param_1,&local_90);
                uVar6 = uVar10 + 1;
              } while ((uint)local_90 != 3);
              if (0x1c < uVar10) {
                _printk("<3>[FTS_TS/E]%s:not in pramboot\n","fts_pram_write_init");
                uVar6 = 0xfffffffb;
                goto LAB_0011b798;
              }
            }
            local_94[0] = local_94[0] & 0xff00;
            local_90 = local_90 & 0xffffffffff000000;
            _printk("<6>[FTS_TS/I]%s:pramboot initialization\n","fts_pram_init");
            local_90 = CONCAT71(local_90._1_7_,5);
            uVar6 = fts_read(&local_90,1,local_94,1);
            if ((int)uVar6 < 0) {
              puVar8 = "<3>[FTS_TS/E]%s:read flash type fail\n";
            }
            else {
              uVar23 = local_90 >> 0x10;
              local_90._0_2_ = CONCAT11((byte)local_94[0],5);
              local_90 = CONCAT62((int6)uVar23,(undefined2)local_90) & 0xffffffffff00ffff;
              uVar6 = fts_write(&local_90,3);
              if (-1 < (int)uVar6) {
                uVar6 = 0;
                goto LAB_0011b798;
              }
              puVar8 = "<3>[FTS_TS/E]%s:write flash type fail\n";
            }
            _printk(puVar8,"fts_pram_init");
            puVar8 = "<3>[FTS_TS/E]%s:pramboot init fail\n";
            goto LAB_0011b9c0;
          }
          _printk("<3>[FTS_TS/E]%s:pramboot ecc check fail\n","fts_pram_write_remap");
          uVar6 = 0xfffffffb;
        }
      }
      _printk("<3>[FTS_TS/E]%s:pram write fail, ret=%d\n","fts_pram_write_init",uVar6);
      goto LAB_0011b798;
    }
    puVar8 = "<3>[FTS_TS/E]%s:ic not support pram\n";
  }
  _printk(puVar8,"fts_pram_write_init");
  uVar6 = 0xffffffea;
LAB_0011b798:
  lVar11 = sp_el0;
  if (*(long *)(lVar11 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* ---- fts_fwupg_erase @ 0011bfe4 ---- */

int fts_fwupg_erase(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_44 [4];
  ushort local_40 [2];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  _printk("<6>[FTS_TS/I]%s:**********erase now**********\n","fts_fwupg_erase");
  local_44[0] = 0x61;
  iVar3 = fts_write(local_44,1);
  if (iVar3 < 0) {
    puVar4 = "<3>[FTS_TS/E]%s:erase cmd fail\n";
  }
  else {
    msleep(param_1);
    local_40[0] = 0;
    local_3c[0] = 0x6a;
    fts_read(local_3c,1,local_40,2);
    if (((local_40[0] & 0xff00) << 8 | (uint)local_40[0] << 0x18) == 0xf0aa0000) {
LAB_0011c07c:
      iVar3 = 0;
      goto LAB_0011c080;
    }
    msleep(400);
    iVar3 = 0x31;
    do {
      local_3c[0] = 0x6a;
      fts_read(local_3c,1,local_40,2);
      uVar1 = ((local_40[0] & 0xff00) << 8 | (uint)local_40[0] << 0x18) >> 0x10;
      if (uVar1 == 0xf0aa) goto LAB_0011c07c;
      msleep(400);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _printk("<3>[FTS_TS/E]%s:flash status fail,ok:%04x,read:%04x,retries:%d\n","fts_fwupg_check_flash_status",0xf0aa,uVar1,0x32);
    iVar3 = -5;
    puVar4 = "<3>[FTS_TS/E]%s:ecc flash status check fail\n";
  }
  _printk(puVar4,"fts_fwupg_erase");
LAB_0011c080:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- fts_fwupg_ecc_cal @ 0011c14c ---- */

uint fts_fwupg_ecc_cal(int param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *in_x18;
  uint uVar7;
  uint uVar8;
  undefined8 unaff_x30;
  ushort local_7c [2];
  ushort local_78 [2];
  undefined1 local_74 [4];
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar2 = fwupgrade;
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x5e0);
  uStack_6c = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  local_70 = 0;
  local_6f = 0;
  local_6e = 0;
  local_6d = 0;
  local_7c[0] = 0;
  _printk("<6>[FTS_TS/I]%s:**********read out checksum**********\n","fts_fwupg_ecc_cal");
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
    _printk("<3>[FTS_TS/E]%s:upgrade/func is null\n","fts_fwupg_ecc_cal");
    uVar3 = 0xffffffea;
  }
  else {
    local_70 = 100;
    uVar3 = fts_write(&local_70,1);
    if ((int)uVar3 < 0) {
      puVar4 = "<3>[FTS_TS/E]%s:ecc init cmd write fail\n";
    }
    else {
      if (*(int *)(*(long *)(lVar2 + 0x10) + 0x2c) < 0x100) {
        uVar3 = param_2 >> 1;
        uVar6 = uVar3 / 0x7fff;
        uVar8 = param_2 + uVar6 * -0xfffe;
        param_2 = 0xfffe;
        if (uVar8 != 0) {
          uVar6 = uVar3 / 0x7fff + 1;
        }
      }
      else {
        uVar8 = 0;
        uVar6 = 1;
      }
      _printk("<6>[FTS_TS/I]%s:ecc calc num:%d, remainder:%d\n","fts_fwupg_ecc_cal",uVar6,uVar8);
      local_70 = 0x65;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        local_6d = (undefined1)param_1;
        local_6f = (undefined1)((uint)param_1 >> 0x10);
        local_6e = (undefined1)((uint)param_1 >> 8);
        if (*(int *)(*(long *)(lVar2 + 0x10) + 0x2c) < 0x100) {
          uVar5 = 6;
          uVar7 = uVar8;
          if (uVar6 != 1 || uVar8 == 0) {
            uVar7 = param_2;
          }
          uStack_6b = (undefined1)uVar7;
          uStack_6c = (undefined1)(uVar7 >> 8);
        }
        else {
          uVar5 = 7;
          uStack_6a = (undefined1)param_2;
          uStack_6c = (undefined1)(param_2 >> 0x10);
          uStack_6b = (undefined1)(param_2 >> 8);
          uVar7 = param_2;
        }
        uVar3 = fts_write(&local_70,uVar5);
        if ((int)uVar3 < 0) {
          puVar4 = "<3>[FTS_TS/E]%s:ecc calc cmd write fail\n";
          goto LAB_0011c238;
        }
        msleep(uVar7 >> 8);
        local_78[0] = 0;
        local_74[0] = 0x6a;
        fts_read(local_74,1,local_78,2);
        if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
          msleep(0x32);
          local_74[0] = 0x6a;
          fts_read(local_74,1,local_78,2);
          if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
            msleep(0x32);
            local_74[0] = 0x6a;
            fts_read(local_74,1,local_78,2);
            if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
              msleep(0x32);
              local_74[0] = 0x6a;
              fts_read(local_74,1,local_78,2);
              if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
                msleep(0x32);
                local_74[0] = 0x6a;
                fts_read(local_74,1,local_78,2);
                if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
                  msleep(0x32);
                  local_74[0] = 0x6a;
                  fts_read(local_74,1,local_78,2);
                  if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
                    msleep(0x32);
                    local_74[0] = 0x6a;
                    fts_read(local_74,1,local_78,2);
                    if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
                      msleep(0x32);
                      local_74[0] = 0x6a;
                      fts_read(local_74,1,local_78,2);
                      if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000) {
                        msleep(0x32);
                        local_74[0] = 0x6a;
                        fts_read(local_74,1,local_78,2);
                        if (((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) != 0xf0550000)
                        {
                          msleep(0x32);
                          local_74[0] = 0x6a;
                          fts_read(local_74,1,local_78,2);
                          uVar3 = ((local_78[0] & 0xff00) << 8 | (uint)local_78[0] << 0x18) >> 0x10;
                          if (uVar3 != 0xf055) {
                            msleep(0x32);
                            _printk("<3>[FTS_TS/E]%s:flash status fail,ok:%04x,read:%04x,retries:%d\n","fts_fwupg_check_flash_status",0xf055,uVar3,10);
                            _printk("<3>[FTS_TS/E]%s:ecc flash status read fail\n","fts_fwupg_ecc_cal");
                            uVar3 = 0xfffffffb;
                            goto LAB_0011c1d4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        param_1 = param_1 + 0xfffe;
        param_2 = uVar7;
      }
      if ((*(int *)(*(long *)(lVar2 + 0x10) + 0x28) == 1) ||
         (0xff < *(int *)(*(long *)(lVar2 + 0x10) + 0x2c))) {
        uVar5 = 2;
      }
      else {
        uVar5 = 1;
      }
      local_70 = 0x66;
      uVar3 = fts_read(&local_70,1,local_7c,uVar5);
      if (-1 < (int)uVar3) {
        if ((*(int *)(*(long *)(lVar2 + 0x10) + 0x28) == 1) ||
           (0xff < *(int *)(*(long *)(lVar2 + 0x10) + 0x2c))) {
          uVar3 = ((local_7c[0] & 0xff00) << 8 | (uint)local_7c[0] << 0x18) >> 0x10;
        }
        else {
          uVar3 = (uint)(byte)local_7c[0];
        }
        goto LAB_0011c1d4;
      }
      puVar4 = "<3>[FTS_TS/E]%s:ecc read cmd write fail\n";
    }
LAB_0011c238:
    _printk(puVar4,"fts_fwupg_ecc_cal");
  }
LAB_0011c1d4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* ---- fts_flash_write_buf @ 0011c624 ---- */

uint fts_flash_write_buf(int param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar5;
  undefined1 uVar4;
  long lVar6;
  undefined5 uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  uint uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined8 *in_x18;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_x30;
  ushort local_98 [2];
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined1 auStack_8f [2];
  undefined1 auStack_8d [2];
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  plVar8 = fwupgrade;
  lVar6 = sp_el0;
  local_68 = *(long *)(lVar6 + 0x5e0);
  uStack_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_72 = 0;
  _local_90 = 0;
  uStack_88 = 0;
  local_94[0] = 0;
  local_98[0] = 0;
  _printk("<6>[FTS_TS/I]%s:**********write data to flash**********\n","fts_flash_write_buf");
  if ((((plVar8 == (long *)0x0) || (param_3 == 0)) || (param_2 == 0)) || (plVar8[2] == 0)) {
    _printk("<3>[FTS_TS/E]%s:upgrade/func/buf/len is invalid\n","fts_flash_write_buf");
    uVar12 = 0xffffffea;
  }
  else {
    _printk("<6>[FTS_TS/I]%s:data buf start addr=0x%x, len=0x%x\n","fts_flash_write_buf",param_1,param_3);
    uVar3 = param_3 >> 5;
    if ((param_3 & 0x1f) != 0) {
      uVar3 = uVar3 + 1;
    }
    _printk("<6>[FTS_TS/I]%s:write data, num:%d remainder:%d\n","fts_flash_write_buf",uVar3,param_3 & 0x1f);
    if (uVar3 == 0) {
      bVar22 = 0;
    }
    else {
      uVar23 = 0;
      uVar18 = 0;
      bVar22 = 0;
      uVar20 = 0x20;
      do {
        uVar10 = _local_90;
        uVar2 = param_1 + uVar18 * 0x20;
        uVar19 = param_3 & 0x1f;
        if (uVar18 != uVar3 - 1 || (param_3 & 0x1f) == 0) {
          uVar19 = (uint)uVar20;
        }
        uVar20 = (ulong)uVar19;
        uVar4 = (undefined1)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        if (*(int *)(*plVar8 + 0x4a0) == 3) {
          uVar7 = CONCAT41(stack0xffffffffffffff74,(char)uVar2);
          _local_90 = CONCAT71((uint7)bVar5,0xab);
          _local_90 = CONCAT12(uVar4,_local_90);
          _local_90 = CONCAT53(uVar7,_local_90);
          uVar12 = fts_write(&local_90,4);
          if (-1 < (int)uVar12) {
            uVar14 = 1;
            _local_90 = CONCAT71(_auStack_8f,0xbf);
            goto joined_r0x0011c79c;
          }
          puVar13 = "<3>[FTS_TS/E]%s:set flash address fail\n";
LAB_0011c944:
          _printk(puVar13,"fts_flash_write_buf");
          goto LAB_0011c8a8;
        }
        _local_90 = (int)CONCAT41(stack0xffffffffffffff74,(char)uVar2) << 0x18;
        uVar12 = (uint)_local_90 >> 0x10;
        _local_90 = CONCAT11(bVar5,0xbf);
        uVar9 = _local_90;
        uVar12 = CONCAT22((short)uVar12,_local_90);
        uVar14 = 6;
        uStack_8a = SUB82(uVar10,6);
        _local_90 = CONCAT15((char)uVar19,(uint5)uVar12);
        _local_90 = CONCAT12(uVar4,uVar9);
joined_r0x0011c79c:
        if (uVar19 != 0) {
          uVar15 = (ulong)(0x28 - (int)uVar14);
          pbVar16 = (byte *)((ulong)&local_90 | uVar14);
          uVar17 = uVar20;
          uVar12 = uVar23;
          do {
            if (uVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x11c958);
              (*pcVar11)();
            }
            uVar1 = (ulong)uVar12;
            uVar15 = uVar15 - 1;
            uVar17 = uVar17 - 1;
            uVar12 = uVar12 + 1;
            bVar22 = *(byte *)(param_2 + uVar1) ^ bVar22;
            *pbVar16 = *(byte *)(param_2 + uVar1);
            pbVar16 = pbVar16 + 1;
          } while (uVar17 != 0);
        }
        uVar12 = fts_write(&local_90,(int)uVar14 + uVar19);
        if ((int)uVar12 < 0) {
          puVar13 = "<3>[FTS_TS/E]%s:app write fail\n";
          goto LAB_0011c944;
        }
        if (param_4 != 0) {
          uVar14 = (ulong)param_4;
          do {
            uVar14 = uVar14 - 1;
            __const_udelay(0x418958);
          } while (uVar14 != 0);
        }
        uVar12 = 0;
        if (uVar19 != 0) {
          uVar12 = uVar2 / uVar19;
        }
        iVar21 = 100;
        do {
          local_94[0] = 0x6a;
          fts_read(local_94,1,local_98,2);
          if ((uVar12 + 0x1000 & 0xffff) ==
              ((local_98[0] & 0xff00) << 8 | (uint)local_98[0] << 0x18) >> 0x10) break;
          __const_udelay(0x418958);
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        uVar18 = uVar18 + 1;
        uVar23 = uVar23 + 0x20;
      } while (uVar18 != uVar3);
    }
    if ((*(int *)(plVar8[2] + 0x28) == 1) || (0xff < *(int *)(plVar8[2] + 0x2c))) {
      uVar12 = fts_crc16_calc_host(param_2,param_3);
      uVar12 = uVar12 & 0xffff;
    }
    else {
      uVar12 = (uint)bVar22;
    }
  }
LAB_0011c8a8:
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* ---- fts_crc16_calc_host @ 0011c95c ---- */

uint fts_crc16_calc_host(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    uVar2 = uVar4 + 1;
    uVar1 = (ulong)uVar4;
    uVar4 = uVar4 + 2;
    uVar3 = CONCAT11(*(undefined1 *)(param_1 + uVar1),*(undefined1 *)(param_1 + (ulong)uVar2)) ^
            uVar3;
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar2 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 >> 1 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 >> 1 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 >> 1 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 >> 1 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 >> 1 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 >> 1 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
    uVar2 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 >> 1 ^ 0x8408;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 >> 1 ^ 0x8408;
    }
  } while (uVar4 < param_2);
  return uVar3;
}



/* ---- fts_flash_read_buf @ 0011ca98 ---- */

int fts_flash_read_buf(int param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar4;
  byte bVar3;
  undefined1 uVar2;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined8 *in_x18;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 unaff_x30;
  undefined4 local_70;
  short local_6c;
  long local_68;
  
  *in_x18 = unaff_x30;
  plVar6 = fwupgrade;
  lVar5 = sp_el0;
  local_68 = *(long *)(lVar5 + 0x5e0);
  iVar7 = -0x16;
  puVar8 = "<3>[FTS_TS/E]%s:upgrade/buf is NULL or len is 0\n";
  local_6c = 0;
  local_70 = 0;
  if (((param_3 == 0) || (param_2 == 0)) || (fwupgrade == (long *)0x0)) {
LAB_0011cca0:
    _printk(puVar8,"fts_flash_read_buf");
  }
  else {
    uVar10 = param_3 >> 5;
    param_3 = param_3 & 0x1f;
    if (param_3 != 0) {
      uVar10 = uVar10 + 1;
    }
    uVar9 = (ulong)uVar10;
    _printk("<6>[FTS_TS/I]%s:read packet_number:%d, remainder:%d\n","fts_flash_read_buf",uVar9,param_3);
    if (uVar10 != 0) {
      uVar11 = (ulong)(uVar10 - 1);
      puVar8 = "<3>[FTS_TS/E]%s:pram/bootloader write 03 command fail\n";
      uVar10 = 0x20;
      do {
        iVar7 = *(int *)(*plVar6 + 0x4a0);
        uVar1 = param_3;
        if (uVar11 != 0 || param_3 == 0) {
          uVar1 = uVar10;
        }
        uVar2 = (undefined1)param_1;
        bVar3 = (byte)((uint)param_1 >> 0x10);
        uVar4 = (undefined1)((uint)param_1 >> 8);
        if (iVar7 == 3) {
          local_70 = CONCAT31((uint3)bVar3,0xac);
          local_70._0_3_ = CONCAT12(uVar4,(undefined2)local_70);
          local_70 = CONCAT13(uVar2,(undefined3)local_70);
          iVar7 = fts_write(&local_70,4);
          if (iVar7 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:set flash address fail\n";
            goto LAB_0011cca0;
          }
          msleep(1);
          local_70 = CONCAT31(local_70._1_3_,3);
          iVar7 = fts_read(&local_70,1,param_2,uVar1);
          if (iVar7 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:pram/bootloader read 03(SPI_V2) command fail\n";
            goto LAB_0011cca0;
          }
        }
        else if (iVar7 == 2) {
          local_70._0_2_ = CONCAT11(bVar3,3);
          local_70._0_3_ = CONCAT12(uVar4,(undefined2)local_70);
          local_70 = CONCAT13(uVar2,(undefined3)local_70);
          local_6c = (ushort)(byte)uVar1 << 8;
          iVar7 = fts_read(&local_70,6,param_2,uVar1);
          if (iVar7 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:pram/bootloader read 03(SPI) command fail\n";
            goto LAB_0011cca0;
          }
        }
        else if (iVar7 == 1) {
          local_70._0_2_ = CONCAT11(bVar3,3);
          local_70._0_3_ = CONCAT12(uVar4,(undefined2)local_70);
          local_70 = CONCAT13(uVar2,(undefined3)local_70);
          iVar7 = fts_write(&local_70,4);
          if (iVar7 < 0) goto LAB_0011cca0;
          msleep(1);
          iVar7 = fts_read(0,0,param_2,uVar1);
          if (iVar7 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:pram/bootloader read 03 command fail\n";
            goto LAB_0011cca0;
          }
        }
        uVar9 = uVar9 - 1;
        uVar11 = uVar11 - 1;
        param_2 = param_2 + 0x20;
        param_1 = param_1 + 0x20;
        uVar10 = uVar1;
      } while (uVar9 != 0);
    }
    iVar7 = 0;
  }
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* ---- fts_flash_read @ 0011ccf4 ---- */

int fts_flash_read(undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  _printk("<6>[FTS_TS/I]%s:***********read flash***********\n","fts_flash_read");
  if ((param_2 == 0) || (param_3 == 0)) {
    _printk("<3>[FTS_TS/E]%s:buf is NULL or len is 0\n","fts_flash_read");
    iVar2 = -0x16;
    goto LAB_0011cdd4;
  }
  iVar2 = fts_fwupg_enter_into_boot();
  if (iVar2 < 0) {
    puVar3 = "<3>[FTS_TS/E]%s:enter into pramboot/bootloader fail\n";
LAB_0011cd90:
    _printk(puVar3,"fts_flash_read");
  }
  else {
    iVar2 = fts_flash_read_buf(param_1,param_2,param_3);
    if (iVar2 < 0) {
      puVar3 = "<3>[FTS_TS/E]%s:read flash fail\n";
      goto LAB_0011cd90;
    }
  }
  local_3c[0] = 7;
  _printk("<6>[FTS_TS/I]%s:reset in boot environment\n","fts_fwupg_reset_in_boot");
  iVar2 = fts_write(local_3c,1);
  if (iVar2 < 0) {
    _printk("<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n","fts_fwupg_reset_in_boot");
    _printk("<3>[FTS_TS/E]%s:reset to normal boot fail\n","fts_flash_read");
  }
  else {
    msleep(0x50);
    iVar2 = 0;
  }
LAB_0011cdd4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- fts_upgrade_bin @ 0011ce3c ---- */

uint fts_upgrade_bin(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  void *__dest;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 *in_x18;
  code *pcVar8;
  undefined8 unaff_x30;
  size_t *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
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
  long local_48;
  
  *in_x18 = unaff_x30;
  plVar2 = fwupgrade;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  _printk("<6>[FTS_TS/I]%s:start upgrade with fw bin\n","fts_upgrade_bin");
  if (((plVar2 == (long *)0x0) || (plVar2[2] == 0)) || (*plVar2 == 0)) {
    _printk("<3>[FTS_TS/E]%s:upgrade/func/ts_data is null\n","fts_upgrade_bin");
    uVar5 = 0xffffffea;
    goto LAB_0011ceb8;
  }
  *(undefined1 *)(*plVar2 + 0x322) = 1;
  fts_irq_disable();
  fts_esdcheck_switch(*plVar2,0);
  plVar3 = fwupgrade;
  local_d0 = (size_t *)0x0;
  local_c8 = 0;
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
  local_c0 = 0;
  snprintf((char *)&local_c8,0x80,"%s",param_1);
  iVar4 = request_firmware(&local_d0,&local_c8,*(undefined8 *)(*plVar3 + 0x10));
  if (iVar4 == 0) {
    _printk("<6>[FTS_TS/I]%s:firmware(%s) request successfully\n","fts_read_file_request_firmware",&local_c8);
    __dest = (void *)vmalloc(*local_d0);
    if (__dest == (void *)0x0) {
      _printk("<3>[FTS_TS/E]%s:fw buffer vmalloc fail\n","fts_read_file_request_firmware");
      uVar5 = 0xfffffff4;
      goto LAB_0011cfc4;
    }
    memcpy(__dest,(void *)local_d0[1],*local_d0);
    uVar5 = (uint)*local_d0;
  }
  else {
    _printk("<6>[FTS_TS/I]%s:firmware(%s) request fail,ret=%d\n","fts_read_file_request_firmware",&local_c8,iVar4);
    uVar5 = 0xfffffffb;
LAB_0011cfc4:
    __dest = (void *)0x0;
  }
  if (local_d0 != (size_t *)0x0) {
    release_firmware();
  }
  if ((int)uVar5 < 0) {
    _printk("<3>[FTS_TS/E]%s:get fw file(default) fail\n","fts_read_file");
LAB_0011cff8:
    _printk("<3>[FTS_TS/E]%s:read fw bin file(%s) fail, len:%d\n","fts_upgrade_bin",param_1,uVar5);
  }
  else {
    if (uVar5 < 0x120) goto LAB_0011cff8;
    _printk("<6>[FTS_TS/I]%s:fw bin file len:%d\n","fts_upgrade_bin",uVar5);
    if ((param_2 & 1) == 0) {
      pcVar7 = *(code **)(plVar2[2] + 0x58);
      if (pcVar7 != (code *)0x0) {
        pcVar8 = fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt;
        if (pcVar7 != fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt) {
          puVar6 = &DAT_00104bd0;
          goto LAB_0011d190;
        }
        goto LAB_0011d0ec;
      }
      _printk("<6>[FTS_TS/I]%s:upgrade function is null, no upgrade\n","fts_upgrade_bin");
LAB_0011d14c:
      _printk("<6>[FTS_TS/I]%s:upgrade fw bin success\n","fts_upgrade_bin");
      uVar5 = 0;
    }
    else {
      pcVar7 = *(code **)(plVar2[2] + 0x78);
      if (pcVar7 == (code *)0x0) {
        _printk("<6>[FTS_TS/I]%s:force_upgrade function is null, no upgrade\n","fts_upgrade_bin");
      }
      else {
        pcVar8 = fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt;
        if (pcVar7 != fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt) {
          puVar6 = &DAT_00104bb0;
LAB_0011d190:
          __cfi_slowpath_diag(0x7d3c5fba6f1f83eb,pcVar7,puVar6);
          pcVar8 = pcVar7;
        }
LAB_0011d0ec:
        uVar5 = (*pcVar8)(__dest,uVar5);
        if (-1 < (int)uVar5) goto LAB_0011d14c;
        _printk("<3>[FTS_TS/E]%s:upgrade fw bin failed\n","fts_upgrade_bin");
        local_c8 = CONCAT71(local_c8._1_7_,7);
        _printk("<6>[FTS_TS/I]%s:reset in boot environment\n","fts_fwupg_reset_in_boot");
        iVar4 = fts_write(&local_c8,1);
        if (iVar4 < 0) {
          _printk("<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n","fts_fwupg_reset_in_boot");
        }
        else {
          msleep(0x50);
        }
      }
    }
  }
  fts_esdcheck_switch(*plVar2,1);
  fts_irq_enable();
  *(undefined1 *)(*plVar2 + 0x322) = 0;
  if (__dest != (void *)0x0) {
    vfree(__dest);
  }
LAB_0011ceb8:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* ---- fts_enter_test_environment @ 0011d1ac ---- */

undefined8 fts_enter_test_environment(void)

{
  return 0;
}



/* ---- fts_fwupg_upgrade @ 0011d1bc ---- */

int fts_fwupg_upgrade(long param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *in_x18;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 unaff_x30;
  undefined *local_88;
  undefined1 local_78 [4];
  char local_74 [4];
  byte local_70 [4];
  undefined1 local_6c [4];
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_68 = *(long *)(lVar2 + 0x5e0);
  local_78[0] = 0;
  _printk("<6>[FTS_TS/I]%s:fw auto upgrade function\n","fts_fwupg_upgrade");
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    _printk("<3>[FTS_TS/E]%s:upg/upg->func is null\n","fts_fwupg_upgrade");
    iVar7 = -0x16;
    goto LAB_0011d230;
  }
  local_70[0] = 0;
  iVar7 = fts_wait_tp_to_valid();
  puVar9 = "<6>[FTS_TS/I]%s:tp fw invaild\n";
  if (-1 < iVar7) {
    puVar9 = "<6>[FTS_TS/I]%s:tp fw vaild\n";
  }
  _printk(puVar9,"fts_fwupg_check_fw_valid");
  if (iVar7 < 0) {
    _printk("<6>[FTS_TS/I]%s:fw invalid, need upgrade fw\n","fts_fwupg_need_upgrade");
    bVar6 = true;
  }
  else {
    if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x28) == 0)) {
      _printk("<3>[FTS_TS/E]%s:upgrade/func/fw/ver is NULL\n","fts_fwupg_get_ver_in_host");
LAB_0011d2e4:
      puVar9 = "<3>[FTS_TS/E]%s:get fw ver in host fail\n";
    }
    else {
      uVar11 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
      if (*(uint *)(param_1 + 0x30) < uVar11) {
        _printk("<3>[FTS_TS/E]%s:fw len(0x%0x) < fw ver offset(0x%x)\n","fts_fwupg_get_ver_in_host");
        goto LAB_0011d2e4;
      }
      _printk("<6>[FTS_TS/I]%s:fw version offset:0x%x\n","fts_fwupg_get_ver_in_host",uVar11);
      bVar10 = *(byte *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 8)
                        );
      local_6c[0] = 0xa6;
      iVar7 = fts_read(local_6c,1,local_70,1);
      if (-1 < iVar7) {
        _printk("<6>[FTS_TS/I]%s:fw version in tp:%x, host:%x\n","fts_fwupg_need_upgrade",local_70[0],bVar10);
        _printk("<6>[FTS_TS/I]%s:tp_info: [Vendor]samsung,[FW]0x%02x,[IC]ft3519t\n\n","fts_fwupg_need_upgrade",local_70[0]);
        bVar6 = local_70[0] != bVar10;
        goto LAB_0011d2fc;
      }
      _printk("<3>[FTS_TS/E]%s:read fw ver from tp fail\n","fts_fwupg_get_ver_in_tp");
      puVar9 = "<3>[FTS_TS/E]%s:get fw ver in tp fail\n";
    }
    _printk(puVar9,"fts_fwupg_need_upgrade");
    bVar6 = false;
  }
LAB_0011d2fc:
  _printk("<6>[FTS_TS/I]%s:fw upgrade flag:%d\n","fts_fwupg_upgrade",bVar6);
  iVar7 = 0;
  uVar14 = 1;
  local_88 = "<6>[FTS_TS/I]%s:param version in tp invalid\n";
  bVar5 = true;
  do {
    bVar3 = bVar5;
    if (bVar6 == false) {
      if (*(long *)(*(long *)(param_1 + 0x10) + 0x70) == 0) break;
      local_70[0] = 0;
      local_74[0] = '\0';
      iVar7 = fts_wait_tp_to_valid();
      puVar9 = "<6>[FTS_TS/I]%s:tp fw invaild\n";
      if (-1 < iVar7) {
        puVar9 = "<6>[FTS_TS/I]%s:tp fw vaild\n";
      }
      _printk(puVar9,"fts_fwupg_check_fw_valid");
      puVar9 = "<6>[FTS_TS/I]%s:fw is invalid, upgrade app+param\n";
      if (-1 < iVar7) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x28) == 0)) {
          _printk("<3>[FTS_TS/E]%s:upgrade/func/fw is NULL\n","fts_param_ide_in_host");
          iVar7 = -0x16;
          puVar9 = "<6>[FTS_TS/I]%s:fts_param_ide_in_host fail\n";
LAB_0011d9a4:
          _printk(puVar9,"fts_param_need_upgrade");
        }
        else {
          uVar11 = *(uint *)(*(long *)(param_1 + 0x10) + 0x18);
          if (*(uint *)(param_1 + 0x30) < uVar11 + 4) {
            _printk("<6>[FTS_TS/I]%s:fw len(%x) < paramcfg offset(%x), no IDE\n","fts_param_ide_in_host");
LAB_0011d414:
            bVar5 = false;
            bVar10 = 1;
          }
          else {
            if (*(int *)(*(long *)(param_1 + 0x28) + (ulong)uVar11) != 0x5f454449) {
              _printk("<6>[FTS_TS/I]%s:fw in host isn't IDE version\n","fts_param_ide_in_host");
              goto LAB_0011d414;
            }
            _printk("<6>[FTS_TS/I]%s:fw in host is IDE version\n","fts_param_ide_in_host");
            bVar10 = 0;
            bVar5 = true;
          }
          local_6c[0] = 0xb6;
          iVar7 = fts_read(local_6c,1,local_70,1);
          bVar4 = local_70[0];
          if (iVar7 < 0) {
            _printk("<3>[FTS_TS/E]%s:read IDE PARAM STATUS in tp fail\n","fts_param_ide_in_tp");
            puVar9 = "<6>[FTS_TS/I]%s:fts_param_ide_in_tp fail\n";
            goto LAB_0011d9a4;
          }
          uVar11 = (uint)local_70[0];
          uVar12 = (uint)local_70[0];
          puVar9 = "<6>[FTS_TS/I]%s:fw in tp is IDE version\n";
          if (!SCARRY4(uVar12,1)) {
            puVar9 = "<6>[FTS_TS/I]%s:fw in tp isn't IDE version\n";
          }
          _printk(puVar9,"fts_param_ide_in_tp");
          if ((bool)(bVar10 & (uVar11 != 0xfffffffe && !SCARRY4(uVar11,2)))) {
            iVar7 = 0;
            puVar9 = "<6>[FTS_TS/I]%s:fw in host&tp are both no ide\n";
            goto LAB_0011d9a4;
          }
          puVar9 = "<6>[FTS_TS/I]%s:fw in host&tp not equal, need upgrade app+param\n";
          if (bVar5 != SCARRY4(uVar12,1)) goto LAB_0011d588;
          if ((bVar5 & SCARRY4((uint)bVar4,1)) == 1) {
            _printk("<6>[FTS_TS/I]%s:fw in host&tp are both ide\n","fts_param_need_upgrade");
            if ((local_70[0] & 0x7f) != 0) {
              _printk("<6>[FTS_TS/I]%s:param invalid, need upgrade param\n","fts_param_need_upgrade");
LAB_0011d62c:
              _printk("<6>[FTS_TS/I]%s:upgrade param area(times:%d)\n","fts_fwupg_upgrade",uVar14);
              pcVar13 = *(code **)(*(long *)(param_1 + 0x10) + 0x70);
              if (pcVar13 != fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt) {
                __cfi_slowpath_diag(0x7d3c5fba6f1f83eb,pcVar13,&DAT_00104c30);
              }
              iVar7 = (*pcVar13)(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
              if (iVar7 < 0) goto LAB_0011d6b0;
              fts_param_get_ver_in_tp(local_78);
              puVar9 = "<6>[FTS_TS/I]%s:success upgrade to fw param version %02x\n";
              goto LAB_0011d96c;
            }
            if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x28) == 0)) {
              _printk("<3>[FTS_TS/E]%s:upgrade/func/fw/ver is NULL\n","fts_param_get_ver_in_host");
            }
            else {
              uVar11 = *(uint *)(*(long *)(param_1 + 0x10) + 0x1c);
              if (uVar11 <= *(uint *)(param_1 + 0x30)) {
                _printk("<6>[FTS_TS/I]%s:fw paramcfg version offset:%x\n","fts_param_get_ver_in_host",uVar11);
                cVar1 = *(char *)(*(long *)(param_1 + 0x28) +
                                 (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x1c));
                if ((cVar1 == -1) || (cVar1 == '\0')) {
                  _printk("<6>[FTS_TS/I]%s:param version in host invalid\n","fts_param_get_ver_in_host");
                  iVar7 = -5;
                  puVar9 = "<3>[FTS_TS/E]%s:param version in host invalid\n";
                  goto LAB_0011d9a4;
                }
                local_6c[0] = 0xb5;
                iVar7 = fts_read(local_6c,1,local_74,1);
                if (iVar7 < 0) {
                  local_88 = "<3>[FTS_TS/E]%s:read fw param ver from tp fail\n";
                }
                else {
                  iVar7 = -5;
                  if ((local_74[0] != -1) && (local_74[0] != '\0')) {
                    _printk("<6>[FTS_TS/I]%s:fw paramcfg version in tp:%x, host:%x\n","fts_param_need_upgrade",local_74[0],cVar1);
                    if (local_74[0] == cVar1) goto LAB_0011d8bc;
                    goto LAB_0011d62c;
                  }
                }
                _printk(local_88,"fts_param_get_ver_in_tp");
                puVar9 = "<3>[FTS_TS/E]%s:get IDE param ver in tp fail\n";
                goto LAB_0011d9a4;
              }
              _printk("<3>[FTS_TS/E]%s:fw len(%x) < paramcfg ver offset(%x)\n","fts_param_get_ver_in_host");
            }
            iVar7 = -0x16;
            puVar9 = "<3>[FTS_TS/E]%s:param version in host invalid\n";
            goto LAB_0011d9a4;
          }
LAB_0011d8bc:
          iVar7 = 0;
        }
        _printk("<6>[FTS_TS/I]%s:param don't need upgrade\n","fts_fwupg_upgrade");
        break;
      }
LAB_0011d588:
      _printk(puVar9,"fts_param_need_upgrade");
      _printk("<6>[FTS_TS/I]%s:force upgrade fw app(times:%d)\n","fts_fwupg_upgrade",uVar14);
      pcVar13 = *(code **)(*(long *)(param_1 + 0x10) + 0x58);
      if (pcVar13 == (code *)0x0) {
        iVar7 = 1;
      }
      else {
        if (pcVar13 != fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt) {
          __cfi_slowpath_diag(0x7d3c5fba6f1f83eb,pcVar13,&DAT_00104c10);
        }
        iVar7 = (*pcVar13)(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
        if (-1 < iVar7) break;
        local_6c[0] = 7;
        _printk("<6>[FTS_TS/I]%s:reset in boot environment\n","fts_fwupg_reset_in_boot");
        iVar8 = fts_write(local_6c,1);
        if (iVar8 < 0) {
          _printk("<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n","fts_fwupg_reset_in_boot");
        }
        else {
          msleep(0x50);
        }
      }
    }
    else {
      _printk("<6>[FTS_TS/I]%s:upgrade fw app(times:%d)\n","fts_fwupg_upgrade",uVar14);
      pcVar13 = *(code **)(*(long *)(param_1 + 0x10) + 0x58);
      if (pcVar13 == (code *)0x0) {
        _printk("<3>[FTS_TS/E]%s:upgrade func/upgrade is null, return immediately\n","fts_fwupg_upgrade");
        iVar7 = -0x3d;
        break;
      }
      if (pcVar13 != fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt) {
        __cfi_slowpath_diag(0x7d3c5fba6f1f83eb,pcVar13,&DAT_00104bf0);
      }
      iVar7 = (*pcVar13)(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
      if (-1 < iVar7) {
        fts_fwupg_get_ver_in_tp(local_78);
        puVar9 = "<6>[FTS_TS/I]%s:success upgrade to fw version %02x\n";
LAB_0011d96c:
        _printk(puVar9,"fts_fwupg_upgrade",local_78[0]);
        break;
      }
LAB_0011d6b0:
      local_6c[0] = 7;
      _printk("<6>[FTS_TS/I]%s:reset in boot environment\n","fts_fwupg_reset_in_boot");
      iVar8 = fts_write(local_6c,1);
      if (iVar8 < 0) {
        _printk("<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n","fts_fwupg_reset_in_boot");
      }
      else {
        msleep(0x50);
      }
    }
    uVar14 = 2;
    bVar5 = false;
  } while (bVar3);
LAB_0011d230:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* ---- fts_fwupg_get_ver_in_tp @ 0011d9cc ---- */

void fts_fwupg_get_ver_in_tp(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_1c [4];
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  if (param_1 == 0) {
    puVar3 = "<3>[FTS_TS/E]%s:ver is NULL\n";
  }
  else {
    local_1c[0] = 0xa6;
    iVar2 = fts_read(local_1c,1,param_1,1);
    if (-1 < iVar2) goto LAB_0011da10;
    puVar3 = "<3>[FTS_TS/E]%s:read fw ver from tp fail\n";
  }
  _printk(puVar3,"fts_fwupg_get_ver_in_tp");
LAB_0011da10:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- fts_param_get_ver_in_tp @ 0011da60 ---- */

int fts_param_get_ver_in_tp(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  if (param_1 == (char *)0x0) {
    iVar2 = -0x16;
    puVar3 = "<3>[FTS_TS/E]%s:ver is NULL\n";
  }
  else {
    local_2c[0] = 0xb5;
    iVar2 = fts_read(local_2c,1,param_1,1);
    if (iVar2 < 0) {
      puVar3 = "<3>[FTS_TS/E]%s:read fw param ver from tp fail\n";
    }
    else {
      iVar2 = -5;
      puVar3 = "<6>[FTS_TS/I]%s:param version in tp invalid\n";
      if ((*param_1 != -1) && (*param_1 != '\0')) {
        iVar2 = 0;
        goto LAB_0011daf8;
      }
    }
  }
  _printk(puVar3,"fts_param_get_ver_in_tp");
LAB_0011daf8:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- fts_fwupg_init @ 0011db2c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fts_fwupg_init(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar1 = upgrade_func_list;
  _printk("<6>[FTS_TS/I]%s:fw upgrade init function\n","fts_fwupg_init");
  if ((param_1 == 0) || (*(long *)(param_1 + 0x50) == 0)) {
    _printk("<3>[FTS_TS/E]%s:ts_data/workqueue is NULL, can't run upgrade function\n","fts_fwupg_init");
    uVar3 = 0xffffffea;
  }
  else {
    plVar2 = (long *)kmem_cache_alloc_trace(_set_lct_tp_work_status,0xdc0,0x48);
    fwupgrade = plVar2;
    if (plVar2 == (long *)0x0) {
      _printk("<3>[FTS_TS/E]%s:malloc memory for upgrade fail\n","fts_fwupg_init");
      uVar3 = 0xfffffff4;
    }
    else {
      plVar2[2] = (long)puVar1;
      if (puVar1 == (undefined *)0x0) {
        _printk("<3>[FTS_TS/E]%s:no upgrade function match, can't upgrade\n","fts_fwupg_init");
        kfree(fwupgrade);
        uVar3 = 0xffffffc3;
        fwupgrade = (long *)0x0;
      }
      else {
        *plVar2 = param_1;
        *(undefined8 *)(param_1 + 0x58) = 0xfffffffe0;
        *(long *)(param_1 + 0x60) = param_1 + 0x60;
        *(long *)(param_1 + 0x68) = param_1 + 0x60;
        *(code **)(param_1 + 0x70) = fts_fwupg_work_b389cb1971f7e0f880fff3568d7a700a_cfi_jt;
        queue_work_on(0x20,*(undefined8 *)(param_1 + 0x50));
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



/* ---- fts_fwupg_work.b389cb1971f7e0f880fff3568d7a700a @ 0011dc48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fts_fwupg_work_b389cb1971f7e0f880fff3568d7a700a(void)

{
  undefined4 uVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  void *__dest;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  size_t sVar10;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  size_t *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
  long local_28;
  
  *in_x18 = unaff_x30;
  plVar3 = fwupgrade;
  lVar8 = sp_el0;
  local_28 = *(long *)(lVar8 + 0x5e0);
  _printk("<6>[FTS_TS/I]%s:fw upgrade work function\n","fts_fwupg_work");
  if ((plVar3 == (long *)0x0) || (*plVar3 == 0)) {
    _printk("<3>[FTS_TS/E]%s:upg/ts_data is null\n","fts_fwupg_work");
    goto LAB_0011df58;
  }
  *(undefined1 *)(*plVar3 + 0x322) = 1;
  fts_irq_disable();
  fts_esdcheck_switch(*plVar3,0);
  if (*plVar3 == 0) {
    _printk("<3>[FTS_TS/E]%s:upg/ts_data is null\n","fts_fwupg_get_fw_file");
LAB_0011de4c:
    puVar5 = "<3>[FTS_TS/E]%s:get file fail, can't upgrade\n";
    pcVar6 = "fts_fwupg_work";
  }
  else {
    local_b0 = (size_t *)0x0;
    uStack_a8 = 0;
    plVar3[1] = (long)&module_list;
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
    local_a0 = 0;
    if (*(long *)(*plVar3 + 0x10) == 0) {
      _printk("<3>[FTS_TS/E]%s:upg/ts_data/dev is null\n","fts_get_fw_file_via_request_firmware");
LAB_0011ddf8:
      lVar8 = *(long *)(plVar3[1] + 0x18);
      plVar3[5] = lVar8;
      uVar1 = *(undefined4 *)(plVar3[1] + 0x20);
      *(undefined1 *)((long)plVar3 + 0x24) = 0;
      *(undefined4 *)(plVar3 + 6) = uVar1;
    }
    else {
      snprintf((char *)&uStack_a8,0x80,"%s%s.bin","focaltech_ts_fw_",s_samsung_ft3519t_00100ddc);
      iVar4 = request_firmware(&local_b0,&uStack_a8,*(undefined8 *)(*plVar3 + 0x10));
      if (iVar4 == 0) {
        _printk("<6>[FTS_TS/I]%s:firmware(%s) request successfully\n","fts_get_fw_file_via_request_firmware",&uStack_a8);
        __dest = (void *)vmalloc(*local_b0);
        if (__dest == (void *)0x0) {
          _printk("<3>[FTS_TS/E]%s:fw buffer vmalloc fail\n","fts_get_fw_file_via_request_firmware");
          goto joined_r0x0011dde0;
        }
        memcpy(__dest,(void *)local_b0[1],*local_b0);
        plVar3[5] = (long)__dest;
        bVar2 = true;
        sVar10 = *local_b0;
        *(undefined1 *)((long)plVar3 + 0x24) = 1;
        *(int *)(plVar3 + 6) = (int)sVar10;
      }
      else {
        _printk("<6>[FTS_TS/I]%s:firmware(%s) request fail,ret=%d\n","fts_get_fw_file_via_request_firmware",&uStack_a8,iVar4);
joined_r0x0011dde0:
        bVar2 = false;
      }
      if (local_b0 != (size_t *)0x0) {
        release_firmware();
      }
      if (!bVar2) goto LAB_0011ddf8;
      lVar8 = plVar3[5];
      uVar1 = (undefined4)plVar3[6];
    }
    plVar3[7] = lVar8;
    *(undefined4 *)(plVar3 + 8) = uVar1;
    _printk("<6>[FTS_TS/I]%s:upgrade fw file len:%d\n","fts_fwupg_get_fw_file");
    uVar7 = *(uint *)(plVar3 + 6);
    if (uVar7 < 0x120) {
      _printk("<3>[FTS_TS/E]%s:fw file len(%d) fail\n","fts_fwupg_get_fw_file");
      goto LAB_0011de4c;
    }
    if ((plVar3[2] != 0) && (pcVar9 = *(code **)(plVar3[2] + 0x48), pcVar9 != (code *)0x0)) {
      if (pcVar9 != fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773_cfi_jt) {
        __cfi_slowpath_diag(0x7d3c5fba6f1f83eb,pcVar9,&DAT_00104c70);
        uVar7 = *(uint *)(plVar3 + 6);
      }
      (*pcVar9)(plVar3[5],uVar7);
    }
    _printk("<6>[FTS_TS/I]%s:********************FTS enter upgrade********************\n","fts_fwupg_auto_upgrade");
    if (*plVar3 == 0) {
      puVar5 = "<3>[FTS_TS/E]%s:upg/ts_data is null\n";
    }
    else {
      iVar4 = fts_fwupg_upgrade(plVar3);
      puVar5 = "<3>[FTS_TS/E]%s:**********tp fw(app/param) upgrade failed**********\n";
      if (-1 < iVar4) {
        puVar5 = "<6>[FTS_TS/I]%s:**********tp fw(app/param) no upgrade/upgrade success**********\n";
      }
      _printk(puVar5,"fts_fwupg_auto_upgrade");
      puVar5 = "<6>[FTS_TS/I]%s:********************FTS exit upgrade********************\n";
    }
    pcVar6 = "fts_fwupg_auto_upgrade";
  }
  _printk(puVar5,pcVar6);
  fts_esdcheck_switch(*plVar3,1);
  fts_irq_enable();
  pcVar9 = _kmalloc_caches;
  *(undefined1 *)(*plVar3 + 0x322) = 0;
  if ((pcVar9 == (code *)0x0) || ((code *)0xfffffffffffff000 < pcVar9)) {
    if (g_touchscreen_usb_pulgin == '\0') goto LAB_0011df58;
  }
  else {
    g_touchscreen_usb_pulgin = '\x01';
  }
  if (1 < ((ulong)(pcVar9 + -0x1114f8) >> 3 | (long)pcVar9 << 0x3d)) {
    __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar9,&DAT_00104c50);
  }
  (*pcVar9)();
LAB_0011df58:
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- fts_fwupg_exit @ 0011e010 ---- */

undefined8 fts_fwupg_exit(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  cancel_work_sync(param_1 + 0x58);
  if (fwupgrade != 0) {
    if (*(char *)(fwupgrade + 0x24) != '\0') {
      vfree(*(undefined8 *)(fwupgrade + 0x28));
      *(undefined8 *)(fwupgrade + 0x28) = 0;
    }
    kfree();
    fwupgrade = 0;
  }
  return 0;
}



/* ---- fts_fwupg_get_boot_state @ 0011e070 ---- */

void fts_fwupg_get_boot_state(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined2 local_30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  local_2c = 0xaa55;
  local_30 = 0;
  _printk("<6>[FTS_TS/I]%s:**********read boot id**********\n","fts_fwupg_get_boot_state");
  if ((((param_1 == (long *)0x0) || (lVar4 = param_1[2], lVar4 == 0)) ||
      (param_2 == (undefined4 *)0x0)) || (*param_1 == 0)) {
    puVar2 = "<3>[FTS_TS/E]%s:upg/func/ts_data/fw_sts is null\n";
  }
  else {
    if (*(char *)(lVar4 + 0x34) != '\0') {
      fts_hid2std();
      lVar4 = param_1[2];
    }
    uVar3 = 1;
    if (*(int *)(lVar4 + 0x2c) < 0x100) {
      uVar3 = 2;
    }
    iVar1 = fts_write(&local_2c,uVar3);
    if (iVar1 < 0) {
      puVar2 = "<3>[FTS_TS/E]%s:write 55 cmd fail\n";
    }
    else {
      msleep(0xc);
      local_2c = 0x90;
      if (*(char *)(*param_1 + 0x30) == '\0') {
        uVar3 = 4;
        if (0xff < *(int *)(param_1[2] + 0x2c)) {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
      }
      iVar1 = fts_read(&local_2c,uVar3,&local_30,2);
      if (-1 < iVar1) {
        _printk("<6>[FTS_TS/I]%s:read boot id:0x%02x%02x\n","fts_fwupg_get_boot_state",(char)local_30,local_30._1_1_);
        lVar4 = *param_1;
        if (((char)local_30 == *(char *)(lVar4 + 0x36)) &&
           (local_30._1_1_ == *(char *)(lVar4 + 0x37))) {
          _printk("<6>[FTS_TS/I]%s:tp run in romboot\n","fts_fwupg_get_boot_state");
          uVar3 = 2;
        }
        else if (((char)local_30 == *(char *)(lVar4 + 0x38)) &&
                (local_30._1_1_ == *(char *)(lVar4 + 0x39))) {
          _printk("<6>[FTS_TS/I]%s:tp run in pramboot\n","fts_fwupg_get_boot_state");
          uVar3 = 3;
        }
        else {
          if (((char)local_30 != *(char *)(lVar4 + 0x3a)) ||
             (local_30._1_1_ != *(char *)(lVar4 + 0x3b))) goto LAB_0011e120;
          _printk("<6>[FTS_TS/I]%s:tp run in bootloader\n","fts_fwupg_get_boot_state");
          uVar3 = 4;
        }
        *param_2 = uVar3;
        goto LAB_0011e120;
      }
      puVar2 = "<3>[FTS_TS/E]%s:write 90 cmd fail\n";
    }
  }
  _printk(puVar2,"fts_fwupg_get_boot_state");
LAB_0011e120:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- fts_pram_start @ 0011e278 ---- */

int fts_pram_start(void)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_2c [4];
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_2c[0] = 8;
  _printk("<6>[FTS_TS/I]%s:remap to start pramboot\n","fts_pram_start");
  iVar2 = fts_write(local_2c,1);
  if (iVar2 < 0) {
    _printk("<3>[FTS_TS/E]%s:write start pram cmd fail\n","fts_pram_start");
  }
  else {
    msleep(100);
    iVar2 = 0;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- ft5452j_write_pramboot_private @ 0011e324 ---- */

int ft5452j_write_pramboot_private(void)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *in_x18;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 unaff_x30;
  int local_98;
  ushort local_94 [2];
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined2 local_6c;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_68 = *(long *)(lVar3 + 0x5e0);
  local_98 = 0;
  _printk("<6>[FTS_TS/I]%s:**********pram write and init**********\n","fts_ft5452j_pram_write_init");
  fts_ft5452j_fwupg_get_boot_state(&local_98);
  if (local_98 == 2) {
LAB_0011e4b8:
    _printk("<6>[FTS_TS/I]%s:write pram and remap\n","fts_ft5452j_pram_write_remap");
    uVar2 = DAT_00102ad8;
    puVar8 = PTR_pb_file_ft5452j_00102ad0;
    if (DAT_00102ad8 < 0x120) {
      _printk("<3>[FTS_TS/E]%s:pramboot length(%d) fail\n","fts_ft5452j_pram_write_remap",DAT_00102ad8);
      iVar5 = -0x16;
    }
    else {
      local_6c = 0;
      local_74 = 0;
      local_7c = 0;
      local_84 = 0;
      uStack_8c = 0;
      uStack_8b = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_88 = 0;
      _printk("<6>[FTS_TS/I]%s:write pramboot to pram\n","fts_ft5452j_pram_write_buf");
      _printk("<6>[FTS_TS/I]%s:pramboot len=%d\n","fts_ft5452j_pram_write_buf",uVar2);
      if (uVar2 < 0x10001) {
        uVar10 = uVar2 >> 5;
        uVar6 = uVar2 & 0x1f;
        if (uVar6 != 0) {
          uVar10 = uVar10 + 1;
        }
        uVar9 = 0;
        uVar14 = 0x20;
        puVar12 = puVar8;
        do {
          uVar13 = uVar6;
          if (uVar9 != uVar10 - 1 || uVar6 == 0) {
            uVar13 = (uint)uVar14;
          }
          uVar14 = (ulong)uVar13;
          uStack_8f = (undefined1)(uVar9 >> 0xb);
          local_90 = 0xad;
          uStack_8e = (undefined1)(uVar9 >> 3);
          uStack_8d = (undefined1)(uVar9 << 5);
          iVar5 = fts_write(&local_90,4);
          if (iVar5 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:pramboot set write address(%d) fail\n";
LAB_0011e7cc:
            _printk(puVar8,"fts_ft5452j_pram_write_buf",uVar9);
            puVar8 = "<3>[FTS_TS/E]%s:write pramboot fail\n";
            goto LAB_0011e890;
          }
          local_90 = 0xae;
          if (uVar13 != 0) {
            uVar7 = 0;
            do {
              if (uVar7 == 0x27) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x11e9e4);
                (*pcVar4)();
              }
              uVar1 = uVar7 + 1;
              *(undefined *)(((ulong)&local_90 | 1) + uVar7) = puVar12[uVar7];
              uVar7 = uVar1;
            } while (uVar14 != uVar1);
          }
          iVar5 = fts_write(&local_90,uVar13 + 1);
          if (iVar5 < 0) {
            puVar8 = "<3>[FTS_TS/E]%s:pramboot write data(%d) fail\n";
            goto LAB_0011e7cc;
          }
          uVar9 = uVar9 + 1;
          puVar12 = puVar12 + 0x20;
        } while (uVar9 != uVar10);
        uVar6 = 0;
        uVar10 = 0;
        do {
          uVar9 = uVar6 + 1;
          uVar14 = (ulong)uVar6;
          uVar6 = uVar6 + 2;
          uVar10 = CONCAT11(puVar8[uVar14],puVar8[uVar9]) ^ uVar10;
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar9 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar10 >> 1 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar10 >> 1 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar10 >> 1 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar10 >> 1 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar10 >> 1 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar10 >> 1 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
          uVar9 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar10 >> 1 ^ 0x8408;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = uVar9 >> 1 ^ 0x8408;
          }
        } while (uVar6 < uVar2);
        local_94[0] = 0;
        local_90 = 0xcc;
        uStack_8f = 0;
        uStack_8e = 0;
        uStack_8d = 0;
        uStack_8c = 0;
        uStack_8b = 0;
        uStack_8a = 0;
        uStack_89 = 0xcc;
        _printk("<6>[FTS_TS/I]%s:read out pramboot checksum\n","fts_ft5452j_pram_ecc_cal_algo");
        uStack_8a = (undefined1)uVar2;
        uStack_8c = (undefined1)(uVar2 >> 0x10);
        uStack_8b = (undefined1)(uVar2 >> 8);
        iVar5 = fts_write(&local_90,8);
        if (iVar5 < 0) {
          puVar8 = "<3>[FTS_TS/E]%s:write pramboot ecc cal cmd fail\n";
        }
        else {
          iVar11 = 100;
          puVar8 = "<3>[FTS_TS/E]%s:wait ecc finish fail\n";
          local_90 = 0xce;
          do {
            msleep(1);
            iVar5 = fts_read(&local_90,1,local_94,1);
            if (iVar5 < 0) {
              puVar8 = "<3>[FTS_TS/E]%s:ecc_finish read cmd fail\n";
              goto LAB_0011e878;
            }
            if ((char)local_94[0] == '3') {
              local_90 = 0xcd;
              iVar5 = fts_read(&local_90,1,local_94,2);
              if (iVar5 < 0) {
                puVar8 = "<3>[FTS_TS/E]%s:read pramboot ecc fail\n";
                goto LAB_0011e878;
              }
              uVar2 = ((local_94[0] & 0xff00) << 8 | (uint)local_94[0] << 0x18) >> 0x10;
              _printk("<6>[FTS_TS/I]%s:pram ecc in tp:%x, host:%x\n","fts_ft5452j_pram_write_remap",uVar2,uVar10);
              if (uVar2 != uVar10) {
                _printk("<3>[FTS_TS/E]%s:pramboot ecc check fail\n","fts_ft5452j_pram_write_remap");
                iVar5 = -5;
                goto LAB_0011e89c;
              }
              local_90 = 8;
              _printk("<6>[FTS_TS/I]%s:remap to start pramboot\n","fts_ft5452j_pram_start");
              iVar5 = fts_write(&local_90,1);
              if (iVar5 < 0) {
                _printk("<3>[FTS_TS/E]%s:write start pram cmd fail\n","fts_ft5452j_pram_start");
                puVar8 = "<3>[FTS_TS/E]%s:pram start fail\n";
                goto LAB_0011e890;
              }
              msleep(100);
              local_90 = 0;
              uStack_8f = 0;
              uStack_8e = 0;
              uStack_8d = 0;
              fts_ft5452j_fwupg_get_boot_state(&local_90);
              if (CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(uStack_8f,local_90))) == 3)
              goto LAB_0011e9bc;
              uVar2 = 0;
              goto LAB_0011e988;
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar5 = -5;
        }
LAB_0011e878:
        _printk(puVar8,"fts_ft5452j_pram_ecc_cal_algo");
        puVar8 = "<3>[FTS_TS/E]%s:read pramboot ecc fail\n";
      }
      else {
        _printk("<3>[FTS_TS/E]%s:pramboot length(%d) fail\n","fts_ft5452j_pram_write_buf",uVar2);
        iVar5 = -0x16;
        puVar8 = "<3>[FTS_TS/E]%s:write pramboot fail\n";
      }
LAB_0011e890:
      _printk(puVar8,"fts_ft5452j_pram_write_remap");
    }
LAB_0011e89c:
    _printk("<3>[FTS_TS/E]%s:pram write fail, ret=%d\n","fts_ft5452j_pram_write_init",iVar5);
  }
  else {
    if (local_98 == 3) {
      _printk("<6>[FTS_TS/I]%s:tp is in pramboot, need send reset cmd before upgrade\n","fts_ft5452j_pram_write_init");
    }
    _printk("<6>[FTS_TS/I]%s:tp isn't in romboot, need send reset to romboot\n","fts_ft5452j_pram_write_init");
    local_90 = 0;
    uStack_8f = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_94[0] = CONCAT11(local_94[0]._1_1_,7);
    iVar5 = fts_write(local_94,1);
    if (iVar5 < 0) {
      puVar8 = "<3>[FTS_TS/E]%s:pram/rom/bootloader reset cmd write fail\n";
    }
    else {
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      __const_udelay(0x418958);
      iVar5 = 0x1e;
      puVar8 = "<3>[FTS_TS/E]%s:reset to romboot fail\n";
      do {
        fts_ft5452j_fwupg_get_boot_state(&local_90);
        if (CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(uStack_8f,local_90))) == 2)
        goto LAB_0011e4b8;
        __const_udelay(0x147aeb8);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = -5;
    }
    _printk(puVar8,"fts_ft5452j_fwupg_reset_to_romboot");
    _printk("<3>[FTS_TS/E]%s:reset to romboot fail\n","fts_ft5452j_pram_write_init");
  }
  goto LAB_0011e8b4;
  while( true ) {
    fts_ft5452j_fwupg_get_boot_state(&local_90);
    uVar2 = uVar6 + 1;
    if (CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(uStack_8f,local_90))) == 3) break;
LAB_0011e988:
    uVar6 = uVar2;
    msleep(0x14);
    if (uVar6 == 0x1d) break;
  }
  if (uVar6 < 0x1d) {
LAB_0011e9bc:
    iVar5 = 0;
    goto LAB_0011e8c8;
  }
  _printk("<3>[FTS_TS/E]%s:not in pramboot\n","fts_ft5452j_pram_write_init");
  iVar5 = -5;
LAB_0011e8b4:
  _printk("<3>[FTS_TS/E]%s:pram write_init fail\n","ft5452j_write_pramboot_private");
LAB_0011e8c8:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* ---- fts_ft5452j_upgrade.d30ed8dcadd5a165705240bfada92773 @ 0011ea28 ---- */

int fts_ft5452j_upgrade_d30ed8dcadd5a165705240bfada92773(long param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x5e0);
  local_58 = 0;
  uStack_4c = 0;
  uStack_4b = 0;
  uStack_4a = 0;
  local_50 = 0;
  local_4f = 0;
  local_4e = 0;
  local_4d = 0;
  if ((param_1 == 0) || (param_2 < 0x120)) {
    _printk("<3>[FTS_TS/E]%s:buffer/len(%x) is invalid\n","fts_ft5452j_upgrade",param_2);
    iVar6 = -0x16;
    goto LAB_0011eb80;
  }
  iVar6 = fts_fwupg_enter_into_boot();
  if (iVar6 < 0) {
    _printk("<3>[FTS_TS/E]%s:enter into pramboot/bootloader fail,ret=%d\n","fts_ft5452j_upgrade",iVar6);
  }
  else {
    local_58._0_6_ = CONCAT24(0xb09,(undefined4)local_58);
    iVar6 = fts_write((long)&local_58 + 4,2);
    if (iVar6 < 0) {
      puVar8 = "<3>[FTS_TS/E]%s:upgrade mode(09) cmd write fail\n";
    }
    else {
      uVar1 = (undefined1)(param_2 >> 0x10);
      local_58._0_6_ = CONCAT15(uVar1,CONCAT14(0xb0,(undefined4)local_58));
      uVar2 = (undefined1)(param_2 >> 8);
      local_58 = CONCAT17((char)param_2,CONCAT16(uVar2,(undefined6)local_58));
      iVar6 = fts_write((long)&local_58 + 4,4);
      if (iVar6 < 0) {
        puVar8 = "<3>[FTS_TS/E]%s:data len cmd write fail\n";
      }
      else {
        iVar6 = fts_fwupg_erase(0x546);
        uVar4 = DAT_00102aa8;
        if (iVar6 < 0) {
          puVar8 = "<3>[FTS_TS/E]%s:erase cmd write fail\n";
        }
        else {
          uVar7 = fts_flash_write_buf(DAT_00102aa8,param_1,param_2,1);
          if (-1 < (int)uVar7) {
            _printk("<6>[FTS_TS/I]%s:**********read out checksum**********\n","fts_ft5452j_upgrade");
            local_50 = 100;
            iVar6 = fts_write(&local_50,1);
            if (iVar6 < 0) {
              puVar8 = "<3>[FTS_TS/E]%s:ecc init cmd write fail\n";
            }
            else {
              local_4d = (undefined1)uVar4;
              local_50 = 0x65;
              local_4f = (undefined1)((uint)uVar4 >> 0x10);
              local_4e = (undefined1)((uint)uVar4 >> 8);
              uStack_4c = uVar1;
              uStack_4b = uVar2;
              uStack_4a = (char)param_2;
              iVar6 = fts_write(&local_50,7);
              if (iVar6 < 0) {
                puVar8 = "<3>[FTS_TS/E]%s:ecc calc cmd write fail\n";
              }
              else {
                msleep(param_2 >> 8);
                iVar6 = 10;
                do {
                  local_50 = 0x6a;
                  local_58 = local_58 & 0xffffffffffff0000;
                  fts_read(&local_50,1,&local_58,2);
                  if (((byte)local_58 == -0x10) && (local_58._1_1_ == 'U')) break;
                  msleep(0x32);
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                local_50 = 0x66;
                iVar6 = fts_read(&local_50,1,&local_58,1);
                if (-1 < iVar6) {
                  bVar5 = (byte)local_58;
                  _printk("<6>[FTS_TS/I]%s:ecc in tp:%x, host:%x\n","fts_ft5452j_upgrade",local_58 & 0xff,uVar7);
                  if (uVar7 == bVar5) {
                    _printk("<6>[FTS_TS/I]%s:upgrade success, reset to normal boot\n","fts_ft5452j_upgrade");
                    iVar6 = fts_fwupg_reset_in_boot();
                    if (iVar6 < 0) {
                      _printk("<3>[FTS_TS/E]%s:reset to normal boot fail\n","fts_ft5452j_upgrade");
                    }
                    msleep(200);
                    iVar6 = 0;
                    goto LAB_0011eb80;
                  }
                  puVar8 = "<3>[FTS_TS/E]%s:ecc check fail\n";
                  goto LAB_0011eb54;
                }
                puVar8 = "<3>[FTS_TS/E]%s:ecc read cmd write fail\n";
              }
            }
            _printk(puVar8,"fts_ft5452j_upgrade");
            goto LAB_0011eb80;
          }
          puVar8 = "<3>[FTS_TS/E]%s:flash write fail\n";
        }
      }
    }
LAB_0011eb54:
    _printk(puVar8,"fts_ft5452j_upgrade");
  }
  _printk("<6>[FTS_TS/I]%s:upgrade fail, reset to normal boot\n","fts_ft5452j_upgrade");
  iVar6 = fts_fwupg_reset_in_boot();
  if (iVar6 < 0) {
    _printk("<3>[FTS_TS/E]%s:reset to normal boot fail\n","fts_ft5452j_upgrade");
  }
  iVar6 = -5;
LAB_0011eb80:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* ---- fts_ft5452j_fwupg_get_boot_state @ 0011ed68 ---- */

void fts_ft5452j_fwupg_get_boot_state(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_30 = 0xaa55;
  local_2a = 0;
  local_2c = 0;
  _printk("<6>[FTS_TS/I]%s:**********read boot id**********\n","fts_ft5452j_fwupg_get_boot_state");
  iVar2 = fts_write(&local_30,2);
  if (iVar2 < 0) {
    puVar3 = "<3>[FTS_TS/E]%s:write 55 cmd fail\n";
  }
  else {
    msleep(0xc);
    local_30 = 0x90;
    iVar2 = fts_read(&local_30,4,&local_2c,3);
    if (-1 < iVar2) {
      _printk("<6>[FTS_TS/I]%s:read boot id:0x%02x%02x%02x\n","fts_ft5452j_fwupg_get_boot_state",(char)local_2c,local_2c._1_1_,
              local_2a);
      if (((char)local_2c == 'T') && (local_2c._1_1_ == 'R')) {
        _printk("<6>[FTS_TS/I]%s:tp run in romboot\n","fts_ft5452j_fwupg_get_boot_state");
        uVar4 = 2;
      }
      else if (((char)local_2c == 'T') && (local_2c._1_1_ == '[')) {
        _printk("<6>[FTS_TS/I]%s:tp run in pramboot\n","fts_ft5452j_fwupg_get_boot_state");
        uVar4 = 3;
      }
      else {
        if (((char)local_2c != 'T') || (local_2c._1_1_ != '^')) goto LAB_0011ee0c;
        _printk("<6>[FTS_TS/I]%s:tp run in bootloader\n","fts_ft5452j_fwupg_get_boot_state");
        uVar4 = 4;
      }
      *param_1 = uVar4;
      goto LAB_0011ee0c;
    }
    puVar3 = "<3>[FTS_TS/E]%s:write 90 cmd fail\n";
  }
  _printk(puVar3,"fts_ft5452j_fwupg_get_boot_state");
LAB_0011ee0c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- sys_delay @ 0011eeec ---- */

void sys_delay(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  msleep();
  return;
}



/* ---- fts_abs @ 0011ef10 ---- */

int fts_abs(int param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* ---- fts_malloc @ 0011ef24 ---- */

void fts_malloc(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  __kmalloc(param_1,0xdc0);
  return;
}



/* ---- fts_free_proc @ 0011ef4c ---- */

void fts_free_proc(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  kfree();
  return;
}



/* ---- print_buffer @ 0011ef70 ---- */

void print_buffer(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *in_x18;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (((fts_ftest == (long *)0x0) || (*fts_ftest == 0)) || (2 < *(int *)(*fts_ftest + 0x2f4))) {
    if ((param_1 == 0) || (param_2 < 1)) {
      _printk("[FTS_TS][TEST]%s:buffer/length(%d) fail\n","print_buffer",param_2);
    }
    else {
      iVar2 = param_2;
      if (param_3 != 0) {
        iVar2 = param_3;
      }
      iVar3 = iVar2 * 6 + 0x80;
      lVar6 = __kmalloc((long)iVar3,0xdc0);
      iVar9 = 0;
      do {
        if (0 < iVar2) {
          iVar7 = 0;
          lVar8 = 1;
          do {
            iVar1 = iVar9 + (int)lVar8;
            iVar5 = snprintf((char *)(lVar6 + iVar7),(long)(iVar3 - iVar7),"%5d ",
                             (ulong)*(uint *)(param_1 + (long)(iVar1 + -1) * 4));
            iVar7 = iVar5 + iVar7;
            bVar4 = lVar8 < iVar2;
            lVar8 = lVar8 + 1;
          } while ((iVar7 < iVar3 && iVar1 < param_2) && bVar4);
        }
        _printk("[FTS_TS][TEST]%s:%s\n","print_buffer",lVar6);
        iVar9 = iVar9 + iVar2;
      } while (iVar9 < param_2);
      if (lVar6 != 0) {
        kfree(lVar6);
      }
    }
  }
  return;
}



/* ---- fts_test_read_reg @ 0011f0cc ---- */

uint fts_test_read_reg(undefined1 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_1c [4];
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c[0] = param_1;
  uVar2 = fts_read(local_1c,1,param_2,1);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & (int)uVar2 >> 0x1f;
}



/* ---- fts_test_write_reg @ 0011f134 ---- */

uint fts_test_write_reg(undefined1 param_1,undefined1 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_1c;
  undefined1 local_1b;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c = param_1;
  local_1b = param_2;
  uVar2 = fts_write(&local_1c,2);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & (int)uVar2 >> 0x1f;
}



/* ---- fts_test_read @ 0011f198 ---- */

int fts_test_read(undefined1 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 *in_x18;
  int iVar5;
  int iVar6;
  undefined8 unaff_x30;
  undefined1 local_4c [4];
  long local_48;
  
  *in_x18 = unaff_x30;
  iVar6 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar6 = param_3;
  }
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x5e0);
  iVar6 = iVar6 >> 5;
  iVar2 = param_3 % 0x20;
  if (iVar2 != 0) {
    iVar6 = iVar6 + 1;
  }
  if (0x1f < param_3) {
    param_3 = 0x20;
  }
  local_4c[0] = param_1;
  iVar4 = fts_read(local_4c,1,param_2,param_3);
  if (iVar4 < 0) {
LAB_0011f288:
    _printk("<3>[FTS_TS/E][TEST]%s:read buffer fail\n","fts_test_read");
  }
  else {
    if (1 < iVar6) {
      iVar5 = 0;
      iVar6 = iVar6 + -1;
      do {
        iVar5 = param_3 + iVar5;
        iVar1 = iVar2;
        if (iVar6 != 1 || iVar2 == 0) {
          iVar1 = param_3;
        }
        iVar4 = fts_read(0,0,param_2 + iVar5,iVar1);
        if (iVar4 < 0) goto LAB_0011f288;
        iVar6 = iVar6 + -1;
        param_3 = iVar1;
      } while (iVar6 != 0);
    }
    iVar4 = 0;
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- fts_test_read_one @ 0011f2a8 ---- */

uint fts_test_read_one(undefined1 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_1c [4];
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_1c[0] = param_1;
  uVar2 = fts_read(local_1c,1,param_2,param_3);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & (int)uVar2 >> 0x1f;
}



/* ---- fts_test_write @ 0011f310 ---- */

int fts_test_write(char param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *in_x18;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = 0x38;
  if (android_kmalloc_64_create != '\0') {
    lVar2 = 0x30;
  }
  pcVar5 = (char *)kmem_cache_alloc_trace(*(undefined8 *)(&kmalloc_caches + lVar2),0xdc0,0x21);
  if (pcVar5 == (char *)0x0) {
    _printk("<3>[FTS_TS/E][TEST]%s:malloc memory for bus write data fail\n","fts_test_write");
    iVar6 = -0xc;
  }
  else {
    iVar6 = param_3 + 0x1f;
    if (-1 < param_3) {
      iVar6 = param_3;
    }
    iVar6 = iVar6 >> 5;
    iVar3 = param_3 % 0x20;
    if (iVar3 != 0) {
      iVar6 = iVar6 + 1;
    }
    *pcVar5 = param_1;
    if (0 < iVar6) {
      iVar7 = 0;
      iVar8 = 0;
      if (0x1f < param_3) {
        param_3 = 0x20;
      }
      do {
        if (iVar7 != 0) {
          *pcVar5 = param_1 + '\x01';
        }
        iVar1 = iVar3;
        if (iVar6 + iVar7 != 1 || iVar3 == 0) {
          iVar1 = param_3;
        }
        memcpy(pcVar5 + 1,(void *)(param_2 + iVar8),(long)iVar1);
        iVar4 = fts_write(pcVar5,iVar1 + 1);
        if (iVar4 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:write buffer fail\n","fts_test_write");
          kfree(pcVar5);
          return iVar4;
        }
        iVar8 = iVar1 + iVar8;
        iVar7 = iVar7 + -1;
        param_3 = iVar1;
      } while (iVar6 + iVar7 != 0);
    }
    kfree(pcVar5);
    iVar6 = 0;
  }
  return iVar6;
}



/* ---- enter_work_mode @ 0011f47c ---- */

undefined8 enter_work_mode(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x30;
  char local_48 [4];
  undefined1 local_44 [4];
  undefined2 local_40 [2];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_48[0] = '\0';
  _printk("[FTS_TS][TEST]%s: Enter\n","enter_work_mode");
  local_44[0] = 0;
  iVar2 = fts_read(local_44,1,local_48,1);
  if ((iVar2 < 0) || (uVar6 = 0, local_48[0] != '\0')) {
    iVar2 = 0;
    puVar5 = "<3>[FTS_TS/I][TEST]%s:enter work mode success\n";
    do {
      local_40[0] = 0;
      iVar3 = fts_write(local_40,2);
      if (-1 < iVar3) {
        msleep(0x12);
        iVar3 = 0x14;
        do {
          local_3c[0] = 0;
          iVar4 = fts_read(local_3c,1,local_48,1);
          if ((-1 < iVar4) && (local_48[0] == '\0')) {
            uVar6 = 0;
            goto LAB_0011f5a0;
          }
          msleep(0x12);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      msleep(0x32);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 5);
    uVar6 = 0xfffffffb;
    puVar5 = "<3>[FTS_TS/E][TEST]%s:Enter work mode fail\n";
LAB_0011f5a0:
    _printk(puVar5,"enter_work_mode");
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* ---- enter_factory_mode @ 0011f5c4 ---- */

void enter_factory_mode(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  char local_48 [4];
  undefined1 local_44 [4];
  undefined2 local_40 [2];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_48[0] = '\0';
  local_44[0] = 0;
  iVar2 = fts_read(local_44,1,local_48,1);
  if ((iVar2 < 0) || (uVar5 = 0, local_48[0] != '@')) {
    iVar2 = 0;
    do {
      local_40[0] = 0x4000;
      iVar3 = fts_write(local_40,2);
      if (-1 < iVar3) {
        msleep(0x12);
        iVar3 = 0x14;
        do {
          local_3c[0] = 0;
          iVar4 = fts_read(local_3c,1,local_48,1);
          if ((-1 < iVar4) && (local_48[0] == '@')) {
            _printk("<3>[FTS_TS/I][TEST]%s:enter factory mode success\n","enter_factory_mode");
            msleep(200);
            uVar5 = 0;
            goto LAB_0011f61c;
          }
          msleep(0x12);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      msleep(0x32);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 5);
    _printk("<3>[FTS_TS/E][TEST]%s:Enter factory mode fail\n","enter_factory_mode");
    uVar5 = 0xfffffffb;
  }
LAB_0011f61c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ---- read_mass_data @ 0011f70c ---- */

int read_mass_data(undefined1 param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *in_x18;
  int iVar7;
  int iVar8;
  undefined8 unaff_x30;
  undefined1 local_5c [4];
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_58 = *(long *)(lVar1 + 0x5e0);
  lVar5 = __kmalloc((long)param_2,0xdc0);
  lVar1 = fts_ftest;
  if (lVar5 == 0) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "mass data buffer malloc fail\n",0x1e);
      *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x1d;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:mass data buffer malloc fail\n\n","read_mass_data");
    iVar4 = -0xc;
  }
  else {
    _printk("<3>[FTS_TS/I][TEST]%s:mass data len:%d\n","read_mass_data",param_2);
    iVar8 = param_2 + 0x1f;
    if (-1 < param_2) {
      iVar8 = param_2;
    }
    iVar8 = iVar8 >> 5;
    iVar3 = param_2 % 0x20;
    if (iVar3 != 0) {
      iVar8 = iVar8 + 1;
    }
    iVar6 = param_2;
    if (0x1f < param_2) {
      iVar6 = 0x20;
    }
    local_5c[0] = param_1;
    iVar4 = fts_read(local_5c,1,lVar5,iVar6);
    if (iVar4 < 0) {
LAB_0011f8dc:
      _printk("<3>[FTS_TS/E][TEST]%s:read buffer fail\n","fts_test_read");
      lVar1 = fts_ftest;
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "read mass data fail\n",0x15);
        *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x14;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:read mass data fail\n\n","read_mass_data");
    }
    else {
      iVar7 = iVar8 + -1;
      if (iVar7 != 0 && 0 < iVar8) {
        iVar8 = 0;
        do {
          iVar8 = iVar6 + iVar8;
          iVar2 = iVar3;
          if (iVar7 != 1 || iVar3 == 0) {
            iVar2 = iVar6;
          }
          iVar4 = fts_read(0,0,lVar5 + iVar8,iVar2);
          if (iVar4 < 0) goto LAB_0011f8dc;
          iVar7 = iVar7 + -1;
          iVar6 = iVar2;
        } while (iVar7 != 0);
      }
      if (0 < param_2) {
        iVar8 = 0;
        do {
          iVar3 = iVar8 + 1;
          lVar1 = (long)iVar8;
          iVar6 = iVar8 >> 1;
          iVar8 = iVar8 + 2;
          *(uint *)(param_3 + (long)iVar6 * 4) =
               (int)(short)((ushort)*(byte *)(lVar5 + lVar1) << 8) | (uint)*(byte *)(lVar5 + iVar3);
        } while (iVar8 < param_2);
      }
      iVar4 = 0;
    }
    kfree(lVar5);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- read_mass_data_u16 @ 0011f954 ---- */

int read_mass_data_u16(undefined1 param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *in_x18;
  int iVar7;
  int iVar8;
  undefined8 unaff_x30;
  undefined1 local_5c [4];
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_58 = *(long *)(lVar1 + 0x5e0);
  lVar5 = __kmalloc((long)param_2,0xdc0);
  lVar1 = fts_ftest;
  if (lVar5 == 0) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "mass data buffer malloc fail\n",0x1e);
      *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x1d;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:mass data buffer malloc fail\n\n","read_mass_data_u16");
    iVar4 = -0xc;
  }
  else {
    _printk("<3>[FTS_TS/I][TEST]%s:mass data len:%d\n","read_mass_data_u16",param_2);
    iVar8 = param_2 + 0x1f;
    if (-1 < param_2) {
      iVar8 = param_2;
    }
    iVar8 = iVar8 >> 5;
    iVar3 = param_2 % 0x20;
    if (iVar3 != 0) {
      iVar8 = iVar8 + 1;
    }
    iVar6 = param_2;
    if (0x1f < param_2) {
      iVar6 = 0x20;
    }
    local_5c[0] = param_1;
    iVar4 = fts_read(local_5c,1,lVar5,iVar6);
    if (iVar4 < 0) {
LAB_0011fb1c:
      _printk("<3>[FTS_TS/E][TEST]%s:read buffer fail\n","fts_test_read");
      lVar1 = fts_ftest;
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "read mass data fail\n",0x15);
        *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x14;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:read mass data fail\n\n","read_mass_data_u16");
    }
    else {
      iVar7 = iVar8 + -1;
      if (iVar7 != 0 && 0 < iVar8) {
        iVar8 = 0;
        do {
          iVar8 = iVar6 + iVar8;
          iVar2 = iVar3;
          if (iVar7 != 1 || iVar3 == 0) {
            iVar2 = iVar6;
          }
          iVar4 = fts_read(0,0,lVar5 + iVar8,iVar2);
          if (iVar4 < 0) goto LAB_0011fb1c;
          iVar7 = iVar7 + -1;
          iVar6 = iVar2;
        } while (iVar7 != 0);
      }
      if (0 < param_2) {
        iVar8 = 0;
        do {
          iVar3 = iVar8 + 1;
          lVar1 = (long)iVar8;
          iVar6 = iVar8 >> 1;
          iVar8 = iVar8 + 2;
          *(uint *)(param_3 + (long)iVar6 * 4) =
               (uint)CONCAT11(*(undefined1 *)(lVar5 + lVar1),*(undefined1 *)(lVar5 + iVar3));
        } while (iVar8 < param_2);
      }
      iVar4 = 0;
    }
    kfree(lVar5);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- short_get_adcdata_incell @ 0011fb94 ---- */

int short_get_adcdata_incell(char param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  char local_64 [4];
  undefined2 local_60 [2];
  undefined1 local_5c [4];
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_58 = *(long *)(lVar1 + 0x5e0);
  local_64[0] = '\0';
  _printk("[FTS_TS][TEST]%s: Enter\n","short_get_adcdata_incell");
  local_60[0] = 0x10f;
  iVar2 = fts_write(local_60,2);
  if (iVar2 < 0) {
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      puVar4 = "<3>[FTS_TS/E][TEST]%s:start short test fail\n\n";
      goto LAB_0011fdc4;
    }
    piVar5 = (int *)(fts_ftest + 0xae0);
    puVar4 = "<3>[FTS_TS/E][TEST]%s:start short test fail\n\n";
    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                    "start short test fail\n",0x17);
    iVar3 = 0x16;
  }
  else {
    msleep(((param_2 & 0xff) + (param_2 & 0xff) * 8) * 2);
    iVar2 = 0;
    do {
      local_5c[0] = 0x10;
      iVar3 = fts_read(local_5c,1,local_64,1);
      if ((-1 < iVar3) && (local_64[0] == param_1)) {
        iVar2 = read_mass_data(0x89,param_3,param_4);
        if (iVar2 == 0) goto LAB_0011fdd0;
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          piVar5 = (int *)(fts_ftest + 0xae0);
          puVar4 = "<3>[FTS_TS/E][TEST]%s:get short(adc) data fail\n\n";
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"get short(adc) data fail\n",0x1a);
          iVar3 = 0x19;
          goto LAB_0011fd9c;
        }
        puVar4 = "<3>[FTS_TS/E][TEST]%s:get short(adc) data fail\n\n";
        goto LAB_0011fdc4;
      }
      _printk("[FTS_TS][TEST]%s:reg%x=%x,retry:%d\n","short_get_adcdata_incell",0x10,local_64[0],
              iVar2);
      msleep(100);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x32);
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      iVar2 = -5;
      puVar4 = "<3>[FTS_TS/E][TEST]%s:short test timeout, ADC data not OK\n\n";
      goto LAB_0011fdc4;
    }
    piVar5 = (int *)(fts_ftest + 0xae0);
    iVar2 = -5;
    puVar4 = "<3>[FTS_TS/E][TEST]%s:short test timeout, ADC data not OK\n\n";
    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                    "short test timeout, ADC data not OK\n",0x25);
    iVar3 = 0x24;
  }
LAB_0011fd9c:
  *piVar5 = *piVar5 + iVar3;
LAB_0011fdc4:
  _printk(puVar4,"short_get_adcdata_incell");
LAB_0011fdd0:
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_get_adcdata_incell",0x1cf);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- wait_state_update @ 0011fe28 ---- */

void wait_state_update(byte param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  uint param3;
  undefined8 *in_x18;
  uint uVar7;
  undefined8 unaff_x30;
  byte local_60 [4];
  undefined1 local_5c [4];
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar2 = fts_ftest;
  lVar1 = sp_el0;
  local_58 = *(long *)(lVar1 + 0x5e0);
  local_60[0] = 0xff;
  if ((fts_ftest == 0) || (*(long *)(fts_ftest + 0x2c8) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "test/func is null\n",0x13);
      *(int *)(lVar2 + 0xae0) = *(int *)(lVar2 + 0xae0) + 0x12;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:test/func is null\n\n","wait_state_update");
    uVar5 = 0xffffffea;
  }
  else {
    bVar3 = *(int *)(*(long *)(fts_ftest + 0x2c8) + 8) != 1;
    uVar6 = 0xe;
    if (bVar3) {
      uVar6 = 0xb5;
    }
    param3 = 0xe;
    if (bVar3) {
      param3 = 0xb5;
    }
    uVar7 = 1;
    do {
      msleep(0x12);
      local_60[0] = 0xff;
      local_5c[0] = uVar6;
      iVar4 = fts_read(local_5c,1,local_60,1);
      if ((-1 < iVar4) && (local_60[0] == param_1)) {
        if (uVar7 < 0x32) {
          uVar5 = 0;
          goto LAB_0011ff10;
        }
        break;
      }
      _printk("[FTS_TS][TEST]%s:reg%x=%x,retry:%d\n","wait_state_update",param3,local_60[0],uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x33);
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      iVar4 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                       0x64000,"Wait State Update fail,reg%x=%x\n",param3,(uint)local_60[0]);
      *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar4;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:Wait State Update fail,reg%x=%x\n\n","wait_state_update",param3,local_60[0]);
    uVar5 = 0xfffffffb;
  }
LAB_0011ff10:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ---- start_scan @ 00120014 ---- */

int start_scan(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *in_x18;
  uint uVar9;
  undefined8 unaff_x30;
  char local_54 [4];
  char local_50;
  char local_4f;
  char local_4c [4];
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = fts_ftest;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  if ((fts_ftest == 0) || (*(long *)(fts_ftest + 0x2c8) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      iVar3 = -0x16;
      puVar4 = "<3>[FTS_TS/E][TEST]%s:test/func is null\n\n";
      goto LAB_00120228;
    }
    iVar3 = -0x16;
    puVar4 = "<3>[FTS_TS/E][TEST]%s:test/func is null\n\n";
    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                    "test/func is null\n",0x13);
    iVar6 = 0x12;
  }
  else {
    bVar2 = *(int *)(*(long *)(fts_ftest + 0x2c8) + 0xc) == 1;
    local_54[0] = -0x40;
    if (bVar2) {
      local_54[0] = '\x01';
    }
    local_50 = bVar2 << 3;
    local_4f = local_54[0];
    iVar3 = fts_write(&local_50,2);
    lVar5 = fts_ftest;
    if (iVar3 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
        puVar4 = "<3>[FTS_TS/E][TEST]%s:write start scan mode fail\n\n";
        goto LAB_00120228;
      }
      pcVar7 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
      puVar4 = "<3>[FTS_TS/E][TEST]%s:write start scan mode fail\n\n";
      builtin_strncpy(pcVar7 + 8,"art scan mode fail\n",0x14);
      uVar8._0_1_ = 'w';
      uVar8._1_1_ = 'r';
      uVar8._2_1_ = 'i';
      uVar8._3_1_ = 't';
      uVar8._4_1_ = 'e';
      uVar8._5_1_ = ' ';
      uVar8._6_1_ = 's';
      uVar8._7_1_ = 't';
      iVar6 = 0x1b;
    }
    else {
      uVar9 = 1;
      do {
        msleep(0x12);
        local_4c[0] = bVar2 << 3;
        iVar3 = fts_read(local_4c,1,local_54,1);
        if ((-1 < iVar3) && ((char)(!bVar2 * '@') == local_54[0])) {
          if (uVar9 < 0x32) {
            iVar3 = 0;
            goto LAB_00120234;
          }
          break;
        }
        _printk("[FTS_TS][TEST]%s:reg%x=%x,retry:%d\n","start_scan",(ulong)bVar2 << 3,local_54[0],
                uVar9);
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x33);
      lVar5 = fts_ftest;
      if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
        iVar3 = -5;
        puVar4 = "<3>[FTS_TS/E][TEST]%s:scan timeout\n\n";
        goto LAB_00120228;
      }
      pcVar7 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
      iVar3 = -5;
      puVar4 = "<3>[FTS_TS/E][TEST]%s:scan timeout\n\n";
      uVar8._0_1_ = 's';
      uVar8._1_1_ = 'c';
      uVar8._2_1_ = 'a';
      uVar8._3_1_ = 'n';
      uVar8._4_1_ = ' ';
      uVar8._5_1_ = 't';
      uVar8._6_1_ = 'i';
      uVar8._7_1_ = 'm';
      builtin_strncpy(pcVar7 + 6,"imeout\n",8);
      iVar6 = 0xd;
    }
    *(undefined8 *)pcVar7 = uVar8;
  }
  *(int *)(lVar5 + 0xae0) = *(int *)(lVar5 + 0xae0) + iVar6;
LAB_00120228:
  _printk(puVar4,"start_scan");
LAB_00120234:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- get_rawdata @ 00120270 ---- */

int get_rawdata(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = fts_ftest;
  if ((fts_ftest == 0) || (*(long *)(fts_ftest + 0x2c8) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "test/func is null\n",0x13);
      *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x12;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:test/func is null\n\n","get_rawdata");
    iVar3 = -0x16;
  }
  else {
    iVar3 = enter_factory_mode();
    if (iVar3 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar4 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"failed to enter factory mode,ret=%d\n",iVar3);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar4;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:failed to enter factory mode,ret=%d\n\n","get_rawdata",iVar3);
    }
    else {
      iVar3 = start_scan();
      lVar2 = fts_ftest;
      if (iVar3 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"scan fail\n",0xb);
          *(int *)(lVar2 + 0xae0) = *(int *)(lVar2 + 0xae0) + 10;
        }
        puVar5 = "<3>[FTS_TS/E][TEST]%s:scan fail\n\n";
      }
      else {
        iVar3 = *(int *)(*(long *)(lVar1 + 0x2c8) + 8);
        if (iVar3 == 1) {
          uVar7 = 0xad;
          uVar6 = 1;
          uVar8 = 0x6a;
        }
        else if (iVar3 == 2) {
          uVar7 = 0xaa;
          uVar6 = 1;
          uVar8 = 0x36;
        }
        else {
          uVar7 = 0;
          uVar6 = 0x34;
          uVar8 = 0x35;
        }
        iVar3 = read_rawdata(lVar1,uVar6,uVar7,uVar8,*(int *)(lVar1 + 0x14) << 1,param_1);
        lVar1 = fts_ftest;
        if (-1 < iVar3) {
          return 0;
        }
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"read rawdata fail\n",0x13);
          *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x12;
        }
        puVar5 = "<3>[FTS_TS/E][TEST]%s:read rawdata fail\n\n";
      }
      _printk(puVar5,"get_rawdata");
    }
  }
  return iVar3;
}



/* ---- read_rawdata @ 001204a0 ---- */

int read_rawdata(long param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x5e0);
  local_4c = param_2;
  local_4b = param_3;
  iVar1 = fts_write(&local_4c,2);
  lVar3 = fts_ftest;
  if (iVar1 < 0) {
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      puVar2 = "<3>[FTS_TS/E][TEST]%s:wirte line/start addr fail\n\n";
    }
    else {
      puVar2 = "<3>[FTS_TS/E][TEST]%s:wirte line/start addr fail\n\n";
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "wirte line/start addr fail\n",0x1c);
      iVar4 = 0x1b;
LAB_00120614:
      *(int *)(lVar3 + 0xae0) = *(int *)(lVar3 + 0xae0) + iVar4;
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x2c8) + 0x17) == '\0') {
      iVar1 = read_mass_data(param_4,param_5,param_6);
      lVar3 = fts_ftest;
    }
    else {
      iVar1 = read_mass_data_u16(param_4,param_5,param_6);
      lVar3 = fts_ftest;
    }
    fts_ftest = lVar3;
    if (-1 < iVar1) {
      iVar1 = 0;
      goto LAB_0012051c;
    }
    if ((*(long *)(lVar3 + 0xad8) != 0) && (*(int *)(lVar3 + 0xae0) < 0x64000)) {
      puVar2 = "<3>[FTS_TS/E][TEST]%s:read rawdata fail\n\n";
      builtin_strncpy((char *)(*(long *)(lVar3 + 0xad8) + (long)*(int *)(lVar3 + 0xae0)),
                      "read rawdata fail\n",0x13);
      iVar4 = 0x12;
      goto LAB_00120614;
    }
    puVar2 = "<3>[FTS_TS/E][TEST]%s:read rawdata fail\n\n";
  }
  _printk(puVar2,"read_rawdata");
LAB_0012051c:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* ---- chip_clb @ 0012064c ---- */

int chip_clb(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *in_x18;
  uint uVar5;
  undefined8 unaff_x30;
  char local_44 [4];
  undefined2 local_40 [2];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_44[0] = '\0';
  local_40[0] = 0x404;
  iVar1 = fts_write(local_40,2);
  lVar3 = fts_ftest;
  if (iVar1 < 0) {
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      puVar2 = "<3>[FTS_TS/E][TEST]%s:write start clb fail\n\n";
      goto LAB_00120800;
    }
    puVar2 = "<3>[FTS_TS/E][TEST]%s:write start clb fail\n\n";
    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                    "write start clb fail\n",0x16);
    iVar4 = 0x15;
  }
  else {
    uVar5 = 1;
    do {
      msleep(100);
      local_3c[0] = 4;
      iVar1 = fts_read(local_3c,1,local_44,1);
      if ((-1 < iVar1) && (local_44[0] == '\x02')) {
        if (uVar5 < 0x32) {
          iVar1 = 0;
          goto LAB_00120708;
        }
        break;
      }
      _printk("[FTS_TS][TEST]%s:reg%x=%x,retry:%d\n","chip_clb",4,local_44[0],uVar5);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x33);
    lVar3 = fts_ftest;
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      iVar1 = -5;
      puVar2 = "<3>[FTS_TS/E][TEST]%s:chip clb timeout\n\n";
      goto LAB_00120800;
    }
    iVar1 = -5;
    puVar2 = "<3>[FTS_TS/E][TEST]%s:chip clb timeout\n\n";
    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                    "chip clb timeout\n",0x12);
    iVar4 = 0x11;
  }
  *(int *)(lVar3 + 0xae0) = *(int *)(lVar3 + 0xae0) + iVar4;
LAB_00120800:
  _printk(puVar2,"chip_clb");
LAB_00120708:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* ---- get_cb_incell @ 00120814 ---- */

int get_cb_incell(uint param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  char *pcVar16;
  uint *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *in_x18;
  int iVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  undefined8 unaff_x30;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6c [4];
  long local_68;
  
  *in_x18 = unaff_x30;
  uVar21 = (ulong)param_2;
  lVar12 = sp_el0;
  local_68 = *(long *)(lVar12 + 0x5e0);
  lVar8 = __kmalloc((long)(int)param_2,0xdc0);
  lVar12 = fts_ftest;
  if (lVar8 == 0) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "cb buffer malloc fail\n",0x17);
      *(int *)(lVar12 + 0xae0) = *(int *)(lVar12 + 0xae0) + 0x16;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:cb buffer malloc fail\n\n","get_cb_incell");
    iVar7 = -0xc;
    goto LAB_00120b2c;
  }
  uVar1 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  iVar13 = (int)uVar1 >> 5;
  iVar5 = (int)param_2 % 0x20;
  if (iVar5 != 0) {
    iVar13 = iVar13 + 1;
  }
  _printk("<3>[FTS_TS/I][TEST]%s:cb packet:%d,remainder:%d\n","get_cb_incell",iVar13,iVar5);
  if (0 < iVar13) {
    iVar23 = 0;
    iVar10 = 0x20;
    do {
      local_74 = 0x18;
      iVar22 = iVar10 * iVar23 + (param_1 & 0xffff);
      iVar2 = iVar5;
      if (iVar23 != iVar13 + -1 || iVar5 == 0) {
        iVar2 = iVar10;
      }
      local_73 = (undefined1)((uint)iVar22 >> 8);
      iVar7 = fts_write(&local_74,2);
      if (iVar7 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
          puVar9 = "<3>[FTS_TS/E][TEST]%s:write cb addr high fail\n\n";
        }
        else {
          pcVar16 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
          piVar11 = (int *)(fts_ftest + 0xae0);
          puVar9 = "<3>[FTS_TS/E][TEST]%s:write cb addr high fail\n\n";
          builtin_strncpy(pcVar16 + 8," addr high fail\n",0x11);
          uVar18._0_1_ = 'w';
          uVar18._1_1_ = 'r';
          uVar18._2_1_ = 'i';
          uVar18._3_1_ = 't';
          uVar18._4_1_ = 'e';
          uVar18._5_1_ = ' ';
          uVar18._6_1_ = 'c';
          uVar18._7_1_ = 'b';
          iVar13 = 0x18;
LAB_00120a9c:
          *(undefined8 *)pcVar16 = uVar18;
          *piVar11 = *piVar11 + iVar13;
        }
LAB_00120ab8:
        _printk(puVar9,"get_cb_incell");
        goto LAB_00120b24;
      }
      local_6f = (undefined1)iVar22;
      local_70 = 0x19;
      iVar7 = fts_write(&local_70,2);
      if (iVar7 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          pcVar16 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
          piVar11 = (int *)(fts_ftest + 0xae0);
          puVar9 = "<3>[FTS_TS/E][TEST]%s:write cb addr low fail\n\n";
          uVar18._0_1_ = 'w';
          uVar18._1_1_ = 'r';
          uVar18._2_1_ = 'i';
          uVar18._3_1_ = 't';
          uVar18._4_1_ = 'e';
          uVar18._5_1_ = ' ';
          uVar18._6_1_ = 'c';
          uVar18._7_1_ = 'b';
          builtin_strncpy(pcVar16 + 8," addr low fail\n",0x10);
          iVar13 = 0x17;
          goto LAB_00120a9c;
        }
        puVar9 = "<3>[FTS_TS/E][TEST]%s:write cb addr low fail\n\n";
        goto LAB_00120ab8;
      }
      iVar22 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar22 = iVar2;
      }
      iVar22 = iVar22 >> 5;
      iVar6 = iVar2 % 0x20;
      if (iVar6 != 0) {
        iVar22 = iVar22 + 1;
      }
      lVar12 = lVar8 + iVar10 * iVar23;
      iVar10 = iVar2;
      if (0x1f < iVar2) {
        iVar10 = 0x20;
      }
      local_6c[0] = 0x6e;
      iVar7 = fts_read(local_6c,1,lVar12,iVar10);
      if (iVar7 < 0) {
LAB_00120a40:
        _printk("<3>[FTS_TS/E][TEST]%s:read buffer fail\n","fts_test_read");
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          pcVar16 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
          piVar11 = (int *)(fts_ftest + 0xae0);
          iVar13 = 0xd;
          puVar9 = "<3>[FTS_TS/E][TEST]%s:read cb fail\n\n";
          uVar18._0_1_ = 'r';
          uVar18._1_1_ = 'e';
          uVar18._2_1_ = 'a';
          uVar18._3_1_ = 'd';
          uVar18._4_1_ = ' ';
          uVar18._5_1_ = 'c';
          uVar18._6_1_ = 'b';
          uVar18._7_1_ = ' ';
          builtin_strncpy(pcVar16 + 6,"b fail\n",8);
          goto LAB_00120a9c;
        }
        puVar9 = "<3>[FTS_TS/E][TEST]%s:read cb fail\n\n";
        goto LAB_00120ab8;
      }
      if (1 < iVar22) {
        iVar20 = 0;
        iVar22 = iVar22 + -1;
        do {
          iVar20 = iVar10 + iVar20;
          iVar3 = iVar6;
          if (iVar22 != 1 || iVar6 == 0) {
            iVar3 = iVar10;
          }
          iVar7 = fts_read(0,0,lVar12 + iVar20,iVar3);
          if (iVar7 < 0) goto LAB_00120a40;
          iVar22 = iVar22 + -1;
          iVar10 = iVar3;
        } while (iVar22 != 0);
      }
      iVar23 = iVar23 + 1;
      iVar10 = iVar2;
    } while (iVar23 != iVar13);
  }
  if (0 < (int)param_2) {
    if (param_2 == 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar21 & 0xfffffffe;
      puVar17 = (uint *)(param_3 + 4);
      pbVar15 = (byte *)(lVar8 + 1);
      uVar19 = uVar14;
      do {
        uVar19 = uVar19 - 2;
        bVar4 = *pbVar15;
        puVar17[-1] = (uint)pbVar15[-1];
        *puVar17 = (uint)bVar4;
        puVar17 = puVar17 + 2;
        pbVar15 = pbVar15 + 2;
      } while (uVar19 != 0);
      if (uVar14 == uVar21) goto LAB_00120b20;
    }
    lVar12 = uVar21 - uVar14;
    pbVar15 = (byte *)(lVar8 + uVar14);
    puVar17 = (uint *)(param_3 + uVar14 * 4);
    do {
      lVar12 = lVar12 + -1;
      *puVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
      puVar17 = puVar17 + 1;
    } while (lVar12 != 0);
  }
LAB_00120b20:
  iVar7 = 0;
LAB_00120b24:
  kfree(lVar8);
LAB_00120b2c:
  lVar12 = sp_el0;
  if (*(long *)(lVar12 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* ---- get_cb_sc @ 00120c24 ---- */

int get_cb_sc(uint param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  char *pcVar16;
  uint *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *in_x18;
  int iVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 unaff_x30;
  undefined1 local_94;
  undefined8 local_84;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6c [4];
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar7 = fts_ftest;
  lVar12 = sp_el0;
  local_68 = *(long *)(lVar12 + 0x5e0);
  if ((fts_ftest == 0) || (*(long *)(fts_ftest + 0x2c8) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "test/func is null\n",0x13);
      *(int *)(lVar7 + 0xae0) = *(int *)(lVar7 + 0xae0) + 0x12;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:test/func is null\n\n","get_cb_sc");
    iVar8 = -0x16;
    goto LAB_00120cc4;
  }
  uVar21 = (ulong)param_1;
  lVar9 = __kmalloc((long)(int)param_1,0xdc0);
  lVar12 = fts_ftest;
  if (lVar9 == 0) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "malloc memory for cb buffer fail\n",0x22);
      *(int *)(lVar12 + 0xae0) = *(int *)(lVar12 + 0xae0) + 0x21;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:malloc memory for cb buffer fail\n\n","get_cb_sc");
    iVar8 = -0xc;
    goto LAB_00120cc4;
  }
  iVar8 = *(int *)(*(long *)(lVar7 + 0x2c8) + 8);
  if (iVar8 == 2) {
    local_94 = 0x49;
    local_84 = 0x450000004e;
  }
  else if (iVar8 == 3) {
    local_94 = 0;
    local_84 = 0x3300000039;
  }
  else {
    local_84 = 0;
    local_94 = 0;
  }
  uVar1 = param_1 + 0x1f;
  if (-1 < (int)param_1) {
    uVar1 = param_1;
  }
  iVar13 = (int)uVar1 >> 5;
  iVar5 = (int)param_1 % 0x20;
  if (iVar5 != 0) {
    iVar13 = iVar13 + 1;
  }
  _printk("<3>[FTS_TS/I][TEST]%s:cb packet:%d,remainder:%d\n","get_cb_sc",iVar13);
  if (0 < iVar13) {
    iVar22 = 0;
    iVar20 = 0;
    iVar8 = 0x20;
    do {
      local_73 = (undefined1)iVar20;
      iVar2 = iVar5;
      if (iVar22 != iVar13 + -1 || iVar5 == 0) {
        iVar2 = iVar8;
      }
      local_74 = (undefined1)((ulong)local_84 >> 0x20);
      iVar8 = fts_write(&local_74,2);
      lVar12 = fts_ftest;
      if (iVar8 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:write cb addr offset fail\n\n";
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"write cb addr offset fail\n",0x1b);
          iVar13 = 0x1a;
          goto LAB_00120fec;
        }
        puVar10 = "<3>[FTS_TS/E][TEST]%s:write cb addr offset fail\n\n";
LAB_00121004:
        _printk(puVar10,"get_cb_sc");
        goto LAB_00121084;
      }
      if (*(char *)(*(long *)(lVar7 + 0x2c8) + 0x18) != '\0') {
        local_70 = local_94;
        local_6f = (undefined1)((uint)iVar20 >> 8);
        iVar8 = fts_write(&local_70,2);
        lVar12 = fts_ftest;
        if (-1 < iVar8) goto LAB_00120eb0;
        if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:write cb_h addr offset fail\n\n";
          goto LAB_00121004;
        }
        pcVar16 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
        puVar10 = "<3>[FTS_TS/E][TEST]%s:write cb_h addr offset fail\n\n";
        uVar18._0_1_ = 'w';
        uVar18._1_1_ = 'r';
        uVar18._2_1_ = 'i';
        uVar18._3_1_ = 't';
        uVar18._4_1_ = 'e';
        uVar18._5_1_ = ' ';
        uVar18._6_1_ = 'c';
        uVar18._7_1_ = 'b';
        builtin_strncpy(pcVar16 + 8,"_h addr offset fail\n",0x15);
        iVar13 = 0x1c;
LAB_00120fe8:
        *(undefined8 *)pcVar16 = uVar18;
LAB_00120fec:
        *(int *)(lVar12 + 0xae0) = *(int *)(lVar12 + 0xae0) + iVar13;
        goto LAB_00121004;
      }
LAB_00120eb0:
      iVar23 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar23 = iVar2;
      }
      iVar23 = iVar23 >> 5;
      iVar6 = iVar2 % 0x20;
      if (iVar6 != 0) {
        iVar23 = iVar23 + 1;
      }
      iVar11 = iVar2;
      if (0x1f < iVar2) {
        iVar11 = 0x20;
      }
      local_6c[0] = (undefined1)local_84;
      iVar8 = fts_read(local_6c,1,lVar9 + iVar20,iVar11);
      if (iVar8 < 0) {
LAB_00120f90:
        _printk("<3>[FTS_TS/E][TEST]%s:read buffer fail\n","fts_test_read");
        lVar12 = fts_ftest;
        if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:read cb fail\n\n";
          goto LAB_00121004;
        }
        pcVar16 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
        iVar13 = 0xd;
        puVar10 = "<3>[FTS_TS/E][TEST]%s:read cb fail\n\n";
        uVar18._0_1_ = 'r';
        uVar18._1_1_ = 'e';
        uVar18._2_1_ = 'a';
        uVar18._3_1_ = 'd';
        uVar18._4_1_ = ' ';
        uVar18._5_1_ = 'c';
        uVar18._6_1_ = 'b';
        uVar18._7_1_ = ' ';
        builtin_strncpy(pcVar16 + 6,"b fail\n",8);
        goto LAB_00120fe8;
      }
      if (1 < iVar23) {
        iVar24 = 0;
        iVar23 = iVar23 + -1;
        do {
          iVar24 = iVar11 + iVar24;
          iVar3 = iVar6;
          if (iVar23 != 1 || iVar6 == 0) {
            iVar3 = iVar11;
          }
          iVar8 = fts_read(0,0,lVar9 + iVar20 + (long)iVar24,iVar3);
          if (iVar8 < 0) goto LAB_00120f90;
          iVar23 = iVar23 + -1;
          iVar11 = iVar3;
        } while (iVar23 != 0);
      }
      iVar20 = iVar2 + iVar20;
      iVar22 = iVar22 + 1;
      iVar8 = iVar2;
    } while (iVar22 != iVar13);
  }
  if (param_3 == 0) {
    if (0 < (int)param_1) {
      if (param_1 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar21 & 0xfffffffe;
        puVar17 = (uint *)(param_2 + 4);
        pbVar15 = (byte *)(lVar9 + 1);
        uVar19 = uVar14;
        do {
          uVar19 = uVar19 - 2;
          bVar4 = *pbVar15;
          puVar17[-1] = (uint)pbVar15[-1];
          *puVar17 = (uint)bVar4;
          puVar17 = puVar17 + 2;
          pbVar15 = pbVar15 + 2;
        } while (uVar19 != 0);
        if (uVar14 == uVar21) goto LAB_00121080;
      }
      lVar12 = uVar21 - uVar14;
      pbVar15 = (byte *)(lVar9 + uVar14);
      puVar17 = (uint *)(param_2 + uVar14 * 4);
      do {
        lVar12 = lVar12 + -1;
        *puVar17 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar12 != 0);
    }
  }
  else if ((param_3 == 1) && (0 < (int)param_1)) {
    iVar8 = 0;
    do {
      iVar13 = iVar8 + 1;
      lVar12 = (long)iVar8;
      iVar5 = iVar8 >> 1;
      iVar8 = iVar8 + 2;
      *(uint *)(param_2 + (long)iVar5 * 4) =
           (uint)CONCAT11(*(undefined1 *)(lVar9 + lVar12),*(undefined1 *)(lVar9 + iVar13));
    } while (iVar8 < (int)param_1);
  }
LAB_00121080:
  iVar8 = 0;
LAB_00121084:
  kfree(lVar9);
LAB_00120cc4:
  lVar12 = sp_el0;
  if (*(long *)(lVar12 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}



/* ---- compare_data @ 00121164 ---- */

undefined8 compare_data(long param_1,int param_2,int param_3,int param_4,int param_5,ulong param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *in_x18;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = fts_ftest;
  if ((param_1 == 0) || (*(int **)(fts_ftest + 0xa0) == (int *)0x0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "data/node_valid is null\n",0x19);
      *(int *)(lVar3 + 0xae0) = *(int *)(lVar3 + 0xae0) + 0x18;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:data/node_valid is null\n\n","compare_data");
    uVar6 = 0;
  }
  else {
    iVar1 = *(int *)(fts_ftest + 0x10);
    uVar2 = *(int *)(fts_ftest + 0x14) - *(int *)(fts_ftest + 0x18);
    uVar7 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      uVar6 = 1;
    }
    else {
      lVar9 = 0;
      uVar6 = 1;
      iVar4 = **(int **)(fts_ftest + 0xa0);
      while( true ) {
        if ((iVar4 != 0) &&
           ((iVar4 = *(int *)(param_1 + lVar9 * 4), iVar4 < param_2 || (param_3 < iVar4)))) {
          iVar8 = (int)lVar9;
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar5 = 0;
            if (iVar1 != 0) {
              iVar5 = iVar8 / iVar1;
            }
            iVar4 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)\n",iVar5 + 1,
                             (iVar8 - iVar5 * iVar1) + 1,iVar4,param_2,param_3);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar4;
            iVar4 = *(int *)(param_1 + lVar9 * 4);
          }
          iVar5 = 0;
          if (iVar1 != 0) {
            iVar5 = iVar8 / iVar1;
          }
          _printk("<3>[FTS_TS/E][TEST]%s:test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)\n\n","compare_data",iVar5 + 1,(iVar8 - iVar5 * iVar1) + 1,iVar4,param_2,
                  param_3);
          uVar6 = 0;
        }
        if (uVar7 - 1 == lVar9) break;
        lVar9 = lVar9 + 1;
        iVar4 = *(int *)(*(long *)(lVar3 + 0xa0) + lVar9 * 4);
      }
    }
    if (((param_6 & 1) != 0) && (iVar4 = *(int *)(lVar3 + 0x14), (int)uVar2 < iVar4)) {
      lVar9 = (long)(int)uVar2;
      do {
        iVar8 = (int)uVar7;
        if ((*(int *)(*(long *)(lVar3 + 0xa0) + lVar9 * 4) != 0) &&
           ((iVar5 = *(int *)(param_1 + lVar9 * 4), iVar5 < param_4 || (param_5 < iVar5)))) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar4 = 0;
            if (iVar1 != 0) {
              iVar4 = iVar8 / iVar1;
            }
            iVar4 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)\n",iVar4 + 1,
                             (iVar8 - iVar4 * iVar1) + 1,iVar5,param_4,param_5);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar4;
            iVar5 = *(int *)(param_1 + lVar9 * 4);
          }
          iVar4 = 0;
          if (iVar1 != 0) {
            iVar4 = iVar8 / iVar1;
          }
          _printk("<3>[FTS_TS/E][TEST]%s:test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)\n\n","compare_data",iVar4 + 1,(iVar8 - iVar4 * iVar1) + 1,iVar5,param_4,
                  param_5);
          uVar6 = 0;
          iVar4 = *(int *)(lVar3 + 0x14);
        }
        lVar9 = lVar9 + 1;
        uVar7 = (ulong)(iVar8 + 1);
      } while (lVar9 < iVar4);
    }
  }
  return uVar6;
}



/* ---- compare_array @ 0012143c ---- */

undefined8 compare_array(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int param6;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *in_x18;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = fts_ftest;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (*(int **)(fts_ftest + 0xa0) == (int *)0x0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "data/min/max/node_valid is null\n",0x21);
      *(int *)(lVar3 + 0xae0) = *(int *)(lVar3 + 0xae0) + 0x20;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:data/min/max/node_valid is null\n\n","compare_array");
    uVar6 = 0;
  }
  else {
    uVar5 = *(uint *)(fts_ftest + 0x14);
    if ((param_4 & 1) == 0) {
      uVar5 = uVar5 - *(int *)(fts_ftest + 0x18);
    }
    if ((int)uVar5 < 1) {
      uVar6 = 1;
    }
    else {
      lVar9 = 0;
      iVar1 = *(int *)(fts_ftest + 0x10);
      uVar6 = 1;
      iVar4 = **(int **)(fts_ftest + 0xa0);
      while( true ) {
        if (iVar4 != 0) {
          lVar7 = lVar9 * 4;
          iVar4 = *(int *)(param_1 + lVar7);
          param6 = *(int *)(param_2 + lVar7);
          if ((iVar4 < param6) || (*(int *)(param_3 + lVar9 * 4) < iVar4)) {
            iVar8 = (int)lVar9;
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              iVar2 = 0;
              if (iVar1 != 0) {
                iVar2 = iVar8 / iVar1;
              }
              iVar4 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                       (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                               "test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)\n",iVar2 + 1,
                               (iVar8 - iVar2 * iVar1) + 1,iVar4,param6,*(int *)(param_3 + lVar7));
              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar4;
              iVar4 = *(int *)(param_1 + lVar7);
              param6 = *(int *)(param_2 + lVar7);
            }
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar8 / iVar1;
            }
            _printk("<3>[FTS_TS/E][TEST]%s:test fail,node(%4d,%4d)=%5d,range=(%5d,%5d)\n\n","compare_array",iVar2 + 1,(iVar8 - iVar2 * iVar1) + 1,iVar4,param6
                    ,*(undefined4 *)(param_3 + lVar9 * 4));
            uVar6 = 0;
          }
        }
        if ((ulong)uVar5 - 1 == lVar9) break;
        lVar9 = lVar9 + 1;
        iVar4 = *(int *)(*(long *)(lVar3 + 0xa0) + lVar9 * 4);
      }
    }
  }
  return uVar6;
}



/* ---- show_data @ 0012162c ---- */

void show_data(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *in_x18;
  int iVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = *(uint *)(fts_ftest + 0x10);
  iVar8 = *(int *)(fts_ftest + 0x14);
  iVar5 = *(int *)(fts_ftest + 0xc);
  _printk("[FTS_TS][TEST]%s: Enter\n","show_data");
  if (0 < iVar5) {
    iVar7 = 0;
    iVar4 = 0;
    lVar6 = fts_ftest;
    do {
      if (*(long *)(lVar6 + 0xad8) != 0) {
        iVar2 = snprintf((char *)(*(long *)(lVar6 + 0xad8) + (long)*(int *)(lVar6 + 0xae0)),0x64000,
                         "Ch/Tx_%02d:  ",iVar4 + 1);
        lVar6 = fts_ftest;
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar2;
      }
      if (0 < (int)uVar1) {
        uVar10 = (ulong)uVar1;
        iVar2 = iVar7;
        do {
          if (*(long *)(lVar6 + 0xad8) != 0) {
            iVar3 = snprintf((char *)(*(long *)(lVar6 + 0xad8) + (long)*(int *)(lVar6 + 0xae0)),
                             0x64000,"%5d, ",*(int *)(param_1 + (long)iVar2 * 4));
            lVar6 = fts_ftest;
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar3;
          }
          uVar10 = uVar10 - 1;
          iVar2 = iVar2 + 1;
        } while (uVar10 != 0);
      }
      if (*(long *)(lVar6 + 0xad8) != 0) {
        *(undefined2 *)(*(long *)(lVar6 + 0xad8) + (long)*(int *)(lVar6 + 0xae0)) = 10;
        lVar6 = fts_ftest;
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + 1;
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + uVar1;
    } while (iVar4 != iVar5);
  }
  if ((param_2 & 1) != 0) {
    lVar6 = fts_ftest;
    if (*(long *)(fts_ftest + 0xad8) != 0) {
      iVar4 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                       0x64000,"Ch/Tx_%02d:  ",iVar5 + 1);
      lVar6 = fts_ftest;
      *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar4;
    }
    iVar5 = uVar1 * iVar5;
    if (iVar5 < iVar8) {
      piVar9 = (int *)(param_1 + (long)iVar5 * 4);
      iVar8 = iVar8 - iVar5;
      do {
        if (*(long *)(lVar6 + 0xad8) != 0) {
          iVar5 = snprintf((char *)(*(long *)(lVar6 + 0xad8) + (long)*(int *)(lVar6 + 0xae0)),
                           0x64000,"%5d, ",*piVar9);
          lVar6 = fts_ftest;
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar5;
        }
        iVar8 = iVar8 + -1;
        piVar9 = piVar9 + 1;
      } while (iVar8 != 0);
    }
    if (*(long *)(lVar6 + 0xad8) != 0) {
      *(undefined2 *)(*(long *)(lVar6 + 0xad8) + (long)*(int *)(lVar6 + 0xae0)) = 10;
      *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + 1;
    }
  }
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","show_data",0x3a3);
  return;
}



/* ---- mapping_switch @ 00121880 ---- */

int mapping_switch(char param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  char local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c;
  char local_2b;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  local_34[0] = -1;
  if (*(char *)(fts_ftest + 0x34) != '\0') {
    local_30[0] = 0x54;
    iVar2 = fts_read(local_30,1,local_34,1);
    if (iVar2 < 0) {
      puVar3 = "<3>[FTS_TS/E][TEST]%s:read 0x54 register fail\n";
LAB_00121960:
      _printk(puVar3,"mapping_switch");
      goto LAB_00121914;
    }
    if (local_34[0] != param_1) {
      local_2c = 0x54;
      local_2b = param_1;
      iVar2 = fts_write(&local_2c,2);
      if (iVar2 < 0) {
        puVar3 = "<3>[FTS_TS/E][TEST]%s:write 0x54 register fail\n";
        goto LAB_00121960;
      }
      msleep(0x12);
    }
  }
  iVar2 = 0;
LAB_00121914:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- get_fw_wp @ 00121974 ---- */

bool get_fw_wp(uint param_1,int param_2)

{
  switch(param_2) {
  case 100:
    return ((param_1 & 0xff ^ 0xffffffff) & 0x44) != 0;
  case 0x65:
    return (param_1 & 0x44) != 0x40;
  case 0x66:
    param_1 = param_1 & 1;
    break;
  case 0x67:
    return (param_1 & 3) - 1 < 2;
  default:
    if (param_2 == 0) {
      return -1 < (char)param_1;
    }
    if (param_2 != 1) {
      return false;
    }
    param_1 = param_1 & 0x20;
  }
  return param_1 == 0;
}



/* ---- get_cb_mc_sc @ 00121a34 ---- */

int get_cb_mc_sc(undefined1 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x5e0);
  local_4c = 0x44;
  local_4b = param_1;
  iVar1 = fts_write(&local_4c,2);
  lVar3 = fts_ftest;
  if (iVar1 < 0) {
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      puVar2 = "<3>[FTS_TS/E][TEST]%s:set mc_sc mode fail\n\n";
    }
    else {
      pcVar5 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
      puVar2 = "<3>[FTS_TS/E][TEST]%s:set mc_sc mode fail\n\n";
      uVar6._0_1_ = 's';
      uVar6._1_1_ = 'e';
      uVar6._2_1_ = 't';
      uVar6._3_1_ = ' ';
      uVar6._4_1_ = 'm';
      uVar6._5_1_ = 'c';
      uVar6._6_1_ = '_';
      uVar6._7_1_ = 's';
      uVar7._0_1_ = 'c';
      uVar7._1_1_ = ' ';
      uVar7._2_1_ = 'm';
      uVar7._3_1_ = 'o';
      uVar7._4_1_ = 'd';
      uVar7._5_1_ = 'e';
      uVar7._6_1_ = ' ';
      uVar7._7_1_ = 'f';
      builtin_strncpy(pcVar5 + 0xd,"e fail\n",8);
      iVar4 = 0x14;
LAB_00121b78:
      *(undefined8 *)pcVar5 = uVar6;
      *(undefined8 *)(pcVar5 + 8) = uVar7;
LAB_00121be0:
      *(int *)(lVar3 + 0xae0) = *(int *)(lVar3 + 0xae0) + iVar4;
    }
  }
  else if ((*(char *)(*(long *)(fts_ftest + 0x2c8) + 0x19) == '\0') ||
          (iVar1 = wait_state_update(0xaa), lVar3 = fts_ftest, -1 < iVar1)) {
    iVar1 = get_cb_sc(param_2,param_3,param_4);
    if (-1 < iVar1) {
      iVar1 = 0;
      goto LAB_00121ac0;
    }
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      pcVar5 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
      iVar4 = 0xf;
      puVar2 = "<3>[FTS_TS/E][TEST]%s:get sc cb fail\n\n";
      uVar6._0_1_ = 'g';
      uVar6._1_1_ = 'e';
      uVar6._2_1_ = 't';
      uVar6._3_1_ = ' ';
      uVar6._4_1_ = 's';
      uVar6._5_1_ = 'c';
      uVar6._6_1_ = ' ';
      uVar6._7_1_ = 'c';
      uVar7._0_1_ = 'b';
      uVar7._1_1_ = ' ';
      uVar7._2_1_ = 'f';
      uVar7._3_1_ = 'a';
      uVar7._4_1_ = 'i';
      uVar7._5_1_ = 'l';
      uVar7._6_1_ = '\n';
      uVar7._7_1_ = '\0';
      lVar3 = fts_ftest;
      goto LAB_00121b78;
    }
    puVar2 = "<3>[FTS_TS/E][TEST]%s:get sc cb fail\n\n";
  }
  else {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      puVar2 = "<3>[FTS_TS/E][TEST]%s:wait state update fail\n\n";
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "wait state update fail\n",0x18);
      iVar4 = 0x17;
      goto LAB_00121be0;
    }
    puVar2 = "<3>[FTS_TS/E][TEST]%s:wait state update fail\n\n";
  }
  _printk(puVar2,"get_cb_mc_sc");
LAB_00121ac0:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* ---- get_rawdata_mc_sc @ 00121c0c ---- */

int get_rawdata_mc_sc(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((fts_ftest == 0) || (*(long *)(fts_ftest + 0x2c8) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      iVar1 = -0x16;
      puVar2 = "<3>[FTS_TS/E][TEST]%s:test/func is null\n\n";
      goto LAB_00121d78;
    }
    pcVar5 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
    uVar7 = 0xa6c6c;
    iVar1 = -0x16;
    uVar3._0_1_ = 't';
    uVar3._1_1_ = 'e';
    uVar3._2_1_ = 's';
    uVar3._3_1_ = 't';
    uVar3._4_1_ = '/';
    uVar3._5_1_ = 'f';
    uVar3._6_1_ = 'u';
    uVar3._7_1_ = 'n';
    uVar6._0_1_ = 'c';
    uVar6._1_1_ = ' ';
    uVar6._2_1_ = 'i';
    uVar6._3_1_ = 's';
    uVar6._4_1_ = ' ';
    uVar6._5_1_ = 'n';
    uVar6._6_1_ = 'u';
    uVar6._7_1_ = 'l';
    puVar2 = "<3>[FTS_TS/E][TEST]%s:test/func is null\n\n";
  }
  else {
    iVar1 = *(int *)(fts_ftest + 0x28) << 1;
    uVar3 = 0xac;
    switch(param_1) {
    case 0:
      uVar3 = 0xab;
      break;
    case 1:
      break;
    case 2:
      uVar3 = 0xa0;
      break;
    case 3:
      iVar1 = 8;
      uVar3 = 0xa1;
      break;
    default:
      uVar3 = 0;
    }
    iVar1 = read_rawdata(fts_ftest,1,uVar3,0x36,iVar1,param_2);
    if (-1 < iVar1) {
      return 0;
    }
    if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
      puVar2 = "<3>[FTS_TS/E][TEST]%s:read rawdata fail\n\n";
      goto LAB_00121d78;
    }
    pcVar5 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
    uVar7 = 0xa6c69;
    puVar2 = "<3>[FTS_TS/E][TEST]%s:read rawdata fail\n\n";
    uVar3._0_1_ = 'r';
    uVar3._1_1_ = 'e';
    uVar3._2_1_ = 'a';
    uVar3._3_1_ = 'd';
    uVar3._4_1_ = ' ';
    uVar3._5_1_ = 'r';
    uVar3._6_1_ = 'a';
    uVar3._7_1_ = 'w';
    uVar6._0_1_ = 'd';
    uVar6._1_1_ = 'a';
    uVar6._2_1_ = 't';
    uVar6._3_1_ = 'a';
    uVar6._4_1_ = ' ';
    uVar6._5_1_ = 'f';
    uVar6._6_1_ = 'a';
    uVar6._7_1_ = 'i';
  }
  piVar4 = (int *)(fts_ftest + 0xae0);
  *(undefined8 *)pcVar5 = uVar3;
  *(undefined8 *)(pcVar5 + 8) = uVar6;
  *(undefined4 *)(pcVar5 + 0xf) = uVar7;
  *piVar4 = *piVar4 + 0x12;
LAB_00121d78:
  _printk(puVar2,"get_rawdata_mc_sc");
  return iVar1;
}



/* ---- get_rawdata_mc @ 00121d88 ---- */

uint get_rawdata_mc(undefined1 param_1,undefined1 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint param3;
  int iVar3;
  undefined *puVar4;
  uint param3_00;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = fts_ftest;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  if (param_3 == 0) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "rawdata buffer is null\n",0x18);
      *(int *)(lVar2 + 0xae0) = *(int *)(lVar2 + 0xae0) + 0x17;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:rawdata buffer is null\n\n","get_rawdata_mc");
    param3 = 0xffffffea;
  }
  else {
    local_40 = 10;
    local_3f = param_1;
    param3 = fts_write(&local_40,2);
    if ((int)param3 < 0) {
      param3_00 = param3 & (int)param3 >> 0x1f;
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar3 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"set frequecy fail,ret=%d\n",param3_00);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar3;
      }
      puVar4 = "<3>[FTS_TS/E][TEST]%s:set frequecy fail,ret=%d\n\n";
    }
    else {
      local_3c = 0xfb;
      local_3b = param_2;
      param3 = fts_write(&local_3c,2);
      if ((int)param3 < 0) {
        param3_00 = param3 & (int)param3 >> 0x1f;
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar3 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"set fir fail,ret=%d\n",param3_00);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar3;
        }
        puVar4 = "<3>[FTS_TS/E][TEST]%s:set fir fail,ret=%d\n\n";
      }
      else {
        get_rawdata(param_3);
        get_rawdata(param_3);
        param3 = get_rawdata(param_3);
        if (-1 < (int)param3) {
          param3 = 0;
          goto LAB_00121e14;
        }
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar3 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"get rawdata fail,ret=%d\n",param3);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar3;
        }
        puVar4 = "<3>[FTS_TS/E][TEST]%s:get rawdata fail,ret=%d\n\n";
        param3_00 = param3;
      }
    }
    _printk(puVar4,"get_rawdata_mc",param3_00);
  }
LAB_00121e14:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param3;
}



/* ---- short_get_adc_data_mc @ 00121fd8 ---- */

int short_get_adc_data_mc(char param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *in_x18;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 unaff_x30;
  char local_78 [4];
  undefined2 local_74 [2];
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6c [4];
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar2 = fts_ftest;
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x5e0);
  local_78[0] = '\0';
  _printk("[FTS_TS][TEST]%s: Enter\n","short_get_adc_data_mc");
  if (*(char *)(*(long *)(lVar2 + 0x2c8) + 0x16) == '\0') {
    local_70 = 7;
    uVar6 = 0xf4;
    uVar7 = 7;
LAB_001220cc:
    local_6f = param_4;
    iVar3 = fts_write(&local_70,2);
    lVar1 = fts_ftest;
    if (-1 < iVar3) {
      iVar3 = 0;
      do {
        msleep(100);
        local_6c[0] = uVar7;
        iVar4 = fts_read(local_6c,1,local_78,1);
        if ((-1 < iVar4) && (local_78[0] == param_1)) {
          iVar3 = read_mass_data(uVar6,param_2,param_3);
          lVar1 = fts_ftest;
          if (iVar3 < 0) {
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                      (long)*(int *)(fts_ftest + 0xae0)),
                              "get short(adc) data fail\n",0x1a);
              *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x19;
            }
            _printk("<3>[FTS_TS/E][TEST]%s:get short(adc) data fail\n\n","short_get_adc_data_mc");
          }
          _printk("[FTS_TS][TEST]%s:adc data:\n\n","short_get_adc_data_mc");
          if (param_2 < 0) {
            param_2 = param_2 + 1;
          }
          print_buffer(param_3,param_2 >> 1,0);
          goto LAB_001222b8;
        }
        _printk("[FTS_TS][TEST]%s:reg%x=%x,retry:%d\n","short_get_adc_data_mc",uVar7,local_78[0],
                iVar3);
        lVar1 = fts_ftest;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x32);
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "short test timeout, ADC data not OK\n",0x25);
        *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x24;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:short test timeout, ADC data not OK\n\n","short_get_adc_data_mc");
      iVar3 = -5;
      goto LAB_001222b8;
    }
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "write short test mode fail\n",0x1c);
      *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x1b;
    }
    puVar5 = "<3>[FTS_TS/E][TEST]%s:write short test mode fail\n\n";
  }
  else {
    local_74[0] = 0x3c3;
    iVar3 = fts_write(local_74,2);
    lVar1 = fts_ftest;
    if (-1 < iVar3) {
      uVar7 = 0xc3;
      local_70 = 0xc0;
      uVar6 = 0xc4;
      goto LAB_001220cc;
    }
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "write short state fail\n",0x18);
      *(int *)(lVar1 + 0xae0) = *(int *)(lVar1 + 0xae0) + 0x17;
    }
    puVar5 = "<3>[FTS_TS/E][TEST]%s:write short state fail\n\n";
  }
  _printk(puVar5,"short_get_adc_data_mc");
LAB_001222b8:
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_get_adc_data_mc",0x48a);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- compare_mc_sc @ 00122314 ---- */

uint compare_mc_sc(ulong param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  int param5;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *in_x18;
  long lVar7;
  long lVar8;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = fts_ftest;
  if ((param_2 & 1) == 0) {
    lVar6 = 1;
    uVar5 = 1;
  }
  else {
    iVar2 = *(int *)(fts_ftest + 0x24);
    if (iVar2 < 1) {
      lVar6 = 1;
    }
    else {
      lVar8 = 0;
      lVar6 = 1;
      do {
        if (*(int *)(*(long *)(lVar1 + 0xa8) + lVar8 * 4) != 0) {
          lVar7 = lVar8 * 4;
          iVar3 = *(int *)(param_3 + lVar7);
          iVar4 = *(int *)(param_4 + lVar7);
          if ((iVar3 < iVar4) || (*(int *)(param_5 + lVar8 * 4) < iVar3)) {
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              iVar2 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                       (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                               "test fail,rx%d=%5d,range=(%5d,%5d)\n",(int)lVar8 + 1,iVar3,iVar4,
                               *(int *)(param_5 + lVar7));
              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar2;
              iVar3 = *(int *)(param_3 + lVar7);
              iVar4 = *(int *)(param_4 + lVar7);
            }
            _printk("<3>[FTS_TS/E][TEST]%s:test fail,rx%d=%5d,range=(%5d,%5d)\n\n","compare_mc_sc",(int)lVar8 + 1,iVar3,iVar4,
                    *(undefined4 *)(param_5 + lVar8 * 4));
            lVar6 = 0;
            iVar2 = *(int *)(lVar1 + 0x24);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar2);
    }
    uVar5 = (uint)lVar6;
  }
  if ((param_1 & 1) != 0) {
    uVar5 = (uint)lVar6;
    iVar2 = *(int *)(lVar1 + 0x24);
    iVar3 = *(int *)(lVar1 + 0x28);
    lVar8 = (long)iVar2;
    if (iVar2 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
        if (*(int *)(*(long *)(lVar1 + 0xa8) + lVar8 * 4) != 0) {
          iVar4 = *(int *)(param_3 + lVar8 * 4);
          param5 = *(int *)(param_4 + lVar8 * 4);
          if (((iVar4 < param5) || (*(int *)(param_5 + lVar8 * 4) < iVar4)) &&
             (lVar6 = *(long *)(fts_ftest + 0xad8), lVar6 != 0)) {
            iVar3 = snprintf((char *)(lVar6 + *(int *)(fts_ftest + 0xae0)),0x64000,
                             "test fail,tx%d=%5d,range=(%5d,%5d)\n",iVar2 - *(int *)(lVar1 + 0x24),
                             iVar4,param5,*(int *)(param_5 + lVar8 * 4));
            lVar6 = 0;
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar3;
            iVar3 = *(int *)(lVar1 + 0x28);
          }
        }
        uVar5 = (uint)lVar6;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar3);
    }
  }
  return uVar5 & 1;
}



/* ---- show_data_mc_sc @ 00122518 ---- */

void show_data_mc_sc(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *in_x18;
  long lVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = fts_ftest;
  if (*(long *)(fts_ftest + 0xad8) != 0) {
    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                    "SCap Rx: ",10);
    *(int *)(lVar2 + 0xae0) = *(int *)(lVar2 + 0xae0) + 9;
  }
  iVar3 = *(int *)(lVar2 + 0x24);
  lVar4 = lVar2;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      if (*(long *)(lVar4 + 0xad8) != 0) {
        iVar3 = snprintf((char *)(*(long *)(lVar4 + 0xad8) + (long)*(int *)(lVar4 + 0xae0)),0x64000,
                         "%5d, ",*(int *)(param_1 + lVar5 * 4));
        lVar4 = fts_ftest;
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar3;
        iVar3 = *(int *)(lVar2 + 0x24);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if (*(long *)(lVar4 + 0xad8) != 0) {
    *(undefined2 *)(*(long *)(lVar4 + 0xad8) + (long)*(int *)(lVar4 + 0xae0)) = 10;
    lVar4 = fts_ftest;
    plVar1 = (long *)(fts_ftest + 0xad8);
    iVar3 = *(int *)(fts_ftest + 0xae0) + 1;
    *(int *)(fts_ftest + 0xae0) = iVar3;
    if (*plVar1 != 0) {
      builtin_strncpy((char *)(*plVar1 + (long)iVar3),"SCap Tx: ",10);
      *(int *)(lVar4 + 0xae0) = *(int *)(lVar4 + 0xae0) + 9;
    }
  }
  iVar3 = *(int *)(lVar2 + 0x28);
  lVar5 = (long)*(int *)(lVar2 + 0x24);
  if (*(int *)(lVar2 + 0x24) < iVar3) {
    do {
      if (*(long *)(lVar4 + 0xad8) != 0) {
        iVar3 = snprintf((char *)(*(long *)(lVar4 + 0xad8) + (long)*(int *)(lVar4 + 0xae0)),0x64000,
                         "%5d, ",*(int *)(param_1 + lVar5 * 4));
        lVar4 = fts_ftest;
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar3;
        iVar3 = *(int *)(lVar2 + 0x28);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if (*(long *)(lVar4 + 0xad8) != 0) {
    *(undefined2 *)(*(long *)(lVar4 + 0xad8) + (long)*(int *)(lVar4 + 0xae0)) = 10;
    *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + 1;
  }
  return;
}



/* ---- fts_test_save_data @ 001226d8 ---- */

void fts_test_save_data(long param_1,undefined4 param_2,void *param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  void *__dest;
  undefined8 *in_x18;
  ulong uVar5;
  ulong __n;
  ulong uVar6;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = fts_ftest;
  uVar6 = (ulong)*(uint *)(fts_ftest + 0x2d0);
  if (0x20 < *(uint *)(fts_ftest + 0x2d0)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x122860);
    (*pcVar4)();
  }
  if ((param_1 == 0) || (param_3 == (void *)0x0)) {
    _printk("<3>[FTS_TS/E][TEST]%s:name/data is null\n","fts_test_save_data");
  }
  else {
    lVar1 = fts_ftest + uVar6 * 0x40;
    uVar5 = (ulong)param_4;
    strlcpy(lVar1 + 0x2d8,param_1,0x1f);
    *(undefined4 *)(lVar1 + 0x2f8) = param_2;
    *(uint *)(lVar1 + 0x310) = param_5 & 1;
    *(uint *)(lVar1 + 0x314) = param_6 & 1;
    *(uint *)(lVar1 + 0x30c) = param_7 & 1;
    if ((int)param_4 < 1) {
      if ((param_5 & 1) == 0) {
        if (((param_6 & 1) == 0) || (*(int *)(lVar3 + 0x18) < 1)) {
          uVar5 = (ulong)(uint)(*(int *)(lVar3 + 0x10) * *(int *)(lVar3 + 0xc));
        }
        else {
          uVar5 = (ulong)(uint)(*(int *)(lVar3 + 0x10) +
                               *(int *)(lVar3 + 0x10) * *(int *)(lVar3 + 0xc));
        }
      }
      else {
        uVar5 = (ulong)(uint)(*(int *)(lVar3 + 0x28) << 1);
      }
    }
    _printk("[FTS_TS][TEST]%s:name:%s,len:%d\n","fts_test_save_data",param_1,uVar5);
    __n = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
    __dest = (void *)__kmalloc(__n,0xdc0);
    *(void **)(lVar1 + 0x300) = __dest;
    if (__dest == (void *)0x0) {
      _printk("<3>[FTS_TS/E][TEST]%s:malloc memory for item(%d) data fail\n","fts_test_save_data",*(undefined4 *)(lVar3 + 0x2d0));
      *(undefined4 *)(lVar3 + uVar6 * 0x40 + 0x308) = 0;
    }
    else {
      memcpy(__dest,param_3,__n);
      iVar2 = *(int *)(lVar3 + 0x2d0);
      *(int *)(lVar3 + uVar6 * 0x40 + 0x308) = (int)uVar5;
      *(int *)(lVar3 + 0x2d0) = iVar2 + 1;
    }
  }
  return;
}



/* ---- lct_tp_selftest_all @ 00122860 ---- */

void lct_tp_selftest_all(void)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined4 uVar5;
  undefined8 unaff_x30;
  char local_b8 [128];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = fts_data;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  pcVar1 = (char *)(fts_data + 0x321);
  *(undefined4 *)(fts_data + 0x4a4) = 1;
  if (*pcVar1 == '\0') {
    lVar4 = *(long *)(lVar2 + 0x18);
    local_b8[0x7e] = '\0';
    local_b8[0x7f] = '\0';
    local_b8[0x76] = '\0';
    local_b8[0x77] = '\0';
    local_b8[0x78] = '\0';
    local_b8[0x79] = '\0';
    local_b8[0x7a] = '\0';
    local_b8[0x7b] = '\0';
    local_b8[0x7c] = '\0';
    local_b8[0x7d] = '\0';
    local_b8[0x6e] = '\0';
    local_b8[0x6f] = '\0';
    local_b8[0x70] = '\0';
    local_b8[0x71] = '\0';
    local_b8[0x72] = '\0';
    local_b8[0x73] = '\0';
    local_b8[0x74] = '\0';
    local_b8[0x75] = '\0';
    builtin_strncpy(local_b8 + 8,"tipleTest_ft3519t.ini",0x16);
    local_b8[0x66] = '\0';
    local_b8[0x67] = '\0';
    local_b8[0x68] = '\0';
    local_b8[0x69] = '\0';
    local_b8[0x6a] = '\0';
    local_b8[0x6b] = '\0';
    local_b8[0x6c] = '\0';
    local_b8[0x6d] = '\0';
    local_b8[0x5e] = '\0';
    local_b8[0x5f] = '\0';
    local_b8[0x60] = '\0';
    local_b8[0x61] = '\0';
    local_b8[0x62] = '\0';
    local_b8[99] = '\0';
    local_b8[100] = '\0';
    local_b8[0x65] = '\0';
    local_b8[0x56] = '\0';
    local_b8[0x57] = '\0';
    local_b8[0x58] = '\0';
    local_b8[0x59] = '\0';
    local_b8[0x5a] = '\0';
    local_b8[0x5b] = '\0';
    local_b8[0x5c] = '\0';
    local_b8[0x5d] = '\0';
    local_b8[0x4e] = '\0';
    local_b8[0x4f] = '\0';
    local_b8[0x50] = '\0';
    local_b8[0x51] = '\0';
    local_b8[0x52] = '\0';
    local_b8[0x53] = '\0';
    local_b8[0x54] = '\0';
    local_b8[0x55] = '\0';
    local_b8[0x46] = '\0';
    local_b8[0x47] = '\0';
    local_b8[0x48] = '\0';
    local_b8[0x49] = '\0';
    local_b8[0x4a] = '\0';
    local_b8[0x4b] = '\0';
    local_b8[0x4c] = '\0';
    local_b8[0x4d] = '\0';
    local_b8[0x3e] = '\0';
    local_b8[0x3f] = '\0';
    local_b8[0x40] = '\0';
    local_b8[0x41] = '\0';
    local_b8[0x42] = '\0';
    local_b8[0x43] = '\0';
    local_b8[0x44] = '\0';
    local_b8[0x45] = '\0';
    local_b8[0x36] = '\0';
    local_b8[0x37] = '\0';
    local_b8[0x38] = '\0';
    local_b8[0x39] = '\0';
    local_b8[0x3a] = '\0';
    local_b8[0x3b] = '\0';
    local_b8[0x3c] = '\0';
    local_b8[0x3d] = '\0';
    local_b8[0x2e] = '\0';
    local_b8[0x2f] = '\0';
    local_b8[0x30] = '\0';
    local_b8[0x31] = '\0';
    local_b8[0x32] = '\0';
    local_b8[0x33] = '\0';
    local_b8[0x34] = '\0';
    local_b8[0x35] = '\0';
    local_b8[0x26] = '\0';
    local_b8[0x27] = '\0';
    local_b8[0x28] = '\0';
    local_b8[0x29] = '\0';
    local_b8[0x2a] = '\0';
    local_b8[0x2b] = '\0';
    local_b8[0x2c] = '\0';
    local_b8[0x2d] = '\0';
    local_b8[0x1e] = '\0';
    local_b8[0x1f] = '\0';
    local_b8[0x20] = '\0';
    local_b8[0x21] = '\0';
    local_b8[0x22] = '\0';
    local_b8[0x23] = '\0';
    local_b8[0x24] = '\0';
    local_b8[0x25] = '\0';
    builtin_strncpy(local_b8,"Conf_Mul",8);
    _printk("[FTS_TS][TEST]%s:fwname:%s.\n","lct_tp_selftest_all",local_b8);
    lVar4 = lVar4 + 0x208;
    mutex_lock(lVar4);
    disable_irq(*(undefined4 *)(lVar2 + 0x2f0));
    fts_esdcheck_switch(lVar2,0);
    iVar3 = fts_test_entry(local_b8);
    fts_esdcheck_switch(lVar2,1);
    enable_irq(*(undefined4 *)(lVar2 + 0x2f0));
    mutex_unlock(lVar4);
    uVar5 = 1;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
  }
  else {
    _printk("<6>[FTS_TS/I]%s:In suspend, no test, return now\n","lct_tp_selftest_all");
    uVar5 = 0xffffffea;
  }
  *(undefined4 *)(lVar2 + 0x4a4) = 0;
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ---- fts_test_entry @ 001229b4 ---- */

int fts_test_entry(char *param_1)

{
  long lVar1;
  int iVar2;
  int param6;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  long lVar15;
  void *__s;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  int iVar27;
  undefined8 *in_x18;
  long lVar28;
  long *plVar29;
  char *pcVar30;
  int param7;
  ulong uVar31;
  undefined8 unaff_x30;
  char local_7c [4];
  byte local_78 [4];
  undefined4 local_74;
  byte local_70 [4];
  byte local_6c [4];
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar15 = fts_ftest;
  lVar24 = sp_el0;
  local_68 = *(long *)(lVar24 + 0x5e0);
  _printk("[FTS_TS][TEST]%s: Enter\n","fts_test_main_init");
  memset((void *)(lVar15 + 0x2d0),0,0x808);
  lVar24 = fts_ftest;
  local_7c[0] = '\0';
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x2c8) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      iVar7 = -0x16;
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "tdata/func is NULL\n",0x14);
      puVar14 = "<3>[FTS_TS/E][TEST]%s:tdata/func is NULL\n\n";
      iVar11 = 0x13;
      goto LAB_00122cb0;
    }
    iVar7 = -0x16;
    puVar14 = "<3>[FTS_TS/E][TEST]%s:tdata/func is NULL\n\n";
LAB_00122cc8:
    _printk(puVar14,"fts_test_init_basicinfo");
    puVar14 = "<3>[FTS_TS/E][TEST]%s:test init basicinfo fail\n";
LAB_00122cdc:
    _printk(puVar14,"fts_test_main_init");
  }
  else {
    local_74 = CONCAT31(local_74._1_3_,0xa6);
    fts_read(&local_74,1,local_7c,1);
    *(char *)(lVar15 + 0x30) = local_7c[0];
    if (*(int *)(*(long *)(lVar15 + 0x2c8) + 8) == 1) {
      local_74._0_1_ = 0x80;
      fts_read(&local_74,1,local_7c,1);
      *(char *)(lVar15 + 0x31) = local_7c[0];
      local_74 = CONCAT31(local_74._1_3_,0x82);
      fts_read(&local_74,1,local_7c,1);
      *(char *)(lVar15 + 0x32) = local_7c[0];
    }
    iVar7 = enter_factory_mode();
    if (iVar7 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
        puVar14 = "<3>[FTS_TS/E][TEST]%s:enter factory mode fail\n\n";
        goto LAB_00122cc8;
      }
      puVar23 = (undefined8 *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
      pcVar30 = "enter factory mode fail\n";
      puVar14 = "<3>[FTS_TS/E][TEST]%s:enter factory mode fail\n\n";
LAB_00122c98:
      lVar24 = fts_ftest;
      *(undefined1 *)(puVar23 + 3) = 0;
      uVar3 = *(undefined8 *)(pcVar30 + 0x10);
      uVar25 = *(undefined8 *)pcVar30;
      puVar23[1] = *(undefined8 *)(pcVar30 + 8);
      puVar23[2] = uVar3;
      iVar11 = 0x18;
      *puVar23 = uVar25;
LAB_00122cb0:
      *(int *)(lVar24 + 0xae0) = *(int *)(lVar24 + 0xae0) + iVar11;
      goto LAB_00122cc8;
    }
    iVar7 = *(int *)(*(long *)(lVar15 + 0x2c8) + 8);
    if (iVar7 == 2) {
      local_74._0_1_ = 0x53;
      fts_read(&local_74,1,local_7c,1);
      local_74 = CONCAT31(local_74._1_3_,0x54);
      *(bool *)(lVar15 + 0x34) = local_7c[0] == '\x01';
      fts_read(&local_74,1,local_7c,1);
      *(char *)(lVar15 + 0x35) = local_7c[0];
      iVar7 = *(int *)(*(long *)(lVar15 + 0x2c8) + 8);
    }
    local_70[0] = 0;
    local_78[0] = 0;
    if (iVar7 != 3) {
      iVar7 = get_tx_rx_num(2,local_70,0x3c);
      if (iVar7 < 0) {
        puVar14 = "<3>[FTS_TS/E][TEST]%s:get tx_num fail\n";
        goto LAB_00122c58;
      }
      iVar7 = get_tx_rx_num(3,local_78,100);
      if (iVar7 < 0) {
        puVar14 = "<3>[FTS_TS/E][TEST]%s:get rx_num fail\n";
        goto LAB_00122c58;
      }
      lVar24 = *(long *)(lVar15 + 0x2c8);
      if (*(int *)(lVar24 + 8) == 2) {
        uVar18 = *(uint *)(lVar24 + 0x10);
LAB_00123534:
        uVar10 = (uint)local_70[0];
        uVar19 = (uint)local_78[0];
        lVar24 = *(long *)(lVar15 + 0x2c8);
        *(uint *)(lVar15 + 0xc) = (uint)local_70[0];
        *(uint *)(lVar15 + 0x10) = (uint)local_78[0];
        uVar17 = (uint)local_70[0];
        if (*(int *)(lVar24 + 8) == 2) {
          iVar7 = (uint)local_78[0] + (uint)local_70[0];
LAB_00123564:
          *(int *)(lVar15 + 8) = iVar7;
        }
        else if (*(int *)(lVar24 + 8) == 1) {
          iVar7 = local_78[0] * uVar17;
          goto LAB_00123564;
        }
        uVar22 = local_78[0] * uVar17;
        goto LAB_00123570;
      }
      if (*(int *)(lVar24 + 8) != 1) {
LAB_00123528:
        uVar18 = 0;
        goto LAB_00123534;
      }
      iVar11 = *(int *)(lVar24 + 0x10);
      local_6c[0] = 0;
      if (iVar11 == 0) {
        _printk("[FTS_TS][TEST]%s:not support key, don\'t read key num register\n","get_key_num");
        goto LAB_00123528;
      }
      local_74._0_1_ = 0x1e;
      iVar7 = fts_read(&local_74,1,local_6c,1);
      if (iVar7 < 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (local_6c[0] >> 1 & 1) + (local_6c[0] & 1) + (local_6c[0] >> 2 & 1);
      }
      local_74 = CONCAT31(local_74._1_3_,0x1f);
      iVar7 = fts_read(&local_74,1,local_6c,1);
      if (iVar7 < 0) {
        if ((int)uVar18 <= iVar11) {
          puVar14 = "<3>[FTS_TS/E][TEST]%s:get key_num fail\n";
          goto LAB_00122c58;
        }
      }
      else {
        uVar18 = uVar18 + (local_6c[0] & 1) + (local_6c[0] >> 1 & 1) + (local_6c[0] >> 2 & 1);
        if ((int)uVar18 <= iVar11) goto LAB_00123534;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:get key num, fw:%d > max:%d\n","get_key_num",uVar18,iVar11);
      _printk("<3>[FTS_TS/E][TEST]%s:get key_num fail\n","get_channel_num");
LAB_00123680:
      iVar7 = -5;
LAB_00122c64:
      if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
        puVar14 = "<3>[FTS_TS/E][TEST]%s:get channel number fail\n\n";
        goto LAB_00122cc8;
      }
      puVar23 = (undefined8 *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
      pcVar30 = "get channel number fail\n";
      puVar14 = "<3>[FTS_TS/E][TEST]%s:get channel number fail\n\n";
      goto LAB_00122c98;
    }
    iVar7 = get_tx_rx_num(10,local_70,0x90);
    if (iVar7 < 0) {
      puVar14 = "<3>[FTS_TS/E][TEST]%s:get channel number fail\n";
LAB_00122c58:
      _printk(puVar14,"get_channel_num");
      goto LAB_00122c64;
    }
    iVar7 = get_tx_rx_num(0xb,local_78,6);
    if (iVar7 < 0) {
      puVar14 = "<3>[FTS_TS/E][TEST]%s:get key number fail\n";
      goto LAB_00122c58;
    }
    uVar17 = (uint)local_70[0];
    uVar10 = 1;
    uVar18 = (uint)local_78[0];
    lVar24 = *(long *)(lVar15 + 0x2c8);
    uVar22 = (uint)local_70[0];
    *(undefined4 *)(lVar15 + 0xc) = 1;
    *(uint *)(lVar15 + 0x10) = uVar22;
    *(uint *)(lVar15 + 8) = (uint)local_70[0];
    uVar19 = uVar18;
LAB_00123570:
    *(uint *)(lVar15 + 0x2c) = uVar18;
    *(uint *)(lVar15 + 0x14) = uVar18 + uVar22;
    *(uint *)(lVar15 + 0x18) = uVar18;
    *(undefined8 *)(lVar15 + 0x1c) = *(undefined8 *)(lVar15 + 8);
    *(undefined8 *)(lVar15 + 0x24) = *(undefined8 *)(lVar15 + 0x10);
    if (*(int *)(lVar24 + 8) == 2) {
      if (*(char *)(lVar15 + 0x34) != '\0') {
        iVar7 = get_tx_rx_num(0x55,local_70,0x3c);
        if (iVar7 < 0) {
          puVar14 = "<3>[FTS_TS/E][TEST]%s:get no-mappint tx_num fail\n";
        }
        else {
          iVar7 = get_tx_rx_num(0x56,local_78,0x3c);
          if (-1 < iVar7) {
            uVar17 = (uint)local_70[0];
            uVar19 = (uint)local_78[0];
            uVar10 = *(uint *)(lVar15 + 0xc);
            *(uint *)(lVar15 + 0x20) = (uint)local_70[0];
            *(uint *)(lVar15 + 0x24) = (uint)local_78[0];
            goto LAB_00123630;
          }
          puVar14 = "<3>[FTS_TS/E][TEST]%s:get no-mapping rx_num fail\n";
        }
        goto LAB_00122c58;
      }
LAB_00123630:
      *(uint *)(lVar15 + 0x1c) = uVar17 + uVar19;
      *(uint *)(lVar15 + 0x28) = uVar17 + uVar19;
    }
    if (0x3c < (int)uVar10) {
      puVar14 = "<3>[FTS_TS/E][TEST]%s:tx num(%d) fail\n";
      uVar18 = uVar10;
LAB_0012367c:
      _printk(puVar14,"get_channel_num",uVar18);
      goto LAB_00123680;
    }
    uVar18 = *(uint *)(lVar15 + 0x10);
    if (100 < (int)uVar18) {
      puVar14 = "<3>[FTS_TS/E][TEST]%s:rx num(%d) fail\n";
      goto LAB_0012367c;
    }
    _printk("<3>[FTS_TS/I][TEST]%s:node_num:%d, tx:%d, rx:%d, key:%d\n","get_channel_num",*(undefined4 *)(lVar15 + 0x14),uVar10,uVar18,
            *(undefined4 *)(lVar15 + 0x18));
    iVar7 = fts_test_malloc_free_thr(lVar15,1);
    if (iVar7 < 0) {
      puVar14 = "<3>[FTS_TS/E][TEST]%s:test malloc for threshold fail\n";
      goto LAB_00122cdc;
    }
    iVar7 = *(int *)(*(long *)(lVar15 + 0x2c8) + 8);
    if (iVar7 == 3) {
      puVar21 = (undefined4 *)(lVar15 + 0x158);
LAB_00123788:
      *puVar21 = 0xffffffff;
    }
    else {
      if (iVar7 == 2) {
        puVar21 = (undefined4 *)(lVar15 + 0x2c0);
        goto LAB_00123788;
      }
      if (iVar7 == 1) {
        puVar21 = (undefined4 *)(lVar15 + 0x178);
        goto LAB_00123788;
      }
    }
    iVar7 = fts_test_malloc_free_data_txt(lVar15);
    if (iVar7 < 0) {
      puVar14 = "<3>[FTS_TS/E][TEST]%s:allocate memory for test data(txt) fail\n";
      goto LAB_00122cdc;
    }
    *(int *)(lVar15 + 0x98) =
         (*(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x10) * *(int *)(lVar15 + 0xc)) * 8;
    _printk("<3>[FTS_TS/I][TEST]%s:test buffer length:%d\n","fts_test_main_init");
    __s = (void *)__kmalloc((long)*(int *)(lVar15 + 0x98),0xdc0);
    *(void **)(lVar15 + 0x90) = __s;
    if (__s != (void *)0x0) {
      memset(__s,0,(long)*(int *)(lVar15 + 0x98));
      _printk("[FTS_TS][TEST]%s: Exit(%d)\n","fts_test_main_init",0x81d);
      if (*(long *)(fts_ftest + 0xad8) != 0) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"ini_file_name:%s\n",param_1);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      iVar7 = fts_test_get_testparam_from_ini(param_1);
      if (iVar7 < 0) {
        puVar14 = "<3>[FTS_TS/E][TEST]%s:get testparam fail\n";
      }
      else {
        if (((fts_ftest == 0) || (lVar24 = *(long *)(fts_ftest + 0x2c8), lVar24 == 0)) ||
           (*(long *)(lVar24 + 0x30) == 0)) {
          _printk("<3>[FTS_TS/E][TEST]%s:test func/start_test func is null\n","fts_test_start");
        }
        else {
          *(undefined4 *)(fts_ftest + 0x2d0) = 0;
          pcVar6 = *(code **)(lVar24 + 0x30);
          if (2 < ((ulong)(pcVar6 + -0x111550) >> 3 | (long)pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar6,&DAT_00104c90);
          }
          iVar7 = (*pcVar6)();
          lVar24 = fts_ftest;
          if (iVar7 == 1) {
            if (*(long *)(fts_ftest + 0xad8) != 0) {
              builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                      (long)*(int *)(fts_ftest + 0xae0)),
                              "\n\n=======Tp test pass.\n",0x18);
              *(int *)(lVar24 + 0xae0) = *(int *)(lVar24 + 0xae0) + 0x17;
            }
            iVar7 = 0;
            puVar14 = "<3>[FTS_TS/I][TEST]%s:TP selftest PASS\n";
            *(undefined4 *)(lVar24 + 0xae4) = 1;
            goto LAB_00122cf0;
          }
        }
        lVar24 = fts_ftest;
        if (*(long *)(fts_ftest + 0xad8) != 0) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"\n\n=======Tp test failure.\n",0x1b);
          *(int *)(lVar24 + 0xae0) = *(int *)(lVar24 + 0xae0) + 0x1a;
        }
        iVar7 = -1;
        puVar14 = "<3>[FTS_TS/E][TEST]%s:TP selftest FAIL\n";
        *(undefined4 *)(lVar24 + 0xae4) = 0;
      }
      goto LAB_00122cf0;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:test buffer(%d) malloc fail\n","fts_test_main_init");
    iVar7 = -0xc;
  }
  puVar14 = "<3>[FTS_TS/E][TEST]%s:fts_test_main_init fail\n";
LAB_00122cf0:
  _printk(puVar14,"fts_test_entry");
  lVar24 = fts_ftest;
  _printk("[FTS_TS][TEST]%s: Enter\n","fts_test_main_exit");
  if ((*(long *)(lVar24 + 0x2c8) == 0) || (*(long *)(*(long *)(lVar24 + 0x2c8) + 0x38) == 0)) {
    _printk("<3>[FTS_TS/I][TEST]%s:save data in csv format\n","fts_test_save_data_csv");
    pcVar30 = *(char **)(fts_ftest + 0x40);
    if (pcVar30 != (char *)0x0) {
      lVar15 = vmalloc(0x400);
      if (lVar15 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:line2_buffer malloc fail\n\n","fts_test_save_data_csv");
      }
      else {
        _printk("<3>[FTS_TS/I][TEST]%s:test item count:%d\n","fts_test_save_data_csv",*(undefined4 *)(lVar24 + 0x2d0));
        iVar8 = snprintf(pcVar30,0x64000,"ECC, 85, 170, IC Name, %s, IC Code, %x\n",
                         (char *)(lVar24 + 0x1008),(uint)*(ushort *)(lVar24 + 0x102a));
        iVar11 = *(int *)(lVar24 + 0x2d0);
        if (iVar11 < 1) {
          iVar13 = 0;
          iVar12 = 0;
        }
        else {
          lVar26 = 0;
          iVar12 = 0;
          iVar13 = 0;
          param7 = 0xb;
          do {
            if (lVar26 == 0x21) goto LAB_00123914;
            lVar1 = lVar24 + lVar26 * 0x40;
            if (*(int *)(lVar1 + 0x310) == 0) {
              if ((*(int *)(lVar1 + 0x314) == 0) || (*(int *)(lVar24 + 0x18) < 1)) {
                param6 = *(int *)(lVar24 + 0x10);
                iVar9 = param6 * *(int *)(lVar24 + 0xc);
              }
              else {
                param6 = *(int *)(lVar24 + 0x10);
                iVar9 = param6 + param6 * *(int *)(lVar24 + 0xc);
              }
            }
            else {
              iVar9 = *(int *)(lVar24 + 0x28);
              param6 = *(int *)(lVar24 + 0x20);
              if (*(int *)(lVar24 + 0x20) <= *(int *)(lVar24 + 0x24)) {
                param6 = *(int *)(lVar24 + 0x24);
              }
            }
            lVar1 = lVar24 + lVar26 * 0x40;
            iVar4 = *(int *)(lVar1 + 0x308);
            iVar5 = 0;
            if (iVar9 != 0) {
              iVar5 = (iVar4 + -1) / iVar9;
            }
            iVar2 = iVar4;
            if (iVar9 < iVar4) {
              iVar2 = iVar9;
            }
            iVar27 = 1;
            if (iVar9 < iVar4) {
              iVar27 = iVar5 + 1;
            }
            if (0 < iVar27) {
              uVar18 = 1;
              iVar11 = 0;
              if (param6 != 0) {
                iVar11 = (iVar2 + -1) / param6;
              }
              do {
                uVar10 = uVar18;
                if (*(int *)(*(long *)(lVar24 + 0x2c8) + 8) == 2) {
                  iVar9 = *(int *)(lVar1 + 0x2f8);
                  uVar10 = 2;
                  if (iVar27 != 1 || iVar9 != 7) {
                    uVar10 = uVar18;
                  }
                  if (iVar9 - 9U < 2) {
                    local_6c[0] = 0;
                    local_70[0] = 0;
                    local_74 = CONCAT31(local_74._1_3_,9);
                    uVar10 = fts_read(&local_74,1,local_6c,1);
                    if ((int)uVar10 < 0) {
                      uVar10 = uVar10 & (int)uVar10 >> 0x1f;
                      if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                         (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                        iVar9 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                 (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                         "read water_channel_sel fail,ret=%d\n",uVar10);
                        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar9;
                      }
                      puVar14 = "<3>[FTS_TS/E][TEST]%s:read water_channel_sel fail,ret=%d\n\n";
                    }
                    else {
                      local_74 = CONCAT31(local_74._1_3_,0xf);
                      uVar10 = fts_read(&local_74,1,local_70,1);
                      if (-1 < (int)uVar10) {
                        uVar19 = (local_6c[0] >> 5 ^ 0xffffffff) & 1;
                        uVar10 = 1;
                        if (uVar18 != uVar19) {
                          uVar19 = uVar19 + ((~(uint)local_6c[0] & 0x80) >> 7);
                          if (uVar18 == uVar19) {
                            uVar10 = 2;
                          }
                          else {
                            if ((local_70[0] & 3) != 0) {
                              uVar19 = uVar19 + 1;
                            }
                            if (uVar18 == uVar19) {
                              uVar10 = 3;
                            }
                            else {
                              uVar10 = 4;
                              if (uVar18 != uVar19 + (local_70[0] >> 2 & 1)) {
                                uVar10 = 5;
                              }
                            }
                          }
                        }
                        goto LAB_00122ef4;
                      }
                      uVar10 = uVar10 & (int)uVar10 >> 0x1f;
                      if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                         (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                        iVar9 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                 (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                         "read high_channel_sel fail,ret=%d\n",uVar10);
                        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar9;
                      }
                      puVar14 = "<3>[FTS_TS/E][TEST]%s:read high_channel_sel fail,ret=%d\n\n";
                    }
                    _printk(puVar14,"fts_test_get_item_count_scap_csv",uVar10);
                    uVar10 = uVar18;
                  }
                }
LAB_00122ef4:
                iVar9 = snprintf((char *)(lVar15 + iVar13),(long)(0x400 - iVar13),
                                 "%s, %d, %d, %d, %d, %d, ",(char *)(lVar1 + 0x2d8),
                                 *(int *)(lVar1 + 0x2f8),iVar11 + 1,param6,param7,uVar10);
                param7 = param7 + iVar11 + 1;
                iVar13 = iVar9 + iVar13;
                uVar18 = uVar18 + 1;
              } while ((int)uVar18 <= iVar27);
              iVar11 = *(int *)(lVar24 + 0x2d0);
              iVar12 = iVar12 + uVar18 + -1;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar11);
        }
        iVar11 = snprintf(pcVar30 + iVar8,(long)(0x64000 - iVar8),"TestItem Num, %d, ",iVar12);
        iVar11 = iVar11 + iVar8;
        if (0 < iVar13) {
          iVar8 = snprintf(pcVar30 + iVar11,(long)(0x64000 - iVar11),"%s",lVar15);
          iVar11 = iVar8 + iVar11;
        }
        iVar8 = snprintf(pcVar30 + iVar11,(long)(0x64000 - iVar11),"\n\n\n\n\n\n\n\n\n");
        iVar8 = iVar8 + iVar11;
        if (0 < *(int *)(lVar24 + 0x2d0)) {
          lVar26 = 0;
          do {
            if (lVar26 == 0x21) goto LAB_00123914;
            lVar1 = lVar24 + lVar26 * 0x40;
            lVar20 = *(long *)(lVar1 + 0x300);
            if (lVar20 == 0) {
              _printk("<3>[FTS_TS/E][TEST]%s:test item data is null\n","fts_test_save_data_csv");
              goto LAB_0012334c;
            }
            if (*(int *)(lVar1 + 0x310) == 0) {
              if (0 < *(int *)(lVar1 + 0x308)) {
                lVar28 = 0;
                while( true ) {
                  iVar13 = snprintf(pcVar30 + iVar8,(long)(0x64000 - iVar8),"%d, ",
                                    (ulong)*(uint *)(lVar20 + lVar28 * 4));
                  iVar11 = *(int *)(lVar24 + 0x10);
                  iVar8 = iVar13 + iVar8;
                  iVar13 = 0;
                  iVar12 = (int)(lVar28 + 1);
                  if (iVar11 != 0) {
                    iVar13 = iVar12 / iVar11;
                  }
                  if (iVar12 == iVar13 * iVar11) {
                    iVar11 = snprintf(pcVar30 + iVar8,(long)(0x64000 - iVar8),"\n");
                    iVar8 = iVar11 + iVar8;
                  }
                  if ((long)*(int *)(lVar1 + 0x308) <= lVar28 + 1) break;
                  lVar20 = *(long *)(lVar1 + 0x300);
                  lVar28 = lVar28 + 1;
                }
              }
            }
            else if (0 < *(int *)(lVar1 + 0x308)) {
              iVar13 = 0;
              iVar11 = 0;
              do {
                if (*(int *)(lVar24 + 0x28) < 1) {
                  uVar31 = 0;
                }
                else {
                  uVar31 = 0;
                  do {
                    iVar12 = snprintf(pcVar30 + iVar8,(long)(0x64000 - iVar8),"%d, ",
                                      (ulong)*(uint *)(*(long *)(lVar1 + 0x300) +
                                                      (long)(iVar11 + (int)uVar31) * 4));
                    iVar8 = iVar12 + iVar8;
                    uVar31 = uVar31 + 1;
                    if (uVar31 == *(uint *)(lVar24 + 0x24)) {
                      iVar12 = snprintf(pcVar30 + iVar8,(long)(0x64000 - iVar8),"\n");
                      iVar8 = iVar12 + iVar8;
                    }
                  } while ((long)uVar31 < (long)*(int *)(lVar24 + 0x28));
                }
                iVar12 = snprintf(pcVar30 + iVar8,(long)(0x64000 - iVar8),"\n");
                iVar8 = iVar12 + iVar8;
                iVar11 = (int)uVar31 + iVar11;
                iVar13 = (int)uVar31 + iVar13;
              } while (iVar13 < *(int *)(lVar1 + 0x308));
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < *(int *)(lVar24 + 0x2d0));
        }
        _printk("<3>[FTS_TS/I][TEST]%s:csv length:%d\n","fts_test_save_data_csv",iVar8);
        *(int *)(fts_ftest + 0x48) = iVar8;
LAB_0012334c:
        vfree(lVar15);
      }
    }
  }
  else {
    local_74 = 0;
    _printk("<3>[FTS_TS/I][TEST]%s:save data in csv format\n","fts_test_save_data_csv_private");
    lVar15 = vmalloc(0x64000);
    if (lVar15 == 0) {
      _printk("<3>[FTS_TS/E][TEST]%s:csv_buffer malloc fail\n\n","fts_test_save_data_csv_private");
    }
    else {
      if ((*(long *)(lVar24 + 0x2c8) == 0) ||
         (pcVar6 = *(code **)(*(long *)(lVar24 + 0x2c8) + 0x38), pcVar6 == (code *)0x0)) {
        uVar16 = 0;
      }
      else {
        __cfi_slowpath_diag(0xeb3cd7706799b13b,pcVar6,&DAT_00104cb0);
        (*pcVar6)(lVar15,&local_74);
        uVar16 = local_74;
      }
      _printk("<3>[FTS_TS/I][TEST]%s:csv length:%d\n","fts_test_save_data_csv_private",uVar16);
      vfree(lVar15);
    }
  }
  if ((lVar24 == 0) || (*(void **)(lVar24 + 0xad8) == (void *)0x0)) {
    _printk("<3>[FTS_TS/E][TEST]%s:test result is null\n","fts_test_save_result_txt");
  }
  else if (*(void **)(fts_ftest + 0x50) != (void *)0x0) {
    memcpy(*(void **)(fts_ftest + 0x50),*(void **)(lVar24 + 0xad8),(long)*(int *)(lVar24 + 0xae0));
    _printk("<3>[FTS_TS/I][TEST]%s:test result length in txt:%d\n","fts_test_save_result_txt",*(undefined4 *)(lVar24 + 0xae0));
  }
  if (*(long *)(lVar24 + 0xad8) != 0) {
    vfree();
    *(undefined8 *)(lVar24 + 0xad8) = 0;
  }
  fts_test_malloc_free_thr(lVar24,0);
  iVar11 = *(int *)(lVar24 + 0x2d0);
  if (0 < iVar11) {
    lVar15 = 0;
    plVar29 = (long *)(lVar24 + 0x300);
    do {
      if (lVar15 == 0x20) {
LAB_00123914:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x123918);
        (*pcVar6)();
      }
      if (*plVar29 != 0) {
        kfree();
        *plVar29 = 0;
        iVar11 = *(int *)(lVar24 + 0x2d0);
      }
      lVar15 = lVar15 + 1;
      plVar29 = plVar29 + 8;
    } while (lVar15 < iVar11);
  }
  if (*(long *)(lVar24 + 0x90) != 0) {
    kfree();
    *(undefined8 *)(lVar24 + 0x90) = 0;
  }
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","fts_test_main_exit",0x836);
  enter_work_mode();
  lVar24 = sp_el0;
  if (*(long *)(lVar24 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* ---- fts_test_init @ 001239c0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fts_test_init(long param_1)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("[FTS_TS][TEST]%s: Enter\n","fts_test_init");
  sVar1 = *(short *)(param_1 + 0x32);
  _printk("<3>[FTS_TS/I][TEST]%s:init test function\n","fts_test_func_init");
  tp_test_proc = proc_create("fts_tp_csv_test",0x124,0,&tp_test_proc_fops);
  if (tp_test_proc == 0) {
    _printk("<3>[FTS_TS/E][TEST]%s:[focal] %s() - ERROR: create fts_tp_differ proc()  failed.\n","fts_test_func_init","fts_test_func_init");
  }
  tp_result_proc = proc_create("fts_tp_txt_result",0x124,0,&tp_result_proc_fops);
  if (tp_result_proc == 0) {
    _printk("<3>[FTS_TS/E][TEST]%s:[focal] %s() - ERROR: create fts_tp_differ_txt proc()  failed.\n","fts_test_func_init","fts_test_func_init");
  }
  plVar3 = (long *)kmem_cache_alloc_trace(_init_lct_tp_work,0xdc0,0x1030);
  puVar4 = test_func_list;
  fts_ftest = plVar3;
  if (plVar3 == (long *)0x0) {
    iVar2 = -0xc;
    puVar4 = "<3>[FTS_TS/E][TEST]%s:malloc memory for test fail\n";
LAB_00123b88:
    _printk(puVar4,"fts_test_func_init");
    plVar3 = fts_ftest;
    if ((fts_ftest[0x15b] != 0) && ((int)fts_ftest[0x15c] < 0x64000)) {
      builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                      "test functions init fail",0x19);
      *(int *)(plVar3 + 0x15c) = (int)plVar3[0x15c] + 0x18;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:test functions init fail\n","fts_test_init");
    return iVar2;
  }
  if (*(short *)test_func_list != 0) {
    if (*(short *)test_func_list == sVar1) {
      _printk("<3>[FTS_TS/I][TEST]%s:match test function,type:%x\n","fts_test_func_init");
      plVar3 = fts_ftest;
      fts_ftest[0x59] = (long)puVar4;
    }
    if (*(short *)(puVar4 + 2) != 0) {
      if (*(short *)(puVar4 + 2) == sVar1) {
        _printk("<3>[FTS_TS/I][TEST]%s:match test function,type:%x\n","fts_test_func_init");
        plVar3 = fts_ftest;
        fts_ftest[0x59] = (long)puVar4;
      }
      if (*(short *)(puVar4 + 4) != 0) {
        if (*(short *)(puVar4 + 4) == sVar1) {
          _printk("<3>[FTS_TS/I][TEST]%s:match test function,type:%x\n","fts_test_func_init");
          plVar3 = fts_ftest;
          fts_ftest[0x59] = (long)puVar4;
        }
        if ((*(short *)(puVar4 + 6) != 0) && (*(short *)(puVar4 + 6) == sVar1)) {
          _printk("<3>[FTS_TS/I][TEST]%s:match test function,type:%x\n","fts_test_func_init",sVar1);
          plVar3 = fts_ftest;
          fts_ftest[0x59] = (long)puVar4;
        }
      }
    }
  }
  if (plVar3[0x59] == 0) {
    iVar2 = -0x3d;
    puVar4 = "<3>[FTS_TS/E][TEST]%s:no test function match, can't test\n";
    goto LAB_00123b88;
  }
  *plVar3 = param_1;
  _printk("[FTS_TS][TEST]%s: Enter\n","fts_tp_data_dump_proc_init");
  lVar6 = 0x38;
  if (android_kmalloc_64_create != '\0') {
    lVar6 = 0x30;
  }
  lct_tp_data_dump_p = kmem_cache_alloc_trace(*(undefined8 *)(&kmalloc_caches + lVar6),0xdc0,0x20);
  if ((lct_tp_data_dump_p == 0) || (0xfffffffffffff000 < lct_tp_data_dump_p)) {
    _printk("<3>[FTS_TS/E][TEST]%s:malloc lct_tp_data_dump memory fail\n","fts_tp_data_dump_proc_init");
    lct_tp_data_dump_p = 0;
  }
  else {
    uVar5 = proc_create("tp_data_dump",0x124,0,&tp_data_dump_proc_fops);
    *(ulong *)(lct_tp_data_dump_p + 0x18) = uVar5;
    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
      _printk("<6>[FTS_TS/I]%s:create /proc/%s\n","fts_tp_data_dump_proc_init","tp_data_dump");
      goto LAB_00123cfc;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:ERROR: create /proc/%s failed.\n","fts_tp_data_dump_proc_init","tp_data_dump");
    uVar5 = lct_tp_data_dump_p;
    *(undefined8 *)(lct_tp_data_dump_p + 0x18) = 0;
    if (uVar5 != 0) {
      kfree();
    }
  }
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","fts_tp_data_dump_proc_init",0x9d9);
LAB_00123cfc:
  iVar2 = sysfs_create_group(*(undefined8 *)(param_1 + 0x10),&fts_test_attribute_group);
  if (iVar2 == 0) {
    _printk("[FTS_TS][TEST]%s:sysfs(test) create successfully\n","fts_test_init");
  }
  else {
    _printk("<3>[FTS_TS/E][TEST]%s:sysfs(test) create fail\n","fts_test_init");
    sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),&fts_test_attribute_group);
  }
  lVar6 = vmalloc(0x64000);
  fts_ftest[8] = lVar6;
  if (lVar6 == 0) {
    _printk("<3>[FTS_TS/E][TEST]%s:csv_buffer malloc fail\n\n","fts_test_init");
  }
  lVar6 = vmalloc(0x64000);
  plVar3 = fts_ftest;
  fts_ftest[10] = lVar6;
  if (lVar6 == 0) {
    _printk("<3>[FTS_TS/E][TEST]%s:txt_buffer malloc fail\n\n","fts_test_init");
    plVar3 = fts_ftest;
  }
  memset((void *)plVar3[8],0,0x64000);
  memset((void *)plVar3[10],0,0x64000);
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","fts_test_init",0xacb);
  return iVar2;
}



/* ---- fts_test_exit @ 00123e08 ---- */

undefined8 fts_test_exit(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("[FTS_TS][TEST]%s: Enter\n","fts_test_exit");
  if (tp_test_proc != 0) {
    remove_proc_entry("fts_tp_csv_test",0);
    tp_test_proc = 0;
    _printk("<6>[FTS_TS/I]%s:remove /proc/%s\n\n","fts_test_exit","fts_tp_csv_test");
  }
  if (tp_result_proc != 0) {
    remove_proc_entry("fts_tp_txt_result",0);
    tp_result_proc = 0;
    _printk("<6>[FTS_TS/I]%s:remove /proc/%s\n\n","fts_test_exit","fts_tp_txt_result");
  }
  if ((lct_tp_data_dump_p != 0) && (lct_tp_data_dump_p < 0xfffffffffffff001)) {
    if ((*(ulong *)(lct_tp_data_dump_p + 0x18) != 0) &&
       (*(ulong *)(lct_tp_data_dump_p + 0x18) < 0xfffffffffffff001)) {
      remove_proc_entry("tp_data_dump",0);
      _printk("<6>[FTS_TS/I]%s:remove /proc/%s\n","fts_tp_data_dump_proc_exit","tp_data_dump");
    }
    kfree(lct_tp_data_dump_p);
  }
  sysfs_remove_group(*(undefined8 *)(param_1 + 0x10),&fts_test_attribute_group);
  vfree(*(undefined8 *)(fts_ftest + 0x40));
  vfree(*(undefined8 *)(fts_ftest + 0x50));
  if (fts_ftest != 0) {
    kfree();
    fts_ftest = 0;
  }
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","fts_test_exit",0xae6);
  return 0;
}



/* ---- fts_test_malloc_free_thr @ 00123f78 ---- */

undefined8 fts_test_malloc_free_thr(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = fts_ftest;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x2c8) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "tdata/func is NULL\n",0x14);
      *(int *)(lVar3 + 0xae0) = *(int *)(lVar3 + 0xae0) + 0x13;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:tdata/func is NULL\n\n","fts_test_malloc_free_thr");
LAB_001248a4:
    uVar4 = 0xffffffea;
  }
  else {
    if ((param_2 & 1) == 0) {
      if (*(long *)(param_1 + 0xa0) != 0) {
        kfree();
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      if (*(long *)(param_1 + 0xa8) != 0) {
        kfree();
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
    }
    else {
      if (*(long *)(param_1 + 0xa0) == 0) {
        lVar3 = __kmalloc((long)*(int *)(param_1 + 0x14) << 2,0xdc0);
        *(long *)(param_1 + 0xa0) = lVar3;
        if (lVar3 == 0) {
          return 0xfffffff4;
        }
      }
      if (*(long *)(param_1 + 0xa8) == 0) {
        lVar3 = __kmalloc((long)*(int *)(param_1 + 0x28) << 2,0xdc0);
        *(long *)(param_1 + 0xa8) = lVar3;
        if (lVar3 == 0) {
          return 0xfffffff4;
        }
      }
    }
    iVar2 = *(int *)(*(long *)(param_1 + 0x2c8) + 8);
    if (iVar2 == 3) {
      if ((param_2 & 1) == 0) {
        if (*(long *)(param_1 + 0x128) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x128) = 0;
        }
        if (*(long *)(param_1 + 0x130) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x130) = 0;
        }
        if (*(long *)(param_1 + 0x138) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
        if (*(long *)(param_1 + 0x140) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x140) = 0;
        }
        if (*(long *)(param_1 + 0x148) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        if (*(long *)(param_1 + 0x150) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x150) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x14) << 2;
        if (*(long *)(param_1 + 0x128) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x128) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x130) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x130) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x138) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x138) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x140) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x140) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x148) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x148) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x150) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x150) = lVar3;
joined_r0x001245b0:
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
      }
    }
    else if (iVar2 == 2) {
      if ((param_2 & 1) == 0) {
        if (*(long *)(param_1 + 0x1b0) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1b0) = 0;
        }
        if (*(long *)(param_1 + 0x1b8) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1b8) = 0;
        }
        if (*(char *)(*(long *)(param_1 + 0x2c8) + 0x14) != '\0') {
          if (*(long *)(param_1 + 0x1c0) != 0) {
            kfree();
            *(undefined8 *)(param_1 + 0x1c0) = 0;
          }
          if (*(long *)(param_1 + 0x1c8) != 0) {
            kfree();
            *(undefined8 *)(param_1 + 0x1c8) = 0;
          }
        }
        if (*(long *)(param_1 + 0x1d0) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1d0) = 0;
        }
        if (*(long *)(param_1 + 0x1d8) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1d8) = 0;
        }
        if (*(long *)(param_1 + 0x1e0) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1e0) = 0;
        }
        if (*(long *)(param_1 + 0x1e8) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1e8) = 0;
        }
        if (*(long *)(param_1 + 0x2b0) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x2b0) = 0;
        }
        if (*(long *)(param_1 + 0x2b8) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x2b8) = 0;
        }
        if (*(long *)(param_1 + 0x1f0) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1f0) = 0;
        }
        if (*(long *)(param_1 + 0x1f8) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x1f8) = 0;
        }
        if (*(long *)(param_1 + 0x200) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x200) = 0;
        }
        if (*(long *)(param_1 + 0x208) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x208) = 0;
        }
        if (*(long *)(param_1 + 0x210) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x210) = 0;
        }
        if (*(long *)(param_1 + 0x218) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x218) = 0;
        }
        if (*(long *)(param_1 + 0x220) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x220) = 0;
        }
        if (*(long *)(param_1 + 0x228) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x228) = 0;
        }
        if (*(long *)(param_1 + 0x290) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x290) = 0;
        }
        if (*(long *)(param_1 + 0x298) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x298) = 0;
        }
        if (*(long *)(param_1 + 0x280) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x280) = 0;
        }
        if (*(long *)(param_1 + 0x288) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x288) = 0;
        }
        if (*(long *)(param_1 + 0x2a0) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x2a0) = 0;
        }
        if (*(long *)(param_1 + 0x2a8) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x2a8) = 0;
        }
        if (*(long *)(param_1 + 0x230) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x230) = 0;
        }
        if (*(long *)(param_1 + 0x238) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x238) = 0;
        }
        if (*(long *)(param_1 + 0x240) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x240) = 0;
        }
        if (*(long *)(param_1 + 0x248) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x248) = 0;
        }
        if (*(long *)(param_1 + 0x250) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x250) = 0;
        }
        if (*(long *)(param_1 + 600) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 600) = 0;
        }
        if (*(long *)(param_1 + 0x260) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x260) = 0;
        }
        if (*(long *)(param_1 + 0x268) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x268) = 0;
        }
        if (*(long *)(param_1 + 0x270) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x270) = 0;
        }
        if (*(long *)(param_1 + 0x278) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x278) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x28);
        iVar1 = *(int *)(param_1 + 0x14) << 2;
        if (*(long *)(param_1 + 0x1b0) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x1b0) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x1b8) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x1b8) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(char *)(*(long *)(param_1 + 0x2c8) + 0x14) != '\0') {
          if (*(long *)(param_1 + 0x1c0) == 0) {
            lVar3 = __kmalloc((long)iVar1,0xdc0);
            *(long *)(param_1 + 0x1c0) = lVar3;
            if (lVar3 == 0) {
              return 0xfffffff4;
            }
          }
          if (*(long *)(param_1 + 0x1c8) == 0) {
            lVar3 = __kmalloc((long)iVar1,0xdc0);
            *(long *)(param_1 + 0x1c8) = lVar3;
            if (lVar3 == 0) {
              return 0xfffffff4;
            }
          }
        }
        if (*(long *)(param_1 + 0x1d0) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x1d0) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x1d8) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x1d8) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x1e0) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x1e0) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x1e8) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x1e8) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x2b0) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x2b0) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x2b8) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x2b8) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        iVar2 = iVar2 << 2;
        if (*(long *)(param_1 + 0x1f0) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x1f0) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x1f8) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x1f8) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x200) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x200) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x208) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x208) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x210) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x210) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x218) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x218) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x220) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x220) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x228) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x228) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x290) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x290) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x298) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x298) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x280) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x280) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x288) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x288) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x2a0) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x2a0) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x2a8) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x2a8) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x230) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x230) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x238) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x238) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x240) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x240) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x248) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x248) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x250) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x250) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 600) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 600) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x260) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x260) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x268) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x268) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x270) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x270) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x278) == 0) {
          lVar3 = __kmalloc((long)iVar1,0xdc0);
          *(long *)(param_1 + 0x278) = lVar3;
          goto joined_r0x001245b0;
        }
      }
    }
    else {
      if (iVar2 != 1) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar2 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"test ic type(%d) fail\n",iVar2);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar2;
          iVar2 = *(int *)(*(long *)(param_1 + 0x2c8) + 8);
        }
        _printk("<3>[FTS_TS/E][TEST]%s:test ic type(%d) fail\n\n","fts_test_malloc_free_thr",iVar2);
        goto LAB_001248a4;
      }
      if ((param_2 & 1) == 0) {
        if (*(long *)(param_1 + 0x148) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        if (*(long *)(param_1 + 0x150) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x150) = 0;
        }
        if (*(char *)(*(long *)(param_1 + 0x2c8) + 0x14) != '\0') {
          if (*(long *)(param_1 + 0x158) != 0) {
            kfree();
            *(undefined8 *)(param_1 + 0x158) = 0;
          }
          if (*(long *)(param_1 + 0x160) != 0) {
            kfree();
            *(undefined8 *)(param_1 + 0x160) = 0;
          }
        }
        if (*(long *)(param_1 + 0x168) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x168) = 0;
        }
        if (*(long *)(param_1 + 0x170) != 0) {
          kfree();
          *(undefined8 *)(param_1 + 0x170) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x14) << 2;
        _printk("<3>[FTS_TS/I][TEST]%s:buflen:%d\n","fts_test_malloc_free_incell",iVar2);
        if (*(long *)(param_1 + 0x148) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x148) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x150) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x150) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(char *)(*(long *)(param_1 + 0x2c8) + 0x14) != '\0') {
          if (*(long *)(param_1 + 0x158) == 0) {
            lVar3 = __kmalloc((long)iVar2,0xdc0);
            *(long *)(param_1 + 0x158) = lVar3;
            if (lVar3 == 0) {
              return 0xfffffff4;
            }
          }
          if (*(long *)(param_1 + 0x160) == 0) {
            lVar3 = __kmalloc((long)iVar2,0xdc0);
            *(long *)(param_1 + 0x160) = lVar3;
            if (lVar3 == 0) {
              return 0xfffffff4;
            }
          }
        }
        if (*(long *)(param_1 + 0x168) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x168) = lVar3;
          if (lVar3 == 0) {
            return 0xfffffff4;
          }
        }
        if (*(long *)(param_1 + 0x170) == 0) {
          lVar3 = __kmalloc((long)iVar2,0xdc0);
          *(long *)(param_1 + 0x170) = lVar3;
          goto joined_r0x001245b0;
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* ---- fts_test_malloc_free_data_txt @ 00124a14 ---- */

undefined8 fts_test_malloc_free_data_txt(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = vmalloc(0x64000);
  *(long *)(param_1 + 0xad8) = lVar3;
  if (lVar3 == 0) {
    _printk("<3>[FTS_TS/E][TEST]%s:tdata->testresult malloc fail\n\n","fts_test_malloc_free_data_txt");
    uVar4 = 0xfffffff4;
  }
  else {
    *(undefined4 *)(param_1 + 0xae0) = 0;
    if (*(long *)(fts_ftest + 0xad8) != 0) {
      iVar2 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                       0x64000,"FW version:0x%02x\n",(uint)*(byte *)(param_1 + 0x30));
      plVar1 = (long *)(fts_ftest + 0xad8);
      iVar2 = *(int *)(fts_ftest + 0xae0) + iVar2;
      *(int *)(fts_ftest + 0xae0) = iVar2;
      if (*plVar1 != 0) {
        iVar2 = snprintf((char *)(*plVar1 + (long)iVar2),0x64000,
                         "tx_num:%d, rx_num:%d, key_num:%d\n",*(int *)(param_1 + 0xc),
                         *(int *)(param_1 + 0x10),*(int *)(param_1 + 0x18));
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar2;
        return 0;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* ---- get_tx_rx_num @ 00124af8 ---- */

void get_tx_rx_num(undefined1 param_1,byte *param_2,byte param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c[0] = param_1;
  iVar2 = fts_read(local_3c,1,param_2,1);
  if ((iVar2 < 0) || (param_3 < *param_2)) {
    msleep(0x32);
    local_3c[0] = param_1;
    iVar2 = fts_read(local_3c,1,param_2,1);
    if ((iVar2 < 0) || (param_3 < *param_2)) {
      msleep(0x32);
      local_3c[0] = param_1;
      iVar2 = fts_read(local_3c,1,param_2,1);
      if ((iVar2 < 0) || (param_3 < *param_2)) {
        msleep(0x32);
        _printk("<3>[FTS_TS/E][TEST]%s:get channel num fail\n","get_tx_rx_num");
        uVar3 = 0xfffffffb;
        goto LAB_00124bb8;
      }
    }
  }
  uVar3 = 0;
LAB_00124bb8:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- fts_test_proc_open.a9c62907dad159691dbfc888f4846a3d @ 00124c10 ---- */

void fts_test_proc_open_a9c62907dad159691dbfc888f4846a3d(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  single_open(param_2,fts_test_proc_show_a9c62907dad159691dbfc888f4846a3d_cfi_jt,0);
  return;
}



/* ---- tp_test_proc_write.a9c62907dad159691dbfc888f4846a3d @ 00124c44 ---- */

undefined8
tp_test_proc_write_a9c62907dad159691dbfc888f4846a3d
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","tp_test_proc_write",0xa00);
  return param_3;
}



/* ---- fts_test_proc_show.a9c62907dad159691dbfc888f4846a3d @ 00124c8c ---- */

undefined8 fts_test_proc_show_a9c62907dad159691dbfc888f4846a3d(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  seq_printf(param_1,&DAT_00106b2d,*(undefined8 *)(fts_ftest + 0x40));
  return 0;
}



/* ---- fts_result_proc_open.a9c62907dad159691dbfc888f4846a3d @ 00124cc8 ---- */

void fts_result_proc_open_a9c62907dad159691dbfc888f4846a3d(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  single_open(param_2,fts_result_proc_show_a9c62907dad159691dbfc888f4846a3d_cfi_jt,0);
  return;
}



/* ---- tp_result_proc_write.a9c62907dad159691dbfc888f4846a3d @ 00124cfc ---- */

undefined8
tp_result_proc_write_a9c62907dad159691dbfc888f4846a3d
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","tp_result_proc_write",0xa1f);
  return param_3;
}



/* ---- fts_result_proc_show.a9c62907dad159691dbfc888f4846a3d @ 00124d44 ---- */

undefined8 fts_result_proc_show_a9c62907dad159691dbfc888f4846a3d(undefined8 param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  seq_printf(param_1,&DAT_00106b2d,*(undefined8 *)(fts_ftest + 0x50));
  return 0;
}



/* ---- tp_data_dump_proc_open.a9c62907dad159691dbfc888f4846a3d @ 00124d80 ---- */

void tp_data_dump_proc_open_a9c62907dad159691dbfc888f4846a3d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_48 [4];
  byte local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  *in_x18 = unaff_x30;
  uVar4 = fts_data;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_44[0] = 0;
  local_48[0] = 0;
  _printk("[FTS_TS][TEST]%s: Enter\n","tp_data_dump_proc_open");
  if ((*(long *)(lct_tp_data_dump_p + 8) != 0) || (*(long *)(lct_tp_data_dump_p + 0x10) != 0)) {
    _printk("<3>[FTS_TS/E][TEST]%s:rawdata and diffdata not free!\n","tp_data_dump_proc_open");
    uVar4 = 0xfffffffb;
    goto LAB_00124ef8;
  }
  fts_esdcheck_switch(uVar4,0);
  iVar2 = fts_write_reg(0xee,1);
  if (iVar2 < 0) {
    puVar3 = "<3>[FTS_TS/E][TEST]%s:disable auto clb fail, ret=%d\n";
LAB_00124e44:
    _printk(puVar3,"tp_data_dump_proc_open",iVar2);
  }
  else {
    iVar2 = enter_factory_mode();
    if (iVar2 < 0) {
      puVar3 = "<3>[FTS_TS/E][TEST]%s:enter factory mode fail, ret=%d\n";
      goto LAB_00124e44;
    }
    local_40[0] = 2;
    iVar2 = fts_read(local_40,1,local_44,1);
    if (iVar2 < 0) {
      puVar3 = "<3>[FTS_TS/E][TEST]%s:get tx_num fail, ret=%d\n";
LAB_00124eb0:
      _printk(puVar3,"tp_data_dump_proc_open",iVar2);
    }
    else {
      local_3c[0] = 3;
      iVar2 = fts_read(local_3c,1,local_48,1);
      pbVar6 = lct_tp_data_dump_p;
      if (iVar2 < 0) {
        puVar3 = "<3>[FTS_TS/E][TEST]%s:get rx_num fail, ret=%d\n";
        goto LAB_00124eb0;
      }
      *lct_tp_data_dump_p = local_44[0];
      pbVar6[1] = local_48[0];
      uVar5 = __kmalloc((ulong)local_44[0] * (ulong)local_48[0] * 4,0xdc0);
      *(ulong *)(lct_tp_data_dump_p + 8) = uVar5;
      if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
        _printk("<3>[FTS_TS/E][TEST]%s:malloc rawdata memory fail\n","tp_data_dump_proc_open");
        pbVar6 = lct_tp_data_dump_p;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
      }
      else {
        uVar5 = __kmalloc((ulong)local_48[0] * (ulong)local_44[0] * 4,0xdc0);
        pbVar6 = lct_tp_data_dump_p;
        *(ulong *)(lct_tp_data_dump_p + 0x10) = uVar5;
        if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
          _printk("<3>[FTS_TS/E][TEST]%s:malloc diffdata memory fail\n","tp_data_dump_proc_open");
          pbVar6 = lct_tp_data_dump_p;
          pbVar6[0x10] = 0;
          pbVar6[0x11] = 0;
          pbVar6[0x12] = 0;
          pbVar6[0x13] = 0;
          pbVar6[0x14] = 0;
          pbVar6[0x15] = 0;
          pbVar6[0x16] = 0;
          pbVar6[0x17] = 0;
        }
        else {
          iVar2 = lct_tp_get_rawdata(*(undefined8 *)(pbVar6 + 8),
                                     (uint)local_44[0] * (uint)local_48[0] * 2);
          if (-1 < iVar2) {
            iVar2 = lct_tp_get_diffdata(*(undefined8 *)(lct_tp_data_dump_p + 0x10),
                                        (uint)local_44[0] * (uint)local_48[0] * 2,iVar2);
            if (-1 < iVar2) goto LAB_00124ebc;
          }
          _printk("<3>[FTS_TS/E][TEST]%s:lct_tp_get_rawdata() failed, ret = %d\n","tp_data_dump_proc_open",iVar2);
          pbVar6 = lct_tp_data_dump_p;
          if ((*(ulong *)(lct_tp_data_dump_p + 0x10) != 0) &&
             (*(ulong *)(lct_tp_data_dump_p + 0x10) < 0xfffffffffffff001)) {
            kfree();
            pbVar6 = lct_tp_data_dump_p;
          }
        }
        if ((*(ulong *)(pbVar6 + 8) != 0) && (*(ulong *)(pbVar6 + 8) < 0xfffffffffffff001)) {
          kfree();
        }
      }
    }
LAB_00124ebc:
    enter_work_mode();
  }
  fts_esdcheck_switch(uVar4,1);
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","tp_data_dump_proc_open",0x9b1);
  uVar4 = single_open(param_2,tp_data_dump_proc_show_a9c62907dad159691dbfc888f4846a3d_cfi_jt,0);
LAB_00124ef8:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- lct_tp_get_rawdata @ 00125060 ---- */

int lct_tp_get_rawdata(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = fts_ftest;
  _printk("[FTS_TS][TEST]%s: Enter\n","lct_tp_get_rawdata");
  iVar2 = start_scan();
  if (iVar2 < 0) {
    puVar3 = "<3>[FTS_TS/E][TEST]%s:Failed to Scan ...\n";
  }
  else {
    iVar2 = read_rawdata(uVar1,1,0xad,0x36,param_2,param_1);
    if (-1 < iVar2) {
      return 0;
    }
    puVar3 = "<3>[FTS_TS/E][TEST]%s:read rawdata failed\n";
  }
  _printk(puVar3,"lct_tp_get_rawdata");
  return iVar2;
}



/* ---- lct_tp_get_diffdata @ 00125110 ---- */

int lct_tp_get_diffdata(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined2 local_40 [2];
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
  *in_x18 = unaff_x30;
  uVar2 = fts_ftest;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_48[0] = 0;
  _printk("[FTS_TS][TEST]%s: Enter\n","lct_tp_get_diffdata");
  local_44[0] = 6;
  iVar3 = fts_read(local_44,1,local_48,1);
  if (iVar3 < 0) {
    puVar4 = "<3>[FTS_TS/E][TEST]%s:read reg06 fail\n\n";
LAB_00125238:
    _printk(puVar4,"lct_tp_get_diffdata");
  }
  else {
    local_40[0] = 0x106;
    iVar3 = fts_write(local_40,2);
    if (iVar3 < 0) {
      puVar4 = "<3>[FTS_TS/E][TEST]%s:write 1 to reg06 fail\n\n";
LAB_00125200:
      _printk(puVar4,"lct_tp_get_diffdata");
    }
    else {
      iVar3 = start_scan();
      if (iVar3 < 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:Failed to Scan ...\n","lct_tp_get_diffdata");
        goto LAB_00125264;
      }
      iVar3 = read_rawdata(uVar2,1,0xad,0x36,param_2,param_1);
      if (iVar3 < 0) {
        puVar4 = "<3>[FTS_TS/E][TEST]%s:read diffdata fail\n";
        goto LAB_00125200;
      }
    }
    local_3c = 6;
    local_3b = local_48[0];
    iVar3 = fts_write(&local_3c,2);
    if (iVar3 < 0) {
      puVar4 = "<3>[FTS_TS/E][TEST]%s:restore reg06 fail\n";
      goto LAB_00125238;
    }
    iVar3 = 0;
  }
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","lct_tp_get_diffdata",0x8ea);
LAB_00125264:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ---- tp_data_dump_proc_show.a9c62907dad159691dbfc888f4846a3d @ 0012529c ---- */

undefined8 tp_data_dump_proc_show_a9c62907dad159691dbfc888f4846a3d(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *in_x18;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  puVar6 = *(undefined4 **)(lct_tp_data_dump_p + 8);
  if (((puVar6 == (undefined4 *)0x0) ||
      (puVar7 = *(undefined4 **)(lct_tp_data_dump_p + 0x10),
      (undefined4 *)0xfffffffffffff000 < puVar6 || puVar7 == (undefined4 *)0x0)) ||
     ((undefined4 *)0xfffffffffffff000 < puVar7)) {
    _printk("<3>[FTS_TS/E][TEST]%s:Data Invalid!\n","tp_data_dump_proc_show");
    uVar4 = 0xffffffff;
  }
  else {
    bVar1 = *lct_tp_data_dump_p;
    bVar2 = lct_tp_data_dump_p[1];
    uVar5 = (ulong)bVar2;
    seq_printf(param_1,"\nRAW DATA\n");
    if (bVar1 == 0) {
      seq_printf(param_1,"\nDIFF DATA\n");
    }
    else {
      uVar10 = 0;
      do {
        if (bVar2 != 0) {
          uVar8 = uVar5;
          puVar9 = puVar6;
          do {
            seq_printf(param_1,"%6d",*puVar9);
            uVar8 = uVar8 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar8 != 0);
        }
        seq_printf(param_1,&DAT_0010c5a9);
        uVar10 = uVar10 + 1;
        puVar6 = puVar6 + uVar5;
      } while (uVar10 != bVar1);
      seq_printf(param_1,"\nDIFF DATA\n");
      uVar10 = 0;
      do {
        if (bVar2 != 0) {
          puVar6 = puVar7;
          uVar8 = uVar5;
          do {
            seq_printf(param_1,"%6d",*puVar6);
            uVar8 = uVar8 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar8 != 0);
        }
        seq_printf(param_1,&DAT_0010c5a9);
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + uVar5;
      } while (uVar10 != bVar1);
    }
    if (*(ulong *)(param_1 + 0x18) < *(ulong *)(param_1 + 8)) {
      if ((*(ulong *)(lct_tp_data_dump_p + 8) != 0) &&
         (*(ulong *)(lct_tp_data_dump_p + 8) < 0xfffffffffffff001)) {
        kfree();
      }
      if ((*(ulong *)(lct_tp_data_dump_p + 0x10) != 0) &&
         (*(ulong *)(lct_tp_data_dump_p + 0x10) < 0xfffffffffffff001)) {
        kfree();
      }
      uVar4 = 0;
      pbVar3 = lct_tp_data_dump_p;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      pbVar3[0x14] = 0;
      pbVar3[0x15] = 0;
      pbVar3[0x16] = 0;
      pbVar3[0x17] = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ---- fts_test_show.a9c62907dad159691dbfc888f4846a3d @ 00125474 ---- */

long fts_test_show_a9c62907dad159691dbfc888f4846a3d(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x18) + 0x208;
  mutex_lock(lVar2);
  iVar3 = snprintf(param_3,0x1000,"FTS_INI_FILE_PATH:%s\n","/odm/firmware/");
  iVar4 = snprintf(param_3 + iVar3,0x1000,"FTS_CSV_FILE_NAME:%s\n","FTS_testdata.csv");
  lVar1 = (long)iVar3 + (long)iVar4;
  iVar3 = snprintf(param_3 + lVar1,0x1000,"FTS_TXT_FILE_NAME:%s\n","FTS_testresult.txt");
  mutex_unlock(lVar2);
  return lVar1 + iVar3;
}



/* ---- fts_test_store.a9c62907dad159691dbfc888f4846a3d @ 00125528 ---- */

long fts_test_store_a9c62907dad159691dbfc888f4846a3d
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 *in_x18;
  long lVar2;
  long lVar3;
  undefined8 unaff_x30;
  char cStack_b9;
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
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  if (*(char *)(lVar2 + 0x321) == '\0') {
    lVar3 = *(long *)(lVar2 + 0x18);
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
    snprintf((char *)&local_b8,0x80,"%s",param_3);
    if (0x7f < param_4 - 1U) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x125658);
      (*pcVar1)();
    }
    (&cStack_b9)[param_4] = '\0';
    _printk("[FTS_TS][TEST]%s:fwname:%s.\n","fts_test_store",&local_b8);
    lVar3 = lVar3 + 0x208;
    mutex_lock(lVar3);
    fts_irq_disable();
    fts_esdcheck_switch(lVar2,0);
    fts_test_entry(&local_b8);
    fts_esdcheck_switch(lVar2,1);
    fts_irq_enable();
    mutex_unlock(lVar3);
  }
  else {
    _printk("<6>[FTS_TS/I]%s:In suspend, no test, return now\n","fts_test_store");
    param_4 = -0x16;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- get_keyword_value @ 0012565c ---- */

void get_keyword_value(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_248 [512];
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar7 = sp_el0;
  local_48 = *(long *)(lVar7 + 0x5e0);
  memset(local_248,0,0x200);
  iVar4 = ini_get_string_value(param_1,param_2,local_248);
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      bVar2 = local_248[lVar7];
      if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100003700U) == 0) {
        uVar5 = (uint)bVar2;
        pbVar6 = local_248 + lVar7 + 1;
        if ((uVar5 == 0x2b) || (uVar5 == 0x2d)) {
          if (lVar7 - 0x1ffU < 0xfffffffffffffe00) break;
          uVar9 = lVar7 + 2;
          bVar2 = *pbVar6;
          pbVar6 = local_248 + lVar7 + 2;
          uVar8 = (uint)bVar2;
        }
        else {
          uVar9 = lVar7 + 1;
          uVar8 = uVar5;
        }
        uVar8 = uVar8 - 0x30;
        if (9 < uVar8) {
          iVar4 = 0;
          goto LAB_0012578c;
        }
        iVar4 = 0;
        lVar7 = 0;
        if (uVar9 < 0x201) {
          lVar7 = 0x200 - uVar9;
        }
        goto LAB_0012576c;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x200);
LAB_001256f4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1256f8);
    (*pcVar3)();
  }
LAB_0012579c:
  lVar7 = sp_el0;
  if (*(long *)(lVar7 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while( true ) {
    lVar7 = lVar7 + -1;
    iVar4 = iVar4 * 10 + uVar8;
    uVar8 = *pbVar6 - 0x30;
    pbVar6 = pbVar6 + 1;
    if (9 < uVar8) break;
LAB_0012576c:
    if (lVar7 == 0) goto LAB_001256f4;
  }
LAB_0012578c:
  iVar1 = -iVar4;
  if (uVar5 != 0x2d) {
    iVar1 = iVar4;
  }
  *param_3 = iVar1;
  goto LAB_0012579c;
}



/* ---- ini_get_string_value @ 001257d4 ---- */

ulong ini_get_string_value(byte *param_1,byte *param_2,void *param_3)

{
  char *__s;
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  size_t sVar6;
  size_t sVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *in_x18;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar4 = fts_ftest;
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == (void *)0x0)) {
    _printk("<3>[FTS_TS/E][TEST]%s:section_name/key_name/rval is null\n","ini_get_string_value");
    sVar6 = 0xffffffea;
  }
  else {
    iVar1 = *(int *)(*fts_ftest + 0x2f4);
    if (9 < iVar1) {
      _printk("[FTS_TS][TEST]%s:section name:%s, key name:%s\n","ini_get_key",param_1,param_2);
      _printk("[FTS_TS][TEST]%s:section num:%d\n","ini_get_key",(int)plVar4[0x15f]);
    }
    if (0 < (int)plVar4[0x15f]) {
      lVar14 = 0;
      do {
        if (lVar14 == 0x15) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x125a4c);
          (*pcVar5)();
        }
        sVar6 = strlen((char *)param_1);
        pbVar13 = (byte *)(plVar4 + lVar14 * 8 + 0x160);
        sVar7 = strlen((char *)pbVar13);
        if (sVar7 == (long)(int)sVar6) {
          if ((int)sVar6 != 0) {
            pbVar8 = param_1;
            pbVar10 = pbVar13;
            do {
              if (((*pbVar10 == 0) || (*pbVar8 == 0)) || (((*pbVar8 ^ *pbVar10) & 0xdf) != 0))
              goto LAB_00125844;
              pbVar8 = pbVar8 + 1;
              pbVar10 = pbVar10 + 1;
              uVar2 = (int)sVar6 - 1;
              sVar6 = (size_t)uVar2;
            } while (uVar2 != 0);
          }
          if (9 < iVar1) {
            _printk("[FTS_TS][TEST]%s:section name:%s keyword num:%d\n","ini_get_key",pbVar13,
                    *(undefined4 *)((long)plVar4 + lVar14 * 0x40 + 0xb34));
          }
          uVar2 = *(uint *)((long)plVar4 + lVar14 * 0x40 + 0xb34);
          if (0 < (int)uVar2) {
            lVar12 = plVar4[lVar14 * 8 + 0x167];
            sVar6 = strlen((char *)param_2);
            uVar11 = 0;
            do {
              pbVar13 = (byte *)(lVar12 + uVar11 * 0x232);
              sVar7 = strlen((char *)pbVar13);
              if ((long)(int)sVar6 == sVar7) {
                if ((int)sVar6 == 0) {
LAB_0012596c:
                  __s = (char *)(lVar12 + uVar11 * 0x232 + 0x32);
                  sVar6 = strlen(__s);
                  memcpy(param_3,__s,(long)(int)sVar6);
                  if (2 < iVar1) {
                    _printk("[FTS_TS][TEST]%s:section:%s,%s=%s\n","ini_get_key",param_1,param_2,
                            param_3);
                  }
                  goto LAB_001259c8;
                }
                uVar9 = sVar6 & 0xffffffff;
                pbVar8 = param_2;
                while (((*pbVar13 != 0 && (*pbVar8 != 0)) && (((*pbVar8 ^ *pbVar13) & 0xdf) == 0)))
                {
                  pbVar8 = pbVar8 + 1;
                  pbVar13 = pbVar13 + 1;
                  uVar3 = (int)uVar9 - 1;
                  uVar9 = (ulong)uVar3;
                  if (uVar3 == 0) goto LAB_0012596c;
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar2);
          }
        }
LAB_00125844:
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)plVar4[0x15f]);
    }
    sVar6 = 0xffffffc3;
  }
LAB_001259c8:
  return sVar6 & 0xffffffff;
}



/* ---- fts_test_get_testparam_from_ini @ 00125a4c ---- */

int fts_test_get_testparam_from_ini(undefined8 param_1)

{
  long *plVar1;
  long *__dest;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  size_t sVar10;
  char *pcVar11;
  undefined *puVar12;
  size_t **ppsVar13;
  size_t **ppsVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *in_x18;
  uint uVar18;
  int iVar19;
  int iVar20;
  size_t __n;
  long lVar21;
  long lVar22;
  undefined8 unaff_x30;
  size_t *local_2a8 [71];
  long local_70;
  
  *in_x18 = unaff_x30;
  plVar5 = fts_ftest;
  lVar15 = sp_el0;
  local_70 = *(long *)(lVar15 + 0x5e0);
  local_2a8[0] = (size_t *)0x0;
  plVar1 = fts_ftest + 0x15d;
  iVar7 = request_firmware(local_2a8,param_1,*(long *)(fts_data + 0x18) + 0x240);
  if (iVar7 == 0) {
    _printk("<3>[FTS_TS/I][TEST]%s:firmware request(%s) success\n","fts_test_get_ini_via_request_firmware",param_1);
    pvVar9 = (void *)vmalloc(*local_2a8[0] + 1);
    *plVar1 = (long)pvVar9;
    if (pvVar9 == (void *)0x0) {
      _printk("<3>[FTS_TS/E][TEST]%s:ini->data buffer vmalloc fail\n","fts_test_get_ini_via_request_firmware");
      iVar7 = -0xc;
    }
    else {
      memcpy(pvVar9,(void *)local_2a8[0][1],*local_2a8[0]);
      iVar7 = 0;
      *(undefined1 *)(plVar5[0x15d] + *local_2a8[0]) = 10;
      *(int *)(plVar5 + 0x15e) = (int)*local_2a8[0] + 1;
    }
  }
  else {
    _printk("<3>[FTS_TS/I][TEST]%s:firmware request(%s) fail,ret=%d\n","fts_test_get_ini_via_request_firmware",param_1,iVar7);
  }
  if (local_2a8[0] != (size_t *)0x0) {
    release_firmware();
  }
  if (iVar7 < 0) {
    puVar12 = "<3>[FTS_TS/E][TEST]%s:get ini(default) fail\n";
  }
  else {
    *(undefined8 *)((long)plVar5 + 0xaf4) = 0;
    pvVar9 = (void *)vmalloc(0x89350);
    plVar5[0x200] = (long)pvVar9;
    if (pvVar9 == (void *)0x0) {
      iVar7 = -0xc;
      puVar12 = "<3>[FTS_TS/E][TEST]%s:malloc memory for ini tmp fail\n";
    }
    else {
      memset(pvVar9,0,0x89350);
      memset(local_2a8,0,0x232);
      if (((plVar1 == (long *)0x0) || (lVar15 = *plVar1, lVar15 == 0)) || (plVar5[0x200] == 0)) {
        iVar7 = -0x16;
        pcVar11 = "[FTS_TS][TEST]%s:ini/data/tmp is null\n";
LAB_00125efc:
        _printk(pcVar11,"ini_init_inidata");
        puVar12 = "<3>[FTS_TS/E][TEST]%s:ini_init_inidata fail\n";
      }
      else {
        if (0 < (int)plVar5[0x15e]) {
          iVar7 = 0;
          pvVar9 = (void *)((ulong)local_2a8 | 1);
LAB_00125bc4:
          lVar21 = 0;
          while (cVar3 = *(char *)(lVar15 + iVar7 + lVar21), cVar3 != '\r' && cVar3 != '\n') {
            lVar22 = lVar21 + 1;
            *(char *)((long)local_2a8 + lVar21) = cVar3;
            lVar21 = lVar22;
            if (lVar22 == 0x232) {
              _printk("<3>[FTS_TS/E][TEST]%s:line length(%d)>max(%d)\n","ini_get_line",0x232,0x232);
              iVar7 = -0x3d;
              pcVar11 = "\x013[FTS_TS/E][TEST]%s:ini_get_line fail\n";
              goto LAB_00125efc;
            }
          }
          *(undefined1 *)((long)local_2a8 + lVar21) = 0;
          cVar3 = *(char *)(lVar15 + iVar7 + lVar21 + 1);
          if ((cVar3 == '\n') || (cVar3 == '\r')) {
            iVar19 = (int)lVar21 + 2;
          }
          else {
            iVar19 = (int)lVar21 + 1;
          }
          lVar15 = 0;
          uVar16 = 0;
          uVar17 = 0;
          ppsVar13 = local_2a8;
          do {
            cVar3 = *(char *)((long)local_2a8 + lVar15);
            ppsVar14 = ppsVar13;
            if (cVar3 != ' ') {
              if (cVar3 == '\0') goto LAB_00125c6c;
              if ((0x233 < uVar17) || (0x233 < uVar16)) goto LAB_00126114;
              uVar17 = uVar17 + 1;
              uVar16 = uVar16 + 1;
              ppsVar14 = (size_t **)((long)ppsVar13 + 1);
              *(char *)ppsVar13 = cVar3;
            }
            lVar15 = lVar15 + 1;
            ppsVar13 = ppsVar14;
            if (lVar15 == 0x234) goto LAB_00126114;
          } while( true );
        }
LAB_00125e64:
        if (((fts_ftest == (long *)0x0) || (*fts_ftest == 0)) || (9 < *(int *)(*fts_ftest + 0x2f4)))
        {
          if (plVar5[0x200] == 0) {
            _printk("[FTS_TS][TEST]%s:ini is null\n","print_ini_data");
          }
          else {
            _printk("[FTS_TS][TEST]%s:section num:%d, keyword num total:%d\n","print_ini_data",
                    (int)plVar5[0x15f],*(undefined4 *)((long)plVar5 + 0xaf4));
            if (0 < (int)plVar5[0x15f]) {
              lVar15 = 0;
              do {
                if (lVar15 == 0x15) {
LAB_00126118:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x12611c);
                  (*pcVar6)();
                }
                _printk("[FTS_TS][TEST]%s:section name:[%s] keyword num:%d\n","print_ini_data",
                        plVar5 + lVar15 * 8 + 0x160,
                        *(undefined4 *)((long)plVar5 + lVar15 * 0x40 + 0xb34));
                if (0 < *(int *)((long)plVar5 + lVar15 * 0x40 + 0xb34)) {
                  lVar21 = 0;
                  lVar22 = 0x32;
                  do {
                    _printk("[FTS_TS][TEST]%s:%s=%s\n","print_ini_data",
                            plVar5[lVar15 * 8 + 0x167] + lVar22 + -0x32);
                    lVar21 = lVar21 + 1;
                    lVar22 = lVar22 + 0x232;
                  } while (lVar21 < *(int *)((long)plVar5 + lVar15 * 0x40 + 0xb34));
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 < (int)plVar5[0x15f]);
            }
          }
        }
        iVar7 = ini_init_test(plVar1);
        if (-1 < iVar7) {
          iVar7 = 0;
          lVar15 = plVar5[0x200];
          goto joined_r0x00125f20;
        }
        puVar12 = "<3>[FTS_TS/E][TEST]%s:ini init fail\n";
      }
    }
  }
  _printk(puVar12,"fts_test_get_testparam_from_ini");
  lVar15 = plVar5[0x200];
joined_r0x00125f20:
  if (lVar15 != 0) {
    vfree();
    plVar5[0x200] = 0;
  }
  if (*plVar1 != 0) {
    vfree();
    *plVar1 = 0;
  }
  lVar15 = sp_el0;
  if (*(long *)(lVar15 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
LAB_00125c6c:
  if ((0x233 < uVar17) || (0x233 < uVar16)) {
LAB_00126114:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x126118);
    (*pcVar6)();
  }
  *(char *)ppsVar13 = '\0';
  cVar3 = (char)local_2a8[0];
  if (((char)local_2a8[0] == '\0') || ((char)local_2a8[0] == '#')) {
LAB_00125da8:
    iVar7 = iVar19 + iVar7;
    if ((int)plVar5[0x15e] <= iVar7) goto LAB_00125e64;
    lVar15 = *plVar1;
    goto LAB_00125bc4;
  }
  if ((char)local_2a8[0] == '[') {
    sVar10 = strlen((char *)local_2a8);
    if ((int)sVar10 - 0x33U < 0xffffffd0) {
      _printk("<3>[FTS_TS/E][TEST]%s:section line length fail\n","ini_parse_section");
    }
    else {
      uVar18 = *(uint *)(plVar5 + 0x15f);
      if (uVar18 < 0x14) {
        uVar17 = (ulong)((int)sVar10 - 2);
        __dest = plVar5 + (ulong)uVar18 * 8 + 0x160;
        memcpy(__dest,pvVar9,uVar17);
        uVar2 = *(undefined4 *)((long)plVar5 + 0xaf4);
        *(undefined1 *)((long)__dest + uVar17) = 0;
        _printk("<3>[FTS_TS/I][TEST]%s:section:%s, keyword offset:%d\n","ini_parse_section",__dest,uVar2);
        lVar15 = plVar5[0x200];
        *(undefined4 *)((long)plVar5 + (ulong)uVar18 * 0x40 + 0xb34) = 0;
        iVar8 = (int)plVar5[0x15f] + 1;
        plVar5[(ulong)uVar18 * 8 + 0x167] = lVar15 + (long)*(int *)((long)plVar5 + 0xaf4) * 0x232;
        *(int *)(plVar5 + 0x15f) = iVar8;
        if (iVar8 < 0x15) goto LAB_00125da8;
        _printk("<3>[FTS_TS/E][TEST]%s:section num(%d)>max(%d), please check MAX_INI_SECTION_NUM\n","ini_parse_section",iVar8,0x14);
        iVar7 = -0xc;
        goto LAB_001260dc;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:section_num(%d) fail\n","ini_parse_section");
    }
    iVar7 = -0x16;
LAB_001260dc:
    pcVar11 = "\x013[FTS_TS/E][TEST]%s:ini_parse_section fail\n";
    goto LAB_00125efc;
  }
  sVar10 = strlen((char *)local_2a8);
  iVar8 = (int)sVar10;
  if ((iVar8 < 1) || (cVar3 == '=')) {
LAB_00125edc:
    puVar12 = "<3>[FTS_TS/E][TEST]%s:mark(=)in keyword line fail\n";
  }
  else {
    __n = 0;
    do {
      if ((sVar10 & 0xffffffff) - 1 == __n) goto LAB_00125edc;
      if (__n == 0x233) goto LAB_00126114;
      pcVar11 = (char *)((long)pvVar9 + __n);
      __n = __n + 1;
    } while (*pcVar11 != '=');
    iVar20 = (int)__n;
    if (iVar8 <= iVar20) goto LAB_00125edc;
    if ((0xffffffec < (int)plVar5[0x15f] - 0x14U) &&
       (uVar17 = (ulong)((int)plVar5[0x15f] - 1), plVar5 + uVar17 * 8 != (long *)0xfffffffffffff500)
       ) {
      iVar4 = *(int *)((long)plVar5 + 0xaf4);
      lVar15 = (long)iVar4;
      if (iVar4 < 0x3e9) {
        memcpy((void *)(plVar5[0x200] + lVar15 * 0x232),local_2a8,__n);
        if (0x30 < iVar20 - 1U) goto LAB_00126118;
        uVar18 = (iVar8 + -1) - iVar20;
        *(undefined1 *)(plVar5[0x200] + lVar15 * 0x232 + __n) = 0;
        memcpy((void *)(plVar5[0x200] + lVar15 * 0x232 + 0x32),(void *)((long)pvVar9 + __n),
               (long)(int)uVar18);
        if (0x1ff < uVar18) goto LAB_00126118;
        *(undefined1 *)(plVar5[0x200] + lVar15 * 0x232 + (long)(int)uVar18 + 0x32) = 0;
        iVar8 = *(int *)((long)plVar5 + 0xaf4);
        *(int *)((long)plVar5 + uVar17 * 0x40 + 0xb34) =
             *(int *)((long)plVar5 + uVar17 * 0x40 + 0xb34) + 1;
        *(int *)((long)plVar5 + 0xaf4) = iVar8 + 1;
        goto LAB_00125da8;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:keyword num(%d)>max(%d),please check MAX_KEYWORD_NUM\n","ini_parse_keyword",iVar4,1000);
      goto LAB_00125ef0;
    }
    puVar12 = "<3>[FTS_TS/E][TEST]%s:section is null\n";
  }
  _printk(puVar12,"ini_parse_keyword");
LAB_00125ef0:
  iVar7 = -0x3d;
  pcVar11 = "\x013[FTS_TS/E][TEST]%s:ini_parse_keyword fail\n";
  goto LAB_00125efc;
}



/* ---- ini_init_test @ 00126120 ---- */

int ini_init_test(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined8 *in_x18;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  undefined8 unaff_x30;
  ulong local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined2 local_440;
  byte abStack_272 [514];
  long local_70;
  
  *in_x18 = unaff_x30;
  plVar13 = fts_ftest;
  lVar22 = sp_el0;
  local_70 = *(long *)(lVar22 + 0x5e0);
  memset(&local_470,0,0x200);
  ini_get_string_value("Interface","IC_Type",&local_470);
  snprintf((char *)(param_1 + 0x520),0x20,"%s",&local_470);
  sVar9 = strlen((char *)&local_470);
  lVar22 = 0;
  do {
    iVar7 = strncmp((char *)&local_470,ic_types + lVar22,(long)(int)sVar9);
    if (iVar7 == 0) {
      uVar21 = *(uint *)((long)&DAT_00102b98 + lVar22);
      goto LAB_00126200;
    }
    lVar22 = lVar22 + 0x24;
  } while (lVar22 != 0xf54);
  _printk("<3>[FTS_TS/E][TEST]%s:no IC type match\n","ini_get_ic_code");
  uVar21 = 0;
LAB_00126200:
  *(uint *)(param_1 + 0x540) = uVar21;
  _printk("<3>[FTS_TS/I][TEST]%s:ic name:%s, ic code:%x\n","ini_init_interface",(char *)(param_1 + 0x520),uVar21);
  if (*(int *)(plVar13[0x59] + 8) == 2) {
    memset(abStack_272 + 2,0,0x200);
    iVar7 = ini_get_string_value("Interface","Normalize_Type",abStack_272 + 2);
    if (0 < iVar7) {
      uVar20 = 2;
      do {
        bVar4 = abStack_272[uVar20];
        if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100003700U) == 0) {
          uVar11 = (uint)bVar4;
          pbVar15 = abStack_272 + uVar20 + 1;
          if ((uVar11 == 0x2b) || (uVar11 == 0x2d)) {
            if (uVar20 - 0x201 < 0xfffffffffffffe00) break;
            bVar4 = *pbVar15;
            pbVar15 = abStack_272 + uVar20 + 2;
            uVar21 = (uint)bVar4;
          }
          else {
            uVar20 = uVar20 - 1;
            uVar21 = uVar11;
          }
          uVar21 = uVar21 - 0x30;
          if (9 < uVar21) {
            uVar18 = 0;
            goto LAB_00127954;
          }
          uVar18 = 0;
          lVar22 = 0;
          if (uVar20 < 0x201) {
            lVar22 = 0x200 - uVar20;
          }
          goto LAB_00127934;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x202);
LAB_001264fc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x126500);
      (*pcVar6)();
    }
    goto LAB_0012795c;
  }
  goto LAB_00126230;
  while( true ) {
    lVar22 = lVar22 + -1;
    uVar18 = uVar18 * 10 + uVar21;
    uVar21 = *pbVar15 - 0x30;
    pbVar15 = pbVar15 + 1;
    if (9 < uVar21) break;
LAB_00127934:
    if (lVar22 == 0) goto LAB_001264fc;
  }
LAB_00127954:
  uVar21 = -uVar18;
  if (uVar11 != 0x2d) {
    uVar21 = uVar18;
  }
LAB_0012795c:
  *(char *)((long)plVar13 + 0x36) = (char)uVar21;
  _printk("[FTS_TS][TEST]%s:normalize:%d\n","ini_init_interface",uVar21 & 0xff);
LAB_00126230:
  plVar5 = fts_ftest;
  local_440 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_470 = 0;
  uStack_468 = 0;
  if (((fts_ftest == (long *)0x0) || (lVar22 = fts_ftest[0x14], lVar22 == 0)) ||
     (fts_ftest[0x15] == 0)) {
    _printk("<3>[FTS_TS/E][TEST]%s:tdata/node_valid/node_valid_sc is null\n","init_node_valid");
    _printk("<3>[FTS_TS/E][TEST]%s:init node valid fail\n","ini_init_test");
LAB_00126488:
    iVar8 = -0x16;
    goto LAB_001272b0;
  }
  iVar7 = (int)fts_ftest[2];
  uVar21 = *(uint *)((long)fts_ftest + 0x14);
  uVar20 = (ulong)uVar21;
  if ((int)uVar21 < 0) {
    _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
LAB_001262d0:
    iVar8 = *(int *)(plVar5[0x59] + 8);
    if (iVar8 - 1U < 2) {
      if (0 < (int)uVar21) {
        uVar24 = 0;
        do {
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = (int)uVar24 / iVar7;
          }
          snprintf((char *)&local_470,0x32,"InvalidNode[%d][%d]",iVar8 + 1,
                   ((int)uVar24 - iVar8 * iVar7) + 1);
          lVar22 = plVar5[0x14];
          memset(abStack_272 + 2,0,0x200);
          iVar8 = ini_get_string_value("INVALID_NODE",&local_470,abStack_272 + 2);
          if (0 < iVar8) {
            uVar14 = 2;
            while (bVar4 = abStack_272[uVar14],
                  bVar4 < 0x21 && (1L << ((ulong)bVar4 & 0x3f) & 0x100003700U) != 0) {
              uVar14 = uVar14 + 1;
              if (uVar14 == 0x202) goto LAB_001264fc;
            }
            pbVar15 = abStack_272 + uVar14 + 1;
            if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) {
              if (uVar14 - 0x201 < 0xfffffffffffffe00) goto LAB_001264fc;
              bVar3 = *pbVar15;
              pbVar15 = abStack_272 + uVar14 + 2;
              uVar21 = (uint)bVar3;
            }
            else {
              uVar14 = uVar14 - 1;
              uVar21 = (uint)bVar4;
            }
            uVar21 = uVar21 - 0x30;
            if (uVar21 < 10) {
              iVar8 = 0;
              lVar16 = 0;
              if (uVar14 < 0x201) {
                lVar16 = 0x200 - uVar14;
              }
              do {
                if (lVar16 == 0) goto LAB_001264fc;
                lVar16 = lVar16 + -1;
                iVar8 = iVar8 * 10 + uVar21;
                uVar21 = *pbVar15 - 0x30;
                pbVar15 = pbVar15 + 1;
              } while (uVar21 < 10);
            }
            else {
              iVar8 = 0;
            }
            iVar23 = -iVar8;
            if (bVar4 != 0x2d) {
              iVar23 = iVar8;
            }
            *(int *)(lVar22 + uVar24 * 4) = iVar23;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar20);
        iVar8 = *(int *)(plVar5[0x59] + 8);
      }
LAB_00126430:
      if (iVar8 == 2) {
        iVar7 = *(int *)((long)plVar5 + 0x24);
        uVar21 = *(uint *)(plVar5 + 5);
        uVar20 = (ulong)uVar21;
        lVar22 = plVar5[0x15];
        if (lVar22 == 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
          if ((int)uVar21 < 1) goto LAB_0012671c;
LAB_00126548:
          uVar24 = 0;
          do {
            uVar14 = uVar24 + 1;
            iVar8 = 0;
            if ((long)iVar7 <= (long)uVar24) {
              iVar8 = iVar7;
            }
            iVar23 = 1;
            if ((long)iVar7 <= (long)uVar24) {
              iVar23 = 2;
            }
            snprintf((char *)&local_470,0x32,"InvalidNodeS[%d][%d]",iVar23,(int)uVar14 - iVar8);
            lVar22 = plVar5[0x15];
            memset(abStack_272 + 2,0,0x200);
            iVar8 = ini_get_string_value("INVALID_NODES",&local_470,abStack_272 + 2);
            if (0 < iVar8) {
              uVar17 = 2;
              while (bVar4 = abStack_272[uVar17],
                    bVar4 < 0x21 && (1L << ((ulong)bVar4 & 0x3f) & 0x100003700U) != 0) {
                uVar17 = uVar17 + 1;
                if (uVar17 == 0x202) goto LAB_001264fc;
              }
              pbVar15 = abStack_272 + uVar17 + 1;
              if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) {
                if (uVar17 - 0x201 < 0xfffffffffffffe00) goto LAB_001264fc;
                bVar3 = *pbVar15;
                pbVar15 = abStack_272 + uVar17 + 2;
                uVar21 = (uint)bVar3;
              }
              else {
                uVar17 = uVar17 - 1;
                uVar21 = (uint)bVar4;
              }
              uVar21 = uVar21 - 0x30;
              if (uVar21 < 10) {
                iVar8 = 0;
                lVar16 = 0;
                if (uVar17 < 0x201) {
                  lVar16 = 0x200 - uVar17;
                }
                do {
                  if (lVar16 == 0) goto LAB_001264fc;
                  lVar16 = lVar16 + -1;
                  iVar8 = iVar8 * 10 + uVar21;
                  uVar21 = *pbVar15 - 0x30;
                  pbVar15 = pbVar15 + 1;
                } while (uVar21 < 10);
              }
              else {
                iVar8 = 0;
              }
              iVar23 = -iVar8;
              if (bVar4 != 0x2d) {
                iVar23 = iVar8;
              }
              *(int *)(lVar22 + uVar24 * 4) = iVar23;
            }
            uVar24 = uVar14;
          } while (uVar14 != uVar20);
        }
        else if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
        }
        else if (uVar21 != 0) {
          if (uVar21 == 1) {
            uVar14 = 0;
LAB_00126528:
            lVar16 = uVar20 - uVar14;
            puVar12 = (undefined4 *)(lVar22 + uVar14 * 4);
            do {
              lVar16 = lVar16 + -1;
              *puVar12 = 1;
              puVar12 = puVar12 + 1;
            } while (lVar16 != 0);
          }
          else {
            uVar14 = uVar20 & 0xfffffffe;
            lVar16 = lVar22 + 4;
            uVar24 = uVar14;
            do {
              *(undefined8 *)(lVar16 + -4) = 0x100000001;
              lVar16 = lVar16 + 8;
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
            if (uVar14 != uVar20) goto LAB_00126528;
          }
          if (0 < (int)uVar21) goto LAB_00126548;
        }
      }
    }
  }
  else {
    if (uVar21 != 0) {
      if (uVar21 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar20 & 0xfffffffe;
        lVar16 = lVar22 + 4;
        uVar24 = uVar14;
        do {
          *(undefined8 *)(lVar16 + -4) = 0x100000001;
          lVar16 = lVar16 + 8;
          uVar24 = uVar24 - 2;
        } while (uVar24 != 0);
        if (uVar14 == uVar20) goto LAB_001262d0;
      }
      lVar16 = uVar20 - uVar14;
      puVar12 = (undefined4 *)(lVar22 + uVar14 * 4);
      do {
        lVar16 = lVar16 + -1;
        *puVar12 = 1;
        puVar12 = puVar12 + 1;
      } while (lVar16 != 0);
      goto LAB_001262d0;
    }
    iVar8 = *(int *)(fts_ftest[0x59] + 8);
    if (iVar8 - 1U < 2) goto LAB_00126430;
  }
LAB_0012671c:
  print_buffer(plVar5[0x14],*(undefined4 *)((long)plVar5 + 0x14),(int)plVar5[2]);
  print_buffer(plVar5[0x15],(int)plVar5[5],*(undefined4 *)((long)plVar5 + 0x24));
  iVar7 = *(int *)(plVar13[0x59] + 8);
  if (iVar7 == 1) {
    memcpy(abStack_272 + 2,"SHORT_CIRCUIT_TEST",0x15e);
    local_470 = local_470 & 0xffffffff00000000;
    get_test_item(abStack_272 + 2,7,&local_470);
    plVar5 = fts_ftest;
    uVar21 = *(uint *)((long)fts_ftest + 0x14);
    uVar20 = (ulong)uVar21;
    uVar11 = *(uint *)(fts_ftest + 3);
    uVar24 = (ulong)uVar11;
    plVar13 = fts_ftest + 0x1a;
    lVar22 = fts_ftest[0x21];
    iVar7 = *(int *)((long)fts_ftest + 0xf4);
    *(undefined4 *)(fts_ftest + 0x2f) = (undefined4)local_470;
    *(undefined4 *)(plVar5 + 0x16) = 0x1d;
    iVar8 = get_basic_threshold(bthr_name_incell,0x16,plVar13);
    plVar13 = fts_ftest;
    if (iVar8 < 0) {
      if ((fts_ftest[0x15b] == 0) || (0x63fff < (int)fts_ftest[0x15c])) {
        puVar10 = "<3>[FTS_TS/E][TEST]%s:get basic thr fail\n\n";
      }
      else {
        puVar10 = "<3>[FTS_TS/E][TEST]%s:get basic thr fail\n\n";
        builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                        "get basic thr fail\n",0x14);
        iVar7 = 0x13;
LAB_0012957c:
        *(int *)(plVar13 + 0x15c) = (int)plVar13[0x15c] + iVar7;
      }
LAB_00129594:
      _printk(puVar10,"get_test_threshold_incell");
      plVar13 = fts_ftest;
      if ((fts_ftest[0x15b] != 0) && ((int)fts_ftest[0x15c] < 0x64000)) {
        builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                        "get incell threshold fail\n",0x1b);
        *(int *)(plVar13 + 0x15c) = (int)plVar13[0x15c] + 0x1a;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:get incell threshold fail\n\n","ini_init_test_incell");
      goto LAB_001272b0;
    }
    pcVar6 = *(code **)(plVar5[0x59] + 0x20);
    if (pcVar6 != (code *)0x0) {
      if (((ulong)(pcVar6 + -0x111550) >> 3 | (long)pcVar6 << 0x3d) < 3) {
        iVar8 = (*pcVar6)();
        plVar13 = fts_ftest;
      }
      else {
        __cfi_slowpath_diag(0x2b3a43e29242445,pcVar6,&DAT_00104cd0);
        iVar8 = (*pcVar6)();
        plVar13 = fts_ftest;
      }
      fts_ftest = plVar13;
      if (iVar8 < 0) {
        if ((plVar13[0x15b] != 0) && ((int)plVar13[0x15c] < 0x64000)) {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:special basic thr init fail\n\n";
          builtin_strncpy((char *)(plVar13[0x15b] + (long)(int)plVar13[0x15c]),
                          "special basic thr init fail\n",0x1d);
          iVar7 = 0x1c;
          goto LAB_0012957c;
        }
        puVar10 = "<3>[FTS_TS/E][TEST]%s:special basic thr init fail\n\n";
        goto LAB_00129594;
      }
    }
    lVar16 = plVar5[0x2a];
    if (lVar16 == 0) {
      _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
    }
    else {
      iVar8 = uVar21 - uVar11;
      if (iVar8 < 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,uVar11);
      }
      else {
        uVar2 = (undefined4)plVar5[0x22];
        if (0 < (int)uVar21) {
          uVar1 = *(undefined4 *)((long)plVar5 + 0x104);
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar16 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar1;
              *puVar12 = uVar1;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_0012695c;
          }
          lVar19 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar16 + uVar17 * 4);
          do {
            lVar19 = lVar19 + -1;
            *puVar12 = uVar1;
            puVar12 = puVar12 + 1;
          } while (lVar19 != 0);
        }
LAB_0012695c:
        if ((0 < (int)uVar11) && ((int)lVar22 != 0)) {
          if (uVar11 < 2) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if ((iVar8 <= iVar8 + (int)(uVar24 - 1)) && (uVar24 - 1 >> 0x20 == 0)) {
              uVar14 = uVar24 & 0xfffffffe;
              uVar17 = uVar14;
              do {
                iVar23 = iVar8 + 1;
                *(undefined4 *)(lVar16 + (long)iVar8 * 4) = uVar2;
                uVar17 = uVar17 - 2;
                iVar8 = iVar8 + 2;
                *(undefined4 *)(lVar16 + (long)iVar23 * 4) = uVar2;
              } while (uVar17 != 0);
              if (uVar14 == uVar24) goto LAB_001269d8;
            }
          }
          lVar19 = uVar24 - uVar14;
          iVar8 = (uVar21 + (int)uVar14) - uVar11;
          do {
            *(undefined4 *)(lVar16 + (long)iVar8 * 4) = uVar2;
            lVar19 = lVar19 + -1;
            iVar8 = iVar8 + 1;
          } while (lVar19 != 0);
        }
      }
    }
LAB_001269d8:
    lVar16 = plVar5[0x29];
    if (lVar16 == 0) {
      _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
    }
    else {
      iVar8 = uVar21 - uVar11;
      if (iVar8 < 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,uVar11);
      }
      else {
        uVar2 = *(undefined4 *)((long)plVar5 + 0x10c);
        if (0 < (int)uVar21) {
          uVar1 = (undefined4)plVar5[0x20];
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar16 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar1;
              *puVar12 = uVar1;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00126a40;
          }
          lVar19 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar16 + uVar17 * 4);
          do {
            lVar19 = lVar19 + -1;
            *puVar12 = uVar1;
            puVar12 = puVar12 + 1;
          } while (lVar19 != 0);
        }
LAB_00126a40:
        if ((0 < (int)uVar11) && ((int)lVar22 != 0)) {
          if (uVar11 < 2) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if ((iVar8 <= iVar8 + (int)(uVar24 - 1)) && (uVar24 - 1 >> 0x20 == 0)) {
              uVar14 = uVar24 & 0xfffffffe;
              uVar17 = uVar14;
              do {
                iVar23 = iVar8 + 1;
                *(undefined4 *)(lVar16 + (long)iVar8 * 4) = uVar2;
                uVar17 = uVar17 - 2;
                iVar8 = iVar8 + 2;
                *(undefined4 *)(lVar16 + (long)iVar23 * 4) = uVar2;
              } while (uVar17 != 0);
              if (uVar14 == uVar24) goto LAB_00126abc;
            }
          }
          lVar22 = uVar24 - uVar14;
          iVar8 = (uVar21 + (int)uVar14) - uVar11;
          do {
            *(undefined4 *)(lVar16 + (long)iVar8 * 4) = uVar2;
            lVar22 = lVar22 + -1;
            iVar8 = iVar8 + 1;
          } while (lVar22 != 0);
        }
      }
    }
LAB_00126abc:
    if (*(char *)(plVar5[0x59] + 0x14) == '\0') goto LAB_00127070;
    lVar22 = plVar5[0x2c];
    if (lVar22 == 0) {
      _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00126f48:
      lVar22 = plVar5[0x2b];
      if (lVar22 == 0) goto LAB_001278cc;
      if ((int)uVar21 < 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
      }
      else if (uVar21 != 0) {
        uVar2 = *(undefined4 *)((long)plVar5 + 0x134);
        if (uVar21 == 1) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar20 & 0xfffffffe;
          puVar12 = (undefined4 *)(lVar22 + 4);
          uVar14 = uVar17;
          do {
            puVar12[-1] = uVar2;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 2;
            uVar14 = uVar14 - 2;
          } while (uVar14 != 0);
          if (uVar17 == uVar20) goto LAB_00127070;
        }
        lVar16 = uVar20 - uVar17;
        puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
        do {
          lVar16 = lVar16 + -1;
          *puVar12 = uVar2;
          puVar12 = puVar12 + 1;
        } while (lVar16 != 0);
      }
    }
    else {
      if ((int)uVar21 < 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
        goto LAB_00126f48;
      }
      if (uVar21 != 0) {
        uVar2 = (undefined4)plVar5[0x27];
        if (uVar21 == 1) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar20 & 0xfffffffe;
          puVar12 = (undefined4 *)(lVar22 + 4);
          uVar14 = uVar17;
          do {
            puVar12[-1] = uVar2;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 2;
            uVar14 = uVar14 - 2;
          } while (uVar14 != 0);
          if (uVar17 == uVar20) goto LAB_00126f48;
        }
        lVar16 = uVar20 - uVar17;
        puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
        do {
          lVar16 = lVar16 + -1;
          *puVar12 = uVar2;
          puVar12 = puVar12 + 1;
        } while (lVar16 != 0);
        goto LAB_00126f48;
      }
      if (plVar5[0x2b] != 0) goto LAB_00127070;
LAB_001278cc:
      _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
    }
LAB_00127070:
    lVar22 = plVar5[0x2e];
    if (lVar22 == 0) {
      _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
    }
    else {
      iVar8 = uVar21 - uVar11;
      if (iVar8 < 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,uVar11);
      }
      else {
        uVar2 = *(undefined4 *)((long)plVar5 + 0xfc);
        if (0 < (int)uVar21) {
          uVar1 = (undefined4)plVar5[0x1e];
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar1;
              *puVar12 = uVar1;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_001270d8;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar1;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
LAB_001270d8:
        if ((0 < (int)uVar11) && (iVar7 != 0)) {
          if (uVar11 < 2) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if ((iVar8 <= iVar8 + (int)(uVar24 - 1)) && (uVar24 - 1 >> 0x20 == 0)) {
              uVar14 = uVar24 & 0xfffffffe;
              uVar17 = uVar14;
              do {
                iVar23 = iVar8 + 1;
                *(undefined4 *)(lVar22 + (long)iVar8 * 4) = uVar2;
                uVar17 = uVar17 - 2;
                iVar8 = iVar8 + 2;
                *(undefined4 *)(lVar22 + (long)iVar23 * 4) = uVar2;
              } while (uVar17 != 0);
              if (uVar14 == uVar24) goto LAB_00127154;
            }
          }
          lVar16 = uVar24 - uVar14;
          iVar8 = (uVar21 + (int)uVar14) - uVar11;
          do {
            *(undefined4 *)(lVar22 + (long)iVar8 * 4) = uVar2;
            lVar16 = lVar16 + -1;
            iVar8 = iVar8 + 1;
          } while (lVar16 != 0);
        }
      }
    }
LAB_00127154:
    lVar22 = plVar5[0x2d];
    if (lVar22 == 0) {
      _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
    }
    else {
      iVar8 = uVar21 - uVar11;
      if (iVar8 < 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,uVar11);
      }
      else {
        uVar2 = (undefined4)plVar5[0x1f];
        if (0 < (int)uVar21) {
          uVar1 = *(undefined4 *)((long)plVar5 + 0xec);
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar1;
              *puVar12 = uVar1;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_001271bc;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar1;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
LAB_001271bc:
        if ((0 < (int)uVar11) && (iVar7 != 0)) {
          if (uVar11 < 2) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if ((iVar8 <= iVar8 + (int)(uVar24 - 1)) && (uVar24 - 1 >> 0x20 == 0)) {
              uVar14 = uVar24 & 0xfffffffe;
              uVar17 = uVar14;
              do {
                iVar7 = iVar8 + 1;
                *(undefined4 *)(lVar22 + (long)iVar8 * 4) = uVar2;
                uVar17 = uVar17 - 2;
                iVar8 = iVar8 + 2;
                *(undefined4 *)(lVar22 + (long)iVar7 * 4) = uVar2;
              } while (uVar17 != 0);
              if (uVar14 == uVar24) goto LAB_00127238;
            }
          }
          lVar16 = uVar24 - uVar14;
          iVar7 = (uVar21 + (int)uVar14) - uVar11;
          do {
            *(undefined4 *)(lVar22 + (long)iVar7 * 4) = uVar2;
            lVar16 = lVar16 + -1;
            iVar7 = iVar7 + 1;
          } while (lVar16 != 0);
        }
      }
    }
LAB_00127238:
    get_detail_threshold("RawData_Max_Tx",1,plVar5[0x2a],uVar20);
    get_detail_threshold("RawData_Min_Tx",1,plVar5[0x29],uVar20);
    get_detail_threshold("CB_Max_Tx",1,plVar5[0x2e],uVar20);
    get_detail_threshold("CB_Min_Tx",1,plVar5[0x2d],uVar20);
    plVar13 = fts_ftest;
    if (2 < *(int *)(*fts_ftest + 0x2f4)) {
      _printk("[FTS_TS][TEST]%s:short_res_min:%d\n","print_thr_incell",(int)fts_ftest[0x1a]);
      _printk("[FTS_TS][TEST]%s:short_res_vk_min:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0xd4));
      _printk("[FTS_TS][TEST]%s:open_cb_min:%d\n","print_thr_incell",(int)plVar13[0x1b]);
      _printk("[FTS_TS][TEST]%s:open_k1_check:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0xdc));
      _printk("[FTS_TS][TEST]%s:open_k1_value:%d\n","print_thr_incell",(int)plVar13[0x1c]);
      _printk("[FTS_TS][TEST]%s:open_k2_check:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0xe4));
      _printk("[FTS_TS][TEST]%s:open_k2_value:%d\n","print_thr_incell",(int)plVar13[0x1d]);
      _printk("[FTS_TS][TEST]%s:cb_min:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0xec));
      _printk("[FTS_TS][TEST]%s:cb_max:%d\n","print_thr_incell",(int)plVar13[0x1e]);
      _printk("[FTS_TS][TEST]%s:cb_vkey_check:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0xf4));
      _printk("[FTS_TS][TEST]%s:cb_min_vk:%d\n","print_thr_incell",(int)plVar13[0x1f]);
      _printk("[FTS_TS][TEST]%s:cb_max_vk:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0xfc));
      _printk("[FTS_TS][TEST]%s:rawdata_min:%d\n","print_thr_incell",(int)plVar13[0x20]);
      _printk("[FTS_TS][TEST]%s:rawdata_max:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0x104));
      _printk("[FTS_TS][TEST]%s:rawdata_vkey_check:%d\n","print_thr_incell",(int)plVar13[0x21]);
      _printk("[FTS_TS][TEST]%s:rawdata_min_vk:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0x10c));
      _printk("[FTS_TS][TEST]%s:rawdata_max_vk:%d\n","print_thr_incell",(int)plVar13[0x22]);
      _printk("[FTS_TS][TEST]%s:lcdnoise_frame:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0x114));
      _printk("[FTS_TS][TEST]%s:lcdnoise_coefficient:%d\n","print_thr_incell",(int)plVar13[0x23]);
      _printk("[FTS_TS][TEST]%s:lcdnoise_coefficient_vkey:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0x11c));
      _printk("[FTS_TS][TEST]%s:open_diff_min:%d\n","print_thr_incell",(int)plVar13[0x24]);
      _printk("[FTS_TS][TEST]%s:open_diff_max:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0x124));
      _printk("[FTS_TS][TEST]%s:open_nmos:%d\n","print_thr_incell",(int)plVar13[0x25]);
      _printk("[FTS_TS][TEST]%s:keyshort_k1:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 300));
      _printk("[FTS_TS][TEST]%s:keyshort_cb_max:%d\n","print_thr_incell",(int)plVar13[0x26]);
      _printk("[FTS_TS][TEST]%s:rawdata2_min:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0x134));
      _printk("[FTS_TS][TEST]%s:rawdata2_max:%d\n","print_thr_incell",(int)plVar13[0x27]);
      _printk("[FTS_TS][TEST]%s:mux_open_cb_min:%d\n","print_thr_incell",
              *(undefined4 *)((long)plVar13 + 0x13c));
      _printk("[FTS_TS][TEST]%s:open_delta_V:%d\n","print_thr_incell",(int)plVar13[0x28]);
      print_buffer(plVar13[0x29],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x2a],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x2d],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x2e],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x2b],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      lVar22 = plVar13[0x2c];
      goto LAB_00127750;
    }
  }
  else {
    if (iVar7 == 3) {
      memcpy(abStack_272 + 2,"RAWDATA_TEST",200);
      local_470 = local_470 & 0xffffffff00000000;
      get_test_item(abStack_272 + 2,4,&local_470);
      plVar5 = fts_ftest;
      plVar13 = fts_ftest + 0x1a;
      uVar21 = *(uint *)((long)fts_ftest + 0x14);
      uVar20 = (ulong)uVar21;
      *(undefined4 *)(fts_ftest + 0x2b) = (undefined4)local_470;
      *(undefined4 *)(plVar5 + 0x16) = 0x16;
      iVar8 = get_basic_threshold(bthr_name_sc,0x15,plVar13);
      plVar13 = fts_ftest;
      if (iVar8 < 0) {
        if ((fts_ftest[0x15b] == 0) || (0x63fff < (int)fts_ftest[0x15c])) {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:get basic thr fail\n\n";
        }
        else {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:get basic thr fail\n\n";
          builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                          "get basic thr fail\n",0x14);
          iVar7 = 0x13;
LAB_0012948c:
          *(int *)(plVar13 + 0x15c) = (int)plVar13[0x15c] + iVar7;
        }
LAB_001294a4:
        _printk(puVar10,"get_test_threshold_sc");
        plVar13 = fts_ftest;
        if ((fts_ftest[0x15b] != 0) && ((int)fts_ftest[0x15c] < 0x64000)) {
          builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                          "get sc threshold fail\n",0x17);
          *(int *)(plVar13 + 0x15c) = (int)plVar13[0x15c] + 0x16;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:get sc threshold fail\n\n","ini_init_test_sc");
        goto LAB_001272b0;
      }
      pcVar6 = *(code **)(plVar5[0x59] + 0x20);
      if (pcVar6 != (code *)0x0) {
        if (((ulong)(pcVar6 + -0x111550) >> 3 | (long)pcVar6 << 0x3d) < 3) {
          iVar8 = (*pcVar6)();
          plVar13 = fts_ftest;
        }
        else {
          __cfi_slowpath_diag(0x2b3a43e29242445,pcVar6,&DAT_00104d10);
          iVar8 = (*pcVar6)();
          plVar13 = fts_ftest;
        }
        fts_ftest = plVar13;
        if (iVar8 < 0) {
          if ((plVar13[0x15b] != 0) && ((int)plVar13[0x15c] < 0x64000)) {
            puVar10 = "<3>[FTS_TS/E][TEST]%s:special basic thr init fail\n\n";
            builtin_strncpy((char *)(plVar13[0x15b] + (long)(int)plVar13[0x15c]),
                            "special basic thr init fail\n",0x1d);
            iVar7 = 0x1c;
            goto LAB_0012948c;
          }
          puVar10 = "<3>[FTS_TS/E][TEST]%s:special basic thr init fail\n\n";
          goto LAB_001294a4;
        }
      }
      lVar22 = plVar5[0x25];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00126900:
        lVar22 = plVar5[0x26];
        if (lVar22 == 0) goto LAB_0012741c;
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
        }
        else if (uVar21 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0xd4);
          if (uVar21 == 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar24 = uVar14;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
            if (uVar14 == uVar20) goto LAB_00126b30;
          }
          lVar16 = uVar20 - uVar14;
          puVar12 = (undefined4 *)(lVar22 + uVar14 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
          goto LAB_00126900;
        }
        if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x1a];
          if (uVar21 == 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar24 = uVar14;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
            if (uVar14 == uVar20) goto LAB_00126900;
          }
          lVar16 = uVar20 - uVar14;
          puVar12 = (undefined4 *)(lVar22 + uVar14 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00126900;
        }
        if (plVar5[0x26] != 0) goto LAB_00126b30;
LAB_0012741c:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00126b30:
      lVar22 = plVar5[0x27];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00126b98:
        lVar22 = plVar5[0x28];
        if (lVar22 == 0) goto LAB_00127464;
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
        }
        else if (uVar21 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0xdc);
          if (uVar21 == 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar24 = uVar14;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
            if (uVar14 == uVar20) goto LAB_00126bf4;
          }
          lVar16 = uVar20 - uVar14;
          puVar12 = (undefined4 *)(lVar22 + uVar14 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
          goto LAB_00126b98;
        }
        if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x1b];
          if (uVar21 == 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar24 = uVar14;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
            if (uVar14 == uVar20) goto LAB_00126b98;
          }
          lVar16 = uVar20 - uVar14;
          puVar12 = (undefined4 *)(lVar22 + uVar14 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00126b98;
        }
        if (plVar5[0x28] != 0) goto LAB_00126bf4;
LAB_00127464:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00126bf4:
      if ((void *)plVar5[0x29] == (void *)0x0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00126c10:
        lVar22 = plVar5[0x2a];
        if (lVar22 == 0) goto LAB_00126c3c;
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
        }
        else if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x1c];
          if (uVar21 == 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar24 = uVar14;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
            if (uVar14 == uVar20) goto LAB_00126c8c;
          }
          lVar16 = uVar20 - uVar14;
          puVar12 = (undefined4 *)(lVar22 + uVar14 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
          goto LAB_00126c10;
        }
        if (uVar21 != 0) {
          memset((void *)plVar5[0x29],0,uVar20 << 2);
          goto LAB_00126c10;
        }
        if (plVar5[0x2a] != 0) goto LAB_00126c8c;
LAB_00126c3c:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00126c8c:
      get_detail_threshold("RawDataTest_Min",0,plVar5[0x25],uVar20);
      get_detail_threshold("RawDataTest_Max",0,plVar5[0x26],uVar20);
      get_detail_threshold("CbTest_Min",0,plVar5[0x27],uVar20);
      get_detail_threshold("CbTest_Max",0,plVar5[0x28],uVar20);
      get_detail_threshold("DeltaCxTest_Sort",0,plVar5[0x29],uVar20);
      get_detail_threshold("DeltaCbTest_Base",0,plVar5[0x2a],uVar20);
      plVar13 = fts_ftest;
      iVar8 = 0;
      if (*(int *)(*fts_ftest + 0x2f4) < 3) goto LAB_001272b0;
      _printk("[FTS_TS][TEST]%s:rawdata_min:%d\n","print_thr_sc",(int)fts_ftest[0x1a]);
      _printk("[FTS_TS][TEST]%s:rawdata_max:%d\n","print_thr_sc",
              *(undefined4 *)((long)plVar13 + 0xd4));
      _printk("[FTS_TS][TEST]%s:cb_min:%d\n","print_thr_sc",(int)plVar13[0x1b]);
      _printk("[FTS_TS][TEST]%s:cb_max:%d\n","print_thr_sc",*(undefined4 *)((long)plVar13 + 0xdc));
      _printk("[FTS_TS][TEST]%s:dcb_differ_max:%d\n","print_thr_sc",
              *(undefined4 *)((long)plVar13 + 0xe4));
      _printk("[FTS_TS][TEST]%s:dcb_key_check:%d\n","print_thr_sc",(int)plVar13[0x1d]);
      _printk("[FTS_TS][TEST]%s:dcb_key_differ_max:%d\n","print_thr_sc",
              *(undefined4 *)((long)plVar13 + 0xec));
      _printk("[FTS_TS][TEST]%s:dcb_ds1:%d\n","print_thr_sc",(int)plVar13[0x1e]);
      _printk("[FTS_TS][TEST]%s:dcb_ds2:%d\n","print_thr_sc",*(undefined4 *)((long)plVar13 + 0xf4));
      _printk("[FTS_TS][TEST]%s:dcb_ds3:%d\n","print_thr_sc",(int)plVar13[0x1f]);
      _printk("[FTS_TS][TEST]%s:dcb_ds4:%d\n","print_thr_sc",*(undefined4 *)((long)plVar13 + 0xfc));
      _printk("[FTS_TS][TEST]%s:dcb_ds5:%d\n","print_thr_sc",(int)plVar13[0x20]);
      _printk("[FTS_TS][TEST]%s:dcb_ds6:%d\n","print_thr_sc",*(undefined4 *)((long)plVar13 + 0x104))
      ;
      _printk("[FTS_TS][TEST]%s:dcb_critical_check:%d\n","print_thr_sc",(int)plVar13[0x21]);
      _printk("[FTS_TS][TEST]%s:dcb_cs1:%d\n","print_thr_sc",*(undefined4 *)((long)plVar13 + 0x10c))
      ;
      _printk("[FTS_TS][TEST]%s:dcb_cs2:%d\n","print_thr_sc",(int)plVar13[0x22]);
      _printk("[FTS_TS][TEST]%s:dcb_cs3:%d\n","print_thr_sc",*(undefined4 *)((long)plVar13 + 0x114))
      ;
      _printk("[FTS_TS][TEST]%s:dcb_cs4:%d\n","print_thr_sc",(int)plVar13[0x23]);
      _printk("[FTS_TS][TEST]%s:dcb_cs5:%d\n","print_thr_sc",*(undefined4 *)((long)plVar13 + 0x11c))
      ;
      _printk("[FTS_TS][TEST]%s:dcb_cs6:%d\n","print_thr_sc",(int)plVar13[0x24]);
      print_buffer(plVar13[0x25],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x26],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x27],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x28],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x29],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      lVar22 = plVar13[0x2a];
    }
    else {
      if (iVar7 != 2) {
        if ((fts_ftest[0x15b] != 0) && ((int)fts_ftest[0x15c] < 0x64000)) {
          iVar7 = snprintf((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),0x64000,
                           "test ic type(%d) fail\n",iVar7);
          *(int *)(fts_ftest + 0x15c) = (int)fts_ftest[0x15c] + iVar7;
          iVar7 = *(int *)(plVar13[0x59] + 8);
        }
        _printk("<3>[FTS_TS/E][TEST]%s:test ic type(%d) fail\n\n","ini_init_test",iVar7);
        goto LAB_00126488;
      }
      memcpy(abStack_272 + 2,"RAWDATA_TEST",400);
      local_470 = local_470 & 0xffffffff00000000;
      get_test_item(abStack_272 + 2,8,&local_470);
      *(undefined4 *)(fts_ftest + 0x58) = (undefined4)local_470;
      _printk("<3>[FTS_TS/I][TEST]%s:test item:0x%x in ini\n","get_test_item_mc_sc");
      plVar5 = fts_ftest;
      plVar13 = fts_ftest + 0x1a;
      uVar21 = *(uint *)((long)fts_ftest + 0x14);
      uVar20 = (ulong)uVar21;
      uVar11 = *(uint *)(fts_ftest + 5);
      uVar24 = (ulong)uVar11;
      *(undefined4 *)(fts_ftest + 0x16) = 0x37;
      iVar8 = get_basic_threshold(bthr_name_mc_sc,0x28,plVar13);
      plVar13 = fts_ftest;
      if (iVar8 < 0) {
        if ((fts_ftest[0x15b] == 0) || (0x63fff < (int)fts_ftest[0x15c])) {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:get basic thr fail\n\n";
        }
        else {
          puVar10 = "<3>[FTS_TS/E][TEST]%s:get basic thr fail\n\n";
          builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                          "get basic thr fail\n",0x14);
          iVar7 = 0x13;
LAB_00129678:
          *(int *)(plVar13 + 0x15c) = (int)plVar13[0x15c] + iVar7;
        }
LAB_00129690:
        _printk(puVar10,"get_test_threshold_mc_sc");
        plVar13 = fts_ftest;
        if ((fts_ftest[0x15b] != 0) && ((int)fts_ftest[0x15c] < 0x64000)) {
          builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                          "get mc_sc threshold fail\n",0x1a);
          *(int *)(plVar13 + 0x15c) = (int)plVar13[0x15c] + 0x19;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:get mc_sc threshold fail\n\n","ini_init_test_mc_sc");
        goto LAB_001272b0;
      }
      pcVar6 = *(code **)(plVar5[0x59] + 0x20);
      if (pcVar6 != (code *)0x0) {
        if (((ulong)(pcVar6 + -0x111550) >> 3 | (long)pcVar6 << 0x3d) < 3) {
          iVar8 = (*pcVar6)();
          plVar13 = fts_ftest;
        }
        else {
          __cfi_slowpath_diag(0x2b3a43e29242445,pcVar6,&DAT_00104cf0);
          iVar8 = (*pcVar6)();
          plVar13 = fts_ftest;
        }
        fts_ftest = plVar13;
        if (iVar8 < 0) {
          if ((plVar13[0x15b] != 0) && ((int)plVar13[0x15c] < 0x64000)) {
            puVar10 = "<3>[FTS_TS/E][TEST]%s:special basic thr init fail\n\n";
            builtin_strncpy((char *)(plVar13[0x15b] + (long)(int)plVar13[0x15c]),
                            "special basic thr init fail\n",0x1d);
            iVar7 = 0x1c;
            goto LAB_00129678;
          }
          puVar10 = "<3>[FTS_TS/E][TEST]%s:special basic thr init fail\n\n";
          goto LAB_00129690;
        }
      }
      lVar22 = plVar5[0x36];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_001279e0:
        lVar22 = plVar5[0x37];
        if (lVar22 == 0) goto LAB_00128cb0;
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
        }
        else if (uVar21 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0xd4);
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00127a3c;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
          goto LAB_001279e0;
        }
        if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x1a];
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_001279e0;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_001279e0;
        }
        if (plVar5[0x37] != 0) goto LAB_00127a3c;
LAB_00128cb0:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00127a3c:
      if (*(char *)(plVar5[0x59] + 0x14) == '\0') goto LAB_00127b0c;
      lVar22 = plVar5[0x38];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127ab0:
        lVar22 = plVar5[0x39];
        if (lVar22 == 0) goto LAB_001293bc;
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
        }
        else if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x1c];
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00127b0c;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
          goto LAB_00127ab0;
        }
        if (uVar21 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0xdc);
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00127ab0;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127ab0;
        }
        if (plVar5[0x39] != 0) goto LAB_00127b0c;
LAB_001293bc:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00127b0c:
      lVar22 = plVar5[0x3a];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127b74:
        if ((void *)plVar5[0x3b] == (void *)0x0) {
LAB_00128ce0:
          _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
        }
        else if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
        }
        else if (uVar21 != 0) {
          memset((void *)plVar5[0x3b],0,uVar20 << 2);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar21,0);
          goto LAB_00127b74;
        }
        if (uVar21 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0xf4);
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00127b74;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127b74;
        }
        if (plVar5[0x3b] == 0) goto LAB_00128ce0;
      }
      lVar22 = plVar5[0x3c];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127bf8:
        if ((void *)plVar5[0x3d] == (void *)0x0) {
LAB_00128d10:
          _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
        }
        else if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
        }
        else if (uVar21 != 0) {
          memset((void *)plVar5[0x3d],0,uVar20 << 2);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
          goto LAB_00127bf8;
        }
        if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x1f];
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00127bf8;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127bf8;
        }
        if (plVar5[0x3d] == 0) goto LAB_00128d10;
      }
      lVar22 = plVar5[0x57];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127c7c:
        lVar22 = plVar5[0x56];
        if (lVar22 == 0) goto LAB_00128d40;
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
        }
        else if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x34];
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00127cd8;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
          goto LAB_00127c7c;
        }
        if (uVar21 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x1a4);
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00127c7c;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127c7c;
        }
        if (plVar5[0x56] != 0) goto LAB_00127cd8;
LAB_00128d40:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00127cd8:
      lVar22 = plVar5[0x3e];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127d40:
        lVar22 = plVar5[0x3f];
        if (lVar22 == 0) goto LAB_00128d70;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x104);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127d9c;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar11,0);
          goto LAB_00127d40;
        }
        if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x20];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127d40;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127d40;
        }
        if (plVar5[0x3f] != 0) goto LAB_00127d9c;
LAB_00128d70:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00127d9c:
      lVar22 = plVar5[0x40];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127e04:
        lVar22 = plVar5[0x41];
        if (lVar22 == 0) goto LAB_00128da0;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar11,0);
        }
        else if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x22];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127e60;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_00127e04;
        }
        if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x10c);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127e04;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127e04;
        }
        if (plVar5[0x41] != 0) goto LAB_00127e60;
LAB_00128da0:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00127e60:
      lVar22 = plVar5[0x42];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127ec8:
        lVar22 = plVar5[0x43];
        if (lVar22 == 0) goto LAB_00128dd0;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x144);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127f24;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar11,0);
          goto LAB_00127ec8;
        }
        if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x28];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127ec8;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127ec8;
        }
        if (plVar5[0x43] != 0) goto LAB_00127f24;
LAB_00128dd0:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00127f24:
      lVar22 = plVar5[0x44];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00127f8c:
        lVar22 = plVar5[0x45];
        if (lVar22 == 0) goto LAB_00128e00;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x15c);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127fe8;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_00127f8c;
        }
        if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x2b];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00127f8c;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00127f8c;
        }
        if (plVar5[0x45] != 0) goto LAB_00127fe8;
LAB_00128e00:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00127fe8:
      lVar22 = plVar5[0x52];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00128050:
        lVar22 = plVar5[0x53];
        if (lVar22 == 0) goto LAB_00128e30;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x194);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_001280ac;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_00128050;
        }
        if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x32];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128050;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00128050;
        }
        if (plVar5[0x53] != 0) goto LAB_001280ac;
LAB_00128e30:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_001280ac:
      lVar22 = plVar5[0x50];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00128114:
        lVar22 = plVar5[0x51];
        if (lVar22 == 0) goto LAB_00128e60;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x18c);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128170;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_00128114;
        }
        if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x31];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128114;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00128114;
        }
        if (plVar5[0x51] != 0) goto LAB_00128170;
LAB_00128e60:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00128170:
      lVar22 = plVar5[0x54];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_001281d8:
        lVar22 = plVar5[0x55];
        if (lVar22 == 0) goto LAB_00128e90;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x19c);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128234;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_001281d8;
        }
        if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x33];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_001281d8;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_001281d8;
        }
        if (plVar5[0x55] != 0) goto LAB_00128234;
LAB_00128e90:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00128234:
      lVar22 = plVar5[0x46];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_0012829c:
        lVar22 = plVar5[0x47];
        if (lVar22 == 0) goto LAB_00128ec0;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x11c);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_001282f8;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_0012829c;
        }
        if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x23];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_0012829c;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_0012829c;
        }
        if (plVar5[0x47] != 0) goto LAB_001282f8;
LAB_00128ec0:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_001282f8:
      lVar22 = plVar5[0x48];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00128360:
        lVar22 = plVar5[0x49];
        if (lVar22 == 0) goto LAB_00128ef0;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x25];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_001283bc;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_00128360;
        }
        if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x124);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128360;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00128360;
        }
        if (plVar5[0x49] != 0) goto LAB_001283bc;
LAB_00128ef0:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_001283bc:
      lVar22 = plVar5[0x4a];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_00128424:
        lVar22 = plVar5[0x4b];
        if (lVar22 == 0) goto LAB_00128f20;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x2a];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128480;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_00128424;
        }
        if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x14c);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128424;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_00128424;
        }
        if (plVar5[0x4b] != 0) goto LAB_00128480;
LAB_00128f20:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00128480:
      lVar22 = plVar5[0x4c];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_001284e8:
        lVar22 = plVar5[0x4d];
        if (lVar22 == 0) goto LAB_00128f50;
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
        }
        else if (uVar11 != 0) {
          uVar2 = (undefined4)plVar5[0x2d];
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_00128544;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar11 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar24,0);
          goto LAB_001284e8;
        }
        if (uVar11 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x164);
          if (uVar11 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar24 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar24) goto LAB_001284e8;
          }
          lVar16 = uVar24 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_001284e8;
        }
        if (plVar5[0x4d] != 0) goto LAB_00128544;
LAB_00128f50:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00128544:
      lVar22 = plVar5[0x4e];
      if (lVar22 == 0) {
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
LAB_001285ac:
        lVar22 = plVar5[0x4f];
        if (lVar22 == 0) goto LAB_00128f80;
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
        }
        else if (uVar21 != 0) {
          uVar2 = *(undefined4 *)((long)plVar5 + 0x13c);
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_00128608;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        if ((int)uVar21 < 0) {
          _printk("<3>[FTS_TS/E][TEST]%s:total len(0x%x) less key len(0x%x)\n\n","fts_init_buffer",uVar20,0);
          goto LAB_001285ac;
        }
        if (uVar21 != 0) {
          uVar2 = (undefined4)plVar5[0x27];
          if (uVar21 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar20 & 0xfffffffe;
            puVar12 = (undefined4 *)(lVar22 + 4);
            uVar14 = uVar17;
            do {
              puVar12[-1] = uVar2;
              *puVar12 = uVar2;
              puVar12 = puVar12 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
            if (uVar17 == uVar20) goto LAB_001285ac;
          }
          lVar16 = uVar20 - uVar17;
          puVar12 = (undefined4 *)(lVar22 + uVar17 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar12 = uVar2;
            puVar12 = puVar12 + 1;
          } while (lVar16 != 0);
          goto LAB_001285ac;
        }
        if (plVar5[0x4f] != 0) goto LAB_00128608;
LAB_00128f80:
        _printk("<3>[FTS_TS/E][TEST]%s:buffer is null\n\n","fts_init_buffer");
      }
LAB_00128608:
      get_detail_threshold("RawData_Min_High_Tx",1,plVar5[0x36],uVar20);
      get_detail_threshold("RawData_Max_High_Tx",1,plVar5[0x37],uVar20);
      if (*(char *)(plVar5[0x59] + 0x14) != '\0') {
        get_detail_threshold("RawData_Min_Low_Tx",1,plVar5[0x38],uVar20);
        get_detail_threshold("RawData_Max_Low_Tx",1,plVar5[0x39],uVar20);
      }
      get_detail_threshold("Tx_Linearity_Max_Tx",1,plVar5[0x3a],uVar20);
      get_detail_threshold("Rx_Linearity_Max_Tx",1,plVar5[0x3c],uVar20);
      get_detail_threshold("McapCMBTest_Min_Hole",1,plVar5[0x56],uVar20);
      get_detail_threshold("McapCMBTest_Max_Hole",1,plVar5[0x57],uVar20);
      get_detail_threshold("ScapCB_OFF_Min_",1,plVar5[0x3e],uVar24);
      get_detail_threshold("ScapCB_OFF_Max_",1,plVar5[0x3f],uVar24);
      get_detail_threshold("ScapCB_ON_Min_",1,plVar5[0x40],uVar24);
      get_detail_threshold("ScapCB_ON_Max_",1,plVar5[0x41],uVar24);
      get_detail_threshold("ScapCB_High_Min_",1,plVar5[0x42],uVar24);
      get_detail_threshold("ScapCB_High_Max_",1,plVar5[0x43],uVar24);
      get_detail_threshold("ScapCB_Hov_Min_",1,plVar5[0x44],uVar24);
      get_detail_threshold("ScapCB_Hov_Max_",1,plVar5[0x45],uVar24);
      get_detail_threshold("ScapRawData_OFF_Min_",1,plVar5[0x46],uVar24);
      get_detail_threshold("ScapRawData_OFF_Max_",1,plVar5[0x47],uVar24);
      get_detail_threshold("ScapRawData_ON_Min_",1,plVar5[0x48],uVar24);
      get_detail_threshold("ScapRawData_ON_Max_",1,plVar5[0x49],uVar24);
      get_detail_threshold("ScapRawData_High_Min_",1,plVar5[0x4a],uVar24);
      get_detail_threshold("ScapRawData_High_Max_",1,plVar5[0x4b],uVar24);
      get_detail_threshold("ScapRawData_Hov_Min_",1,plVar5[0x4c],uVar24);
      get_detail_threshold("ScapRawData_Hov_Max_",1,plVar5[0x4d],uVar24);
      get_detail_threshold("Panel_Differ_Min_Tx",1,plVar5[0x4e],uVar20);
      get_detail_threshold("Panel_Differ_Max_Tx",1,plVar5[0x4f],uVar20);
      plVar13 = fts_ftest;
      if (*(int *)(*fts_ftest + 0x2f4) < 3) goto LAB_001272ac;
      _printk("[FTS_TS][TEST]%s:rawdata_h_min:%d\n","print_thr_mc_sc",(int)fts_ftest[0x1a]);
      _printk("[FTS_TS][TEST]%s:rawdata_h_max:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0xd4));
      _printk("[FTS_TS][TEST]%s:rawdata_set_hfreq:%d\n","print_thr_mc_sc",(int)plVar13[0x1b]);
      _printk("[FTS_TS][TEST]%s:rawdata_l_min:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0xdc));
      _printk("[FTS_TS][TEST]%s:rawdata_l_max:%d\n","print_thr_mc_sc",(int)plVar13[0x1c]);
      _printk("[FTS_TS][TEST]%s:rawdata_set_lfreq:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0xe4));
      _printk("[FTS_TS][TEST]%s:uniformity_check_tx:%d\n","print_thr_mc_sc",(int)plVar13[0x1d]);
      _printk("[FTS_TS][TEST]%s:uniformity_check_rx:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0xec));
      _printk("[FTS_TS][TEST]%s:uniformity_check_min_max:%d\n","print_thr_mc_sc",(int)plVar13[0x1e])
      ;
      _printk("[FTS_TS][TEST]%s:uniformity_tx_hole:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0xf4));
      _printk("[FTS_TS][TEST]%s:uniformity_rx_hole:%d\n","print_thr_mc_sc",(int)plVar13[0x1f]);
      _printk("[FTS_TS][TEST]%s:uniformity_min_max_hole:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0xfc));
      _printk("[FTS_TS][TEST]%s:scap_cb_off_min:%d\n","print_thr_mc_sc",(int)plVar13[0x20]);
      _printk("[FTS_TS][TEST]%s:scap_cb_off_max:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0x104));
      _printk("[FTS_TS][TEST]%s:scap_cb_wp_off_check:%d\n","print_thr_mc_sc",(int)plVar13[0x21]);
      _printk("[FTS_TS][TEST]%s:scap_cb_on_min:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0x10c));
      _printk("[FTS_TS][TEST]%s:scap_cb_on_max:%d\n","print_thr_mc_sc",(int)plVar13[0x22]);
      _printk("[FTS_TS][TEST]%s:scap_cb_wp_on_check:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0x114));
      _printk("[FTS_TS][TEST]%s:scap_rawdata_off_min:%d\n","print_thr_mc_sc",(int)plVar13[0x23]);
      _printk("[FTS_TS][TEST]%s:scap_rawdata_off_max:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0x11c));
      _printk("[FTS_TS][TEST]%s:scap_rawdata_wp_off_check:%d\n","print_thr_mc_sc",(int)plVar13[0x24]
             );
      _printk("[FTS_TS][TEST]%s:scap_rawdata_on_min:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0x124));
      _printk("[FTS_TS][TEST]%s:scap_rawdata_on_max:%d\n","print_thr_mc_sc",(int)plVar13[0x25]);
      _printk("[FTS_TS][TEST]%s:scap_rawdata_wp_on_check:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 300));
      _printk("[FTS_TS][TEST]%s:short_cg:%d\n","print_thr_mc_sc",(int)plVar13[0x26]);
      _printk("[FTS_TS][TEST]%s:short_cc:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0x134));
      _printk("[FTS_TS][TEST]%s:panel_differ_min:%d\n","print_thr_mc_sc",(int)plVar13[0x27]);
      _printk("[FTS_TS][TEST]%s:panel_differ_max:%d\n","print_thr_mc_sc",
              *(undefined4 *)((long)plVar13 + 0x13c));
      print_buffer(plVar13[0x36],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x37],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x38],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x39],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x3a],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x3c],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x56],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x57],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      print_buffer(plVar13[0x3e],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x3f],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x40],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x41],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x42],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x43],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x44],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x45],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x52],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x53],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x50],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x51],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x54],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x55],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x46],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x47],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x48],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x49],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x4a],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x4b],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x4c],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x4d],(int)plVar13[5],*(undefined4 *)((long)plVar13 + 0x24));
      print_buffer(plVar13[0x4e],*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
      lVar22 = plVar13[0x4f];
    }
LAB_00127750:
    print_buffer(lVar22,*(undefined4 *)((long)plVar13 + 0x14),(int)plVar13[2]);
  }
LAB_001272ac:
  iVar8 = 0;
LAB_001272b0:
  lVar22 = sp_el0;
  if (*(long *)(lVar22 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}



/* ---- get_test_item @ 001296fc ---- */

void get_test_item(long param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *in_x18;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined8 unaff_x30;
  byte abStack_272 [514];
  long local_70;
  
  *in_x18 = unaff_x30;
  lVar10 = sp_el0;
  local_70 = *(long *)(lVar10 + 0x5e0);
  _printk("<3>[FTS_TS/I][TEST]%s:test items in total of driver:%d\n","get_test_item",param_2);
  uVar12 = 0;
  *param_3 = 0;
  do {
    lVar10 = param_1 + uVar12 * 0x32;
    memset(abStack_272 + 2,0,0x200);
    iVar3 = ini_get_string_value("TestItem",lVar10,abStack_272 + 2);
    iVar11 = 0;
    if (0 < iVar3) {
      uVar6 = 2;
      while (bVar1 = abStack_272[uVar6],
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100003700U) != 0) {
        uVar6 = uVar6 + 1;
        if (uVar6 == 0x202) goto LAB_001298f4;
      }
      pbVar5 = abStack_272 + uVar6 + 1;
      uVar4 = (uint)bVar1;
      if ((uVar4 == 0x2b) || (uVar4 == 0x2d)) {
        if (uVar6 - 0x201 < 0xfffffffffffffe00) {
LAB_001298f4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1298f8);
          (*pcVar2)();
        }
        bVar1 = *pbVar5;
        pbVar5 = abStack_272 + uVar6 + 2;
        uVar8 = (uint)bVar1;
      }
      else {
        uVar6 = uVar6 - 1;
        uVar8 = uVar4;
      }
      uVar8 = uVar8 - 0x30;
      if (uVar8 < 10) {
        iVar9 = 0;
        lVar7 = 0;
        if (uVar6 < 0x201) {
          lVar7 = 0x200 - uVar6;
        }
        do {
          if (lVar7 == 0) goto LAB_001298f4;
          lVar7 = lVar7 + -1;
          iVar9 = iVar9 * 10 + uVar8;
          uVar8 = *pbVar5 - 0x30;
          pbVar5 = pbVar5 + 1;
        } while (uVar8 < 10);
      }
      else {
        iVar9 = 0;
      }
      iVar11 = -iVar9;
      if (uVar4 != 0x2d) {
        iVar11 = iVar9;
      }
    }
    if (iVar3 < 0) {
      _printk("[FTS_TS][TEST]%s:test item:%s not found\n","get_test_item",lVar10);
    }
    else {
      _printk("[FTS_TS][TEST]%s:test item:%s=%d\n","get_test_item",lVar10,iVar11);
      *param_3 = *param_3 | iVar11 << (ulong)((uint)uVar12 & 0x1f);
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == param_2) {
      lVar10 = sp_el0;
      if (*(long *)(lVar10 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* ---- get_basic_threshold @ 001298fc ---- */

void get_basic_threshold(long param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  undefined8 *in_x18;
  long lVar14;
  ulong uVar15;
  undefined8 unaff_x30;
  byte abStack_272 [514];
  long local_70;
  
  *in_x18 = unaff_x30;
  lVar14 = sp_el0;
  local_70 = *(long *)(lVar14 + 0x5e0);
  iVar2 = *(int *)(*fts_ftest + 0x2f4);
  _printk("<3>[FTS_TS/I][TEST]%s:basic_thr string length(%d), count(%d)\n\n","get_basic_threshold",param_2,(int)fts_ftest[0x16]);
  plVar5 = fts_ftest;
  if ((int)fts_ftest[0x16] < (int)param_2) {
    if ((fts_ftest[0x15b] != 0) && ((int)fts_ftest[0x15c] < 0x64000)) {
      builtin_strncpy((char *)(fts_ftest[0x15b] + (long)(int)fts_ftest[0x15c]),
                      "basic_thr string length > count\n",0x21);
      *(int *)(plVar5 + 0x15c) = (int)plVar5[0x15c] + 0x20;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:basic_thr string length > count\n\n","get_basic_threshold");
    uVar8 = 0xffffffea;
  }
  else {
    uVar15 = 0;
    do {
      lVar14 = param_1 + uVar15 * 0x32;
      memset(abStack_272 + 2,0,0x200);
      iVar7 = ini_get_string_value("Basic_Threshold",lVar14,abStack_272 + 2);
      if (0 < iVar7) {
        uVar10 = 2;
        while (bVar4 = abStack_272[uVar10],
              bVar4 < 0x21 && (1L << ((ulong)bVar4 & 0x3f) & 0x100003700U) != 0) {
          uVar10 = uVar10 + 1;
          if (uVar10 == 0x202) goto LAB_00129b78;
        }
        pbVar9 = abStack_272 + uVar10 + 1;
        if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) {
          if (uVar10 - 0x201 < 0xfffffffffffffe00) {
LAB_00129b78:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x129b7c);
            (*pcVar6)();
          }
          bVar3 = *pbVar9;
          pbVar9 = abStack_272 + uVar10 + 2;
          uVar13 = (uint)bVar3;
        }
        else {
          uVar10 = uVar10 - 1;
          uVar13 = (uint)bVar4;
        }
        uVar13 = uVar13 - 0x30;
        if (uVar13 < 10) {
          iVar12 = 0;
          lVar11 = 0;
          if (uVar10 < 0x201) {
            lVar11 = 0x200 - uVar10;
          }
          do {
            if (lVar11 == 0) goto LAB_00129b78;
            lVar11 = lVar11 + -1;
            iVar12 = iVar12 * 10 + uVar13;
            uVar13 = *pbVar9 - 0x30;
            pbVar9 = pbVar9 + 1;
          } while (uVar13 < 10);
        }
        else {
          iVar12 = 0;
        }
        iVar1 = -iVar12;
        if (bVar4 != 0x2d) {
          iVar1 = iVar12;
        }
        *(int *)(param_3 + uVar15 * 4) = iVar1;
      }
      if (2 < iVar2) {
        if (iVar7 < 0) {
          _printk("[FTS_TS][TEST]%s:basic thr:%s not found\n","get_basic_threshold",lVar14);
        }
        else {
          _printk("[FTS_TS][TEST]%s:basic thr:%s=%d\n","get_basic_threshold",lVar14,
                  *(undefined4 *)(param_3 + uVar15 * 4));
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_2);
    uVar8 = 0;
  }
  lVar14 = sp_el0;
  if (*(long *)(lVar14 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}



/* ---- get_detail_threshold @ 00129b80 ---- */

/* WARNING: Type propagation algorithm not settling */

void get_detail_threshold(long param_1,uint param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *in_x18;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 unaff_x30;
  int local_334;
  undefined1 local_2b8 [5];
  byte bStack_2b3;
  byte bStack_2b2;
  byte bStack_2b1;
  undefined1 local_2b0 [2];
  byte local_2ae;
  byte local_2ad;
  byte local_2ac;
  byte local_2ab;
  byte local_2aa;
  byte local_2a9;
  char local_2a8 [56];
  char local_270 [512];
  long local_70;
  
  *in_x18 = unaff_x30;
  lVar14 = sp_el0;
  local_70 = *(long *)(lVar14 + 0x5e0);
  memset(local_270,0,0x200);
  local_2a8[0x30] = '\0';
  local_2a8[0x31] = '\0';
  local_2a8[0x20] = '\0';
  local_2a8[0x21] = '\0';
  local_2a8[0x22] = '\0';
  local_2a8[0x23] = '\0';
  local_2a8[0x24] = '\0';
  local_2a8[0x25] = '\0';
  local_2a8[0x26] = '\0';
  local_2a8[0x27] = '\0';
  local_2a8[0x28] = '\0';
  local_2a8[0x29] = '\0';
  local_2a8[0x2a] = '\0';
  local_2a8[0x2b] = '\0';
  local_2a8[0x2c] = '\0';
  local_2a8[0x2d] = '\0';
  local_2a8[0x2e] = '\0';
  local_2a8[0x2f] = '\0';
  local_2a8[0x10] = '\0';
  local_2a8[0x11] = '\0';
  local_2a8[0x12] = '\0';
  local_2a8[0x13] = '\0';
  local_2a8[0x14] = '\0';
  local_2a8[0x15] = '\0';
  local_2a8[0x16] = '\0';
  local_2a8[0x17] = '\0';
  local_2a8[0x18] = '\0';
  local_2a8[0x19] = '\0';
  local_2a8[0x1a] = '\0';
  local_2a8[0x1b] = '\0';
  local_2a8[0x1c] = '\0';
  local_2a8[0x1d] = '\0';
  local_2a8[0x1e] = '\0';
  local_2a8[0x1f] = '\0';
  local_2a8[0] = '\0';
  local_2a8[1] = '\0';
  local_2a8[2] = '\0';
  local_2a8[3] = '\0';
  local_2a8[4] = '\0';
  local_2a8[5] = '\0';
  local_2a8[6] = '\0';
  local_2a8[7] = '\0';
  local_2a8[8] = '\0';
  local_2a8[9] = '\0';
  local_2a8[10] = '\0';
  local_2a8[0xb] = '\0';
  local_2a8[0xc] = '\0';
  local_2a8[0xd] = '\0';
  local_2a8[0xe] = '\0';
  local_2a8[0xf] = '\0';
  if ((param_1 == 0) || (param_3 == 0)) {
    _printk("<3>[FTS_TS/E][TEST]%s:key_name/thr is null\n","get_detail_threshold");
  }
  else {
    if ((param_2 & 1) == 0) {
      local_334 = 0;
      iVar7 = 1;
    }
    else {
      if (0x7ffffffe < *(uint *)(fts_ftest + 0xc)) goto LAB_0012a114;
      local_334 = *(int *)(fts_ftest + 0x10);
      iVar7 = *(uint *)(fts_ftest + 0xc) + 1;
    }
    iVar17 = 0;
    puVar20 = (undefined8 *)((ulong)local_2b8 | 1);
    puVar18 = (undefined8 *)((ulong)local_2b8 | 2);
    puVar19 = (undefined8 *)((ulong)local_2b8 | 3);
    puVar1 = (undefined8 *)((long)local_2b0 + 5);
    do {
      if ((param_2 & 1) == 0) {
        snprintf(local_2a8,0x32,"%s",param_1);
      }
      else {
        snprintf(local_2a8,0x32,"%s%d",param_1,(ulong)(iVar17 + 1));
      }
      uVar6 = ini_get_string_value("SpecialSet",local_2a8,local_270);
      if (0 < (int)uVar6) {
        uVar8 = 0;
        iVar9 = 0;
        uVar10 = 0;
        _local_2b8 = 0;
        _local_2b0 = 0;
        do {
          if (uVar8 == 0x200) {
LAB_0012a154:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x12a158);
            (*pcVar5)();
          }
          cVar4 = local_270[uVar8];
          if (cVar4 != ' ') {
            if (cVar4 == ',') {
              iVar2 = iVar9 + iVar17 * local_334;
              if (param_4 <= iVar2) {
                _printk("<3>[FTS_TS/E][TEST]%s:key:%s %d,dthr_num(%d>=%d) fail\n","get_detail_threshold",param_1,iVar17,iVar2,param_4);
                break;
              }
              lVar14 = 0;
              puVar12 = (undefined8 *)local_2b8;
              uVar10 = (uint)local_2b8[0];
              if ((local_2b8[0] < 0x21) && ((1L << (_local_2b8 & 0x3f) & 0x100003700U) != 0)) {
                uVar10 = (uint)local_2b8[1];
                puVar12 = puVar20;
                if (local_2b8[1] < 0x21) {
                  lVar14 = 1;
                  if ((1L << ((ulong)local_2b8[1] & 0x3f) & 0x100003700U) != 0) {
                    uVar10 = (uint)local_2b8[2];
                    puVar12 = puVar18;
                    if (0x20 < local_2b8[2]) {
                      lVar14 = 2;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 2;
                    if ((1L << ((ulong)local_2b8[2] & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)local_2b8[3];
                    puVar12 = puVar19;
                    if (0x20 < local_2b8[3]) {
                      lVar14 = 3;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 3;
                    if ((1L << ((ulong)local_2b8[3] & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)local_2b8[4];
                    puVar12 = (undefined8 *)((long)local_2b8 + 4);
                    if (0x20 < local_2b8[4]) {
                      lVar14 = 4;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 4;
                    if ((1L << ((ulong)local_2b8[4] & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)bStack_2b3;
                    puVar12 = (undefined8 *)((long)local_2b8 + 5);
                    if (0x20 < bStack_2b3) {
                      lVar14 = 5;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 5;
                    if ((1L << ((ulong)bStack_2b3 & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)bStack_2b2;
                    puVar12 = (undefined8 *)((long)local_2b8 + 6);
                    if (0x20 < bStack_2b2) {
                      lVar14 = 6;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 6;
                    if ((1L << ((ulong)bStack_2b2 & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)bStack_2b1;
                    puVar12 = (undefined8 *)((long)local_2b8 + 7);
                    if (0x20 < bStack_2b1) {
                      lVar14 = 7;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 7;
                    if ((1L << ((ulong)bStack_2b1 & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)local_2b0[0];
                    puVar12 = (undefined8 *)local_2b0;
                    if (0x20 < local_2b0[0]) {
                      lVar14 = 8;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 8;
                    if ((1L << (_local_2b0 & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)local_2b0[1];
                    puVar12 = (undefined8 *)((long)local_2b0 + 1);
                    if (0x20 < local_2b0[1]) {
                      lVar14 = 9;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 9;
                    if ((1L << ((ulong)local_2b0[1] & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)local_2ae;
                    puVar12 = (undefined8 *)((long)local_2b0 + 2);
                    if (0x20 < local_2ae) {
                      lVar14 = 10;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 10;
                    if ((1L << ((ulong)local_2ae & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)local_2ad;
                    puVar12 = (undefined8 *)((long)local_2b0 + 3);
                    if (0x20 < local_2ad) {
                      lVar14 = 0xb;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 0xb;
                    if ((1L << ((ulong)local_2ad & 0x3f) & 0x100003700U) == 0) goto LAB_00129fb4;
                    uVar10 = (uint)local_2ac;
                    puVar12 = (undefined8 *)((long)local_2b0 + 4);
                    if (0x20 < local_2ac) {
                      lVar14 = 0xc;
                      goto LAB_0012a08c;
                    }
                    lVar14 = 0xc;
                    if ((1L << ((ulong)local_2ac & 0x3f) & 0x100003700U) != 0) {
                      uVar10 = (uint)local_2ab;
                      puVar12 = puVar1;
                      if (0x20 < local_2ab) {
                        lVar14 = 0xd;
                        if (local_2ab != 0x2d) goto LAB_0012a094;
                        uVar10 = 0x2d;
                        goto LAB_0012a09c;
                      }
                      lVar14 = 0xd;
                      uVar10 = (uint)local_2ab;
                      if ((1L << ((ulong)local_2ab & 0x3f) & 0x100003700U) != 0) {
                        uVar10 = (uint)local_2aa;
                        puVar12 = (undefined8 *)((long)local_2b0 + 6);
                        if (0x20 < local_2aa) {
                          lVar14 = 0xe;
                          goto LAB_0012a08c;
                        }
                        lVar14 = 0xe;
                        if ((1L << ((ulong)local_2aa & 0x3f) & 0x100003700U) != 0) {
                          uVar10 = (uint)local_2a9;
                          puVar12 = (undefined8 *)((long)local_2b0 + 7);
                          if (0x20 < local_2a9) {
                            lVar14 = 0xf;
                            goto LAB_0012a08c;
                          }
                          lVar14 = 0xf;
                          if ((1L << ((ulong)local_2a9 & 0x3f) & 0x100003700U) != 0)
                          goto LAB_0012a150;
                        }
                      }
                    }
                  }
                  goto LAB_00129fb4;
                }
                lVar14 = 1;
LAB_0012a08c:
                if (uVar10 != 0x2d) goto LAB_0012a094;
LAB_0012a09c:
                if (lVar14 - 0xfU < 0xfffffffffffffff0) {
LAB_0012a150:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x12a154);
                  (*pcVar5)();
                }
                pbVar15 = (byte *)((long)puVar12 + 2);
                uVar16 = lVar14 + 2;
                uVar11 = (uint)*(byte *)((long)puVar12 + 1);
              }
              else {
LAB_00129fb4:
                if (uVar10 == 0x2d) goto LAB_0012a09c;
LAB_0012a094:
                if (uVar10 == 0x2b) goto LAB_0012a09c;
                uVar16 = lVar14 + 1;
                pbVar15 = (byte *)((long)puVar12 + 1);
                uVar11 = uVar10;
              }
              uVar11 = uVar11 - 0x30;
              if (uVar11 < 10) {
                iVar13 = 0;
                lVar14 = 0;
                if (uVar16 < 0x11) {
                  lVar14 = 0x10 - uVar16;
                }
                do {
                  if (lVar14 == 0) goto LAB_0012a150;
                  lVar14 = lVar14 + -1;
                  iVar13 = iVar13 * 10 + uVar11;
                  uVar11 = *pbVar15 - 0x30;
                  pbVar15 = pbVar15 + 1;
                } while (uVar11 < 10);
              }
              else {
                iVar13 = 0;
              }
              iVar3 = -iVar13;
              if (uVar10 != 0x2d) {
                iVar3 = iVar13;
              }
              uVar10 = 0;
              iVar9 = iVar9 + 1;
              _local_2b8 = 0;
              _local_2b0 = 0;
              *(int *)(param_3 + (long)iVar2 * 4) = iVar3;
            }
            else {
              if (0xf < uVar10) goto LAB_0012a154;
              *(char *)((long)local_2b8 + (ulong)uVar10) = cVar4;
              uVar10 = uVar10 + 1;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar6);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar7);
  }
LAB_0012a114:
  lVar14 = sp_el0;
  if (*(long *)(lVar14 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- start_test_ft5452.c69b38e6b1471012195533529a7a73b0 @ 0012a15c ---- */

byte start_test_ft5452_c69b38e6b1471012195533529a7a73b0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined *puVar15;
  int *piVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  long lVar19;
  char *pcVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  bool bVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  uint *puVar31;
  bool bVar32;
  undefined8 uVar33;
  int *piVar34;
  ulong uVar35;
  uint uVar36;
  int *piVar37;
  uint uVar38;
  uint uVar39;
  ulong extraout_x17;
  ulong extraout_x17_00;
  ulong extraout_x17_01;
  undefined8 *in_x18;
  byte bVar40;
  undefined8 uVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  byte bVar45;
  byte *pbVar46;
  undefined8 unaff_x30;
  long local_108;
  ulong local_f0;
  long local_c8;
  void *local_c0;
  int *local_a8;
  uint local_7c;
  char local_78 [4];
  undefined1 local_74 [4];
  long local_70;
  
  *in_x18 = unaff_x30;
  lVar4 = fts_ftest;
  lVar25 = sp_el0;
  local_70 = *(long *)(lVar25 + 0x5e0);
  _printk("[FTS_TS][TEST]%s: Enter\n","start_test_ft5452");
  _printk("<3>[FTS_TS/I][TEST]%s:test item:0x%x\n","start_test_ft5452",*(undefined4 *)(fts_ftest + 0x2c0));
  if ((*(byte *)(lVar4 + 0x2c0) & 1) == 0) {
LAB_0012a5b4:
    bVar40 = 1;
    bVar45 = *(byte *)(lVar4 + 0x2c0);
    lVar25 = fts_ftest;
  }
  else {
    local_7c = local_7c & 0xffffff00;
    local_74[0] = 0;
    local_78[0] = '\0';
    _printk("[FTS_TS][TEST]%s: Enter\n","ft5452_rawdata_test");
    lVar25 = fts_ftest;
    if (*(long *)(fts_ftest + 0xad8) != 0) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "\n============ Test Item: rawdata test\n",0x27);
      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x26;
    }
    memset(*(void **)(lVar4 + 0x90),0,(long)*(int *)(lVar4 + 0x98));
    lVar25 = fts_ftest;
    uVar41 = *(undefined8 *)(lVar4 + 0x90);
    if ((*(long *)(lVar4 + 0x1b0) == 0) || (*(long *)(lVar4 + 0x1b8) == 0)) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "rawdata_h_min/max is null\n",0x1b);
        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1a;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:rawdata_h_min/max is null\n\n","ft5452_rawdata_test");
      iVar6 = -0x16;
LAB_0012a528:
      if (*(long *)(fts_ftest + 0xad8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        pcVar20 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
        iVar7 = 0x17;
        uVar33._0_1_ = 'e';
        uVar33._1_1_ = 's';
        uVar33._2_1_ = 't';
        uVar33._3_1_ = ' ';
        uVar33._4_1_ = 'N';
        uVar33._5_1_ = 'G';
        uVar33._6_1_ = '\n';
        uVar33._7_1_ = '\0';
        lVar25 = fts_ftest;
LAB_0012a55c:
        pcVar20[8] = 'a';
        pcVar20[9] = 'w';
        pcVar20[10] = 'd';
        pcVar20[0xb] = 'a';
        pcVar20[0xc] = 't';
        pcVar20[0xd] = 'a';
        pcVar20[0xe] = ' ';
        pcVar20[0xf] = 't';
        *(undefined8 *)(pcVar20 + 0x10) = uVar33;
        pcVar20[0] = '-';
        pcVar20[1] = '-';
        pcVar20[2] = '-';
        pcVar20[3] = '-';
        pcVar20[4] = '-';
        pcVar20[5] = '-';
        pcVar20[6] = ' ';
        pcVar20[7] = 'r';
        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + iVar7;
      }
    }
    else {
      iVar6 = enter_factory_mode();
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"failed to enter factory mode,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:failed to enter factory mode,ret=%d\n\n";
LAB_0012a518:
        _printk(puVar15,"ft5452_rawdata_test",iVar6);
        goto LAB_0012a528;
      }
      iVar6 = mapping_switch(0);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"switch mapping fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:switch mapping fail,ret=%d\n\n";
        goto LAB_0012a518;
      }
      iVar6 = fts_test_read_reg(0x16,local_78);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read normalize fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read normalize fail,ret=%d\n\n";
        goto LAB_0012a518;
      }
      iVar6 = fts_test_read_reg(10,&local_7c);
      if (iVar6 != 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read 0x0A fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read 0x0A fail,ret=%d\n\n";
        goto LAB_0012a518;
      }
      iVar6 = fts_test_read_reg(0xfb,local_74);
      if (iVar6 != 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read 0xFB error,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read 0xFB error,ret=%d\n\n";
        goto LAB_0012a518;
      }
      if ((local_78[0] == '\x01') || (iVar6 = fts_test_write_reg(0x16,1), -1 < iVar6)) {
        iVar6 = fts_test_write_reg(10,0x81);
        if (iVar6 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "set frequecy fail,ret=%d\n",iVar6);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:set frequecy fail,ret=%d\n\n";
          goto LAB_0012c3dc;
        }
        iVar6 = fts_test_write_reg(0xfb,1);
        if (iVar6 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "set fir fail,ret=%d\n",iVar6);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:set fir fail,ret=%d\n\n";
          goto LAB_0012c3dc;
        }
        get_rawdata(uVar41);
        get_rawdata(uVar41);
        iVar6 = get_rawdata(uVar41);
        if (iVar6 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "get rawdata fail,ret=%d\n",iVar6);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:get rawdata fail,ret=%d\n\n";
          goto LAB_0012c3dc;
        }
        show_data(uVar41,0);
        uVar43 = compare_array(uVar41,*(undefined8 *)(lVar4 + 0x1b0),*(undefined8 *)(lVar4 + 0x1b8),
                               0);
        uVar43 = uVar43 & 0xffffffff;
      }
      else {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"write normalize fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:write normalize fail,ret=%d\n\n";
LAB_0012c3dc:
        _printk(puVar15,"ft5452_rawdata_test",iVar6);
        uVar43 = 0;
      }
      iVar6 = fts_test_write_reg(0x16,local_78[0]);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"restore normalize fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:restore normalize fail,ret=%d\n\n","ft5452_rawdata_test",iVar6);
      }
      iVar6 = fts_test_write_reg(10,(undefined1)local_7c);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"restore 0x0A fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:restore 0x0A fail,ret=%d\n\n","ft5452_rawdata_test",iVar6);
      }
      iVar6 = fts_test_write_reg(0xfb,local_74[0]);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"restore 0xFB fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:restore 0xFB fail,ret=%d\n\n","ft5452_rawdata_test",iVar6);
      }
      lVar25 = fts_ftest;
      if ((uVar43 & 1) == 0) goto LAB_0012a528;
      if (*(long *)(fts_ftest + 0xad8) != 0) {
        iVar5 = 1;
        pcVar20 = (char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0));
        iVar7 = 0x19;
        uVar33._0_1_ = 'e';
        uVar33._1_1_ = 's';
        uVar33._2_1_ = 't';
        uVar33._3_1_ = ' ';
        uVar33._4_1_ = 'P';
        uVar33._5_1_ = 'A';
        uVar33._6_1_ = 'S';
        uVar33._7_1_ = 'S';
        pcVar20[0x18] = '\n';
        pcVar20[0x19] = '\0';
        goto LAB_0012a55c;
      }
      iVar5 = 1;
    }
    fts_test_save_data("Rawdata Test",7,uVar41,0,0,0,iVar5);
    _printk("[FTS_TS][TEST]%s: Exit(%d)\n","ft5452_rawdata_test",0x2ad);
    if ((iVar5 != 0) && (-1 < iVar6)) goto LAB_0012a5b4;
    xiaomi_touch_mievent_report_int(0x365c0bd1,0,"TpOpenTestFail","focal",(long)iVar6);
    bVar40 = 0;
    bVar45 = *(byte *)(lVar4 + 0x2c0);
    lVar25 = fts_ftest;
  }
  fts_ftest = lVar25;
  if ((bVar45 >> 1 & 1) != 0) {
    local_7c = local_7c & 0xffffff00;
    local_74[0] = 0;
    local_78[0] = '\0';
    _printk("[FTS_TS][TEST]%s: Enter\n","ft5452_uniformity_test");
    lVar42 = fts_ftest;
    if (*(long *)(fts_ftest + 0xad8) != 0) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "\n============ Test Item: rawdata unfiormity test\n",0x32);
      *(int *)(lVar42 + 0xae0) = *(int *)(lVar42 + 0xae0) + 0x31;
    }
    memset(*(void **)(lVar4 + 0x90),0,(long)*(int *)(lVar4 + 0x98));
    lVar42 = fts_ftest;
    if (((*(long *)(lVar25 + 0x1d0) == 0) || (*(long *)(lVar25 + 0x1e0) == 0)) ||
       (*(long *)(lVar4 + 0xa0) == 0)) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "tx/rx_lmax/node_valid is null\n",0x1f);
        *(int *)(lVar42 + 0xae0) = *(int *)(lVar42 + 0xae0) + 0x1e;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:tx/rx_lmax/node_valid is null\n\n","ft5452_uniformity_test");
      lVar42 = 0;
      iVar6 = -0x16;
LAB_0012a6ec:
      lVar25 = fts_ftest;
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "uniformity test is NG\n",0x17);
        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x16;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:uniformity test is NG\n\n","ft5452_uniformity_test");
      uVar41 = 0;
      bVar45 = 1;
    }
    else {
      iVar7 = *(int *)(lVar4 + 0xc);
      uVar9 = *(uint *)(lVar4 + 0x10);
      uVar43 = (ulong)uVar9;
      lVar29 = *(long *)(lVar4 + 0x90);
      iVar6 = enter_factory_mode();
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"failed to enter factory mode,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:failed to enter factory mode,ret=%d\n\n","ft5452_uniformity_test",iVar6);
        lVar42 = 0;
        goto LAB_0012a6ec;
      }
      lVar42 = fts_malloc(-(ulong)((*(uint *)(lVar4 + 0x14) & 0x7fffffff) >> 0x1e) &
                          0xfffffffc00000000 | (ulong)(*(uint *)(lVar4 + 0x14) << 1) << 2);
      lVar19 = fts_ftest;
      if (lVar42 == 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"rawdata_linearity buffer malloc fail",0x25);
          *(int *)(lVar19 + 0xae0) = *(int *)(lVar19 + 0xae0) + 0x24;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:rawdata_linearity buffer malloc fail\n","ft5452_uniformity_test");
        lVar42 = 0;
        iVar6 = -0xc;
        goto LAB_0012a6ec;
      }
      iVar6 = mapping_switch(0);
      if (iVar6 != 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"failed to switch_to_mapping,ret=%d",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:failed to switch_to_mapping,ret=%d\n";
LAB_0012b58c:
        _printk(puVar15,"ft5452_uniformity_test",iVar6);
        goto LAB_0012a6ec;
      }
      iVar6 = fts_test_read_reg(0x16,local_78);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read normalize fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read normalize fail,ret=%d\n\n";
        goto LAB_0012b58c;
      }
      iVar6 = fts_test_read_reg(10,&local_7c);
      if (iVar6 != 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read 0x0A fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read 0x0A fail,ret=%d\n\n";
        goto LAB_0012b58c;
      }
      iVar6 = fts_test_read_reg(0xfb,local_74);
      if (iVar6 != 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read 0xFB error,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read 0xFB error,ret=%d\n\n";
        goto LAB_0012b58c;
      }
      if ((local_78[0] == '\x01') || (iVar6 = fts_test_write_reg(0x16,1), -1 < iVar6)) {
        iVar6 = fts_test_write_reg(10,0x81);
        if (iVar6 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "set frequecy fail,ret=%d\n",iVar6);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:set frequecy fail,ret=%d\n\n";
          goto LAB_0012ca18;
        }
        msleep(10);
        iVar6 = fts_test_write_reg(0xfb,1);
        if (iVar6 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "set fir fail,ret=%d\n",iVar6);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:set fir fail,ret=%d\n\n";
          goto LAB_0012ca18;
        }
        msleep(10);
        get_rawdata(lVar29);
        get_rawdata(lVar29);
        iVar6 = get_rawdata(lVar29);
        if (iVar6 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "get rawdata fail,ret=%d\n",iVar6);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:get rawdata fail,ret=%d\n\n";
          goto LAB_0012ca18;
        }
        uVar10 = print_buffer(lVar29,*(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x10));
        lVar19 = fts_ftest;
        if (*(int *)(lVar25 + 0xe8) == 0) {
          iVar6 = 0;
          uVar11 = 1;
          uVar27 = extraout_x17;
        }
        else {
          if (*(long *)(fts_ftest + 0xad8) == 0) {
            if (0 < iVar7) goto LAB_0012cf9c;
LAB_0012d0bc:
            lVar26 = *(long *)(lVar19 + 0xad8);
          }
          else {
            builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                    (long)*(int *)(fts_ftest + 0xae0)),"Check Tx Linearity\n",0x14);
            *(int *)(lVar19 + 0xae0) = *(int *)(lVar19 + 0xae0) + 0x13;
            if (iVar7 < 1) goto LAB_0012d0bc;
LAB_0012cf9c:
            iVar6 = 0;
            uVar10 = 1;
            do {
              if (1 < (int)uVar9) {
                lVar19 = uVar43 - 1;
                uVar11 = uVar10;
                do {
                  uVar27 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2;
                  iVar5 = uVar11 - 1;
                  uVar11 = uVar11 + 1;
                  iVar8 = *(int *)(lVar29 + uVar27);
                  iVar12 = *(int *)(lVar29 + (long)iVar5 * 4);
                  iVar13 = iVar8 - iVar12;
                  iVar5 = -iVar13;
                  if (-1 < iVar13) {
                    iVar5 = iVar13;
                  }
                  if (iVar13 == 0 || iVar8 < iVar12) {
                    iVar8 = iVar12;
                  }
                  if (iVar8 == 0) {
                    iVar8 = 1;
                  }
                  lVar19 = lVar19 + -1;
                  iVar12 = 0;
                  if (iVar8 != 0) {
                    iVar12 = (iVar5 * 100) / iVar8;
                  }
                  *(int *)(lVar42 + uVar27) = iVar12;
                } while (lVar19 != 0);
              }
              iVar6 = iVar6 + 1;
              uVar10 = uVar10 + uVar9;
            } while (iVar6 != iVar7);
            lVar26 = *(long *)(fts_ftest + 0xad8);
            lVar19 = fts_ftest;
          }
          if (lVar26 != 0) {
            builtin_strncpy((char *)(lVar26 + *(int *)(lVar19 + 0xae0))," Tx Linearity:\n",0x10);
            *(int *)(lVar19 + 0xae0) = *(int *)(lVar19 + 0xae0) + 0xf;
          }
          show_data(lVar42,0);
          if (*(long *)(fts_ftest + 0xad8) != 0) {
            *(undefined2 *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)) = 10;
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + 1;
          }
          uVar10 = compare_array(lVar42,*(undefined8 *)(lVar25 + 0x1d8),
                                 *(undefined8 *)(lVar25 + 0x1d0),0);
          iVar6 = *(int *)(lVar4 + 0x14);
          uVar11 = uVar10 & 1;
          uVar27 = extraout_x17_00;
        }
        lVar19 = fts_ftest;
        if (*(int *)(lVar25 + 0xec) == 0) {
          uVar9 = 1;
        }
        else {
          if (*(long *)(fts_ftest + 0xad8) != 0) {
            builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                    (long)*(int *)(fts_ftest + 0xae0)),"Check Rx Linearity\n",0x14);
            *(int *)(lVar19 + 0xae0) = *(int *)(lVar19 + 0xae0) + 0x13;
          }
          lVar26 = lVar42 + (long)iVar6 * 4;
          if (1 < iVar7) {
            lVar19 = 0;
            iVar6 = 1;
            do {
              if (0 < (int)uVar9) {
                uVar27 = 0;
                do {
                  iVar5 = (int)uVar27;
                  uVar10 = uVar9 + (int)lVar19 + iVar5;
                  uVar44 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2;
                  uVar27 = uVar27 + 1;
                  iVar12 = *(int *)(lVar29 + (long)((int)lVar19 + iVar5) * 4);
                  iVar8 = *(int *)(lVar29 + uVar44);
                  iVar13 = iVar8 - iVar12;
                  iVar5 = -iVar13;
                  if (-1 < iVar13) {
                    iVar5 = iVar13;
                  }
                  if (iVar13 == 0 || iVar8 < iVar12) {
                    iVar8 = iVar12;
                  }
                  if (iVar8 == 0) {
                    iVar8 = 1;
                  }
                  iVar12 = 0;
                  if (iVar8 != 0) {
                    iVar12 = (iVar5 * 100) / iVar8;
                  }
                  *(int *)(lVar26 + uVar44) = iVar12;
                } while (uVar43 != uVar27);
              }
              iVar6 = iVar6 + 1;
              lVar19 = lVar19 + uVar43;
            } while (iVar6 != iVar7);
            lVar19 = fts_ftest;
          }
          if (*(long *)(lVar19 + 0xad8) != 0) {
            builtin_strncpy((char *)(*(long *)(lVar19 + 0xad8) + (long)*(int *)(lVar19 + 0xae0)),
                            "Rx Linearity:\n",0xf);
            *(int *)(lVar19 + 0xae0) = *(int *)(lVar19 + 0xae0) + 0xe;
          }
          show_data(lVar26,0);
          if (*(long *)(fts_ftest + 0xad8) != 0) {
            *(undefined2 *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)) = 10;
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + 1;
          }
          uVar10 = compare_array(lVar26,*(undefined8 *)(lVar25 + 0x1e8),
                                 *(undefined8 *)(lVar25 + 0x1e0),0);
          uVar9 = uVar10 & 1;
          uVar27 = extraout_x17_01;
        }
        lVar19 = fts_ftest;
        if (*(int *)(lVar25 + 0xf0) == 0) {
LAB_0012d4f0:
          bVar45 = 0;
        }
        else {
          if (*(long *)(fts_ftest + 0xad8) != 0) {
            builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                    (long)*(int *)(fts_ftest + 0xae0)),"Check Min/Max\n",0xf);
            *(int *)(lVar19 + 0xae0) = *(int *)(lVar19 + 0xae0) + 0xe;
          }
          uVar38 = *(uint *)(lVar4 + 0x14);
          uVar43 = (ulong)uVar38;
          uVar23 = 0xfffe7960;
          uVar21 = 100000;
          if (0 < (int)uVar38) {
            if (uVar38 == 1) {
              uVar22 = 0;
LAB_0012d4fc:
              lVar26 = uVar43 - uVar22;
              puVar31 = (uint *)(lVar29 + uVar22 * 4);
              piVar14 = (int *)(*(long *)(lVar4 + 0xa0) + uVar22 * 4);
              do {
                if (*piVar14 != 0) {
                  uVar10 = *puVar31;
                  if ((int)uVar10 <= (int)uVar21) {
                    uVar21 = uVar10;
                  }
                  if ((int)uVar23 <= (int)uVar10) {
                    uVar23 = uVar10;
                  }
                }
                lVar26 = lVar26 + -1;
                puVar31 = puVar31 + 1;
                piVar14 = piVar14 + 1;
              } while (lVar26 != 0);
            }
            else {
              uVar22 = uVar43 & 0xfffffffe;
              piVar14 = (int *)(*(long *)(lVar4 + 0xa0) + 4);
              puVar31 = (uint *)(lVar29 + 4);
              uVar36 = 0xfffe7960;
              uVar38 = 100000;
              uVar44 = uVar22;
              do {
                iVar6 = piVar14[-1];
                if (iVar6 != 0) {
                  uVar27 = (ulong)puVar31[-1];
                }
                iVar7 = *piVar14;
                if (iVar7 != 0) {
                  uVar10 = *puVar31;
                }
                piVar14 = piVar14 + 2;
                uVar39 = (uint)uVar27;
                if (iVar6 != 0 && (int)uVar39 <= (int)uVar21) {
                  uVar21 = uVar39;
                }
                if (iVar7 != 0 && (int)uVar10 <= (int)uVar38) {
                  uVar38 = uVar10;
                }
                if (iVar6 != 0 && (int)uVar23 <= (int)uVar39) {
                  uVar23 = uVar39;
                }
                if (iVar7 != 0 && (int)uVar36 <= (int)uVar10) {
                  uVar36 = uVar10;
                }
                puVar31 = puVar31 + 2;
                uVar44 = uVar44 - 2;
              } while (uVar44 != 0);
              if ((int)uVar38 <= (int)uVar21) {
                uVar21 = uVar38;
              }
              if ((int)uVar23 <= (int)uVar36) {
                uVar23 = uVar36;
              }
              if (uVar22 != uVar43) goto LAB_0012d4fc;
            }
            if (uVar23 == 0) {
              uVar23 = 1;
            }
          }
          uVar10 = -uVar21;
          if (-1 < (int)uVar21) {
            uVar10 = uVar21;
          }
          uVar38 = -uVar23;
          if (-1 < (int)uVar23) {
            uVar38 = uVar23;
          }
          iVar6 = 0;
          if (uVar38 != 0) {
            iVar6 = (int)(uVar10 * 100) / (int)uVar38;
          }
          if (*(long *)(lVar19 + 0xad8) != 0) {
            iVar7 = snprintf((char *)(*(long *)(lVar19 + 0xad8) + (long)*(int *)(lVar19 + 0xae0)),
                             0x64000,"min:%d, max:%d, get value of min/max:%d\n",uVar21,uVar23,iVar6
                            );
            lVar19 = fts_ftest;
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          iVar7 = *(int *)(lVar25 + 0xfc);
          if (iVar7 <= iVar6) goto LAB_0012d4f0;
          if ((*(long *)(lVar19 + 0xad8) != 0) && (*(int *)(lVar19 + 0xae0) < 0x64000)) {
            iVar6 = snprintf((char *)(*(long *)(lVar19 + 0xad8) + (long)*(int *)(lVar19 + 0xae0)),
                             0x64000,"min_max out of range, set value: %d\n",iVar7);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
            iVar7 = *(int *)(lVar25 + 0xfc);
          }
          _printk("<3>[FTS_TS/E][TEST]%s:min_max out of range, set value: %d\n\n","ft5452_uniformity_test",iVar7);
          bVar45 = 1;
        }
      }
      else {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"write normalize fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:write normalize fail,ret=%d\n\n";
LAB_0012ca18:
        _printk(puVar15,"ft5452_uniformity_test",iVar6);
        uVar9 = 0;
        uVar11 = 0;
        bVar45 = 1;
      }
      iVar6 = fts_test_write_reg(0x16,local_78[0]);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"restore normalize fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:restore normalize fail,ret=%d\n\n","ft5452_uniformity_test",iVar6);
      }
      iVar6 = fts_test_write_reg(10,(undefined1)local_7c);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"restore 0x0A fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:restore 0x0A fail,ret=%d\n\n","ft5452_uniformity_test",iVar6);
      }
      iVar6 = fts_test_write_reg(0xfb,local_74[0]);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"restore 0xFB fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:restore 0xFB fail,ret=%d\n\n","ft5452_uniformity_test",iVar6);
      }
      lVar25 = fts_ftest;
      if ((bool)(bVar45 | (uVar11 == 0 || uVar9 == 0))) goto LAB_0012a6ec;
      if (*(long *)(fts_ftest + 0xad8) == 0) {
        bVar45 = 0;
        uVar41 = 1;
      }
      else {
        bVar45 = 0;
        uVar41 = 1;
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "uniformity test is OK\n",0x17);
        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x16;
      }
    }
    fts_test_save_data("Rawdata Uniformity Test",0x10,lVar42,*(int *)(lVar4 + 0x14) << 1,0,0,uVar41)
    ;
    if (lVar42 != 0) {
      kfree(lVar42);
    }
    _printk("[FTS_TS][TEST]%s: Exit(%d)\n","ft5452_uniformity_test",0x38f);
    if (!(bool)(-1 < iVar6 & (bVar45 ^ 1))) {
      xiaomi_touch_mievent_report_int(0x365c0bd1,0,"TpOpenTestFail","focal",(long)iVar6);
      bVar40 = 0;
    }
  }
  bVar45 = *(byte *)(lVar4 + 0x2c0);
  if ((bVar45 >> 2 & 1) != 0) {
    local_7c = local_7c & 0xffffff00;
    local_74[0] = 0;
    _printk("[FTS_TS][TEST]%s: Enter\n","ft5452_scap_cb_test");
    lVar25 = fts_ftest;
    if (*(long *)(fts_ftest + 0xad8) != 0) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "\n============ Test Item: Scap CB Test\n",0x27);
      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x26;
    }
    memset(*(void **)(lVar4 + 0x90),0,(long)*(int *)(lVar4 + 0x98));
    lVar25 = fts_ftest;
    iVar6 = *(int *)(lVar4 + 0x98);
    lVar42 = *(long *)(lVar4 + 0x90);
    iVar7 = *(int *)(lVar4 + 0x28) * 2;
    if (iVar6 < iVar7) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"scap cb num(%d) > buffer length(%d)",iVar7,iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
        iVar6 = *(int *)(lVar4 + 0x98);
        iVar7 = *(int *)(lVar4 + 0x28) << 1;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:scap cb num(%d) > buffer length(%d)\n","ft5452_scap_cb_test",iVar7,iVar6);
LAB_0012a944:
      iVar5 = 0;
      iVar6 = -0x16;
LAB_0012a94c:
      lVar25 = fts_ftest;
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "\n------ scap cb test NG\n",0x19);
        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x18;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:\n------ scap cb test NG\n\n","ft5452_scap_cb_test");
      uVar41 = 0;
      bVar45 = 1;
    }
    else {
      if ((((*(long *)(lVar4 + 0x200) == 0) || (*(long *)(lVar4 + 0x208) == 0)) ||
          (*(long *)(lVar4 + 0x1f0) == 0)) || (*(long *)(lVar4 + 0x1f8) == 0)) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"scap_cb_on/off_min/max is null\n",0x20);
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1f;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:scap_cb_on/off_min/max is null\n\n","ft5452_scap_cb_test");
        goto LAB_0012a944;
      }
      iVar6 = enter_factory_mode();
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"enter factory mode fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:enter factory mode fail,ret=%d\n\n";
LAB_0012bcdc:
        _printk(puVar15,"ft5452_scap_cb_test",iVar6);
        iVar5 = 0;
        goto LAB_0012a94c;
      }
      iVar6 = mapping_switch(1);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"switch no-mapping fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:switch no-mapping fail,ret=%d\n\n";
        goto LAB_0012bcdc;
      }
      iVar6 = fts_test_read_reg(9,&local_7c);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read water_channel_sel fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read water_channel_sel fail,ret=%d\n\n";
        goto LAB_0012bcdc;
      }
      iVar6 = fts_test_read_reg(0x44,local_74);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read sc_mode fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read sc_mode fail,ret=%d\n\n";
        goto LAB_0012bcdc;
      }
      uVar9 = 1;
      uVar43 = get_fw_wp((undefined1)local_7c,1);
      iVar5 = 0;
      if ((*(int *)(lVar4 + 0x114) == 0) || ((uVar43 & 1) == 0)) {
LAB_0012c708:
        uVar43 = get_fw_wp((undefined1)local_7c,0);
        uVar10 = 0;
        if ((*(int *)(lVar4 + 0x108) != 0) && ((uVar43 & 1) != 0)) {
          lVar25 = lVar42 + (long)iVar5 * 4;
          iVar6 = get_cb_mc_sc(0,iVar7,lVar25,1);
          lVar29 = fts_ftest;
          lVar19 = *(long *)(fts_ftest + 0xad8);
          if (iVar6 < 0) {
            if ((lVar19 != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              iVar7 = snprintf((char *)(lVar19 + *(int *)(fts_ftest + 0xae0)),0x64000,
                               "read sc_cb fail,ret=%d\n",iVar6);
              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
            }
            _printk("<3>[FTS_TS/E][TEST]%s:read sc_cb fail,ret=%d\n\n","ft5452_scap_cb_test",iVar6);
            uVar10 = 1;
          }
          else {
            if (lVar19 != 0) {
              builtin_strncpy((char *)(lVar19 + *(int *)(fts_ftest + 0xae0)),
                              "scap_cb in waterproof off mode:\n",0x21);
              *(int *)(lVar29 + 0xae0) = *(int *)(lVar29 + 0xae0) + 0x20;
            }
            show_data_mc_sc(lVar25);
            uVar10 = get_fw_wp((undefined1)local_7c,0x66);
            uVar11 = get_fw_wp((undefined1)local_7c,0x67);
            uVar10 = compare_mc_sc(uVar10 & 1,uVar11 & 1,lVar25,*(undefined8 *)(lVar4 + 0x1f0),
                                   *(undefined8 *)(lVar4 + 0x1f8));
            uVar10 = uVar10 ^ 1;
            iVar5 = *(int *)(lVar4 + 0x28) + iVar5;
          }
        }
      }
      else {
        iVar6 = get_cb_mc_sc(1,iVar7,lVar42,1);
        lVar25 = fts_ftest;
        lVar29 = *(long *)(fts_ftest + 0xad8);
        if (-1 < iVar6) {
          if (lVar29 != 0) {
            builtin_strncpy((char *)(lVar29 + *(int *)(fts_ftest + 0xae0)),
                            "scap_cb in waterproof on mode:\n",0x20);
            *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1f;
          }
          show_data_mc_sc(lVar42);
          uVar9 = get_fw_wp((undefined1)local_7c,100);
          uVar10 = get_fw_wp((undefined1)local_7c,0x65);
          uVar9 = compare_mc_sc(uVar9 & 1,uVar10 & 1,lVar42,*(undefined8 *)(lVar4 + 0x200),
                                *(undefined8 *)(lVar4 + 0x208));
          iVar5 = *(int *)(lVar4 + 0x28);
          uVar9 = uVar9 & 1;
          goto LAB_0012c708;
        }
        if ((lVar29 != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(lVar29 + *(int *)(fts_ftest + 0xae0)),0x64000,
                           "read sc_cb fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:read sc_cb fail,ret=%d\n\n","ft5452_scap_cb_test",iVar6);
        iVar5 = 0;
        uVar9 = 0;
        uVar10 = 1;
      }
      iVar6 = fts_test_write_reg(0x44,local_74[0]);
      if (iVar6 != 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"write sc mode fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:write sc mode fail,ret=%d\n\n","ft5452_scap_cb_test",iVar6);
      }
      lVar25 = fts_ftest;
      if (uVar9 == 0 || (uVar10 & 1) != 0) goto LAB_0012a94c;
      if (*(long *)(fts_ftest + 0xad8) == 0) {
        bVar45 = 0;
        uVar41 = 1;
      }
      else {
        bVar45 = 0;
        uVar41 = 1;
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "\n------ scap cb test PASS\n",0x1b);
        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1a;
      }
    }
    fts_test_save_data("SCAP CB Test",9,lVar42,iVar5,1,0,uVar41);
    _printk("[FTS_TS][TEST]%s: Exit(%d)\n","ft5452_scap_cb_test",0x41a);
    bVar40 = bVar40 & -1 < iVar6 & (bVar45 ^ 0xff);
    bVar45 = *(byte *)(lVar4 + 0x2c0);
  }
  if ((bVar45 >> 3 & 1) != 0) {
    local_7c = local_7c & 0xffffff00;
    _printk("[FTS_TS][TEST]%s: Enter\n","ft5452_scap_rawdata_test");
    lVar25 = fts_ftest;
    if (*(long *)(fts_ftest + 0xad8) != 0) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "\n============ Test Item: Scap Rawdata Test\n",0x2c);
      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x2b;
    }
    memset(*(void **)(lVar4 + 0x90),0,(long)*(int *)(lVar4 + 0x98));
    lVar25 = fts_ftest;
    iVar6 = *(int *)(lVar4 + 0x98);
    lVar42 = *(long *)(lVar4 + 0x90);
    iVar7 = *(int *)(lVar4 + 0x28) * 2;
    if (iVar6 < iVar7) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"scap rawdata num(%d) > buffer length(%d)",iVar7,iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
        iVar6 = *(int *)(lVar4 + 0x98);
        iVar7 = *(int *)(lVar4 + 0x28) << 1;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:scap rawdata num(%d) > buffer length(%d)\n","ft5452_scap_rawdata_test",iVar7,iVar6);
LAB_0012ab70:
      iVar7 = 0;
      iVar6 = -0x16;
LAB_0012ab78:
      lVar25 = fts_ftest;
      if (*(long *)(fts_ftest + 0xad8) == 0) {
        bVar24 = false;
      }
      else {
        bVar24 = false;
        iVar5 = 0x1d;
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "\n------ scap rawdata test NG\n",0x1e);
LAB_0012abbc:
        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + iVar5;
      }
    }
    else {
      if ((((*(long *)(lVar4 + 0x240) == 0) || (*(long *)(lVar4 + 0x248) == 0)) ||
          (*(long *)(lVar4 + 0x230) == 0)) || (*(long *)(lVar4 + 0x238) == 0)) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"scap_rawdata_on/off_min/max is null\n",0x25);
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x24;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:scap_rawdata_on/off_min/max is null\n\n","ft5452_scap_rawdata_test");
        goto LAB_0012ab70;
      }
      iVar6 = enter_factory_mode();
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"enter factory mode fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:enter factory mode fail,ret=%d\n\n";
LAB_0012b960:
        _printk(puVar15,"ft5452_scap_rawdata_test",iVar6);
        iVar7 = 0;
        goto LAB_0012ab78;
      }
      iVar6 = mapping_switch(1);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"switch no-mapping fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:switch no-mapping fail,ret=%d\n\n";
        goto LAB_0012b960;
      }
      iVar6 = fts_test_read_reg(9,&local_7c);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"read water_channel_sel fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:read water_channel_sel fail,ret=%d\n\n";
        goto LAB_0012b960;
      }
      iVar6 = start_scan();
      lVar25 = fts_ftest;
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"scan scap rawdata fail\n",0x18);
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x17;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:scan scap rawdata fail\n\n";
LAB_0012bd48:
        _printk(puVar15,"ft5452_scap_rawdata_test");
        iVar7 = 0;
        goto LAB_0012ab78;
      }
      uVar43 = get_fw_wp((undefined1)local_7c,1);
      iVar7 = 0;
      uVar9 = 0;
      if ((*(int *)(lVar4 + 300) != 0) && ((uVar43 & 1) != 0)) {
        iVar6 = get_rawdata_mc_sc(1,lVar42);
        lVar25 = fts_ftest;
        lVar29 = *(long *)(fts_ftest + 0xad8);
        if (iVar6 < 0) {
          if ((lVar29 != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            builtin_strncpy((char *)(lVar29 + *(int *)(fts_ftest + 0xae0)),
                            "get scap(WP_ON) rawdata fail\n",0x1e);
            *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1d;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:get scap(WP_ON) rawdata fail\n\n";
          goto LAB_0012bd48;
        }
        if (lVar29 != 0) {
          builtin_strncpy((char *)(lVar29 + *(int *)(fts_ftest + 0xae0)),
                          "scap_rawdata in waterproof on mode:\n",0x25);
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x24;
        }
        show_data_mc_sc(lVar42);
        uVar9 = get_fw_wp((undefined1)local_7c,100);
        uVar10 = get_fw_wp((undefined1)local_7c,0x65);
        uVar9 = compare_mc_sc(uVar9 & 1,uVar10 & 1,lVar42,*(undefined8 *)(lVar4 + 0x240),
                              *(undefined8 *)(lVar4 + 0x248));
        iVar7 = *(int *)(lVar4 + 0x28);
        uVar9 = uVar9 ^ 1;
      }
      uVar43 = get_fw_wp((undefined1)local_7c,0);
      uVar10 = 0;
      if ((*(int *)(lVar4 + 0x120) != 0) && ((uVar43 & 1) != 0)) {
        lVar25 = lVar42 + (long)iVar7 * 4;
        iVar6 = get_rawdata_mc_sc(0,lVar25);
        lVar29 = fts_ftest;
        lVar19 = *(long *)(fts_ftest + 0xad8);
        if (iVar6 < 0) {
          if ((lVar19 != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            builtin_strncpy((char *)(lVar19 + *(int *)(fts_ftest + 0xae0)),
                            "get scap(WP_OFF) rawdata fail\n",0x1f);
            *(int *)(lVar29 + 0xae0) = *(int *)(lVar29 + 0xae0) + 0x1e;
          }
          _printk("<3>[FTS_TS/E][TEST]%s:get scap(WP_OFF) rawdata fail\n\n","ft5452_scap_rawdata_test");
          goto LAB_0012ab78;
        }
        if (lVar19 != 0) {
          builtin_strncpy((char *)(lVar19 + *(int *)(fts_ftest + 0xae0)),
                          "scap_rawdata in waterproof off mode:\n",0x26);
          *(int *)(lVar29 + 0xae0) = *(int *)(lVar29 + 0xae0) + 0x25;
        }
        show_data_mc_sc(lVar25);
        uVar10 = get_fw_wp((undefined1)local_7c,0x66);
        uVar11 = get_fw_wp((undefined1)local_7c,0x67);
        uVar10 = compare_mc_sc(uVar10 & 1,uVar11 & 1,lVar25,*(undefined8 *)(lVar4 + 0x230),
                               *(undefined8 *)(lVar4 + 0x238));
        uVar10 = uVar10 ^ 1;
        iVar7 = *(int *)(lVar4 + 0x28) + iVar7;
      }
      lVar25 = fts_ftest;
      if (((uVar9 | uVar10) & 1) != 0) goto LAB_0012ab78;
      if (*(long *)(fts_ftest + 0xad8) != 0) {
        bVar24 = true;
        iVar5 = 0x1f;
        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                        "\n------ scap rawdata test PASS\n",0x20);
        goto LAB_0012abbc;
      }
      bVar24 = true;
    }
    fts_test_save_data("SCAP Rawdata Test",10,lVar42,iVar7,1,0);
    _printk("[FTS_TS][TEST]%s: Exit(%d)\n","ft5452_scap_rawdata_test",0x49a);
    bVar40 = (bVar24 && -1 < iVar6) & bVar40;
    bVar45 = *(byte *)(lVar4 + 0x2c0);
  }
  if ((bVar45 >> 4 & 1) != 0) {
    local_7c = 0;
    local_74[0] = 0;
    _printk("[FTS_TS][TEST]%s: Enter\n","ft5452_short_test");
    lVar25 = fts_ftest;
    if (*(long *)(fts_ftest + 0xad8) != 0) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "\n============ Test Item: Short Test\n",0x25);
      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x24;
    }
    iVar6 = *(int *)(lVar4 + 0x20);
    iVar7 = *(int *)(lVar4 + 0x24);
    iVar5 = enter_factory_mode();
    if (iVar5 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"enter factory mode fail,ret=%d\n",iVar5);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
      }
      puVar15 = "<3>[FTS_TS/E][TEST]%s:enter factory mode fail,ret=%d\n\n";
LAB_0012ad38:
      _printk(puVar15,"ft5452_short_test",iVar5);
LAB_0012ad48:
      lVar25 = *(long *)(fts_ftest + 0xad8);
      lVar42 = fts_ftest;
joined_r0x0012bb08:
      fts_ftest = lVar42;
      if ((lVar25 != 0) && (*(int *)(lVar42 + 0xae0) < 0x64000)) {
        builtin_strncpy((char *)(lVar25 + *(int *)(lVar42 + 0xae0)),"------ short test NG\n",0x16);
        *(int *)(lVar42 + 0xae0) = *(int *)(lVar42 + 0xae0) + 0x15;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:------ short test NG\n\n","ft5452_short_test");
      _printk("[FTS_TS][TEST]%s: Exit(%d)\n","ft5452_short_test",0x502);
    }
    else {
      iVar5 = mapping_switch(1);
      if (iVar5 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"switch no-mapping fail,ret=%d\n",iVar5);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:switch no-mapping fail,ret=%d\n\n";
        goto LAB_0012ad38;
      }
      uVar9 = iVar7 + iVar6;
      piVar14 = (int *)fts_malloc(-(ulong)(uVar9 + 3 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)(uVar9 + 3) << 2);
      lVar25 = fts_ftest;
      if (piVar14 == (int *)0x0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"adc_data buffer malloc fail\n",0x1d);
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1c;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:adc_data buffer malloc fail\n\n","ft5452_short_test");
LAB_0012b090:
        iVar5 = -0xc;
        goto LAB_0012ad48;
      }
      piVar16 = (int *)fts_malloc(-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2);
      lVar25 = fts_ftest;
      if (piVar16 == (int *)0x0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"short_resistance buffer malloc fail\n",0x25);
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x24;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:short_resistance buffer malloc fail\n\n","ft5452_short_test");
        kfree(piVar14);
        goto LAB_0012b090;
      }
      iVar5 = fts_test_read_reg(0x5a,local_74);
      lVar25 = fts_ftest;
      if (iVar5 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0))) {
          bVar24 = false;
          puVar15 = "<3>[FTS_TS/E][TEST]%s:read 5A fails\n\n";
        }
        else {
          bVar24 = false;
          puVar15 = "<3>[FTS_TS/E][TEST]%s:read 5A fails\n\n";
          iVar6 = 0xe;
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"read 5A fails\n",0xf);
LAB_0012bac8:
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + iVar6;
        }
LAB_0012bae0:
        _printk(puVar15,"ft5452_short_test");
      }
      else {
        iVar6 = short_get_adc_data_mc(0,2,&local_7c,4);
        if (iVar6 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                             "failed to get weak short data,ret=%d\n",iVar6);
            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
          }
          _printk("<3>[FTS_TS/E][TEST]%s:failed to get weak short data,ret=%d\n\n","ft5452_short_test",iVar6);
LAB_0012ba74:
          bVar24 = false;
        }
        else {
          uVar9 = local_7c - 0x400;
          iVar5 = *(int *)(fts_ftest + 0x134);
          local_7c = uVar9;
          _printk("[FTS_TS][TEST]%s: Enter\n","short_test_channel_to_all");
          iVar6 = *(int *)(lVar4 + 0x20);
          iVar7 = *(int *)(lVar4 + 0x24);
          iVar8 = fts_test_write_reg(0x5a,1);
          if (iVar8 < 0) {
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                       (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                               "write 5A fails,ret:%d\n",iVar8);
              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
            }
            _printk("<3>[FTS_TS/E][TEST]%s:write 5A fails,ret:%d\n\n","short_test_channel_to_all",iVar8);
LAB_0012b9fc:
            _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_test_channel_to_all",0x58);
            lVar25 = fts_ftest;
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                      (long)*(int *)(fts_ftest + 0xae0)),
                              "short test of channel to all fails\n",0x24);
              *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x23;
            }
            puVar15 = "<3>[FTS_TS/E][TEST]%s:short test of channel to all fails\n\n";
LAB_0012ba68:
            _printk(puVar15,"ft5452_short_test");
            goto LAB_0012ba74;
          }
          uVar10 = iVar7 + iVar6;
          uVar43 = (ulong)uVar10;
          iVar6 = short_get_adc_data_mc(0,uVar10 * 2 + 2,piVar14,1);
          if (iVar6 < 0) {
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                       (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                               "get adc data of ca fails,ret:%d\n",iVar6);
              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
            }
            _printk("<3>[FTS_TS/E][TEST]%s:get adc data of ca fails,ret:%d\n\n","short_test_channel_to_all",iVar6);
            goto LAB_0012b9fc;
          }
          if (0 < (int)uVar10) {
            iVar6 = 0;
            piVar34 = piVar14;
            piVar37 = piVar16;
            do {
              iVar8 = 0x59d - *piVar34;
              iVar7 = iVar5;
              if (0 < iVar8) {
                iVar12 = 0;
                if (iVar8 != 0) {
                  iVar12 = (int)((*piVar34 - uVar9) * 0x6f + 0xab45) / iVar8;
                }
                iVar7 = iVar12 + -3;
                if (iVar12 + -3 < 0) {
                  iVar7 = 3 - iVar12;
                }
              }
              piVar34 = piVar34 + 1;
              if (iVar7 < iVar5) {
                iVar6 = iVar6 + 1;
              }
              uVar43 = uVar43 - 1;
              *piVar37 = iVar7;
              piVar37 = piVar37 + 1;
            } while (uVar43 != 0);
            if (iVar6 < 1) goto LAB_0012c2ac;
            if (*(long *)(fts_ftest + 0xad8) != 0) {
              iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                       (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                               "Offset:%d, Code1:%d\n",uVar9,0x59d);
              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
            }
            print_buffer(piVar14,uVar10,uVar10);
            _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_test_channel_to_all",0x58);
            uVar10 = local_7c;
            lVar25 = fts_ftest;
            _printk("[FTS_TS][TEST]%s: Enter\n","short_test_channel_to_gnd");
            iVar6 = *(int *)(lVar4 + 0x20);
            iVar7 = *(int *)(lVar25 + 0x130);
            iVar5 = *(int *)(lVar25 + 0x134);
            uVar9 = *(int *)(lVar4 + 0x24) + iVar6;
            lVar29 = (long)(int)uVar9;
            lVar42 = fts_malloc(lVar29);
            lVar25 = fts_ftest;
            if (lVar42 != 0) {
              pbVar17 = (byte *)fts_malloc(lVar29);
              lVar25 = fts_ftest;
              if (pbVar17 == (byte *)0x0) {
                if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000))
                {
                  builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                          (long)*(int *)(fts_ftest + 0xae0)),
                                  "min_70k_ch buffer malloc fail\n",0x1f);
                  *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1e;
                }
                _printk("<3>[FTS_TS/E][TEST]%s:min_70k_ch buffer malloc fail\n\n","short_test_channel_to_gnd");
                kfree(lVar42);
                goto LAB_0012c930;
              }
              puVar18 = (undefined1 *)fts_malloc((long)(int)(uVar9 + 1));
              lVar25 = fts_ftest;
              if (puVar18 == (undefined1 *)0x0) {
                if ((*(long *)(fts_ftest + 0xad8) == 0) || (0x63fff < *(int *)(fts_ftest + 0xae0)))
                {
                  local_a8 = (int *)0x0;
                  puVar15 = "<3>[FTS_TS/E][TEST]%s:w_buf buffer malloc fail\n\n";
                }
                else {
                  local_a8 = (int *)0x0;
                  puVar15 = "<3>[FTS_TS/E][TEST]%s:w_buf buffer malloc fail\n\n";
                  builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                          (long)*(int *)(fts_ftest + 0xae0)),
                                  "w_buf buffer malloc fail\n",0x1a);
                  iVar6 = 0x19;
LAB_0012d064:
                  *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + iVar6;
                }
LAB_0012d548:
                _printk(puVar15,"short_test_channel_to_gnd");
                lVar29 = 0;
                iVar5 = -0xc;
              }
              else {
                local_a8 = (int *)fts_malloc();
                lVar25 = fts_ftest;
                if (local_a8 == (int *)0x0) {
                  if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)
                     ) {
                    local_a8 = (int *)0x0;
                    puVar15 = "<3>[FTS_TS/E][TEST]%s:adc_data buffer malloc fail\n\n";
                    iVar6 = 0x1c;
                    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                            (long)*(int *)(fts_ftest + 0xae0)),
                                    "adc_data buffer malloc fail\n",0x1d);
                    goto LAB_0012d064;
                  }
                  local_a8 = (int *)0x0;
                  puVar15 = "<3>[FTS_TS/E][TEST]%s:adc_data buffer malloc fail\n\n";
                  goto LAB_0012d548;
                }
                lVar29 = fts_malloc(lVar29 << 2);
                lVar25 = fts_ftest;
                if (lVar29 == 0) {
                  if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)
                     ) {
                    puVar15 = "<3>[FTS_TS/E][TEST]%s:cg_short_resistance buffer malloc fail\n\n";
                    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                            (long)*(int *)(fts_ftest + 0xae0)),
                                    "cg_short_resistance buffer malloc fail\n",0x28);
                    iVar6 = 0x27;
                    goto LAB_0012d064;
                  }
                  puVar15 = "<3>[FTS_TS/E][TEST]%s:cg_short_resistance buffer malloc fail\n\n";
                  goto LAB_0012d548;
                }
                if ((int)uVar9 < 1) {
LAB_0012e538:
                  iVar5 = 0;
                }
                else {
                  uVar43 = 0;
                  uVar11 = 0;
                  do {
                    *(int *)(lVar29 + uVar43 * 4) = piVar16[uVar43];
                    if (piVar16[uVar43] < iVar5) {
                      *(char *)(lVar42 + (int)uVar11) = (char)uVar43 + '\x01';
                      uVar11 = uVar11 + 1;
                    }
                    uVar43 = uVar43 + 1;
                  } while (uVar9 != uVar43);
                  if ((int)uVar11 < 1) goto LAB_0012e538;
                  *puVar18 = (char)uVar11;
                  uVar43 = 0;
                  do {
                    uVar27 = uVar43 + 1;
                    puVar18[uVar43 + 1] = *(undefined1 *)(lVar42 + uVar43);
                    _printk("[FTS_TS][TEST]%s:cg:%d,\n","short_test_channel_to_gnd",
                            *(undefined1 *)(lVar42 + uVar43));
                    uVar43 = uVar27;
                  } while (uVar11 != uVar27);
                  iVar5 = fts_test_write(0x58,puVar18,uVar11 + 1);
                  if (iVar5 < 0) {
LAB_0012d7e8:
                    if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                       (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                      iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                               (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                       "failed to set error channels,ret:%d\n",iVar5);
                      *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                    }
                    puVar15 = "<3>[FTS_TS/E][TEST]%s:failed to set error channels,ret:%d\n\n";
LAB_0012da68:
                    _printk(puVar15,"short_test_channel_to_gnd",iVar5);
                  }
                  else {
                    iVar5 = fts_test_write_reg(0x5a,1);
                    if (iVar5 < 0) {
LAB_0012d928:
                      if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                         (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                        iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                 (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                         "write 5A fails,ret:%d\n",iVar5);
                        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                      }
                      puVar15 = "<3>[FTS_TS/E][TEST]%s:write 5A fails,ret:%d\n\n";
                      goto LAB_0012da68;
                    }
                    iVar5 = short_get_adc_data_mc(0,uVar11 << 1,local_a8,3);
                    if (iVar5 < 0) {
                      if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                         (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                        iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                 (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                         "get adc data of cg fails,ret:%d\n",iVar5);
                        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                      }
                      puVar15 = "<3>[FTS_TS/E][TEST]%s:get adc data of cg fails,ret:%d\n\n";
                      goto LAB_0012da68;
                    }
                    uVar43 = 0;
                    bVar24 = false;
                    uVar21 = 0;
                    do {
                      iVar5 = local_a8[uVar43];
                      iVar8 = 0x59d - iVar5;
                      if (0 < iVar8) {
                        iVar12 = 0;
                        if (iVar8 != 0) {
                          iVar12 = (int)((iVar5 - uVar10) * 0x6f + 0xab45) / iVar8;
                        }
                        iVar8 = iVar12 + -3;
                        if (iVar12 + -3 < 0) {
                          iVar8 = 3 - iVar12;
                        }
                        if (iVar8 < iVar7) {
                          *(int *)(lVar29 + (ulong)*(byte *)(lVar42 + uVar43) * 4 + -4) = iVar8;
                          piVar14[(ulong)*(byte *)(lVar42 + uVar43) - 1] = iVar5;
                          lVar25 = fts_ftest;
                          if (!bVar24) {
                            if (*(long *)(fts_ftest + 0xad8) != 0) {
                              builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                                      (long)*(int *)(fts_ftest + 0xae0)),
                                              "\nGND Short:\n",0xd);
                              *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0xc;
                            }
                            bVar24 = true;
                          }
                          bVar45 = *(byte *)(lVar42 + uVar43);
                          uVar27 = (ulong)bVar45;
                          if (iVar8 < 0x47) {
                            pbVar17[(int)uVar21] = bVar45;
                            uVar21 = uVar21 + 1;
                          }
                          else {
                            lVar25 = *(long *)(fts_ftest + 0xad8);
                            if (iVar6 < (int)(uint)bVar45) {
                              if (lVar25 != 0) {
                                iVar12 = *(int *)(fts_ftest + 0xae0);
                                pcVar20 = "Rx%d with GND:";
                                uVar27 = (ulong)((uint)bVar45 - iVar6);
                                goto LAB_0012dcbc;
                              }
                            }
                            else if (lVar25 != 0) {
                              iVar12 = *(int *)(fts_ftest + 0xae0);
                              pcVar20 = "Tx%d with GND:";
LAB_0012dcbc:
                              iVar12 = snprintf((char *)(lVar25 + iVar12),0x64000,pcVar20,uVar27);
                              plVar1 = (long *)(fts_ftest + 0xad8);
                              iVar12 = *(int *)(fts_ftest + 0xae0) + iVar12;
                              *(int *)(fts_ftest + 0xae0) = iVar12;
                              if (*plVar1 != 0) {
                                iVar5 = snprintf((char *)(*plVar1 + (long)iVar12),0x64000,
                                                 "%d(K), ADC:%d\n",iVar8,iVar5);
                                *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar5;
                              }
                            }
                          }
                        }
                      }
                      uVar43 = uVar43 + 1;
                    } while (uVar11 != uVar43);
                    if (0 < (int)uVar21) {
                      memset(local_a8,0,(long)(int)(uVar9 + 1) << 2);
                      uVar43 = (ulong)uVar21;
                      *puVar18 = (char)uVar21;
                      uVar27 = 0;
                      do {
                        uVar44 = uVar27 + 1;
                        puVar18[uVar27 + 1] = pbVar17[uVar27];
                        _printk("[FTS_TS][TEST]%s:cg:%d,\n","short_test_channel_to_gnd",
                                pbVar17[uVar27]);
                        uVar27 = uVar44;
                      } while (uVar43 != uVar44);
                      iVar5 = fts_test_write(0x58,puVar18,uVar21 + 1);
                      if (iVar5 < 0) goto LAB_0012d7e8;
                      iVar5 = fts_test_write_reg(0x5a,0);
                      if (iVar5 < 0) goto LAB_0012d928;
                      iVar5 = short_get_adc_data_mc(0,uVar21 << 1,local_a8,3);
                      if (iVar5 < 0) {
                        if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                           (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                          iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                   (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                           "get adc data of cg(70K) fails,ret:%d\n",iVar5);
                          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                        }
                        puVar15 = "<3>[FTS_TS/E][TEST]%s:get adc data of cg(70K) fails,ret:%d\n\n";
                        goto LAB_0012da68;
                      }
                      piVar34 = local_a8;
                      pbVar46 = pbVar17;
                      do {
                        iVar5 = *piVar34;
                        iVar8 = 0x59d - iVar5;
                        if (0 < iVar8) {
                          iVar12 = 0;
                          if (iVar8 != 0) {
                            iVar12 = (int)((iVar5 - uVar10) * 4 + 0x62c) / iVar8;
                          }
                          iVar8 = iVar12 + -3;
                          if (iVar12 + -3 < 0) {
                            iVar8 = 3 - iVar12;
                          }
                          if (iVar8 < iVar7) {
                            *(int *)(lVar29 + (ulong)*pbVar46 * 4 + -4) = iVar8;
                            piVar14[(ulong)*pbVar46 - 1] = *piVar34;
                            bVar45 = *pbVar46;
                            uVar27 = (ulong)bVar45;
                            lVar25 = *(long *)(fts_ftest + 0xad8);
                            if (iVar6 < (int)(uint)bVar45) {
                              if (lVar25 != 0) {
                                iVar12 = *(int *)(fts_ftest + 0xae0);
                                pcVar20 = "Rx%d with GND:";
                                uVar27 = (ulong)((uint)bVar45 - iVar6);
                                goto LAB_0012e4e0;
                              }
                            }
                            else if (lVar25 != 0) {
                              iVar12 = *(int *)(fts_ftest + 0xae0);
                              pcVar20 = "Tx%d with GND:";
LAB_0012e4e0:
                              iVar12 = snprintf((char *)(lVar25 + iVar12),0x64000,pcVar20,uVar27);
                              plVar1 = (long *)(fts_ftest + 0xad8);
                              iVar12 = *(int *)(fts_ftest + 0xae0) + iVar12;
                              *(int *)(fts_ftest + 0xae0) = iVar12;
                              if (*plVar1 != 0) {
                                iVar5 = snprintf((char *)(*plVar1 + (long)iVar12),0x64000,
                                                 "%d(K), ADC:%d\n",iVar8,iVar5);
                                *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar5;
                              }
                            }
                          }
                        }
                        uVar43 = uVar43 - 1;
                        pbVar46 = pbVar46 + 1;
                        piVar34 = piVar34 + 1;
                      } while (uVar43 != 0);
                    }
                    if (!bVar24) goto LAB_0012e538;
                    _printk("[FTS_TS][TEST]%s:channel to gnd test fail\n",
                            "short_test_channel_to_gnd");
                    iVar5 = 0;
                  }
                }
              }
              kfree(lVar42);
              kfree(pbVar17);
              if (local_a8 != (int *)0x0) {
                kfree();
              }
              if (lVar29 != 0) {
                kfree(lVar29);
              }
              if (puVar18 != (undefined1 *)0x0) {
                kfree();
              }
              _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_test_channel_to_gnd",300);
              uVar9 = local_7c;
              lVar25 = fts_ftest;
              if (iVar5 < 0) goto LAB_0012c94c;
              _printk("[FTS_TS][TEST]%s: Enter\n","short_test_channel_to_channel");
              iVar6 = *(int *)(lVar4 + 0x20);
              uVar10 = *(int *)(lVar4 + 0x24) + iVar6;
              iVar7 = *(int *)(lVar25 + 0x134);
              puVar18 = (undefined1 *)fts_malloc((long)(int)(uVar10 + 1));
              lVar25 = fts_ftest;
              if (puVar18 == (undefined1 *)0x0) {
                if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000))
                {
                  builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                          (long)*(int *)(fts_ftest + 0xae0)),
                                  "w_buf buffer malloc fail\n",0x1a);
                  *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x19;
                }
                _printk("<3>[FTS_TS/E][TEST]%s:w_buf buffer malloc fail\n\n","short_test_channel_to_channel");
                _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_test_channel_to_channel",0x22b);
LAB_0012e828:
                lVar25 = fts_ftest;
                if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000))
                {
                  builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                          (long)*(int *)(fts_ftest + 0xae0)),
                                  "short test of channel to channel fails\n",0x28);
                  *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x27;
                }
                _printk("<3>[FTS_TS/E][TEST]%s:short test of channel to channel fails\n\n","ft5452_short_test");
              }
              else {
                lVar29 = (long)(int)uVar10;
                lVar42 = fts_malloc(lVar29);
                lVar25 = fts_ftest;
                if (lVar42 == 0) {
                  if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)
                     ) {
                    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                            (long)*(int *)(fts_ftest + 0xae0)),
                                    "error_ch buffer malloc fail\n",0x1d);
                    *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1c;
                  }
                  _printk("<3>[FTS_TS/E][TEST]%s:error_ch buffer malloc fail\n\n","short_test_channel_to_channel");
                  iVar5 = -0xc;
                }
                else {
                  lVar19 = fts_malloc(lVar29);
                  lVar25 = fts_ftest;
                  if (lVar19 == 0) {
                    if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                       (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                              (long)*(int *)(fts_ftest + 0xae0)),
                                      "min_70k_ch buffer malloc fail\n",0x1f);
                      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1e;
                    }
                    _printk("<3>[FTS_TS/E][TEST]%s:min_70k_ch buffer malloc fail\n\n","short_test_channel_to_channel");
                    kfree(lVar42);
                    iVar5 = -0xc;
                  }
                  else {
                    local_c0 = (void *)fts_malloc();
                    lVar25 = fts_ftest;
                    if (local_c0 == (void *)0x0) {
                      if ((*(long *)(fts_ftest + 0xad8) == 0) ||
                         (0x63fff < *(int *)(fts_ftest + 0xae0))) {
                        local_c0 = (void *)0x0;
                        puVar15 = "<3>[FTS_TS/E][TEST]%s:adc_data buffer malloc fail\n\n";
                      }
                      else {
                        local_c0 = (void *)0x0;
                        puVar15 = "<3>[FTS_TS/E][TEST]%s:adc_data buffer malloc fail\n\n";
                        iVar6 = 0x1c;
                        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                                (long)*(int *)(fts_ftest + 0xae0)),
                                        "adc_data buffer malloc fail\n",0x1d);
LAB_0012d8f8:
                        *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + iVar6;
                      }
LAB_0012d9e4:
                      _printk(puVar15,"short_test_channel_to_channel");
                      iVar5 = -0xc;
                      local_c8 = 0;
                    }
                    else {
                      local_c8 = fts_malloc(lVar29 << 2);
                      lVar25 = fts_ftest;
                      if (local_c8 == 0) {
                        if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                           (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                          puVar15 = "<3>[FTS_TS/E][TEST]%s:cc_short_resistance buffer malloc fail\n\n";
                          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                                  (long)*(int *)(fts_ftest + 0xae0)),
                                          "cc_short_resistance buffer malloc fail\n",0x28);
                          iVar6 = 0x27;
                          goto LAB_0012d8f8;
                        }
                        puVar15 = "<3>[FTS_TS/E][TEST]%s:cc_short_resistance buffer malloc fail\n\n";
                        goto LAB_0012d9e4;
                      }
                      if ((int)uVar10 < 1) {
LAB_0012e7d0:
                        iVar5 = 0;
                      }
                      else {
                        uVar43 = 0;
                        uVar11 = 0;
                        do {
                          *(int *)(local_c8 + uVar43 * 4) = piVar16[uVar43];
                          if (piVar16[uVar43] < iVar7) {
                            *(char *)(lVar42 + (int)uVar11) = (char)uVar43 + '\x01';
                            uVar11 = uVar11 + 1;
                          }
                          uVar43 = uVar43 + 1;
                        } while (uVar10 != uVar43);
                        if ((int)uVar11 < 2) goto LAB_0012e7d0;
                        *puVar18 = (char)uVar11;
                        uVar27 = (ulong)uVar11;
                        uVar43 = 0;
                        do {
                          uVar44 = uVar43 + 1;
                          puVar18[uVar43 + 1] = *(undefined1 *)(lVar42 + uVar43);
                          _printk("[FTS_TS][TEST]%s:cc:%d,\n","short_test_channel_to_channel",
                                  *(undefined1 *)(lVar42 + uVar43));
                          uVar43 = uVar44;
                        } while (uVar27 != uVar44);
                        iVar5 = fts_test_write(0x58,puVar18,uVar11 + 1);
                        if (iVar5 < 0) {
LAB_0012db00:
                          if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                             (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                            iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                     (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                             "failed to set error channels,ret:%d\n",iVar5);
                            *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                          }
                          puVar15 = "<3>[FTS_TS/E][TEST]%s:failed to set error channels,ret:%d\n\n";
LAB_0012df10:
                          _printk(puVar15,"short_test_channel_to_channel",iVar5);
                        }
                        else {
                          iVar5 = fts_test_write_reg(0x5a,1);
                          if (iVar5 < 0) {
LAB_0012de2c:
                            if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                               (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                              iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                       (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                               "write 5A fails,ret:%d\n",iVar5);
                              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                            }
                            puVar15 = "<3>[FTS_TS/E][TEST]%s:write 5A fails,ret:%d\n\n";
                            goto LAB_0012df10;
                          }
                          iVar5 = (uVar11 - 1) * uVar11;
                          if (iVar5 < 0) {
                            iVar5 = iVar5 + 1;
                          }
                          uVar21 = uVar10;
                          if (iVar5 >> 1 <= (int)uVar10) {
                            uVar21 = iVar5 >> 1;
                          }
                          iVar5 = short_get_adc_data_mc(0,uVar21 << 1,local_c0,2);
                          if (iVar5 < 0) {
                            if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                               (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                              iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                       (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                               "get adc data of cc fails,ret:%d\n",iVar5);
                              *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                            }
                            puVar15 = "<3>[FTS_TS/E][TEST]%s:get adc data of cc fails,ret:%d\n\n";
                            goto LAB_0012df10;
                          }
                          local_f0 = 0;
                          uVar23 = 0;
                          lVar25 = 0;
                          bVar24 = false;
                          local_108 = 1;
                          do {
                            uVar43 = local_f0 + 1;
                            if ((uVar43 < uVar27) && ((int)lVar25 < (int)uVar21)) {
                              lVar25 = (long)(int)lVar25;
                              uVar44 = uVar43 & 0xffffffff;
                              lVar29 = local_108;
                              do {
                                iVar5 = *(int *)((long)local_c0 + lVar25 * 4);
                                iVar8 = 0x59d - iVar5;
                                if (0 < iVar8) {
                                  iVar12 = 0;
                                  if (iVar8 != 0) {
                                    iVar12 = (int)((iVar5 - uVar9) * 0x6f + 0xab45) / iVar8;
                                  }
                                  iVar8 = iVar12 + -3;
                                  if (iVar12 + -3 < 0) {
                                    iVar8 = 3 - iVar12;
                                  }
                                  if (iVar8 < iVar7) {
                                    *(int *)(local_c8 + (ulong)*(byte *)(lVar42 + local_f0) * 4 + -4
                                            ) = iVar8;
                                    *(int *)(local_c8 + (ulong)*(byte *)(lVar42 + lVar29) * 4 + -4)
                                         = iVar8;
                                    piVar14[(ulong)*(byte *)(lVar42 + local_f0) - 1] = iVar5;
                                    piVar14[(ulong)*(byte *)(lVar42 + lVar29) - 1] = iVar5;
                                    lVar26 = fts_ftest;
                                    if (!bVar24) {
                                      if (*(long *)(fts_ftest + 0xad8) != 0) {
                                        builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                                                (long)*(int *)(fts_ftest + 0xae0)),
                                                        "\nMutual Short:\n",0x10);
                                        *(int *)(lVar26 + 0xae0) = *(int *)(lVar26 + 0xae0) + 0xf;
                                      }
                                      bVar24 = true;
                                    }
                                    if (iVar8 < 0x47) {
                                      cVar2 = *(char *)(lVar42 + local_f0);
                                      if ((int)uVar23 < 1) {
                                        bVar3 = false;
LAB_0012e254:
                                        *(char *)(lVar19 + (int)uVar23) = cVar2;
                                        uVar23 = uVar23 + 1;
                                      }
                                      else {
                                        uVar22 = 0;
                                        bVar3 = false;
                                        bVar32 = true;
                                        uVar30 = (ulong)uVar23;
                                        do {
                                          uVar35 = uVar22;
                                          while( true ) {
                                            uVar22 = uVar22 + 1;
                                            pcVar20 = (char *)(lVar19 + uVar35);
                                            if (*pcVar20 == cVar2) break;
                                            uVar35 = uVar35 + 1;
                                            if (*pcVar20 == *(char *)(lVar42 + lVar29)) {
                                              bVar3 = true;
                                            }
                                            if (uVar30 == uVar35) {
                                              if (bVar32) goto LAB_0012e254;
                                              goto LAB_0012e26c;
                                            }
                                          }
                                          do {
                                            if (uVar30 == uVar22) goto LAB_0012e26c;
                                            pcVar20 = (char *)(lVar19 + uVar22);
                                            uVar22 = uVar22 + 1;
                                          } while (*pcVar20 == cVar2);
                                          bVar32 = false;
                                          if (*pcVar20 == *(char *)(lVar42 + lVar29)) {
                                            bVar3 = true;
                                          }
                                        } while (uVar30 != uVar22);
                                      }
LAB_0012e26c:
                                      if (!bVar3) {
                                        *(undefined1 *)(lVar19 + (int)uVar23) =
                                             *(undefined1 *)(lVar42 + lVar29);
                                        uVar23 = uVar23 + 1;
                                      }
                                    }
                                    else {
                                      bVar45 = *(byte *)(lVar42 + local_f0);
                                      uVar22 = (ulong)bVar45;
                                      lVar28 = *(long *)(fts_ftest + 0xad8);
                                      lVar26 = fts_ftest;
                                      if (iVar6 < (int)(uint)bVar45) {
                                        if (lVar28 != 0) {
                                          iVar12 = *(int *)(fts_ftest + 0xae0);
                                          pcVar20 = "Rx%d with";
                                          uVar22 = (ulong)((uint)bVar45 - iVar6);
                                          goto LAB_0012e184;
                                        }
                                      }
                                      else if (lVar28 != 0) {
                                        iVar12 = *(int *)(fts_ftest + 0xae0);
                                        pcVar20 = "Tx%d with";
LAB_0012e184:
                                        iVar12 = snprintf((char *)(lVar28 + iVar12),0x64000,pcVar20,
                                                          uVar22);
                                        lVar26 = fts_ftest;
                                        lVar28 = *(long *)(fts_ftest + 0xad8);
                                        *(int *)(fts_ftest + 0xae0) =
                                             *(int *)(fts_ftest + 0xae0) + iVar12;
                                      }
                                      bVar45 = *(byte *)(lVar42 + lVar29);
                                      uVar22 = (ulong)bVar45;
                                      if (iVar6 < (int)(uint)bVar45) {
                                        if (lVar28 != 0) {
                                          iVar12 = *(int *)(lVar26 + 0xae0);
                                          pcVar20 = " Rx%d";
                                          uVar22 = (ulong)((uint)bVar45 - iVar6);
                                          goto LAB_0012e1f4;
                                        }
                                      }
                                      else if (lVar28 != 0) {
                                        iVar12 = *(int *)(lVar26 + 0xae0);
                                        pcVar20 = " Tx%d";
LAB_0012e1f4:
                                        iVar12 = snprintf((char *)(lVar28 + iVar12),0x64000,pcVar20,
                                                          uVar22);
                                        plVar1 = (long *)(fts_ftest + 0xad8);
                                        iVar12 = *(int *)(fts_ftest + 0xae0) + iVar12;
                                        *(int *)(fts_ftest + 0xae0) = iVar12;
                                        if (*plVar1 != 0) {
                                          iVar5 = snprintf((char *)(*plVar1 + (long)iVar12),0x64000,
                                                           ":%d(K), ADC:%d\n",iVar8,iVar5);
                                          *(int *)(fts_ftest + 0xae0) =
                                               *(int *)(fts_ftest + 0xae0) + iVar5;
                                        }
                                      }
                                    }
                                  }
                                }
                                lVar25 = lVar25 + 1;
                                uVar38 = (int)uVar44 + 1;
                                uVar44 = (ulong)uVar38;
                              } while (((int)uVar38 < (int)uVar11) &&
                                      (lVar29 = lVar29 + 1, lVar25 < (int)uVar21));
                            }
                            local_108 = local_108 + 1;
                            local_f0 = uVar43;
                          } while (uVar43 != uVar27);
                          if (0 < (int)uVar23) {
                            memset(local_c0,0,(long)(int)(uVar10 + 1) << 2);
                            *puVar18 = (char)uVar23;
                            uVar43 = 0;
                            do {
                              uVar27 = uVar43 + 1;
                              puVar18[uVar43 + 1] = *(undefined1 *)(lVar19 + uVar43);
                              _printk("[FTS_TS][TEST]%s:cc(70K):%d,\n",
                                      "short_test_channel_to_channel",
                                      *(undefined1 *)(lVar19 + uVar43));
                              uVar43 = uVar27;
                            } while (uVar23 != uVar27);
                            iVar5 = fts_test_write(0x58,puVar18,uVar23 + 1);
                            if (iVar5 < 0) goto LAB_0012db00;
                            iVar5 = fts_test_write_reg(0x5a,0);
                            if (iVar5 < 0) goto LAB_0012de2c;
                            iVar5 = (uVar23 - 1) * uVar23;
                            if (iVar5 < 0) {
                              iVar5 = iVar5 + 1;
                            }
                            if (iVar5 >> 1 <= (int)uVar10) {
                              uVar10 = iVar5 >> 1;
                            }
                            iVar5 = short_get_adc_data_mc(0,uVar10 << 1,local_c0,2);
                            if (iVar5 < 0) {
                              if ((*(long *)(fts_ftest + 0xad8) != 0) &&
                                 (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
                                iVar6 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) +
                                                         (long)*(int *)(fts_ftest + 0xae0)),0x64000,
                                                 "get adc data of cc(70K) fails,ret:%d\n",iVar5);
                                *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar6;
                              }
                              puVar15 = "<3>[FTS_TS/E][TEST]%s:get adc data of cc(70K) fails,ret:%d\n\n";
                              goto LAB_0012df10;
                            }
                            iVar5 = 0;
                            uVar43 = 0;
                            do {
                              uVar27 = uVar43 + 1;
                              if (((long)uVar27 < (long)(int)uVar23) && (iVar5 < (int)uVar10)) {
                                lVar25 = lVar19 + 1 + uVar43;
                                lVar29 = 0;
                                do {
                                  iVar8 = *(int *)((long)local_c0 + lVar29 * 4 + (long)iVar5 * 4);
                                  iVar12 = 0x59d - iVar8;
                                  if (0 < iVar12) {
                                    iVar13 = 0;
                                    if (iVar12 != 0) {
                                      iVar13 = (int)((iVar8 - uVar9) * 4 + 0x62c) / iVar12;
                                    }
                                    iVar12 = iVar13 + -3;
                                    if (iVar13 + -3 < 0) {
                                      iVar12 = 3 - iVar13;
                                    }
                                    if (iVar12 < iVar7) {
                                      *(int *)(local_c8 + (ulong)*(byte *)(lVar19 + uVar43) * 4 + -4
                                              ) = iVar12;
                                      *(int *)(local_c8 + (ulong)*(byte *)(lVar25 + lVar29) * 4 + -4
                                              ) = iVar12;
                                      piVar14[(ulong)*(byte *)(lVar19 + uVar43) - 1] = iVar8;
                                      piVar14[(ulong)*(byte *)(lVar25 + lVar29) - 1] = iVar8;
                                      bVar45 = *(byte *)(lVar19 + uVar43);
                                      uVar44 = (ulong)bVar45;
                                      lVar28 = *(long *)(fts_ftest + 0xad8);
                                      lVar26 = fts_ftest;
                                      if (iVar6 < (int)(uint)bVar45) {
                                        if (lVar28 != 0) {
                                          iVar13 = *(int *)(fts_ftest + 0xae0);
                                          pcVar20 = "Rx%d with";
                                          uVar44 = (ulong)((uint)bVar45 - iVar6);
                                          goto LAB_0012e6d8;
                                        }
                                      }
                                      else if (lVar28 != 0) {
                                        iVar13 = *(int *)(fts_ftest + 0xae0);
                                        pcVar20 = "Tx%d with";
LAB_0012e6d8:
                                        iVar13 = snprintf((char *)(lVar28 + iVar13),0x64000,pcVar20,
                                                          uVar44);
                                        lVar26 = fts_ftest;
                                        lVar28 = *(long *)(fts_ftest + 0xad8);
                                        *(int *)(fts_ftest + 0xae0) =
                                             *(int *)(fts_ftest + 0xae0) + iVar13;
                                      }
                                      bVar45 = *(byte *)(lVar25 + lVar29);
                                      uVar44 = (ulong)bVar45;
                                      if (iVar6 < (int)(uint)bVar45) {
                                        if (lVar28 != 0) {
                                          iVar13 = *(int *)(lVar26 + 0xae0);
                                          pcVar20 = " Rx%d";
                                          uVar44 = (ulong)((uint)bVar45 - iVar6);
                                          goto LAB_0012e748;
                                        }
                                      }
                                      else if (lVar28 != 0) {
                                        iVar13 = *(int *)(lVar26 + 0xae0);
                                        pcVar20 = " Tx%d";
LAB_0012e748:
                                        iVar13 = snprintf((char *)(lVar28 + iVar13),0x64000,pcVar20,
                                                          uVar44);
                                        plVar1 = (long *)(fts_ftest + 0xad8);
                                        iVar13 = *(int *)(fts_ftest + 0xae0) + iVar13;
                                        *(int *)(fts_ftest + 0xae0) = iVar13;
                                        if (*plVar1 != 0) {
                                          iVar8 = snprintf((char *)(*plVar1 + (long)iVar13),0x64000,
                                                           ":%d(K), ADC:%d\n",iVar12,iVar8);
                                          *(int *)(fts_ftest + 0xae0) =
                                               *(int *)(fts_ftest + 0xae0) + iVar8;
                                        }
                                      }
                                    }
                                  }
                                  lVar26 = lVar29 + 1;
                                } while (((int)uVar43 + (int)lVar29 + 2 < (int)uVar23) &&
                                        (lVar28 = (long)iVar5 + 1 + lVar29, lVar29 = lVar26,
                                        lVar28 < (int)uVar10));
                                iVar5 = iVar5 + (int)lVar26;
                              }
                              uVar43 = uVar27;
                            } while (uVar27 != uVar23);
                          }
                          if (!bVar24) goto LAB_0012e7d0;
                          _printk("[FTS_TS][TEST]%s:channel to channel test fail\n",
                                  "short_test_channel_to_channel");
                          iVar5 = 0;
                        }
                      }
                    }
                    kfree(lVar42);
                    kfree(lVar19);
                    if (local_c0 != (void *)0x0) {
                      kfree(local_c0);
                    }
                    if (local_c8 != 0) {
                      kfree(local_c8);
                    }
                  }
                }
                kfree(puVar18);
                _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_test_channel_to_channel",0x22b);
                if (iVar5 < 0) goto LAB_0012e828;
              }
              bVar24 = false;
              goto LAB_0012ba78;
            }
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                      (long)*(int *)(fts_ftest + 0xae0)),
                              "error_ch buffer malloc fail\n",0x1d);
              *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1c;
            }
            _printk("<3>[FTS_TS/E][TEST]%s:error_ch buffer malloc fail\n\n","short_test_channel_to_gnd");
LAB_0012c930:
            _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_test_channel_to_gnd",300);
LAB_0012c94c:
            lVar25 = fts_ftest;
            if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
              builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                      (long)*(int *)(fts_ftest + 0xae0)),
                              "short test of channel to gnd fails\n",0x24);
              *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x23;
            }
            puVar15 = "<3>[FTS_TS/E][TEST]%s:short test of channel to gnd fails\n\n";
            goto LAB_0012ba68;
          }
LAB_0012c2ac:
          _printk("[FTS_TS][TEST]%s: Exit(%d)\n","short_test_channel_to_all",0x58);
          bVar24 = true;
        }
LAB_0012ba78:
        iVar5 = fts_test_write_reg(0x5a,local_74[0]);
        lVar25 = fts_ftest;
        if (iVar5 < 0) {
          if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
            puVar15 = "<3>[FTS_TS/E][TEST]%s:restore 5A fails\n";
            builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) +
                                    (long)*(int *)(fts_ftest + 0xae0)),"restore 5A fails",0x11);
            iVar6 = 0x10;
            goto LAB_0012bac8;
          }
          puVar15 = "<3>[FTS_TS/E][TEST]%s:restore 5A fails\n";
          goto LAB_0012bae0;
        }
      }
      kfree(piVar14);
      kfree(piVar16);
      lVar42 = fts_ftest;
      lVar25 = *(long *)(fts_ftest + 0xad8);
      if (!bVar24) goto joined_r0x0012bb08;
      if (lVar25 != 0) {
        builtin_strncpy((char *)(lVar25 + *(int *)(fts_ftest + 0xae0)),"------ short test PASS\n",
                        0x18);
        *(int *)(lVar42 + 0xae0) = *(int *)(lVar42 + 0xae0) + 0x17;
      }
      _printk("[FTS_TS][TEST]%s: Exit(%d)\n","ft5452_short_test",0x502);
      if (-1 < iVar5) goto LAB_0012ade0;
    }
    xiaomi_touch_mievent_report_int(0x365c0bd2,0,"TpShortTestFail","focal",(long)iVar5);
    bVar40 = 0;
  }
LAB_0012ade0:
  if ((*(byte *)(lVar4 + 0x2c0) >> 5 & 1) == 0) goto LAB_0012b838;
  local_7c = local_7c & 0xffffff00;
  local_74[0] = 0;
  local_78[0] = '\0';
  _printk("[FTS_TS][TEST]%s: Enter\n","ft5452_panel_differ_test");
  lVar25 = fts_ftest;
  if (*(long *)(fts_ftest + 0xad8) != 0) {
    builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                    "\n============ Test Item: Panel Differ Test\n",0x2c);
    *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x2b;
  }
  memset(*(void **)(lVar4 + 0x90),0,(long)*(int *)(lVar4 + 0x98));
  lVar25 = fts_ftest;
  lVar42 = *(long *)(lVar4 + 0x90);
  if ((*(long *)(lVar4 + 0x270) == 0) || (*(long *)(lVar4 + 0x278) == 0)) {
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "panel_differ_h_min/max is null\n",0x20);
      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1f;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:panel_differ_h_min/max is null\n\n","ft5452_panel_differ_test");
    iVar6 = -0x16;
LAB_0012b78c:
    lVar25 = fts_ftest;
    if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "------ panel differ test NG\n",0x1d);
      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1c;
    }
    _printk("<3>[FTS_TS/E][TEST]%s:------ panel differ test NG\n\n","ft5452_panel_differ_test");
    uVar41 = 0;
    bVar45 = 1;
  }
  else {
    iVar6 = enter_factory_mode();
    if (iVar6 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"failed to enter factory mode,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      puVar15 = "<3>[FTS_TS/E][TEST]%s:failed to enter factory mode,ret=%d\n\n";
LAB_0012b77c:
      _printk(puVar15,"ft5452_panel_differ_test",iVar6);
      goto LAB_0012b78c;
    }
    iVar6 = mapping_switch(0);
    if (iVar6 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"switch mapping fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      puVar15 = "<3>[FTS_TS/E][TEST]%s:switch mapping fail,ret=%d\n\n";
      goto LAB_0012b77c;
    }
    iVar6 = fts_test_read_reg(0x16,local_78);
    if (iVar6 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"read normalize fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      puVar15 = "<3>[FTS_TS/E][TEST]%s:read normalize fail,ret=%d\n\n";
      goto LAB_0012b77c;
    }
    iVar6 = fts_test_read_reg(10,&local_7c);
    if (iVar6 != 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"read 0x0A fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      puVar15 = "<3>[FTS_TS/E][TEST]%s:read 0x0A fail,ret=%d\n\n";
      goto LAB_0012b77c;
    }
    iVar6 = fts_test_read_reg(0xfb,local_74);
    if (iVar6 != 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"read 0xFB fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      puVar15 = "<3>[FTS_TS/E][TEST]%s:read 0xFB fail,ret=%d\n\n";
      goto LAB_0012b77c;
    }
    if ((local_78[0] == '\0') || (iVar6 = fts_test_write_reg(0x16,0), -1 < iVar6)) {
      iVar6 = fts_test_write_reg(10,0x81);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"set frequecy fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:set frequecy fail,ret=%d\n\n";
        goto LAB_0012be98;
      }
      iVar6 = fts_test_write_reg(0xfb,0);
      if (iVar6 < 0) {
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)
                                   ),0x64000,"set fir fail,ret=%d\n",iVar6);
          *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
        }
        puVar15 = "<3>[FTS_TS/E][TEST]%s:set fir fail,ret=%d\n\n";
        goto LAB_0012be98;
      }
      iVar6 = get_rawdata(lVar42);
      if (((iVar6 < 0) || (iVar6 = get_rawdata(lVar42), iVar6 < 0)) ||
         (iVar6 = get_rawdata(lVar42), iVar6 < 0)) {
        lVar25 = fts_ftest;
        if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
          builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0))
                          ,"get rawdata fail\n",0x12);
          *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x11;
        }
        _printk("<3>[FTS_TS/E][TEST]%s:get rawdata fail\n\n","ft5452_panel_differ_test");
        goto LAB_0012bea8;
      }
      if (0 < *(int *)(lVar4 + 0x14)) {
        lVar25 = 0;
        do {
          lVar29 = lVar25 * 4;
          lVar25 = lVar25 + 1;
          *(int *)(lVar42 + lVar29) = *(int *)(lVar42 + lVar29) / 10;
        } while (lVar25 < *(int *)(lVar4 + 0x14));
      }
      show_data(lVar42,0);
      uVar43 = compare_array(lVar42,*(undefined8 *)(lVar4 + 0x270),*(undefined8 *)(lVar4 + 0x278),0)
      ;
      uVar43 = uVar43 & 0xffffffff;
    }
    else {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"write normalize fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      puVar15 = "<3>[FTS_TS/E][TEST]%s:write normalize fail,ret=%d\n\n";
LAB_0012be98:
      _printk(puVar15,"ft5452_panel_differ_test",iVar6);
LAB_0012bea8:
      uVar43 = 0;
    }
    iVar6 = fts_test_write_reg(0x16,local_78[0]);
    if (iVar6 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"restore normalize fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:restore normalize fail,ret=%d\n\n","ft5452_panel_differ_test",iVar6);
    }
    iVar6 = fts_test_write_reg(10,(undefined1)local_7c);
    if (iVar6 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"restore 0x0A fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:restore 0x0A fail,ret=%d\n\n","ft5452_panel_differ_test",iVar6);
    }
    iVar6 = fts_test_write_reg(0xfb,local_74[0]);
    if (iVar6 < 0) {
      if ((*(long *)(fts_ftest + 0xad8) != 0) && (*(int *)(fts_ftest + 0xae0) < 0x64000)) {
        iVar7 = snprintf((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                         0x64000,"restore 0xFB fail,ret=%d\n",iVar6);
        *(int *)(fts_ftest + 0xae0) = *(int *)(fts_ftest + 0xae0) + iVar7;
      }
      _printk("<3>[FTS_TS/E][TEST]%s:restore 0xFB fail,ret=%d\n\n","ft5452_panel_differ_test",iVar6);
    }
    lVar25 = fts_ftest;
    if ((uVar43 & 1) == 0) goto LAB_0012b78c;
    if (*(long *)(fts_ftest + 0xad8) == 0) {
      bVar45 = 0;
      uVar41 = 1;
    }
    else {
      bVar45 = 0;
      uVar41 = 1;
      builtin_strncpy((char *)(*(long *)(fts_ftest + 0xad8) + (long)*(int *)(fts_ftest + 0xae0)),
                      "------ panel differ test PASS\n",0x1f);
      *(int *)(lVar25 + 0xae0) = *(int *)(lVar25 + 0xae0) + 0x1e;
    }
  }
  fts_test_save_data("Panel Differ Test",0x14,lVar42,0,0,0,uVar41);
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","ft5452_panel_differ_test",0x587);
  bVar40 = -1 < iVar6 & (bVar45 ^ 0xff) & bVar40;
LAB_0012b838:
  fts_test_write_reg(0x54,*(undefined1 *)(lVar4 + 0x35));
  _printk("[FTS_TS][TEST]%s: Exit(%d)\n","start_test_ft5452",0x5d0);
  lVar25 = sp_el0;
  if (*(long *)(lVar25 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar40;
}



/* ---- init_module @ 0012e8b4 ---- */

int init_module(void)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = i2c_register_driver(&__this_module,&fts_ts_driver);
  if (iVar1 != 0) {
    _printk("<3>[FTS_TS/E]%s:Focaltech touch screen driver init failed!\n","fts_ts_init");
  }
  return iVar1;
}



/* ---- cleanup_module @ 0012e914 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  i2c_del_driver(&fts_ts_driver);
  return;
}


/* functions: 209 ok, 0 failed */
