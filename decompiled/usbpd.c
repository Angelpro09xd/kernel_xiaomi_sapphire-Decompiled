/* Decompiled with Ghidra from usbpd.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] %s: %s: could not register typec port

// [.rodata] SRC_Startup
// [.rodata] SRC_Send_Capabilities
// [.rodata] current_pr
// [.rodata] select_pdo_store
// [.rodata] VDM NAK received for SVID:0x%04x command:0x%x

// [.rodata] %s: %s: Discover command %d VDM was unexpectedly freed

// [.rodata] Discover command %d VDM was unexpectedly freed

// [.rodata] %s: %s: %s: current_dr(%d)

// [.rodata] REQUESTED_PDO=%d
// [.rodata] usbpd_typec_pr_set
// [.rodata] %s: %s: Unable to read USB PROP_PE_START: %d

// [.rodata] %s: %s: SVID 0x%04x connect/disconnect must be non-NULL

// [.rodata] %s: %s: failed to read pd unverified pps vbus limit

// [.rodata] SNK_Wait_for_Capabilities
// [.rodata] %s: %s: request rejected

// [.rodata] %s: %s: invalid message received, len=%zd

// [.rodata] Security_Request
// [.rodata] Sink_Capabilities
// [.rodata] missing first rx_ext_msg chunk

// [.rodata] not enough bytes in chunk, expected:%u received:%lu

// [.rodata] %s: %s: Request Battery PDO:%d OpPow:%dmW Pow:%dmW

// [.rodata] dr_swap
// [.rodata] handle_state_snk_ready
// [.rodata] %s: %s: Received Alert 0x%08x

// [.rodata] %s: %s: Invalid battery cap db

// [.rodata] %d,Null
// [.rodata] psy_changed_notifier_work
// [.rodata] %s: %s: Type-C Sink%s connected

// [.rodata]  (powered)
// [.rodata] usbpd_vdm_in_suspend
// [.rodata] select_pdo: invalid PDO:%d

// [.rodata] Send_Soft_Reset
// [.rodata] %s: %s: Must specify <src cap id> <PDO> [<uV> <uA>]

// [.rodata] %s: %s: uv (%d) and ua (%d) out of range of APDO

// [.rodata] PPS_Status
// [.rodata] Battery_Status
// [.rodata] %s: %s: VDM NAK received for SVID:0x%04x command:0x%x

// [.rodata] handle_vdm_resp_ack
// [.rodata] Battery %d unsupported

// [.rodata] handle_get_battery_status
// [.rodata] get_status
// [.rodata] %s: %s: USB Type-C disconnect

// [.rodata] Unable to read USB PROP_PE_START: %d

// [.rodata] typec mode:%d type:%d

// [.rodata] usbpd_get_psy_iio_property
// [.rodata] %s: %s: VDM in_suspend:%d

// [.rodata] %s: %s: select_pdo: request rejected

// [.rodata] SRC_Discovery
// [.rodata] PRS_SRC_SNK_Transition_to_off
// [.rodata] request rejected

// [.rodata] Firmware_Update_Response
// [.rodata] Reject
// [.rodata] %s: %s: invalid request chunk ext header 0x%02x

// [.rodata] handle_vdm_rx
// [.rodata] %s: %s: send soft reset

// [.rodata] handle_state_snk_select_capability
// [.rodata] handle_state_send_soft_reset
// [.rodata] %s: %s: batterysecret set usbpd verifed :%d

// [.rodata] %s: %s: registered handler(%pK) for SVID 0x%04x

// [.rodata] SRC_Soft_Reset
// [.rodata] VCS_Wait_for_VCONN
// [.rodata] pd_select_pdo
// [.rodata] usbpd_set_state
// [.rodata] header count (%d) mismatch, len=%zd

// [.rodata] %s: %s: not enough bytes in chunk, expected:%u received:%lu

// [.rodata] %s: %s: could not send chunk request

// [.rodata] Unexpected message

// [.rodata] reset_vdm_state
// [.rodata] %s: %s: %s max_volt:%d,min_volt:%d,max_curr:%d,pps_weak_limit:%d

// [.rodata] cmd:%d is not support

// [.rodata] POWER_ROLE=sink
// [.rodata] %s: %s: %s_role swap not allowed: PD not in Ready state

// [.rodata] usbpd_do_swap
// [.rodata] usbpd_mi_connect_cb
// [.rodata] usbpd_sm
// [.rodata] %s: %s: Type-C Debug Accessory connected

// [.rodata] SRC_Disabled
// [.rodata] Charging_Adapter
// [.rodata] source
// [.rodata] 	Programmable Power supply
	Max Voltage:%d (mV)
	Min Voltage:%d (mV)
	Max Current:%d (mA)

// [.rodata] %s: %s: PPS is controlled by ourself, return not support

// [.rodata] %s: %s: Unable to get vconn

// [.rodata] Get_Battery_Status
// [.rodata] %s: %s: unchunked extended messages unsupported

// [.rodata] %s: %s: Abort send due to pending RX

// [.rodata] get_src_cap_ext
// [.rodata] adapter_svid
// [.rodata] request_vdm_cmd_store
// [.rodata] setting mode timed out

// [.rodata] Unable to read USB TYPE: %d

// [.rodata] %s: %s: Type-C Analog Audio Adapter connected

// [.rodata] %s: %s: Unsupported typec mode:%d

// [.rodata] failed to get IIO property: %d

// [.rodata] %s: %s: failed to read pd vbus max limit

// [.rodata] %s: %s: delay %d ms
// [.rodata] current_dr
// [.rodata] Only Fixed or Programmable PDOs supported

// [.rodata] Unable to enable vconn

// [.rodata] FR_Swap
// [.rodata] handle_vdm_tx
// [.rodata] %s: %s: Request Fixed/Variable PDO:%d Volt:%dmV OpCurr:%dmA Curr:%dmA

// [.rodata] Timed out waiting for chunk request

// [.rodata] feedbak cmd:%d is not support

// [.rodata] DATA_ROLE=%s
// [.rodata] %s_role swap timed out

// [.rodata] %s: %s: hdlr->svid:%x has disconnect

// [.rodata] %s: %s: hdlr->svid:0x%x, vdm_hdr:0x%x, num_vdos:%d, cmd:%d

// [.rodata] medium - 1.5A
// [.rodata] failed to read pd unverified pps max vbus limit

// [.rodata] default-sink-caps must be specified as voltage/current, max 7 pairs

// [.rodata] SRC_Ready
// [.rodata] SNK_Startup
// [.rodata] %s: %s: src_cap_id mismatch.  Requested:%d, current:%d

// [.rodata] %s: %s: len=%zd not multiple of 4

// [.rodata] %s: %s: MessageID already seen, discarding

// [.rodata] %s: %s: Extended message length exceeds max, truncating...

// [.rodata] false
// [.rodata] start_src_ams
// [.rodata] %s: %s: Invalid src_caps received. Skipping request

// [.rodata] %s: %s: Invalid ado

// [.rodata] Invalid pps status db

// [.rodata] %s: %s: Invalid status db length:%d

// [.rodata] %s: %s: typec mode:%d present:%d orientation:%d

// [.rodata] %s: %s: Ignoring disconnect due to PR swap

// [.rodata] 3pd_vbus is not enabled yet

// [.rodata] %s: %s: not support in SRC mode

// [.rodata] &pd->swap_lock
// [.rodata] PRS_SNK_SRC_Source_on
// [.rodata] contract
// [.rodata] %s: %s: invalid PDO:%d

// [.rodata] request timed out

// [.rodata] PPS is controlled by ourself, return not support

// [.rodata] handle_state_unknown
// [.rodata] Accept
// [.rodata] %s: %s: Discarding Discover ID response with incorrect object position:%d

// [.rodata] pd_send_ext_msg
// [.rodata] Invalid src_caps received. Skipping request

// [.rodata] get_battery_cap
// [.rodata] verify_process
// [.rodata] %s: %s: setting mode timed out

// [.rodata] %s: %s: hdlr->svid:%x has connect

// [.rodata] failed to get usb current now

// [.rodata] %s: %s: usbpd digest[%d]=0x%x
// [.rodata] %s: %s: SVID 0x%04x already registered

// [.rodata] usbpd_fetch_pdo
// [.rodata] SNK_Discovery
// [.rodata] SNK_Select_Capability
// [.rodata] select_pdo
// [.rodata] Country_Info
// [.rodata] PR_Swap
// [.rodata] %s: %s: stale previous rx_ext_msg?

// [.rodata] %s: %s: pd->adapter_id:0x%x

// [.rodata] %s: %s: Unsupported message

// [.rodata] vconn_swap
// [.rodata] Invalid battery cap db

// [.rodata] pd_vbus
// [.rodata] 3pd_vbus_store input err

// [.rodata] %d,%x
// [.rodata] %d,%s
// [.rodata] usbpd_typec_port_type_set
// [.rodata] %s: %s: usb voltage now:%d

// [.rodata] %s: %s: Handle soft reset

// [.rodata] real_type
// [.rodata] Unable to read CONNECTOR TYPE: %d

// [.rodata] usbpd_unregister_svid
// [.rodata] battery
// [.rodata] failed to allocate extcon device

// [.rodata] %s: %s: usbpd registration failed

// [.rodata] %s: %s: Unable to enable vbus (%d)

// [.rodata] UNKNOWN
// [.rodata] SNK_Soft_Reset
// [.rodata] %s: %s: Invalid PDO index

// [.rodata] %s: %s: hard reset received

// [.rodata] phy_msg_received
// [.rodata] Status
// [.rodata] Security_Response
// [.rodata] Extended message length exceeds max, truncating...

// [.rodata] %s: %s: Invalid payload size: %d

// [.rodata] %s: %s: Invalid src cap ext db

// [.rodata] %s: %s: %s:cmd:%d, buffer:%s

// [.rodata] SELECTED_PDO=%d
// [.rodata] %s: %s: pd->vdm_data.ta_temp:%d

// [.rodata] 3usbpd_vbus_sm handle state %s, vbus %d

// [.rodata] mi,pd_max_curr_limit
// [.rodata] qcom,vconn-uses-external-source
// [.rodata] PRS_SRC_SNK_Send_Swap
// [.rodata] Cannot select new PDO yet

// [.rodata] hard reset received

// [.rodata] %s: %s: missing first rx_ext_msg chunk

// [.rodata] Error sending %s: %d

// [.rodata] Err disabling vbus (%d)

// [.rodata] %s: %s: Invalid request: %08x

// [.rodata] %s: %s: Timed out waiting for chunk request

// [.rodata] enter_state_snk_startup
// [.rodata] %s: %s: Invalid pps status db

// [.rodata] %s: %s: incorrect state (%s) after power_role swap

// [.rodata] Unable to read USB TYPEC_MODE: %d

// [.rodata] pd_voltage_max
// [.rodata] %s: %s: select_pdo: Cannot select new PDO yet

// [.rodata] usbpd_create
// [.rodata] mi,pd_unverified_pps_max_vbus_limit
// [.rodata] qcom,default-sink-caps
// [.rodata] usbpd registration failed

// [.rodata] 	Fixed supply
	Dual-Role Power:%d
	USB Suspend Supported:%d
	Externally Powered:%d
	USB Communications Capable:%d
	Data Role Swap:%d
	Peak Current:%d
	Voltage:%d (mV)
	Max Current:%d (mA)

// [.rodata] Unable to get vconn

// [.rodata] %s: %s: Skip wq and handle VDM directly

// [.rodata] unchunked extended messages unsupported

// [.rodata] %s: %s: unhandled ACK for SVID:0x%x

// [.rodata] error opening PD PHY %d

// [.rodata] send soft reset

// [.rodata] handle_ctrl_snk_ready
// [.rodata] %s: %s: incorrect state (%s) after data_role swap

// [.rodata] %s: %s: Only Fixed or Programmable PDOs supported

// [.rodata] %s: %s: header count (%d) mismatch, len=%zd

// [.rodata] %s: %s: %s type(%d) num_objs(%d)

// [.rodata] Alert
// [.rodata] %s: %s: error opening PD PHY %d

// [.rodata] PD2.0
// [.rodata] Invalid ado

// [.rodata] get_pps_status
// [.rodata] get_battery_status
// [.rodata] %s: %s: Setting mode to %d

// [.rodata] hdlr->svid:%x has connect

// [.rodata] %s: %s: failed to get usb voltage now

// [.rodata] select_pdo: request timed out

// [.rodata] &pd->svid_handler_lock
// [.rodata] initial_dr
// [.rodata] %08x

// [.rodata] pdo_n_show
// [.rodata] GotoMin
// [.rodata] %s: %s: Received SVDM with unsupported version:%d

// [.rodata] invalid role

// [.rodata] usbpd_mi_disconnect_cb
// [.rodata] %s: %s: usb current now:%d

// [.rodata] %s: %s: usbpd s_secert vdos[%d]=0x%x
// [.rodata] %s: %s: hard reset: typec mode:%d present:%d

// [.rodata] Unsupported typec mode:%d

// [.rodata] typec_cc_orientation
// [.rodata] usbpd_set_psy_iio_property
// [.rodata] %s: %s: VDM tx: svid:%04x ver:%d obj_pos:%d cmd:%x cmd_type:%x svdm_hdr:%x

// [.rodata] usbpd_wq
// [.rodata] failed to get %s iio channel

// [.rodata] SRC_Negotiate_Capability
// [.rodata] src_cap_id
// [.rodata] %d %d %d %d
// [.rodata] Invalid
// [.rodata] Get_Country_Info
// [.rodata] PS_RDY
// [.rodata] invalid request chunk ext header 0x%02x

// [.rodata] %s: %s: unhandled ACK for command:0x%x

// [.rodata] 3hardreset when shutdown
// [.rodata] Error (%d) sending VDM command %d

// [.rodata] pd_send_hard_reset
// [.rodata] handle_data_snk_ready
// [.rodata] 3pd_vbus_store handle state %s, vbus %d,val %d

// [.rodata] request_vdm_cmd
// [.rodata] usbpd_request_vdm_cmd
// [.rodata] %s: %s: handle state %s

// [.rodata] USB Type-C disconnect

// [.rodata] usb_pd
// [.rodata] mi,limit_pd_unverified_pps_vbus
// [.rodata] pdo_h
// [.rodata] %s: %s: invalid signal (%d) received

// [.rodata] Soft_Reset
// [.rodata] Get_Country_Codes
// [.rodata] handle_state_src_send_capabilities
// [.rodata] %08lx
// [.rodata] request_vdm_cmd_show
// [.rodata] incorrect state (%s) after data_role swap

// [.rodata] %s: %s: failed to get usb current now

// [.rodata] failed to set IIO property: %d

// [.rodata] %s: %s: Discarding previously queued VDM tx (SVID:0x%04x)

// [.rodata] %s: %s: default-sink-caps must be specified as voltage/current, max 7 pairs

// [.rodata] kick_sm
// [.rodata] SRC_Startup_Wait_for_VDM_Resp
// [.rodata] PRS_SRC_SNK_Wait_Source_on
// [.rodata] Request Data Object
	Obj Pos:%d
	Giveback:%d
	Capability Mismatch:%d
	USB Communications Capable:%d
	No USB Suspend:%d

// [.rodata] (Fixed/Variable)
	Operating Current:%d (mA)
	%s Current:%d (mA)

// [.rodata] Not_Supported
// [.rodata] pd_ext_msg_received
// [.rodata] %s: %s: Unexpected message received

// [.rodata] %s: %s: First src_cap invalid %08x

// [.rodata] handle_ext_snk_ready
// [.rodata] current_state
// [.rodata] batterysecret set usbpd verifed :%d

// [.rodata] adapter_version
// [.rodata] %d,%d
// [.rodata] Unhandled state %s

// [.rodata] %s: %s: failed to set IIO property: %d

// [.rodata] SVID 0x%04x already registered

// [.rodata] pdo:%d, Fixed supply, volt:%d(mv), max curr:%d

// [.rodata] failed to register extcon device

// [.rodata] implicit
// [.rodata] %s: %s: ignore MSG_ALERT

// [.rodata] %s: %s: VDM rx: svid:%04x cmd:%x cmd_type:%x vdm_hdr:%x has_dp: %s

// [.rodata] %s: %s: Error sending %s: %d

// [.rodata] %s: %s: RDO: 0x%08x

// [.rodata] %s: %s: Request PPS PDO:%d Volt:%dmV Curr:%dmA

// [.rodata] adapter_id
// [.rodata] %s: %s: cmd:%d is not support

// [.rodata] trigger_tx_msg
// [.rodata] %s: %s: ta_voltage:%d

// [.rodata] high - 3.0A
// [.rodata] SVID 0x%04x connect/disconnect must be non-NULL

// [.rodata] %s: %s: select_pdo: invalid PDO:%d

// [.rodata] pd_adapter
// [.rodata] do not limit current

// [.rodata] %s: %s: hdlr:%pK svid:%d
// [.rodata] VCONN_Swap
// [.rodata] log_decoded_request
// [.rodata] %s: %s: type:%d

// [.rodata] First src_cap invalid %08x

// [.rodata] %s: %s: soft reset received

// [.rodata] enter_state_snk_select_capability
// [.rodata] soft reset received

// [.rodata] verify_process_store
// [.rodata] %s: %s: failed to send %d

// [.rodata] PDO%d=%08x
// [.rodata] CONTRACT=%s
// [.rodata] %s: %s: invalid role

// [.rodata] pd_usb_suspend_supported
// [.rodata] pr_current_max
// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/drivers/usb/pd/policy_engine.c
// [.rodata] %s: %s: failed to get IIO property: %d

// [.rodata] 3kick_usbpd_vbus_sm handle state %s, vbus %d

// [.rodata] select_pdo: request rejected

// [.rodata] explicit
// [.rodata] invalid PDO:%d

// [.rodata] Get_Battery_Cap
// [.rodata] pd_request_chunk_work
// [.rodata] pd_send_msg
// [.rodata] %s: %s: VPD detected turn off vbus

// [.rodata] usbpd_startup_common
// [.rodata] enter_state_src_negotiate_capability
// [.rodata] %s: %s: send hard reset
// [.rodata] %s: %s: Invalid response to sink request

// [.rodata] Invalid bat sts dobj

// [.rodata] batterysecret verify process :%d

// [.rodata] %s: %s: feedbak cmd:%d is not support

// [.rodata] SRC_CAP_ID=%d
// [.rodata] devm_usbpd_put
// [.rodata] ERROR_RECOVERY
// [.rodata] SRC_Transition_to_default
// [.rodata] PDO %d

// [.rodata] %s: %s: Cannot select new PDO yet

// [.rodata] %s: %s: No action for state %s

// [.rodata] phy_sig_received
// [.rodata] Get_Source_Cap
// [.rodata] %s: %s: Unexpected message

// [.rodata] handle_state_src_ready
// [.rodata] Invalid response to sink request

// [.rodata] Invalid status db length:%d

// [.rodata] Cannot send msg

// [.rodata] Type-C Debug Accessory connected

// [.rodata] usbpd_send_vdm
// [.rodata] Discarding previously queued VDM tx (SVID:0x%04x)

// [.rodata] %s: %s: pdo:%d, Fixed supply, volt:%d(mv), max curr:%d

// [.rodata] Error reading default-sink-caps

// [.rodata] %s: %s: -EBUSY: ss_lanes are already used by(%d)
// [.rodata] Unable to enable vbus (%d)

// [.rodata] Get_Manufacturer_Info
// [.rodata] Firmware_Update_Request
// [.rodata] %s: %s: Discarding delayed SVDM response due to timeout

// [.rodata] %s: %s: Src CapsCounter exceeded, disabling PD

// [.rodata] %s: %s: Battery %d unsupported

// [.rodata] usbpd_verifed
// [.rodata] pd_select_pdo_for_bq
// [.rodata] hdlr->svid:%x has disconnect

// [.rodata] %s: %s: Unhandled state %s

// [.rodata] %s: %s: typec mode:%d type:%d

// [.rodata] pdo:%d, PPS, volt: %d(mv), max curr:%d

// [.rodata] only fixed and pps pdo supported

// [.rodata] 3usbpd_fetch_pdo:after swap_lock
// [.rodata] usbpd_select_pdo
// [.rodata] failed to read pd vbus max limit

// [.rodata] PRS_SNK_SRC_Transition_to_off
// [.rodata] 	Battery supply
	Max Voltage:%d (mV)
	Min Voltage:%d (mV)
	Max Power:%d (mW)

// [.rodata] %s: %s: Unable to enable vconn

// [.rodata] Get_Sink_Cap
// [.rodata] handle_state_snk_wait_for_capabilities
// [.rodata] %d,%s

// [.rodata] %s: %s: %s_role swap timed out

// [.rodata] %s: %s: Cannot send msg

// [.rodata] %s: %s: usb r_cable now:%dmohm

// [.rodata] %s: %s: Notify SVID: 0x%04x disconnect

// [.rodata] %s: %s: unregistered handler(%pK) for SVID 0x%04x

// [.rodata] %s: %s: select_pdo: request timed out

// [.rodata] usbpd_release_ss_lane
// [.rodata] SRC_Hard_Reset
// [.rodata] %s: %s: only SOP/SOP' supported

// [.rodata] %s: %s: Discarding Discover ID response with no VDOs

// [.rodata] Invalid src cap ext db

// [.rodata] %s: Did not see Accept, do Hard Reset

// [.rodata] 3pd_vbus_show handle state %s, vbus %d

// [.rodata] %s: %s: batterysecret verify process :%d

// [.rodata] POWER_ROLE=source
// [.rodata] power
// [.rodata] %s: %s: Forcing disconnect from source mode

// [.rodata] typec_src_rp
// [.rodata] typec_mode
// [.rodata] %s: %s: Error reading default-sink-caps

// [.rodata] Unable to get vbus

// [.rodata] Request
// [.rodata] Invalid request: %08x

// [.rodata] pd_eval_src_caps
// [.rodata] %s max_volt:%d,min_volt:%d,max_curr:%d,pps_weak_limit:%d

// [.rodata] %s: %s: Invalid bat sts dobj

// [.rodata] failed to send %d

// [.rodata] %s_role swap not allowed: PD not in Ready state

// [.rodata] 3get_usbpd phandle failed

// [.rodata] handle_disconnect
// [.rodata] %s: %s: Unable to read USB TYPE: %d

// [.rodata] %s: %s: Unable to read USB PRESENT: %d

// [.rodata] Type-C Source (%s) connected

// [.rodata] default
// [.rodata] pe_start
// [.rodata] usbpd_register_svid
// [.rodata] not support in SRC mode

// [.rodata] %s: %s: failed to get %s iio channel

// [.rodata] src_cap_id mismatch.  Requested:%d, current:%d

// [.rodata] (Programmable)
	Output Voltage:%d (mV)
	Operating Current:%d (mA)

// [.rodata] only SOP/SOP' supported

// [.rodata] invalid message received, len=%zd

// [.rodata] GoodCRC
// [.rodata] could not send chunk request

// [.rodata] unhandled ACK for SVID:0x%x

// [.rodata] handle_state_src_send_capabilities_wait
// [.rodata] Invalid payload size: %d

// [.rodata] usbpd_verifed_store
// [.rodata] usbpd_process_typec_mode
// [.rodata] connector_type
// [.rodata] typec_power_role
// [.rodata] %s: %s: pdo:%d, PPS, volt: %d(mv), max curr:%d

// [.rodata] mi,pd_curr_limit
// [.rodata] failed to read pd unverified pps vbus limit

// [.rodata] mi,non-qcom-pps-ctrl
// [.rodata] PRS_SNK_SRC_Send_Swap
// [.rodata] %s: %s: request timed out

// [.rodata] Get_PPS_Status
// [.rodata] %s: %s: Sink hard reset count exceeded, disabling PD

// [.rodata] usbpd_typec_dr_set
// [.rodata] incorrect state (%s) after power_role swap

// [.rodata] %s: %s: ta_version:%x

// [.rodata] 3%s: shutdown, return

// [.rodata] Type-C Sink%s connected

// [.rodata] pr_swap
// [.rodata] &x->wait
// [.rodata] %s: %s: only fixed and pps pdo supported

// [.rodata] %s: %s: do not limit current

// [.rodata] %s: %s: Unable to get vbus

// [.rodata] SNK_Transition_Sink
// [.rodata] SNK_Ready
// [.rodata] (Battery)
	Operating Power:%d (mW)
	%s Power:%d (mW)

// [.rodata] invalid signal (%d) received

// [.rodata] %s: %s: usbpd_sm already running

// [.rodata] Source_Capabilities_Extended
// [.rodata] DR_Swap
// [.rodata] Get_Status
// [.rodata] pd->adapter_id:0x%x

// [.rodata] RDO=%08x
// [.rodata] %s: %s: Type-C Source (%s) connected

// [.rodata] Type-C Analog Audio Adapter connected

// [.rodata] pd_in_hard_reset
// [.rodata] pd_voltage_min
// [.rodata] usbpd_send_svdm
// [.rodata] %s: %s: failed to allocate extcon device

// [.rodata] %s: %s: failed to read pd unverified pps max vbus limit

// [.rodata] enable_vbus
// [.rodata] initial_pr
// [.rodata] Invalid PDO index

// [.rodata] uv (%d) and ua (%d) out of range of APDO

// [.rodata] %s: %s: %s -> %s

// [.rodata] vconn
// [.rodata] len=%zd not multiple of 4

// [.rodata] Manufacturer_Info
// [.rodata] Source_Capabilities
// [.rodata] Get_Source_Cap_Extended
// [.rodata] %s: %s: Discovered SVID: 0x%04x

// [.rodata] shutdown
// [.rodata] %s: %s: Previous Discover VDM command %d not ACKed/NAKed

// [.rodata] handle_get_battery_cap
// [.rodata] %s: %s: %s: Did not see Accept, do Hard Reset

// [.rodata] %s: %s: Setting power role to %d

// [.rodata] usbpd_mi_vdm_received_cb
// [.rodata] Forcing disconnect from source mode

// [.rodata] drivers/usb/pd/policy_engine.c
// [.rodata] SRC_Send_Capabilities (Wait for Request)
// [.rodata] SNK_Evaluate_Capability
// [.rodata] SNK_Transition_to_default
// [.rodata] 	Variable supply
	Max Voltage:%d (mV)
	Min Voltage:%d (mV)
	Max Current:%d (mA)

// [.rodata] rdo_h
// [.rodata] Country_Codes
// [.rodata] Vendor_Defined
// [.rodata] %s: %s: Set Rp to %s

// [.rodata] %s: %s: Notify SVID: 0x%04x discovered

// [.rodata] %s0x%02x
// [.rodata] 0x%08x

// [.rodata] ALT_MODE=%d
// [.rodata] SDB=%02x %02x %02x %02x %02x %02x
// [.rodata] %s: %s: Setting data role to %d

// [.rodata] failed to get usb voltage now

// [.rodata] pd_active
// [.rodata] 3pd_vbus_reset, pd is null

// [.rodata] select_pdo: Cannot select new PDO yet

// [.rodata] %s: %s: Could not get USB power_supply, deferring probe

// [.rodata] %s: %s: failed to register extcon device

// [.rodata] could not register typec port

// [.rodata] SRC_Transition_Supply
// [.rodata] SNK_Hard_Reset
// [.rodata] DRS_Send_DR_Swap
// [.rodata] Must specify <src cap id> <PDO> [<uV> <uA>]

// [.rodata] hard_reset
// [.rodata] %s: %s: Err disabling vbus (%d)

// [.rodata] %s: %s: Error (%d) sending VDM command %d

// [.rodata] Unexpected message received

// [.rodata] enter_state_snk_evaluate_capability
// [.rodata] %s: %s: Unable to read USB TYPEC_MODE: %d

// [.rodata] Unable to read USB PRESENT: %d

// [.rodata] min_sink_current
// [.rodata] pd_vbus_ctrl
// [.rodata] 'void (struct usbpd_svid_handler *, _Bool)'
// [.rodata] 'void (struct usbpd *)'
// [.rodata] 'int (unsigned short, const unsigned char *, unsigned long, enum pd_sop_type)'
// [.rodata] 'void (struct usbpd_svid_handler *, unsigned int, const unsigned int *, int)'
// [.rodata] 'void (struct usbpd_svid_handler *, unsigned char, enum usbpd_svdm_cmd_type, const unsigned int *, int)'
// [.rodata] 'void (void)'
// [.rodata] 'int (struct pd_phy_params *)'
// [.rodata] 'int (enum data_role, enum power_role)'
// [.rodata] 'void (struct usbpd_svid_handler *)'
// [.rodata] 'int (unsigned char)'
// [.rodata] 'int (enum pd_sig_type)'
// [.rodata] 'void (struct usbpd *, struct rx_msg *)'
// [__ksymtab_strings] usbpd_vdm_in_suspend
// [__ksymtab_strings] usbpd_get_pps_status
// [__ksymtab_strings] smb_get_usbpd
// [__ksymtab_strings] devm_usbpd_get_by_phandle
// [__ksymtab_strings] usbpd_fetch_pdo
// [__ksymtab_strings] usbpd_unregister_svid
// [__ksymtab_strings] usbpd_create
// [__ksymtab_strings] kick_usbpd_vbus_sm
// [__ksymtab_strings] usbpd_send_vdm
// [__ksymtab_strings] usbpd_get_src_cap_id
// [__ksymtab_strings] usbpd_select_pdo
// [__ksymtab_strings] usbpd_register_svid
// [__ksymtab_strings] usbpd_destroy
// [__ksymtab_strings] usbpd_get_plug_orientation
// [__ksymtab_strings] usbpd_send_svdm
// [.modinfo] parmtype=min_sink_current:int
// [.modinfo] parmtype=pd_vbus_ctrl:uint
// [.modinfo] parm=pd_vbus_ctrl:PD VBUS CONTROL
// [.modinfo] description=USB Power Delivery Policy Engine
// [.modinfo] license=GPL v2
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=usbpd
// [.modinfo] intree=Y
// [.modinfo] depends=qcom_ipc_logging
// [.modinfo] scmversion=gaf44d52a5e5f
// [__versions] module_layout
// [__versions] memset
// [__versions] __stack_chk_fail
// [__versions] android_kmalloc_64_create
// [__versions] kmalloc_caches
// [__versions] param_ops_uint
// [__versions] param_ops_int
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] class_unregister
// [__versions] __class_register
// [__versions] ipc_log_context_create
// [__versions] __init_swait_queue_head
// [__versions] of_find_property
// [__versions] of_property_read_variable_u32_array
// [__versions] typec_unregister_partner
// [__versions] pm_relax
// [__versions] hrtimer_cancel
// [__versions] typec_get_drvdata
// [__versions] add_uevent_var
// [__versions] strlen
// [__versions] strlcat
// [__versions] snprintf
// [__versions] kobject_uevent
// [__versions] _raw_spin_unlock_irqrestore
// [__versions] krealloc
// [__versions] _dev_info
// [__versions] complete
// [__versions] completion_done
// [__versions] work_busy
// [__versions] _raw_spin_lock_irqsave
// [__versions] ktime_get
// [__versions] typec_register_partner
// [__versions] typec_set_pwr_opmode
// [__versions] typec_set_pwr_role
// [__versions] typec_set_data_role
// [__versions] kstrtouint
// [__versions] scnprintf
// [__versions] __msecs_to_jiffies
// [__versions] queue_delayed_work_on
// [__versions] usleep_range_state
// [__versions] regulator_enable
// [__versions] devm_regulator_get
// [__versions] queue_work_on
// [__versions] hrtimer_start_range_ns
// [__versions] __kmalloc
// [__versions] kmem_cache_alloc_trace
// [__versions] __list_del_entry_valid
// [__versions] extcon_set_state_sync
// [__versions] extcon_set_property
// [__versions] extcon_set_state
// [__versions] __list_add_valid
// [__versions] device_unregister
// [__versions] power_supply_unreg_notifier
// [__versions] device_del
// [__versions] destroy_workqueue
// [__versions] power_supply_put
// [__versions] power_supply_reg_notifier
// [__versions] typec_register_port
// [__versions] device_property_read_u32_array
// [__versions] device_property_present
// [__versions] extcon_set_property_capability
// [__versions] devm_extcon_dev_register
// [__versions] devm_extcon_dev_allocate
// [__versions] devm_iio_channel_get
// [__versions] power_supply_get_property
// [__versions] power_supply_get_by_name
// [__versions] __mutex_init
// [__versions] hrtimer_init
// [__versions] delayed_work_timer_fn
// [__versions] init_timer_key
// [__versions] alloc_workqueue
// [__versions] device_add
// [__versions] device_init_wakeup
// [__versions] dev_set_name
// [__versions] device_initialize
// [__versions] wait_for_completion_timeout
// [__versions] devres_add
// [__versions] put_device
// [__versions] __devres_alloc_node
// [__versions] platform_device_put
// [__versions] class_find_device
// [__versions] of_find_device_by_node
// [__versions] of_parse_phandle
// [__versions] pm_stay_awake
// [__versions] regulator_disable
// [__versions] _printk
// [__versions] _dev_warn
// [__versions] __cfi_slowpath_diag
// [__versions] mutex_unlock
// [__versions] mutex_lock
// [__versions] iio_write_channel_raw
// [__versions] ipc_log_string
// [__versions] iio_read_channel_processed
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
// [.shstrtab] .rela.rodata.usbpd_state_strings
// [.shstrtab] __ksymtab_strings
// [.shstrtab] .modinfo
// [.shstrtab] .rela___ksymtab+usbpd_get_plug_orientation
// [.shstrtab] .rela___kcrctab+usbpd_get_plug_orientation
// [.shstrtab] .rela__param
// [.shstrtab] .rela.text.__cfi_check
// [.shstrtab] .note.GNU-stack
// [.shstrtab] .llvm_addrsig
// [.shstrtab] .text.ftrace_trampoline
// [.shstrtab] .rela.gnu.linkonce.this_module
// [.shstrtab] .rela__bug_table
// [.shstrtab] .note.gnu.build-id
// [.shstrtab] .shstrtab
// [.shstrtab] .strtab
// [.shstrtab] __ksymtab
// [.shstrtab] .symtab
// [.shstrtab] __kcrctab
// [.shstrtab] .rodata
// [.shstrtab] .rela.exit.data
// [.shstrtab] .rela.init.data
// [.shstrtab] .BTF
// [.shstrtab] .rela.data..Lanon.1481399aff0515d6a91b3bedbec0fc1b.1
// [.strtab] extcon_set_property
// [.strtab] power_supply_get_property
// [.strtab] usbpd_set_psy_iio_property
// [.strtab] usbpd_get_psy_iio_property
// [.strtab] of_find_property
// [.strtab] extcon_set_property_capability
// [.strtab] enter_state_snk_select_capability
// [.strtab] handle_state_snk_select_capability
// [.strtab] enter_state_snk_evaluate_capability
// [.strtab] enter_state_src_negotiate_capability
// [.strtab] work_busy
// [.strtab] handle_state_snk_discovery
// [.strtab] enter_state_error_recovery
// [.strtab] memcpy
// [.strtab] __kstrtabns_usbpd_destroy
// [.strtab] __crc_usbpd_destroy
// [.strtab] __kstrtab_usbpd_destroy
// [.strtab] __ksymtab_usbpd_destroy
// [.strtab] init_timer_key
// [.strtab] usbpd_init.__key
// [.strtab] init_completion.__key
// [.strtab] usbpd_create.__key
// [.strtab] enter_state_snk_ready
// [.strtab] handle_state_snk_ready
// [.strtab] enter_state_src_ready
// [.strtab] handle_state_src_ready
// [.strtab] of_property_read_variable_u32_array
// [.strtab] device_property_read_u32_array
// [.strtab] handle_vdm_tx
// [.strtab] handle_vdm_rx
// [.strtab] pm_relax
// [.strtab] get_src_cap_ext_show
// [.strtab] contract_show
// [.strtab] get_battery_status_show
// [.strtab] get_status_show
// [.strtab] get_pps_status_show
// [.strtab] pd_vbus_show
// [.strtab] verify_process_show
// [.strtab] current_pr_show
// [.strtab] initial_pr_show
// [.strtab] current_dr_show
// [.strtab] initial_dr_show
// [.strtab] get_battery_cap_show
// [.strtab] rdo_show
// [.strtab] select_pdo_show
// [.strtab] adapter_version_show
// [.strtab] pdo_n_show
// [.strtab] rdo_h_show
// [.strtab] pdo_h_show
// [.strtab] current_state_show
// [.strtab] request_vdm_cmd_show
// [.strtab] adapter_svid_show
// [.strtab] adapter_id_show
// [.strtab] src_cap_id_show
// [.strtab] usbpd_verifed_show
// [.strtab] iio_write_channel_raw
// [.strtab] dev_attr_get_src_cap_ext
// [.strtab] power_supply_put
// [.strtab] platform_device_put
// [.strtab] devm_usbpd_put
// [.strtab] wait_for_completion_timeout
// [.strtab] pd_timeout
// [.strtab] start_usb_host
// [.strtab] log_decoded_request
// [.strtab] typec_register_port
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] kstrtouint
// [.strtab] param_ops_uint
// [.strtab] param_ops_int
// [.strtab] kobject_uevent
// [.strtab] usbpd_uevent
// [.strtab] device_property_present
// [.strtab] __param_str_min_sink_current
// [.strtab] __param_min_sink_current
// [.strtab] enter_state_snk_transition_to_default
// [.strtab] handle_state_snk_transition_to_default
// [.strtab] handle_state_src_transition_to_default
// [.strtab] usbpd_destroy.cfi_jt
// [.strtab] usbpd_get_pps_status.cfi_jt
// [.strtab] usbpd_select_pdo.cfi_jt
// [.strtab] usbpd_fetch_pdo.cfi_jt
// [.strtab] usbpd_get_plug_orientation.cfi_jt
// [.strtab] delayed_work_timer_fn.cfi_jt
// [.strtab] kick_usbpd_vbus_sm.cfi_jt
// [.strtab] usbpd_send_svdm.cfi_jt
// [.strtab] usbpd_send_vdm.cfi_jt
// [.strtab] usbpd_create.cfi_jt
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] devm_usbpd_get_by_phandle.cfi_jt
// [.strtab] smb_get_usbpd.cfi_jt
// [.strtab] usbpd_vdm_in_suspend.cfi_jt
// [.strtab] usbpd_unregister_svid.cfi_jt
// [.strtab] usbpd_register_svid.cfi_jt
// [.strtab] usbpd_get_src_cap_id.cfi_jt
// [.strtab] enter_state_snk_select_capability.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_snk_select_capability.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_snk_evaluate_capability.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_src_negotiate_capability.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_snk_discovery.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_error_recovery.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_snk_ready.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_snk_ready.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_src_ready.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_src_ready.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] get_src_cap_ext_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] contract_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] get_battery_status_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] get_status_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] get_pps_status_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] pd_vbus_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] verify_process_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] current_pr_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] initial_pr_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] current_dr_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] initial_dr_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] get_battery_cap_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] rdo_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] select_pdo_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] adapter_version_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] pdo_n_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] rdo_h_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] pdo_h_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] current_state_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] request_vdm_cmd_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] adapter_svid_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] adapter_id_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] src_cap_id_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_verifed_show.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] devm_usbpd_put.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] pd_timeout.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_uevent.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_snk_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_snk_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_src_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_src_send_capabilities_wait.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_send_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_send_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_hard_reset.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_typec_pr_set.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_typec_dr_set.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_typec_port_type_set.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_snk_wait_for_capabilities.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_snk_wait_for_capabilities.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_src_send_capabilities.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_src_send_capabilities.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_snk_startup.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_snk_startup.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_src_startup.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_src_startup.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_src_startup_wait_for_vdm_resp.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_drs_send_dr_swap.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_prs_src_snk_send_swap.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_prs_snk_src_send_swap.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_unknown.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] phy_shutdown.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_prs_src_snk_wait_source_on.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_prs_snk_src_source_on.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_vcs_wait_for_vconn.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_sm.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] psy_changed_notifier_work.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] start_usb_peripheral_work.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] pd_request_chunk_work.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_snk_transition_sink.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_snk_transition_sink.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_prs_src_snk_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_prs_src_snk_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_prs_snk_src_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] handle_state_prs_snk_src_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_release.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] hard_reset_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] get_battery_status_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] pd_vbus_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] verify_process_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] get_battery_cap_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] select_pdo_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] request_vdm_cmd_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_verifed_store.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_release_ss_lane.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] match_usbpd_device.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] phy_msg_received.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] phy_sig_received.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] enter_state_src_disabled.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] psy_changed.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_mi_disconnect_cb.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_mi_connect_cb.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] usbpd_mi_vdm_received_cb.e7ce0f5c9173271e56101f64bf7b44f7.cfi_jt
// [.strtab] __mutex_init
// [.strtab] hrtimer_init
// [.strtab] handle_state_src_send_capabilities_wait
// [.strtab] memset
// [.strtab] handle_state_soft_reset
// [.strtab] enter_state_send_soft_reset
// [.strtab] handle_state_send_soft_reset
// [.strtab] pd_vbus_reset
// [.strtab] dev_attr_hard_reset
// [.strtab] enter_state_hard_reset
// [.strtab] usbpd_typec_pr_set
// [.strtab] usbpd_typec_dr_set
// [.strtab] usbpd_typec_port_type_set
// [.strtab] devm_regulator_get
// [.strtab] devm_iio_channel_get
// [.strtab] ktime_get
// [.strtab] dev_attr_contract
// [.strtab] strlcat
// [.strtab] dev_attr_get_battery_status
// [.strtab] handle_get_battery_status
// [.strtab] dev_attr_get_status
// [.strtab] dev_attr_get_pps_status
// [.strtab] __kstrtabns_usbpd_get_pps_status
// [.strtab] __crc_usbpd_get_pps_status
// [.strtab] __kstrtab_usbpd_get_pps_status
// [.strtab] __ksymtab_usbpd_get_pps_status
// [.strtab] enable_vbus
// [.strtab] dev_attr_pd_vbus
// [.strtab] dev_attr_verify_process
// [.strtab] usbpd_class
// [.strtab] usbpd_attrs
// [.strtab] state_handlers
// [.strtab] usbpd_groups
// [.strtab] typec_ops
// [.strtab] default_src_caps
// [.strtab] pd_eval_src_caps
// [.strtab] dev_attr_pdos
// [.strtab] ____versions
// [.strtab] hrtimer_start_range_ns
// [.strtab] start_src_ams
// [.strtab] usbpd_ext_msg_strings
// [.strtab] usbpd_control_msg_strings
// [.strtab] usbpd_data_msg_strings
// [.strtab] usbpd_state_strings
// [.strtab] enter_state_snk_wait_for_capabilities
// [.strtab] handle_state_snk_wait_for_capabilities
// [.strtab] enter_state_src_send_capabilities
// [.strtab] handle_state_src_send_capabilities
// [.strtab] __msecs_to_jiffies
// [.strtab] kmalloc_caches
// [.strtab] _dev_err
// [.strtab] dev_attr_current_pr
// [.strtab] dev_attr_initial_pr
// [.strtab] class_unregister
// [.strtab] device_unregister
// [.strtab] devm_extcon_dev_register
// [.strtab] __class_register
// [.strtab] typec_unregister_partner
// [.strtab] typec_register_partner
// [.strtab] find_svid_handler
// [.strtab] power_supply_unreg_notifier
// [.strtab] power_supply_reg_notifier
// [.strtab] __typeid__ZTSFvvE_global_addr
// [.strtab] __typeid__ZTSFvP18usbpd_svid_handlerE_global_addr
// [.strtab] __typeid__ZTSFvP18usbpd_svid_handlerjPKjiE_global_addr
// [.strtab] __typeid__ZTSFvP5usbpdP6rx_msgE_global_addr
// [.strtab] __typeid__ZTSFvP5usbpdE_global_addr
// [.strtab] __typeid__ZTSFvP18usbpd_svid_handlerbE_global_addr
// [.strtab] dev_attr_current_dr
// [.strtab] dev_attr_initial_dr
// [.strtab] add_uevent_var
// [.strtab] enter_state_snk_startup
// [.strtab] handle_state_snk_startup
// [.strtab] enter_state_src_startup
// [.strtab] handle_state_src_startup
// [.strtab] usbpd_group
// [.strtab] device_init_wakeup
// [.strtab] handle_state_src_startup_wait_for_vdm_resp
// [.strtab] msleep
// [.strtab] start_usb_dp
// [.strtab] handle_state_drs_send_dr_swap
// [.strtab] usbpd_do_swap
// [.strtab] vconn_swap
// [.strtab] handle_state_prs_src_snk_send_swap
// [.strtab] handle_state_prs_snk_src_send_swap
// [.strtab] dev_attr_get_battery_cap
// [.strtab] handle_get_battery_cap
// [.strtab] _dev_info
// [.strtab] dev_attr_rdo
// [.strtab] dev_attr_select_pdo
// [.strtab] __kstrtabns_usbpd_select_pdo
// [.strtab] __crc_usbpd_select_pdo
// [.strtab] __kstrtab_usbpd_select_pdo
// [.strtab] __ksymtab_usbpd_select_pdo
// [.strtab] __kstrtabns_usbpd_fetch_pdo
// [.strtab] __crc_usbpd_fetch_pdo
// [.strtab] __kstrtab_usbpd_fetch_pdo
// [.strtab] __ksymtab_usbpd_fetch_pdo
// [.strtab] handle_state_unknown
// [.strtab] phy_shutdown
// [.strtab] _dev_warn
// [.strtab] usbpd_startup_common
// [.strtab] __kstrtabns_usbpd_get_plug_orientation
// [.strtab] __crc_usbpd_get_plug_orientation
// [.strtab] __kstrtab_usbpd_get_plug_orientation
// [.strtab] __ksymtab_usbpd_get_plug_orientation
// [.strtab] dev_attr_adapter_version
// [.strtab] queue_work_on
// [.strtab] queue_delayed_work_on
// [.strtab] handle_state_prs_src_snk_wait_source_on
// [.strtab] handle_state_prs_snk_src_source_on
// [.strtab] handle_state_vcs_wait_for_vconn
// [.strtab] delayed_work_timer_fn
// [.strtab] strlen
// [.strtab] __kstrtabns_kick_usbpd_vbus_sm
// [.strtab] __crc_kick_usbpd_vbus_sm
// [.strtab] __kstrtab_kick_usbpd_vbus_sm
// [.strtab] __ksymtab_kick_usbpd_vbus_sm
// [.strtab] kick_sm
// [.strtab] usbpd_sm
// [.strtab] __kstrtabns_usbpd_send_svdm
// [.strtab] __crc_usbpd_send_svdm
// [.strtab] __kstrtab_usbpd_send_svdm
// [.strtab] __ksymtab_usbpd_send_svdm
// [.strtab] __kstrtabns_usbpd_send_vdm
// [.strtab] __crc_usbpd_send_vdm
// [.strtab] __kstrtab_usbpd_send_vdm
// [.strtab] __ksymtab_usbpd_send_vdm
// [.strtab] __param_str_pd_vbus_ctrl
// [.strtab] __param_pd_vbus_ctrl
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] device_del
// [.strtab] hrtimer_cancel
// [.strtab] start_usb_peripheral
// [.strtab] pd_lobal
// [.strtab] _printk
// [.strtab] psy_changed_notifier_work
// [.strtab] start_usb_peripheral_work
// [.strtab] pd_request_chunk_work
// [.strtab] enter_state_snk_transition_sink
// [.strtab] handle_state_snk_transition_sink
// [.strtab] mutex_unlock
// [.strtab] mutex_lock
// [.strtab] __cfi_check
// [.strtab] dev_attr_rdo_h
// [.strtab] dev_attr_pdo_h
// [.strtab] trigger_tx_msg
// [.strtab] pd_send_ext_msg
// [.strtab] pd_send_msg
// [.strtab] usbpd_ipc_log
// [.strtab] ipc_log_string
// [.strtab] __cfi_slowpath_diag
// [.strtab] snprintf
// [.strtab] scnprintf
// [.strtab] sscanf
// [.strtab] enter_state_prs_src_snk_transition_to_off
// [.strtab] handle_state_prs_src_snk_transition_to_off
// [.strtab] enter_state_prs_snk_src_transition_to_off
// [.strtab] handle_state_prs_snk_src_transition_to_off
// [.strtab] device_initialize
// [.strtab] _raw_spin_lock_irqsave
// [.strtab] destroy_workqueue
// [.strtab] alloc_workqueue
// [.strtab] complete
// [.strtab] dev_attr_current_state
// [.strtab] extcon_set_state
// [.strtab] usbpd_set_state
// [.strtab] reset_vdm_state
// [.strtab] usleep_range_state
// [.strtab] ipc_log_context_create
// [.strtab] __kstrtabns_usbpd_create
// [.strtab] __crc_usbpd_create
// [.strtab] __kstrtab_usbpd_create
// [.strtab] __ksymtab_usbpd_create
// [.strtab] android_kmalloc_64_create
// [.strtab] devm_extcon_dev_allocate
// [.strtab] usbpd_release
// [.strtab] _raw_spin_unlock_irqrestore
// [.strtab] hard_reset_store
// [.strtab] get_battery_status_store
// [.strtab] pd_vbus_store
// [.strtab] verify_process_store
// [.strtab] get_battery_cap_store
// [.strtab] select_pdo_store
// [.strtab] request_vdm_cmd_store
// [.strtab] usbpd_verifed_store
// [.strtab] get_connector_type
// [.strtab] completion_done
// [.strtab] usbpd_release_ss_lane
// [.strtab] power_supply_get_by_name
// [.strtab] dev_set_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] typec_set_pwr_role
// [.strtab] typec_set_data_role
// [.strtab] __kstrtabns_devm_usbpd_get_by_phandle
// [.strtab] __crc_devm_usbpd_get_by_phandle
// [.strtab] __kstrtab_devm_usbpd_get_by_phandle
// [.strtab] __ksymtab_devm_usbpd_get_by_phandle
// [.strtab] of_parse_phandle
// [.strtab] regulator_disable
// [.strtab] regulator_enable
// [.strtab] usbpd_extcon_cable
// [.strtab] pm_stay_awake
// [.strtab] kfree
// [.strtab] of_find_device_by_node
// [.strtab] __devres_alloc_node
// [.strtab] typec_set_pwr_opmode
// [.strtab] put_device
// [.strtab] match_usbpd_device
// [.strtab] class_find_device
// [.strtab] kmem_cache_alloc_trace
// [.strtab] __kstrtabns_smb_get_usbpd
// [.strtab] __crc_smb_get_usbpd
// [.strtab] __kstrtab_smb_get_usbpd
// [.strtab] __ksymtab_smb_get_usbpd
// [.strtab] __kstrtabns_usbpd_vdm_in_suspend
// [.strtab] __crc_usbpd_vdm_in_suspend
// [.strtab] __kstrtab_usbpd_vdm_in_suspend
// [.strtab] __ksymtab_usbpd_vdm_in_suspend
// [.strtab] dev_attr_request_vdm_cmd
// [.strtab] __kstrtabns_usbpd_unregister_svid
// [.strtab] __crc_usbpd_unregister_svid
// [.strtab] __kstrtab_usbpd_unregister_svid
// [.strtab] __ksymtab_usbpd_unregister_svid
// [.strtab] __kstrtabns_usbpd_register_svid
// [.strtab] __crc_usbpd_register_svid
// [.strtab] __kstrtab_usbpd_register_svid
// [.strtab] __ksymtab_usbpd_register_svid
// [.strtab] dev_attr_adapter_svid
// [.strtab] __list_del_entry_valid
// [.strtab] __list_add_valid
// [.strtab] dev_attr_adapter_id
// [.strtab] __kstrtabns_usbpd_get_src_cap_id
// [.strtab] __crc_usbpd_get_src_cap_id
// [.strtab] __kstrtab_usbpd_get_src_cap_id
// [.strtab] __ksymtab_usbpd_get_src_cap_id
// [.strtab] dev_attr_src_cap_id
// [.strtab] phy_msg_received
// [.strtab] phy_sig_received
// [.strtab] iio_read_channel_processed
// [.strtab] enter_state_src_disabled
// [.strtab] psy_changed
// [.strtab] dev_attr_usbpd_verifed
// [.strtab] handle_get_src_cap_extended
// [.strtab] devres_add
// [.strtab] device_add
// [.strtab] __init_swait_queue_head
// [.strtab] __kmalloc
// [.strtab] krealloc
// [.strtab] extcon_set_state_sync
// [.strtab] usbpd_mi_disconnect_cb
// [.strtab] usbpd_mi_connect_cb
// [.strtab] usbpd_mi_vdm_received_cb
// [.strtab] typec_get_drvdata
// [.strtab] _note_9
// [.strtab] $x.199
// [.strtab] $x.99
// [.strtab] $d.289
// [.strtab] $x.189
// [.strtab] $d.89
// [.strtab] $d.279
// [.strtab] $x.179
// [.strtab] $x.79
// [.strtab] $d.269
// [.strtab] $d.169
// [.strtab] $x.69
// [.strtab] $d.259
// [.strtab] $x.159
// [.strtab] $x.59
// [.strtab] $d.249
// [.strtab] $x.149
// [.strtab] $d.49
// [.strtab] $d.239
// [.strtab] $x.139
// [.strtab] $d.39
// [.strtab] $d.229
// [.strtab] $x.129
// [.strtab] $x.29
// [.strtab] $d.29
// [.strtab] $d.219
// [.strtab] $x.119
// [.strtab] $x.19
// [.strtab] $d.19
// [.strtab] $x.209
// [.strtab] $x.109
// [.strtab] $x.9
// [.strtab] $d.9
// [.strtab] _note_8
// [.strtab] $x.198
// [.strtab] $x.98
// [.strtab] $d.288
// [.strtab] $x.188
// [.strtab] $x.88
// [.strtab] $d.278
// [.strtab] $x.178
// [.strtab] $x.78
// [.strtab] $d.268
// [.strtab] $x.168
// [.strtab] $x.68
// [.strtab] $d.258
// [.strtab] $x.158
// [.strtab] $x.58
// [.strtab] __UNIQUE_ID_min_sink_currenttype448
// [.strtab] $d.248
// [.strtab] $x.148
// [.strtab] $x.48
// [.strtab] $d.238
// [.strtab] $x.138
// [.strtab] $x.38
// [.strtab] $d.228
// [.strtab] $x.128
// [.strtab] $x.28
// [.strtab] $d.28
// [.strtab] $d.218
// [.strtab] $x.118
// [.strtab] $x.18
// [.strtab] $d.18
// [.strtab] $d.208
// [.strtab] $x.108
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] enter_state_snk_select_capability.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_snk_select_capability.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_snk_evaluate_capability.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_src_negotiate_capability.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_snk_discovery.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_error_recovery.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_snk_ready.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_snk_ready.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_src_ready.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_src_ready.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] get_src_cap_ext_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] contract_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] get_battery_status_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] get_status_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] get_pps_status_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] pd_vbus_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] verify_process_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] current_pr_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] initial_pr_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] current_dr_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] initial_dr_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] get_battery_cap_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] rdo_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] select_pdo_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] adapter_version_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] pdo_n_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] rdo_h_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] pdo_h_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] current_state_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] request_vdm_cmd_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] adapter_svid_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] adapter_id_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] src_cap_id_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_verifed_show.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] devm_usbpd_put.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] pd_timeout.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_uevent.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_snk_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_snk_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_src_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_src_send_capabilities_wait.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_send_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_send_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_hard_reset.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_typec_pr_set.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_typec_dr_set.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_typec_port_type_set.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_snk_wait_for_capabilities.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_snk_wait_for_capabilities.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_src_send_capabilities.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_src_send_capabilities.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_snk_startup.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_snk_startup.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_src_startup.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_src_startup.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_src_startup_wait_for_vdm_resp.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_drs_send_dr_swap.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_prs_src_snk_send_swap.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_prs_snk_src_send_swap.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_unknown.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] phy_shutdown.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_prs_src_snk_wait_source_on.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_prs_snk_src_source_on.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_vcs_wait_for_vconn.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_sm.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] psy_changed_notifier_work.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] start_usb_peripheral_work.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] pd_request_chunk_work.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_snk_transition_sink.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_snk_transition_sink.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_prs_src_snk_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_prs_src_snk_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_prs_snk_src_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] handle_state_prs_snk_src_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_release.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] hard_reset_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] get_battery_status_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] pd_vbus_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] verify_process_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] get_battery_cap_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] select_pdo_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] request_vdm_cmd_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_verifed_store.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_release_ss_lane.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] match_usbpd_device.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] phy_msg_received.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] phy_sig_received.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] enter_state_src_disabled.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] psy_changed.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_mi_disconnect_cb.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_mi_connect_cb.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] usbpd_mi_vdm_received_cb.e7ce0f5c9173271e56101f64bf7b44f7
// [.strtab] __UNIQUE_ID_license497
// [.strtab] $d.297
// [.strtab] $x.197
// [.strtab] $x.97
// [.strtab] $d.287
// [.strtab] $x.187
// [.strtab] $x.87
// [.strtab] $d.277
// [.strtab] $x.177
// [.strtab] $x.77
// [.strtab] $d.267
// [.strtab] $x.167
// [.strtab] $x.67
// [.strtab] $d.257
// [.strtab] $x.157
// [.strtab] $x.57
// [.strtab] $d.247
// [.strtab] $x.147
// [.strtab] $d.47
// [.strtab] $d.237
// [.strtab] $x.137
// [.strtab] $d.37
// [.strtab] $d.227
// [.strtab] $x.127
// [.strtab] $x.27
// [.strtab] $d.27
// [.strtab] $d.217
// [.strtab] $x.117
// [.strtab] $x.17
// [.strtab] $d.17
// [.strtab] $x.207
// [.strtab] $x.107
// [.strtab] $x.7
// [.strtab] $d.7
// [.strtab] __UNIQUE_ID_description496
// [.strtab] $d.296
// [.strtab] $x.196
// [.strtab] $x.96
// [.strtab] $d.286
// [.strtab] $x.186
// [.strtab] $d.86
// [.strtab] $d.276
// [.strtab] $d.176
// [.strtab] $x.76
// [.strtab] $d.266
// [.strtab] $x.166
// [.strtab] $x.66
// [.strtab] $d.256
// [.strtab] $x.156
// [.strtab] $x.56
// [.strtab] $d.246
// [.strtab] $x.146
// [.strtab] $x.46
// [.strtab] $d.236
// [.strtab] $x.136
// [.strtab] $x.36
// [.strtab] $d.226
// [.strtab] $x.126
// [.strtab] $x.26
// [.strtab] $d.26
// [.strtab] $x.116
// [.strtab] $x.16
// [.strtab] $d.16
// [.strtab] $x.206
// [.strtab] $x.106
// [.strtab] $x.6
// [.strtab] $d.6
// [.strtab] $d.295
// [.strtab] $x.195
// [.strtab] $x.95
// [.strtab] $d.285
// [.strtab] $x.185
// [.strtab] $x.85
// [.strtab] $d.275
// [.strtab] $x.175
// [.strtab] $x.75
// [.strtab] $d.265
// [.strtab] $d.165
// [.strtab] $x.65
// [.strtab] $d.255
// [.strtab] $x.155
// [.strtab] $x.55
// [.strtab] $d.245
// [.strtab] $x.145
// [.strtab] $d.45
// [.strtab] $d.235
// [.strtab] $x.135
// [.strtab] $x.35
// [.strtab] $d.225
// [.strtab] $x.125
// [.strtab] $x.25
// [.strtab] $d.25
// [.strtab] $d.215
// [.strtab] $x.115
// [.strtab] $x.15
// [.strtab] $d.15
// [.strtab] $x.205
// [.strtab] $x.105
// [.strtab] $x.5
// [.strtab] $d.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.294
// [.strtab] $x.194
// [.strtab] $x.94
// [.strtab] $d.284
// [.strtab] $x.184
// [.strtab] $d.84
// [.strtab] $d.274
// [.strtab] $x.174
// [.strtab] $x.74
// [.strtab] $d.264
// [.strtab] $d.164
// [.strtab] $x.64
// [.strtab] $d.254
// [.strtab] $x.154
// [.strtab] $x.54
// [.strtab] $d.244
// [.strtab] $d.144
// [.strtab] $x.44
// [.strtab] $d.234
// [.strtab] $d.134
// [.strtab] $x.34
// [.strtab] $d.224
// [.strtab] $x.124
// [.strtab] $x.24
// [.strtab] $d.24
// [.strtab] $d.214
// [.strtab] $x.114
// [.strtab] $x.14
// [.strtab] $d.14
// [.strtab] $d.204
// [.strtab] $x.104
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.293
// [.strtab] $x.193
// [.strtab] $x.93
// [.strtab] $d.283
// [.strtab] $x.183
// [.strtab] $x.83
// [.strtab] $d.273
// [.strtab] $x.173
// [.strtab] $x.73
// [.strtab] $d.263
// [.strtab] $x.163
// [.strtab] $x.63
// [.strtab] $d.253
// [.strtab] $x.153
// [.strtab] $d.53
// [.strtab] $d.243
// [.strtab] $x.143
// [.strtab] $d.43
// [.strtab] $d.233
// [.strtab] $x.133
// [.strtab] $x.33
// [.strtab] $d.223
// [.strtab] $x.123
// [.strtab] $x.23
// [.strtab] $d.23
// [.strtab] $d.213
// [.strtab] $x.113
// [.strtab] $x.13
// [.strtab] $d.13
// [.strtab] $d.303
// [.strtab] $x.203
// [.strtab] $x.103
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.292
// [.strtab] $x.192
// [.strtab] $x.92
// [.strtab] __UNIQUE_ID_pd_vbus_ctrl482
// [.strtab] $d.282
// [.strtab] $x.182
// [.strtab] $x.82
// [.strtab] $d.272
// [.strtab] $d.172
// [.strtab] $x.72
// [.strtab] $d.262
// [.strtab] $x.162
// [.strtab] $x.62
// [.strtab] $d.252
// [.strtab] $x.152
// [.strtab] $x.52
// [.strtab] $d.242
// [.strtab] $x.142
// [.strtab] usbpd_create.__key.42
// [.strtab] $x.42
// [.strtab] $d.232
// [.strtab] $x.132
// [.strtab] $x.32
// [.strtab] $d.222
// [.strtab] $x.122
// [.strtab] $x.22
// [.strtab] $d.22
// [.strtab] $d.212
// [.strtab] $d.112
// [.strtab] $x.12
// [.strtab] $d.12
// [.strtab] $x.202
// [.strtab] $x.102
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] __UNIQUE_ID_name291
// [.strtab] $d.291
// [.strtab] $x.191
// [.strtab] $x.91
// [.strtab] __UNIQUE_ID_pd_vbus_ctrltype481
// [.strtab] $d.281
// [.strtab] $x.181
// [.strtab] $d.81
// [.strtab] $d.271
// [.strtab] $x.171
// [.strtab] $x.71
// [.strtab] $d.261
// [.strtab] $x.161
// [.strtab] $x.61
// [.strtab] $d.251
// [.strtab] $x.151
// [.strtab] $d.51
// [.strtab] $d.241
// [.strtab] $x.141
// [.strtab] $d.41
// [.strtab] $d.231
// [.strtab] $x.131
// [.strtab] $x.31
// [.strtab] $d.31
// [.strtab] $d.221
// [.strtab] $x.121
// [.strtab] $x.21
// [.strtab] $d.21
// [.strtab] $d.211
// [.strtab] $x.111
// [.strtab] $x.11
// [.strtab] $d.11
// [.strtab] $x.201
// [.strtab] $x.101
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.290
// [.strtab] $x.190
// [.strtab] $x.90
// [.strtab] $d.280
// [.strtab] $x.180
// [.strtab] $x.80
// [.strtab] $d.270
// [.strtab] $x.170
// [.strtab] $x.70
// [.strtab] $d.260
// [.strtab] $x.160
// [.strtab] $x.60
// [.strtab] .Ltmp50
// [.strtab] $d.250
// [.strtab] $x.150
// [.strtab] $x.50
// [.strtab] $d.240
// [.strtab] $x.140
// [.strtab] $x.40
// [.strtab] $d.230
// [.strtab] $x.130
// [.strtab] $x.30
// [.strtab] $d.30
// [.strtab] $d.220
// [.strtab] $x.120
// [.strtab] $x.20
// [.strtab] $d.20
// [.strtab] $d.210
// [.strtab] $x.110
// [.strtab] $x.10
// [.strtab] $d.10
// [.strtab] $x.200
// [.strtab] $x.100

/* ---- usbpd_get_psy_iio_property @ 00105a48 ---- */

int usbpd_get_psy_iio_property(long *param_1,uint param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_3c = 0;
  if (0xd < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x105b28);
    (*pcVar1)();
  }
  iVar2 = iio_read_channel_processed(param_1[(ulong)param_2 + 0xb7],&local_3c);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar3,
                   "usbpd_get_psy_iio_property",param_2);
    _dev_err(param_1,"failed to get IIO property: %d\n",param_2);
  }
  else {
    iVar2 = 0;
    *param_3 = local_3c;
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- usbpd_set_psy_iio_property @ 00105b2c ---- */

int usbpd_set_psy_iio_property(long *param_1,uint param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (0xd < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x105bd8);
    (*pcVar1)();
  }
  *in_x18 = unaff_x30;
  iVar2 = iio_write_channel_raw(param_1[(ulong)param_2 + 0xb7],*param_3);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar3,
                   "usbpd_set_psy_iio_property",param_2);
    _dev_err(param_1,"failed to set IIO property: %d\n",param_2);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ---- usbpd_get_plug_orientation @ 00105bd8 ---- */

void usbpd_get_plug_orientation(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_2c = 0;
  iVar2 = iio_read_channel_processed(param_1[0xb8],&local_2c);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar3,
                   "usbpd_get_psy_iio_property",1);
    _dev_err(param_1,"failed to get IIO property: %d\n",1);
    uVar1 = 0;
  }
  else {
    uVar1 = local_2c;
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ---- usbpd_register_svid @ 00105c90 ---- */

undefined8 usbpd_register_svid(long *param_1,short *param_2)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  short *psVar5;
  undefined8 *in_x18;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = find_svid_handler(param_1,*param_2);
  if (lVar2 == 0) {
    if ((*(long *)(param_2 + 4) != 0) && (*(long *)(param_2 + 8) != 0)) {
      lVar2 = param_1[0xe];
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      psVar5 = param_2 + 0x18;
      ipc_log_string(usbpd_ipc_log,"%s: %s: registered handler(%pK) for SVID 0x%04x\n",lVar2,
                     "usbpd_register_svid",param_2,*param_2);
      mutex_lock(param_1 + 0xf4);
      puVar7 = (undefined8 *)param_1[0xfb];
      uVar3 = __list_add_valid(psVar5,puVar7,param_1 + 0xfa);
      if ((uVar3 & 1) != 0) {
        param_1[0xfb] = (long)psVar5;
        *(long **)(param_2 + 0x18) = param_1 + 0xfa;
        *(undefined8 **)(param_2 + 0x1c) = puVar7;
        *puVar7 = psVar5;
      }
      mutex_unlock(param_1 + 0xf4);
      *(code **)(param_2 + 0xc) = usbpd_release_ss_lane_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
      if ((1 < *(uint *)(param_1 + 0xef)) &&
         (uVar3 = (ulong)*(uint *)(param_1 + 0xf1), 0 < (int)*(uint *)(param_1 + 0xf1))) {
        psVar5 = (short *)param_1[0xf0];
        do {
          if (*psVar5 == *param_2) {
            lVar2 = param_1[0xe];
            if (lVar2 == 0) {
              lVar2 = *param_1;
            }
            ipc_log_string(usbpd_ipc_log,"%s: %s: Notify SVID: 0x%04x disconnect\n",lVar2,
                           "usbpd_register_svid");
            pcVar6 = *(code **)(param_2 + 4);
            if (pcVar6 != usbpd_mi_connect_cb_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt) {
              __cfi_slowpath_diag(0xd57c2617ec7ae42,pcVar6,&DAT_00100760);
            }
            (*pcVar6)(param_2,*(undefined1 *)((long)param_1 + 0x56a));
            *(undefined1 *)(param_2 + 0x20) = 1;
            return 0;
          }
          uVar3 = uVar3 - 1;
          psVar5 = psVar5 + 1;
        } while (uVar3 != 0);
      }
      return 0;
    }
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: SVID 0x%04x connect/disconnect must be non-NULL\n",lVar2,
                   "usbpd_register_svid",*param_2);
    sVar1 = *param_2;
    pcVar4 = "SVID 0x%04x connect/disconnect must be non-NULL\n";
  }
  else {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: SVID 0x%04x already registered\n",lVar2,
                   "usbpd_register_svid",*param_2);
    sVar1 = *param_2;
    pcVar4 = "SVID 0x%04x already registered\n";
  }
  _dev_err(param_1,pcVar4,sVar1);
  return 0xffffffea;
}



/* ---- find_svid_handler @ 00105ea8 ---- */

short * find_svid_handler(long param_1,short param_2)

{
  uint *puVar1;
  long lVar2;
  short *psVar3;
  long *plVar4;
  undefined8 *in_x18;
  short *psVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  puVar1 = (uint *)(lVar2 + 0x10);
  if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
    mutex_lock(param_1 + 0x7a0);
  }
  plVar4 = *(long **)(param_1 + 2000);
  do {
    if ((long *)(param_1 + 2000) == plVar4) {
      puVar1 = (uint *)(lVar2 + 0x10);
      psVar3 = (short *)0x0;
      psVar5 = (short *)0x0;
      if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
LAB_00105f58:
        psVar3 = psVar5;
        mutex_unlock(param_1 + 0x7a0);
      }
      return psVar3;
    }
    psVar5 = (short *)(plVar4 + -6);
    if (*psVar5 == param_2) {
      puVar1 = (uint *)(lVar2 + 0x10);
      if (((*puVar1 & 0xf0000) != 0 || (*puVar1 & 0xf00000) != 0) || (*puVar1 & 0xff00) != 0) {
        return psVar5;
      }
      goto LAB_00105f58;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}



/* ---- usbpd_release_ss_lane.e7ce0f5c9173271e56101f64bf7b44f7 @ 00105fd0 ---- */

undefined8 usbpd_release_ss_lane_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = 0xffffffea;
  if ((param_1 != (long *)0x0) && (param_2 != (undefined2 *)0x0)) {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: hdlr:%pK svid:%d",lVar2,"usbpd_release_ss_lane",param_2,
                   *param_2);
    if (*(short *)((long)param_1 + 0x802) == 0) {
      *(undefined2 *)((long)param_1 + 0x802) = *param_2;
      start_usb_dp(param_1,0);
      uVar1 = 0;
    }
    else {
      lVar2 = param_1[0xe];
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: -EBUSY: ss_lanes are already used by(%d)",lVar2,
                     "usbpd_release_ss_lane");
      uVar1 = 0xfffffff0;
    }
  }
  return uVar1;
}



/* ---- usbpd_unregister_svid @ 00106090 ---- */

void usbpd_unregister_svid(long *param_1,undefined2 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined2 *puVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
    lVar3 = *param_1;
  }
  puVar4 = param_2 + 0x18;
  ipc_log_string(usbpd_ipc_log,"%s: %s: unregistered handler(%pK) for SVID 0x%04x\n",lVar3,
                 "usbpd_unregister_svid",param_2,*param_2);
  mutex_lock(param_1 + 0xf4);
  uVar2 = __list_del_entry_valid(puVar4);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    plVar1 = *(long **)(param_2 + 0x1c);
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
  }
  *(undefined2 **)(param_2 + 0x18) = puVar4;
  *(undefined2 **)(param_2 + 0x1c) = puVar4;
  mutex_unlock(param_1 + 0xf4);
  return;
}



/* ---- usbpd_send_vdm @ 00106130 ---- */

undefined8 usbpd_send_vdm(long *param_1,undefined4 param_2,void *param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1[0xf2] != 0) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Discarding previously queued VDM tx (SVID:0x%04x)\n",lVar4
                   ,"usbpd_send_vdm",*(undefined2 *)(param_1[0xf2] + 2));
    _dev_warn(param_1,"Discarding previously queued VDM tx (SVID:0x%04x)\n",
              *(undefined2 *)(param_1[0xf2] + 2));
    kfree(param_1[0xf2]);
    param_1[0xf2] = 0;
  }
  lVar4 = 0x38;
  if (android_kmalloc_64_create != '\0') {
    lVar4 = 0x30;
  }
  puVar2 = (undefined4 *)kmem_cache_alloc_trace(*(undefined8 *)(&kmalloc_caches + lVar4),0xdc0,0x20)
  ;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xfffffff4;
  }
  else {
    *puVar2 = param_2;
    if ((param_3 != (void *)0x0) && (param_4 != 0)) {
      memcpy(puVar2 + 1,param_3,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2
            );
    }
    cVar1 = *(char *)((long)param_1 + 0x569);
    param_1[0xf2] = (long)puVar2;
    *(undefined1 *)(param_1 + 0xfd) = 0;
    puVar2[7] = param_4 + 1;
    if (cVar1 != '\0') {
      pm_stay_awake(param_1);
      uVar3 = usbpd_ipc_log;
      lVar4 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(uVar3,"%s: %s: delay %d ms",lVar4,"kick_sm",2);
      hrtimer_start_range_ns(param_1 + 0x96,2000000,0,1);
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ---- kick_sm @ 001062a0 ---- */

void kick_sm(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pm_stay_awake();
  *(undefined1 *)(param_1 + 0x9f) = 1;
  if (param_2 == 0) {
    queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
  }
  else {
    lVar1 = param_1[0xe];
    if (lVar1 == 0) {
      lVar1 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: delay %d ms",lVar1,"kick_sm",param_2);
    hrtimer_start_range_ns(param_1 + 0x96,(long)param_2 * 1000000,0,1);
  }
  return;
}



/* ---- usbpd_send_svdm @ 0010633c ---- */

void usbpd_send_svdm(long *param_1,ushort param_2,uint param_3,int param_4,int param_5,
                    undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar2 = param_1[0xe];
  uVar1 = param_3 & 0xff | param_4 << 6 | param_5 << 8 |
          (uint)param_2 << 0x10 | (uint)(*(int *)((long)param_1 + 0x63c) == 2) << 0xd | 0x8000;
  if (lVar2 == 0) {
    lVar2 = *param_1;
  }
  ipc_log_string(usbpd_ipc_log,
                 "%s: %s: VDM tx: svid:%04x ver:%d obj_pos:%d cmd:%x cmd_type:%x svdm_hdr:%x\n",
                 lVar2,"usbpd_send_svdm",param_2,*(int *)((long)param_1 + 0x63c) == 2,param_5,
                 param_3 & 0xff,param_4,uVar1);
  usbpd_send_vdm(param_1,uVar1,param_6,param_7);
  return;
}



/* ---- usbpd_vdm_in_suspend @ 00106400 ---- */

void usbpd_vdm_in_suspend(long *param_1,byte param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = param_1[0xe];
  if (lVar1 == 0) {
    lVar1 = *param_1;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: VDM in_suspend:%d\n",lVar1,"usbpd_vdm_in_suspend",
                 param_2 & 1);
  *(byte *)(param_1 + 0xfd) = param_2 & 1;
  return;
}



/* ---- pd_vbus_reset @ 00106460 ---- */

void pd_vbus_reset(long param_1)

{
  undefined *puVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_1 == 0) {
    puVar1 = "<3>pd_vbus_reset, pd is null\n";
  }
  else {
    if (*(char *)(param_1 + 0x768) != '\0') {
      regulator_disable(*(undefined8 *)(param_1 + 0x758));
      *(undefined1 *)(param_1 + 0x768) = 0;
      if (pd_vbus_ctrl == 0) {
        pd_vbus_ctrl = 5000;
      }
      msleep();
      enable_vbus(param_1);
      return;
    }
    puVar1 = "<3>pd_vbus is not enabled yet\n";
  }
  _printk(puVar1);
  return;
}



/* ---- enable_vbus @ 001064e0 ---- */

void enable_vbus(long *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_38 = *(long *)(lVar5 + 0x5e0);
  iVar3 = 99;
  local_40 = 0;
  do {
    iVar2 = power_supply_get_property(param_1[0xb2],0xc,&local_40);
    if ((iVar2 != 0) || ((int)local_40 < 0xc3501)) {
      if (0x62 < iVar3) goto LAB_0010656c;
      break;
    }
    usleep_range_state(20000,30000,2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  msleep(100);
LAB_0010656c:
  if (param_1[0xeb] == 0) {
    uVar4 = devm_regulator_get(param_1[0xc],"vbus");
    param_1[0xeb] = uVar4;
    if (0xfffffffffffff000 < uVar4) {
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to get vbus\n",lVar5,"enable_vbus");
      _dev_err(param_1,"Unable to get vbus\n");
      goto LAB_001065f4;
    }
  }
  iVar3 = regulator_enable();
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0xed) = 1;
  }
  else {
    lVar5 = param_1[0xe];
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to enable vbus (%d)\n",lVar5,"enable_vbus",iVar3);
    _dev_err(param_1,"Unable to enable vbus (%d)\n",iVar3);
  }
  iVar3 = -10;
  do {
    iVar2 = power_supply_get_property(param_1[0xb2],0xc,&local_40);
    if ((iVar2 != 0) || (0x487aaf < (int)local_40)) {
      if (iVar2 != 0) {
        msleep(100);
      }
      break;
    }
    usleep_range_state(10000,12000,2);
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + 1;
  } while (bVar1);
LAB_001065f4:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- usbpd_vbus_sm @ 001066ac ---- */

void usbpd_vbus_sm(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = pd_lobal;
  if (0x20 < *(uint *)(pd_lobal + 0x508)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10675c);
    (*pcVar2)();
  }
  _printk("<3>usbpd_vbus_sm handle state %s, vbus %d\n",(&usbpd_state_strings)[*(uint *)(pd_lobal + 0x508)],
          *(undefined1 *)(pd_lobal + 0x768));
  if (lVar1 == 0) {
    puVar3 = "<3>pd_vbus_reset, pd is null\n";
  }
  else {
    if (*(char *)(lVar1 + 0x768) != '\0') {
      regulator_disable(*(undefined8 *)(lVar1 + 0x758));
      *(undefined1 *)(lVar1 + 0x768) = 0;
      if (pd_vbus_ctrl == 0) {
        pd_vbus_ctrl = 5000;
      }
      msleep();
      enable_vbus(lVar1);
      return;
    }
    puVar3 = "<3>pd_vbus is not enabled yet\n";
  }
  _printk(puVar3);
  return;
}



/* ---- kick_usbpd_vbus_sm @ 0010675c ---- */

void kick_usbpd_vbus_sm(void)

{
  code *pcVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pm_stay_awake(pd_lobal);
  if (0x20 < *(uint *)(pd_lobal + 0x508)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x1067d8);
    (*pcVar1)();
  }
  _printk("<3>kick_usbpd_vbus_sm handle state %s, vbus %d\n",(&usbpd_state_strings)[*(uint *)(pd_lobal + 0x508)],
          *(undefined1 *)(pd_lobal + 0x768));
  queue_delayed_work_on(0x20,*(undefined8 *)(pd_lobal + 0x390),pd_lobal + 0x428,100);
  return;
}



/* ---- devm_usbpd_get_by_phandle @ 001067d8 ---- */

long devm_usbpd_get_by_phandle(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (DAT_00100238 == 0) {
    lVar1 = -0xb;
  }
  else if (*(long *)(param_1 + 0x2f0) == 0) {
    lVar1 = -0x16;
  }
  else {
    lVar1 = of_parse_phandle(*(long *)(param_1 + 0x2f0),param_2,0);
    if (lVar1 == 0) {
      lVar1 = -6;
    }
    else {
      lVar1 = of_find_device_by_node();
      if (lVar1 == 0) {
        lVar1 = -0x13;
      }
      else {
        lVar2 = class_find_device(&usbpd_class,0,lVar1 + 0x10,
                                  match_usbpd_device_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt);
        if (lVar2 == 0) {
          platform_device_put(lVar1);
        }
        else {
          plVar3 = (long *)__devres_alloc_node(devm_usbpd_put_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt
                                               ,8,0xcc0,0xffffffff,"devm_usbpd_put");
          if (plVar3 == (long *)0x0) {
            put_device(lVar2);
            platform_device_put(lVar1);
            return -0xc;
          }
          lVar1 = *(long *)(lVar2 + 0x98);
          if (lVar1 != 0) {
            *plVar3 = lVar1;
            devres_add(param_1,plVar3);
            return lVar1;
          }
        }
        lVar1 = -0x205;
      }
    }
  }
  return lVar1;
}



/* ---- match_usbpd_device.e7ce0f5c9173271e56101f64bf7b44f7 @ 001068e4 ---- */

bool match_usbpd_device_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x60) == param_2;
}



/* ---- devm_usbpd_put.e7ce0f5c9173271e56101f64bf7b44f7 @ 001068fc ---- */

void devm_usbpd_put_e7ce0f5c9173271e56101f64bf7b44f7(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  put_device(*param_2);
  return;
}



/* ---- usbpd_typec_dr_set.e7ce0f5c9173271e56101f64bf7b44f7 @ 00106924 ---- */

undefined8 usbpd_typec_dr_set_e7ce0f5c9173271e56101f64bf7b44f7(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar3 = (long *)typec_get_drvdata();
  lVar5 = plVar3[0xe];
  if (lVar5 == 0) {
    lVar5 = *plVar3;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: Setting data role to %d\n",lVar5,"usbpd_typec_dr_set",
                 param_2);
  if (param_2 == 0) {
    if ((int)plVar3[200] == 1) {
      uVar4 = usbpd_do_swap(plVar3,1,100);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      iVar2 = (int)plVar3[200];
      if (iVar2 != 0) goto LAB_00106a2c;
    }
  }
  else {
    if (param_2 != 1) {
      lVar5 = plVar3[0xe];
      if (lVar5 == 0) {
        lVar5 = *plVar3;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: invalid role\n",lVar5,"usbpd_typec_dr_set");
      _dev_warn(plVar3,"invalid role\n");
      return 0xffffffea;
    }
    if ((int)plVar3[200] == 0) {
      uVar4 = usbpd_do_swap(plVar3,1,100);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      iVar2 = (int)plVar3[200];
      if (iVar2 != 1) {
LAB_00106a2c:
        lVar5 = plVar3[0xe];
        if (lVar5 == 0) {
          lVar5 = *plVar3;
        }
        puVar1 = "dfp";
        if (iVar2 != 1) {
          puVar1 = "ufp";
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: incorrect state (%s) after data_role swap\n",lVar5,
                       "usbpd_typec_dr_set",puVar1);
        puVar1 = "dfp";
        if ((int)plVar3[200] != 1) {
          puVar1 = "ufp";
        }
        _dev_err(plVar3,"incorrect state (%s) after data_role swap\n",puVar1);
        return 0xffffffb9;
      }
    }
  }
  return 0;
}



/* ---- usbpd_typec_pr_set.e7ce0f5c9173271e56101f64bf7b44f7 @ 00106a8c ---- */

undefined8 usbpd_typec_pr_set_e7ce0f5c9173271e56101f64bf7b44f7(undefined8 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar3 = (long *)typec_get_drvdata();
  lVar5 = plVar3[0xe];
  if (lVar5 == 0) {
    lVar5 = *plVar3;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: Setting power role to %d\n",lVar5,"usbpd_typec_pr_set",
                 param_2);
  if (param_2 == 0) {
    if (*(int *)((long)plVar3 + 0x644) == 1) {
      uVar4 = usbpd_do_swap(plVar3,0,2000);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      iVar2 = *(int *)((long)plVar3 + 0x644);
      if (iVar2 != 0) goto LAB_00106b94;
    }
  }
  else {
    if (param_2 != 1) {
      lVar5 = plVar3[0xe];
      if (lVar5 == 0) {
        lVar5 = *plVar3;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: invalid role\n",lVar5,"usbpd_typec_pr_set");
      _dev_warn(plVar3,"invalid role\n");
      return 0xffffffea;
    }
    if (*(int *)((long)plVar3 + 0x644) == 0) {
      uVar4 = usbpd_do_swap(plVar3,0,2000);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      iVar2 = *(int *)((long)plVar3 + 0x644);
      if (iVar2 != 1) {
LAB_00106b94:
        lVar5 = plVar3[0xe];
        if (lVar5 == 0) {
          lVar5 = *plVar3;
        }
        pcVar1 = "source";
        if (iVar2 != 1) {
          pcVar1 = "sink";
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: incorrect state (%s) after power_role swap\n",lVar5,
                       "usbpd_typec_pr_set",pcVar1);
        pcVar1 = "source";
        if (*(int *)((long)plVar3 + 0x644) != 1) {
          pcVar1 = "sink";
        }
        _dev_err(plVar3,"incorrect state (%s) after power_role swap\n",pcVar1);
        return 0xffffffb9;
      }
    }
  }
  return 0;
}



/* ---- usbpd_typec_port_type_set.e7ce0f5c9173271e56101f64bf7b44f7 @ 00106bf4 ---- */

undefined8
usbpd_typec_port_type_set_e7ce0f5c9173271e56101f64bf7b44f7(undefined8 param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar2 = (long *)typec_get_drvdata();
  lVar4 = plVar2[0xe];
  if (lVar4 == 0) {
    lVar4 = *plVar2;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: Setting mode to %d\n",lVar4,"usbpd_typec_port_type_set",
                 param_2);
  if (param_2 == 2) {
LAB_00106d1c:
    uVar3 = 0;
  }
  else {
    if (param_2 == 1) {
      uVar5 = 2;
LAB_00106c64:
      *(undefined4 *)((long)plVar2 + 0x634) = uVar5;
    }
    else if (param_2 == 0) {
      uVar5 = 3;
      goto LAB_00106c64;
    }
    iVar1 = iio_write_channel_raw(plVar2[0xba],0);
    if (iVar1 < 0) {
      lVar4 = plVar2[0xe];
      if (lVar4 == 0) {
        lVar4 = *plVar2;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                     "usbpd_set_psy_iio_property",3);
      _dev_err(plVar2,"failed to set IIO property: %d\n",3);
      if (*(int *)((long)plVar2 + 0x634) == 0) goto LAB_00106cc0;
LAB_00106c80:
      msleep(0x14);
      if ((((*(int *)((long)plVar2 + 0x634) == 0) ||
           (msleep(0x14), *(int *)((long)plVar2 + 0x634) == 0)) ||
          (msleep(0x14), *(int *)((long)plVar2 + 0x634) == 0)) ||
         (msleep(0x14), *(int *)((long)plVar2 + 0x634) == 0)) goto LAB_00106cc0;
    }
    else {
      if (*(int *)((long)plVar2 + 0x634) != 0) goto LAB_00106c80;
LAB_00106cc0:
      if (((*(int *)((long)plVar2 + 0x644) != -1) ||
          (msleep(300), *(int *)((long)plVar2 + 0x644) != -1)) ||
         ((msleep(300), *(int *)((long)plVar2 + 0x644) != -1 ||
          ((msleep(300), *(int *)((long)plVar2 + 0x644) != -1 ||
           (msleep(300), *(int *)((long)plVar2 + 0x644) != -1)))))) goto LAB_00106d1c;
    }
    lVar4 = plVar2[0xe];
    if (lVar4 == 0) {
      lVar4 = *plVar2;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: setting mode timed out\n",lVar4,
                   "usbpd_typec_port_type_set");
    _dev_err(plVar2,"setting mode timed out\n");
    iVar1 = iio_write_channel_raw(plVar2[0xba],1);
    if (iVar1 < 0) {
      lVar4 = plVar2[0xe];
      if (lVar4 == 0) {
        lVar4 = *plVar2;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                     "usbpd_set_psy_iio_property",3);
      _dev_err(plVar2,"failed to set IIO property: %d\n",3);
    }
    uVar3 = 0xffffff92;
  }
  return uVar3;
}



/* ---- usbpd_get_pps_status @ 00106e0c ---- */

undefined8 usbpd_get_pps_status(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x63c) == 1) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = trigger_tx_msg(param_1,param_1 + 0x8de);
    if ((int)uVar1 == 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x8e0);
    }
  }
  return uVar1;
}



/* ---- trigger_tx_msg @ 00106e64 ---- */

undefined8 trigger_tx_msg(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((int)param_1[0xa1] == 0x14) {
    *(undefined4 *)(param_1 + 0xca) = 0;
    *param_2 = 1;
    pm_stay_awake(param_1);
    *(undefined1 *)(param_1 + 0x9f) = 1;
    queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
    lVar1 = wait_for_completion_timeout(param_1 + 0xca,0xfa);
    uVar2 = 0;
    if (lVar1 == 0) {
      lVar1 = param_1[0xe];
      if (lVar1 == 0) {
        lVar1 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: request timed out\n",lVar1,"trigger_tx_msg");
      _dev_err(param_1,"request timed out\n");
      uVar2 = 0xffffff92;
    }
  }
  else {
    lVar1 = param_1[0xe];
    if (lVar1 == 0) {
      lVar1 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Cannot send msg\n",lVar1,"trigger_tx_msg");
    _dev_err(param_1,"Cannot send msg\n");
    uVar2 = 0xfffffff0;
  }
  *param_2 = 0;
  return uVar2;
}



/* ---- usbpd_get_src_cap_id @ 00106f70 ---- */

undefined2 usbpd_get_src_cap_id(long param_1)

{
  return *(undefined2 *)(param_1 + 0x554);
}



/* ---- usbpd_fetch_pdo @ 00106f80 ---- */

undefined8 usbpd_fetch_pdo(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *in_x18;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar7 = 0xffffffea;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    mutex_lock(param_1 + 0xe4);
    if (*(int *)((long)param_1 + 0x644) == 1) {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: not support in SRC mode\n",lVar6,"usbpd_fetch_pdo");
      _dev_err(param_1,"not support in SRC mode\n");
      uVar7 = 0xfffffdf4;
    }
    else {
      _printk("<3>usbpd pd=%x\n",param_1);
      uVar8 = 0;
      piVar9 = (int *)(param_2 + 0xc);
      do {
        uVar2 = *(uint *)((long)param_1 + uVar8 * 4 + 0x538);
        _printk("<3>PDO:%d\n",uVar2);
        if (uVar2 == 0) break;
        uVar8 = uVar8 + 1;
        uVar3 = uVar2 >> 0x1e;
        piVar9[2] = (int)uVar8;
        *(bool *)(piVar9 + -3) = (uVar2 & 0x30000000) == 0;
        piVar9[-2] = uVar3;
        if (uVar3 == 0) {
          iVar4 = (uVar2 >> 10 & 0x3ff) * 0x32;
          piVar9[-1] = iVar4;
          *piVar9 = iVar4;
          piVar9[1] = (uVar2 & 0x3ff) * 10;
          lVar6 = param_1[0xe];
          if (lVar6 == 0) {
            lVar6 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: pdo:%d, Fixed supply, volt:%d(mv), max curr:%d\n",
                         lVar6,"usbpd_fetch_pdo",uVar8 & 0xffffffff);
          iVar1 = piVar9[-1];
          iVar4 = piVar9[1];
          pcVar5 = "pdo:%d, Fixed supply, volt:%d(mv), max curr:%d\n";
LAB_001070ac:
          _dev_err(param_1,pcVar5,uVar8 & 0xffffffff,iVar1,iVar4);
        }
        else {
          if (uVar3 == 3) {
            piVar9[-1] = (uVar2 >> 0x11 & 0xff) * 100;
            *piVar9 = (uVar2 >> 8 & 0xff) * 100;
            piVar9[1] = (uVar2 & 0x7f) * 0x32;
            lVar6 = param_1[0xe];
            if (lVar6 == 0) {
              lVar6 = *param_1;
            }
            ipc_log_string(usbpd_ipc_log,"%s: %s: pdo:%d, PPS, volt: %d(mv), max curr:%d\n",lVar6,
                           "usbpd_fetch_pdo",uVar8 & 0xffffffff);
            iVar1 = piVar9[-1];
            iVar4 = piVar9[1];
            pcVar5 = "pdo:%d, PPS, volt: %d(mv), max curr:%d\n";
            goto LAB_001070ac;
          }
          lVar6 = param_1[0xe];
          if (lVar6 == 0) {
            lVar6 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: only fixed and pps pdo supported\n",lVar6,
                         "usbpd_fetch_pdo");
          _dev_err(param_1,"only fixed and pps pdo supported\n");
        }
        piVar9 = piVar9 + 6;
      } while (uVar8 != 7);
      uVar7 = 0;
    }
    mutex_unlock(param_1 + 0xe4);
    _printk("<3>usbpd_fetch_pdo:after swap_lock");
  }
  return uVar7;
}



/* ---- usbpd_select_pdo @ 001071dc ---- */

undefined8 usbpd_select_pdo(long *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *in_x18;
  undefined8 uVar8;
  uint uVar9;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  mutex_lock(param_1 + 0xe4);
  uVar7 = min_sink_current;
  if ((char)param_1[0x102] != '\0') {
LAB_0010721c:
    uVar8 = 0;
    goto LAB_00107230;
  }
  if (*(int *)((long)param_1 + 0x644) != 0) goto LAB_0010722c;
  if (((int)param_1[0xa1] != 0x14) ||
     ((*(int *)((long)param_1 + 0x63c) == 2 && ((int)param_1[0xc6] != 8)))) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: select_pdo: Cannot select new PDO yet\n",lVar4,
                   "usbpd_select_pdo");
    _dev_err(param_1,"select_pdo: Cannot select new PDO yet\n");
    uVar8 = 0xfffffff0;
    goto LAB_00107230;
  }
  if (param_2 - 8U < 0xfffffff9) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: select_pdo: invalid PDO:%d\n",lVar4,"usbpd_select_pdo",
                   param_2);
    _dev_err(param_1,"select_pdo: invalid PDO:%d\n",param_2);
LAB_001075cc:
    uVar8 = 0xffffffea;
  }
  else {
    uVar1 = *(uint *)((long)param_1 + (ulong)(param_2 - 1) * 4 + 0x538);
    if (uVar1 >> 0x1e == 0) {
      uVar3 = uVar1 >> 10 & 0x3ff;
      uVar9 = uVar3 * 50000;
      *(uint *)(param_1 + 0xac) = uVar9;
      if (uVar9 < 0x895441) {
        uVar2 = (uVar1 & 0x3ff) * 10;
        uVar1 = uVar7;
        if ((int)uVar7 <= (int)uVar2) {
          uVar1 = uVar2;
        }
        uVar6 = 2000;
        if (uVar2 < 2000 || uVar3 != 0xb4) {
          uVar6 = uVar2;
        }
        uVar7 = param_2 << 0x1c | (uint)((int)uVar2 < (int)uVar7) << 0x1a |
                uVar6 * 0xcccd >> 9 & 0x1ffc00 | uVar1 / 10;
LAB_00107438:
        *(uint *)(param_1 + 0xab) = uVar7 | 0x3000000;
        if (((*(char *)((long)param_1 + 0x769) == '\0') ||
            (*(char *)((long)param_1 + 0x8c4) != '\0')) || ((int)uVar9 < 0x4c4b41)) {
          *(uint *)((long)param_1 + 0x564) = uVar6;
          *(char *)((long)param_1 + 0x557) = (char)param_2;
          *(undefined4 *)(param_1 + 0xca) = 0;
          *(undefined1 *)((long)param_1 + 0x64a) = 1;
          pm_stay_awake(param_1);
          *(undefined1 *)(param_1 + 0x9f) = 1;
          queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
          lVar4 = wait_for_completion_timeout(param_1 + 0xca,0xfa);
          if (lVar4 == 0) {
            lVar4 = param_1[0xe];
            if (lVar4 == 0) {
              lVar4 = *param_1;
            }
            ipc_log_string(usbpd_ipc_log,"%s: %s: select_pdo: request timed out\n",lVar4,
                           "usbpd_select_pdo");
            _dev_err(param_1,"select_pdo: request timed out\n");
            uVar8 = 0xffffff92;
            goto LAB_00107230;
          }
          if ((*(char *)((long)param_1 + 0x556) == *(char *)((long)param_1 + 0x557)) &&
             (*(int *)((long)param_1 + 0x55c) == (int)param_1[0xac])) goto LAB_0010721c;
          lVar4 = param_1[0xe];
          if (lVar4 == 0) {
            lVar4 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: select_pdo: request rejected\n",lVar4,
                         "usbpd_select_pdo");
          _dev_err(param_1,"select_pdo: request rejected\n");
          goto LAB_001075cc;
        }
      }
    }
    else {
      if (uVar1 >> 0x1e < 3) {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Only Fixed or Programmable PDOs supported\n",lVar4,
                       "pd_select_pdo_for_bq");
        pcVar5 = "Only Fixed or Programmable PDOs supported\n";
      }
      else {
        if (((((uVar1 >> 0x11 & 0xff) < (uint)((int)param_3 / 100000)) ||
             ((uint)((int)param_3 / 100000) < (uVar1 >> 8 & 0xff))) || ((int)param_4 < 0)) ||
           ((uVar1 & 0x7f) < (uint)((int)param_4 / 50000))) {
          lVar4 = param_1[0xe];
          if (lVar4 == 0) {
            lVar4 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: uv (%d) and ua (%d) out of range of APDO\n",lVar4,
                         "pd_select_pdo_for_bq",param_3,param_4);
          _dev_err(param_1,"uv (%d) and ua (%d) out of range of APDO\n",param_3,param_4);
          goto LAB_001075cc;
        }
        if ((char)param_1[0x117] == '\0') {
          uVar7 = param_4;
          if ((*(int *)((long)param_1 + 0x8bc) != 0) &&
             (uVar7 = *(uint *)(param_1 + 0x118), param_4 <= *(uint *)(param_1 + 0x118))) {
            uVar7 = param_4;
          }
          uVar1 = 1500000;
          if (uVar7 < 0x16e361 || *(char *)((long)param_1 + 0x8b9) == '\0') {
            uVar1 = uVar7;
          }
          uVar9 = param_3;
          if ((((int)param_1[0x116] != 0) && (*(uint *)((long)param_1 + 0x8b4) < param_3)) &&
             (uVar9 = *(uint *)((long)param_1 + 0x8b4), *(char *)((long)param_1 + 0x805) != '\0')) {
            uVar9 = param_3;
          }
          *(uint *)(param_1 + 0xac) = uVar9;
          uVar7 = 0x28;
          if (999 < uVar1) {
            uVar7 = uVar1 / 50000;
          }
          uVar6 = 2000;
          if (999 < uVar1) {
            uVar6 = uVar1 / 1000;
          }
          uVar7 = uVar7 | param_2 << 0x1c | ((int)uVar9 / 20000) * 0x200;
          goto LAB_00107438;
        }
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: PPS is controlled by ourself, return not support\n",
                       lVar4,"pd_select_pdo_for_bq");
        pcVar5 = "PPS is controlled by ourself, return not support\n";
      }
      _dev_err(param_1,pcVar5);
    }
LAB_0010722c:
    uVar8 = 0xfffffdf4;
  }
LAB_00107230:
  *(undefined1 *)((long)param_1 + 0x64a) = 0;
  mutex_unlock(param_1 + 0xe4);
  return uVar8;
}



/* ---- smb_get_usbpd @ 00107684 ---- */

undefined8 smb_get_usbpd(void)

{
  return pd_lobal;
}



/* ---- usbpd_create @ 00107698 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * usbpd_create(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *in_x18;
  char *pcVar12;
  undefined8 unaff_x30;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar8 = sp_el0;
  local_48 = *(long *)(lVar8 + 0x5e0);
  local_88 = 0;
  plVar7 = (long *)kmem_cache_alloc_trace(_DAT_00116340,0xdc0,0x908);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0xfffffffffffffff4;
    goto LAB_001080bc;
  }
  device_initialize();
  plVar7[0xc] = param_1;
  plVar7[0x13] = (long)plVar7;
  plVar7[100] = (long)&usbpd_class;
  plVar7[0x66] = (long)usbpd_release_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
  iVar5 = dev_set_name(plVar7,"pd_adapter");
  if (((iVar5 == 0) && (iVar5 = device_init_wakeup(plVar7,1), iVar5 == 0)) &&
     (iVar5 = device_add(plVar7), iVar5 == 0)) {
    lVar8 = alloc_workqueue("usbpd_wq",0xa0016,1);
    plVar7[0x72] = lVar8;
    if (lVar8 == 0) {
      iVar5 = -0xc;
    }
    else {
      plVar7[0x73] = 0xfffffffe0;
      plVar7[0x74] = (long)(plVar7 + 0x74);
      plVar7[0x75] = (long)(plVar7 + 0x74);
      plVar7[0x76] = (long)usbpd_sm_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
      plVar7[0x7f] = 0xfffffffe0;
      plVar7[0x80] = (long)(plVar7 + 0x80);
      plVar7[0x81] = (long)(plVar7 + 0x80);
      plVar7[0x82] = (long)psy_changed_notifier_work_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
      plVar7[0x79] = 0xfffffffe0;
      plVar7[0x7a] = (long)(plVar7 + 0x7a);
      plVar7[0x7b] = (long)(plVar7 + 0x7a);
      plVar7[0x85] = 0xfffffffe0;
      plVar7[0x7c] = (long)start_usb_peripheral_work_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
      plVar7[0x86] = (long)(plVar7 + 0x86);
      plVar7[0x87] = (long)(plVar7 + 0x86);
      plVar7[0x88] = (long)usbpd_vbus_sm_cfi_jt;
      init_timer_key(plVar7 + 0x8b,delayed_work_timer_fn_cfi_jt,0x200000,0,0);
      hrtimer_init(plVar7 + 0x96,1,1);
      plVar7[0x9b] = (long)pd_timeout_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
      __mutex_init(plVar7 + 0xe4,"&pd->swap_lock",&usbpd_init___key);
      __mutex_init(plVar7 + 0xf4,"&pd->svid_handler_lock",&usbpd_init___key);
      lVar8 = power_supply_get_by_name("usb");
      plVar7[0xb2] = lVar8;
      if (lVar8 == 0) {
        lVar8 = plVar7[0xe];
        if (lVar8 == 0) {
          lVar8 = *plVar7;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Could not get USB power_supply, deferring probe\n",
                       lVar8,"usbpd_create");
        iVar5 = -0x205;
      }
      else {
        lVar8 = plVar7[0xb3];
        if (lVar8 == 0) {
          lVar8 = power_supply_get_by_name("battery");
          plVar7[0xb3] = lVar8;
          if (lVar8 != 0) goto LAB_00107878;
        }
        else {
LAB_00107878:
          iVar5 = power_supply_get_property(lVar8,8,&local_88);
          if (iVar5 == 0) {
            *(undefined4 *)((long)plVar7 + 0x62c) = (undefined4)local_88;
          }
          iVar5 = power_supply_get_property(plVar7[0xb3],0x16,&local_88);
          if (iVar5 == 0) {
            *(undefined4 *)(plVar7 + 0xc5) = (undefined4)local_88;
          }
        }
        pcVar12 = "pd_active";
        uVar9 = devm_iio_channel_get(param_1,"pd_active");
        plVar7[0xb7] = uVar9;
        if (uVar9 < 0xfffffffffffff001) {
          pcVar12 = "typec_cc_orientation";
          uVar9 = devm_iio_channel_get(param_1,"typec_cc_orientation");
          plVar7[0xb8] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 1;
            goto LAB_0010804c;
          }
          pcVar12 = "connector_type";
          uVar9 = devm_iio_channel_get(param_1,"connector_type");
          plVar7[0xb9] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 2;
            goto LAB_0010804c;
          }
          pcVar12 = "typec_power_role";
          uVar9 = devm_iio_channel_get(param_1,"typec_power_role");
          plVar7[0xba] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 3;
            goto LAB_0010804c;
          }
          pcVar12 = "pd_usb_suspend_supported";
          uVar9 = devm_iio_channel_get(param_1,"pd_usb_suspend_supported");
          plVar7[0xbb] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 4;
            goto LAB_0010804c;
          }
          pcVar12 = "typec_src_rp";
          uVar9 = devm_iio_channel_get(param_1,"typec_src_rp");
          plVar7[0xbc] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 5;
            goto LAB_0010804c;
          }
          pcVar12 = "pd_in_hard_reset";
          uVar9 = devm_iio_channel_get(param_1,"pd_in_hard_reset");
          plVar7[0xbd] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 6;
            goto LAB_0010804c;
          }
          pcVar12 = "pr_current_max";
          uVar9 = devm_iio_channel_get(param_1,"pr_current_max");
          plVar7[0xbe] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 7;
            goto LAB_0010804c;
          }
          pcVar12 = "pr_swap";
          uVar9 = devm_iio_channel_get(param_1,"pr_swap");
          plVar7[0xbf] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 8;
            goto LAB_0010804c;
          }
          pcVar12 = "pd_voltage_min";
          uVar9 = devm_iio_channel_get(param_1,"pd_voltage_min");
          plVar7[0xc0] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 9;
            goto LAB_0010804c;
          }
          pcVar12 = "pd_voltage_max";
          uVar9 = devm_iio_channel_get(param_1,"pd_voltage_max");
          plVar7[0xc1] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 10;
            goto LAB_0010804c;
          }
          pcVar12 = "real_type";
          uVar9 = devm_iio_channel_get(param_1,"real_type");
          plVar7[0xc2] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 0xb;
            goto LAB_0010804c;
          }
          pcVar12 = "typec_mode";
          uVar9 = devm_iio_channel_get(param_1,"typec_mode");
          plVar7[0xc3] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 0xc;
            goto LAB_0010804c;
          }
          pcVar12 = "pe_start";
          uVar9 = devm_iio_channel_get(param_1,"pe_start");
          plVar7[0xc4] = uVar9;
          if (0xfffffffffffff000 < uVar9) {
            lVar8 = 0xd;
            goto LAB_0010804c;
          }
          uVar9 = devm_extcon_dev_allocate(param_1,&usbpd_extcon_cable);
          plVar7[0xa0] = uVar9;
          if (uVar9 < 0xfffffffffffff001) {
            iVar5 = devm_extcon_dev_register(param_1,uVar9);
            if (iVar5 == 0) {
              extcon_set_property_capability(plVar7[0xa0],1,1);
              extcon_set_property_capability(plVar7[0xa0],1,2);
              extcon_set_property_capability(plVar7[0xa0],2,1);
              extcon_set_property_capability(plVar7[0xa0],2,2);
              iVar5 = of_property_read_variable_u32_array
                                (*(undefined8 *)(param_1 + 0x2f0),"mi,pd_curr_limit",
                                 (int *)((long)plVar7 + 0x8bc),1,0);
              if (iVar5 < 0) {
                lVar8 = plVar7[0xe];
                if (lVar8 == 0) {
                  lVar8 = *plVar7;
                }
                ipc_log_string(usbpd_ipc_log,"%s: %s: do not limit current\n",lVar8,"usbpd_create");
                _dev_err(plVar7,"do not limit current\n");
                *(undefined4 *)((long)plVar7 + 0x8bc) = 0;
              }
              else if ((*(int *)((long)plVar7 + 0x8bc) != 0) &&
                      (iVar5 = of_property_read_variable_u32_array
                                         (*(undefined8 *)(param_1 + 0x2f0),"mi,pd_max_curr_limit",
                                          plVar7 + 0x118,1,0), iVar5 < 0)) {
                lVar8 = plVar7[0xe];
                if (lVar8 == 0) {
                  lVar8 = *plVar7;
                }
                ipc_log_string(usbpd_ipc_log,"%s: %s: failed to read pd vbus max limit\n",lVar8,
                               "usbpd_create");
                _dev_err(plVar7,"failed to read pd vbus max limit\n");
                *(undefined4 *)(plVar7 + 0x118) = 4000000;
              }
              iVar5 = of_property_read_variable_u32_array
                                (*(undefined8 *)(param_1 + 0x2f0),"mi,limit_pd_unverified_pps_vbus",
                                 plVar7 + 0x116,1,0);
              if (iVar5 < 0) {
                lVar8 = plVar7[0xe];
                if (lVar8 == 0) {
                  lVar8 = *plVar7;
                }
                ipc_log_string(usbpd_ipc_log,"%s: %s: failed to read pd unverified pps vbus limit\n"
                               ,lVar8,"usbpd_create");
                _dev_err(plVar7,"failed to read pd unverified pps vbus limit\n");
                *(undefined4 *)(plVar7 + 0x116) = 0;
              }
              else if (((int)plVar7[0x116] != 0) &&
                      (iVar5 = of_property_read_variable_u32_array
                                         (*(undefined8 *)(param_1 + 0x2f0),
                                          "mi,pd_unverified_pps_max_vbus_limit",(long)plVar7 + 0x8b4
                                          ,1,0), iVar5 < 0)) {
                lVar8 = plVar7[0xe];
                if (lVar8 == 0) {
                  lVar8 = *plVar7;
                }
                ipc_log_string(usbpd_ipc_log,
                               "%s: %s: failed to read pd unverified pps max vbus limit\n",lVar8,
                               "usbpd_create");
                _dev_err(plVar7,"failed to read pd unverified pps max vbus limit\n");
                *(undefined4 *)((long)plVar7 + 0x8b4) = 9000000;
              }
              lVar8 = of_find_property(*(undefined8 *)(param_1 + 0x2f0),"mi,non-qcom-pps-ctrl",0);
              *(bool *)(plVar7 + 0x117) = lVar8 != 0;
              bVar4 = device_property_present(param_1,"qcom,vconn-uses-external-source");
              *(byte *)((long)plVar7 + 0x8c4) = bVar4 & 1;
              uVar6 = device_property_read_u32_array(param_1,"qcom,default-sink-caps",0,0);
              *(uint *)((long)plVar7 + 0x58c) = uVar6;
              if ((int)uVar6 < 1) {
                uVar6 = 0x2601912c;
                *(undefined4 *)((long)plVar7 + 0x58c) = 1;
LAB_00107e28:
                *(uint *)(plVar7 + 0xae) = uVar6;
                plVar7[0xd9] = (long)plVar7;
                plVar7[0xda] = (long)&typec_ops;
                plVar7[0xd3] = 0x200000002;
                *(undefined4 *)(plVar7 + 0xd4) = 0x3000130;
                plVar7[0xdf] = (long)(plVar7 + 0xe1);
                iVar5 = get_connector_type(plVar7);
                if (-1 < iVar5) {
                  if (iVar5 != 1) {
                    uVar9 = typec_register_port(param_1,plVar7 + 0xd3);
                    plVar7[0xdc] = uVar9;
                    if (0xfffffffffffff000 < uVar9) {
                      lVar8 = plVar7[0xe];
                      if (lVar8 == 0) {
                        lVar8 = *plVar7;
                      }
                      ipc_log_string(usbpd_ipc_log,"%s: %s: could not register typec port\n",lVar8,
                                     "usbpd_create");
                      pcVar12 = "could not register typec port\n";
                      goto LAB_0010831c;
                    }
                  }
                  plVar11 = plVar7 + 0xfe;
                  plVar7[0x120] = param_2;
                  puVar2 = PTR__usbpd_00100268;
                  plVar7[200] = -1;
                  uVar9 = __list_add_valid(plVar11,puVar2,&_usbpd);
                  if ((uVar9 & 1) != 0) {
                    PTR__usbpd_00100268 = (undefined *)plVar11;
                    plVar7[0xfe] = (long)&_usbpd;
                    plVar7[0xff] = (long)puVar2;
                    *(long **)puVar2 = plVar11;
                  }
                  *(undefined4 *)(plVar7 + 0xa5) = 0;
                  plVar7[0xa3] = (long)(plVar7 + 0xa3);
                  plVar7[0xa4] = (long)(plVar7 + 0xa3);
                  plVar7[0xfa] = (long)(plVar7 + 0xfa);
                  plVar7[0xfb] = (long)(plVar7 + 0xfa);
                  *(undefined4 *)(plVar7 + 0xca) = 0;
                  __init_swait_queue_head(plVar7 + 0xcb,"&x->wait",&usbpd_init___key);
                  *(undefined4 *)(plVar7 + 0xce) = 0;
                  __init_swait_queue_head(plVar7 + 0xcf,"&x->wait",&usbpd_init___key);
                  plVar7[0xb4] = (long)psy_changed_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
                  iVar5 = power_supply_reg_notifier(plVar7 + 0xb4);
                  if (iVar5 == 0) {
                    plVar7[0x112] = 0;
                    plVar7[0x113] = 0;
                    plVar7[0x114] = 0;
                    plVar7[0x115] = 0;
                    plVar7[0x10e] =
                         (long)usbpd_mi_connect_cb_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
                    plVar7[0x10f] =
                         (long)usbpd_mi_disconnect_cb_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
                    plVar7[0x110] = 0;
                    plVar7[0x111] =
                         (long)usbpd_mi_vdm_received_cb_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
                    plVar7[0x10d] = 0x2717;
                    iVar5 = usbpd_register_svid(plVar7,plVar7 + 0x10d);
                    if (iVar5 != 0) {
                      lVar8 = plVar7[0xe];
                      if (lVar8 == 0) {
                        lVar8 = *plVar7;
                      }
                      ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd registration failed\n",lVar8,
                                     "usbpd_create");
                      _dev_err(plVar7,"usbpd registration failed\n");
                    }
                    queue_work_on(0x20,plVar7[0x72],plVar7 + 0x7f);
                    pd_lobal = plVar7;
                    goto LAB_001080bc;
                  }
                  uVar9 = __list_del_entry_valid(plVar11);
                  if ((uVar9 & 1) != 0) {
                    plVar11 = (long *)plVar7[0xff];
                    lVar8 = plVar7[0xfe];
                    *(long **)(lVar8 + 8) = plVar11;
                    *plVar11 = lVar8;
                  }
                  plVar7[0xfe] = -0x2152ffffffffff00;
                  plVar7[0xff] = -0x2152fffffffffede;
                }
                goto LAB_00108098;
              }
              local_58 = 0;
              local_50 = 0;
              local_68 = 0;
              local_60 = 0;
              local_78 = 0;
              local_70 = 0;
              local_80 = 0;
              if ((uVar6 < 0xf) && ((uVar6 & 1) == 0)) {
                iVar5 = device_property_read_u32_array
                                  (param_1,"qcom,default-sink-caps",&local_80,uVar6);
                if (iVar5 == 0) {
                  uVar1 = *(uint *)((long)plVar7 + 0x58c);
                  uVar6 = uVar1;
                  if ((int)uVar1 < 0) {
                    uVar6 = uVar1 + 1;
                  }
                  *(int *)((long)plVar7 + 0x58c) = (int)uVar6 >> 1;
                  if ((int)uVar1 < 2) {
                    uVar6 = *(uint *)(plVar7 + 0xae);
                  }
                  else {
                    uVar6 = ((uint)((local_80 & 0xffffffff) * 0x51eb851f >> 0x20) & 0x3fffff0) << 6
                            | local_80._4_4_ / 10;
                    *(uint *)(plVar7 + 0xae) = uVar6;
                    if (((((3 < uVar1) &&
                          (*(uint *)((long)plVar7 + 0x574) =
                                ((uint)((local_78 & 0xffffffff) * 0x51eb851f >> 0x20) & 0x3fffff0)
                                << 6 | local_78._4_4_ / 10, 5 < uVar1)) &&
                         (*(uint *)(plVar7 + 0xaf) =
                               ((uint)((local_70 & 0xffffffff) * 0x51eb851f >> 0x20) & 0x3fffff0) <<
                               6 | local_70._4_4_ / 10, 7 < uVar1)) &&
                        ((*(uint *)((long)plVar7 + 0x57c) =
                               ((uint)((local_68 & 0xffffffff) * 0x51eb851f >> 0x20) & 0x3fffff0) <<
                               6 | local_68._4_4_ / 10, 9 < uVar1 &&
                         (*(uint *)(plVar7 + 0xb0) =
                               ((uint)((local_60 & 0xffffffff) * 0x51eb851f >> 0x20) & 0x3fffff0) <<
                               6 | local_60._4_4_ / 10, 0xb < uVar1)))) &&
                       ((*(uint *)((long)plVar7 + 0x584) =
                              ((uint)((local_58 & 0xffffffff) * 0x51eb851f >> 0x20) & 0x3fffff0) <<
                              6 | local_58._4_4_ / 10, 0xd < uVar1 &&
                        (*(uint *)(plVar7 + 0xb1) =
                              ((uint)((local_50 & 0xffffffff) * 0x51eb851f >> 0x20) & 0x3fffff0) <<
                              6 | local_50._4_4_ / 10, 0xf < uVar1)))) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x107dc8);
                      (*pcVar3)();
                    }
                  }
                  uVar6 = uVar6 | 0x26000000;
                  goto LAB_00107e28;
                }
                lVar8 = plVar7[0xe];
                if (lVar8 == 0) {
                  lVar8 = *plVar7;
                }
                ipc_log_string(usbpd_ipc_log,"%s: %s: Error reading default-sink-caps\n",lVar8,
                               "usbpd_create");
                pcVar12 = "Error reading default-sink-caps\n";
              }
              else {
                lVar8 = plVar7[0xe];
                if (lVar8 == 0) {
                  lVar8 = *plVar7;
                }
                ipc_log_string(usbpd_ipc_log,
                               "%s: %s: default-sink-caps must be specified as voltage/current, max 7 pairs\n"
                               ,lVar8,"usbpd_create");
                iVar5 = -0x16;
                pcVar12 = "default-sink-caps must be specified as voltage/current, max 7 pairs\n";
              }
            }
            else {
              lVar8 = plVar7[0xe];
              if (lVar8 == 0) {
                lVar8 = *plVar7;
              }
              ipc_log_string(usbpd_ipc_log,"%s: %s: failed to register extcon device\n",lVar8,
                             "usbpd_create");
              pcVar12 = "failed to register extcon device\n";
            }
LAB_0010831c:
            _dev_err(plVar7,pcVar12);
          }
          else {
            lVar8 = plVar7[0xe];
            if (lVar8 == 0) {
              lVar8 = *plVar7;
            }
            ipc_log_string(usbpd_ipc_log,"%s: %s: failed to allocate extcon device\n",lVar8,
                           "usbpd_create");
            _dev_err(plVar7,"failed to allocate extcon device\n");
            iVar5 = (int)plVar7[0xa0];
          }
        }
        else {
          lVar8 = 0;
LAB_0010804c:
          lVar10 = plVar7[0xe];
          if (lVar10 == 0) {
            lVar10 = *plVar7;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get %s iio channel\n",lVar10,
                         "usbpd_create",pcVar12);
          _dev_err(plVar7,"failed to get %s iio channel\n",pcVar12);
          iVar5 = (int)plVar7[lVar8 + 0xb7];
        }
LAB_00108098:
        power_supply_put(plVar7[0xb2]);
      }
      destroy_workqueue(plVar7[0x72]);
    }
    device_del(plVar7);
  }
  put_device(plVar7);
  plVar7 = (long *)(long)iVar5;
LAB_001080bc:
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}



/* ---- usbpd_mi_connect_cb.e7ce0f5c9173271e56101f64bf7b44f7 @ 00108368 ---- */

void usbpd_mi_connect_cb_e7ce0f5c9173271e56101f64bf7b44f7(undefined2 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar1 = (long *)(param_1 + -0x434);
  if (plVar1 == (long *)0x0) {
    _printk("<3>get_usbpd phandle failed\n");
  }
  else {
    lVar2 = *(long *)(param_1 + -0x3fc);
    *(undefined4 *)(param_1 + -0x2a) = 8;
    if (lVar2 == 0) {
      lVar2 = *plVar1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: hdlr->svid:%x has connect\n",lVar2,"usbpd_mi_connect_cb",
                   *param_1);
    _dev_info(plVar1,"hdlr->svid:%x has connect\n",*param_1);
  }
  return;
}



/* ---- usbpd_mi_disconnect_cb.e7ce0f5c9173271e56101f64bf7b44f7 @ 001083f4 ---- */

void usbpd_mi_disconnect_cb_e7ce0f5c9173271e56101f64bf7b44f7(undefined2 *param_1)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined8 *)(param_1 + -0x30) = 0;
  *(undefined8 *)(param_1 + -0x2a) = 0;
  *(undefined1 *)(param_1 + -0x2c) = 0;
  lVar1 = *(long *)(param_1 + -0x3fc);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + -0x434);
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: hdlr->svid:%x has disconnect\n",lVar1,
                 "usbpd_mi_disconnect_cb",*param_1);
  _dev_info(param_1 + -0x434,"hdlr->svid:%x has disconnect\n",*param_1);
  return;
}



/* ---- usbpd_mi_vdm_received_cb.e7ce0f5c9173271e56101f64bf7b44f7 @ 00108474 ---- */

void usbpd_mi_vdm_received_cb_e7ce0f5c9173271e56101f64bf7b44f7
               (undefined2 *param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  undefined8 *in_x18;
  long *plVar6;
  undefined8 unaff_x30;
  ulong local_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x5e0);
  plVar6 = (long *)(param_1 + -0x434);
  lVar4 = *(long *)(param_1 + -0x3fc);
  local_50 = 0;
  if (lVar4 == 0) {
    lVar4 = *plVar6;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: hdlr->svid:0x%x, vdm_hdr:0x%x, num_vdos:%d, cmd:%d\n",lVar4,
                 "usbpd_mi_vdm_received_cb",*param_1,param_2,param_4);
  switch(param_2 & 0xff) {
  case 1:
    uVar5 = *param_3;
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(uint *)(param_1 + -0x28) = uVar5;
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    pcVar3 = "%s: %s: ta_version:%x\n";
    break;
  case 2:
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(uint *)(param_1 + -0x24) = (uint)(ushort)*param_3 * 10000;
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: ta_voltage:%d\n",lVar4,"usbpd_mi_vdm_received_cb");
    iVar1 = power_supply_get_property(*(undefined8 *)(param_1 + -0x16c),0xc,&local_50);
    if (iVar1 == 0) {
      iVar1 = (int)local_50;
      lVar4 = *(long *)(param_1 + -0x3fc);
      if (lVar4 == 0) {
        lVar4 = *plVar6;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: usb voltage now:%d\n",lVar4,"usbpd_mi_vdm_received_cb",
                     local_50 & 0xffffffff);
      iVar2 = power_supply_get_property(*(undefined8 *)(param_1 + -0x16c),0x11,&local_50);
      if (iVar2 == 0) {
        lVar4 = *(long *)(param_1 + -0x3fc);
        iVar2 = (int)local_50 / 1000;
        if (lVar4 == 0) {
          lVar4 = *plVar6;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: usb current now:%d\n",lVar4,"usbpd_mi_vdm_received_cb"
                       ,iVar2);
        lVar4 = *(long *)(param_1 + -0x3fc);
        uVar5 = 0;
        if (iVar2 != 0) {
          uVar5 = (*(int *)(param_1 + -0x24) - iVar1) / iVar2;
        }
        if (lVar4 == 0) {
          lVar4 = *plVar6;
        }
        pcVar3 = "%s: %s: usb r_cable now:%dmohm\n";
        break;
      }
      lVar4 = *(long *)(param_1 + -0x3fc);
      if (lVar4 == 0) {
        lVar4 = *plVar6;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get usb current now\n",lVar4,
                     "usbpd_mi_vdm_received_cb");
      pcVar3 = "failed to get usb current now\n";
    }
    else {
      lVar4 = *(long *)(param_1 + -0x3fc);
      if (lVar4 == 0) {
        lVar4 = *plVar6;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get usb voltage now\n",lVar4,
                     "usbpd_mi_vdm_received_cb");
      pcVar3 = "failed to get usb voltage now\n";
    }
    _dev_err(plVar6,pcVar3);
    goto switchD_00108510_default;
  case 3:
    lVar4 = *(long *)(param_1 + -0x3fc);
    uVar5 = (uint)(ushort)*param_3 * 10;
    *(uint *)(param_1 + -0x26) = uVar5;
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    pcVar3 = "%s: %s: pd->vdm_data.ta_temp:%d\n";
    break;
  case 4:
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -0x20) = (ulong)*param_3;
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd s_secert vdos[%d]=0x%x",lVar4,
                   "usbpd_mi_vdm_received_cb",0,*param_3);
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -0x1c) = (ulong)param_3[1];
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd s_secert vdos[%d]=0x%x",lVar4,
                   "usbpd_mi_vdm_received_cb",1,param_3[1]);
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -0x18) = (ulong)param_3[2];
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd s_secert vdos[%d]=0x%x",lVar4,
                   "usbpd_mi_vdm_received_cb",2,param_3[2]);
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -0x14) = (ulong)param_3[3];
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    uVar5 = param_3[3];
    pcVar3 = "%s: %s: usbpd s_secert vdos[%d]=0x%x";
    goto LAB_001087fc;
  case 5:
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -0x10) = (ulong)*param_3;
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd digest[%d]=0x%x",lVar4,"usbpd_mi_vdm_received_cb",0,
                   *param_3);
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -0xc) = (ulong)param_3[1];
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd digest[%d]=0x%x",lVar4,"usbpd_mi_vdm_received_cb",1,
                   param_3[1]);
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -8) = (ulong)param_3[2];
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd digest[%d]=0x%x",lVar4,"usbpd_mi_vdm_received_cb",2,
                   param_3[2]);
    lVar4 = *(long *)(param_1 + -0x3fc);
    *(ulong *)(param_1 + -4) = (ulong)param_3[3];
    if (lVar4 == 0) {
      lVar4 = *plVar6;
    }
    uVar5 = param_3[3];
    pcVar3 = "%s: %s: usbpd digest[%d]=0x%x";
LAB_001087fc:
    ipc_log_string(usbpd_ipc_log,pcVar3,lVar4,"usbpd_mi_vdm_received_cb",3,uVar5);
  default:
    goto switchD_00108510_default;
  }
  ipc_log_string(usbpd_ipc_log,pcVar3,lVar4,"usbpd_mi_vdm_received_cb",uVar5);
switchD_00108510_default:
  *(uint *)(param_1 + -0x2a) = param_2 & 0xff;
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- usbpd_release.e7ce0f5c9173271e56101f64bf7b44f7 @ 001088b0 ---- */

void usbpd_release_e7ce0f5c9173271e56101f64bf7b44f7(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  kfree();
  return;
}



/* ---- usbpd_sm.e7ce0f5c9173271e56101f64bf7b44f7 @ 001088d4 ---- */

void usbpd_sm_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *in_x18;
  long *plVar12;
  long *plVar13;
  ushort *puVar14;
  long *plVar15;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar12 = (long *)(param_1 + -0x398);
  lVar11 = *(long *)(param_1 + -0x328);
  if (lVar11 == 0) {
    lVar11 = *plVar12;
  }
  if (0x20 < *(uint *)(param_1 + 0x170)) goto LAB_00109214;
  ipc_log_string(usbpd_ipc_log,"%s: %s: handle state %s\n",lVar11,"usbpd_sm",
                 (&usbpd_state_strings)[*(uint *)(param_1 + 0x170)]);
  hrtimer_cancel(param_1 + 0x118);
  lVar11 = param_1 + 400;
  *(undefined1 *)(param_1 + 0x160) = 0;
  uVar8 = _raw_spin_lock_irqsave(lVar11);
  plVar1 = (long *)(param_1 + 0x180);
  if ((long *)*plVar1 == plVar1) {
    puVar14 = (ushort *)0x0;
  }
  else {
    plVar13 = (long *)*plVar1;
    puVar14 = (ushort *)(plVar13 + -1);
    uVar9 = __list_del_entry_valid(plVar13);
    if ((uVar9 & 1) != 0) {
      lVar10 = *plVar13;
      plVar15 = (long *)plVar13[1];
      *(long **)(lVar10 + 8) = plVar15;
      *plVar15 = lVar10;
    }
    *plVar13 = -0x2152ffffffffff00;
    plVar13[1] = -0x2152fffffffffede;
  }
  _raw_spin_unlock_irqrestore(lVar11,uVar8);
  if (*(int *)(param_1 + 0x2ac) == -1) {
    if ((*(int *)(param_1 + 0x170) == 0) && (*(int *)(param_1 + 0x2a8) == -1)) goto LAB_00108e78;
    if (*(char *)(param_1 + 0x3d1) != '\0') {
      regulator_disable(*(undefined8 *)(param_1 + 0x3c8));
      *(undefined1 *)(param_1 + 0x3d1) = 0;
    }
    lVar10 = *(long *)(param_1 + -0x328);
    if (lVar10 == 0) {
      lVar10 = *plVar12;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: USB Type-C disconnect\n",lVar10,"handle_disconnect");
    _dev_info(plVar12,"USB Type-C disconnect\n");
    if (*(char *)(param_1 + 0x2b1) != '\0') {
      pcVar6 = *(code **)(*(long *)(param_1 + 0x568) + 0x28);
      if (1 < ((ulong)(pcVar6 + -0x105738) >> 3 | (long)pcVar6 << 0x3d)) {
        __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar6,&DAT_00100a00);
      }
      (*pcVar6)();
      *(undefined1 *)(param_1 + 0x2b1) = 0;
    }
    *(undefined1 *)(param_1 + 0x3b9) = 0;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x175) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined2 *)(param_1 + 0x1be) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1cd) = 0;
    uVar8 = _raw_spin_lock_irqsave(lVar11);
    plVar13 = *(long **)(param_1 + 0x180);
    while (plVar1 != plVar13) {
      plVar15 = (long *)*plVar13;
      uVar9 = __list_del_entry_valid(plVar13);
      if ((uVar9 & 1) != 0) {
        lVar10 = *plVar13;
        plVar2 = (long *)plVar13[1];
        *(long **)(lVar10 + 8) = plVar2;
        *plVar2 = lVar10;
      }
      *plVar13 = -0x2152ffffffffff00;
      plVar13[1] = -0x2152fffffffffede;
      kfree(plVar13 + -1);
      plVar13 = plVar15;
    }
    _raw_spin_unlock_irqrestore(lVar11,uVar8);
    *(undefined1 *)(param_1 + 0x46d) = 0;
    *(undefined1 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
    *(undefined1 *)(param_1 + 0x521) = 0;
    iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 0x250),0);
    if (iVar7 < 0) {
      lVar10 = *(long *)(param_1 + -0x328);
      if (lVar10 == 0) {
        lVar10 = *plVar12;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                     "usbpd_set_psy_iio_property",6);
      _dev_err(plVar12,"failed to set IIO property: %d\n",6);
    }
    iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 0x240),0);
    if (iVar7 < 0) {
      lVar10 = *(long *)(param_1 + -0x328);
      if (lVar10 == 0) {
        lVar10 = *plVar12;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                     "usbpd_set_psy_iio_property",4);
      _dev_err(plVar12,"failed to set IIO property: %d\n",4);
    }
    iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 0x220),0);
    if (iVar7 < 0) {
      lVar10 = *(long *)(param_1 + -0x328);
      if (lVar10 == 0) {
        lVar10 = *plVar12;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                     "usbpd_set_psy_iio_property",0);
      _dev_err(plVar12,"failed to set IIO property: %d\n",0);
      cVar3 = *(char *)(param_1 + 0x3d0);
    }
    else {
      cVar3 = *(char *)(param_1 + 0x3d0);
    }
    if (cVar3 != '\0') {
      regulator_disable(*(undefined8 *)(param_1 + 0x3c0));
      *(undefined1 *)(param_1 + 0x3d0) = 0;
    }
    reset_vdm_state(plVar12);
    if (*(int *)(param_1 + 0x2a8) == 0) {
      uVar8 = 1;
LAB_00108fc0:
      extcon_set_state_sync(*(undefined8 *)(param_1 + 0x168),uVar8,0);
    }
    else if (*(int *)(param_1 + 0x2a8) == 1) {
      uVar8 = 2;
      goto LAB_00108fc0;
    }
    *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
    if (*(int *)(param_1 + 0x170) == 1) {
      usleep_range_state(25000,30000,2);
    }
    iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 0x260),0);
    if (iVar7 < 0) {
      lVar10 = *(long *)(param_1 + -0x328);
      if (lVar10 == 0) {
        lVar10 = *plVar12;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                     "usbpd_set_psy_iio_property",8);
      _dev_err(plVar12,"failed to set IIO property: %d\n",8);
    }
    iVar7 = *(int *)(param_1 + 0x29c);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 0x238),iVar7);
    if (iVar7 < 0) {
      lVar10 = *(long *)(param_1 + -0x328);
      if (lVar10 == 0) {
        lVar10 = *plVar12;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                     "usbpd_set_psy_iio_property",3);
      _dev_err(plVar12,"failed to set IIO property: %d\n",3);
    }
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined2 *)(param_1 + 0x3d5) = 0xffff;
    *(undefined1 *)(param_1 + 0x3d7) = 0xff;
    *(undefined2 *)(param_1 + 0x3d2) = 0;
    *(undefined1 *)(param_1 + 0x3d4) = 0;
    *(undefined1 *)(param_1 + 0x2b2) = 0;
    *(undefined1 *)(param_1 + 0x54c) = 0;
    *(undefined2 *)(param_1 + 0x3b8) = 0;
    kobject_uevent(plVar12,2);
    typec_unregister_partner(*(undefined8 *)(param_1 + 0x350));
    *(undefined8 *)(param_1 + 0x350) = 0;
    if (*(char *)(param_1 + 0x468) != '\0') {
      *(undefined1 *)(param_1 + 0x468) = 0;
    }
    goto LAB_00108e78;
  }
  if (*(char *)(param_1 + 0x175) != '\0') {
    *(undefined1 *)(param_1 + 0x175) = 0;
    if (*(int *)(param_1 + 0x1cc) != 0) {
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 600),0);
      if (iVar7 < 0) {
        lVar10 = *(long *)(param_1 + -0x328);
        if (lVar10 == 0) {
          lVar10 = *plVar12;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                       "usbpd_set_psy_iio_property",7);
        _dev_err(plVar12,"failed to set IIO property: %d\n",7);
      }
    }
    *(undefined4 *)(param_1 + 0x1c8) = 5000000;
    iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 0x268),5000000);
    if (iVar7 < 0) {
      lVar10 = *(long *)(param_1 + -0x328);
      if (lVar10 == 0) {
        lVar10 = *plVar12;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                     "usbpd_set_psy_iio_property",9);
      _dev_err(plVar12,"failed to set IIO property: %d\n",9);
    }
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    iVar7 = iio_write_channel_raw(*(undefined8 *)(param_1 + 0x260),0);
    if (iVar7 < 0) {
      lVar10 = *(long *)(param_1 + -0x328);
      if (lVar10 == 0) {
        lVar10 = *plVar12;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar10,
                     "usbpd_set_psy_iio_property",8);
      _dev_err(plVar12,"failed to set IIO property: %d\n",8);
    }
    *(undefined1 *)(param_1 + 0x1d1) = 0;
    *(undefined2 *)(param_1 + 0x1be) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    uVar8 = _raw_spin_lock_irqsave(lVar11);
    plVar13 = *(long **)(param_1 + 0x180);
    while (plVar1 != plVar13) {
      plVar15 = (long *)*plVar13;
      uVar9 = __list_del_entry_valid(plVar13);
      if ((uVar9 & 1) != 0) {
        lVar10 = *plVar13;
        plVar2 = (long *)plVar13[1];
        *(long **)(lVar10 + 8) = plVar2;
        *plVar2 = lVar10;
      }
      *plVar13 = -0x2152ffffffffff00;
      plVar13[1] = -0x2152fffffffffede;
      kfree(plVar13 + -1);
      plVar13 = plVar15;
    }
    _raw_spin_unlock_irqrestore(lVar11,uVar8);
    reset_vdm_state(plVar12);
    kobject_uevent(plVar12,2);
    if (*(int *)(param_1 + 0x2ac) == 0) {
      if (*(char *)(param_1 + 0x175) == '\0') {
        lVar10 = *(long *)(param_1 + -0x328);
        if (lVar10 == 0) {
          lVar10 = *plVar12;
        }
        if (0x20 < *(uint *)(param_1 + 0x170)) goto LAB_00109214;
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar10,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0x170)],
                       "SNK_Transition_to_default");
        *(undefined4 *)(param_1 + 0x170) = 0x17;
        enter_state_snk_transition_to_default_e7ce0f5c9173271e56101f64bf7b44f7(plVar12);
      }
    }
    else {
      lVar10 = ktime_get();
      lVar10 = lVar10 - *(long *)(param_1 + 0x178);
      *(undefined4 *)(param_1 + 0x170) = 0xd;
      if (lVar10 < 25000000) {
        auVar4 = SEXT816(lVar10) * SEXT816(-0x431bde82d7b634db);
        iVar7 = ((int)(auVar4._8_8_ >> 0x12) - (auVar4._12_4_ >> 0x1f)) + 0x19;
        pm_stay_awake(plVar12);
        *(undefined1 *)(param_1 + 0x160) = 1;
        if (iVar7 != 0) {
          lVar10 = *(long *)(param_1 + -0x328);
          if (lVar10 == 0) {
            lVar10 = *plVar12;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: delay %d ms",lVar10,"kick_sm",iVar7);
          hrtimer_start_range_ns(param_1 + 0x118,(long)iVar7 * 1000000,0,1);
          goto LAB_00108e78;
        }
        uVar8 = *(undefined8 *)(param_1 + -8);
      }
      else {
        pm_stay_awake(plVar12);
        uVar8 = *(undefined8 *)(param_1 + -8);
        *(undefined1 *)(param_1 + 0x160) = 1;
      }
      queue_work_on(0x20,uVar8,param_1);
    }
    goto LAB_00108e78;
  }
  if ((puVar14 == (ushort *)0x0) || ((*puVar14 & 0x701f) != 0xd)) {
LAB_00108c84:
    uVar9 = (ulong)*(uint *)(param_1 + 0x170);
    if (*(uint *)(param_1 + 0x170) < 0x21) goto LAB_00108e20;
    bVar5 = false;
  }
  else {
    lVar10 = *(long *)(param_1 + -0x328);
    if (lVar10 == 0) {
      lVar10 = *plVar12;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Handle soft reset\n",lVar10,"usbpd_sm");
    if (*(int *)(param_1 + 0x2ac) == 1) {
      uVar9 = 0xb;
    }
    else {
      if (*(int *)(param_1 + 0x2ac) != 0) goto LAB_00108c84;
      uVar9 = 0x16;
    }
    *(int *)(param_1 + 0x170) = (int)uVar9;
LAB_00108e20:
    if (0x210 < (uVar9 << 4 | 8)) goto LAB_00109218;
    if ((0x221586U >> (uVar9 & 0x3f) & 1) == 0) {
      pcVar6 = (code *)(&PTR_handle_state_unknown_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt_00104710)
                       [uVar9 * 2];
      if (0x17 < ((ulong)(pcVar6 + -0x105958) >> 3 | (long)pcVar6 << 0x3d)) {
        __cfi_slowpath_diag(0xd2e76a2644f8e5f,pcVar6,&DAT_001009e0);
      }
      (*pcVar6)(plVar12,puVar14);
      goto LAB_00108e78;
    }
    bVar5 = true;
  }
  lVar10 = *(long *)(param_1 + -0x328);
  if (lVar10 == 0) {
    lVar10 = *plVar12;
  }
  if (bVar5) {
    if (0x20 < (uint)uVar9) {
LAB_00109218:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10921c);
      (*pcVar6)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Unhandled state %s\n",lVar10,"usbpd_sm",
                   (&usbpd_state_strings)[uVar9]);
    if (*(uint *)(param_1 + 0x170) < 0x21) {
      _dev_err(plVar12,"Unhandled state %s\n",(&usbpd_state_strings)[*(uint *)(param_1 + 0x170)]);
LAB_00108e78:
      kfree(puVar14);
      uVar8 = _raw_spin_lock_irqsave(lVar11);
      plVar13 = (long *)*plVar1;
      _raw_spin_unlock_irqrestore(lVar11,uVar8);
      if (plVar13 != plVar1) {
        if (*(char *)(param_1 + 0x160) != '\0') {
          return;
        }
        pm_stay_awake(plVar12);
        *(undefined1 *)(param_1 + 0x160) = 1;
        queue_work_on(0x20,*(undefined8 *)(param_1 + -8),param_1);
      }
      if (*(char *)(param_1 + 0x160) == '\0') {
        pm_relax(plVar12);
      }
      return;
    }
  }
LAB_00109214:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x109218);
  (*pcVar6)();
}



/* ---- psy_changed_notifier_work.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010926c ---- */

void psy_changed_notifier_work_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 *in_x18;
  long *plVar10;
  undefined *puVar11;
  undefined8 unaff_x30;
  uint local_58 [3];
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar7 = sp_el0;
  local_48 = *(long *)(lVar7 + 0x5e0);
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(char *)(param_1 + 0x40c) != '\0') {
    _printk("<3>%s: shutdown, return\n","psy_changed_notifier_work");
    goto LAB_0010993c;
  }
  plVar10 = (long *)(param_1 + -0x3f8);
  local_4c = 0;
  iVar4 = iio_read_channel_processed(*(undefined8 *)(param_1 + 0x220),&local_4c);
  uVar2 = local_4c;
  if (iVar4 < 0) {
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar7,
                   "usbpd_get_psy_iio_property",0xc);
    _dev_err(plVar10,"failed to get IIO property: %d\n",0xc);
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to read USB TYPEC_MODE: %d\n",lVar7,
                   "psy_changed_notifier_work",iVar4);
    _dev_err(plVar10,"Unable to read USB TYPEC_MODE: %d\n",iVar4);
    goto LAB_0010993c;
  }
  local_4c = 0;
  local_58[0] = uVar2;
  iVar4 = iio_read_channel_processed(*(undefined8 *)(param_1 + 0x228),&local_4c);
  if (iVar4 < 0) {
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar7,
                   "usbpd_get_psy_iio_property",0xd);
    _dev_err(plVar10,"failed to get IIO property: %d\n",0xd);
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to read USB PROP_PE_START: %d\n",lVar7,
                   "psy_changed_notifier_work",iVar4);
    pcVar6 = "Unable to read USB PROP_PE_START: %d\n";
LAB_0010967c:
    _dev_err(plVar10,pcVar6,iVar4);
    goto LAB_0010993c;
  }
  local_58[0] = local_4c;
  if (((local_4c == 0) && (*(char *)(param_1 + 0x170) == '\0')) && (5 < uVar2)) {
    local_4c = 0;
    iVar4 = iio_read_channel_processed(*(undefined8 *)(param_1 + 0x218),&local_4c);
    if (iVar4 < 0) {
      lVar7 = *(long *)(param_1 + -0x388);
      if (lVar7 == 0) {
        lVar7 = *plVar10;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar7,
                     "usbpd_get_psy_iio_property",0xb);
      _dev_err(plVar10,"failed to get IIO property: %d\n",0xb);
      lVar7 = *(long *)(param_1 + -0x388);
      if (lVar7 == 0) {
        lVar7 = *plVar10;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to read USB TYPE: %d\n",lVar7,
                     "psy_changed_notifier_work",iVar4);
      pcVar6 = "Unable to read USB TYPE: %d\n";
      goto LAB_0010967c;
    }
    local_58[0] = local_4c;
    if ((local_4c & 0xfffffffd) != 4) goto LAB_0010993c;
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: typec mode:%d type:%d\n",lVar7,"psy_changed_notifier_work"
                   ,uVar2);
    _dev_err(plVar10,"typec mode:%d type:%d\n",uVar2,local_58[0]);
    uVar5 = *(undefined8 *)(param_1 + -0x68);
    lVar7 = param_1 + -0x30;
    *(uint *)(param_1 + 0x238) = uVar2;
    goto LAB_00109938;
  }
  iVar4 = power_supply_get_property(*(undefined8 *)(param_1 + 0x198),3,local_58);
  if (iVar4 != 0) {
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to read USB PRESENT: %d\n",lVar7,
                   "psy_changed_notifier_work",iVar4);
    pcVar6 = "Unable to read USB PRESENT: %d\n";
    goto LAB_0010967c;
  }
  *(bool *)(param_1 + 0x240) = local_58[0] != 0;
  if (uVar2 != 0) {
    if (local_58[0] == 0) {
      if (*(int *)(param_1 + 0x110) == 0x17) goto LAB_0010931c;
    }
    else if (*(int *)(param_1 + 0x110) == 0xf) {
LAB_0010931c:
      lVar7 = *(long *)(param_1 + -0x388);
      if (lVar7 == 0) {
        lVar7 = *plVar10;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: hard reset: typec mode:%d present:%d\n",lVar7,
                     "psy_changed_notifier_work",uVar2,local_58[0] != 0);
      lVar7 = param_1 + -0x60;
      *(uint *)(param_1 + 0x238) = uVar2;
      iVar4 = work_busy(lVar7);
      if (iVar4 != 0) {
        lVar7 = *(long *)(param_1 + -0x388);
        if (lVar7 == 0) {
          lVar7 = *plVar10;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: usbpd_sm already running\n",lVar7,
                       "psy_changed_notifier_work");
        goto LAB_0010993c;
      }
      pm_stay_awake(plVar10);
      uVar5 = *(undefined8 *)(param_1 + -0x68);
      *(undefined1 *)(param_1 + 0x100) = 1;
      goto LAB_00109938;
    }
  }
  if (*(uint *)(param_1 + 0x238) == uVar2) goto LAB_0010993c;
  *(uint *)(param_1 + 0x238) = uVar2;
  uVar5 = usbpd_ipc_log;
  lVar7 = *(long *)(param_1 + -0x388);
  if (lVar7 == 0) {
    lVar7 = *plVar10;
  }
  bVar3 = local_58[0] != 0;
  local_4c = 0;
  iVar4 = iio_read_channel_processed(*(undefined8 *)(param_1 + 0x1c8),&local_4c);
  if (iVar4 < 0) {
    lVar8 = *(long *)(param_1 + -0x388);
    if (lVar8 == 0) {
      lVar8 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar8,
                   "usbpd_get_psy_iio_property",1);
    _dev_err(plVar10,"failed to get IIO property: %d\n",1);
    uVar1 = 0;
  }
  else {
    uVar1 = local_4c;
  }
  ipc_log_string(uVar5,"%s: %s: typec mode:%d present:%d orientation:%d\n",lVar7,
                 "psy_changed_notifier_work",uVar2,bVar3,uVar1);
  if (uVar2 == 0) {
    if (*(char *)(param_1 + 0x250) != '\0') {
      lVar7 = *(long *)(param_1 + -0x388);
      if (lVar7 == 0) {
        lVar7 = *plVar10;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Ignoring disconnect due to PR swap\n",lVar7,
                     "usbpd_process_typec_mode");
      goto LAB_0010993c;
    }
LAB_00109914:
    uVar9 = 0xffffffff;
LAB_00109918:
    *(undefined4 *)(param_1 + 0x24c) = uVar9;
    goto LAB_0010991c;
  }
  switch(uVar2) {
  case 1:
  case 2:
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    pcVar6 = "";
    if (uVar2 != 1) {
      pcVar6 = " (powered)";
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Type-C Sink%s connected\n",lVar7,
                   "usbpd_process_typec_mode",pcVar6);
    _dev_info(plVar10,"Type-C Sink%s connected\n",pcVar6);
    if (*(int *)(param_1 + 0x24c) == 1) goto LAB_0010993c;
    uVar9 = 1;
    goto LAB_00109918;
  case 3:
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Type-C Debug Accessory connected\n",lVar7,
                   "usbpd_process_typec_mode");
    pcVar6 = "Type-C Debug Accessory connected\n";
    goto LAB_00109890;
  case 4:
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Type-C Analog Audio Adapter connected\n",lVar7,
                   "usbpd_process_typec_mode");
    pcVar6 = "Type-C Analog Audio Adapter connected\n";
LAB_00109890:
    _dev_info(plVar10,pcVar6);
    break;
  default:
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Unsupported typec mode:%d\n",lVar7,
                   "usbpd_process_typec_mode",uVar2);
    _dev_warn(plVar10,"Unsupported typec mode:%d\n",uVar2);
    break;
  case 6:
  case 7:
  case 8:
    lVar7 = *(long *)(param_1 + -0x388);
    if (lVar7 == 0) {
      lVar7 = *plVar10;
    }
    if (uVar2 - 6 < 3) {
      puVar11 = (&PTR_s_default_00104df0)[(int)(uVar2 - 6)];
    }
    else {
      puVar11 = &DAT_00103ca8;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Type-C Source (%s) connected\n",lVar7,
                   "usbpd_process_typec_mode",puVar11);
    _dev_info(plVar10,"Type-C Source (%s) connected\n",puVar11);
    if (((uVar2 != 8) || (*(int *)(param_1 + 0x244) != 2)) ||
       ((*(char *)(param_1 + 0x358) == '\0' &&
        ((*(char *)(param_1 + 0x359) == '\0' && (*(long *)(param_1 + 0x398) == 0)))))) {
      if (*(int *)(param_1 + 0x24c) == 0) goto LAB_0010993c;
      if (*(int *)(param_1 + 0x24c) == 1) {
        lVar7 = *(long *)(param_1 + -0x388);
        if (lVar7 == 0) {
          lVar7 = *plVar10;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Forcing disconnect from source mode\n",lVar7,
                       "usbpd_process_typec_mode");
        _dev_info(plVar10,"Forcing disconnect from source mode\n");
        goto LAB_00109914;
      }
      *(undefined4 *)(param_1 + 0x24c) = 0;
    }
  }
LAB_0010991c:
  pm_stay_awake(plVar10);
  uVar5 = *(undefined8 *)(param_1 + -0x68);
  lVar7 = param_1 + -0x60;
  *(undefined1 *)(param_1 + 0x100) = 1;
LAB_00109938:
  queue_work_on(0x20,uVar5,lVar7);
LAB_0010993c:
  lVar7 = sp_el0;
  if (*(long *)(lVar7 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- start_usb_peripheral_work.e7ce0f5c9173271e56101f64bf7b44f7 @ 00109974 ---- */

void start_usb_peripheral_work_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  undefined8 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xe;
  start_usb_peripheral(param_1 + -0x3c8);
  typec_set_data_role(*(undefined8 *)(param_1 + 0x318),0);
  typec_set_pwr_role(*(undefined8 *)(param_1 + 0x318),0);
  typec_set_pwr_opmode(*(undefined8 *)(param_1 + 0x318),*(int *)(param_1 + 0x268) + -6);
  if (*(long *)(param_1 + 800) == 0) {
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined4 *)(param_1 + 0x32c) = 0;
    *(byte *)(param_1 + 0x328) = *(byte *)(param_1 + 0x328) & 0xfe;
    uVar1 = typec_register_partner(*(undefined8 *)(param_1 + 0x318),param_1 + 0x328);
    *(undefined8 *)(param_1 + 800) = uVar1;
  }
  return;
}



/* ---- pd_timeout.e7ce0f5c9173271e56101f64bf7b44f7 @ 00109a14 ---- */

undefined8 pd_timeout_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  queue_work_on(0x20,*(undefined8 *)(param_1 + -0x120),param_1 + -0x118);
  return 0;
}



/* ---- get_connector_type @ 00109a4c ---- */

uint get_connector_type(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  local_2c = 0;
  uVar1 = iio_read_channel_processed(param_1[0xb9],&local_2c);
  if ((int)uVar1 < 0) {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar2,
                   "usbpd_get_psy_iio_property",2);
    _dev_err(param_1,"failed to get IIO property: %d\n",2);
    _dev_err(param_1,"Unable to read CONNECTOR TYPE: %d\n",uVar1);
  }
  else {
    uVar1 = local_2c;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ---- psy_changed.e7ce0f5c9173271e56101f64bf7b44f7 @ 00109b1c ---- */

undefined8 psy_changed_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,long param_2,long param_3)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == 0) && (*(long *)(param_1 + -0x10) == param_3)) {
    queue_work_on(0x20,*(undefined8 *)(param_1 + -0x210),param_1 + -0x1a8);
  }
  return 0;
}



/* ---- usbpd_destroy @ 00109b64 ---- */

void usbpd_destroy(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  if (param_1 != 0) {
    *in_x18 = unaff_x30;
    uVar1 = __list_del_entry_valid(param_1 + 0x7f0);
    if ((uVar1 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x7f8);
      lVar3 = *(long *)(param_1 + 0x7f0);
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    *(undefined8 *)(param_1 + 0x7f0) = 0xdead000000000100;
    *(undefined8 *)(param_1 + 0x7f8) = 0xdead000000000122;
    power_supply_unreg_notifier(param_1 + 0x5a0);
    power_supply_put(*(undefined8 *)(param_1 + 0x590));
    if (*(long *)(param_1 + 0x598) != 0) {
      power_supply_put();
    }
    destroy_workqueue(*(undefined8 *)(param_1 + 0x390));
    device_unregister(param_1);
  }
  return;
}



/* ---- start_usb_dp @ 00109bf8 ---- */

void start_usb_dp(long *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  local_3c = 0;
  iVar2 = iio_read_channel_processed(param_1[0xb8],&local_3c);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar3,
                   "usbpd_get_psy_iio_property",1);
    _dev_err(param_1,"failed to get IIO property: %d\n",1);
    bVar1 = false;
  }
  else {
    bVar1 = local_3c == 2;
  }
  extcon_set_state(param_1[0xa0],2,1);
  extcon_set_property(param_1[0xa0],2,1,bVar1);
  extcon_set_property(param_1[0xa0],2,2,param_2 & 1);
  extcon_set_state(param_1[0xa0],0x2c,0);
  extcon_set_state_sync(param_1[0xa0],0x2c,1);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- usbpd_uevent.e7ce0f5c9173271e56101f64bf7b44f7 @ 00109d1c ---- */

undefined8 usbpd_uevent_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  puVar1 = "dfp";
  if (*(int *)(lVar3 + 0x640) != 1) {
    puVar1 = "ufp";
  }
  add_uevent_var(param_2,"DATA_ROLE=%s",puVar1);
  if (*(int *)(lVar3 + 0x644) == 0) {
    add_uevent_var(param_2,"POWER_ROLE=sink");
    add_uevent_var(param_2,"SRC_CAP_ID=%d",*(undefined2 *)(lVar3 + 0x554));
    add_uevent_var(param_2,"PDO%d=%08x",0,*(undefined4 *)(lVar3 + 0x538));
    add_uevent_var(param_2,"PDO%d=%08x",1,*(undefined4 *)(lVar3 + 0x53c));
    add_uevent_var(param_2,"PDO%d=%08x",2,*(undefined4 *)(lVar3 + 0x540));
    add_uevent_var(param_2,"PDO%d=%08x",3,*(undefined4 *)(lVar3 + 0x544));
    add_uevent_var(param_2,"PDO%d=%08x",4,*(undefined4 *)(lVar3 + 0x548));
    add_uevent_var(param_2,"PDO%d=%08x",5,*(undefined4 *)(lVar3 + 0x54c));
    add_uevent_var(param_2,"PDO%d=%08x",6,*(undefined4 *)(lVar3 + 0x550));
    add_uevent_var(param_2,"REQUESTED_PDO=%d",*(undefined1 *)(lVar3 + 0x557));
    add_uevent_var(param_2,"SELECTED_PDO=%d",*(undefined1 *)(lVar3 + 0x556));
  }
  else {
    add_uevent_var(param_2,"POWER_ROLE=source");
    add_uevent_var(param_2,"PDO%d=%08x",0,0x36019096);
  }
  add_uevent_var(param_2,"RDO=%08x",*(undefined4 *)(lVar3 + 0x558));
  pcVar2 = "implicit";
  if (*(char *)(lVar3 + 0x569) != '\0') {
    pcVar2 = "explicit";
  }
  add_uevent_var(param_2,"CONTRACT=%s",pcVar2);
  add_uevent_var(param_2,"ALT_MODE=%d",*(int *)(lVar3 + 0x778) == 4);
  add_uevent_var(param_2,"SDB=%02x %02x %02x %02x %02x %02x",*(undefined1 *)(lVar3 + 0x8e5),
                 *(undefined1 *)(lVar3 + 0x8e6),*(undefined1 *)(lVar3 + 0x8e7),
                 *(undefined1 *)(lVar3 + 0x8e8),*(undefined1 *)(lVar3 + 0x8e9),
                 *(undefined1 *)(lVar3 + 0x8ea));
  return 0;
}



/* ---- contract_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00109f20 ---- */

long contract_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pcVar1 = "implicit";
  if (*(char *)(*(long *)(param_1 + 0x98) + 0x569) != '\0') {
    pcVar1 = "explicit";
  }
  iVar2 = scnprintf(param_3,0x1000,"%s\n",pcVar1);
  return (long)iVar2;
}



/* ---- initial_pr_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00109f7c ---- */

long initial_pr_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar3 = *(uint *)(*(long *)(param_1 + 0x98) + 0x630);
  pcVar1 = "none";
  if (uVar3 != 0) {
    pcVar1 = "source";
  }
  pcVar2 = "sink";
  if (uVar3 < 6) {
    pcVar2 = pcVar1;
  }
  iVar4 = scnprintf(param_3,0x1000,"%s\n",pcVar2);
  return (long)iVar4;
}



/* ---- current_pr_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00109fe8 ---- */

long current_pr_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar3 = *(int *)(*(long *)(param_1 + 0x98) + 0x644);
  pcVar1 = "source";
  if (iVar3 != 1) {
    pcVar1 = "none";
  }
  pcVar2 = "sink";
  if (iVar3 != 0) {
    pcVar2 = pcVar1;
  }
  iVar3 = scnprintf(param_3,0x1000,"%s\n",pcVar2);
  return (long)iVar3;
}



/* ---- initial_dr_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010a054 ---- */

long initial_dr_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar3 = *(uint *)(*(long *)(param_1 + 0x98) + 0x630);
  puVar1 = "none";
  if (uVar3 != 0) {
    puVar1 = "dfp";
  }
  puVar2 = "ufp";
  if (uVar3 < 6) {
    puVar2 = puVar1;
  }
  iVar4 = scnprintf(param_3,0x1000,"%s\n",puVar2);
  return (long)iVar4;
}



/* ---- current_dr_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010a0c0 ---- */

long current_dr_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar3 = *(int *)(*(long *)(param_1 + 0x98) + 0x640);
  puVar1 = "dfp";
  if (iVar3 != 1) {
    puVar1 = "none";
  }
  puVar2 = "ufp";
  if (iVar3 != 0) {
    puVar2 = puVar1;
  }
  iVar3 = scnprintf(param_3,0x1000,"%s\n",puVar2);
  return (long)iVar3;
}



/* ---- src_cap_id_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010a12c ---- */

long src_cap_id_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined2 *)(*(long *)(param_1 + 0x98) + 0x554))
  ;
  return (long)iVar1;
}



/* ---- pdo_h_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010a170 ---- */

long pdo_h_show_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *in_x18;
  ulong uVar9;
  long lVar10;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar8 = *(long *)(param_1 + 0x98);
  uVar9 = 0;
  lVar10 = 0;
  do {
    uVar1 = *(uint *)(lVar8 + 0x538 + uVar9 * 4);
    if (uVar1 == 0) {
      return lVar10;
    }
    uVar9 = uVar9 + 1;
    iVar3 = scnprintf(param_3 + lVar10,0x1000 - lVar10,"PDO %d\n",uVar9 & 0xffffffff);
    uVar2 = uVar1 >> 0x1e;
    lVar10 = lVar10 + iVar3;
    if (uVar2 == 0) {
      iVar3 = scnprintf(param_3 + lVar10,0x1000 - lVar10,
                        "\tFixed supply\n\tDual-Role Power:%d\n\tUSB Suspend Supported:%d\n\tExternally Powered:%d\n\tUSB Communications Capable:%d\n\tData Role Swap:%d\n\tPeak Current:%d\n\tVoltage:%d (mV)\n\tMax Current:%d (mA)\n"
                        ,uVar1 >> 0x1d,uVar1 >> 0x1c & 1,uVar1 >> 0x1b & 1,uVar1 >> 0x1a & 1,
                        uVar1 >> 0x19 & 1,uVar1 >> 0x14 & 3,(uVar1 >> 10 & 0x3ff) * 0x32,
                        (uVar1 & 0x3ff) * 10);
    }
    else {
      if (uVar2 == 2) {
        iVar6 = (uVar1 >> 0x14 & 0x3ff) * 0x32;
        iVar7 = (uVar1 >> 10 & 0x3ff) * 0x32;
        lVar4 = 0x1000 - lVar10;
        iVar3 = (uVar1 & 0x3ff) * 10;
        pcVar5 = 
        "\tVariable supply\n\tMax Voltage:%d (mV)\n\tMin Voltage:%d (mV)\n\tMax Current:%d (mA)\n";
      }
      else if (uVar2 == 1) {
        iVar6 = (uVar1 >> 0x14 & 0x3ff) * 0x32;
        iVar7 = (uVar1 >> 10 & 0x3ff) * 0x32;
        iVar3 = (uVar1 & 0x3ff) * 0xfa;
        lVar4 = 0x1000 - lVar10;
        pcVar5 = 
        "\tBattery supply\n\tMax Voltage:%d (mV)\n\tMin Voltage:%d (mV)\n\tMax Power:%d (mW)\n";
      }
      else {
        iVar6 = (uVar1 >> 0x11 & 0xff) * 100;
        lVar4 = 0x1000 - lVar10;
        iVar7 = (uVar1 >> 8 & 0xff) * 100;
        pcVar5 = 
        "\tProgrammable Power supply\n\tMax Voltage:%d (mV)\n\tMin Voltage:%d (mV)\n\tMax Current:%d (mA)\n"
        ;
        iVar3 = (uVar1 & 0x7f) * 0x32;
      }
      iVar3 = scnprintf(param_3 + lVar10,lVar4,pcVar5,iVar6,iVar7,iVar3);
    }
    lVar10 = lVar10 + iVar3;
    iVar3 = scnprintf(param_3 + lVar10,0x1000 - lVar10,&DAT_00103378);
    lVar10 = lVar10 + iVar3;
  } while (uVar9 != 7);
  return lVar10;
}



/* ---- pdo_n_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010a334 ---- */

long pdo_n_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined **param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  long *plVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  plVar3 = *(long **)(param_1 + 0x98);
  if (param_2 == &dev_attr_pdos) {
    lVar2 = 0;
  }
  else if (param_2 == &PTR_DAT_00100480) {
    lVar2 = 1;
  }
  else if (param_2 == &PTR_DAT_001004a0) {
    lVar2 = 2;
  }
  else if (param_2 == &PTR_DAT_001004c0) {
    lVar2 = 3;
  }
  else if (param_2 == &PTR_DAT_001004e0) {
    lVar2 = 4;
  }
  else if (param_2 == &PTR_DAT_00100500) {
    lVar2 = 5;
  }
  else {
    if (param_2 != &PTR_DAT_00100520) {
      lVar2 = plVar3[0xe];
      if (lVar2 == 0) {
        lVar2 = *plVar3;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid PDO index\n",lVar2,"pdo_n_show");
      _dev_err(plVar3,"Invalid PDO index\n");
      return -0x16;
    }
    lVar2 = 6;
  }
  iVar1 = scnprintf(param_3,0x1000,"%08x\n",*(undefined4 *)((long)plVar3 + lVar2 * 4 + 0x538));
  return (long)iVar1;
}



/* ---- select_pdo_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010a468 ---- */

long select_pdo_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%d\n",*(undefined1 *)(*(long *)(param_1 + 0x98) + 0x556))
  ;
  return (long)iVar1;
}



/* ---- select_pdo_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010a4ac ---- */

void select_pdo_store_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,char *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  long *plVar3;
  undefined8 unaff_x30;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x5e0);
  plVar3 = *(long **)(param_1 + 0x98);
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  mutex_lock(plVar3 + 0xe4);
  iVar1 = 0;
  if ((char)plVar3[0x102] == '\0') {
    if ((int)plVar3[0xa1] == 0x14) {
      iVar1 = sscanf(param_3,"%d %d %d %d",(int *)&local_4c,&local_50,(int *)((long)&local_58 + 4),
                     (int *)&local_58);
      if ((iVar1 == 2) || (iVar1 == 4)) {
        if (local_4c == *(ushort *)((long)plVar3 + 0x554)) {
          if (local_50 - 8U < 0xfffffff9) {
            lVar2 = plVar3[0xe];
            if (lVar2 == 0) {
              lVar2 = *plVar3;
            }
            ipc_log_string(usbpd_ipc_log,"%s: %s: invalid PDO:%d\n",lVar2,"select_pdo_store");
            _dev_err(plVar3,"invalid PDO:%d\n",local_50);
            iVar1 = -0x16;
          }
          else {
            iVar1 = pd_select_pdo(plVar3,local_50,local_58._4_4_,local_58 & 0xffffffff);
            if (iVar1 == 0) {
              *(undefined4 *)(plVar3 + 0xca) = 0;
              *(undefined1 *)((long)plVar3 + 0x64a) = 1;
              pm_stay_awake(plVar3);
              *(undefined1 *)(plVar3 + 0x9f) = 1;
              queue_work_on(0x20,plVar3[0x72],plVar3 + 0x73);
              lVar2 = wait_for_completion_timeout(plVar3 + 0xca,0xfa);
              if (lVar2 == 0) {
                lVar2 = plVar3[0xe];
                if (lVar2 == 0) {
                  lVar2 = *plVar3;
                }
                ipc_log_string(usbpd_ipc_log,"%s: %s: request timed out\n",lVar2,"select_pdo_store")
                ;
                _dev_err(plVar3,"request timed out\n");
                iVar1 = -0x6e;
              }
              else if ((*(char *)((long)plVar3 + 0x556) == *(char *)((long)plVar3 + 0x557)) &&
                      (*(int *)((long)plVar3 + 0x55c) == (int)plVar3[0xac])) {
                iVar1 = 0;
              }
              else {
                lVar2 = plVar3[0xe];
                if (lVar2 == 0) {
                  lVar2 = *plVar3;
                }
                ipc_log_string(usbpd_ipc_log,"%s: %s: request rejected\n",lVar2,"select_pdo_store");
                _dev_err(plVar3,"request rejected\n");
                iVar1 = -0x6f;
              }
            }
          }
        }
        else {
          lVar2 = plVar3[0xe];
          if (lVar2 == 0) {
            lVar2 = *plVar3;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: src_cap_id mismatch.  Requested:%d, current:%d\n",
                         lVar2,"select_pdo_store");
          _dev_err(plVar3,"src_cap_id mismatch.  Requested:%d, current:%d\n",local_4c,
                   *(undefined2 *)((long)plVar3 + 0x554));
          iVar1 = -0x16;
        }
      }
      else {
        lVar2 = plVar3[0xe];
        if (lVar2 == 0) {
          lVar2 = *plVar3;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Must specify <src cap id> <PDO> [<uV> <uA>]\n",lVar2,
                       "select_pdo_store");
        _dev_err(plVar3,"Must specify <src cap id> <PDO> [<uV> <uA>]\n");
        iVar1 = -0x16;
      }
    }
    else {
      lVar2 = plVar3[0xe];
      if (lVar2 == 0) {
        lVar2 = *plVar3;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Cannot select new PDO yet\n",lVar2,"select_pdo_store");
      _dev_err(plVar3,"Cannot select new PDO yet\n");
      iVar1 = -0x10;
    }
  }
  *(undefined1 *)((long)plVar3 + 0x64a) = 0;
  mutex_unlock(plVar3 + 0xe4);
  lVar2 = sp_el0;
  if (iVar1 != 0) {
    param_4 = (long)iVar1;
  }
  if (*(long *)(lVar2 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_4);
  }
  return;
}



/* ---- pd_select_pdo @ 0010a7b8 ---- */

undefined8 pd_select_pdo(long *param_1,int param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar4 = *(uint *)((long)param_1 + (ulong)(param_2 - 1) * 4 + 0x538);
  if (uVar4 >> 0x1e == 0) {
    uVar3 = (uVar4 & 0x3ff) * 10;
    param_3 = (uVar4 >> 10 & 0x3ff) * 50000;
    uVar5 = uVar3;
    if (uVar3 < 0x385) {
      uVar5 = 900;
    }
    uVar4 = param_2 << 0x1c | (uint)(uVar3 < 900) << 0x1a | (uVar4 & 0x3ff) << 10 | uVar5 / 10;
  }
  else {
    if (uVar4 >> 0x1e < 3) {
      lVar2 = param_1[0xe];
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Only Fixed or Programmable PDOs supported\n",lVar2,
                     "pd_select_pdo");
      _dev_err(param_1,"Only Fixed or Programmable PDOs supported\n");
      return 0xffffffa1;
    }
    if (((((uVar4 >> 0x11 & 0xff) < (uint)(param_3 / 100000)) ||
         ((uint)(param_3 / 100000) < (uVar4 >> 8 & 0xff))) || ((int)param_4 < 0)) ||
       ((uVar4 & 0x7f) < (uint)((int)param_4 / 50000))) {
      lVar2 = param_1[0xe];
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: uv (%d) and ua (%d) out of range of APDO\n",lVar2,
                     "pd_select_pdo",param_3,param_4);
      _dev_err(param_1,"uv (%d) and ua (%d) out of range of APDO\n",param_3,param_4);
      return 0xffffffea;
    }
    if ((char)param_1[0x117] != '\0') {
      lVar2 = param_1[0xe];
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: PPS is controlled by ourself, return not support\n",
                     lVar2,"pd_select_pdo");
      _dev_err(param_1,"PPS is controlled by ourself, return not support\n");
      return 0xfffffdf4;
    }
    uVar4 = param_4;
    if ((*(int *)((long)param_1 + 0x8bc) != 0) &&
       (uVar4 = *(uint *)(param_1 + 0x118), param_4 <= *(uint *)(param_1 + 0x118))) {
      uVar4 = param_4;
    }
    uVar5 = 1500000;
    if (uVar4 < 0x16e361 || *(char *)((long)param_1 + 0x8b9) == '\0') {
      uVar5 = uVar4;
    }
    uVar4 = 0x28;
    if (999 < uVar5) {
      uVar4 = uVar5 / 50000;
    }
    uVar4 = (param_3 / 20000) * 0x200 | param_2 << 0x1c | uVar4;
    uVar3 = 2000;
    if (999 < uVar5) {
      uVar3 = uVar5 / 1000;
    }
  }
  *(int *)(param_1 + 0xac) = param_3;
  *(uint *)(param_1 + 0xab) = uVar4 | 0x3000000;
  if (((*(char *)((long)param_1 + 0x769) == '\0') || (*(char *)((long)param_1 + 0x8c4) != '\0')) ||
     (param_3 < 0x4c4b41)) {
    uVar1 = 0;
    *(uint *)((long)param_1 + 0x564) = uVar3;
    *(char *)((long)param_1 + 0x557) = (char)param_2;
  }
  else {
    uVar1 = 0xfffffdf4;
  }
  return uVar1;
}



/* ---- rdo_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010aa4c ---- */

long rdo_show_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"%08x\n",*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x558));
  return (long)iVar1;
}



/* ---- rdo_h_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010aa90 ---- */

long rdo_h_show_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 *in_x18;
  long lVar8;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar8 = *(long *)(param_1 + 0x98);
  uVar2 = *(uint *)(lVar8 + 0x558);
  uVar4 = uVar2 >> 0x1c & 7;
  uVar3 = uVar4 - 1;
  if (6 < uVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x10ac24);
    (*pcVar5)();
  }
  uVar3 = *(uint *)(lVar8 + (ulong)uVar3 * 4 + 0x538);
  iVar6 = scnprintf(param_3,0x1000,
                    "Request Data Object\n\tObj Pos:%d\n\tGiveback:%d\n\tCapability Mismatch:%d\n\tUSB Communications Capable:%d\n\tNo USB Suspend:%d\n"
                    ,uVar4,uVar2 >> 0x1b & 1,uVar2 >> 0x1a & 1,uVar2 >> 0x19 & 1,uVar2 >> 0x18 & 1);
  switch(uVar3 >> 0x1e) {
  default:
    uVar2 = *(uint *)(lVar8 + 0x558);
    puVar1 = "Max";
    if ((uVar2 & 0x8000000) != 0) {
      puVar1 = "Min";
    }
    iVar7 = scnprintf(param_3 + iVar6,0x1000 - (long)iVar6,
                      "(Fixed/Variable)\n\tOperating Current:%d (mA)\n\t%s Current:%d (mA)\n",
                      (uVar2 >> 10 & 0x3ff) * 10,puVar1,(uVar2 & 0x3ff) * 10);
    break;
  case 1:
    uVar2 = *(uint *)(lVar8 + 0x558);
    puVar1 = "Max";
    if ((uVar2 & 0x8000000) != 0) {
      puVar1 = "Min";
    }
    iVar7 = scnprintf(param_3 + iVar6,0x1000 - (long)iVar6,
                      "(Battery)\n\tOperating Power:%d (mW)\n\t%s Power:%d (mW)\n",
                      (uVar2 >> 10 & 0x3ff) * 0xfa,puVar1,(uVar2 & 0x3ff) * 0xfa);
    break;
  case 3:
    iVar7 = scnprintf(param_3 + iVar6,0x1000 - (long)iVar6,
                      "(Programmable)\n\tOutput Voltage:%d (mV)\n\tOperating Current:%d (mA)\n",
                      (*(uint *)(lVar8 + 0x558) >> 9 & 0x7ff) * 0x14,
                      (*(uint *)(lVar8 + 0x558) & 0x7f) * 0x32);
  }
  return (long)(iVar7 + iVar6);
}



/* ---- hard_reset_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ac24 ---- */

void hard_reset_store_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  lVar4 = *(long *)(param_1 + 0x98);
  local_2c = 0;
  iVar1 = kstrtouint(param_3,0,&local_2c);
  uVar2 = 0xffffffffffffffea;
  if ((iVar1 == 0) && (local_2c == 1)) {
    uVar3 = 10;
    if (*(int *)(lVar4 + 0x644) != 1) {
      uVar3 = 0x15;
    }
    usbpd_set_state(lVar4,uVar3);
    uVar2 = param_4;
  }
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- usbpd_set_state @ 0010acd0 ---- */

void usbpd_set_state(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *in_x18;
  code *pcVar2;
  undefined *puVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar1 = param_1[0xe];
    if (lVar1 == 0) {
      lVar1 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10add4);
      (*pcVar2)();
    }
    puVar3 = (&usbpd_state_strings)[param_2 & 0xffffffff];
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar1,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],puVar3);
    *(int *)(param_1 + 0xa1) = (int)param_2;
    if ((0x15b40b951U >> (param_2 & 0x3f) & 1) == 0) {
      pcVar2 = *(code **)(&state_handlers + (param_2 & 0xffffffff) * 0x10);
      if (0x12 < ((ulong)(pcVar2 + -0x1058c0) >> 3 | (long)pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xfabe29b93f30e3d5,pcVar2,&DAT_00100780);
      }
      (*pcVar2)(param_1);
    }
    else {
      lVar1 = param_1[0xe];
      if (lVar1 == 0) {
        lVar1 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: No action for state %s\n",lVar1,"usbpd_set_state",puVar3
                    );
    }
  }
  return;
}



/* ---- handle_state_unknown.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010adf8 ---- */

void handle_state_unknown_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar2 = iio_write_channel_raw(param_1[0xbd],0);
  if (iVar2 < 0) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                   "usbpd_set_psy_iio_property",6);
    _dev_err(param_1,"failed to set IIO property: %d\n",6);
  }
  if (*(int *)((long)param_1 + 0x644) == 1) {
    if ((*(char *)((long)param_1 + 0x769) == '\0') && ((int)param_1[0xc6] == 2)) {
      if (param_1[0xec] == 0) {
        uVar3 = devm_regulator_get(param_1[0xc],"vconn");
        param_1[0xec] = uVar3;
        if (0xfffffffffffff000 < uVar3) {
          lVar4 = param_1[0xe];
          if (lVar4 == 0) {
            lVar4 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to get vconn\n",lVar4,"handle_state_unknown")
          ;
          _dev_err(param_1,"Unable to get vconn\n");
          return;
        }
      }
      iVar2 = regulator_enable();
      if (iVar2 == 0) {
        *(undefined1 *)((long)param_1 + 0x769) = 1;
      }
      else {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to enable vconn\n",lVar4,"handle_state_unknown"
                      );
        _dev_err(param_1,"Unable to enable vconn\n");
      }
    }
    enable_vbus(param_1);
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010b014;
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SRC_Startup");
      *(undefined4 *)(param_1 + 0xa1) = 3;
      enter_state_src_startup_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  else if ((*(int *)((long)param_1 + 0x644) == 0) && (*(char *)((long)param_1 + 0x50d) == '\0')) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010b014:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10b018);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Startup");
    *(undefined4 *)(param_1 + 0xa1) = 0xe;
    enter_state_snk_startup_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- enter_state_error_recovery.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b018 ---- */

void enter_state_error_recovery_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)((long)param_1 + 0x644) = 0xffffffff;
  iVar1 = iio_write_channel_raw(param_1[0xba],0);
  if (iVar1 < 0) {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar2,
                   "usbpd_set_psy_iio_property",3);
    _dev_err(param_1,"failed to set IIO property: %d\n",3);
  }
  *(undefined4 *)(param_1 + 0xc6) = 0;
  pm_stay_awake(param_1);
  *(undefined1 *)(param_1 + 0x9f) = 1;
  queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
  return;
}



/* ---- enter_state_src_disabled.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b0c8 ---- */

void enter_state_src_disabled_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(int *)(param_1 + 0x630) == 0) {
    *(undefined4 *)(param_1 + 0x644) = 0xffffffff;
    pm_stay_awake();
    *(undefined1 *)(param_1 + 0x4f8) = 1;
    queue_work_on(0x20,*(undefined8 *)(param_1 + 0x390),param_1 + 0x398);
  }
  return;
}



/* ---- enter_state_src_startup.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b120 ---- */

void enter_state_src_startup_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x5e0);
  local_50 = phy_shutdown_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
  uStack_48 = 0;
  local_40 = 0x21;
  local_60 = phy_sig_received_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
  pcStack_58 = phy_msg_received_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
  if ((int)param_1[200] == -1) {
    *(undefined4 *)(param_1 + 200) = 1;
    start_usb_host(param_1);
    *(undefined2 *)((long)param_1 + 0x802) = 0;
    typec_set_data_role(param_1[0xdc],1);
  }
  typec_set_pwr_role(param_1[0xdc],1);
  if (param_1[0xdd] == 0) {
    typec_set_pwr_opmode(param_1[0xdc],1);
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    param_1[0xe1] = 0;
    *(undefined4 *)((long)param_1 + 0x6f4) = 0;
    *(byte *)(param_1 + 0xde) = *(byte *)(param_1 + 0xde) & 0xfe;
    lVar4 = typec_register_partner(param_1[0xdc],param_1 + 0xde);
    param_1[0xdd] = lVar4;
  }
  iVar3 = iio_write_channel_raw(param_1[0xbc],1);
  if (iVar3 < 0) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                   "usbpd_set_psy_iio_property",5);
    _dev_err(param_1,"failed to set IIO property: %d\n",5);
  }
  iVar3 = iio_write_channel_raw(param_1[0xba],1);
  if (iVar3 < 0) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                   "usbpd_set_psy_iio_property",3);
    _dev_err(param_1,"failed to set IIO property: %d\n",3);
  }
  iVar3 = usbpd_startup_common(param_1,&local_60);
  if (iVar3 != 0) goto LAB_0010b440;
  if ((char)param_1[0xc9] == '\0') {
LAB_0010b234:
    if (*(char *)((long)param_1 + 0x769) != '\0') goto LAB_0010b23c;
LAB_0010b3e4:
    *(undefined4 *)(param_1 + 0xa1) = 5;
    pm_stay_awake(param_1);
    uVar2 = usbpd_ipc_log;
    lVar4 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(uVar2,"%s: %s: delay %d ms",lVar4,"kick_sm",100);
    uVar1 = 100000000;
  }
  else {
    *(undefined1 *)(param_1 + 0xc9) = 0;
    iVar3 = iio_write_channel_raw(param_1[0xbf],0);
    if (-1 < iVar3) goto LAB_0010b234;
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                   "usbpd_set_psy_iio_property",8);
    _dev_err(param_1,"failed to set IIO property: %d\n",8);
    if (*(char *)((long)param_1 + 0x769) == '\0') goto LAB_0010b3e4;
LAB_0010b23c:
    usleep_range_state(50000,51000,2);
    lVar4 = param_1[0xe];
    uVar1 = 0xff00a001;
    if (*(int *)((long)param_1 + 0x63c) != 2) {
      uVar1 = 0xff008001;
    }
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,
                   "%s: %s: VDM tx: svid:%04x ver:%d obj_pos:%d cmd:%x cmd_type:%x svdm_hdr:%x\n",
                   lVar4,"usbpd_send_svdm",0xff00,*(int *)((long)param_1 + 0x63c) == 2,0,1,0,uVar1);
    usbpd_send_vdm(param_1,uVar1,0,0);
    handle_vdm_tx(param_1,1);
    *(undefined4 *)(param_1 + 0xa1) = 4;
    pm_stay_awake(param_1);
    lVar4 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: delay %d ms",lVar4,"kick_sm",0x1a);
    uVar1 = 26000000;
  }
  hrtimer_start_range_ns(param_1 + 0x96,uVar1,0,1);
LAB_0010b440:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- handle_state_src_startup.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b474 ---- */

void handle_state_src_startup_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10b504);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar2,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SRC_Startup");
    *(undefined4 *)(param_1 + 0xa1) = 3;
    enter_state_src_startup_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- handle_state_src_startup_wait_for_vdm_resp.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b504 ---- */

void handle_state_src_startup_wait_for_vdm_resp_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *in_x18;
  int iVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == (ushort *)0x0) {
    iVar4 = 0x18;
  }
  else {
    uVar1 = *param_2;
    if ((-1 < (short)uVar1) && ((uVar1 & 0x7000) != 0 && (uVar1 & 0x1f) == 0xf)) {
      handle_vdm_rx(param_1);
    }
    iVar4 = 0x32;
  }
  *(undefined4 *)((long)param_1 + 0x63c) = 2;
  *(undefined4 *)(param_1 + 0xa1) = 5;
  pm_stay_awake(param_1);
  uVar2 = usbpd_ipc_log;
  lVar3 = param_1[0xe];
  *(undefined1 *)(param_1 + 0x9f) = 1;
  if (lVar3 == 0) {
    lVar3 = *param_1;
  }
  ipc_log_string(uVar2,"%s: %s: delay %d ms",lVar3,"kick_sm",iVar4);
  hrtimer_start_range_ns(param_1 + 0x96,iVar4 * 1000000,0,1);
  return;
}



/* ---- enter_state_src_send_capabilities.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b5d0 ---- */

void enter_state_src_send_capabilities_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pm_stay_awake();
  *(undefined1 *)(param_1 + 0x4f8) = 1;
  queue_work_on(0x20,*(undefined8 *)(param_1 + 0x390),param_1 + 0x398);
  return;
}



/* ---- handle_state_src_send_capabilities.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b618 ---- */

void handle_state_src_send_capabilities_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar3 = pd_send_msg(param_1,1,&default_src_caps,1,0);
  if (iVar3 == 0) {
    param_1[0xee] = 0;
    *(undefined1 *)(param_1 + 0xad) = 1;
    *(undefined4 *)(param_1 + 0xa1) = 6;
    pm_stay_awake(param_1);
    lVar4 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: delay %d ms",lVar4,"kick_sm",0x1a);
    hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
    iVar3 = iio_write_channel_raw(param_1[0xb7],1);
joined_r0x0010b784:
    if (iVar3 < 0) {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                     "usbpd_set_psy_iio_property",0);
      _dev_err(param_1,"failed to set IIO property: %d\n",0);
    }
  }
  else {
    if ((char)param_1[0xad] == '\0') {
      iVar3 = (int)param_1[0xee] + 1;
      *(int *)(param_1 + 0xee) = iVar3;
      if (0x31 < iVar3) {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Src CapsCounter exceeded, disabling PD\n",lVar4,
                       "handle_state_src_send_capabilities");
        if (*(char *)((long)param_1 + 0x50d) == '\0') {
          lVar4 = param_1[0xe];
          if (lVar4 == 0) {
            lVar4 = *param_1;
          }
          if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010b950;
          ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                         (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SRC_Disabled");
          *(undefined4 *)(param_1 + 0xa1) = 2;
          if ((int)param_1[0xc6] == 0) {
            *(undefined4 *)((long)param_1 + 0x644) = 0xffffffff;
            pm_stay_awake(param_1);
            *(undefined1 *)(param_1 + 0x9f) = 1;
            queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
          }
        }
        iVar3 = iio_write_channel_raw(param_1[0xb7],0);
        goto joined_r0x0010b784;
      }
      pm_stay_awake(param_1);
      uVar1 = usbpd_ipc_log;
      lVar4 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar4,"kick_sm",0x78);
      uVar5 = 120000000;
    }
    else {
      if (*(char *)((long)param_1 + 0x50d) != '\0') {
        return;
      }
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010b950:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10b954);
        (*pcVar2)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
      *(undefined2 *)((long)param_1 + 0x76a) = 0;
      *(undefined4 *)(param_1 + 0xa1) = 0x1f;
      *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
      *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
      *(undefined1 *)((long)param_1 + 0x76c) = 0;
      *(undefined1 *)((long)param_1 + 0x64a) = 0;
      *(undefined1 *)((long)param_1 + 0x8e4) = 0;
      *(undefined2 *)(param_1 + 0xea) = 0;
      iVar3 = pd_send_msg(param_1,0xd,0,0,0);
      if (iVar3 != 0) {
        uVar5 = 10;
        if (*(int *)((long)param_1 + 0x644) != 1) {
          uVar5 = 0x15;
        }
        usbpd_set_state(param_1,uVar5);
        return;
      }
      pm_stay_awake(param_1);
      uVar1 = usbpd_ipc_log;
      lVar4 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar4,"kick_sm",0x1a);
      uVar5 = 26000000;
    }
    hrtimer_start_range_ns(param_1 + 0x96,uVar5,0,1);
  }
  return;
}



/* ---- handle_state_src_send_capabilities_wait.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010b954 ---- */

void handle_state_src_send_capabilities_wait_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == (ushort *)0x0) {
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010bb08;
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SRC_Hard_Reset");
      *(undefined4 *)(param_1 + 0xa1) = 10;
      enter_state_hard_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  else {
    uVar1 = *param_2;
    if (((short)uVar1 < 0) || ((uVar1 & 0x7000) == 0 || (uVar1 & 0x1f) != 2)) {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Unexpected message received\n",lVar3,
                     "handle_state_src_send_capabilities_wait");
      _dev_err(param_1,"Unexpected message received\n");
      if (*(char *)((long)param_1 + 0x50d) == '\0') {
        lVar3 = param_1[0xe];
        if (lVar3 == 0) {
          lVar3 = *param_1;
        }
        if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010bb08:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10bb0c);
          (*pcVar2)();
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
        *(undefined4 *)(param_1 + 0xa1) = 0x1f;
        enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xab) = *(undefined4 *)(param_2 + 0xc);
      if (*(char *)((long)param_1 + 0x50d) == '\0') {
        lVar3 = param_1[0xe];
        if (lVar3 == 0) {
          lVar3 = *param_1;
        }
        if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010bb08;
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SRC_Negotiate_Capability")
        ;
        *(undefined4 *)(param_1 + 0xa1) = 7;
        enter_state_src_negotiate_capability_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
      }
    }
  }
  return;
}



/* ---- enter_state_src_negotiate_capability.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010bb0c ---- */

void enter_state_src_negotiate_capability_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  log_decoded_request(param_1,(int)param_1[0xab]);
  uVar1 = *(uint *)(param_1 + 0xab);
  *(byte *)((long)param_1 + 0x56a) = (byte)(uVar1 >> 0x19) & 1;
  if (((uVar1 & 0x70000000) == 0x10000000) && ((uVar1 & 0xffc00) < 0x25801)) {
    iVar4 = pd_send_msg(param_1,3,0,0,0);
    if (iVar4 != 0) goto LAB_0010bc6c;
    usleep_range_state(25000,30000,2);
    iVar4 = pd_send_msg(param_1,6,0,0,0);
    if (iVar4 == 0) {
      if (*(char *)((long)param_1 + 0x50d) != '\0') {
        return;
      }
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      if (*(uint *)(param_1 + 0xa1) < 0x21) {
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar5,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SRC_Ready");
        *(undefined4 *)(param_1 + 0xa1) = 9;
        enter_state_src_ready_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
        return;
      }
      goto LAB_0010be4c;
    }
    if (*(char *)((long)param_1 + 0x50d) != '\0') {
      return;
    }
    lVar5 = param_1[0xe];
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010be4c;
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar5,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
    *(undefined2 *)((long)param_1 + 0x76a) = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0x1f;
    *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
    *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
    *(undefined1 *)((long)param_1 + 0x76c) = 0;
    *(undefined1 *)((long)param_1 + 0x64a) = 0;
    *(undefined1 *)((long)param_1 + 0x8e4) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    iVar4 = pd_send_msg(param_1,0xd,0,0,0);
    if (iVar4 == 0) {
      kick_sm(param_1,0x1a);
      return;
    }
  }
  else {
    iVar4 = pd_send_msg(param_1,4,0,0,0);
    if (iVar4 == 0) {
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid request: %08x\n",lVar5,
                     "enter_state_src_negotiate_capability",(int)param_1[0xab]);
      _dev_err(param_1,"Invalid request: %08x\n",(int)param_1[0xab]);
      if (*(char *)((long)param_1 + 0x569) == '\0') {
        uVar6 = 5;
      }
      else {
        uVar6 = 9;
      }
      goto LAB_0010bd20;
    }
LAB_0010bc6c:
    if (*(char *)((long)param_1 + 0x50d) != '\0') {
      return;
    }
    lVar5 = param_1[0xe];
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010be4c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x10be50);
      (*pcVar3)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar5,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
    *(undefined2 *)((long)param_1 + 0x76a) = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0x1f;
    *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
    *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
    *(undefined1 *)((long)param_1 + 0x76c) = 0;
    *(undefined1 *)((long)param_1 + 0x64a) = 0;
    *(undefined1 *)((long)param_1 + 0x8e4) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    iVar4 = pd_send_msg(param_1,0xd,0,0,0);
    if (iVar4 == 0) {
      pm_stay_awake(param_1);
      uVar2 = usbpd_ipc_log;
      lVar5 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(uVar2,"%s: %s: delay %d ms",lVar5,"kick_sm",0x1a);
      hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
      return;
    }
  }
  uVar6 = 10;
  if (*(int *)((long)param_1 + 0x644) != 1) {
    uVar6 = 0x15;
  }
LAB_0010bd20:
  usbpd_set_state(param_1,uVar6);
  return;
}



/* ---- enter_state_src_ready.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010be50 ---- */

void enter_state_src_ready_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((((int)param_1[200] == 1) && (*(char *)((long)param_1 + 0x56a) == '\0')) &&
     (*(char *)((long)param_1 + 0x569) == '\0')) {
    extcon_set_state_sync(param_1[0xa0],2,0);
  }
  *(undefined1 *)((long)param_1 + 0x569) = 1;
  if ((param_1[0xf2] == 0) || ((char)param_1[0x9f] != '\0')) {
    if (((int)param_1[200] == 1) && ((int)param_1[0xef] == 0)) {
      lVar2 = param_1[0xe];
      uVar1 = 0xff00a001;
      if (*(int *)((long)param_1 + 0x63c) != 2) {
        uVar1 = 0xff008001;
      }
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,
                     "%s: %s: VDM tx: svid:%04x ver:%d obj_pos:%d cmd:%x cmd_type:%x svdm_hdr:%x\n",
                     lVar2,"usbpd_send_svdm",0xff00,*(int *)((long)param_1 + 0x63c) == 2,0,1,0,uVar1
                    );
      usbpd_send_vdm(param_1,uVar1,0,0);
    }
    else {
      start_src_ams(param_1,0);
    }
  }
  else {
    pm_stay_awake(param_1);
    *(undefined1 *)(param_1 + 0x9f) = 1;
    queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
  }
  kobject_uevent(param_1,2);
  complete(param_1 + 0xca);
  typec_set_pwr_opmode(param_1[0xdc],3);
  return;
}



/* ---- handle_state_src_ready.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010bfa0 ---- */

/* WARNING: Removing unreachable block (ram,0x0010c4a0) */
/* WARNING: Removing unreachable block (ram,0x0010c478) */

void handle_state_src_ready_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == (ushort *)0x0) {
LAB_0010c2e4:
    if ((char)param_1[0xea] == '\0') {
      if (*(char *)((long)param_1 + 0x751) == '\0') {
        if (param_1[0xf2] == 0) {
          start_src_ams(param_1,0);
          return;
        }
        handle_vdm_tx(param_1,0);
        return;
      }
      *(undefined1 *)((long)param_1 + 0x751) = 0;
      iVar5 = pd_send_msg(param_1,9,0,0,0);
      if (iVar5 == 0) {
        uVar7 = 0x18;
        goto LAB_0010c3bc;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xea) = 0;
      iVar5 = pd_send_msg(param_1,10,0,0,0);
      if (iVar5 == 0) {
        uVar7 = 0x1c;
LAB_0010c3bc:
        *(undefined4 *)(param_1 + 0xa1) = uVar7;
        pm_stay_awake(param_1);
        uVar3 = usbpd_ipc_log;
        lVar6 = param_1[0xe];
        *(undefined1 *)(param_1 + 0x9f) = 1;
        if (lVar6 == 0) {
          lVar6 = *param_1;
        }
        ipc_log_string(uVar3,"%s: %s: delay %d ms",lVar6,"kick_sm",0x1a);
        hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
        return;
      }
    }
  }
  else {
    uVar2 = *param_2;
    uVar1 = uVar2 & 0x701f;
    if (uVar1 != 8) {
      if (uVar1 == 7) {
        *(undefined4 *)(param_1 + 0xa1) = 5;
        pm_stay_awake(param_1);
        *(undefined1 *)(param_1 + 0x9f) = 1;
        queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
        return;
      }
      if (((-1 < (short)uVar2) && ((uVar2 & 0x7000) != 0)) && ((uVar2 & 0x1f) == 2)) {
        *(undefined4 *)(param_1 + 0xab) = *(undefined4 *)(param_2 + 0xc);
        if (*(char *)((long)param_1 + 0x50d) != '\0') {
          return;
        }
        lVar6 = param_1[0xe];
        if (lVar6 == 0) {
          lVar6 = *param_1;
        }
        if (*(uint *)(param_1 + 0xa1) < 0x21) {
          ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar6,"usbpd_set_state",
                         (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],
                         "SRC_Negotiate_Capability");
          *(undefined4 *)(param_1 + 0xa1) = 7;
          enter_state_src_negotiate_capability_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt(param_1);
          return;
        }
        goto LAB_0010c474;
      }
      if (uVar1 == 0xb) {
        iVar5 = pd_send_msg(param_1,3,0,0,0);
        if (iVar5 == 0) {
          vconn_swap(param_1);
          return;
        }
      }
      else {
        if (uVar1 != 10) {
          if (uVar1 == 9) {
            if ((int)param_1[0xef] == 4) {
              usbpd_set_state(param_1,10);
              return;
            }
            iVar5 = pd_send_msg(param_1,3,0,0,0);
            if (iVar5 == 0) {
              dr_swap(param_1);
              return;
            }
LAB_0010c210:
            usbpd_set_state(param_1,0x1f);
            return;
          }
          if (((-1 < (short)uVar2) && ((uVar2 & 0x7000) != 0)) && ((uVar2 & 0x1f) == 0xf)) {
            handle_vdm_rx(param_1);
            return;
          }
          if (uVar1 == 0x11) {
            handle_get_src_cap_extended(param_1);
            return;
          }
          if ((uVar2 & 0x801f) == 0x8004) {
            handle_get_battery_status(param_1);
            return;
          }
          if ((uVar2 & 0x801f) == 0x8003) {
            handle_get_battery_cap(param_1);
            return;
          }
          if (uVar1 != 0x10) {
            if ((uVar1 - 3 < 2) || (uVar1 == 0xc)) {
              lVar6 = param_1[0xe];
              if (lVar6 == 0) {
                lVar6 = *param_1;
              }
              ipc_log_string(usbpd_ipc_log,"%s: %s: Unexpected message\n",lVar6,
                             "handle_state_src_ready");
              _dev_warn(param_1,"Unexpected message\n");
            }
            else {
              lVar6 = param_1[0xe];
              if (lVar6 == 0) {
                lVar6 = *param_1;
              }
              ipc_log_string(usbpd_ipc_log,"%s: %s: Unsupported message\n",lVar6,
                             "handle_state_src_ready");
              uVar7 = 0x10;
              if (*(int *)((long)param_1 + 0x63c) != 2) {
                uVar7 = 4;
              }
              iVar5 = pd_send_msg(param_1,uVar7,0,0,0);
              if (iVar5 == 0) {
                return;
              }
            }
            goto LAB_0010c210;
          }
          goto LAB_0010c2e4;
        }
        iVar5 = pd_send_msg(param_1,3,0,0,0);
        if (iVar5 == 0) {
          usbpd_set_state(param_1,0x1d);
          return;
        }
      }
      if (*(char *)((long)param_1 + 0x50d) != '\0') {
        return;
      }
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      if (*(uint *)(param_1 + 0xa1) < 0x21) {
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar6,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
        *(undefined4 *)(param_1 + 0xa1) = 0x1f;
        enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt(param_1);
        return;
      }
      goto LAB_0010c474;
    }
    iVar5 = pd_send_msg(param_1,4,param_1 + 0xae,(long)*(int *)((long)param_1 + 0x58c),0);
    if (iVar5 == 0) {
      return;
    }
  }
  if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar6 = param_1[0xe];
    if (lVar6 == 0) {
      lVar6 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010c474:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x10c478);
      (*pcVar4)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar6,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
    *(undefined4 *)(param_1 + 0xa1) = 0x1f;
    enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- enter_state_hard_reset.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010c4c8 ---- */

void enter_state_hard_reset_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *in_x18;
  code *pcVar7;
  long *plVar8;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((int)param_1[0xc6] == 0) {
    *(undefined4 *)((long)param_1 + 0x644) = 0xffffffff;
    pm_stay_awake(param_1);
    *(undefined1 *)(param_1 + 0x9f) = 1;
    queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
  }
  else {
    iVar3 = iio_write_channel_raw(param_1[0xbd],1);
    if (iVar3 < 0) {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar6,
                     "usbpd_set_psy_iio_property",6);
      _dev_err(param_1,"failed to set IIO property: %d\n",6);
      iVar3 = *(int *)((long)param_1 + 0x644);
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0x644);
    }
    if (iVar3 == 0) {
      if (*(int *)((long)param_1 + 0x564) != 0) {
        *(undefined4 *)((long)param_1 + 0x564) = 0;
        iVar3 = iio_write_channel_raw(param_1[0xbe],0);
        if (iVar3 < 0) {
          lVar6 = param_1[0xe];
          if (lVar6 == 0) {
            lVar6 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar6,
                         "usbpd_set_psy_iio_property",7);
          _dev_err(param_1,"failed to set IIO property: %d\n",7);
        }
      }
      *(undefined4 *)(param_1 + 0xac) = 5000000;
      iVar3 = iio_write_channel_raw(param_1[0xc0],5000000);
      if (iVar3 < 0) {
        lVar6 = param_1[0xe];
        if (lVar6 == 0) {
          lVar6 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar6,
                       "usbpd_set_psy_iio_property",9);
        _dev_err(param_1,"failed to set IIO property: %d\n",9);
      }
    }
    lVar6 = param_1[0xe];
    if (lVar6 == 0) {
      lVar6 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: send hard reset",lVar6,"pd_send_hard_reset");
    *(int *)((long)param_1 + 0x774) = *(int *)((long)param_1 + 0x774) + 1;
    pcVar7 = *(code **)(param_1[0x120] + 8);
    __cfi_slowpath_diag(0x4fd165d4638e2a0d,pcVar7,&DAT_00100940);
    (*pcVar7)(0);
    *(undefined1 *)(param_1 + 0xc9) = 0;
    *(undefined1 *)(param_1 + 0xad) = 0;
    iVar3 = iio_write_channel_raw(param_1[0xbf],0);
    if (iVar3 < 0) {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar6,
                     "usbpd_set_psy_iio_property",8);
      _dev_err(param_1,"failed to set IIO property: %d\n",8);
    }
    *(undefined1 *)((long)param_1 + 0x569) = 0;
    *(undefined4 *)(param_1 + 0xab) = 0;
    uVar4 = _raw_spin_lock_irqsave(param_1 + 0xa5);
    plVar2 = (long *)param_1[0xa3];
    while (param_1 + 0xa3 != plVar2) {
      plVar8 = (long *)*plVar2;
      uVar5 = __list_del_entry_valid(plVar2);
      if ((uVar5 & 1) != 0) {
        lVar6 = *plVar2;
        plVar1 = (long *)plVar2[1];
        *(long **)(lVar6 + 8) = plVar1;
        *plVar1 = lVar6;
      }
      *plVar2 = -0x2152ffffffffff00;
      plVar2[1] = -0x2152fffffffffede;
      kfree(plVar2 + -1);
      plVar2 = plVar8;
    }
    _raw_spin_unlock_irqrestore(param_1 + 0xa5,uVar4);
    reset_vdm_state(param_1);
    kobject_uevent(param_1,2);
    if (*(int *)((long)param_1 + 0x644) == 1) {
      *(undefined4 *)(param_1 + 0xa1) = 0xd;
      pm_stay_awake(param_1);
      uVar4 = usbpd_ipc_log;
      lVar6 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(uVar4,"%s: %s: delay %d ms",lVar6,"kick_sm",0x19);
      hrtimer_start_range_ns(param_1 + 0x96,25000000,0,1);
    }
    else if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x10c87c);
        (*pcVar7)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar6,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Transition_to_default");
      *(undefined4 *)(param_1 + 0xa1) = 0x17;
      enter_state_snk_transition_to_default_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  return;
}



/* ---- handle_state_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010c87c ---- */

void handle_state_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined2 *)(param_1 + 0x76a) = 0;
  *(undefined1 *)(param_1 + 0x76c) = 0;
  *(undefined1 *)(param_1 + 0x64a) = 0;
  *(undefined1 *)(param_1 + 0x76f) = 0xff;
  *(undefined2 *)(param_1 + 0x76d) = 0xffff;
  *(undefined1 *)(param_1 + 0x8e4) = 0;
  *(undefined2 *)(param_1 + 0x750) = 0;
  iVar2 = pd_send_msg(param_1,3,0,0,0);
  bVar1 = *(int *)(param_1 + 0x644) != 1;
  uVar4 = 5;
  if (bVar1) {
    uVar4 = 0x10;
  }
  uVar3 = 10;
  if (bVar1) {
    uVar3 = 0x15;
  }
  if (iVar2 != 0) {
    uVar4 = uVar3;
  }
  usbpd_set_state(param_1,uVar4);
  return;
}



/* ---- handle_state_src_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010c914 ---- */

void handle_state_src_transition_to_default_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x18;
  code *pcVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x769) != '\0') {
    regulator_disable(param_1[0xec]);
  }
  *(undefined1 *)((long)param_1 + 0x769) = 0;
  if ((char)param_1[0xed] != '\0') {
    regulator_disable(param_1[0xeb]);
  }
  *(undefined1 *)(param_1 + 0xed) = 0;
  if ((int)param_1[200] != 1) {
    extcon_set_state_sync(param_1[0xa0],1,0);
    *(undefined4 *)(param_1 + 200) = 1;
    pcVar3 = *(code **)(param_1[0x120] + 0x18);
    __cfi_slowpath_diag(0x4149c9976e4409c4,pcVar3,&DAT_00100960);
    (*pcVar3)((int)param_1[200],*(undefined4 *)((long)param_1 + 0x644));
  }
  *(undefined4 *)(param_1 + 0xa1) = 0;
  pm_stay_awake(param_1);
  uVar1 = usbpd_ipc_log;
  lVar2 = param_1[0xe];
  *(undefined1 *)(param_1 + 0x9f) = 1;
  if (lVar2 == 0) {
    lVar2 = *param_1;
  }
  ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar2,"kick_sm",0x2ee);
  hrtimer_start_range_ns(param_1 + 0x96,750000000,0,1);
  return;
}



/* ---- enter_state_snk_startup.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ca18 ---- */

void enter_state_snk_startup_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  code *local_58;
  code *pcStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar6 = sp_el0;
  local_28 = *(long *)(lVar6 + 0x5e0);
  local_38 = 0x21;
  local_48 = phy_shutdown_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
  uStack_40 = 0;
  local_58 = phy_sig_received_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
  pcStack_50 = phy_msg_received_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
  if ((int)param_1[200] + 1U < 2) {
    *(undefined4 *)(param_1 + 200) = 0;
    local_2c = 0;
    iVar5 = iio_read_channel_processed(param_1[0xc2],&local_2c);
    uVar3 = local_2c;
    if (iVar5 < 0) {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar6,
                     "usbpd_get_psy_iio_property",0xb);
      _dev_err(param_1,"failed to get IIO property: %d\n",0xb);
    }
    else {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: type:%d\n",lVar6,"enter_state_snk_startup",local_2c);
      if ((uVar3 & 0xfffffffd) == 4) {
        start_usb_peripheral(param_1);
      }
    }
    typec_set_data_role(param_1[0xdc],0);
  }
  typec_set_pwr_role(param_1[0xdc],0);
  if (param_1[0xdd] == 0) {
    typec_set_pwr_opmode(param_1[0xdc],(int)param_1[0xc6] + -6);
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    param_1[0xe1] = 0;
    *(undefined4 *)((long)param_1 + 0x6f4) = 0;
    *(byte *)(param_1 + 0xde) = *(byte *)(param_1 + 0xde) & 0xfe;
    lVar6 = typec_register_partner(param_1[0xdc],param_1 + 0xde);
    param_1[0xdd] = lVar6;
  }
  iVar5 = usbpd_startup_common(param_1,&local_58);
  if (iVar5 == 0) {
    *(undefined8 *)((long)param_1 + 0x55c) = 0x4c4b40004c4b40;
    iVar5 = iio_write_channel_raw(param_1[0xc1],5000000);
    if (iVar5 < 0) {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar6,
                     "usbpd_set_psy_iio_property",10);
      _dev_err(param_1,"failed to set IIO property: %d\n",10);
      cVar1 = (char)param_1[199];
    }
    else {
      cVar1 = (char)param_1[199];
    }
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xa1) = 0xf;
      pm_stay_awake(param_1);
      uVar2 = usbpd_ipc_log;
      lVar6 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(uVar2,"%s: %s: delay %d ms",lVar6,"kick_sm",0x4fb);
      hrtimer_start_range_ns(param_1 + 0x96,0x4bfef4c0,0,1);
    }
    else if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x10ccec);
        (*pcVar4)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar6,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Wait_for_Capabilities");
      *(undefined4 *)(param_1 + 0xa1) = 0x10;
      enter_state_snk_wait_for_capabilities_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- handle_state_snk_startup.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ccec ---- */

void handle_state_snk_startup_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10cd7c);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar2,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Startup");
    *(undefined4 *)(param_1 + 0xa1) = 0xe;
    enter_state_snk_startup_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- handle_state_snk_discovery.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010cd7c ---- */

void handle_state_snk_discovery_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 0) {
    if (((char)param_1[199] == '\0') || (*(char *)((long)param_1 + 0x50d) != '\0')) {
      iVar1 = (int)param_1[0xc6];
    }
    else {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10ce68);
        (*pcVar2)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Wait_for_Capabilities");
      *(undefined4 *)(param_1 + 0xa1) = 0x10;
      enter_state_snk_wait_for_capabilities_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
      iVar1 = (int)param_1[0xc6];
    }
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_1 + 0x644) = 0xffffffff;
      pm_stay_awake(param_1);
      *(undefined1 *)(param_1 + 0x9f) = 1;
      queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa1) = 0x10;
    handle_state_snk_wait_for_capabilities_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- enter_state_snk_wait_for_capabilities.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ce68 ---- */

void enter_state_snk_wait_for_capabilities_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = _raw_spin_lock_irqsave(param_1 + 0xa5);
  if (param_1 + 0xa3 == (long *)param_1[0xa3]) {
    pm_stay_awake(param_1);
    uVar1 = usbpd_ipc_log;
    lVar3 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar3,"kick_sm",500);
    hrtimer_start_range_ns(param_1 + 0x96,500000000,0,1);
  }
  _raw_spin_unlock_irqrestore(param_1 + 0xa5,uVar2);
  return;
}



/* ---- handle_state_snk_wait_for_capabilities.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010cf20 ---- */

void handle_state_snk_wait_for_capabilities_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  iVar3 = iio_write_channel_raw(param_1[0xbf],0);
  if (iVar3 < 0) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                   "usbpd_set_psy_iio_property",8);
    _dev_err(param_1,"failed to set IIO property: %d\n",8);
  }
  if ((((param_2 == (ushort *)0x0) || (uVar1 = *param_2, (short)uVar1 < 0)) ||
      ((uVar1 & 0x7000) == 0)) || ((uVar1 & 0x1f) != 1)) {
    if (*(int *)((long)param_1 + 0x774) < 3) {
      if (*(char *)((long)param_1 + 0x50d) == '\0') {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010d298;
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Hard_Reset");
        *(undefined4 *)(param_1 + 0xa1) = 0x15;
        enter_state_hard_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
      }
    }
    else {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Sink hard reset count exceeded, disabling PD\n",lVar4,
                     "handle_state_snk_wait_for_capabilities");
      iVar3 = iio_write_channel_raw(param_1[0xbd],0);
      if (iVar3 < 0) {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                       "usbpd_set_psy_iio_property",6);
        _dev_err(param_1,"failed to set IIO property: %d\n",6);
      }
      iVar3 = iio_write_channel_raw(param_1[0xb7],0);
      if (iVar3 < 0) {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                       "usbpd_set_psy_iio_property",0);
        _dev_err(param_1,"failed to set IIO property: %d\n",0);
      }
    }
  }
  else {
    iVar3 = iio_write_channel_raw(param_1[0xbd],0);
    if (iVar3 < 0) {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                     "usbpd_set_psy_iio_property",6);
      _dev_err(param_1,"failed to set IIO property: %d\n",6);
    }
    *(undefined4 *)(param_1 + 0xaa) = 0;
    param_1[0xa9] = 0;
    param_1[0xa8] = 0;
    param_1[0xa7] = 0;
    __n = (size_t)param_2[1];
    if (0x1b < param_2[1]) {
      __n = 0x1c;
    }
    memcpy(param_1 + 0xa7,param_2 + 0xc,__n);
    *(short *)((long)param_1 + 0x554) = *(short *)((long)param_1 + 0x554) + 1;
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010d298:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10d29c);
        (*pcVar2)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Evaluate_Capability");
      *(undefined4 *)((long)param_1 + 0x774) = 0;
      *(undefined4 *)(param_1 + 0xa1) = 0x11;
      iVar3 = pd_eval_src_caps(param_1);
      if (iVar3 < 0) {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid src_caps received. Skipping request\n",lVar4,
                       "enter_state_snk_evaluate_capability");
        _dev_err(param_1,"Invalid src_caps received. Skipping request\n");
      }
      else {
        *(undefined1 *)(param_1 + 0xad) = 1;
        if (*(char *)((long)param_1 + 0x50d) == '\0') {
          lVar4 = param_1[0xe];
          if (lVar4 == 0) {
            lVar4 = *param_1;
          }
          if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010d298;
          ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                         (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Select_Capability");
          *(undefined4 *)(param_1 + 0xa1) = 0x12;
          enter_state_snk_select_capability_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
        }
      }
    }
  }
  return;
}



/* ---- enter_state_snk_evaluate_capability.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010d29c ---- */

void enter_state_snk_evaluate_capability_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined4 *)((long)param_1 + 0x774) = 0;
  iVar2 = pd_eval_src_caps();
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid src_caps received. Skipping request\n",lVar3,
                   "enter_state_snk_evaluate_capability");
    _dev_err(param_1,"Invalid src_caps received. Skipping request\n");
  }
  else {
    *(undefined1 *)(param_1 + 0xad) = 1;
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10d37c);
        (*pcVar1)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Select_Capability");
      *(undefined4 *)(param_1 + 0xa1) = 0x12;
      enter_state_snk_select_capability_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  return;
}



/* ---- enter_state_snk_select_capability.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010d37c ---- */

void enter_state_snk_select_capability_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  log_decoded_request(param_1,(int)param_1[0xab]);
  iVar2 = pd_send_msg(param_1,2,param_1 + 0xab,1,0);
  if (iVar2 == 0) {
    pm_stay_awake(param_1);
    lVar3 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: delay %d ms",lVar3,"kick_sm",0x1a);
    hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
  }
  else {
    lVar3 = param_1[0xe];
    if (*(char *)((long)param_1 + 0x50c) == '\0') {
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: send soft reset\n",lVar3,
                     "enter_state_snk_select_capability");
      _dev_err(param_1,"send soft reset\n");
      if (*(char *)((long)param_1 + 0x50d) == '\0') {
        lVar3 = param_1[0xe];
        if (lVar3 == 0) {
          lVar3 = *param_1;
        }
        if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10d520);
          (*pcVar1)();
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
        *(undefined4 *)(param_1 + 0xa1) = 0x1f;
        enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
      }
    }
    else {
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: soft reset received\n",lVar3,
                     "enter_state_snk_select_capability");
      _dev_err(param_1,"soft reset received\n");
      complete(param_1 + 0xca);
      pm_stay_awake(param_1);
      *(undefined1 *)(param_1 + 0x9f) = 1;
      queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
    }
  }
  return;
}



/* ---- handle_state_snk_select_capability.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010d520 ---- */

void handle_state_snk_select_capability_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar8 = sp_el0;
  local_38 = *(long *)(lVar8 + 0x5e0);
  if (param_2 == (ushort *)0x0) {
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010d964;
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Hard_Reset");
      *(undefined4 *)(param_1 + 0xa1) = 0x15;
      enter_state_hard_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
    goto LAB_0010d824;
  }
  if ((*param_2 & 0x701f) != 3) {
    if ((*param_2 & 0x7017) == 4) {
      if (*(char *)((long)param_1 + 0x569) == '\0') {
        if (*(char *)((long)param_1 + 0x50d) == '\0') {
          lVar8 = param_1[0xe];
          if (lVar8 == 0) {
            lVar8 = *param_1;
          }
          if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010d964;
          ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                         (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],
                         "SNK_Wait_for_Capabilities");
          *(undefined4 *)(param_1 + 0xa1) = 0x10;
          enter_state_snk_wait_for_capabilities_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
        }
      }
      else if (*(char *)((long)param_1 + 0x50d) == '\0') {
        lVar8 = param_1[0xe];
        if (lVar8 == 0) {
          lVar8 = *param_1;
        }
        if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010d964;
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Ready");
        *(undefined4 *)(param_1 + 0xa1) = 0x14;
        enter_state_snk_ready_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
      }
    }
    else {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid response to sink request\n",lVar8,
                     "handle_state_snk_select_capability");
      _dev_err(param_1,"Invalid response to sink request\n");
      usbpd_set_state(param_1,0x1f);
    }
    goto LAB_0010d824;
  }
  uVar9 = (uint)*(byte *)((long)param_1 + 0x557);
  if (6 < uVar9 - 1) {
LAB_0010d964:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x10d968);
    (*pcVar4)();
  }
  bVar5 = *(byte *)((long)param_1 + 0x556) == uVar9;
  bVar1 = 2 < *(uint *)((long)param_1 + (ulong)(uVar9 - 1) * 4 + 0x538) >> 0x1e;
  if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar8 = param_1[0xe];
    if (lVar8 == 0) {
      lVar8 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010d964;
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Transition_Sink");
    *(undefined4 *)(param_1 + 0xa1) = 0x13;
    pm_stay_awake(param_1);
    uVar3 = usbpd_ipc_log;
    lVar8 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar8 == 0) {
      lVar8 = *param_1;
    }
    ipc_log_string(uVar3,"%s: %s: delay %d ms",lVar8,"kick_sm",0x1c2);
    hrtimer_start_range_ns(param_1 + 0x96,450000000,0,1);
  }
  uVar9 = 9;
  if (*(int *)((long)param_1 + 0x55c) <= (int)param_1[0xac]) {
    uVar9 = 10;
  }
  iVar6 = iio_write_channel_raw(param_1[(ulong)uVar9 + 0xb7]);
  if (iVar6 < 0) {
    lVar8 = param_1[0xe];
    if (lVar8 == 0) {
      lVar8 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar8,
                   "usbpd_set_psy_iio_property",uVar9);
    _dev_err(param_1,"failed to set IIO property: %d\n",uVar9);
    if (!bVar5 || !bVar1) goto LAB_0010d668;
LAB_0010d678:
    local_3c = 0;
    iVar6 = iio_read_channel_processed(param_1[0xbe],&local_3c);
    if (iVar6 < 0) {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar8,
                     "usbpd_get_psy_iio_property",7);
      pcVar7 = "failed to get IIO property: %d\n";
      goto LAB_0010d950;
    }
    iVar2 = *(int *)((long)param_1 + 0x564);
    if (iVar2 < local_3c) goto LAB_0010d808;
  }
  else {
    if (bVar5 && bVar1) goto LAB_0010d678;
LAB_0010d668:
    iVar6 = (int)param_1[0xac];
    iVar2 = *(int *)((long)param_1 + 0x55c);
    if (iVar6 == iVar2) goto LAB_0010d678;
    if (iVar6 <= iVar2) {
      iVar6 = iVar2;
    }
    iVar2 = 0;
    if (iVar6 / 1000 != 0) {
      iVar2 = 2500000 / (iVar6 / 1000);
    }
LAB_0010d808:
    iVar6 = iio_write_channel_raw(param_1[0xbe],iVar2 * 1000);
    if (iVar6 < 0) {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar8,
                     "usbpd_set_psy_iio_property",7);
      pcVar7 = "failed to set IIO property: %d\n";
LAB_0010d950:
      _dev_err(param_1,pcVar7,7);
    }
  }
  *(undefined1 *)((long)param_1 + 0x556) = *(undefined1 *)((long)param_1 + 0x557);
LAB_0010d824:
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- enter_state_snk_transition_sink.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010d968 ---- */

void enter_state_snk_transition_sink_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  pm_stay_awake();
  uVar1 = usbpd_ipc_log;
  lVar2 = param_1[0xe];
  *(undefined1 *)(param_1 + 0x9f) = 1;
  if (lVar2 == 0) {
    lVar2 = *param_1;
  }
  ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar2,"kick_sm",0x1c2);
  hrtimer_start_range_ns(param_1 + 0x96,450000000,0,1);
  return;
}



/* ---- handle_state_snk_transition_sink.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010d9e4 ---- */

void handle_state_snk_transition_sink_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == (ushort *)0x0) || ((*param_2 & 0x701f) != 6)) {
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010dbc0;
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Hard_Reset");
      *(undefined4 *)(param_1 + 0xa1) = 0x15;
      enter_state_hard_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  else {
    uVar5 = 9;
    if ((int)param_1[0xac] < *(int *)((long)param_1 + 0x55c)) {
      uVar5 = 10;
    }
    iVar3 = iio_write_channel_raw(param_1[(ulong)uVar5 + 0xb7]);
    if (iVar3 < 0) {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                     "usbpd_set_psy_iio_property",uVar5);
      _dev_err(param_1,"failed to set IIO property: %d\n",uVar5);
    }
    *(int *)((long)param_1 + 0x55c) = (int)param_1[0xac];
    iVar3 = iio_write_channel_raw(param_1[0xbe],*(int *)((long)param_1 + 0x564) * 1000);
    if (iVar3 < 0) {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar4,
                     "usbpd_set_psy_iio_property",7);
      _dev_err(param_1,"failed to set IIO property: %d\n",7);
      cVar1 = *(char *)((long)param_1 + 0x50d);
    }
    else {
      cVar1 = *(char *)((long)param_1 + 0x50d);
    }
    if (cVar1 == '\0') {
      lVar4 = param_1[0xe];
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010dbc0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10dbc4);
        (*pcVar2)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Ready");
      *(undefined4 *)(param_1 + 0xa1) = 0x14;
      enter_state_snk_ready_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  return;
}



/* ---- enter_state_snk_ready.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010dbc4 ---- */

void enter_state_snk_ready_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)((long)param_1 + 0x569) = 1;
  if (param_1[0xf2] == 0) {
    if (((int)param_1[200] == 1) && ((int)param_1[0xef] == 0)) {
      lVar2 = param_1[0xe];
      uVar1 = 0xff00a001;
      if (*(int *)((long)param_1 + 0x63c) != 2) {
        uVar1 = 0xff008001;
      }
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,
                     "%s: %s: VDM tx: svid:%04x ver:%d obj_pos:%d cmd:%x cmd_type:%x svdm_hdr:%x\n",
                     lVar2,"usbpd_send_svdm",0xff00,*(int *)((long)param_1 + 0x63c) == 2,0,1,0,uVar1
                    );
      usbpd_send_vdm(param_1,uVar1,0,0);
    }
  }
  else {
    pm_stay_awake(param_1);
    *(undefined1 *)(param_1 + 0x9f) = 1;
    queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
  }
  kobject_uevent(param_1,2);
  complete(param_1 + 0xca);
  typec_set_pwr_opmode(param_1[0xdc],3);
  return;
}



/* ---- handle_state_snk_ready.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010dccc ---- */

void handle_state_snk_ready_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined4 uVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == (ushort *)0x0) goto LAB_0010e1b0;
  uVar2 = *param_2;
  if ((uVar2 & 0x7000) == 0) {
    switch(uVar2 & 0x1f) {
    case 3:
    case 4:
    case 0xc:
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Unexpected message\n",lVar8,"handle_ctrl_snk_ready");
      _dev_warn(param_1,"Unexpected message\n");
      cVar1 = *(char *)((long)param_1 + 0x50d);
joined_r0x0010e500:
      if (cVar1 != '\0') {
        return;
      }
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      if (*(uint *)(param_1 + 0xa1) < 0x21) {
        puVar9 = (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)];
        goto LAB_0010e3dc;
      }
      goto LAB_0010e6f8;
    default:
      goto code_r0x0010dd00;
    case 7:
      plVar7 = (long *)&default_src_caps;
      uVar5 = 1;
      lVar8 = 1;
      goto LAB_0010dfcc;
    case 8:
      plVar7 = param_1 + 0xae;
      lVar8 = (long)*(int *)((long)param_1 + 0x58c);
      uVar5 = 4;
LAB_0010dfcc:
      iVar4 = pd_send_msg(param_1,uVar5,plVar7,lVar8,0);
      if (iVar4 == 0) {
        return;
      }
      break;
    case 9:
      if ((int)param_1[0xef] == 4) {
        if (*(char *)((long)param_1 + 0x50d) != '\0') {
          return;
        }
        lVar8 = param_1[0xe];
        if (lVar8 == 0) {
          lVar8 = *param_1;
        }
        if (*(uint *)(param_1 + 0xa1) < 0x21) {
          ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                         (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Hard_Reset");
          *(undefined4 *)(param_1 + 0xa1) = 0x15;
          enter_state_hard_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
          return;
        }
        goto LAB_0010e6f8;
      }
      iVar4 = pd_send_msg(param_1,3,0,0,0);
      if (iVar4 == 0) {
        dr_swap(param_1);
        return;
      }
      break;
    case 10:
      iVar4 = pd_send_msg(param_1,3,0,0,0);
      if (iVar4 == 0) {
        if (*(char *)((long)param_1 + 0x50d) != '\0') {
          return;
        }
        lVar8 = param_1[0xe];
        if (lVar8 == 0) {
          lVar8 = *param_1;
        }
        if (*(uint *)(param_1 + 0xa1) < 0x21) {
          ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                         (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],
                         "PRS_SNK_SRC_Transition_to_off");
          *(undefined4 *)(param_1 + 0xa1) = 0x1a;
          enter_state_prs_snk_src_transition_to_off_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
          return;
        }
        goto LAB_0010e6f8;
      }
      if (*(char *)((long)param_1 + 0x50d) != '\0') {
        return;
      }
      goto LAB_0010e3b0;
    case 0xb:
      if ((*(char *)((long)param_1 + 0x8c4) == '\0') && (5000000 < (int)param_1[0xac])) {
        iVar4 = pd_send_msg(param_1,4,0,0,0);
        if (iVar4 == 0) {
          return;
        }
        goto LAB_0010e4a4;
      }
      iVar4 = pd_send_msg(param_1,3,0,0,0);
      if (iVar4 == 0) {
        vconn_swap(param_1);
        return;
      }
      break;
    case 0x11:
      handle_get_src_cap_extended(param_1);
      return;
    }
    goto LAB_0010e3a8;
  }
code_r0x0010dd00:
  iVar4 = (uVar2 & 0x1f) - 1;
  if (-1 < (short)uVar2) {
    switch(iVar4) {
    case 0:
      *(undefined4 *)(param_1 + 0xaa) = 0;
      param_1[0xa9] = 0;
      param_1[0xa8] = 0;
      param_1[0xa7] = 0;
      sVar11 = (size_t)param_2[1];
      if (0x1b < param_2[1]) {
        sVar11 = 0x1c;
      }
      memcpy(param_1 + 0xa7,param_2 + 0xc,sVar11);
      *(short *)((long)param_1 + 0x554) = *(short *)((long)param_1 + 0x554) + 1;
      if (*(char *)((long)param_1 + 0x50d) != '\0') {
        return;
      }
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      if (*(uint *)(param_1 + 0xa1) < 0x21) {
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Evaluate_Capability");
        *(undefined4 *)(param_1 + 0xa1) = 0x11;
        enter_state_snk_evaluate_capability_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
        return;
      }
      goto LAB_0010e6f8;
    case 4:
      if (param_2[1] == 4) {
        *(undefined4 *)(param_1 + 0x11f) = *(undefined4 *)(param_2 + 0xc);
        complete(param_1 + 0xca);
        return;
      }
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid bat sts dobj\n",lVar8,"handle_data_snk_ready");
      pcVar6 = "Invalid bat sts dobj\n";
LAB_0010e56c:
      _dev_err(param_1,pcVar6);
      return;
    case 5:
      if (param_2[1] != 4) {
        lVar8 = param_1[0xe];
        if (lVar8 == 0) {
          lVar8 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid ado\n",lVar8,"handle_data_snk_ready");
        pcVar6 = "Invalid ado\n";
        goto LAB_0010e56c;
      }
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Received Alert 0x%08x\n",lVar8,"handle_data_snk_ready",
                     *(undefined4 *)(param_2 + 0xc));
      *(undefined1 *)((long)param_1 + 0x8e4) = 1;
      pm_stay_awake(param_1);
      lVar8 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: delay %d ms",lVar8,"kick_sm",0x96);
      uVar10 = 150000000;
      goto LAB_0010e334;
    case 0xe:
      handle_vdm_rx(param_1,param_2);
      return;
    }
code_r0x0010de60:
    if ((uVar2 & 0x701f) != 0x10) {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Unsupported message\n",lVar8,"handle_state_snk_ready");
      uVar10 = 0x10;
      if (*(int *)((long)param_1 + 0x63c) != 2) {
        uVar10 = 4;
      }
      iVar4 = pd_send_msg(param_1,uVar10,0,0,0);
      if (iVar4 == 0) {
        return;
      }
      cVar1 = *(char *)((long)param_1 + 0x50d);
      goto joined_r0x0010e500;
    }
    goto LAB_0010e1b0;
  }
  switch(iVar4) {
  case 0:
    if (param_2[1] == 0x18) {
      uVar5 = *(undefined8 *)(param_2 + 0x14);
      uVar12 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)((long)param_1 + 0x8ce) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)((long)param_1 + 0x8d6) = uVar5;
      *(undefined8 *)((long)param_1 + 0x8c6) = uVar12;
      goto LAB_0010e1ac;
    }
    lVar8 = param_1[0xe];
    if (lVar8 == 0) {
      lVar8 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid src cap ext db\n",lVar8,"handle_ext_snk_ready");
    pcVar6 = "Invalid src cap ext db\n";
LAB_0010e66c:
    _dev_err(param_1,pcVar6);
    break;
  case 1:
    if (6 < param_2[1]) {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid status db length:%d\n",lVar8,
                     "handle_ext_snk_ready");
      _dev_err(param_1,"Invalid status db length:%d\n",param_2[1]);
    }
    *(undefined2 *)((long)param_1 + 0x8e9) = 0;
    *(undefined4 *)((long)param_1 + 0x8e5) = 0;
    sVar11 = (size_t)param_2[1];
    if (5 < param_2[1]) {
      sVar11 = 6;
    }
    memcpy((undefined4 *)((long)param_1 + 0x8e5),param_2 + 0xc,sVar11);
    kobject_uevent(param_1,2);
    goto LAB_0010e1ac;
  case 2:
    handle_get_battery_cap(param_1,param_2);
    break;
  case 3:
    handle_get_battery_status(param_1,param_2);
    break;
  case 4:
    if (param_2[1] != 9) {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid battery cap db\n",lVar8,"handle_ext_snk_ready");
      pcVar6 = "Invalid battery cap db\n";
      goto LAB_0010e66c;
    }
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    *(char *)((long)param_1 + 0x8f5) = (char)param_2[0x10];
    *(undefined8 *)((long)param_1 + 0x8ed) = uVar5;
    goto LAB_0010e1ac;
  default:
    goto code_r0x0010de60;
  case 0xb:
    if (param_2[1] != 4) {
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid pps status db\n",lVar8,"handle_ext_snk_ready");
      pcVar6 = "Invalid pps status db\n";
      goto LAB_0010e66c;
    }
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0xc);
LAB_0010e1ac:
    complete(param_1 + 0xca);
  }
LAB_0010e1b0:
  if ((*(int *)((long)param_1 + 0x63c) == 2) && ((int)param_1[0xc6] != 8)) {
    return;
  }
  if (*(char *)((long)param_1 + 0x8c5) == '\0') {
    if (*(char *)((long)param_1 + 0x8de) != '\0') {
      *(undefined1 *)((long)param_1 + 0x8de) = 0;
      uVar5 = 0x14;
      goto LAB_0010e1f4;
    }
    if (*(char *)((long)param_1 + 0x8e4) == '\0') {
      if (*(char *)((long)param_1 + 0x8eb) == '\0') {
        if (*(char *)((long)param_1 + 0x8f7) == '\0') {
          if (*(char *)((long)param_1 + 0x64a) != '\0') {
            *(undefined1 *)((long)param_1 + 0x64a) = 0;
            usbpd_set_state(param_1,0x12);
            return;
          }
          if ((char)param_1[0xea] == '\0') {
            if (*(char *)((long)param_1 + 0x751) == '\0') {
              handle_vdm_tx(param_1,0);
              return;
            }
            *(undefined1 *)((long)param_1 + 0x751) = 0;
            iVar4 = pd_send_msg(param_1,9,0,0,0);
            if (iVar4 != 0) goto LAB_0010e4a4;
            uVar10 = 0x18;
          }
          else {
            *(undefined1 *)(param_1 + 0xea) = 0;
            iVar4 = pd_send_msg(param_1,10,0,0,0);
            if (iVar4 != 0) {
LAB_0010e4a4:
              usbpd_set_state(param_1,0x1f);
              return;
            }
            uVar10 = 0x19;
          }
          *(undefined4 *)(param_1 + 0xa1) = uVar10;
        }
        else {
          *(undefined1 *)((long)param_1 + 0x8f7) = 0;
          iVar4 = pd_send_ext_msg(param_1,4,(long)param_1 + 0x8f6,1);
          if (iVar4 != 0) goto LAB_0010e4a4;
        }
LAB_0010e6d8:
        kick_sm(param_1,0x1a);
        return;
      }
      *(undefined1 *)((long)param_1 + 0x8eb) = 0;
      iVar4 = pd_send_ext_msg(param_1,3,(long)param_1 + 0x8ec,1);
      if (iVar4 == 0) goto LAB_0010e6d8;
LAB_0010e3a8:
      if (*(char *)((long)param_1 + 0x50d) != '\0') {
        return;
      }
LAB_0010e3b0:
      lVar8 = param_1[0xe];
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      if (*(uint *)(param_1 + 0xa1) < 0x21) {
        puVar9 = (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)];
LAB_0010e3dc:
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",puVar9,
                       "Send_Soft_Reset");
        *(undefined4 *)(param_1 + 0xa1) = 0x1f;
        enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
        return;
      }
      goto LAB_0010e6f8;
    }
    *(undefined1 *)((long)param_1 + 0x8e4) = 0;
    iVar4 = pd_send_msg(param_1,0x12,0,0,0);
    if (iVar4 != 0) goto LAB_0010e3a8;
LAB_0010e2ec:
    pm_stay_awake(param_1);
    uVar5 = usbpd_ipc_log;
    lVar8 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
  }
  else {
    uVar5 = 0x11;
    *(undefined1 *)((long)param_1 + 0x8c5) = 0;
LAB_0010e1f4:
    iVar4 = pd_send_msg(param_1,uVar5,0,0,0);
    if (iVar4 == 0) goto LAB_0010e2ec;
    if (*(char *)((long)param_1 + 0x50d) != '\0') {
      return;
    }
    lVar8 = param_1[0xe];
    if (lVar8 == 0) {
      lVar8 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010e6f8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x10e6fc);
      (*pcVar3)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar8,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
    *(undefined2 *)((long)param_1 + 0x76a) = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0x1f;
    *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
    *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
    *(undefined1 *)((long)param_1 + 0x76c) = 0;
    *(undefined1 *)((long)param_1 + 0x64a) = 0;
    *(undefined1 *)((long)param_1 + 0x8e4) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    iVar4 = pd_send_msg(param_1,0xd,0,0,0);
    if (iVar4 != 0) {
      uVar10 = 10;
      if (*(int *)((long)param_1 + 0x644) != 1) {
        uVar10 = 0x15;
      }
      usbpd_set_state(param_1,uVar10);
      return;
    }
    pm_stay_awake(param_1);
    uVar5 = usbpd_ipc_log;
    lVar8 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
  }
  if (lVar8 == 0) {
    lVar8 = *param_1;
  }
  ipc_log_string(uVar5,"%s: %s: delay %d ms",lVar8,"kick_sm",0x1a);
  uVar10 = 26000000;
LAB_0010e334:
  hrtimer_start_range_ns(param_1 + 0x96,uVar10,0,1);
  return;
}



/* ---- enter_state_snk_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010e6fc ---- */

void enter_state_snk_transition_to_default_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x18;
  code *pcVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((int)param_1[200] != 0) {
    extcon_set_state_sync(param_1[0xa0],2,0);
    start_usb_peripheral(param_1);
    *(undefined4 *)(param_1 + 200) = 0;
    pcVar3 = *(code **)(param_1[0x120] + 0x18);
    __cfi_slowpath_diag(0x4149c9976e4409c4,pcVar3,&DAT_00100980);
    (*pcVar3)((int)param_1[200],*(undefined4 *)((long)param_1 + 0x644));
  }
  if (*(char *)((long)param_1 + 0x769) != '\0') {
    regulator_disable(param_1[0xec]);
    *(undefined1 *)((long)param_1 + 0x769) = 0;
  }
  pm_stay_awake(param_1);
  uVar1 = usbpd_ipc_log;
  lVar2 = param_1[0xe];
  *(undefined1 *)(param_1 + 0x9f) = 1;
  if (lVar2 == 0) {
    lVar2 = *param_1;
  }
  ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar2,"kick_sm",0x2ad);
  hrtimer_start_range_ns(param_1 + 0x96,685000000,0,1);
  return;
}



/* ---- handle_state_snk_transition_to_default.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010e7e8 ---- */

void handle_state_snk_transition_to_default_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10e878);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar2,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Startup");
    *(undefined4 *)(param_1 + 0xa1) = 0xe;
    enter_state_snk_startup_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- handle_state_drs_send_dr_swap.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010e878 ---- */

void handle_state_drs_send_dr_swap_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,ushort *param_2)

{
  undefined4 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 != (ushort *)0x0) && ((*param_2 & 0x701f) == 3)) {
    dr_swap(param_1);
  }
  uVar1 = 9;
  if (*(int *)(param_1 + 0x644) != 1) {
    uVar1 = 0x14;
  }
  usbpd_set_state(param_1,uVar1);
  return;
}



/* ---- handle_state_prs_snk_src_send_swap.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010e8e0 ---- */

void handle_state_prs_snk_src_send_swap_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == (ushort *)0x0) || ((*param_2 & 0x701f) != 3)) {
    *(undefined4 *)(param_1 + 0xa1) = 0x14;
  }
  else if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10e994);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar2,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"PRS_SNK_SRC_Transition_to_off"
                  );
    *(undefined4 *)(param_1 + 0xa1) = 0x1a;
    enter_state_prs_snk_src_transition_to_off_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- enter_state_prs_snk_src_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010e994 ---- */

void enter_state_prs_snk_src_transition_to_off_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  code *pcVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0xc9) = 1;
  iVar1 = iio_write_channel_raw(param_1[0xbf],1);
  if (iVar1 < 0) {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar2,
                   "usbpd_set_psy_iio_property",8);
    _dev_err(param_1,"failed to set IIO property: %d\n",8);
  }
  iVar1 = 3;
  if (*(int *)((long)param_1 + 0x644) != 1) {
    iVar1 = (uint)(*(int *)((long)param_1 + 0x644) == 0) << 1;
  }
  iVar1 = iio_write_channel_raw(param_1[0xba],iVar1);
  if (iVar1 < 0) {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar2,
                   "usbpd_set_psy_iio_property",3);
    _dev_err(param_1,"failed to set IIO property: %d\n",3);
  }
  *(undefined4 *)((long)param_1 + 0x564) = 0;
  iVar1 = iio_write_channel_raw(param_1[0xbe],0);
  if (iVar1 < 0) {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar2,
                   "usbpd_set_psy_iio_property",7);
    _dev_err(param_1,"failed to set IIO property: %d\n",7);
  }
  *(undefined1 *)((long)param_1 + 0x569) = 0;
  pcVar3 = *(code **)(param_1[0x120] + 0x18);
  __cfi_slowpath_diag(0x4149c9976e4409c4,pcVar3,&DAT_001009a0);
  (*pcVar3)((int)param_1[200],1);
  pm_stay_awake(param_1);
  lVar2 = param_1[0xe];
  *(undefined1 *)(param_1 + 0x9f) = 1;
  if (lVar2 == 0) {
    lVar2 = *param_1;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: delay %d ms",lVar2,"kick_sm",0x2ee);
  hrtimer_start_range_ns(param_1 + 0x96,750000000,0,1);
  return;
}



/* ---- handle_state_prs_snk_src_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010eb68 ---- */

void handle_state_prs_snk_src_transition_to_off_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == (ushort *)0x0) || ((*param_2 & 0x701f) != 6)) {
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10ec80);
        (*pcVar1)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"ERROR_RECOVERY");
      *(undefined4 *)(param_1 + 0xa1) = 1;
      enter_state_error_recovery_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x644) = 1;
    iVar2 = iio_write_channel_raw(param_1[0xba],3);
    if (iVar2 < 0) {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar3,
                     "usbpd_set_psy_iio_property",3);
      _dev_err(param_1,"failed to set IIO property: %d\n",3);
    }
    *(undefined4 *)(param_1 + 0xa1) = 0x1b;
    handle_state_prs_snk_src_source_on_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- handle_state_prs_snk_src_source_on.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ec80 ---- */

void handle_state_prs_snk_src_source_on_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  enable_vbus();
  iVar2 = pd_send_msg(param_1,6,0,0,0);
  if (iVar2 == 0) {
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010ed8c;
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SRC_Startup");
      *(undefined4 *)(param_1 + 0xa1) = 3;
      enter_state_src_startup_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  else if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010ed8c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10ed90);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"ERROR_RECOVERY");
    *(undefined4 *)(param_1 + 0xa1) = 1;
    enter_state_error_recovery_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- handle_state_prs_src_snk_send_swap.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ed90 ---- */

void handle_state_prs_src_snk_send_swap_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == (ushort *)0x0) || ((*param_2 & 0x701f) != 3)) {
    *(undefined4 *)(param_1 + 0xa1) = 9;
  }
  else if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10ee44);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar2,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"PRS_SRC_SNK_Transition_to_off"
                  );
    *(undefined4 *)(param_1 + 0xa1) = 0x1d;
    enter_state_prs_src_snk_transition_to_off_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- enter_state_prs_src_snk_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ee44 ---- */

void enter_state_prs_src_snk_transition_to_off_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)(param_1 + 0xc9) = 1;
  iVar2 = iio_write_channel_raw(param_1[0xbf],1);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar3,
                   "usbpd_set_psy_iio_property",8);
    _dev_err(param_1,"failed to set IIO property: %d\n",8);
  }
  *(undefined1 *)((long)param_1 + 0x569) = 0;
  iVar2 = 3;
  if (*(int *)((long)param_1 + 0x644) != 1) {
    iVar2 = (uint)(*(int *)((long)param_1 + 0x644) == 0) << 1;
  }
  iVar2 = iio_write_channel_raw(param_1[0xba],iVar2);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar3,
                   "usbpd_set_psy_iio_property",3);
    _dev_err(param_1,"failed to set IIO property: %d\n",3);
  }
  pm_stay_awake(param_1);
  uVar1 = usbpd_ipc_log;
  lVar3 = param_1[0xe];
  *(undefined1 *)(param_1 + 0x9f) = 1;
  if (lVar3 == 0) {
    lVar3 = *param_1;
  }
  ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar3,"kick_sm",0x19);
  hrtimer_start_range_ns(param_1 + 0x96,25000000,0,1);
  return;
}



/* ---- handle_state_prs_src_snk_transition_to_off.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010ef88 ---- */

void handle_state_prs_src_snk_transition_to_off_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  code *pcVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((char)param_1[0xed] != '\0') {
    regulator_disable(param_1[0xeb]);
    *(undefined1 *)(param_1 + 0xed) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x644) = 0;
  iVar2 = iio_write_channel_raw(param_1[0xba],2);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar3,
                   "usbpd_set_psy_iio_property",3);
    _dev_err(param_1,"failed to set IIO property: %d\n",3);
  }
  pcVar4 = *(code **)(param_1[0x120] + 0x18);
  __cfi_slowpath_diag(0x4149c9976e4409c4,pcVar4,&DAT_001009c0);
  (*pcVar4)((int)param_1[200],*(undefined4 *)((long)param_1 + 0x644));
  msleep(500);
  iVar2 = pd_send_msg(param_1,6,0,0,0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xa1) = 0x1e;
    pm_stay_awake(param_1);
    uVar1 = usbpd_ipc_log;
    lVar3 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar3,"kick_sm",400);
    hrtimer_start_range_ns(param_1 + 0x96,400000000,0,1);
  }
  else if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x10f13c);
      (*pcVar4)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"ERROR_RECOVERY");
    *(undefined4 *)(param_1 + 0xa1) = 1;
    enter_state_error_recovery_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- handle_state_prs_src_snk_wait_source_on.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010f13c ---- */

void handle_state_prs_src_snk_wait_source_on_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,ushort *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == (ushort *)0x0) || ((*param_2 & 0x701f) != 6)) {
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar2 = param_1[0xe];
      if (lVar2 == 0) {
        lVar2 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) goto LAB_0010f244;
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar2,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"ERROR_RECOVERY");
      *(undefined4 *)(param_1 + 0xa1) = 1;
      enter_state_error_recovery_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
  }
  else if (*(char *)((long)param_1 + 0x50d) == '\0') {
    lVar2 = param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
LAB_0010f244:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x10f248);
      (*pcVar1)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar2,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Startup");
    *(undefined4 *)(param_1 + 0xa1) = 0xe;
    enter_state_snk_startup_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
  }
  return;
}



/* ---- enter_state_send_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010f248 ---- */

void enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined2 *)((long)param_1 + 0x76a) = 0;
  *(undefined1 *)((long)param_1 + 0x76c) = 0;
  *(undefined1 *)((long)param_1 + 0x64a) = 0;
  *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
  *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x8e4) = 0;
  *(undefined2 *)(param_1 + 0xea) = 0;
  iVar2 = pd_send_msg(param_1,0xd,0,0,0);
  if (iVar2 == 0) {
    pm_stay_awake(param_1);
    uVar1 = usbpd_ipc_log;
    lVar3 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar3,"kick_sm",0x1a);
    hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
  }
  else {
    uVar4 = 10;
    if (*(int *)((long)param_1 + 0x644) != 1) {
      uVar4 = 0x15;
    }
    usbpd_set_state(param_1,uVar4);
  }
  return;
}



/* ---- handle_state_send_soft_reset.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010f328 ---- */

void handle_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1,ushort *param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 != (ushort *)0x0) && ((*param_2 & 0x701f) == 3)) {
    iVar1 = *(int *)((long)param_1 + 0x644);
    uVar5 = 5;
    uVar4 = 0x10;
LAB_0010f368:
    if (iVar1 != 1) {
      uVar5 = uVar4;
    }
    usbpd_set_state(param_1,uVar5);
    return;
  }
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
    lVar3 = *param_1;
  }
  if (*(uint *)(param_1 + 0xa1) < 0x21) {
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s: Did not see Accept, do Hard Reset\n",lVar3,
                   "handle_state_send_soft_reset",(&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)])
    ;
    if (*(uint *)(param_1 + 0xa1) < 0x21) {
      _dev_err(param_1,"%s: Did not see Accept, do Hard Reset\n",
               (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)]);
      iVar1 = *(int *)((long)param_1 + 0x644);
      uVar5 = 10;
      uVar4 = 0x15;
      goto LAB_0010f368;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10f400);
  (*pcVar2)();
}



/* ---- handle_state_vcs_wait_for_vconn.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010f400 ---- */

void handle_state_vcs_wait_for_vconn_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,ushort *param_2)

{
  undefined4 uVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((param_2 == (ushort *)0x0) || ((*param_2 & 0x701f) != 6)) {
    uVar1 = 10;
    if (*(int *)(param_1 + 0x644) != 1) {
      uVar1 = 0x15;
    }
    usbpd_set_state(param_1,uVar1);
  }
  else {
    if (*(char *)(param_1 + 0x769) != '\0') {
      regulator_disable(*(undefined8 *)(param_1 + 0x760));
    }
    *(undefined1 *)(param_1 + 0x769) = 0;
    uVar1 = 9;
    if (*(int *)(param_1 + 0x644) != 1) {
      uVar1 = 0x14;
    }
    *(undefined4 *)(param_1 + 0x508) = uVar1;
  }
  return;
}



/* ---- phy_sig_received.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010f490 ---- */

void phy_sig_received_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2 == 0) {
    *(undefined1 *)((long)param_1 + 0x50d) = 1;
    lVar3 = ktime_get();
    uVar1 = usbpd_ipc_log;
    lVar4 = param_1[0xe];
    param_1[0xa2] = lVar3;
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    ipc_log_string(uVar1,"%s: %s: hard reset received\n",lVar4,"phy_sig_received");
    _dev_err(param_1,"hard reset received\n");
    iVar2 = iio_write_channel_raw(param_1[0xbd],1);
    if (iVar2 < 0) {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar3,
                     "usbpd_set_psy_iio_property",6);
      _dev_err(param_1,"failed to set IIO property: %d\n",6);
    }
    pm_stay_awake(param_1);
    *(undefined1 *)(param_1 + 0x9f) = 1;
    queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
  }
  else {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: invalid signal (%d) received\n",lVar3,"phy_sig_received",
                   param_2);
    _dev_err(param_1,"invalid signal (%d) received\n",param_2);
  }
  return;
}



/* ---- phy_msg_received.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010f5cc ---- */

void phy_msg_received_e7ce0f5c9173271e56101f64bf7b44f7
               (long *param_1,uint param_2,ushort *param_3,ulong param_4)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 *in_x18;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ushort uVar18;
  ulong uVar19;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  *(undefined1 *)((long)param_1 + 0x50c) = 0;
  if (param_2 == 2) {
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
      lVar10 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: only SOP/SOP\' supported\n",lVar10,"phy_msg_received");
    pcVar9 = "only SOP/SOP\' supported\n";
    goto LAB_0010f748;
  }
  if (param_4 < 2) {
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
      lVar10 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: invalid message received, len=%zd\n",lVar10,
                   "phy_msg_received",param_4);
    _dev_err(param_1,"invalid message received, len=%zd\n",param_4);
    return;
  }
  uVar19 = param_4 - 2;
  if ((uVar19 & 3) != 0) {
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
      lVar10 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: len=%zd not multiple of 4\n",lVar10,"phy_msg_received",
                   uVar19);
    _dev_err(param_1,"len=%zd not multiple of 4\n",uVar19);
    return;
  }
  if (2 < param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x10fca4);
    (*pcVar4)();
  }
  uVar2 = *param_3;
  uVar18 = uVar2 >> 9 & 7;
  uVar15 = (ulong)uVar2 & 0x1f;
  uVar14 = (uint)uVar15;
  if ((uVar18 == *(byte *)((long)param_1 + (ulong)param_2 + 0x76d)) && (uVar14 != 0xd)) {
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
      lVar10 = *param_1;
    }
    pcVar9 = "%s: %s: MessageID already seen, discarding\n";
    goto LAB_0010f670;
  }
  *(char *)((long)param_1 + (ulong)param_2 + 0x76d) = (char)uVar18;
  if ((uVar19 == 0) && (uVar14 == 5)) {
    return;
  }
  uVar17 = (ulong)(uVar2 >> 0xc) & 7;
  iVar5 = (int)uVar17;
  if (uVar17 != uVar19 >> 2) {
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
      lVar10 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: header count (%d) mismatch, len=%zd\n",lVar10,
                   "phy_msg_received",uVar17,uVar19);
    _dev_err(param_1,"header count (%d) mismatch, len=%zd\n",uVar17,uVar19);
    return;
  }
  uVar3 = uVar2 >> 6 & 3;
  if (uVar3 < *(uint *)((long)param_1 + 0x63c)) {
    *(uint *)((long)param_1 + 0x63c) = uVar3;
  }
  lVar10 = param_1[0xe];
  if (lVar10 == 0) {
    lVar10 = *param_1;
    if (-1 < (short)uVar2) goto LAB_0010f6cc;
LAB_0010f6f8:
    if (uVar14 < 0xe) {
      uVar13 = 0x70;
      ppuVar12 = &usbpd_ext_msg_strings;
      goto LAB_0010f7f8;
    }
LAB_0010f808:
    pcVar9 = "Invalid";
  }
  else {
    if ((short)uVar2 < 0) goto LAB_0010f6f8;
LAB_0010f6cc:
    if (iVar5 != 0) {
      if (uVar14 < 0x10) {
        ppuVar12 = &usbpd_data_msg_strings;
        uVar13 = 0x80;
        goto LAB_0010f7f8;
      }
      goto LAB_0010f808;
    }
    if (0x15 < uVar14) goto LAB_0010f808;
    ppuVar12 = &usbpd_control_msg_strings;
    uVar13 = 0xb0;
LAB_0010f7f8:
    if (uVar13 <= uVar15 * 8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10fca8);
      (*pcVar4)();
    }
    pcVar9 = ppuVar12[uVar15];
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: %s type(%d) num_objs(%d)\n",lVar10,"phy_msg_received",pcVar9
                 ,uVar15,uVar17);
  if ((((short)uVar2 < 0) || (iVar5 != 0)) || (uVar14 != 0xd)) {
    if ((uVar14 == 6) && (iVar5 != 0)) {
      lVar10 = param_1[0xe];
      if (lVar10 == 0) {
        lVar10 = *param_1;
      }
      pcVar9 = "%s: %s: ignore MSG_ALERT\n";
      goto LAB_0010f670;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x50c) = 1;
  }
  if ((short)uVar2 < 0) {
    uVar18 = param_3[1];
    if (-1 < (short)uVar18) {
      lVar10 = param_1[0xe];
      if (lVar10 == 0) {
        lVar10 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: unchunked extended messages unsupported\n",lVar10,
                     "pd_ext_msg_received");
      pcVar9 = "unchunked extended messages unsupported\n";
LAB_0010f748:
      _dev_err(param_1,pcVar9);
      return;
    }
    if ((uVar18 >> 10 & 1) != 0) {
      if (((uVar18 & 0x1ff) == 0) && ((uVar18 >> 0xb & 0xf) == (ushort)*(byte *)(param_1 + 0xd2))) {
        uVar19 = completion_done(param_1 + 0xce);
        if ((uVar19 & 1) == 0) {
          complete(param_1 + 0xce);
          return;
        }
        return;
      }
      lVar10 = param_1[0xe];
      if (lVar10 == 0) {
        lVar10 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: invalid request chunk ext header 0x%02x\n",lVar10,
                     "pd_ext_msg_received",uVar18);
      _dev_err(param_1,"invalid request chunk ext header 0x%02x\n",uVar18);
      return;
    }
    uVar3 = uVar18 >> 0xb & 0xf;
    if ((uVar18 >> 0xb & 0xf) == 0) {
      uVar18 = uVar18 & 0x1ff;
      puVar6 = (ushort *)__kmalloc(uVar18 + 0x18,0xb20);
      if (puVar6 == (ushort *)0x0) {
        return;
      }
      *puVar6 = uVar2;
      puVar6[1] = uVar18;
      if (0x104 < uVar18) {
        lVar10 = param_1[0xe];
        if (lVar10 == 0) {
          lVar10 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Extended message length exceeds max, truncating...\n",
                       lVar10,"pd_ext_msg_received");
        _dev_warn(param_1,"Extended message length exceeds max, truncating...\n");
        puVar6[1] = 0x104;
      }
    }
    else {
      puVar6 = (ushort *)param_1[0xa6];
      if (puVar6 == (ushort *)0x0) {
        lVar10 = param_1[0xe];
        if (lVar10 == 0) {
          lVar10 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: missing first rx_ext_msg chunk\n",lVar10,
                       "pd_ext_msg_received");
        pcVar9 = "missing first rx_ext_msg chunk\n";
        goto LAB_0010f748;
      }
    }
    param_4 = param_4 - 4;
    uVar11 = (uint)puVar6[1] + uVar3 * -0x1a;
    if (0x19 < (int)uVar11) {
      uVar11 = 0x1a;
    }
    uVar19 = (ulong)(uVar11 & 0xffff);
    if (param_4 < uVar19) {
      lVar10 = param_1[0xe];
      if (lVar10 == 0) {
        lVar10 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: not enough bytes in chunk, expected:%u received:%lu\n",
                     lVar10,"pd_ext_msg_received",uVar19,param_4);
      _dev_warn(param_1,"not enough bytes in chunk, expected:%u received:%lu\n",uVar19,param_4);
    }
    else {
      param_4 = (ulong)uVar11;
    }
    memcpy((void *)((long)puVar6 + (ulong)(uVar3 * 0x1a) + 0x18),param_3 + 2,param_4 & 0xffff);
    if (0x1a < (int)((uint)puVar6[1] + uVar3 * -0x1a)) {
      if (((ushort *)param_1[0xa6] != (ushort *)0x0) && ((ushort *)param_1[0xa6] != puVar6)) {
        lVar10 = param_1[0xe];
        if (lVar10 == 0) {
          lVar10 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: stale previous rx_ext_msg?\n",lVar10,
                       "pd_ext_msg_received");
        kfree(param_1[0xa6]);
      }
      param_1[0xa6] = (long)puVar6;
      lVar10 = 0x38;
      if (android_kmalloc_64_create != '\0') {
        lVar10 = 0x30;
      }
      puVar8 = (undefined8 *)
               kmem_cache_alloc_trace(*(undefined8 *)(&kmalloc_caches + lVar10),0xb20,0x40);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0xfffffffe0;
        puVar8[1] = puVar8 + 1;
        puVar8[2] = puVar8 + 1;
        puVar8[3] = pd_request_chunk_work_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt;
        lVar10 = param_1[0x72];
        puVar8[6] = param_1;
        *(byte *)(puVar8 + 7) = (byte)uVar2 & 0x1f;
        *(char *)((long)puVar8 + 0x39) = (char)uVar3 + '\x01';
        *(uint *)((long)puVar8 + 0x3c) = param_2;
        queue_work_on(0x20,lVar10,puVar8);
        return;
      }
    }
    param_1[0xa6] = 0;
    if (puVar6 == (ushort *)0x0) {
      return;
    }
  }
  else {
    puVar6 = (ushort *)__kmalloc(param_4 + 0x16,0xb20);
    if (puVar6 == (ushort *)0x0) {
      return;
    }
    *puVar6 = uVar2;
    puVar6[1] = (ushort)uVar19;
    memcpy(puVar6 + 0xc,param_3 + 1,uVar19);
  }
  if (((char)param_1[0xfd] != '\0') && (uVar14 == 0xf)) {
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
      lVar10 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Skip wq and handle VDM directly\n",lVar10,
                   "phy_msg_received");
    handle_vdm_rx(param_1,puVar6);
    kfree(puVar6);
    return;
  }
  uVar7 = _raw_spin_lock_irqsave(param_1 + 0xa5);
  plVar16 = (long *)param_1[0xa4];
  puVar1 = puVar6 + 4;
  uVar19 = __list_add_valid(puVar1,plVar16,param_1 + 0xa3);
  if ((uVar19 & 1) != 0) {
    param_1[0xa4] = (long)puVar1;
    *(long **)(puVar6 + 4) = param_1 + 0xa3;
    *(long **)(puVar6 + 8) = plVar16;
    *plVar16 = (long)puVar1;
  }
  _raw_spin_unlock_irqrestore(param_1 + 0xa5,uVar7);
  iVar5 = work_busy(param_1 + 0x73);
  if (iVar5 == 0) {
    kick_sm(param_1,0);
    return;
  }
  lVar10 = param_1[0xe];
  if (lVar10 == 0) {
    lVar10 = *param_1;
  }
  pcVar9 = "%s: %s: usbpd_sm already running\n";
LAB_0010f670:
  ipc_log_string(usbpd_ipc_log,pcVar9,lVar10,"phy_msg_received");
  return;
}



/* ---- phy_shutdown.e7ce0f5c9173271e56101f64bf7b44f7 @ 0010fca8 ---- */

void phy_shutdown_e7ce0f5c9173271e56101f64bf7b44f7(long *param_1)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _dev_err(param_1,"shutdown");
  if (((char)param_1[0xad] == '\0') || (*(int *)((long)param_1 + 0x644) != 0)) {
    cVar1 = *(char *)((long)param_1 + 0x769);
  }
  else {
    *(undefined1 *)((long)param_1 + 0x804) = 1;
    if (*(char *)((long)param_1 + 0x50d) == '\0') {
      lVar3 = param_1[0xe];
      if (lVar3 == 0) {
        lVar3 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x10fd9c);
        (*pcVar2)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"SNK_Hard_Reset");
      *(undefined4 *)(param_1 + 0xa1) = 0x15;
      enter_state_hard_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    }
    _printk("<3>hardreset when shutdown");
    cVar1 = *(char *)((long)param_1 + 0x769);
  }
  if (cVar1 != '\0') {
    regulator_disable(param_1[0xec]);
    *(undefined1 *)((long)param_1 + 0x769) = 0;
  }
  if ((char)param_1[0xed] != '\0') {
    regulator_disable(param_1[0xeb]);
    *(undefined1 *)(param_1 + 0xed) = 0;
  }
  return;
}



/* ---- start_usb_host @ 0010fd9c ---- */

void start_usb_host(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_2c = 0;
  iVar2 = iio_read_channel_processed(param_1[0xb8],&local_2c);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar3,
                   "usbpd_get_psy_iio_property",1);
    _dev_err(param_1,"failed to get IIO property: %d\n",1);
    bVar1 = false;
  }
  else {
    bVar1 = local_2c == 2;
  }
  extcon_set_property(param_1[0xa0],2,1,bVar1);
  extcon_set_property(param_1[0xa0],2,2,1);
  extcon_set_state_sync(param_1[0xa0],2,1);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- usbpd_startup_common @ 0010fe90 ---- */

undefined4 usbpd_startup_common(long param_1,long param_2)

{
  int iVar1;
  undefined8 *in_x18;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x76a) = 0;
  *(undefined1 *)(param_1 + 0x76f) = 0xff;
  *(undefined1 *)(param_1 + 0x76c) = 0;
  *(undefined2 *)(param_1 + 0x76d) = 0xffff;
  *(undefined1 *)(param_1 + 0x64a) = 0;
  *(undefined1 *)(param_1 + 0x8e4) = 0;
  *(undefined2 *)(param_1 + 0x750) = 0;
  if (*(char *)(param_1 + 0x648) == '\0') {
    *(undefined4 *)(param_1 + 0x63c) = 2;
    if (*(char *)(param_1 + 0x649) != '\0') {
      pcVar3 = *(code **)(*(long *)(param_1 + 0x900) + 0x28);
      if (1 < ((ulong)(pcVar3 + -0x105738) >> 3 | (long)pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar3,&DAT_00100840);
      }
      (*pcVar3)();
      *(undefined1 *)(param_1 + 0x649) = 0;
    }
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x644);
    if (*(char *)(param_1 + 0x769) != '\0') {
      *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 2;
    }
    pcVar3 = (code *)**(undefined8 **)(param_1 + 0x900);
    if (pcVar3 == (code *)0x0) {
      uVar2 = 0xffffffed;
    }
    else {
      __cfi_slowpath_diag(0x7ed6c55c610148b2,pcVar3,&DAT_00100860);
      iVar1 = (*pcVar3)(param_2);
      if (iVar1 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x800,0x10ffb0);
        (*pcVar3)();
      }
      *(undefined1 *)(param_1 + 0x649) = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ---- handle_vdm_tx @ 00110018 ---- */

void handle_vdm_tx(long *param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  plVar1 = param_1 + 0xf4;
  local_48 = *(long *)(lVar4 + 0x5e0);
  mutex_lock(plVar1);
  puVar5 = (uint *)param_1[0xf2];
  if (puVar5 != (uint *)0x0) {
    uVar2 = *puVar5;
    if ((uVar2 & 0x80c0) == 0x8000) {
      if ((*(int *)((long)param_1 + 0x644) == 1) && (*(int *)((long)param_1 + 0x63c) == 2)) {
        local_4c = 0;
        iVar3 = iio_read_channel_processed(param_1[0xbc],&local_4c);
        if (iVar3 < 0) {
          lVar4 = param_1[0xe];
          if (lVar4 == 0) {
            lVar4 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar4,
                         "usbpd_get_psy_iio_property",5);
          _dev_err(param_1,"failed to get IIO property: %d\n",5);
        }
        else if (local_4c == 1) {
          puVar5 = (uint *)param_1[0xf2];
          goto LAB_001100b0;
        }
        start_src_ams(param_1,1);
        goto LAB_00110164;
      }
LAB_001100b0:
      iVar3 = pd_send_msg(param_1,0xf,puVar5,(long)(int)puVar5[7],param_2);
      if (iVar3 != 0) goto LAB_001101a0;
      lVar4 = ktime_get();
      param_1[0xfc] = lVar4;
      if (2 < (uVar2 & 0x1f)) goto LAB_00110158;
      if ((uint *)param_1[0xf3] != (uint *)0x0) {
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Previous Discover VDM command %d not ACKed/NAKed\n",
                       lVar4,"handle_vdm_tx",*(uint *)param_1[0xf3] & 0x1f);
        if ((*(uint *)param_1[0xf3] & 0x1f) == 1) {
          *(undefined4 *)(param_1 + 0xef) = 6;
        }
        kfree();
      }
      param_1[0xf3] = param_1[0xf2];
    }
    else {
      iVar3 = pd_send_msg(param_1,0xf,puVar5,(long)(int)puVar5[7],param_2);
      if (iVar3 != 0) {
LAB_001101a0:
        lVar4 = param_1[0xe];
        if (lVar4 == 0) {
          lVar4 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Error (%d) sending VDM command %d\n",lVar4,
                       "handle_vdm_tx",iVar3,*(uint *)param_1[0xf2] & 0x1f);
        _dev_err(param_1,"Error (%d) sending VDM command %d\n",iVar3,*(uint *)param_1[0xf2] & 0x1f);
        mutex_unlock(plVar1);
        if ((param_2 == 0) && (iVar3 != -0x10)) {
          usbpd_set_state(param_1,0x1f);
        }
        goto LAB_0011016c;
      }
LAB_00110158:
      kfree(param_1[0xf2]);
    }
    param_1[0xf2] = 0;
  }
LAB_00110164:
  mutex_unlock(plVar1);
LAB_0011016c:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- handle_vdm_rx @ 00110274 ---- */

void handle_vdm_rx(long *param_1,ushort *param_2)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined2 *puVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 *in_x18;
  code *pcVar14;
  uint *puVar15;
  uint uVar16;
  undefined2 *puVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (param_2[1] < 4) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(uint *)(param_2 + 0xc);
  }
  uVar4 = uVar16 >> 0x10;
  uVar19 = uVar16 & 0x1f;
  puVar15 = (uint *)(param_2 + 0xe);
  uVar3 = *param_2;
  lVar9 = ktime_get();
  lVar12 = param_1[0xe];
  if (lVar12 == 0) {
    lVar12 = *param_1;
  }
  uVar6 = uVar16 >> 6 & 3;
  pcVar11 = "false";
  if ((char)param_1[0x100] != '\0') {
    pcVar11 = "true";
  }
  ipc_log_string(usbpd_ipc_log,
                 "%s: %s: VDM rx: svid:%04x cmd:%x cmd_type:%x vdm_hdr:%x has_dp: %s\n",lVar12,
                 "handle_vdm_rx",uVar4,uVar19,uVar6,uVar16,pcVar11);
  if ((uVar4 == 0xff01) && ((char)param_1[0x100] == '\0')) {
    *(undefined1 *)(param_1 + 0x100) = 1;
    start_usb_dp(param_1,1);
  }
  uVar5 = (uVar3 >> 0xc & 7) - 1;
  lVar12 = find_svid_handler(param_1,uVar4);
  if ((uVar16 >> 0xf & 1) == 0) {
    if ((lVar12 != 0) && (pcVar14 = *(code **)(lVar12 + 0x20), pcVar14 != (code *)0x0)) {
      if (pcVar14 != usbpd_mi_vdm_received_cb_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt) {
        __cfi_slowpath_diag(0xf44f5b55a6e17fc7,pcVar14,&DAT_001007c0);
      }
      (*pcVar14)(lVar12,uVar16,puVar15,uVar5 & 0xff);
      return;
    }
    if (*(int *)((long)param_1 + 0x63c) != 2) {
      return;
    }
    iVar8 = pd_send_msg(param_1,0x10,0,0,0);
    if (iVar8 == 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0x50d) != '\0') {
      return;
    }
    lVar9 = param_1[0xe];
    if (lVar9 == 0) {
      lVar9 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(0x5512,0x110b80);
      (*pcVar14)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar9,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
    *(undefined4 *)(param_1 + 0xa1) = 0x1f;
    enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(param_1);
    return;
  }
  if (1 < (uVar16 >> 0xd & 3)) {
    lVar13 = param_1[0xe];
    if (lVar13 == 0) {
      lVar13 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Received SVDM with unsupported version:%d\n",lVar13,
                   "handle_vdm_rx");
  }
  if ((uVar6 != 0) && ((int)param_1[0xa1] != 4)) {
    start_src_ams(param_1,0);
  }
  if ((lVar12 != 0) && (pcVar14 = *(code **)(lVar12 + 0x28), pcVar14 != (code *)0x0)) {
    __cfi_slowpath_diag(0xb29218ed1a60f17d,pcVar14,&DAT_001007e0);
    (*pcVar14)(lVar12,uVar19,uVar6,puVar15,uVar5 & 0xff);
    if (param_1[0xf2] == 0) {
      return;
    }
    if ((char)param_1[0x9f] == '\0') {
      pm_stay_awake(param_1);
      *(undefined1 *)(param_1 + 0x9f) = 1;
      queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
      return;
    }
    return;
  }
  switch(uVar6) {
  case 0:
    if (((uVar19 != 6) && (*(int *)((long)param_1 + 0x63c) == 2)) &&
       (iVar8 = pd_send_msg(param_1,0x10,0,0,0), iVar8 != 0)) {
      usbpd_set_state(param_1,0x1f);
    }
    break;
  case 1:
    if (uVar4 != 0xff00) {
      lVar9 = param_1[0xe];
      if (lVar9 == 0) {
        lVar9 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: unhandled ACK for SVID:0x%x\n",lVar9,"handle_vdm_rx",
                     uVar4);
      _dev_err(param_1,"unhandled ACK for SVID:0x%x\n",uVar4);
      return;
    }
    if (26999999 < lVar9 - param_1[0xfc]) {
      lVar9 = param_1[0xe];
      if (lVar9 == 0) {
        lVar9 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Discarding delayed SVDM response due to timeout\n",lVar9
                     ,"handle_vdm_rx");
      return;
    }
    if ((uVar16 & 0x1f) == 2) {
      *(undefined4 *)(param_1 + 0xef) = 2;
      kfree(param_1[0xf3]);
      param_1[0xf3] = 0;
      if (param_1[0xf0] == 0) {
        uVar16 = (uVar5 & 0xff) << 1;
        *(uint *)(param_1 + 0xf1) = uVar16;
        puVar10 = (undefined2 *)__kmalloc(((ulong)uVar5 & 0xff) << 2,0xdc0);
        param_1[0xf0] = (long)puVar10;
        if (puVar10 == (undefined2 *)0x0) {
          return;
        }
      }
      else {
        uVar16 = (uVar5 & 0xff) * 2;
        lVar9 = krealloc(param_1[0xf0],((long)(int)param_1[0xf1] + (ulong)uVar16) * 2,0xcc0);
        if (lVar9 == 0) {
          return;
        }
        param_1[0xf0] = lVar9;
        puVar10 = (undefined2 *)(lVar9 + (long)(int)param_1[0xf1] * 2);
        memset(puVar10,0,(ulong)uVar16);
        *(uint *)(param_1 + 0xf1) = (int)param_1[0xf1] + uVar16;
      }
      if (uVar5 == 0) {
LAB_001108c8:
        if ((int)param_1[0xf1] < 1) {
          return;
        }
        lVar9 = 0;
        do {
          if ((*(short *)(param_1[0xf0] + lVar9 * 2) != 0) &&
             (puVar10 = (undefined2 *)find_svid_handler(param_1), puVar10 != (undefined2 *)0x0)) {
            lVar12 = param_1[0xe];
            if (lVar12 == 0) {
              lVar12 = *param_1;
            }
            ipc_log_string(usbpd_ipc_log,"%s: %s: Notify SVID: 0x%04x discovered\n",lVar12,
                           "handle_vdm_resp_ack",*puVar10);
            pcVar14 = *(code **)(puVar10 + 4);
            if (pcVar14 != usbpd_mi_connect_cb_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt) {
              __cfi_slowpath_diag(0xd57c2617ec7ae42,pcVar14,&DAT_00100820);
            }
            (*pcVar14)(puVar10,*(undefined1 *)((long)param_1 + 0x56a));
            *(undefined1 *)(puVar10 + 0x20) = 1;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)param_1[0xf1]);
        return;
      }
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      uVar19 = 0;
      do {
        uVar4 = puVar15[uVar19 >> 1] >> 0x10;
        if ((uVar19 & 1) != 0) {
          uVar4 = puVar15[uVar19 >> 1] & 0xffff;
        }
        puVar17 = puVar10;
        if (uVar4 != 0) {
          lVar9 = param_1[0xe];
          if (lVar9 == 0) {
            lVar9 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: Discovered SVID: 0x%04x\n",lVar9,
                         "handle_vdm_resp_ack",uVar4);
          *(uint *)((long)param_1 + 0x80c) = uVar4;
          puVar17 = puVar10 + 1;
          *puVar10 = (short)uVar4;
        }
        uVar19 = uVar19 + 1;
        puVar10 = puVar17;
      } while (uVar16 != uVar19);
      if ((uVar5 != 6) || (*(int *)(param_2 + 0x18) == 0)) goto LAB_001108c8;
      iVar8 = *(int *)((long)param_1 + 0x63c);
      lVar9 = param_1[0xe];
      uVar1 = 0xff00a002;
      uVar7 = usbpd_ipc_log;
      if (iVar8 != 2) {
        uVar1 = 0xff008002;
      }
      goto joined_r0x001108c0;
    }
    if ((uVar16 & 0x1f) == 1) {
      kfree(param_1[0xf3]);
      param_1[0xf3] = 0;
      if (uVar5 == 0) {
        lVar9 = param_1[0xe];
        if (lVar9 == 0) {
          lVar9 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Discarding Discover ID response with no VDOs\n",lVar9,
                       "handle_vdm_resp_ack");
        return;
      }
      if ((*puVar15 & 0x38000000) == 0x30000000) {
        lVar9 = param_1[0xe];
        if (lVar9 == 0) {
          lVar9 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: VPD detected turn off vbus\n",lVar9,
                       "handle_vdm_resp_ack");
        if ((char)param_1[0xed] == '\0') goto LAB_001106a0;
        iVar8 = regulator_disable(param_1[0xeb]);
        if (iVar8 == 0) {
          *(undefined1 *)(param_1 + 0xed) = 0;
          goto LAB_001106a0;
        }
        lVar9 = param_1[0xe];
        if (lVar9 == 0) {
          lVar9 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Err disabling vbus (%d)\n",lVar9,"handle_vdm_resp_ack"
                       ,iVar8);
        _dev_err(param_1,"Err disabling vbus (%d)\n",iVar8);
        cVar2 = *(char *)((long)param_1 + 0x569);
      }
      else {
LAB_001106a0:
        cVar2 = *(char *)((long)param_1 + 0x569);
      }
      if (cVar2 == '\0') {
        return;
      }
      if (((uVar16 & 0xffff) >> 8 & 7) == 0) {
        param_2 = param_2 + 0xe;
        uVar18 = (ulong)uVar5 & 0xff;
        do {
          lVar9 = param_1[0xe];
          *(uint *)(param_1 + 0x101) = (uint)*param_2;
          if (lVar9 == 0) {
            lVar9 = *param_1;
          }
          ipc_log_string(usbpd_ipc_log,"%s: %s: pd->adapter_id:0x%x\n",lVar9,"handle_vdm_resp_ack");
          _dev_info(param_1,"pd->adapter_id:0x%x\n",(int)param_1[0x101]);
          uVar7 = usbpd_ipc_log;
          uVar18 = uVar18 - 1;
          param_2 = param_2 + 2;
        } while (uVar18 != 0);
        iVar8 = *(int *)((long)param_1 + 0x63c);
        lVar9 = param_1[0xe];
        uVar1 = 0xff00a002;
        if (iVar8 != 2) {
          uVar1 = 0xff008002;
        }
        *(undefined4 *)(param_1 + 0xef) = 1;
joined_r0x001108c0:
        if (lVar9 == 0) {
          lVar9 = *param_1;
        }
        ipc_log_string(uVar7,
                       "%s: %s: VDM tx: svid:%04x ver:%d obj_pos:%d cmd:%x cmd_type:%x svdm_hdr:%x\n"
                       ,lVar9,"usbpd_send_svdm",0xff00,iVar8 == 2,0,2,
                       (ulong)pcVar11 & 0xffffffff00000000,uVar1);
        usbpd_send_vdm(param_1,uVar1,0,0);
        return;
      }
      lVar9 = param_1[0xe];
      if (lVar9 == 0) {
        lVar9 = *param_1;
      }
      pcVar11 = "%s: %s: Discarding Discover ID response with incorrect object position:%d\n";
    }
    else {
      lVar9 = param_1[0xe];
      if (lVar9 == 0) {
        lVar9 = *param_1;
      }
      pcVar11 = "%s: %s: unhandled ACK for command:0x%x\n";
    }
    ipc_log_string(usbpd_ipc_log,pcVar11,lVar9,"handle_vdm_resp_ack");
    break;
  case 2:
    lVar9 = param_1[0xe];
    if (lVar9 == 0) {
      lVar9 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: VDM NAK received for SVID:0x%04x command:0x%x\n",lVar9,
                   "handle_vdm_rx",uVar4,uVar19);
    _dev_info(param_1,"VDM NAK received for SVID:0x%04x command:0x%x\n",uVar4,uVar19);
    if (uVar19 - 1 < 2) {
      *(undefined4 *)((long)param_1 + 0x814) = 9;
    }
    break;
  case 3:
    if (uVar19 - 1 < 2) {
      if (param_1[0xf3] == 0) {
        lVar9 = param_1[0xe];
        if (lVar9 == 0) {
          lVar9 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: Discover command %d VDM was unexpectedly freed\n",
                       lVar9,"handle_vdm_rx",uVar19);
        _dev_err(param_1,"Discover command %d VDM was unexpectedly freed\n",uVar19);
      }
      else {
        param_1[0xf2] = param_1[0xf3];
        param_1[0xf3] = 0;
        pm_stay_awake(param_1);
        uVar7 = usbpd_ipc_log;
        lVar9 = param_1[0xe];
        *(undefined1 *)(param_1 + 0x9f) = 1;
        if (lVar9 == 0) {
          lVar9 = *param_1;
        }
        ipc_log_string(uVar7,"%s: %s: delay %d ms",lVar9,"kick_sm",0x32);
        hrtimer_start_range_ns(param_1 + 0x96,50000000,0,1);
      }
    }
  }
  return;
}



/* ---- pd_request_chunk_work.e7ce0f5c9173271e56101f64bf7b44f7 @ 00110b80 ---- */

void pd_request_chunk_work_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *in_x18;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 unaff_x30;
  uint local_5c;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar8 = sp_el0;
  local_58 = *(long *)(lVar8 + 0x5e0);
  uVar1 = *(uint *)(param_1 + 0x3c);
  local_5c = 0;
  plVar9 = *(long **)(param_1 + 0x30);
  if (2 < uVar1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(0x5512,0x110d24);
    (*pcVar10)();
  }
  lVar8 = plVar9[200];
  bVar3 = *(byte *)(param_1 + 0x38);
  iVar5 = *(int *)((long)plVar9 + 0x63c);
  bVar4 = *(byte *)((long)plVar9 + (ulong)uVar1 + 0x76a);
  iVar2 = *(int *)((long)plVar9 + 0x644);
  *(byte *)((long)plVar9 + (ulong)uVar1 + 0x76a) = bVar4 + 1 & 7;
  pcVar10 = *(code **)(plVar9[0x120] + 0x10);
  local_5c = (uint)(ushort)((ushort)*(byte *)(param_1 + 0x39) << 0xb | 0x8400);
  __cfi_slowpath_diag(0xe3996e76aef2d848,pcVar10,&DAT_001007a0);
  iVar5 = (*pcVar10)(bVar3 & 0x1f | (int)lVar8 << 5 | iVar5 << 6 | iVar2 << 8 | (uint)bVar4 << 9 |
                     0xffff9000,&local_5c,4,*(undefined4 *)(param_1 + 0x3c));
  if (iVar5 != 0) {
    lVar8 = plVar9[0xe];
    if (lVar8 == 0) {
      lVar8 = *plVar9;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: could not send chunk request\n",lVar8,
                   "pd_request_chunk_work");
    _dev_err(plVar9,"could not send chunk request\n");
    uVar6 = _raw_spin_lock_irqsave(plVar9 + 0xa5);
    lVar12 = plVar9[0xa6];
    plVar11 = (long *)plVar9[0xa4];
    lVar8 = lVar12 + 8;
    uVar7 = __list_add_valid(lVar8,plVar11,plVar9 + 0xa3);
    if ((uVar7 & 1) != 0) {
      plVar9[0xa4] = lVar8;
      *(long **)(lVar12 + 8) = plVar9 + 0xa3;
      *(long **)(lVar12 + 0x10) = plVar11;
      *plVar11 = lVar8;
    }
    _raw_spin_unlock_irqrestore(plVar9 + 0xa5,uVar6);
    plVar9[0xa6] = 0;
  }
  kfree(param_1);
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- pd_send_msg @ 00110d28 ---- */

int pd_send_msg(long *param_1,ulong param_2,undefined8 param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *in_x18;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  long *plVar11;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x50d) != '\0') {
    return -0x10;
  }
  uVar7 = (ulong)param_5;
  uVar5 = (uint)param_2;
  if (param_5 == 0) {
    uVar10 = uVar5 & 0x1f | (int)param_1[200] << 5 | *(int *)((long)param_1 + 0x63c) << 6 |
             *(int *)((long)param_1 + 0x644) << 8;
    uVar8 = (uint)*(byte *)((long)param_1 + 0x76a) << 9;
  }
  else {
    uVar8 = uVar5 & 0x1f | *(int *)((long)param_1 + 0x63c) << 6;
    uVar10 = (uint)*(byte *)((long)param_1 + 0x76b) << 9;
  }
  uVar2 = _raw_spin_lock_irqsave(param_1 + 0xa5);
  plVar11 = (long *)param_1[0xa3];
  _raw_spin_unlock_irqrestore(param_1 + 0xa5,uVar2);
  if (param_1 + 0xa3 != plVar11) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Abort send due to pending RX\n",lVar3,"pd_send_msg");
    return -0x10;
  }
  pcVar9 = *(code **)(param_1[0x120] + 0x10);
  __cfi_slowpath_diag(0xe3996e76aef2d848,pcVar9,&DAT_00100800);
  iVar1 = (*pcVar9)(uVar10 | uVar8 | (int)param_4 << 0xc,param_3,param_4 << 2,uVar7);
  if (iVar1 == 0) {
    *(byte *)((long)param_1 + uVar7 + 0x76a) = *(char *)((long)param_1 + uVar7 + 0x76a) + 1U & 7;
    return 0;
  }
  if ((char)param_1[0xad] == '\0') {
    return iVar1;
  }
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
    lVar3 = *param_1;
  }
  if (param_4 == 0) {
    ppuVar4 = &usbpd_control_msg_strings;
  }
  else {
    if (0xf < (uVar5 & 0xff)) {
      pcVar6 = "Invalid";
      goto LAB_00110ee4;
    }
    ppuVar4 = &usbpd_data_msg_strings;
  }
  pcVar6 = ppuVar4[param_2 & 0xff];
LAB_00110ee4:
  ipc_log_string(usbpd_ipc_log,"%s: %s: Error sending %s: %d\n",lVar3,"pd_send_msg",pcVar6,iVar1);
  _dev_err(param_1,"Error sending %s: %d\n",pcVar6,iVar1);
  return iVar1;
}



/* ---- start_src_ams @ 00110f20 ---- */

void start_src_ams(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if ((*(int *)((long)param_1 + 0x644) == 1) && (1 < *(uint *)((long)param_1 + 0x63c))) {
    lVar5 = param_1[0xe];
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    bVar3 = (param_2 & 1) == 0;
    puVar1 = "1.5A";
    if (bVar3) {
      puVar1 = &DAT_001010bc;
    }
    uVar6 = 1;
    if (bVar3) {
      uVar6 = 2;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Set Rp to %s\n",lVar5,"start_src_ams",puVar1);
    iVar4 = iio_write_channel_raw(param_1[0xbc],uVar6);
    if (iVar4 < 0) {
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar5,
                     "usbpd_set_psy_iio_property",5);
      _dev_err(param_1,"failed to set IIO property: %d\n",5);
    }
    if ((param_2 & 1) != 0) {
      pm_stay_awake(param_1);
      uVar2 = usbpd_ipc_log;
      lVar5 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(uVar2,"%s: %s: delay %d ms",lVar5,"kick_sm",0x10);
      hrtimer_start_range_ns(param_1 + 0x96,16000000,0,1);
    }
  }
  return;
}



/* ---- log_decoded_request @ 00111060 ---- */

void log_decoded_request(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar7 = param_1[0xe];
  uVar5 = param_2 >> 0x1c & 7;
  if (lVar7 == 0) {
    lVar7 = *param_1;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: RDO: 0x%08x\n",lVar7,"log_decoded_request",
                 (int)param_1[0xab]);
  plVar1 = param_1 + 0xa7;
  if (*(int *)((long)param_1 + 0x644) != 0) {
    plVar1 = (long *)&default_src_caps;
  }
  uVar2 = *(uint *)((long)plVar1 + (long)(int)(uVar5 - 1) * 4);
  switch(uVar2 >> 0x1e) {
  default:
    lVar7 = param_1[0xe];
    if (lVar7 == 0) {
      lVar7 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,
                   "%s: %s: Request Fixed/Variable PDO:%d Volt:%dmV OpCurr:%dmA Curr:%dmA\n",lVar7,
                   "log_decoded_request",uVar5,(uVar2 >> 10 & 0x3ff) * 0x32,
                   (param_2 >> 10 & 0x3ff) * 10,(param_2 & 0x3ff) * 10);
    return;
  case 1:
    lVar7 = param_1[0xe];
    if (lVar7 == 0) {
      lVar7 = *param_1;
    }
    iVar3 = (param_2 >> 10 & 0x3ff) * 0xfa;
    pcVar6 = "%s: %s: Request Battery PDO:%d OpPow:%dmW Pow:%dmW\n";
    iVar4 = (param_2 & 0x3ff) * 0xfa;
    break;
  case 3:
    lVar7 = param_1[0xe];
    if (lVar7 == 0) {
      lVar7 = *param_1;
    }
    pcVar6 = "%s: %s: Request PPS PDO:%d Volt:%dmV Curr:%dmA\n";
    iVar4 = (param_2 & 0x7f) * 0x32;
    iVar3 = (param_2 >> 9 & 0x7ff) * 0x14;
  }
  ipc_log_string(usbpd_ipc_log,pcVar6,lVar7,"log_decoded_request",uVar5,iVar3,iVar4);
  return;
}



/* ---- dr_swap @ 001111d0 ---- */

void dr_swap(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *in_x18;
  code *pcVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  reset_vdm_state();
  lVar2 = param_1[0xe];
  if (lVar2 == 0) {
    lVar2 = *param_1;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: %s: current_dr(%d)\n",lVar2,"dr_swap","dr_swap",
                 (int)param_1[200]);
  if ((int)param_1[200] == 0) {
    *(undefined4 *)(param_1 + 200) = 1;
    pcVar3 = *(code **)(param_1[0x120] + 0x18);
    __cfi_slowpath_diag(0x4149c9976e4409c4,pcVar3,&DAT_001008a0);
    (*pcVar3)((int)param_1[200],*(undefined4 *)((long)param_1 + 0x644));
    extcon_set_state_sync(param_1[0xa0],1,0);
    if (*(char *)((long)param_1 + 0x56a) != '\0') {
      start_usb_host(param_1);
    }
    typec_set_data_role(param_1[0xdc],1);
    lVar2 = param_1[0xe];
    uVar1 = 0xff00a001;
    if (*(int *)((long)param_1 + 0x63c) != 2) {
      uVar1 = 0xff008001;
    }
    if (lVar2 == 0) {
      lVar2 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,
                   "%s: %s: VDM tx: svid:%04x ver:%d obj_pos:%d cmd:%x cmd_type:%x svdm_hdr:%x\n",
                   lVar2,"usbpd_send_svdm",0xff00,*(int *)((long)param_1 + 0x63c) == 2,0,1,0,uVar1);
    usbpd_send_vdm(param_1,uVar1,0,0);
  }
  else if ((int)param_1[200] == 1) {
    *(undefined4 *)(param_1 + 200) = 0;
    pcVar3 = *(code **)(param_1[0x120] + 0x18);
    __cfi_slowpath_diag(0x4149c9976e4409c4,pcVar3,&DAT_00100880);
    (*pcVar3)((int)param_1[200],*(undefined4 *)((long)param_1 + 0x644));
    extcon_set_state_sync(param_1[0xa0],2,0);
    if (*(char *)((long)param_1 + 0x56a) != '\0') {
      start_usb_peripheral(param_1);
    }
    typec_set_data_role(param_1[0xdc],0);
  }
  return;
}



/* ---- vconn_swap @ 0011138c ---- */

void vconn_swap(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *in_x18;
  code *pcVar7;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (*(char *)((long)param_1 + 0x769) == '\0') {
    if (param_1[0xec] == 0) {
      uVar3 = devm_regulator_get(param_1[0xc],"vconn");
      param_1[0xec] = uVar3;
      if (uVar3 < 0xfffffffffffff001) goto LAB_00111470;
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to get vconn\n",lVar5,"vconn_swap");
      pcVar4 = "Unable to get vconn\n";
    }
    else {
LAB_00111470:
      iVar2 = regulator_enable();
      if (iVar2 == 0) {
        *(undefined1 *)((long)param_1 + 0x769) = 1;
        pcVar7 = *(code **)(param_1[0x120] + 0x20);
        __cfi_slowpath_diag(0x8cb4f62146dffe76,pcVar7,&DAT_00100900);
        (*pcVar7)(0x23);
        usleep_range_state(5000,10000,2);
        iVar2 = pd_send_msg(param_1,6,0,0,0);
        if (iVar2 == 0) {
          return;
        }
        if (*(char *)((long)param_1 + 0x50d) != '\0') {
          return;
        }
        lVar5 = param_1[0xe];
        if (lVar5 == 0) {
          lVar5 = *param_1;
        }
        if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x111654);
          (*pcVar7)();
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar5,"usbpd_set_state",
                       (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
        *(undefined2 *)((long)param_1 + 0x76a) = 0;
        *(undefined4 *)(param_1 + 0xa1) = 0x1f;
        *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
        *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
        *(undefined1 *)((long)param_1 + 0x76c) = 0;
        *(undefined1 *)((long)param_1 + 0x64a) = 0;
        *(undefined1 *)((long)param_1 + 0x8e4) = 0;
        *(undefined2 *)(param_1 + 0xea) = 0;
        iVar2 = pd_send_msg(param_1,0xd,0,0,0);
        if (iVar2 != 0) {
          uVar6 = 10;
          if (*(int *)((long)param_1 + 0x644) != 1) {
            uVar6 = 0x15;
          }
          usbpd_set_state(param_1,uVar6);
          return;
        }
        pm_stay_awake(param_1);
        uVar1 = usbpd_ipc_log;
        lVar5 = param_1[0xe];
        *(undefined1 *)(param_1 + 0x9f) = 1;
        if (lVar5 == 0) {
          lVar5 = *param_1;
        }
        ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar5,"kick_sm",0x1a);
        uVar6 = 26000000;
        goto LAB_0011142c;
      }
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Unable to enable vconn\n",lVar5,"vconn_swap");
      pcVar4 = "Unable to enable vconn\n";
    }
    _dev_err(param_1,pcVar4);
  }
  else {
    pcVar7 = *(code **)(param_1[0x120] + 0x20);
    __cfi_slowpath_diag(0x8cb4f62146dffe76,pcVar7,&DAT_001008e0);
    (*pcVar7)(0x21);
    *(undefined4 *)(param_1 + 0xa1) = 0x20;
    pm_stay_awake(param_1);
    uVar1 = usbpd_ipc_log;
    lVar5 = param_1[0xe];
    *(undefined1 *)(param_1 + 0x9f) = 1;
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar5,"kick_sm",100);
    uVar6 = 100000000;
LAB_0011142c:
    hrtimer_start_range_ns(param_1 + 0x96,uVar6,0,1);
  }
  return;
}



/* ---- handle_get_src_cap_extended @ 00111654 ---- */

void handle_get_src_cap_extended(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_28 = *(long *)(lVar4 + 0x5e0);
  local_38 = 0;
  local_40 = 0x5c6;
  uStack_30 = 0x701000000000000;
  iVar3 = pd_send_ext_msg(param_1,1,&local_40,0x18);
  if ((iVar3 != 0) && (*(char *)((long)param_1 + 0x50d) == '\0')) {
    lVar4 = param_1[0xe];
    if (lVar4 == 0) {
      lVar4 = *param_1;
    }
    if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x1117e8);
      (*pcVar2)();
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar4,"usbpd_set_state",
                   (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
    *(undefined2 *)((long)param_1 + 0x76a) = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0x1f;
    *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
    *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
    *(undefined1 *)((long)param_1 + 0x76c) = 0;
    *(undefined1 *)((long)param_1 + 0x64a) = 0;
    *(undefined1 *)((long)param_1 + 0x8e4) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    iVar3 = pd_send_msg(param_1,0xd,0,0,0);
    if (iVar3 == 0) {
      pm_stay_awake(param_1);
      uVar1 = usbpd_ipc_log;
      lVar4 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x9f) = 1;
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      ipc_log_string(uVar1,"%s: %s: delay %d ms",lVar4,"kick_sm",0x1a);
      hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
    }
    else {
      uVar5 = 10;
      if (*(int *)((long)param_1 + 0x644) != 1) {
        uVar5 = 0x15;
      }
      usbpd_set_state(param_1,uVar5);
    }
  }
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- handle_get_battery_cap @ 001117e8 ---- */

void handle_get_battery_cap(long *param_1,long param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  long local_38;
  undefined1 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar6 = sp_el0;
  local_28 = *(long *)(lVar6 + 0x5e0);
  local_38 = -0x100000000;
  local_30 = 0;
  if (*(short *)(param_2 + 2) == 1) {
    cVar1 = *(char *)(param_2 + 0x18);
    if ((cVar1 == '\0') && (param_1[0xb3] != 0)) {
      uVar2 = (undefined2)
              (((*(int *)((long)param_1 + 0x62c) / 1000) * ((int)param_1[0xc5] / 1000)) / 100000);
      local_38 = (ulong)CONCAT22(uVar2,uVar2) << 0x20;
    }
    else {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Battery %d unsupported\n",lVar6,"handle_get_battery_cap"
                     ,cVar1);
      _dev_warn(param_1,"Battery %d unsupported\n",cVar1);
      local_30 = 1;
    }
    iVar5 = pd_send_ext_msg(param_1,5,&local_38,9);
    if ((iVar5 != 0) && (*(char *)((long)param_1 + 0x50d) == '\0')) {
      lVar6 = param_1[0xe];
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x111a80);
        (*pcVar4)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar6,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
      *(undefined2 *)((long)param_1 + 0x76a) = 0;
      *(undefined4 *)(param_1 + 0xa1) = 0x1f;
      *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
      *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
      *(undefined1 *)((long)param_1 + 0x76c) = 0;
      *(undefined1 *)((long)param_1 + 0x64a) = 0;
      *(undefined1 *)((long)param_1 + 0x8e4) = 0;
      *(undefined2 *)(param_1 + 0xea) = 0;
      iVar5 = pd_send_msg(param_1,0xd,0,0,0);
      if (iVar5 == 0) {
        pm_stay_awake(param_1);
        uVar3 = usbpd_ipc_log;
        lVar6 = param_1[0xe];
        *(undefined1 *)(param_1 + 0x9f) = 1;
        if (lVar6 == 0) {
          lVar6 = *param_1;
        }
        ipc_log_string(uVar3,"%s: %s: delay %d ms",lVar6,"kick_sm",0x1a);
        hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
      }
      else {
        uVar7 = 10;
        if (*(int *)((long)param_1 + 0x644) != 1) {
          uVar7 = 0x15;
        }
        usbpd_set_state(param_1,uVar7);
      }
    }
  }
  else {
    lVar6 = param_1[0xe];
    if (lVar6 == 0) {
      lVar6 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid payload size: %d\n",lVar6,"handle_get_battery_cap"
                  );
    _dev_err(param_1,"Invalid payload size: %d\n",*(undefined2 *)(param_2 + 2));
  }
  lVar6 = sp_el0;
  if (*(long *)(lVar6 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- handle_get_battery_status @ 00111a80 ---- */

void handle_get_battery_status(long *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *in_x18;
  uint uVar7;
  undefined8 unaff_x30;
  uint local_34;
  undefined8 local_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_28 = *(long *)(lVar5 + 0x5e0);
  local_30 = 0;
  local_34 = 0xffff0000;
  if (*(short *)(param_2 + 2) == 1) {
    cVar1 = *(char *)(param_2 + 0x18);
    if ((cVar1 == '\0') && (param_1[0xb3] != 0)) {
      iVar4 = power_supply_get_property(param_1[0xb3],3,&local_30);
      if ((iVar4 == 0) && ((int)local_30 != 0)) {
        local_34 = 0xffff0200;
        iVar4 = power_supply_get_property(param_1[0xb3],0,&local_30);
        if ((iVar4 == 0) && ((int)local_30 != 1)) {
          if ((int)local_30 == 2) {
            local_34 = 0xffff0600;
            uVar7 = 0x600;
          }
          else {
            local_34 = 0xffff0a00;
            uVar7 = 0xa00;
          }
        }
        else {
          uVar7 = 0x200;
        }
        iVar4 = power_supply_get_property(param_1[0xb3],0x2e,&local_30);
        if (iVar4 == 0) {
          local_34 = uVar7 | ((((int)param_1[0xc5] / 1000) * (int)local_30 *
                              (*(int *)((long)param_1 + 0x62c) / 1000)) / 10000000) * 0x10000;
        }
      }
    }
    else {
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Battery %d unsupported\n",lVar5,
                     "handle_get_battery_status",cVar1);
      _dev_warn(param_1,"Battery %d unsupported\n",cVar1);
      local_34 = 0xffff0100;
    }
    iVar4 = pd_send_msg(param_1,5,&local_34,1,0);
    if ((iVar4 != 0) && (*(char *)((long)param_1 + 0x50d) == '\0')) {
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      if (0x20 < *(uint *)(param_1 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x111d94);
        (*pcVar3)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar5,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(param_1 + 0xa1)],"Send_Soft_Reset");
      *(undefined2 *)((long)param_1 + 0x76a) = 0;
      *(undefined4 *)(param_1 + 0xa1) = 0x1f;
      *(undefined2 *)((long)param_1 + 0x76d) = 0xffff;
      *(undefined1 *)((long)param_1 + 0x76f) = 0xff;
      *(undefined1 *)((long)param_1 + 0x76c) = 0;
      *(undefined1 *)((long)param_1 + 0x64a) = 0;
      *(undefined1 *)((long)param_1 + 0x8e4) = 0;
      *(undefined2 *)(param_1 + 0xea) = 0;
      iVar4 = pd_send_msg(param_1,0xd,0,0,0);
      if (iVar4 == 0) {
        pm_stay_awake(param_1);
        uVar2 = usbpd_ipc_log;
        lVar5 = param_1[0xe];
        *(undefined1 *)(param_1 + 0x9f) = 1;
        if (lVar5 == 0) {
          lVar5 = *param_1;
        }
        ipc_log_string(uVar2,"%s: %s: delay %d ms",lVar5,"kick_sm",0x1a);
        hrtimer_start_range_ns(param_1 + 0x96,26000000,0,1);
      }
      else {
        uVar6 = 10;
        if (*(int *)((long)param_1 + 0x644) != 1) {
          uVar6 = 0x15;
        }
        usbpd_set_state(param_1,uVar6);
      }
    }
  }
  else {
    lVar5 = param_1[0xe];
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: Invalid payload size: %d\n",lVar5,
                   "handle_get_battery_status");
    _dev_err(param_1,"Invalid payload size: %d\n",*(undefined2 *)(param_2 + 2));
  }
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- reset_vdm_state @ 00111d94 ---- */

void reset_vdm_state(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *in_x18;
  long *plVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  mutex_lock(param_1 + 0xf4);
  for (plVar3 = (long *)param_1[0xfa]; param_1 + 0xfa != plVar3; plVar3 = (long *)*plVar3) {
    if (*(char *)(plVar3 + 2) != '\0') {
      lVar1 = param_1[0xe];
      if (lVar1 == 0) {
        lVar1 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: Notify SVID: 0x%04x disconnect\n",lVar1,
                     "reset_vdm_state",*(undefined2 *)(plVar3 + -6));
      pcVar2 = (code *)plVar3[-4];
      if (pcVar2 != usbpd_mi_disconnect_cb_e7ce0f5c9173271e56101f64bf7b44f7_cfi_jt) {
        __cfi_slowpath_diag(0x698b585e976fdf2c,pcVar2,&DAT_001008c0);
      }
      (*pcVar2)(plVar3 + -6);
      *(undefined1 *)(plVar3 + 2) = 0;
    }
  }
  extcon_set_state_sync(param_1[0xa0],0x2c,0);
  *(undefined4 *)(param_1 + 0xef) = 0;
  kfree(param_1[0xf3]);
  param_1[0xf3] = 0;
  kfree(param_1[0xf0]);
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  kfree(param_1[0xf2]);
  param_1[0xf2] = 0;
  *(undefined2 *)((long)param_1 + 0x802) = 0;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  mutex_unlock(param_1 + 0xf4);
  return;
}



/* ---- start_usb_peripheral @ 00111ef4 ---- */

void start_usb_peripheral(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  local_2c = 0;
  iVar2 = iio_read_channel_processed(param_1[0xb8],&local_2c);
  if (iVar2 < 0) {
    lVar3 = param_1[0xe];
    if (lVar3 == 0) {
      lVar3 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar3,
                   "usbpd_get_psy_iio_property",1);
    _dev_err(param_1,"failed to get IIO property: %d\n",1);
    bVar1 = false;
  }
  else {
    bVar1 = local_2c == 2;
  }
  extcon_set_property(param_1[0xa0],1,1,bVar1);
  extcon_set_property(param_1[0xa0],1,2,1);
  extcon_set_state_sync(param_1[0xa0],1,1);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- pd_send_ext_msg @ 00111fe8 ---- */

int pd_send_ext_msg(long *param_1,ulong param_2,void *param_3,ulong param_4)

{
  size_t __n;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  undefined8 *in_x18;
  undefined *puVar7;
  code *pcVar8;
  undefined8 unaff_x30;
  ulong local_88 [3];
  undefined4 local_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_68 = *(long *)(lVar5 + 0x5e0);
  uVar6 = 0;
  uVar3 = (ushort)param_4;
  local_70 = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[0] = 0;
  while( true ) {
    __n = param_4;
    if (0x19 < param_4) {
      __n = 0x1a;
    }
    *(char *)(param_1 + 0xd2) = (char)uVar6 + '\x01';
    local_88[0] = CONCAT62(local_88[0]._2_6_,uVar3 & 0x1ff | uVar6 << 0xb) | 0x8000;
    memcpy((void *)((ulong)local_88 | 2),param_3,__n);
    lVar5 = param_1[200];
    iVar4 = *(int *)((long)param_1 + 0x63c);
    *(undefined4 *)(param_1 + 0xce) = 0;
    iVar1 = *(int *)((long)param_1 + 0x644);
    bVar2 = *(byte *)((long)param_1 + 0x76a);
    pcVar8 = *(code **)(param_1[0x120] + 0x10);
    __cfi_slowpath_diag(0xe3996e76aef2d848,pcVar8,&DAT_00100920);
    iVar4 = (*pcVar8)(((uint)(__n + 5) & 0x1c) << 10 | iVar4 << 6 |
                      (uint)param_2 & 0x1f | (int)lVar5 << 5 | iVar1 << 8 | (uint)bVar2 << 9 |
                      0xffff8000,local_88,__n + 5 & 0x3c,0);
    if (iVar4 != 0) {
      lVar5 = param_1[0xe];
      if (lVar5 == 0) {
        lVar5 = *param_1;
      }
      puVar7 = (&usbpd_ext_msg_strings)[param_2 & 0xff];
      ipc_log_string(usbpd_ipc_log,"%s: %s: Error sending %s: %d\n",lVar5,"pd_send_ext_msg",puVar7,
                     iVar4);
      _dev_err(param_1,"Error sending %s: %d\n",puVar7,iVar4);
      goto LAB_00112134;
    }
    param_4 = param_4 - __n;
    *(byte *)((long)param_1 + 0x76a) = *(char *)((long)param_1 + 0x76a) + 1U & 7;
    if (param_4 == 0) {
      iVar4 = 0;
      goto LAB_00112134;
    }
    lVar5 = wait_for_completion_timeout(param_1 + 0xce,7);
    if (lVar5 == 0) break;
    uVar6 = (ushort)*(byte *)(param_1 + 0xd2);
  }
  lVar5 = param_1[0xe];
  if (lVar5 == 0) {
    lVar5 = *param_1;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: Timed out waiting for chunk request\n",lVar5,
                 "pd_send_ext_msg");
  _dev_err(param_1,"Timed out waiting for chunk request\n");
  iVar4 = -0x47;
LAB_00112134:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ---- pd_eval_src_caps @ 0011221c ---- */

undefined8 pd_eval_src_caps(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 *in_x18;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar15 = *(uint *)(param_1 + 0xa7);
  if (uVar15 >> 0x1e == 0) {
    bVar6 = (byte)(uVar15 >> 0x18);
    *(byte *)((long)param_1 + 0x56a) = bVar6 >> 2 & 1;
    *(byte *)((long)param_1 + 0x56b) = bVar6 >> 5;
    *(byte *)((long)param_1 + 0x56c) = bVar6 >> 1 & 1;
    iVar9 = iio_write_channel_raw(param_1[0xbb],uVar15 >> 0x1c & 1);
    if (iVar9 < 0) {
      lVar16 = param_1[0xe];
      if (lVar16 == 0) {
        lVar16 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar16,
                     "usbpd_set_psy_iio_property",4);
      _dev_err(param_1,"failed to set IIO property: %d\n",4);
    }
    if (*(int *)((long)param_1 + 0x63c) == 2) {
      if ((((((*(uint *)((long)param_1 + 0x53c) >> 0x1e < 3) ||
             ((*(uint *)((long)param_1 + 0x53c) & 0x30000000) != 0)) &&
            ((*(uint *)(param_1 + 0xa8) >> 0x1e < 3 ||
             ((*(uint *)(param_1 + 0xa8) & 0x30000000) != 0)))) &&
           ((*(uint *)((long)param_1 + 0x544) >> 0x1e < 3 ||
            ((*(uint *)((long)param_1 + 0x544) & 0x30000000) != 0)))) &&
          ((*(uint *)(param_1 + 0xa9) >> 0x1e < 3 || ((*(uint *)(param_1 + 0xa9) & 0x30000000) != 0)
           ))) && ((*(uint *)((long)param_1 + 0x54c) >> 0x1e < 3 ||
                   ((*(uint *)((long)param_1 + 0x54c) & 0x30000000) != 0)))) {
        bVar7 = 2 < *(uint *)(param_1 + 0xaa) >> 0x1e;
        bVar8 = (*(uint *)(param_1 + 0xaa) & 0x30000000) == 0;
        bVar5 = bVar7 && bVar8;
        uVar12 = 1;
        if (bVar7 && bVar8) {
          uVar12 = 2;
        }
      }
      else {
        uVar12 = 2;
        bVar5 = true;
      }
    }
    else {
      bVar5 = false;
      uVar12 = 1;
    }
    iVar9 = iio_write_channel_raw(param_1[0xb7],uVar12);
    if (iVar9 < 0) {
      lVar16 = param_1[0xe];
      if (lVar16 == 0) {
        lVar16 = *param_1;
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: failed to set IIO property: %d\n",lVar16,
                     "usbpd_set_psy_iio_property",0);
      _dev_err(param_1,"failed to set IIO property: %d\n",0);
      cVar3 = *(char *)((long)param_1 + 0x56a);
    }
    else {
      cVar3 = *(char *)((long)param_1 + 0x56a);
    }
    if (((cVar3 != '\0') && ((int)param_1[200] == 0)) && ((char)param_1[0xad] == '\0')) {
      start_usb_peripheral(param_1);
    }
    uVar15 = 0;
    iVar9 = 0;
    iVar14 = 0;
    iVar13 = 0;
    lVar16 = 0x538;
    do {
      uVar2 = *(uint *)((long)param_1 + lVar16);
      if (uVar2 == 0) {
        bVar7 = (int)lVar16 == 0x53c;
        goto LAB_00112574;
      }
      uVar4 = uVar2 >> 0x1e;
      if (uVar4 == 0) {
        iVar13 = (uVar2 >> 10 & 0x3ff) * 0x32;
        iVar9 = (uVar2 & 0x3ff) * 10;
        lVar11 = param_1[0xe];
        iVar14 = iVar13;
      }
      else {
        if (uVar4 == 3) {
          iVar13 = (uVar2 >> 0x11 & 0xff) * 100;
          iVar14 = (uVar2 >> 8 & 0xff) * 100;
          iVar9 = (uVar2 & 0x7f) * 0x32;
          uVar2 = iVar13 * iVar9;
          if ((uVar15 == 0) || (uVar15 < uVar2)) {
            uVar15 = uVar2;
            if (17999999 < uVar2) {
              *(undefined1 *)((long)param_1 + 0x8b9) = 0;
              lVar11 = param_1[0xe];
              goto joined_r0x00112564;
            }
            *(undefined1 *)((long)param_1 + 0x8b9) = 1;
          }
        }
        lVar11 = param_1[0xe];
      }
joined_r0x00112564:
      if (lVar11 == 0) {
        lVar11 = *param_1;
      }
      pcVar1 = "PPS";
      if (uVar4 != 3) {
        pcVar1 = "PD2.0";
      }
      ipc_log_string(usbpd_ipc_log,
                     "%s: %s: %s max_volt:%d,min_volt:%d,max_curr:%d,pps_weak_limit:%d\n",lVar11,
                     "pd_eval_src_caps",pcVar1,iVar13,iVar14,iVar9,
                     *(undefined1 *)((long)param_1 + 0x8b9));
      _dev_info(param_1,"%s max_volt:%d,min_volt:%d,max_curr:%d,pps_weak_limit:%d\n",pcVar1,iVar13,
                iVar14,iVar9,*(undefined1 *)((long)param_1 + 0x8b9));
      lVar16 = lVar16 + 4;
    } while (lVar16 != 0x554);
    bVar7 = false;
LAB_00112574:
    if (bVar5 || bVar7) {
      uVar10 = 1;
    }
    else {
      uVar10 = 2;
    }
    pd_select_pdo(param_1,uVar10,0,0);
    uVar10 = 0;
  }
  else {
    lVar16 = param_1[0xe];
    if (lVar16 == 0) {
      lVar16 = *param_1;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: First src_cap invalid %08x\n",lVar16,"pd_eval_src_caps",
                   uVar15);
    _dev_err(param_1,"First src_cap invalid %08x\n",uVar15);
    uVar10 = 0xffffffea;
  }
  return uVar10;
}



/* ---- get_src_cap_ext_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 001125f8 ---- */

undefined8 get_src_cap_ext_show_e7ce0f5c9173271e56101f64bf7b44f7(void)

{
  return 0xffffffffffffffea;
}



/* ---- get_status_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112608 ---- */

undefined8 get_status_show_e7ce0f5c9173271e56101f64bf7b44f7(void)

{
  return 0xffffffffffffffea;
}



/* ---- get_pps_status_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112618 ---- */

undefined8 get_pps_status_show_e7ce0f5c9173271e56101f64bf7b44f7(void)

{
  return 0xffffffffffffffea;
}



/* ---- get_battery_cap_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112628 ---- */

long get_battery_cap_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = *(long *)(param_1 + 0x98);
  iVar1 = scnprintf(param_3,0x1000,"%s0x%02x",&DAT_00103ca8,*(undefined1 *)(lVar3 + 0x8ed));
  iVar2 = scnprintf(param_3 + iVar1,0x1000 - (long)iVar1,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8ee));
  iVar2 = iVar2 + iVar1;
  iVar1 = scnprintf(param_3 + iVar2,0x1000 - (long)iVar2,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8ef));
  iVar1 = iVar1 + iVar2;
  iVar2 = scnprintf(param_3 + iVar1,0x1000 - (long)iVar1,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8f0));
  iVar2 = iVar2 + iVar1;
  iVar1 = scnprintf(param_3 + iVar2,0x1000 - (long)iVar2,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8f1));
  iVar1 = iVar1 + iVar2;
  iVar2 = scnprintf(param_3 + iVar1,0x1000 - (long)iVar1,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8f2));
  iVar2 = iVar2 + iVar1;
  iVar1 = scnprintf(param_3 + iVar2,0x1000 - (long)iVar2,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8f3));
  iVar1 = iVar1 + iVar2;
  iVar2 = scnprintf(param_3 + iVar1,0x1000 - (long)iVar1,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8f4));
  iVar2 = iVar2 + iVar1;
  iVar1 = scnprintf(param_3 + iVar2,0x1000 - (long)iVar2,"%s0x%02x",&DAT_001014b4,
                    *(undefined1 *)(lVar3 + 0x8f5));
  iVar1 = iVar1 + iVar2;
  iVar2 = scnprintf(param_3 + iVar1,0x1000 - (long)iVar1,&DAT_00103378);
  return (long)(iVar2 + iVar1);
}



/* ---- get_battery_cap_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 001127bc ---- */

void get_battery_cap_store_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_2c = 0;
  if (((*(int *)(lVar2 + 0x63c) == 1) || (iVar1 = kstrtouint(param_3,0,&local_2c), iVar1 != 0)) ||
     (local_2c != 1)) {
    param_4 = -0x16;
    *(undefined1 *)(lVar2 + 0x8ec) = 0xea;
  }
  else {
    *(undefined1 *)(lVar2 + 0x8ec) = 1;
    iVar1 = trigger_tx_msg(lVar2,lVar2 + 0x8eb);
    if (iVar1 != 0) {
      param_4 = (long)iVar1;
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_4);
  }
  return;
}



/* ---- get_battery_status_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112874 ---- */

long get_battery_status_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = scnprintf(param_3,0x1000,"0x%08x\n",*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x8f8));
  return (long)iVar1;
}



/* ---- get_battery_status_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 001128b8 ---- */

void get_battery_status_store_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *in_x18;
  long lVar2;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x5e0);
  lVar2 = *(long *)(param_1 + 0x98);
  local_2c = 0;
  if (((*(int *)(lVar2 + 0x63c) == 1) || (iVar1 = kstrtouint(param_3,0,&local_2c), iVar1 != 0)) ||
     (local_2c != 1)) {
    param_4 = -0x16;
    *(undefined1 *)(lVar2 + 0x8f6) = 0xea;
  }
  else {
    *(undefined1 *)(lVar2 + 0x8f6) = 1;
    iVar1 = trigger_tx_msg(lVar2,lVar2 + 0x8f7);
    if (iVar1 != 0) {
      param_4 = (long)iVar1;
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_4);
  }
  return;
}



/* ---- pd_vbus_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112970 ---- */

undefined8 pd_vbus_show_e7ce0f5c9173271e56101f64bf7b44f7(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *in_x18;
  long lVar3;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  if (0x20 < *(uint *)(pd_lobal + 0x508)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x112a28);
    (*pcVar1)();
  }
  lVar3 = *(long *)(param_1 + 0x98);
  _printk("<3>pd_vbus_show handle state %s, vbus %d\n",(&usbpd_state_strings)[*(uint *)(pd_lobal + 0x508)],
          *(undefined1 *)(pd_lobal + 0x768));
  if (lVar3 == 0) {
    puVar2 = "<3>pd_vbus_reset, pd is null\n";
  }
  else {
    if (*(char *)(lVar3 + 0x768) != '\0') {
      regulator_disable(*(undefined8 *)(lVar3 + 0x758));
      *(undefined1 *)(lVar3 + 0x768) = 0;
      if (pd_vbus_ctrl == 0) {
        pd_vbus_ctrl = 5000;
      }
      msleep();
      enable_vbus(lVar3);
      return 0;
    }
    puVar2 = "<3>pd_vbus is not enabled yet\n";
  }
  _printk(puVar2);
  return 0;
}



/* ---- pd_vbus_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112a28 ---- */

undefined8
pd_vbus_store_e7ce0f5c9173271e56101f64bf7b44f7
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined4 local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x5e0);
  local_3c = 0;
  iVar3 = sscanf(param_3,"%d\n",&local_3c);
  if (iVar3 != 0) {
    _printk("<3>pd_vbus_store input err\n");
  }
  if (*(uint *)(pd_lobal + 0x508) < 0x21) {
    _printk("<3>pd_vbus_store handle state %s, vbus %d,val %d\n",(&usbpd_state_strings)[*(uint *)(pd_lobal + 0x508)],
            *(undefined1 *)(pd_lobal + 0x768),local_3c);
    pm_stay_awake(pd_lobal);
    if (*(uint *)(pd_lobal + 0x508) < 0x21) {
      _printk("<3>kick_usbpd_vbus_sm handle state %s, vbus %d\n",(&usbpd_state_strings)[*(uint *)(pd_lobal + 0x508)],
              *(undefined1 *)(pd_lobal + 0x768));
      queue_delayed_work_on(0x20,*(undefined8 *)(pd_lobal + 0x390),pd_lobal + 0x428,100);
      lVar1 = sp_el0;
      if (*(long *)(lVar1 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return param_4;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x112b2c);
  (*pcVar2)();
}



/* ---- current_state_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112b30 ---- */

long current_state_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x98) + 0x508);
  if (0x20 < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x112b8c);
    (*pcVar2)();
  }
  iVar3 = snprintf(param_3,0x1000,"%s",(&usbpd_state_strings)[uVar1]);
  return (long)iVar3;
}



/* ---- usbpd_verifed_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112b8c ---- */

long usbpd_verifed_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)*(byte *)(*(long *)(param_1 + 0x98) + 0x805));
  return (long)iVar1;
}



/* ---- usbpd_verifed_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112bd0 ---- */

undefined8
usbpd_verifed_store_e7ce0f5c9173271e56101f64bf7b44f7
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  long *plVar4;
  undefined8 unaff_x30;
  int local_3c;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x5e0);
  plVar4 = *(long **)(param_1 + 0x98);
  local_3c = 0;
  iVar2 = sscanf(param_3,"%d\n",&local_3c);
  if (iVar2 == 1) {
    lVar3 = plVar4[0xe];
    if (lVar3 == 0) {
      lVar3 = *plVar4;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: batterysecret set usbpd verifed :%d\n",lVar3,
                   "usbpd_verifed_store",local_3c);
    _dev_info(plVar4,"batterysecret set usbpd verifed :%d\n",local_3c);
    *(bool *)((long)plVar4 + 0x805) = local_3c != 0;
    if (((local_3c != 0) && (iVar2 = pd_send_msg(plVar4,7,0,0,0), iVar2 != 0)) &&
       (*(char *)((long)plVar4 + 0x50d) == '\0')) {
      lVar3 = plVar4[0xe];
      if (lVar3 == 0) {
        lVar3 = *plVar4;
      }
      if (0x20 < *(uint *)(plVar4 + 0xa1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x112d38);
        (*pcVar1)();
      }
      ipc_log_string(usbpd_ipc_log,"%s: %s: %s -> %s\n",lVar3,"usbpd_set_state",
                     (&usbpd_state_strings)[*(uint *)(plVar4 + 0xa1)],"Send_Soft_Reset");
      *(undefined4 *)(plVar4 + 0xa1) = 0x1f;
      enter_state_send_soft_reset_e7ce0f5c9173271e56101f64bf7b44f7(plVar4);
    }
  }
  else {
    param_4 = 0xffffffffffffffea;
    *(undefined1 *)((long)plVar4 + 0x805) = 0;
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- adapter_id_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112d38 ---- */

long adapter_id_show_e7ce0f5c9173271e56101f64bf7b44f7(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%08x",(ulong)*(uint *)(*(long *)(param_1 + 0x98) + 0x808));
  return (long)iVar1;
}



/* ---- adapter_svid_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112d7c ---- */

long adapter_svid_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%04x",(ulong)*(uint *)(*(long *)(param_1 + 0x98) + 0x80c));
  return (long)iVar1;
}



/* ---- verify_process_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112dc0 ---- */

long verify_process_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%d\n",(ulong)*(byte *)(*(long *)(param_1 + 0x98) + 0x810));
  return (long)iVar1;
}



/* ---- verify_process_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112e04 ---- */

undefined8
verify_process_store_e7ce0f5c9173271e56101f64bf7b44f7
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *in_x18;
  long *plVar4;
  undefined8 unaff_x30;
  int local_2c;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x5e0);
  plVar4 = *(long **)(param_1 + 0x98);
  local_2c = 0;
  iVar2 = sscanf(param_3,"%d\n",&local_2c);
  uVar1 = usbpd_ipc_log;
  if (iVar2 == 1) {
    lVar3 = plVar4[0xe];
    *(bool *)(plVar4 + 0x102) = local_2c != 0;
    if (lVar3 == 0) {
      lVar3 = *plVar4;
    }
    ipc_log_string(uVar1,"%s: %s: batterysecret verify process :%d\n",lVar3,"verify_process_store",
                   local_2c != 0);
    _dev_info(plVar4,"batterysecret verify process :%d\n",(char)plVar4[0x102]);
  }
  else {
    param_4 = 0xffffffffffffffea;
    *(undefined1 *)(plVar4 + 0x102) = 0;
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- adapter_version_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112ee8 ---- */

long adapter_version_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  iVar1 = snprintf(param_3,0x1000,"%08x",(ulong)*(uint *)(*(long *)(param_1 + 0x98) + 0x818));
  return (long)iVar1;
}



/* ---- request_vdm_cmd_show.e7ce0f5c9173271e56101f64bf7b44f7 @ 00112f2c ---- */

long request_vdm_cmd_show_e7ce0f5c9173271e56101f64bf7b44f7
               (long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x18;
  long *plVar3;
  undefined8 unaff_x30;
  char local_c8 [128];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  plVar3 = *(long **)(param_1 + 0x98);
  local_c8[0x70] = '\0';
  local_c8[0x71] = '\0';
  local_c8[0x72] = '\0';
  local_c8[0x73] = '\0';
  local_c8[0x74] = '\0';
  local_c8[0x75] = '\0';
  local_c8[0x76] = '\0';
  local_c8[0x77] = '\0';
  local_c8[0x78] = '\0';
  local_c8[0x79] = '\0';
  local_c8[0x7a] = '\0';
  local_c8[0x7b] = '\0';
  local_c8[0x7c] = '\0';
  local_c8[0x7d] = '\0';
  local_c8[0x7e] = '\0';
  local_c8[0x7f] = '\0';
  local_c8[0x60] = '\0';
  local_c8[0x61] = '\0';
  local_c8[0x62] = '\0';
  local_c8[99] = '\0';
  local_c8[100] = '\0';
  local_c8[0x65] = '\0';
  local_c8[0x66] = '\0';
  local_c8[0x67] = '\0';
  local_c8[0x68] = '\0';
  local_c8[0x69] = '\0';
  local_c8[0x6a] = '\0';
  local_c8[0x6b] = '\0';
  local_c8[0x6c] = '\0';
  local_c8[0x6d] = '\0';
  local_c8[0x6e] = '\0';
  local_c8[0x6f] = '\0';
  local_c8[0x50] = '\0';
  local_c8[0x51] = '\0';
  local_c8[0x52] = '\0';
  local_c8[0x53] = '\0';
  local_c8[0x54] = '\0';
  local_c8[0x55] = '\0';
  local_c8[0x56] = '\0';
  local_c8[0x57] = '\0';
  local_c8[0x58] = '\0';
  local_c8[0x59] = '\0';
  local_c8[0x5a] = '\0';
  local_c8[0x5b] = '\0';
  local_c8[0x5c] = '\0';
  local_c8[0x5d] = '\0';
  local_c8[0x5e] = '\0';
  local_c8[0x5f] = '\0';
  iVar1 = *(int *)((long)plVar3 + 0x814);
  local_c8[0x40] = '\0';
  local_c8[0x41] = '\0';
  local_c8[0x42] = '\0';
  local_c8[0x43] = '\0';
  local_c8[0x44] = '\0';
  local_c8[0x45] = '\0';
  local_c8[0x46] = '\0';
  local_c8[0x47] = '\0';
  local_c8[0x48] = '\0';
  local_c8[0x49] = '\0';
  local_c8[0x4a] = '\0';
  local_c8[0x4b] = '\0';
  local_c8[0x4c] = '\0';
  local_c8[0x4d] = '\0';
  local_c8[0x4e] = '\0';
  local_c8[0x4f] = '\0';
  local_c8[0x30] = '\0';
  local_c8[0x31] = '\0';
  local_c8[0x32] = '\0';
  local_c8[0x33] = '\0';
  local_c8[0x34] = '\0';
  local_c8[0x35] = '\0';
  local_c8[0x36] = '\0';
  local_c8[0x37] = '\0';
  local_c8[0x38] = '\0';
  local_c8[0x39] = '\0';
  local_c8[0x3a] = '\0';
  local_c8[0x3b] = '\0';
  local_c8[0x3c] = '\0';
  local_c8[0x3d] = '\0';
  local_c8[0x3e] = '\0';
  local_c8[0x3f] = '\0';
  local_c8[0x20] = '\0';
  local_c8[0x21] = '\0';
  local_c8[0x22] = '\0';
  local_c8[0x23] = '\0';
  local_c8[0x24] = '\0';
  local_c8[0x25] = '\0';
  local_c8[0x26] = '\0';
  local_c8[0x27] = '\0';
  local_c8[0x28] = '\0';
  local_c8[0x29] = '\0';
  local_c8[0x2a] = '\0';
  local_c8[0x2b] = '\0';
  local_c8[0x2c] = '\0';
  local_c8[0x2d] = '\0';
  local_c8[0x2e] = '\0';
  local_c8[0x2f] = '\0';
  local_c8[0x10] = '\0';
  local_c8[0x11] = '\0';
  local_c8[0x12] = '\0';
  local_c8[0x13] = '\0';
  local_c8[0x14] = '\0';
  local_c8[0x15] = '\0';
  local_c8[0x16] = '\0';
  local_c8[0x17] = '\0';
  local_c8[0x18] = '\0';
  local_c8[0x19] = '\0';
  local_c8[0x1a] = '\0';
  local_c8[0x1b] = '\0';
  local_c8[0x1c] = '\0';
  local_c8[0x1d] = '\0';
  local_c8[0x1e] = '\0';
  local_c8[0x1f] = '\0';
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_c8[8] = '\0';
  local_c8[9] = '\0';
  local_c8[10] = '\0';
  local_c8[0xb] = '\0';
  local_c8[0xc] = '\0';
  local_c8[0xd] = '\0';
  local_c8[0xe] = '\0';
  local_c8[0xf] = '\0';
  switch(iVar1) {
  case 0:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
    iVar1 = snprintf(param_3,0x1000,"%d,Null",iVar1);
    break;
  case 1:
    iVar1 = snprintf(param_3,0x1000,"%d,%x",1,*(uint *)(plVar3 + 0x103));
    break;
  case 2:
    iVar1 = snprintf(param_3,0x1000,"%d,%d",2,(int)plVar3[0x104]);
    break;
  case 3:
    iVar1 = snprintf(param_3,0x1000,"%d,%d",3,*(int *)((long)plVar3 + 0x81c));
    break;
  case 5:
    local_48 = 0;
    uStack_40 = 0;
    snprintf((char *)&local_48,0x10,"%08lx",plVar3[0x109]);
    strlcat(local_c8,&local_48,0x80);
    local_48 = 0;
    uStack_40 = 0;
    snprintf((char *)&local_48,0x10,"%08lx",plVar3[0x10a]);
    strlcat(local_c8,&local_48,0x80);
    local_48 = 0;
    uStack_40 = 0;
    snprintf((char *)&local_48,0x10,"%08lx",plVar3[0x10b]);
    strlcat(local_c8,&local_48,0x80);
    local_48 = 0;
    uStack_40 = 0;
    snprintf((char *)&local_48,0x10,"%08lx",plVar3[0x10c]);
    strlcat(local_c8,&local_48,0x80);
    iVar1 = 5;
    goto override_prt_113120_ea5850f3;
  default:
    lVar2 = plVar3[0xe];
    if (lVar2 == 0) {
      lVar2 = *plVar3;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: feedbak cmd:%d is not support\n",lVar2,
                   "request_vdm_cmd_show",iVar1);
    _dev_err(plVar3,"feedbak cmd:%d is not support\n",iVar1);
override_prt_113120_ea5850f3:
    iVar1 = snprintf(param_3,0x1000,"%d,%s",iVar1,local_c8);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)iVar1;
}



/* ---- request_vdm_cmd_store.e7ce0f5c9173271e56101f64bf7b44f7 @ 00113188 ---- */

undefined8
request_vdm_cmd_store_e7ce0f5c9173271e56101f64bf7b44f7
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  code *pcVar9;
  int iVar10;
  size_t sVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  char cVar18;
  byte *pbVar19;
  undefined8 *in_x18;
  long *plVar20;
  undefined8 unaff_x30;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
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
  lVar13 = sp_el0;
  local_38 = *(long *)(lVar13 + 0x5e0);
  plVar20 = *(long **)(param_1 + 0x98);
  local_9c = 0;
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
  local_90 = 0;
  sscanf(param_3,"%d,%s\n",(int *)&local_9c,(char *)&local_78);
  lVar13 = plVar20[0xe];
  if (lVar13 == 0) {
    lVar13 = *plVar20;
  }
  ipc_log_string(usbpd_ipc_log,"%s: %s: %s:cmd:%d, buffer:%s\n",lVar13,"request_vdm_cmd_store",
                 "request_vdm_cmd_store",local_9c,&local_78);
  sVar11 = strlen((char *)&local_78);
  uVar7 = local_9c;
  if ((int)sVar11 < 2) {
    if ((sVar11 & 1) != 0) {
      uVar14 = 0;
      bVar1 = (byte)local_78;
      goto LAB_001132cc;
    }
  }
  else {
    uVar14 = sVar11 >> 1 & 0x7fffffff;
    uVar16 = uVar14 - 1;
    uVar15 = 0;
    pbVar8 = (byte *)&local_78;
    if (0x1f < uVar16) {
      uVar16 = 0x20;
    }
    do {
      pbVar19 = pbVar8;
      if (uVar15 == 0x20) goto LAB_00113448;
      cVar17 = '\t';
      if (0x2c < pbVar19[1] - 0x3a) {
        cVar17 = '\0';
      }
      cVar18 = '\t';
      if (0x2c < *pbVar19 - 0x3a) {
        cVar18 = '\0';
      }
      *(byte *)((long)&local_98 + uVar15) = cVar17 + pbVar19[1] & 0xf | (cVar18 + *pbVar19) * '\x10'
      ;
      uVar15 = uVar15 + 1;
      pbVar8 = pbVar19 + 2;
    } while (uVar14 != uVar15);
    if ((sVar11 & 1) != 0) {
      if ((0x1e < uVar16) || (0x1f < uVar14)) {
LAB_00113448:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x11344c);
        (*pcVar9)();
      }
      bVar1 = pbVar19[2];
LAB_001132cc:
      cVar17 = -0x37;
      if (0x2c < bVar1 - 0x3a) {
        cVar17 = -0x30;
      }
      *(byte *)((long)&local_98 + uVar14) = cVar17 + bVar1;
    }
  }
  if (local_9c < 8) {
    uVar3 = local_9c | (uint)*(ushort *)(plVar20 + 0x10d) << 0x10 | 0x100;
    uVar2 = 1 << (ulong)(local_9c & 0x1f);
    if ((uVar2 & 0xe) == 0) {
      if ((uVar2 & 0x30) == 0) {
        if ((1 << (ulong)(local_9c & 0x1f) & 0xc0U) == 0) goto LAB_00113414;
        if ((local_9c == 7) && ((char)plVar20[0x117] != '\0')) goto LAB_001133a0;
        iVar10 = usbpd_send_vdm(plVar20,uVar3,&local_98,1);
      }
      else {
        uVar2 = ((uint)local_98 & 0xff00ff00) >> 8 | ((uint)local_98 & 0xff00ff) << 8;
        uVar4 = (local_98._4_4_ & 0xff00ff00) >> 8 | (local_98._4_4_ & 0xff00ff) << 8;
        uVar5 = ((uint)local_90 & 0xff00ff00) >> 8 | ((uint)local_90 & 0xff00ff) << 8;
        uVar6 = (local_90._4_4_ & 0xff00ff00) >> 8 | (local_90._4_4_ & 0xff00ff) << 8;
        local_98 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10);
        local_90 = CONCAT44(uVar6 >> 0x10 | uVar6 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10);
        iVar10 = usbpd_send_vdm(plVar20,uVar3,&local_98,4);
      }
    }
    else {
      iVar10 = usbpd_send_vdm(plVar20,uVar3,0,0);
    }
    if (-1 < iVar10) goto LAB_001133a0;
    lVar13 = plVar20[0xe];
    if (lVar13 == 0) {
      lVar13 = *plVar20;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: failed to send %d\n",lVar13,"usbpd_request_vdm_cmd",uVar7)
    ;
    pcVar12 = "failed to send %d\n";
  }
  else {
LAB_00113414:
    lVar13 = plVar20[0xe];
    if (lVar13 == 0) {
      lVar13 = *plVar20;
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: cmd:%d is not support\n",lVar13,"usbpd_request_vdm_cmd",
                   local_9c);
    pcVar12 = "cmd:%d is not support\n";
  }
  _dev_err(plVar20,pcVar12,uVar7);
LAB_001133a0:
  lVar13 = sp_el0;
  if (*(long *)(lVar13 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* ---- usbpd_do_swap @ 00113450 ---- */

void usbpd_do_swap(long *param_1,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_4c;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_48 = *(long *)(lVar5 + 0x5e0);
  if ((int)param_1[0xa1] != 9 && (int)param_1[0xa1] != 0x14) {
    lVar5 = param_1[0xe];
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    pcVar2 = "data";
    if ((param_2 & 1) == 0) {
      pcVar2 = "power";
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s_role swap not allowed: PD not in Ready state\n",lVar5,
                   "usbpd_do_swap",pcVar2);
    _dev_err(param_1,"%s_role swap not allowed: PD not in Ready state\n",pcVar2);
    uVar4 = 0xfffffff5;
    goto LAB_001135f8;
  }
  plVar1 = param_1 + 0xe4;
  mutex_lock(plVar1);
  *(undefined4 *)(param_1 + 0xca) = 0;
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xea) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x751) = 1;
  }
  if ((int)param_1[0xa1] == 9) {
    if (*(int *)((long)param_1 + 0x644) == 1) {
      if (*(int *)((long)param_1 + 0x63c) != 2) goto LAB_00113504;
      local_4c = 0;
      iVar3 = iio_read_channel_processed(param_1[0xbc],&local_4c);
      if (iVar3 < 0) {
        lVar5 = param_1[0xe];
        if (lVar5 == 0) {
          lVar5 = *param_1;
        }
        ipc_log_string(usbpd_ipc_log,"%s: %s: failed to get IIO property: %d\n",lVar5,
                       "usbpd_get_psy_iio_property",5);
        _dev_err(param_1,"failed to get IIO property: %d\n",5);
      }
      else if (local_4c == 1) goto LAB_00113504;
    }
    start_src_ams(param_1,1);
  }
  else {
LAB_00113504:
    pm_stay_awake(param_1);
    *(undefined1 *)(param_1 + 0x9f) = 1;
    queue_work_on(0x20,param_1[0x72],param_1 + 0x73);
  }
  uVar4 = __msecs_to_jiffies(param_3);
  lVar5 = wait_for_completion_timeout(param_1 + 0xca,uVar4);
  if (lVar5 == 0) {
    lVar5 = param_1[0xe];
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    pcVar2 = "data";
    if ((param_2 & 1) == 0) {
      pcVar2 = "power";
    }
    ipc_log_string(usbpd_ipc_log,"%s: %s: %s_role swap timed out\n",lVar5,"usbpd_do_swap",pcVar2);
    _dev_err(param_1,"%s_role swap timed out\n",pcVar2);
    mutex_unlock(plVar1);
    uVar4 = 0xffffff92;
  }
  else {
    mutex_unlock(plVar1);
    uVar4 = 0;
  }
LAB_001135f8:
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- init_module @ 00113810 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  usbpd_ipc_log = ipc_log_context_create(10,"usb_pd",0);
  __class_register(&usbpd_class,&usbpd_init___key);
  return;
}



/* ---- cleanup_module @ 00113860 ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  class_unregister(&usbpd_class);
  return;
}


/* functions: 139 ok, 0 failed */
