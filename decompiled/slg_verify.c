/* Decompiled with Ghidra from slg_verify.ko (stock sapphire module) */
/* ===== STRINGS ===== */
// [.rodata] 6index = %d

// [.rodata] 3%s ecc verify fail: %d

// [.rodata] 3%s enter

// [.rodata] ecdsa_verify
// [.rodata] [slg] slg reset failed, poweroff slg and retry again

// [.rodata] <%s>: map gpio-66 cfg register failed
// [.rodata] slg_authenticate_battery
// [.rodata] second_supplier
// [.rodata] 3%s step 1 failed: %d

// [.rodata] slg_get_chip_ok
// [.rodata] slg_check_chip_ok
// [.rodata] 6%s slg device detected

// [.rodata] /home/work/mnt/miui_codes1/build_home_rom-odm-merged/kernel_platform/msm-kernel/drivers/power/supply/battery_secret/slglib/uECC.c
// [.rodata] 6w1 data: %s

// [.rodata] 3%s %d read page 0 failed: %d

// [.rodata] 3%s alloc mem fail

// [.rodata] 3w1_reset_select_slave failed

// [.rodata] [slg] command send failed retry %d

// [.rodata] slg_get_batt_id
// [.rodata] 6w1 recv success

// [.rodata] 3%s %d failed: %d

// [.rodata] 6%s g_info->probe_done is %d 

// [.rodata] slg_init
// [.rodata] slg_exit
// [.rodata] 6%s %d battery authenticate begin

// [.rodata] slg_start_auth_battery
// [.rodata] 6%s romid[%d]: 0x%02x

// [.rodata] 3%s slg device not found

// [.rodata] 3%s %d battery authenticate success

// [.rodata] slg_probe_done
// [.rodata] auth_name
// [.rodata] 3%s can not find auth name(%d), use default name

// [.rodata] &slg_wait
// [.rodata] 3%s step 2 failed: %d

// [.rodata] 3%s %d decrease counter decrease failed: %d

// [.rodata] 3%s battery_id is %d 

// [.rodata] 6w1 recv data:

// [.rodata] 6w1 recv crc %X, clac crc: %X

// [.rodata] 6%s chip ok 

// [.rodata] 3%s g_info->romid_verified = %d

// [.rodata] 6%s enter

// [.rodata] 3%s sha256 message fail: %d

// [.rodata] main_suppiler
// [.rodata] 3can't alloc alg %s

// [.rodata] 3slg probe successfully!

// [.rodata] 6%s auth_battery 

// [.rodata] sha256-generic
// [.rodata] slg_probe
// [.rodata] 6w1 send data:

// [.rodata] 6w1 read length data: %02X

// [.rodata] 3%s romid[%d]: 0x%02x

// [.rodata] 3%s manid[%d]: 0x%02x

// [.rodata] 3slg device detect skip
// [.rodata] 3%s failed to register auth device

// [.rodata] 6%s batt_id is %d 

// [.rodata] Dis_ECDSADisDevice
// [.rodata] 'void (unsigned long long *, const unsigned long long *, const struct uECC_Curve_t *)'
// [.rodata] 'void (unsigned long long *, const struct uECC_Curve_t *)'
// [.rodata] 'void (unsigned long long *, unsigned long long *, unsigned long long *, const struct uECC_Curve_t *)'
// [.rodata] 'int (unsigned char *, unsigned int)'
// [.rodata] 'void (const struct uECC_HashContext *)'
// [.rodata] 'void (const struct uECC_HashContext *, const unsigned char *, unsigned int)'
// [.rodata] 'void (const struct uECC_HashContext *, unsigned char *)'
// [.rodata] 'void (unsigned long long *, unsigned long long *)'
// [.modinfo] license=GPL
// [.modinfo] vermagic=5.15.94 SMP preempt mod_unload modversions aarch64
// [.modinfo] name=slg_verify
// [.modinfo] intree=Y
// [.modinfo] depends=battery_auth_class
// [.modinfo] scmversion=gaf44d52a5e5f
// [.gnu.linkonce.this_module] slg_verify
// [__versions] module_layout
// [__versions] memmove
// [__versions] __stack_chk_fail
// [__versions] memset
// [__versions] __cfi_slowpath_diag
// [__versions] arm64_use_ng_mappings
// [__versions] __ubsan_handle_cfi_check_fail_abort
// [__versions] platform_driver_unregister
// [__versions] devm_kmalloc
// [__versions] auth_device_register
// [__versions] __init_waitqueue_head
// [__versions] __ioremap
// [__versions] of_property_read_string
// [__versions] of_device_is_available
// [__versions] get_batt_auth_by_name
// [__versions] __platform_driver_register
// [__versions] crypto_destroy_tfm
// [__versions] __kmalloc
// [__versions] crypto_shash_digest
// [__versions] crypto_alloc_shash
// [__versions] get_random_bytes
// [__versions] _raw_spin_unlock_irqrestore
// [__versions] ktime_get_with_offset
// [__versions] _raw_spin_lock_irqsave
// [__versions] mutex_unlock
// [__versions] finish_wait
// [__versions] schedule_timeout
// [__versions] prepare_to_wait_event
// [__versions] init_wait_entry
// [__versions] __const_udelay
// [__versions] mutex_lock
// [__versions] crc16
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
// [.shstrtab] .rela.data.slg_auth_ops
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
// [.shstrtab] .rela.rodata.curve_secp160r1
// [.strtab] apply_z
// [.strtab] init_wait_entry
// [.strtab] slg_start_auth_battery
// [.strtab] memcpy
// [.strtab] ecdsa_verify
// [.strtab] uECC_verify
// [.strtab] uECC_make_key
// [.strtab] EccPoint_compute_public_key
// [.strtab] uECC_compute_public_key
// [.strtab] uECC_valid_public_key
// [.strtab] slg_probe.__key
// [.strtab] __const_udelay
// [.strtab] printf_hex
// [.strtab] uECC_vli_modInv
// [.strtab] bus_send_recv
// [.strtab] gpio_66_inout
// [.strtab] schedule_timeout
// [.strtab] crypto_shash_digest
// [.strtab] __ubsan_handle_cfi_check_fail_abort
// [.strtab] uECC_generate_random_int
// [.strtab] bits2int
// [.strtab] prepare_to_wait_event
// [.strtab] EccPoint_mult
// [.strtab] uECC_vli_mult
// [.strtab] mod_sqrt_default
// [.strtab] double_jacobian_default
// [.strtab] x_side_default
// [.strtab] uECC_vli_modMult
// [.strtab] init_module.cfi_jt
// [.strtab] cleanup_module.cfi_jt
// [.strtab] mod_sqrt_default.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] double_jacobian_default.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] x_side_default.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] default_RNG.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] vli_mmod_fast_secp256r1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] vli_mmod_fast_secp224r1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] mod_sqrt_secp224r1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] vli_mmod_fast_secp192r1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] vli_mmod_fast_secp160r1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] vli_mmod_fast_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] double_jacobian_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] x_side_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd.cfi_jt
// [.strtab] slg_start_auth_battery.69220b9f8017c1e335a28c3174a90c8c.cfi_jt
// [.strtab] slg_get_chip_ok.69220b9f8017c1e335a28c3174a90c8c.cfi_jt
// [.strtab] slg_remove.69220b9f8017c1e335a28c3174a90c8c.cfi_jt
// [.strtab] slg_probe_done.69220b9f8017c1e335a28c3174a90c8c.cfi_jt
// [.strtab] slg_probe.69220b9f8017c1e335a28c3174a90c8c.cfi_jt
// [.strtab] slg_get_batt_id.69220b9f8017c1e335a28c3174a90c8c.cfi_jt
// [.strtab] finish_wait
// [.strtab] slg_wait
// [.strtab] cmd_need_wait
// [.strtab] memset
// [.strtab] ktime_get_with_offset
// [.strtab] uECC_shared_secret
// [.strtab] slg_manid_get
// [.strtab] slg_romid_get
// [.strtab] slg_dc_get
// [.strtab] uECC_decompress
// [.strtab] uECC_compress
// [.strtab] mod_sqrt_secp224r1_rs
// [.strtab] slg_auth_ops
// [.strtab] ____versions
// [.strtab] arm64_use_ng_mappings
// [.strtab] get_random_bytes
// [.strtab] slg_of_ids
// [.strtab] _dev_err
// [.strtab] slg_driver
// [.strtab] platform_driver_unregister
// [.strtab] __platform_driver_register
// [.strtab] auth_device_register
// [.strtab] __typeid__ZTSFvPyPK12uECC_Curve_tE_global_addr
// [.strtab] __typeid__ZTSFvPyPKyPK12uECC_Curve_tE_global_addr
// [.strtab] __typeid__ZTSFvPyS_S_PK12uECC_Curve_tE_global_addr
// [.strtab] __typeid__ZTSFiPhjE_global_addr
// [.strtab] __typeid__ZTSFvPyS_E_global_addr
// [.strtab] msleep
// [.strtab] __ioremap
// [.strtab] g_info
// [.strtab] g_rng_function
// [.strtab] slg_ecdsa_sign
// [.strtab] uECC_sign
// [.strtab] crypto_destroy_tfm
// [.strtab] slg_chip_kill
// [.strtab] __stack_chk_fail
// [.strtab] __cfi_check_fail
// [.strtab] uECC_sign_with_k_internal
// [.strtab] _printk
// [.strtab] slg_get_chip_ok
// [.strtab] slg_check_chip_ok
// [.strtab] mutex_unlock
// [.strtab] w1_read_block
// [.strtab] mutex_lock
// [.strtab] slg_cmd_lock
// [.strtab] w1_lock
// [.strtab] __cfi_check
// [.strtab] uECC_sign_with_k
// [.strtab] HMAC_finish
// [.strtab] crypto_alloc_shash
// [.strtab] uECC_set_rng
// [.strtab] uECC_get_rng
// [.strtab] of_property_read_string
// [.strtab] gpio_66_cfg
// [.strtab] __cfi_slowpath_diag
// [.strtab] uECC_curve_private_key_size
// [.strtab] uECC_curve_public_key_size
// [.strtab] memmove
// [.strtab] slg_remove
// [.strtab] _raw_spin_lock_irqsave
// [.strtab] slg_dc_decrease
// [.strtab] _raw_spin_unlock_irqrestore
// [.strtab] slg_probe_done
// [.strtab] get_batt_auth_by_name
// [.strtab] __cfi_jt_init_module
// [.strtab] __this_module
// [.strtab] __cfi_jt_cleanup_module
// [.strtab] slg_ecdsa_disable
// [.strtab] of_device_is_available
// [.strtab] kfree
// [.strtab] slg_poweroff_mode
// [.strtab] slg_probe
// [.strtab] slg_get_batt_id
// [.strtab] mod_sqrt_default.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] double_jacobian_default.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] x_side_default.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] default_RNG.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] vli_mmod_fast_secp256r1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] vli_mmod_fast_secp224r1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] mod_sqrt_secp224r1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] vli_mmod_fast_secp192r1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] vli_mmod_fast_secp160r1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] vli_mmod_fast_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] double_jacobian_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] x_side_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd
// [.strtab] XYcZ_add
// [.strtab] slg_memory_read
// [.strtab] __init_waitqueue_head
// [.strtab] hex2asc
// [.strtab] devm_kmalloc
// [.strtab] __kmalloc
// [.strtab] uECC_sign_deterministic
// [.strtab] slg_start_auth_battery.69220b9f8017c1e335a28c3174a90c8c
// [.strtab] slg_get_chip_ok.69220b9f8017c1e335a28c3174a90c8c
// [.strtab] slg_remove.69220b9f8017c1e335a28c3174a90c8c
// [.strtab] slg_probe_done.69220b9f8017c1e335a28c3174a90c8c
// [.strtab] slg_probe.69220b9f8017c1e335a28c3174a90c8c
// [.strtab] slg_get_batt_id.69220b9f8017c1e335a28c3174a90c8c
// [.strtab] MI_CA_PUBLIC_Y
// [.strtab] MI_CA_PUBLIC_X
// [.strtab] update_V
// [.strtab] default_RNG
// [.strtab] XYcZ_addC
// [.strtab] _note_9
// [.strtab] $d.69
// [.strtab] __UNIQUE_ID_license359
// [.strtab] $d.59
// [.strtab] $d.49
// [.strtab] $x.39
// [.strtab] $d.39
// [.strtab] $x.29
// [.strtab] $d.29
// [.strtab] $x.19
// [.strtab] $x.9
// [.strtab] _note_8
// [.strtab] w1_write_8
// [.strtab] $d.68
// [.strtab] $d.58
// [.strtab] $d.48
// [.strtab] $x.38
// [.strtab] $d.38
// [.strtab] $x.28
// [.strtab] $d.28
// [.strtab] $x.18
// [.strtab] $x.8
// [.strtab] $d.8
// [.strtab] $d.67
// [.strtab] $d.57
// [.strtab] $d.47
// [.strtab] $x.37
// [.strtab] $d.37
// [.strtab] $x.27
// [.strtab] $x.17
// [.strtab] $x.7
// [.strtab] $d.76
// [.strtab] $d.66
// [.strtab] $d.56
// [.strtab] $d.46
// [.strtab] $x.36
// [.strtab] $d.36
// [.strtab] $x.26
// [.strtab] $d.26
// [.strtab] crc16
// [.strtab] $x.16
// [.strtab] $x.6
// [.strtab] $d.75
// [.strtab] $d.65
// [.strtab] $d.55
// [.strtab] $x.45
// [.strtab] $x.35
// [.strtab] $d.35
// [.strtab] $x.25
// [.strtab] $x.15
// [.strtab] $x.5
// [.strtab] __UNIQUE_ID_scmversion294
// [.strtab] $d.74
// [.strtab] $d.64
// [.strtab] $d.54
// [.strtab] $x.44
// [.strtab] $d.44
// [.strtab] $x.34
// [.strtab] $d.34
// [.strtab] $x.24
// [.strtab] $x.14
// [.strtab] $x.4
// [.strtab] $d.4
// [.strtab] __UNIQUE_ID_depends293
// [.strtab] $d.73
// [.strtab] $d.63
// [.strtab] $d.53
// [.strtab] $x.43
// [.strtab] $d.43
// [.strtab] $x.33
// [.strtab] $d.33
// [.strtab] $x.23
// [.strtab] $x.13
// [.strtab] $d.13
// [.strtab] $x.3
// [.strtab] $d.3
// [.strtab] __UNIQUE_ID_intree292
// [.strtab] $d.82
// [.strtab] $d.72
// [.strtab] $d.62
// [.strtab] $d.52
// [.strtab] $x.42
// [.strtab] $d.42
// [.strtab] $x.32
// [.strtab] $d.32
// [.strtab] $x.22
// [.strtab] $x.12
// [.strtab] $d.12
// [.strtab] $x.2
// [.strtab] $d.2
// [.strtab] vli_mmod_fast_secp256r1
// [.strtab] uECC_secp256r1
// [.strtab] vli_mmod_fast_secp224r1
// [.strtab] mod_sqrt_secp224r1
// [.strtab] curve_secp224r1
// [.strtab] uECC_secp224r1
// [.strtab] vli_mmod_fast_secp192r1
// [.strtab] curve_secp192r1
// [.strtab] uECC_secp192r1
// [.strtab] vli_mmod_fast_secp160r1
// [.strtab] curve_secp160r1
// [.strtab] uECC_secp160r1
// [.strtab] vli_mmod_fast_secp256k1
// [.strtab] double_jacobian_secp256k1
// [.strtab] curve_secp256k1
// [.strtab] x_side_secp256k1
// [.strtab] uECC_secp256k1
// [.strtab] __UNIQUE_ID_name291
// [.strtab] curve_secp256r1.llvm.17794486946994679881
// [.strtab] $d.71
// [.strtab] $d.61
// [.strtab] $d.51
// [.strtab] $x.41
// [.strtab] $d.41
// [.strtab] $x.31
// [.strtab] $d.31
// [.strtab] $x.21
// [.strtab] $x.11
// [.strtab] $x.1
// [.strtab] $d.1
// [.strtab] __UNIQUE_ID_vermagic290
// [.strtab] $d.70
// [.strtab] $d.60
// [.strtab] $d.50
// [.strtab] $x.40
// [.strtab] $d.40
// [.strtab] $x.30
// [.strtab] $d.30
// [.strtab] $x.20
// [.strtab] $x.10

/* ---- hex2asc @ 001022a0 ---- */

void hex2asc(byte *param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = param_1;
  if ((param_3 & 1) != 0) {
    *param_1 = *param_2 & 0xf | 0x30;
    param_2 = param_2 + 1;
    pbVar3 = param_1 + 1;
  }
  if (1 < param_3) {
    param_3 = param_3 >> 1;
    pbVar2 = pbVar3;
    do {
      param_3 = param_3 - 1;
      *pbVar2 = *param_2 >> 4 | 0x30;
      pbVar3 = pbVar2 + 2;
      pbVar2[1] = *param_2 & 0xf | 0x30;
      pbVar2 = pbVar3;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  uVar1 = (long)pbVar3 - (long)param_1;
  if (uVar1 != 0) {
    pbVar2 = param_1;
    if ((1 < uVar1) && (param_1 <= param_1 + (long)(pbVar3 + ~(ulong)param_1))) {
      uVar4 = uVar1 & 0xfffffffffffffffe;
      pbVar2 = param_1 + uVar4;
      param_1 = param_1 + 1;
      uVar5 = uVar4;
      do {
        if (0x39 < param_1[-1]) {
          param_1[-1] = param_1[-1] + 7;
        }
        if (0x39 < *param_1) {
          *param_1 = *param_1 + 7;
        }
        param_1 = param_1 + 2;
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
      if (uVar1 == uVar4) {
        return;
      }
    }
    do {
      if (0x39 < *pbVar2) {
        *pbVar2 = *pbVar2 + 7;
      }
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != pbVar3);
  }
  return;
}



/* ---- printf_hex @ 001023c4 ---- */

/* WARNING: Removing unreachable block (ram,0x00102500) */

void printf_hex(byte *param_1,uint param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  byte local_438 [1024];
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar7 = sp_el0;
  local_38 = *(long *)(lVar7 + 0x5e0);
  if (param_2 != 0) {
    if (0x1ff < param_2) {
      param_2 = 0x200;
    }
    memset(local_438,0,0x400);
    lVar7 = 0;
    do {
      lVar3 = lVar7;
      bVar1 = *param_1;
      lVar7 = lVar3 + 2;
      local_438[lVar3 + 1] = bVar1 & 0xf | 0x30;
      local_438[lVar3] = bVar1 >> 4 | 0x30;
      param_1 = param_1 + 1;
    } while (param_2 * 2 != (int)lVar7);
    if (lVar7 != 0) {
      pbVar4 = local_438;
      if ((lVar3 + 1U < 2) || (local_438 + lVar3 + 1 < pbVar4)) {
        lVar5 = 0;
      }
      else {
        pbVar4 = local_438 + lVar3;
        pbVar6 = (byte *)((ulong)local_438 | 1);
        lVar7 = 2 - lVar7;
        do {
          if (0x39 < pbVar6[-1]) {
            pbVar6[-1] = pbVar6[-1] + 7;
          }
          if (0x39 < *pbVar6) {
            *pbVar6 = *pbVar6 + 7;
          }
          pbVar6 = pbVar6 + 2;
          lVar7 = lVar7 + 2;
          lVar5 = lVar3;
        } while (lVar7 != 0);
      }
      lVar5 = lVar5 + -0x400;
      do {
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102558);
          (*pcVar2)();
        }
        if (0x39 < *pbVar4) {
          *pbVar4 = *pbVar4 + 7;
        }
        pbVar4 = pbVar4 + 1;
        lVar5 = lVar5 + 1;
      } while (local_438 + lVar3 + 2 != pbVar4);
    }
    _printk("<6>w1 data: %s\n",local_438);
  }
  lVar7 = sp_el0;
  if (*(long *)(lVar7 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- slg_memory_read @ 0010255c ---- */

void slg_memory_read(undefined4 param_1,void *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_84;
  undefined8 local_80;
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
  local_80 = 0x1ca;
  local_84 = 0;
  cmd_need_wait = 10;
  *param_3 = 0;
  _printk("<6>index = %d\n",param_1);
  local_80._0_3_ = CONCAT12((char)param_1,(undefined2)local_80);
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  uVar3 = bus_send_recv(&local_80,3,&local_78,&local_84);
  if ((int)uVar3 == 0) {
    if ((byte)local_78 == 0xaa) {
      iVar1 = local_84 + -1;
      memcpy(param_2,(void *)((ulong)&local_78 | 1),(long)iVar1);
      uVar3 = 0;
      *param_3 = iVar1;
    }
    else {
      uVar3 = (ulong)-(uint)(byte)local_78;
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- bus_send_recv @ 00102658 ---- */

/* WARNING: Removing unreachable block (ram,0x00102d58) */

undefined4 bus_send_recv(void *param_1,uint param_2,void *param_3,uint *param_4)

{
  size_t __n;
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *in_x18;
  int iVar16;
  ulong uVar17;
  size_t __n_00;
  long lVar18;
  undefined8 unaff_x30;
  byte local_870 [512];
  byte local_670 [512];
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  long local_70;
  
  *in_x18 = unaff_x30;
  lVar18 = sp_el0;
  local_70 = *(long *)(lVar18 + 0x5e0);
  memset(local_670,0,0x200);
  if ((int)param_2 < 0x1f5) {
    memset(local_870,0,0x200);
    __n_00 = (size_t)(int)param_2;
    __n = 0;
    if (param_2 < 0x200) {
      __n = 0x200 - __n_00;
    }
    memset(local_670 + __n_00,0,__n);
    memcpy(local_670,param_1,__n_00);
    uVar6 = crc16(0,local_670,__n_00);
    if (0x1ff < param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x102e64);
      (*pcVar3)();
    }
    local_670[__n_00] = (byte)(~uVar6 >> 8);
    local_670[(ulong)param_2 + 1] = (byte)~uVar6;
    mutex_lock(&slg_cmd_lock);
    pbVar7 = (byte *)((ulong)&local_470 | 1);
    iVar16 = 10;
LAB_00102778:
    bVar4 = true;
    while( true ) {
      *gpio_66_cfg = 0x3c0;
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      __const_udelay(0x4966a);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_cfg = 0x1c0;
      iVar8 = 100;
      do {
        if ((*gpio_66_inout & 1) == 0) goto LAB_0010295c;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      __const_udelay(0x10c7);
      msleep(2);
      *gpio_66_cfg = 0x3c0;
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      __const_udelay(0x4966a);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_cfg = 0x1c0;
      iVar8 = 100;
      do {
        if ((*gpio_66_inout & 1) == 0) goto LAB_0010295c;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      __const_udelay(0x10c7);
      msleep(2);
      *gpio_66_cfg = 0x3c0;
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      __const_udelay(0x4966a);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_cfg = 0x1c0;
      iVar8 = 100;
      do {
        if ((*gpio_66_inout & 1) == 0) goto LAB_0010295c;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      __const_udelay(0x10c7);
      if (!bVar4) break;
      _printk("[slg] slg reset failed, poweroff slg and retry again\n");
      *gpio_66_cfg = 0x3c0;
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      msleep(0x1e);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      msleep(10);
      bVar4 = false;
    }
    _printk("<3>w1_reset_select_slave failed\n");
    bVar4 = false;
    bVar1 = 0;
    uVar11 = 0xffffff37;
    goto LAB_00102ab0;
  }
  uVar11 = 0xffffff35;
LAB_00102e18:
  lVar18 = sp_el0;
  if (*(long *)(lVar18 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
LAB_0010295c:
  __const_udelay(0x10c7);
  iVar8 = 200;
  *gpio_66_cfg = 0x1c0;
  do {
    if ((*gpio_66_inout & 1) != 0) break;
    __const_udelay(0x10c7);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  w1_write_8(0xcc);
  uVar17 = 0;
  do {
    if (uVar17 == 0x200) goto LAB_00102e58;
    w1_write_8(local_670[uVar17]);
    uVar17 = uVar17 + 1;
  } while (param_2 + 2 != uVar17);
  uVar17 = (ulong)cmd_need_wait;
  if (cmd_need_wait != 0) {
    do {
      uVar17 = uVar17 - 1;
      __const_udelay(0x418958);
    } while (uVar17 != 0);
  }
  memset(local_870,0,0x200);
  w1_read_block(local_870,1);
  uVar6 = 0;
  if (local_870[0] < 0xc9) {
    uVar6 = (uint)local_870[0];
    w1_read_block((void *)((ulong)local_870 | 1),uVar6 + 2);
  }
  _printk("<6>w1 send data:\n");
  memset(&local_470,0,0x400);
  lVar18 = 0;
  uVar17 = 1;
  pbVar10 = local_670;
  do {
    uVar9 = uVar17;
    lVar12 = lVar18;
    if (lVar12 == 0x400) goto LAB_00102e58;
    bVar1 = *pbVar10;
    *(byte *)((long)&local_470 + lVar12) = bVar1 >> 4 | 0x30;
    lVar18 = lVar12 + 2;
    local_670[lVar12 + 0x201] = bVar1 & 0xf | 0x30;
    uVar17 = uVar9 + 2;
    pbVar10 = pbVar10 + 1;
  } while ((ulong)(param_2 + 2) * 2 != lVar18);
  if (lVar18 == 0) goto LAB_00102a80;
  uVar13 = lVar12 + 1;
  pbVar10 = (byte *)&local_470;
  uVar17 = uVar13;
  if (0x3ff < uVar13) {
    uVar17 = 0x400;
  }
  if (uVar17 < 2) {
LAB_00102b78:
    lVar12 = 0;
  }
  else {
    if (0x3ff < uVar13) {
      uVar13 = 0x400;
    }
    if (pbVar10 + uVar13 < pbVar10) goto LAB_00102b78;
    uVar17 = uVar17 + 1;
    uVar13 = 2;
    if ((uVar17 & 1) != 0) {
      uVar13 = uVar17 & 1;
    }
    if (0x3ff < uVar9) {
      uVar9 = 0x400;
    }
    lVar12 = uVar17 - uVar13;
    pbVar10 = (byte *)((long)&local_470 + lVar12);
    lVar15 = (uVar9 - uVar13) + 1;
    pbVar14 = pbVar7;
    do {
      if (0x39 < pbVar14[-1]) {
        pbVar14[-1] = pbVar14[-1] + 7;
      }
      if (0x39 < *pbVar14) {
        *pbVar14 = *pbVar14 + 7;
      }
      pbVar14 = pbVar14 + 2;
      lVar15 = lVar15 + -2;
    } while (lVar15 != 0);
  }
  lVar12 = lVar12 + -0x400;
  do {
    if (lVar12 == 0) goto LAB_00102e58;
    if (0x39 < *pbVar10) {
      *pbVar10 = *pbVar10 + 7;
    }
    pbVar10 = pbVar10 + 1;
    lVar12 = lVar12 + 1;
  } while (pbVar10 != (byte *)((long)&local_470 + lVar18));
LAB_00102a80:
  _printk("<6>w1 data: %s\n",&local_470);
  _printk("<6>w1 read length data: %02X\n",local_870[0]);
  if (uVar6 == 0) {
    bVar4 = false;
    uVar11 = 0xffffff33;
    bVar1 = 1;
  }
  else {
    _printk("<6>w1 recv data:\n");
    memset(&local_470,0,0x400);
    uVar17 = (ulong)uVar6;
    lVar18 = 0;
    pbVar10 = local_870;
    do {
      lVar12 = lVar18;
      bVar1 = *pbVar10;
      lVar18 = lVar12 + 2;
      local_670[lVar12 + 0x201] = bVar1 & 0xf | 0x30;
      *(byte *)((long)&local_470 + lVar12) = bVar1 >> 4 | 0x30;
      pbVar10 = pbVar10 + 1;
    } while (uVar6 * 2 + 6 != (int)lVar18);
    if (lVar18 != 0) {
      pbVar10 = (byte *)&local_470;
      if ((lVar12 + 1U < 2) || (local_670 + lVar12 + 0x201 < pbVar10)) {
        lVar12 = 0;
      }
      else {
        pbVar10 = local_670 + lVar12 + 0x200;
        lVar15 = 0;
        pbVar14 = pbVar7;
        do {
          if (0x39 < pbVar14[-1]) {
            pbVar14[-1] = pbVar14[-1] + 7;
          }
          if (0x39 < *pbVar14) {
            *pbVar14 = *pbVar14 + 7;
          }
          pbVar14 = pbVar14 + 2;
          lVar15 = lVar15 + 2;
        } while (lVar12 != lVar15);
      }
      lVar12 = lVar12 + -0x400;
      do {
        if (lVar12 == 0) {
LAB_00102e58:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e5c);
          (*pcVar3)();
        }
        if (0x39 < *pbVar10) {
          *pbVar10 = *pbVar10 + 7;
        }
        pbVar10 = pbVar10 + 1;
        lVar12 = lVar12 + 1;
      } while (pbVar10 != (byte *)((long)&local_470 + lVar18));
    }
    _printk("<6>w1 data: %s\n",&local_470);
    uVar5 = crc16(0,local_870,uVar17 + 1);
    bVar1 = local_870[uVar17 + 1];
    bVar2 = local_870[uVar17 + 2];
    _printk("<6>w1 recv crc %X, clac crc: %X\n",CONCAT11(bVar1,bVar2),~uVar5);
    if (CONCAT11(bVar1,bVar2) == (ushort)~uVar5) {
      _printk("<6>w1 recv success\n");
      memcpy(param_3,(void *)((ulong)local_870 | 1),uVar17);
      bVar1 = 0;
      bVar4 = local_870[1] == '\"';
      uVar11 = 0xffffff34;
      if (!bVar4) {
        uVar11 = 0;
      }
      *param_4 = uVar6;
    }
    else {
      bVar1 = 0;
      uVar11 = 0xffffff34;
      bVar4 = true;
    }
  }
LAB_00102ab0:
  if ((!(bool)(bVar4 | bVar1)) || (iVar16 == 0)) goto LAB_00102e0c;
  _printk("[slg] command send failed retry %d\n",0xb - iVar16);
  local_450 = 0;
  local_458 = 0;
  local_460 = 0;
  local_468 = 0;
  local_470 = 0;
  init_wait_entry(&local_470,0);
  prepare_to_wait_event(&slg_wait,&local_470,2);
  lVar18 = 0x19;
  do {
    lVar18 = schedule_timeout(lVar18);
    prepare_to_wait_event(&slg_wait,&local_470,2);
  } while (lVar18 != 0);
  finish_wait(&slg_wait,&local_470);
  iVar16 = iVar16 + -1;
  goto LAB_00102778;
LAB_00102e0c:
  mutex_unlock(&slg_cmd_lock);
  goto LAB_00102e18;
}



/* ---- slg_ecdsa_sign @ 00102e64 ---- */

void slg_ecdsa_sign(void *param_1,int param_2,void *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  int local_13c;
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
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x5e0);
  local_48 = 0;
  uStack_40 = 0;
  cmd_need_wait = 0x50;
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
  uStack_b0 = 0;
  local_13c = 0;
  *param_4 = 0;
  local_b8 = (ulong)CONCAT11((char)param_2,0x2a);
  memcpy((void *)((ulong)&local_b8 | 2),param_1,(long)param_2);
  local_138 = 0xffffffffffffffff;
  uStack_130 = 0xffffffffffffffff;
  local_128 = 0xffffffffffffffff;
  uStack_120 = 0xffffffffffffffff;
  local_118 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  local_108 = 0xffffffffffffffff;
  uStack_100 = 0xffffffffffffffff;
  local_f8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffffffffffff;
  uStack_e0 = 0xffffffffffffffff;
  local_d8 = 0xffffffffffffffff;
  uStack_d0 = 0xffffffffffffffff;
  local_c8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffffffffffff;
  uVar3 = bus_send_recv(&local_b8,param_2 + 2,&local_138,&local_13c);
  if ((int)uVar3 == 0) {
    if ((byte)local_138 == 0xaa) {
      iVar1 = local_13c + -1;
      memcpy(param_3,(void *)((ulong)&local_138 | 1),(long)iVar1);
      uVar3 = 0;
      *param_4 = iVar1;
    }
    else {
      uVar3 = (ulong)-(uint)(byte)local_138;
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- slg_dc_get @ 00102f94 ---- */

void slg_dc_get(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 auStack_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar2 = sp_el0;
  local_18 = *(long *)(lVar2 + 0x5e0);
  local_28 = 0xffffffffffffffff;
  uStack_20 = 0xc0;
  cmd_need_wait = 10;
  uVar3 = bus_send_recv(&uStack_20,2,&local_28,auStack_2c);
  if ((int)uVar3 == 0) {
    if ((byte)local_28 == 0xaa) {
      uVar1 = (local_28._1_4_ & 0xff00ff00) >> 8 | (local_28._1_4_ & 0xff00ff) << 8;
      uVar3 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    }
    else {
      uVar3 = (ulong)-(uint)(byte)local_28;
    }
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ---- slg_dc_decrease @ 0010302c ---- */

void slg_dc_decrease(void)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 auStack_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  local_28 = 0xffffffffffffffff;
  uStack_20 = 0x24;
  cmd_need_wait = 10;
  iVar2 = bus_send_recv(&uStack_20,2,&local_28,auStack_2c);
  lVar1 = sp_el0;
  if ((byte)local_28 != 0xaa && iVar2 == 0) {
    iVar2 = -(uint)(byte)local_28;
  }
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ---- slg_romid_get @ 001030b4 ---- */

void slg_romid_get(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  byte local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  cmd_need_wait = 10;
  *param_2 = 0;
  local_6c = 0xb2;
  local_68 = 0xff;
  uStack_67 = 0xffffffffffffff;
  uStack_60 = 0xff;
  uStack_5f = 0xffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  uVar2 = bus_send_recv(&local_6c,2,&local_68,auStack_70);
  if ((int)uVar2 == 0) {
    if (local_68 == 0xaa) {
      uVar2 = 0;
      *param_1 = CONCAT17(uStack_60,uStack_67);
      *param_2 = 8;
    }
    else {
      uVar2 = (ulong)-(uint)local_68;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- slg_manid_get @ 0010317c ---- */

void slg_manid_get(undefined2 *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
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
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x5e0);
  cmd_need_wait = 10;
  *param_2 = 0;
  local_6c = 0xb2;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  uVar2 = bus_send_recv(&local_6c,2,&local_68,auStack_70);
  if ((int)uVar2 == 0) {
    if ((byte)local_68 == 0xaa) {
      uVar2 = 0;
      *param_1 = uStack_60._1_2_;
      *param_2 = 2;
    }
    else {
      uVar2 = (ulong)-(uint)(byte)local_68;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ---- slg_poweroff_mode @ 00103244 ---- */

void slg_poweroff_mode(void)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 auStack_64 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  cmd_need_wait = 10;
  local_60 = 0xa55a0258;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0xffffffffffffffff;
  local_40 = 0xffffffffffffffff;
  uStack_38 = 0xffffffffffffffff;
  local_30 = 0xffffffffffffffff;
  uStack_28 = 0xffffffffffffffff;
  local_20 = 0xffffffffffffffff;
  iVar2 = bus_send_recv(&local_60,4,&local_58,auStack_64);
  lVar1 = sp_el0;
  if ((byte)local_58 != 0xaa && iVar2 == 0) {
    iVar2 = -(uint)(byte)local_58;
  }
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ---- slg_ecdsa_disable @ 001032e0 ---- */

void slg_ecdsa_disable(void)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 auStack_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  cmd_need_wait = 10;
  uStack_4d = 0;
  uStack_48 = 0;
  local_58 = 0x9fc;
  uStack_4e = 0x41;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_56 = 0x43455f736944;
  local_50 = 0x5344;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  iVar2 = bus_send_recv(&local_58,0xb,&local_98,auStack_9c);
  lVar1 = sp_el0;
  if ((byte)local_98 != 0xaa && iVar2 == 0) {
    iVar2 = -(uint)(byte)local_98;
  }
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ---- slg_chip_kill @ 001033a0 ---- */

void slg_chip_kill(void)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined1 auStack_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x5e0);
  cmd_need_wait = 10;
  uStack_4d = 0;
  uStack_48 = 0;
  local_58 = 0x9fe;
  uStack_4e = 0x65;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_56 = 0x766544736944;
  local_50 = 0x6369;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  iVar2 = bus_send_recv(&local_58,0xb,&local_98,auStack_9c);
  lVar1 = sp_el0;
  if ((byte)local_98 != 0xaa && iVar2 == 0) {
    iVar2 = -(uint)(byte)local_98;
  }
  if (*(long *)(lVar1 + 0x5e0) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ---- slg_start_auth_battery.69220b9f8017c1e335a28c3174a90c8c @ 00103460 ---- */

void slg_start_auth_battery_69220b9f8017c1e335a28c3174a90c8c(void)

{
  uint7 uVar1;
  uint6 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *in_x18;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined8 unaff_x30;
  ulong local_3a8;
  ulong local_3a0;
  int local_394;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  uint7 uStack_2af;
  undefined1 local_2a8;
  undefined1 uStack_2a7;
  undefined6 uStack_2a6;
  undefined1 uStack_2a0;
  undefined1 uStack_29f;
  undefined6 uStack_29e;
  undefined1 uStack_298;
  undefined1 uStack_297;
  undefined6 uStack_296;
  undefined1 local_290;
  undefined1 uStack_28f;
  undefined6 uStack_28e;
  undefined1 local_288;
  undefined1 local_287;
  undefined1 uStack_286;
  undefined5 uStack_285;
  undefined2 local_280;
  undefined1 uStack_27e;
  undefined5 uStack_27d;
  undefined2 uStack_278;
  undefined1 uStack_276;
  undefined5 uStack_275;
  undefined2 local_270;
  undefined1 uStack_26e;
  undefined5 uStack_26d;
  undefined2 uStack_268;
  undefined1 uStack_266;
  undefined5 uStack_265;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  byte local_f0;
  undefined1 uStack_ef;
  uint6 uStack_ee;
  byte local_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined5 uStack_e5;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 local_d8;
  undefined6 uStack_d6;
  undefined2 local_d0;
  undefined1 uStack_ce;
  undefined5 uStack_cd;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  *in_x18 = unaff_x30;
  lVar11 = sp_el0;
  local_70 = *(long *)(lVar11 + 0x5e0);
  _printk("<6>%s auth_battery \n","slg_start_auth_battery");
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  uStack_26e = 0;
  uStack_26d = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  uStack_265 = 0;
  local_280 = 0;
  uStack_27e = 0;
  uStack_27d = 0;
  uStack_278 = 0;
  uStack_276 = 0;
  uStack_275 = 0;
  local_290 = 0;
  uStack_28f = 0;
  uStack_28e = 0;
  local_288 = 0;
  local_287 = 0;
  uStack_286 = 0;
  uStack_285 = 0;
  uStack_2a0 = 0;
  uStack_29f = 0;
  uStack_29e = 0;
  uStack_298 = 0;
  uStack_297 = 0;
  uStack_296 = 0;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  uStack_2a6 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_390 = 0;
  uStack_388 = 0;
  _printk("<6>%s %d battery authenticate begin\n","slg_authenticate_battery",0x39a);
  local_170 = CONCAT44(local_170._4_4_,0xb2);
  cmd_need_wait = 10;
  local_f0 = 0xff;
  uStack_ef = 0xff;
  uStack_ee = 0xffffffffffff;
  local_e8 = 0xff;
  uStack_e7 = 0xff;
  uStack_e6 = 0xff;
  uStack_e5 = 0xffffffffff;
  local_e0 = 0xffff;
  uStack_de = 0xffffffffffff;
  local_d8 = 0xffff;
  uStack_d6 = 0xffffffffffff;
  local_d0 = 0xffff;
  uStack_ce = 0xff;
  uStack_cd = 0xffffffffff;
  local_c8 = 0xffffffffffffffff;
  local_c0 = 0xffffffffffffffff;
  local_b8 = 0xffffffffffffffff;
  iVar4 = bus_send_recv(&local_170,2,&local_f0,&local_394);
  bVar3 = local_e8;
  uVar2 = uStack_ee;
  uVar6 = uStack_ef;
  if (iVar4 == 0) {
    if (local_f0 == 0xaa) {
      uVar1 = CONCAT61(uStack_ee,uStack_ef);
      uVar14 = (uint)uVar1;
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",0,uVar14 & 0xff);
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",1,uVar14 >> 8 & 0xff);
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",2,uVar14 >> 0x10 & 0xff);
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",3,((ulong)uVar1 & 0xff000000) >> 0x18);
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",4,((ulong)uVar1 & 0xff00000000) >> 0x20);
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",5,((ulong)uVar1 & 0xff0000000000) >> 0x28);
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",6,(ulong)(uVar2 >> 0x28));
      _printk("<3>%s romid[%d]: 0x%02x\n","slg_authenticate_battery",7,bVar3);
      lVar11 = (ulong)bVar3 << 0x38;
      uVar16 = (ulong)uVar1 & 0xff000000000000;
      local_3a0 = (ulong)uVar1 & 0xff0000000000;
      local_3a8 = (ulong)uVar1 & 0xff00000000;
      uVar9 = (ulong)uVar1 & 0xff000000;
      uVar12 = (ulong)uVar1 & 0xff0000;
      uVar13 = (ulong)uVar1 & 0xff00;
    }
    else {
      if (local_f0 != 0) {
        iVar4 = -(uint)local_f0;
        goto LAB_0010375c;
      }
      uVar6 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar9 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      uVar16 = 0;
      lVar11 = 0;
    }
    local_170 = CONCAT44(local_170._4_4_,0xb2);
    cmd_need_wait = 10;
    local_f0 = 0xff;
    uStack_ef = 0xff;
    uStack_ee = 0xffffffffffff;
    local_e8 = 0xff;
    uStack_e7 = 0xff;
    uStack_e6 = 0xff;
    uStack_e5 = 0xffffffffff;
    local_e0 = 0xffff;
    uStack_de = 0xffffffffffff;
    local_d8 = 0xffff;
    uStack_d6 = 0xffffffffffff;
    local_d0 = 0xffff;
    uStack_ce = 0xff;
    uStack_cd = 0xffffffffff;
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffffffffffff;
    iVar4 = bus_send_recv(&local_170,2,&local_f0,&local_394);
    uVar10 = uStack_e6;
    uVar15 = uStack_e7;
    if (iVar4 == 0) {
      if (local_f0 == 0xaa) {
        _printk("<3>%s manid[%d]: 0x%02x\n","slg_authenticate_battery",0,uStack_e7);
        _printk("<3>%s manid[%d]: 0x%02x\n","slg_authenticate_battery",1,uVar10);
      }
      else {
        uVar15 = 0;
        uVar10 = 0;
        if (local_f0 != 0) {
          iVar4 = -(uint)local_f0;
          goto LAB_0010380c;
        }
      }
      local_394 = 0;
      local_170 = 0x3d01ca;
      cmd_need_wait = 10;
      _printk("<6>index = %d\n",0x3d);
      local_f0 = 0xff;
      uStack_ef = 0xff;
      uStack_ee = 0xffffffffffff;
      local_e8 = 0xff;
      uStack_e7 = 0xff;
      uStack_e6 = 0xff;
      uStack_e5 = 0xffffffffff;
      local_e0 = 0xffff;
      uStack_de = 0xffffffffffff;
      local_d8 = 0xffff;
      uStack_d6 = 0xffffffffffff;
      local_d0 = 0xffff;
      uStack_ce = 0xff;
      uStack_cd = 0xffffffffff;
      local_c8 = 0xffffffffffffffff;
      local_c0 = 0xffffffffffffffff;
      local_b8 = 0xffffffffffffffff;
      iVar4 = bus_send_recv(&local_170,3,&local_f0,&local_394);
      if (iVar4 == 0) {
        if (local_f0 == 0xaa) {
          memcpy(&local_1b0,(void *)((ulong)&local_f0 | 1),(long)(local_394 + -1));
        }
        else if (local_f0 != 0) {
          iVar4 = -(uint)local_f0;
          goto LAB_001038b4;
        }
        local_394 = 0;
        local_170 = 0x3e01ca;
        cmd_need_wait = 10;
        _printk("<6>index = %d\n",0x3e);
        local_f0 = 0xff;
        uStack_ef = 0xff;
        uStack_ee = 0xffffffffffff;
        local_e8 = 0xff;
        uStack_e7 = 0xff;
        uStack_e6 = 0xff;
        uStack_e5 = 0xffffffffff;
        local_e0 = 0xffff;
        uStack_de = 0xffffffffffff;
        local_d8 = 0xffff;
        uStack_d6 = 0xffffffffffff;
        local_d0 = 0xffff;
        uStack_ce = 0xff;
        uStack_cd = 0xffffffffff;
        local_c8 = 0xffffffffffffffff;
        local_c0 = 0xffffffffffffffff;
        local_b8 = 0xffffffffffffffff;
        iVar4 = bus_send_recv(&local_170,3,&local_f0,&local_394);
        if (iVar4 == 0) {
          if (local_f0 == 0xaa) {
            memcpy(&local_190,(void *)((ulong)&local_f0 | 1),(long)(local_394 + -1));
          }
          else if (local_f0 != 0) {
            iVar4 = -(uint)local_f0;
            goto LAB_00103958;
          }
          local_394 = 0;
          local_170 = 0x3b01ca;
          cmd_need_wait = 10;
          _printk("<6>index = %d\n",0x3b);
          local_f0 = 0xff;
          uStack_ef = 0xff;
          uStack_ee = 0xffffffffffff;
          local_e8 = 0xff;
          uStack_e7 = 0xff;
          uStack_e6 = 0xff;
          uStack_e5 = 0xffffffffff;
          local_e0 = 0xffff;
          uStack_de = 0xffffffffffff;
          local_d8 = 0xffff;
          uStack_d6 = 0xffffffffffff;
          local_d0 = 0xffff;
          uStack_ce = 0xff;
          uStack_cd = 0xffffffffff;
          local_c8 = 0xffffffffffffffff;
          local_c0 = 0xffffffffffffffff;
          local_b8 = 0xffffffffffffffff;
          iVar4 = bus_send_recv(&local_170,3,&local_f0,&local_394);
          if (iVar4 == 0) {
            if (local_f0 == 0xaa) {
              memcpy(&local_1f0,(void *)((ulong)&local_f0 | 1),(long)(local_394 + -1));
            }
            else if (local_f0 != 0) {
              iVar4 = -(uint)local_f0;
              goto LAB_00103a00;
            }
            local_394 = 0;
            local_170 = 0x3c01ca;
            cmd_need_wait = 10;
            _printk("<6>index = %d\n",0x3c);
            local_f0 = 0xff;
            uStack_ef = 0xff;
            uStack_ee = 0xffffffffffff;
            local_e8 = 0xff;
            uStack_e7 = 0xff;
            uStack_e6 = 0xff;
            uStack_e5 = 0xffffffffff;
            local_e0 = 0xffff;
            uStack_de = 0xffffffffffff;
            local_d8 = 0xffff;
            uStack_d6 = 0xffffffffffff;
            local_d0 = 0xffff;
            uStack_ce = 0xff;
            uStack_cd = 0xffffffffff;
            local_c8 = 0xffffffffffffffff;
            local_c0 = 0xffffffffffffffff;
            local_b8 = 0xffffffffffffffff;
            iVar4 = bus_send_recv(&local_170,3,&local_f0,&local_394);
            if (iVar4 == 0) {
              if (local_f0 == 0xaa) {
                memcpy(&local_1d0,(void *)((ulong)&local_f0 | 1),(long)(local_394 + -1));
              }
              else if (local_f0 != 0) {
                iVar4 = -(uint)local_f0;
                goto LAB_00103b70;
              }
              local_370 = 0x3f5a9da65f5de2c0;
              uStack_368 = 0x2477330370f26395;
              local_360 = 0x76730765b8498e3a;
              uStack_358 = 0x1241105aba9b85a2;
              local_350 = 0x288661c97cac4e2a;
              uStack_348 = 0x9d324d0934c0f15c;
              uStack_2af = (uint7)(uVar13 >> 8) | (uint7)(uVar12 >> 8) | (uint7)(uVar9 >> 8) |
                           (uint7)(local_3a8 >> 8) | (uint7)(local_3a0 >> 8) | (uint7)(uVar16 >> 8)
                           | (uint7)((ulong)lVar11 >> 8);
              uVar1 = uStack_2af;
              local_340 = 0xd85b210ba3540fa2;
              uStack_338 = 0x8ac7600c17f3f6f1;
              uStack_286 = (undefined1)local_190;
              uStack_285 = (undefined5)((ulong)local_190 >> 8);
              local_280 = (undefined2)((ulong)local_190 >> 0x30);
              uStack_27e = (undefined1)uStack_188;
              uStack_27d = (undefined5)((ulong)uStack_188 >> 8);
              uStack_278 = (undefined2)((ulong)uStack_188 >> 0x30);
              uStack_276 = (undefined1)local_180;
              uStack_275 = (undefined5)((ulong)local_180 >> 8);
              local_270 = (undefined2)((ulong)local_180 >> 0x30);
              uStack_26e = (undefined1)uStack_178;
              uStack_26d = (undefined5)((ulong)uStack_178 >> 8);
              uStack_268 = (undefined2)((ulong)uStack_178 >> 0x30);
              uStack_2a6 = (undefined6)local_1b0;
              uStack_2a0 = (undefined1)((ulong)local_1b0 >> 0x30);
              uStack_29f = (undefined1)((ulong)local_1b0 >> 0x38);
              uStack_29e = (undefined6)uStack_1a8;
              uStack_298 = (undefined1)((ulong)uStack_1a8 >> 0x30);
              uStack_297 = (undefined1)((ulong)uStack_1a8 >> 0x38);
              uStack_296 = (undefined6)local_1a0;
              local_290 = (undefined1)((ulong)local_1a0 >> 0x30);
              uStack_28f = (undefined1)((ulong)local_1a0 >> 0x38);
              uStack_28e = (undefined6)uStack_198;
              local_288 = (undefined1)((ulong)uStack_198 >> 0x30);
              local_287 = (undefined1)((ulong)uStack_198 >> 0x38);
              local_2b0 = uVar6;
              local_2a8 = uVar15;
              uStack_2a7 = uVar10;
              iVar4 = ecdsa_verify(&local_370,&local_2b0,0x4a,&local_1f0);
              if (iVar4 != 0) {
                puVar5 = "<3>%s step 1 failed: %d\n";
LAB_00103b58:
                _printk(puVar5,"slg_authenticate_battery",iVar4);
                iVar4 = 1;
                goto LAB_00103b8c;
              }
              local_170 = 0x3d01ca;
              local_394 = 0;
              cmd_need_wait = 10;
              _printk("<6>index = %d\n",0x3d);
              local_f0 = 0xff;
              uStack_ef = 0xff;
              uStack_ee = 0xffffffffffff;
              local_e8 = 0xff;
              uStack_e7 = 0xff;
              uStack_e6 = 0xff;
              uStack_e5 = 0xffffffffff;
              local_e0 = 0xffff;
              uStack_de = 0xffffffffffff;
              local_d8 = 0xffff;
              uStack_d6 = 0xffffffffffff;
              local_d0 = 0xffff;
              uStack_ce = 0xff;
              uStack_cd = 0xffffffffff;
              local_c8 = 0xffffffffffffffff;
              local_c0 = 0xffffffffffffffff;
              local_b8 = 0xffffffffffffffff;
              iVar4 = bus_send_recv(&local_170,3,&local_f0,&local_394);
              if (iVar4 == 0) {
                if (local_f0 == 0xaa) {
                  memcpy(&local_210,(void *)((ulong)&local_f0 | 1),(long)(local_394 + -1));
                }
                else if (local_f0 != 0) {
                  iVar4 = -(uint)local_f0;
                  goto LAB_00103cec;
                }
                get_random_bytes(&local_230,0x20);
                uStack_cd = 0;
                local_c8 = 0;
                local_2b0 = 0x3d;
                uStack_2af = (uint7)local_230;
                local_2a8 = (undefined1)((ulong)local_230 >> 0x38);
                uStack_2a7 = (undefined1)uStack_228;
                uStack_2a6 = (undefined6)((ulong)uStack_228 >> 8);
                uStack_2a0 = (undefined1)((ulong)uStack_228 >> 0x38);
                local_80 = 0;
                uStack_78 = 0;
                uStack_29f = (undefined1)local_220;
                uStack_29e = (undefined6)((ulong)local_220 >> 8);
                uStack_298 = (undefined1)((ulong)local_220 >> 0x38);
                uStack_297 = (undefined1)uStack_218;
                uStack_296 = (undefined6)((ulong)uStack_218 >> 8);
                local_290 = (undefined1)((ulong)uStack_218 >> 0x38);
                local_f0 = 0x2a;
                uStack_ef = 0x21;
                cmd_need_wait = 0x50;
                uStack_ce = local_290;
                local_90 = 0;
                uStack_88 = 0;
                local_a0 = 0;
                uStack_98 = 0;
                uStack_ee = (uint6)CONCAT71(uStack_2af,0x3d);
                local_e8 = (byte)((ulong)local_230 >> 0x28);
                uStack_e7 = (undefined1)((ulong)local_230 >> 0x30);
                local_b0 = 0;
                uStack_a8 = 0;
                local_c0 = 0;
                local_b8 = 0;
                local_394 = 0;
                uStack_de = (undefined6)CONCAT62(uStack_29e,CONCAT11(uStack_29f,uStack_2a0));
                local_d8 = (undefined2)((ulong)local_220 >> 0x28);
                uStack_d6 = (undefined6)CONCAT62(uStack_296,CONCAT11(uStack_297,uStack_298));
                local_d0 = (undefined2)((ulong)uStack_218 >> 0x28);
                uStack_e6 = local_2a8;
                uStack_e5 = (undefined5)(CONCAT62(uStack_2a6,CONCAT11(uStack_2a7,local_2a8)) >> 8);
                local_e0 = (undefined2)((ulong)uStack_228 >> 0x28);
                local_170 = 0xffffffffffffffff;
                uStack_168 = 0xffffffffffffffff;
                local_160 = 0xffffffffffffffff;
                uStack_158 = 0xffffffffffffffff;
                local_150 = 0xffffffffffffffff;
                uStack_148 = 0xffffffffffffffff;
                local_140 = 0xffffffffffffffff;
                uStack_138 = 0xffffffffffffffff;
                local_130 = 0xffffffffffffffff;
                local_128 = 0xffffffffffffffff;
                local_120 = 0xffffffffffffffff;
                local_118 = 0xffffffffffffffff;
                local_110 = 0xffffffffffffffff;
                local_108 = 0xffffffffffffffff;
                local_100 = 0xffffffffffffffff;
                local_f8 = 0xffffffffffffffff;
                iVar4 = bus_send_recv(&local_f0,0x23,&local_170,&local_394);
                if (iVar4 == 0) {
                  if ((byte)local_170 == 0xaa) {
                    memcpy(&local_330,(void *)((ulong)&local_170 | 1),(long)(local_394 + -1));
                  }
                  else if ((byte)local_170 != 0) {
                    iVar4 = -(uint)(byte)local_170;
                    goto LAB_00103cd0;
                  }
                  local_2a8 = (undefined1)local_210;
                  uStack_2a7 = (undefined1)((ulong)local_210 >> 8);
                  uStack_2a6 = (undefined6)((ulong)local_210 >> 0x10);
                  uStack_2a0 = (undefined1)uStack_208;
                  uStack_29f = (undefined1)((ulong)uStack_208 >> 8);
                  uStack_29e = (undefined6)((ulong)uStack_208 >> 0x10);
                  uStack_298 = (undefined1)local_200;
                  uStack_297 = (undefined1)((ulong)local_200 >> 8);
                  uStack_296 = (undefined6)((ulong)local_200 >> 0x10);
                  local_290 = (undefined1)uStack_1f8;
                  uStack_28f = (undefined1)((ulong)uStack_1f8 >> 8);
                  uStack_28e = (undefined6)((ulong)uStack_1f8 >> 0x10);
                  local_288 = 0x3d;
                  uStack_285 = (undefined5)local_230;
                  local_280 = (undefined2)((ulong)local_230 >> 0x28);
                  uStack_27e = (undefined1)((ulong)local_230 >> 0x38);
                  uStack_27d = (undefined5)uStack_228;
                  uStack_278 = (undefined2)((ulong)uStack_228 >> 0x28);
                  uStack_276 = (undefined1)((ulong)uStack_228 >> 0x38);
                  uStack_275 = (undefined5)local_220;
                  local_270 = (undefined2)((ulong)local_220 >> 0x28);
                  uStack_26e = (undefined1)((ulong)local_220 >> 0x38);
                  uStack_26d = (undefined5)uStack_218;
                  uStack_268 = (undefined2)((ulong)uStack_218 >> 0x28);
                  uStack_266 = (undefined1)((ulong)uStack_218 >> 0x38);
                  local_2b0 = uVar6;
                  uStack_2af = uVar1;
                  local_287 = uVar15;
                  uStack_286 = uVar10;
                  iVar4 = ecdsa_verify(&local_1b0,&local_2b0,0x4b,&local_330);
                  if (iVar4 != 0) {
                    puVar5 = "<3>%s step 2 failed: %d\n";
                    goto LAB_00103b58;
                  }
                  local_f0 = 0x24;
                  uStack_ef = 0;
                  uStack_ee = 0;
                  cmd_need_wait = 10;
                  local_170 = 0xffffffffffffffff;
                  iVar4 = bus_send_recv(&local_f0,2,&local_170,&local_394);
                  if ((byte)local_170 != 0xaa && iVar4 == 0) {
                    iVar4 = -(uint)(byte)local_170;
                  }
                  if (iVar4 != 0) {
                    _printk("<3>%s %d decrease counter decrease failed: %d\n","slg_authenticate_battery",0x3f1);
                    iVar4 = 1;
                    goto LAB_00103b8c;
                  }
                  local_394 = 0;
                  local_170 = 0x1ca;
                  cmd_need_wait = 10;
                  _printk("<6>index = %d\n",0);
                  local_f0 = 0xff;
                  uStack_ef = 0xff;
                  uStack_ee = 0xffffffffffff;
                  local_e8 = 0xff;
                  uStack_e7 = 0xff;
                  uStack_e6 = 0xff;
                  uStack_e5 = 0xffffffffff;
                  local_e0 = 0xffff;
                  uStack_de = 0xffffffffffff;
                  local_d8 = 0xffff;
                  uStack_d6 = 0xffffffffffff;
                  local_d0 = 0xffff;
                  uStack_ce = 0xff;
                  uStack_cd = 0xffffffffff;
                  local_c8 = 0xffffffffffffffff;
                  local_c0 = 0xffffffffffffffff;
                  local_b8 = 0xffffffffffffffff;
                  iVar4 = bus_send_recv(&local_170,3,&local_f0,&local_394);
                  if (iVar4 == 0) {
                    if (local_f0 != 0xaa) {
                      iVar4 = 0;
                      if (local_f0 != 0) {
                        iVar4 = -(uint)local_f0;
                        goto LAB_00103e70;
                      }
                      goto LAB_00103e8c;
                    }
                    memcpy(&local_390,(void *)((ulong)&local_f0 | 1),(long)(local_394 + -1));
                    if (((byte)local_390 & 0xfd) != 0x45) {
                      iVar4 = 0;
                      puVar8 = (undefined1 *)(g_info + 0x20);
                      if (((byte)local_390 != 0x4e) || (local_390._1_1_ != 'V')) goto LAB_00103e98;
                      uVar6 = 1;
                      iVar4 = 0;
                      goto LAB_00103e9c;
                    }
                    iVar4 = 0;
                    uVar6 = 0;
                    *(undefined1 *)(g_info + 0x20) = 0;
                  }
                  else {
LAB_00103e70:
                    _printk("<3>%s %d read page 0 failed: %d\n","slg_authenticate_battery",0x3f7,iVar4);
LAB_00103e8c:
                    puVar8 = (undefined1 *)(g_info + 0x20);
LAB_00103e98:
                    uVar6 = 0xff;
LAB_00103e9c:
                    *puVar8 = uVar6;
                  }
                  _printk("<3>%s battery_id is %d \n","slg_authenticate_battery",uVar6);
                  _printk("<3>%s %d battery authenticate success\n","slg_authenticate_battery",0x402);
                  goto LAB_00103b8c;
                }
LAB_00103cd0:
                uVar7 = 0x3dc;
              }
              else {
LAB_00103cec:
                uVar7 = 0x3d2;
              }
            }
            else {
LAB_00103b70:
              uVar7 = 0x3bd;
            }
          }
          else {
LAB_00103a00:
            uVar7 = 0x3b8;
          }
        }
        else {
LAB_00103958:
          uVar7 = 0x3b3;
        }
      }
      else {
LAB_001038b4:
        uVar7 = 0x3ad;
      }
    }
    else {
LAB_0010380c:
      uVar7 = 0x3a5;
    }
  }
  else {
LAB_0010375c:
    uVar7 = 0x39d;
  }
  _printk("<3>%s %d failed: %d\n","slg_authenticate_battery",uVar7,iVar4);
LAB_00103b8c:
  lVar11 = sp_el0;
  if (*(long *)(lVar11 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(-(uint)(iVar4 != 0));
  }
  return;
}



/* ---- slg_get_batt_id.69220b9f8017c1e335a28c3174a90c8c @ 00103f14 ---- */

undefined8 slg_get_batt_id_69220b9f8017c1e335a28c3174a90c8c(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar1 = g_info;
  *param_2 = *(undefined1 *)(g_info + 0x20);
  _printk("<6>%s batt_id is %d \n","slg_get_batt_id",*(undefined1 *)(lVar1 + 0x20));
  return 0;
}



/* ---- slg_probe_done.69220b9f8017c1e335a28c3174a90c8c @ 00103f60 ---- */

undefined4 slg_probe_done_69220b9f8017c1e335a28c3174a90c8c(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>%s g_info->probe_done is %d \n","slg_probe_done",*(undefined4 *)(g_info + 0x24));
  return *(undefined4 *)(g_info + 0x24);
}



/* ---- slg_get_chip_ok.69220b9f8017c1e335a28c3174a90c8c @ 00103fb0 ---- */

void slg_get_chip_ok_69220b9f8017c1e335a28c3174a90c8c(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>%s chip ok \n","slg_get_chip_ok");
  slg_check_chip_ok();
  return;
}



/* ---- w1_read_block @ 00103fe8 ---- */

void w1_read_block(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *in_x18;
  uint uVar7;
  uint uVar8;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar6 = 0;
  do {
    uVar8 = 0;
    uVar7 = 0;
    do {
      *gpio_66_cfg = 0x3c0;
      uVar3 = _raw_spin_lock_irqsave(&w1_lock);
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 0;
      DataSynchronizationBarrier(3,2,0);
      lVar4 = ktime_get_with_offset(1);
      do {
        lVar5 = ktime_get_with_offset(1);
      } while ((ulong)(lVar5 - lVar4) < 500);
      *gpio_66_cfg = 0x1c0;
      uVar1 = *gpio_66_inout;
      lVar4 = ktime_get_with_offset(1);
      do {
        lVar5 = ktime_get_with_offset(1);
      } while ((ulong)(lVar5 - lVar4) >> 7 < 0x7d);
      _raw_spin_unlock_irqrestore(&w1_lock,uVar3);
      uVar2 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      uVar8 = (uVar1 & 1) << (ulong)uVar2 | uVar8;
    } while (uVar7 != 8);
    *(char *)(param_1 + uVar6) = (char)uVar8;
    uVar6 = uVar6 + 1;
  } while (uVar6 != (param_2 & 0xffffffff));
  return;
}



/* ---- w1_write_8 @ 0010412c ---- */

void w1_write_8(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x18;
  uint uVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar4 = 0;
  do {
    *gpio_66_cfg = 0x3c0;
    uVar1 = _raw_spin_lock_irqsave(&w1_lock);
    *gpio_66_inout = 0;
    DataSynchronizationBarrier(3,2,0);
    *gpio_66_inout = 0;
    DataSynchronizationBarrier(3,2,0);
    if (((param_1 & 0xff) >> (ulong)(uVar4 & 0x1f) & 1) == 0) {
      lVar2 = ktime_get_with_offset(1);
      do {
        lVar3 = ktime_get_with_offset(1);
      } while ((ulong)(lVar3 - lVar2) >> 4 < 0x271);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      lVar2 = ktime_get_with_offset(1);
      do {
        lVar3 = ktime_get_with_offset(1);
      } while ((ulong)(lVar3 - lVar2) >> 3 < 0x36b);
    }
    else {
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      *gpio_66_inout = 2;
      DataSynchronizationBarrier(3,2,0);
      lVar2 = ktime_get_with_offset(1);
      do {
        lVar3 = ktime_get_with_offset(1);
      } while ((ulong)(lVar3 - lVar2) >> 3 < 0x753);
    }
    _raw_spin_unlock_irqrestore(&w1_lock,uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  return;
}



/* ---- ecdsa_verify @ 00104288 ---- */

int ecdsa_verify(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  piVar3 = (int *)crypto_alloc_shash("sha256-generic",0,0);
  if (piVar3 < (int *)0xfffffffffffff001) {
    puVar4 = (undefined8 *)__kmalloc((long)(*piVar3 + 0x10),0xcc0);
    if (puVar4 == (undefined8 *)0x0) {
      crypto_destroy_tfm(piVar3,piVar3 + 0x20);
      iVar2 = -0xc;
    }
    else {
      *puVar4 = piVar3;
      iVar2 = crypto_shash_digest(puVar4,param_2,param_3,&local_68);
      kfree(puVar4);
      crypto_destroy_tfm(piVar3,piVar3 + 0x20);
      if (iVar2 == 0) {
        iVar2 = uECC_verify(param_1,&local_68,0x20,param_4,
                            &curve_secp256r1_llvm_17794486946994679881);
        if (iVar2 == 0) {
          _printk("<3>%s ecc verify fail: %d\n","ecdsa_verify");
          iVar2 = -1;
        }
        else {
          iVar2 = 0;
        }
        goto LAB_0010435c;
      }
    }
  }
  else {
    _printk("<3>can't alloc alg %s\n","sha256-generic");
    iVar2 = -0xd3;
  }
  _printk("<3>%s sha256 message fail: %d\n","ecdsa_verify",iVar2);
LAB_0010435c:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* ---- slg_check_chip_ok @ 001043fc ---- */

uint slg_check_chip_ok(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint7 uVar5;
  uint7 uVar6;
  char cVar7;
  uint uVar8;
  undefined8 *in_x18;
  undefined4 uVar9;
  undefined8 unaff_x30;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  byte local_a8;
  uint7 uStack_a7;
  char cStack_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x5e0);
  if (*(char *)(g_info + 0x28) == '\0') {
    local_ac = 0xb2;
    cmd_need_wait = 10;
    local_a8 = 0xff;
    uStack_a7 = 0xffffffffffffff;
    cStack_a0 = -1;
    uStack_9f = 0xffffffffffffff;
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    uVar8 = bus_send_recv(&local_ac,2,&local_a8,auStack_b0);
    cVar7 = cStack_a0;
    uVar6 = uStack_a7;
    if (uVar8 != 0) {
LAB_001045cc:
      _printk("<3>%s %d failed: %d\n","slg_check_chip_ok",0x371,uVar8);
      *(undefined4 *)(g_info + 0x24) = 0;
      goto LAB_001045f0;
    }
    if (local_a8 == 0xaa) {
      uVar8 = (uint)uStack_a7;
      uVar2 = (ulong)uStack_a7;
      uVar3 = (ulong)uStack_a7;
      uVar4 = (ulong)uStack_a7;
      uVar5 = uStack_a7 >> 0x30;
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",0,uVar8 & 0xff);
      uVar9 = 1;
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",1,((ulong)uVar6 & 0xff00) >> 8);
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",2,uVar8 >> 0x10 & 0xff);
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",3,(uVar2 & 0xff000000) >> 0x18);
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",4,(uVar3 & 0xff00000000) >> 0x20);
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",5,(uVar4 & 0xff0000000000) >> 0x28);
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",6,(ulong)uVar5);
      _printk("<6>%s romid[%d]: 0x%02x\n","slg_check_chip_ok",7,cVar7);
      if (((cVar7 != -0x54) || (((uint)(uVar6 >> 8) & 0xff) != 4)) ||
         (((ulong)uVar6 & 0xf00000) != 0xf00000)) goto LAB_00104594;
    }
    else {
      if (local_a8 != 0) {
        uVar8 = -(uint)local_a8;
        goto LAB_001045cc;
      }
LAB_00104594:
      uVar9 = 0;
    }
    lVar1 = g_info;
    *(char *)(g_info + 0x28) = (char)uVar9;
    *(undefined4 *)(lVar1 + 0x24) = uVar9;
  }
  else {
    uVar9 = 1;
  }
  _printk("<3>%s g_info->romid_verified = %d\n","slg_check_chip_ok",uVar9);
  uVar8 = (uint)*(byte *)(g_info + 0x28);
LAB_001045f0:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* ---- slg_probe.69220b9f8017c1e335a28c3174a90c8c @ 00104634 ---- */

undefined4 slg_probe_69220b9f8017c1e335a28c3174a90c8c(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  lVar3 = get_batt_auth_by_name("main_suppiler");
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x10;
    plVar4 = (long *)devm_kmalloc(lVar3,0x30,0xdc0);
    if (plVar4 == (long *)0x0) {
      _printk("<3>%s alloc mem fail\n","slg_probe");
      return 0xfffffff4;
    }
    lVar5 = *(long *)(param_1 + 0x300);
    *(undefined4 *)((long)plVar4 + 0x24) = 0;
    if ((lVar5 == 0) || (uVar6 = of_device_is_available(), (uVar6 & 1) == 0)) {
      return 0xffffffed;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x300);
    *plVar4 = param_1;
    plVar4[1] = lVar3;
    *(long **)(param_1 + 0xa8) = plVar4;
    w1_lock = 0;
    iVar2 = of_property_read_string(uVar7,"auth_name",plVar4 + 2);
    if (iVar2 < 0) {
      _printk("<3>%s can not find auth name(%d), use default name\n","slg_probe",iVar2);
      plVar4[2] = (long)"second_supplier";
    }
    cVar1 = arm64_use_ng_mappings;
    *(undefined4 *)((long)plVar4 + 0x24) = 0;
    g_info = plVar4;
    *(undefined1 *)(plVar4 + 5) = 0;
    uVar7 = 0x68000000000713;
    if (cVar1 != '\0') {
      uVar7 = 0x68000000000f13;
    }
    gpio_66_cfg = __ioremap(0x542000,8,uVar7);
    if (gpio_66_cfg == 0) {
      _dev_err(lVar3,"<%s>: map gpio-66 cfg register failed","slg_probe");
      return 0xffffffea;
    }
    gpio_66_inout = gpio_66_cfg + 4;
    __init_waitqueue_head(&slg_wait,"&slg_wait",&slg_auth_ops);
    slg_check_chip_ok();
    if ((char)g_info[5] == '\0') {
      _printk("<3>%s slg device not found\n","slg_probe");
      return 0;
    }
    _printk("<6>%s slg device detected\n","slg_probe");
    uVar6 = auth_device_register(plVar4[2],0,plVar4,&slg_auth_ops);
    plVar4[3] = uVar6;
    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
      _printk("<3>%s failed to register auth device\n","slg_probe");
      return (int)plVar4[3];
    }
    puVar8 = "<3>slg probe successfully!\n";
  }
  else {
    puVar8 = "<3>slg device detect skip";
  }
  _printk(puVar8);
  return 0;
}



/* ---- slg_remove.69220b9f8017c1e335a28c3174a90c8c @ 00104848 ---- */

undefined8 slg_remove_69220b9f8017c1e335a28c3174a90c8c(void)

{
  return 0;
}



/* ---- uECC_set_rng @ 001048b0 ---- */

void uECC_set_rng(undefined *param_1)

{
  g_rng_function = param_1;
  return;
}



/* ---- uECC_get_rng @ 001048c4 ---- */

undefined * uECC_get_rng(void)

{
  return g_rng_function;
}



/* ---- uECC_curve_private_key_size @ 001048d8 ---- */

ulong uECC_curve_private_key_size(long param_1)

{
  return (long)*(short *)(param_1 + 2) + 7U >> 3;
}



/* ---- uECC_curve_public_key_size @ 001048f0 ---- */

int uECC_curve_public_key_size(long param_1)

{
  return (int)*(char *)(param_1 + 1) << 1;
}



/* ---- uECC_secp160r1 @ 00104904 ---- */

undefined1 * uECC_secp160r1(void)

{
  return &curve_secp160r1;
}



/* ---- uECC_secp192r1 @ 00104918 ---- */

undefined1 * uECC_secp192r1(void)

{
  return &curve_secp192r1;
}



/* ---- uECC_secp224r1 @ 0010492c ---- */

undefined1 * uECC_secp224r1(void)

{
  return &curve_secp224r1;
}



/* ---- uECC_secp256r1 @ 00104940 ---- */

undefined1 * uECC_secp256r1(void)

{
  return &curve_secp256r1_llvm_17794486946994679881;
}



/* ---- uECC_secp256k1 @ 00104954 ---- */

undefined1 * uECC_secp256k1(void)

{
  return &curve_secp256k1;
}



/* ---- uECC_make_key @ 00104968 ---- */

void uECC_make_key(undefined1 *param_1,undefined1 *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *in_x18;
  long lVar12;
  undefined8 unaff_x30;
  ulong local_a8 [13];
  
  *in_x18 = unaff_x30;
  lVar12 = sp_el0;
  local_a8[0xc] = *(long *)(lVar12 + 0x5e0);
  lVar12 = 0x40;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  do {
    iVar1 = *(short *)(param_3 + 2) + 0x3f;
    iVar2 = *(short *)(param_3 + 2) + 0x7e;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    uVar4 = uECC_generate_random_int(local_a8 + 8,param_3 + 0x28,iVar2 >> 6);
    if ((int)uVar4 == 0) goto LAB_00104b18;
    lVar5 = EccPoint_compute_public_key(local_a8,local_a8 + 8,param_3);
    if (lVar5 != 0) {
      uVar7 = (uint)((long)*(short *)(param_3 + 2) + 7U >> 3);
      if ((int)uVar7 < 1) goto LAB_00104a64;
      uVar10 = uVar7 * 8;
      uVar9 = (long)*(short *)(param_3 + 2) + 7U >> 3 & 0xffffffff;
      goto LAB_00104a30;
    }
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  uVar4 = 0;
  goto LAB_00104b18;
  while( true ) {
    uVar9 = uVar9 - 1;
    *param_2 = (char)(local_a8[(ulong)(uVar7 >> 3) + 8] >> (uVar10 & 0x38));
    param_2 = param_2 + 1;
    if (uVar9 == 0) break;
LAB_00104a30:
    uVar10 = uVar10 - 8;
    uVar7 = uVar7 - 1;
    if ((0x27 < uVar7) || (uVar7 >> 3 == 4)) goto LAB_00104b4c;
  }
LAB_00104a64:
  bVar6 = param_3[1];
  lVar12 = (long)(char)bVar6;
  uVar7 = (uint)(char)bVar6;
  if (0 < (int)uVar7) {
    uVar10 = (char)bVar6 * 8;
    puVar8 = param_1;
    do {
      uVar10 = uVar10 - 8;
      uVar7 = uVar7 - 1;
      if ((0x47 < uVar7) || (uVar7 >> 3 == 8)) goto LAB_00104b4c;
      lVar12 = lVar12 + -1;
      *puVar8 = (char)(local_a8[uVar7 >> 3] >> (uVar10 & 0x38));
      puVar8 = puVar8 + 1;
    } while (lVar12 != 0);
    bVar6 = param_3[1];
  }
  uVar9 = (ulong)*param_3;
  if (8 < uVar9) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x104b58);
    (*pcVar3)();
  }
  uVar7 = (uint)(char)bVar6;
  uVar11 = (ulong)uVar7;
  if (0 < (int)uVar7) {
    uVar10 = uVar7 * 8;
    puVar8 = param_1 + (char)bVar6;
    do {
      uVar10 = uVar10 - 8;
      uVar7 = uVar7 - 1;
      if (7 < (uVar7 >> 3) + uVar9) {
LAB_00104b4c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104b50);
        (*pcVar3)();
      }
      uVar11 = uVar11 - 1;
      *puVar8 = (char)(local_a8[uVar9 + (uVar7 >> 3)] >> (uVar10 & 0x38));
      puVar8 = puVar8 + 1;
    } while (uVar11 != 0);
  }
  uVar4 = 1;
LAB_00104b18:
  lVar12 = sp_el0;
  if (*(long *)(lVar12 + 0x5e0) != local_a8[0xc]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ---- uECC_generate_random_int @ 00104b58 ---- */

void uECC_generate_random_int(ulong *param_1,ulong *param_2,uint param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  short sVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined8 *in_x18;
  long lVar20;
  undefined8 unaff_x30;
  ulong local_88 [5];
  
  *in_x18 = unaff_x30;
  cVar5 = (char)param_3;
  lVar20 = sp_el0;
  iVar4 = (int)(char)(cVar5 + -1);
  if (-2 < iVar4) {
    iVar4 = -1;
  }
  local_88[4] = *(long *)(lVar20 + 0x5e0);
  uVar17 = (ulong)param_3;
  do {
    cVar16 = (char)uVar17;
    uVar9 = (int)uVar17 - 1;
    if ((uVar9 >> 7 & 1) != 0) {
      cVar16 = (char)(iVar4 + 1U);
      if ((iVar4 + 1U & 0xff) == 0) {
        sVar12 = 0;
        goto LAB_00104c10;
      }
      break;
    }
    uVar17 = (ulong)(uint)(int)(char)uVar9;
  } while (param_2[uVar17 & 0xff] == 0);
  if (param_2[cVar16 + -1] == 0) {
    sVar12 = 0;
  }
  else {
    sVar12 = 0;
    uVar17 = param_2[cVar16 + -1];
    do {
      sVar12 = sVar12 + 1;
      bVar1 = 1 < uVar17;
      uVar17 = uVar17 >> 1;
    } while (bVar1);
  }
LAB_00104c10:
  if (g_rng_function != (undefined *)0x0) {
    iVar4 = cVar5 + -1;
    uVar19 = (ulong)param_3 & 0xff;
    lVar20 = 0;
    uVar17 = (ulong)param_3 & 0xfe;
    do {
      puVar6 = g_rng_function;
      if ((code *)g_rng_function != default_RNG_1af211300d3f8d16da1ad8e243f7d3fd_cfi_jt) {
        __cfi_slowpath_diag(0x7d3c5fba6f1f83eb,g_rng_function,&DAT_001001f0);
      }
      uVar8 = (*(code *)puVar6)(param_1,-(param_3 >> 7 & 1) & 0xfffff800 | (param_3 & 0xff) << 3);
      if ((int)uVar8 == 0) goto LAB_00104e3c;
      param_1[iVar4] = param_1[iVar4] & 0xffffffffffffffffU >> ((long)-sVar12 & 0x3fU);
      if (0 < cVar5) {
        lVar13 = 0;
        uVar10 = 0;
        do {
          puVar18 = (ulong *)((long)param_1 + lVar13);
          lVar13 = lVar13 + 8;
          uVar10 = *puVar18 | uVar10;
        } while (uVar19 * 8 != lVar13);
        if (uVar10 != 0) {
          uVar11 = *param_1;
          uVar9 = param_3 & 0xff;
          local_88[2] = 0;
          local_88[3] = 0;
          local_88[1] = 0;
          uVar10 = (ulong)(uVar11 != 0 && *param_2 < uVar11);
          local_88[0] = *param_2 - uVar11;
          if (uVar9 != 1) {
            uVar11 = param_1[1] + uVar10;
            if (uVar11 != 0) {
              uVar10 = (ulong)(param_2[1] < uVar11);
            }
            local_88[1] = param_2[1] - uVar11;
            if (uVar9 != 2) {
              uVar11 = param_1[2] + uVar10;
              if (uVar11 != 0) {
                uVar10 = (ulong)(param_2[2] < uVar11);
              }
              local_88[2] = param_2[2] - uVar11;
              if ((param_3 & 0xff) != 3) {
                uVar11 = param_1[3] + uVar10;
                if (uVar11 != 0) {
                  uVar10 = (ulong)(param_2[3] < uVar11);
                }
                local_88[3] = param_2[3] - uVar11;
                if ((param_3 & 0xff) != 4) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x104e90);
                  (*pcVar7)();
                }
              }
            }
          }
          if (uVar9 < 2) {
            uVar14 = 0;
            uVar11 = 0;
LAB_00104db4:
            lVar13 = uVar19 - uVar11;
            puVar18 = local_88 + uVar11;
            do {
              lVar13 = lVar13 + -1;
              uVar14 = *puVar18 | uVar14;
              puVar18 = puVar18 + 1;
            } while (lVar13 != 0);
          }
          else {
            uVar15 = 0;
            uVar14 = 0;
            uVar11 = uVar17;
            puVar18 = local_88 + 1;
            do {
              puVar2 = puVar18 + -1;
              uVar3 = *puVar18;
              puVar18 = puVar18 + 2;
              uVar11 = uVar11 - 2;
              uVar15 = *puVar2 | uVar15;
              uVar14 = uVar3 | uVar14;
            } while (uVar11 != 0);
            uVar14 = uVar14 | uVar15;
            uVar11 = uVar17;
            if (uVar17 != uVar19) goto LAB_00104db4;
          }
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = 0xfffffffe;
          }
          if ((uVar9 | uVar14 != 0) == 1) {
            uVar8 = 1;
            goto LAB_00104e3c;
          }
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 0x40);
  }
  uVar8 = 0;
LAB_00104e3c:
  lVar20 = sp_el0;
  if (*(long *)(lVar20 + 0x5e0) != local_88[4]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}



/* ---- EccPoint_compute_public_key @ 00104e90 ---- */

void EccPoint_compute_public_key(long param_1,ulong *param_2,char *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ushort uVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *in_x18;
  ulong *puVar15;
  undefined8 unaff_x30;
  ulong *local_88 [2];
  long local_78;
  ulong local_70;
  ulong local_68;
  long local_60;
  ulong local_58 [5];
  
  *in_x18 = unaff_x30;
  lVar7 = sp_el0;
  local_58[4] = *(long *)(lVar7 + 0x5e0);
  uVar6 = *(ushort *)(param_3 + 2);
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = 0;
  local_60 = 0;
  iVar10 = (short)uVar6 + 0x3f;
  local_78 = 0;
  local_70 = 0;
  iVar4 = (short)uVar6 + 0x7e;
  if (-1 < iVar10) {
    iVar4 = iVar10;
  }
  local_88[0] = local_58;
  local_88[1] = (ulong *)&local_78;
  uVar2 = iVar4 >> 6;
  if ((iVar4 << 0x12) >> 0x18 < 1) {
LAB_00104fe8:
    uVar11 = (uint)(short)uVar6;
    if ((int)uVar11 < (int)(uVar2 << 0x18) >> 0x12) {
      uVar3 = (int)uVar11 >> 6;
      if ((uVar3 == 4) ||
         (0x20 < (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)))
      goto LAB_001051a0;
      uVar14 = local_58[(long)((ulong)uVar11 << 0x20) >> 0x26] >> ((long)(short)uVar6 & 0x3fU) & 1;
    }
    else {
      uVar14 = 0;
    }
    if ('\0' < (char)uVar2) goto LAB_00105038;
  }
  else {
    uVar11 = uVar2 & 0xff;
    uVar13 = *(ulong *)(param_3 + 0x28);
    uVar14 = (ulong)(uVar13 != 0 && CARRY8(*param_2,uVar13));
    local_58[0] = *param_2 + uVar13;
    if (uVar11 != 1) {
      uVar13 = param_2[1];
      local_58[1] = uVar13 + uVar14 + *(long *)(param_3 + 0x30);
      if (local_58[1] != uVar13) {
        uVar14 = (ulong)(local_58[1] < uVar13);
      }
      if (uVar11 != 2) {
        uVar13 = param_2[2];
        local_58[2] = uVar13 + uVar14 + *(long *)(param_3 + 0x38);
        if (local_58[2] != uVar13) {
          uVar14 = (ulong)(local_58[2] < uVar13);
        }
        if (uVar11 != 3) {
          uVar13 = param_2[3];
          local_58[3] = uVar13 + uVar14 + *(long *)(param_3 + 0x40);
          if (local_58[3] != uVar13) {
            uVar14 = (ulong)(local_58[3] < uVar13);
          }
          if (uVar11 != 4) goto LAB_001051a0;
        }
      }
    }
    if (uVar14 == 0) goto LAB_00104fe8;
    uVar14 = 1;
LAB_00105038:
    uVar13 = *(ulong *)(param_3 + 0x28);
    uVar2 = uVar2 & 0xff;
    local_78 = local_58[0] + uVar13;
    if (uVar2 != 1) {
      uVar13 = (ulong)(uVar13 != 0 && CARRY8(local_58[0],uVar13));
      local_70 = local_58[1] + uVar13 + *(long *)(param_3 + 0x30);
      if (local_70 != local_58[1]) {
        uVar13 = (ulong)(local_70 < local_58[1]);
      }
      if (uVar2 != 2) {
        local_68 = local_58[2] + uVar13 + *(long *)(param_3 + 0x38);
        if (uVar2 != 3) {
          if (local_68 != local_58[2]) {
            uVar13 = (ulong)(local_68 < local_58[2]);
          }
          local_60 = local_58[3] + uVar13 + *(long *)(param_3 + 0x40);
          if (uVar2 != 4) {
LAB_001051a0:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1051a4);
            (*pcVar8)();
          }
        }
      }
    }
  }
  if (g_rng_function == (undefined *)0x0) {
    puVar15 = (ulong *)0x0;
LAB_001050f8:
    EccPoint_mult(param_1,param_3 + 0x48,local_88[uVar14 ^ 1],puVar15,uVar6 + 1,param_3);
    if (0 < (char)(*param_3 << 1)) {
      uVar13 = 0;
      uVar12 = 0;
      uVar14 = (ulong)(uint)(int)(char)(*param_3 << 1) & 0xff;
      puVar15 = (ulong *)(param_1 + 8);
      do {
        puVar1 = puVar15 + -1;
        uVar5 = *puVar15;
        puVar15 = puVar15 + 2;
        uVar14 = uVar14 - 2;
        uVar13 = *puVar1 | uVar13;
        uVar12 = uVar5 | uVar12;
      } while (uVar14 != 0);
      bVar9 = uVar12 != 0 || uVar13 != 0;
      goto LAB_0010516c;
    }
  }
  else {
    puVar15 = local_88[uVar14];
    iVar10 = uECC_generate_random_int(puVar15,param_3 + 8,*param_3);
    if (iVar10 != 0) {
      uVar6 = *(ushort *)(param_3 + 2);
      goto LAB_001050f8;
    }
  }
  bVar9 = false;
LAB_0010516c:
  lVar7 = sp_el0;
  if (*(long *)(lVar7 + 0x5e0) != local_58[4]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar9);
  }
  return;
}



/* ---- uECC_shared_secret @ 001051a4 ---- */

void uECC_shared_secret(byte *param_1,byte *param_2,undefined1 *param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *in_x18;
  ulong *puVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  undefined8 unaff_x30;
  ulong *local_f8 [2];
  long local_e8;
  ulong local_e0;
  ulong local_d8;
  long local_d0;
  ulong local_c8 [13];
  
  *in_x18 = unaff_x30;
  lVar18 = sp_el0;
  local_c8[0xc] = *(long *)(lVar18 + 0x5e0);
  uVar4 = *(ushort *)(param_4 + 2);
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  bVar2 = *param_4;
  local_c8[8] = 0;
  local_c8[9] = 0;
  bVar3 = param_4[1];
  lVar18 = (long)(char)bVar3;
  local_c8[6] = 0;
  local_c8[7] = 0;
  uVar11 = (long)(short)uVar4 + 7;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  uVar7 = (uint)(uVar11 >> 3);
  local_c8[0] = 0;
  local_c8[1] = 0;
  iVar17 = uVar7 + 0xe;
  if (-1 < (int)(uVar7 + 7)) {
    iVar17 = uVar7 + 7;
  }
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8[0] = local_c8;
  local_f8[1] = (ulong *)&local_e8;
  if (0 < (iVar17 << 0x15) >> 0x18) {
    memset(local_c8,0,(ulong)((iVar17 >> 3 & 0xffU) << 3));
  }
  if (0 < (int)uVar7) {
    uVar12 = uVar7 * 8;
    uVar11 = uVar11 >> 3 & 0xffffffff;
    do {
      uVar12 = uVar12 - 8;
      uVar7 = uVar7 - 1;
      if ((0x27 < uVar7) || (uVar19 = uVar7 >> 3, uVar19 == 4)) goto LAB_001056a4;
      uVar11 = uVar11 - 1;
      local_c8[uVar19] = (ulong)*param_2 << (uVar12 & 0x38) | local_c8[uVar19];
      param_2 = param_2 + 1;
    } while (uVar11 != 0);
  }
  uVar7 = (int)(char)bVar3 + 7;
  uVar7 = (int)(uVar7 + ((uVar7 & 0xe000) >> 0xd)) >> 3;
  uVar11 = (ulong)((uVar7 & 0xff) << 3);
  if (0 < (int)uVar7) {
    memset(local_c8 + 4,0,uVar11);
  }
  iVar17 = (int)(char)bVar3;
  uVar19 = iVar17 - 1;
  uVar12 = iVar17 * 8;
  if (0 < (char)bVar3) {
    pbVar9 = param_1;
    lVar15 = lVar18;
    uVar10 = uVar19;
    uVar8 = uVar12;
    do {
      uVar8 = uVar8 - 8;
      if ((0x47 < uVar10) || (uVar5 = uVar10 >> 3, uVar5 == 8)) goto LAB_001056a4;
      lVar15 = lVar15 + -1;
      uVar10 = uVar10 - 1;
      local_c8[(ulong)uVar5 + 4] = (ulong)*pbVar9 << (uVar8 & 0x38) | local_c8[(ulong)uVar5 + 4];
      pbVar9 = pbVar9 + 1;
    } while (lVar15 != 0);
  }
  if (8 < bVar2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x1056ac);
    (*pcVar6)();
  }
  puVar16 = local_c8 + (ulong)bVar2 + 4;
  if (0 < (int)uVar7) {
    memset(puVar16,0,uVar11);
  }
  if (0 < iVar17) {
    pbVar9 = param_1 + (int)(char)bVar3;
    lVar15 = lVar18;
    uVar7 = uVar19;
    uVar10 = uVar12;
    do {
      uVar10 = uVar10 - 8;
      uVar11 = (ulong)(uVar7 >> 3);
      if (7 < uVar11 + bVar2) goto LAB_001056a4;
      lVar15 = lVar15 + -1;
      uVar7 = uVar7 - 1;
      puVar16[uVar11] = (ulong)*pbVar9 << (uVar10 & 0x38) | puVar16[uVar11];
      pbVar9 = pbVar9 + 1;
    } while (lVar15 != 0);
  }
  iVar17 = (short)uVar4 + 0x3f;
  iVar1 = (short)uVar4 + 0x7e;
  if (-1 < iVar17) {
    iVar1 = iVar17;
  }
  uVar7 = iVar1 >> 6;
  if ((iVar1 << 0x12) >> 0x18 < 1) {
LAB_00105490:
    uVar10 = (uint)(short)uVar4;
    if ((int)uVar10 < (int)(uVar7 << 0x18) >> 0x12) {
      uVar8 = (int)uVar10 >> 6;
      if ((uVar8 == 4) ||
         (0x20 < (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3)))
      goto LAB_001056a4;
      uVar11 = local_c8[(long)((ulong)uVar10 << 0x20) >> 0x26] >> ((long)(short)uVar4 & 0x3fU) & 1;
    }
    else {
      uVar11 = 0;
    }
    if ('\0' < (char)uVar7) goto LAB_001054e0;
  }
  else {
    uVar13 = *(ulong *)(param_4 + 0x28);
    uVar10 = uVar7 & 0xff;
    uVar11 = (ulong)(uVar13 != 0 && CARRY8(local_c8[0],uVar13));
    local_c8[0] = local_c8[0] + uVar13;
    if (uVar10 != 1) {
      uVar13 = local_c8[1] + uVar11 + *(long *)(param_4 + 0x30);
      if (uVar13 != local_c8[1]) {
        uVar11 = (ulong)(uVar13 < local_c8[1]);
      }
      local_c8[1] = uVar13;
      if (uVar10 != 2) {
        uVar13 = local_c8[2] + uVar11 + *(long *)(param_4 + 0x38);
        if (uVar13 != local_c8[2]) {
          uVar11 = (ulong)(uVar13 < local_c8[2]);
        }
        local_c8[2] = uVar13;
        if (uVar10 != 3) {
          uVar13 = local_c8[3] + uVar11 + *(long *)(param_4 + 0x40);
          if (uVar13 != local_c8[3]) {
            uVar11 = (ulong)(uVar13 < local_c8[3]);
          }
          local_c8[3] = uVar13;
          if (uVar10 != 4) goto LAB_001056a4;
        }
      }
    }
    if (uVar11 == 0) goto LAB_00105490;
    uVar11 = 1;
LAB_001054e0:
    uVar7 = uVar7 & 0xff;
    uVar13 = *(ulong *)(param_4 + 0x28);
    local_e8 = local_c8[0] + uVar13;
    if (uVar7 != 1) {
      uVar13 = (ulong)(uVar13 != 0 && CARRY8(local_c8[0],uVar13));
      local_e0 = local_c8[1] + uVar13 + *(long *)(param_4 + 0x30);
      if (local_e0 != local_c8[1]) {
        uVar13 = (ulong)(local_e0 < local_c8[1]);
      }
      if (uVar7 != 2) {
        local_d8 = local_c8[2] + uVar13 + *(long *)(param_4 + 0x38);
        if (uVar7 != 3) {
          if (local_d8 != local_c8[2]) {
            uVar13 = (ulong)(local_d8 < local_c8[2]);
          }
          local_d0 = local_c8[3] + uVar13 + *(long *)(param_4 + 0x40);
          if (uVar7 != 4) {
LAB_001056a4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1056a8);
            (*pcVar6)();
          }
        }
      }
    }
  }
  if (g_rng_function == (undefined *)0x0) {
    puVar16 = (ulong *)0x0;
  }
  else {
    puVar16 = local_f8[uVar11];
    uVar13 = uECC_generate_random_int(puVar16,param_4 + 8,bVar2);
    if ((int)uVar13 == 0) goto LAB_00105668;
    uVar4 = *(ushort *)(param_4 + 2);
  }
  EccPoint_mult(local_c8 + 4,local_c8 + 4,local_f8[uVar11 ^ 1],puVar16,uVar4 + 1,param_4);
  if (0 < (char)bVar3) {
    do {
      uVar12 = uVar12 - 8;
      if ((0x47 < uVar19) || (uVar7 = uVar19 >> 3, uVar7 == 8)) goto LAB_001056a4;
      lVar18 = lVar18 + -1;
      uVar19 = uVar19 - 1;
      *param_3 = (char)(local_c8[(ulong)uVar7 + 4] >> (uVar12 & 0x38));
      param_3 = param_3 + 1;
    } while (lVar18 != 0);
  }
  if ((char)(*param_4 << 1) < 1) {
    uVar13 = 0;
  }
  else {
    uVar11 = (ulong)(uint)(int)(char)(*param_4 << 1) & 0xff;
    uVar13 = 0;
    uVar14 = uVar11 - 9;
    puVar16 = local_c8 + 4;
    do {
      if (uVar14 < 0xfffffffffffffff8) goto LAB_001056a4;
      uVar11 = uVar11 - 1;
      uVar13 = *puVar16 | uVar13;
      puVar16 = puVar16 + 1;
    } while (uVar11 != 0);
    uVar13 = (ulong)(uVar13 != 0);
  }
LAB_00105668:
  lVar18 = sp_el0;
  if (*(long *)(lVar18 + 0x5e0) != local_c8[0xc]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}



/* ---- EccPoint_mult @ 001056b0 ---- */

void EccPoint_mult(void *param_1,void *param_2,ulong *param_3,void *param_4,short param_5,
                  byte *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *in_x18;
  size_t __n;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 unaff_x30;
  ulong local_180;
  void *local_170;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  long local_138;
  ulong local_130 [26];
  
  *in_x18 = unaff_x30;
  lVar11 = sp_el0;
  local_130[0x18] = *(long *)(lVar11 + 0x5e0);
  bVar5 = *param_6;
  uVar14 = (ulong)(char)bVar5;
  puVar1 = local_130 + 0xc;
  local_130[0xe] = 0;
  local_130[0xf] = 0;
  local_130[0xc] = 0;
  local_130[0xd] = 0;
  uVar13 = (ulong)bVar5;
  local_130[10] = 0;
  local_130[0xb] = 0;
  local_130[8] = 0;
  local_130[9] = 0;
  local_130[6] = 0;
  local_130[7] = 0;
  local_130[4] = 0;
  local_130[5] = 0;
  local_130[2] = 0;
  local_130[3] = 0;
  local_130[0] = 0;
  local_130[1] = 0;
  local_140 = 0;
  local_138 = 0;
  local_150 = 0;
  local_148 = 0;
  if ((long)uVar14 < 1) {
    local_130[0x12] = 0;
    local_130[0x13] = 0;
    local_170 = (void *)((long)param_2 + uVar14 * 8);
    local_130[0x10] = 0;
    local_130[0x11] = 0;
    local_180 = uVar14;
    if (param_4 == (void *)0x0) {
      local_130[0x10] = 1;
    }
  }
  else {
    __n = uVar13 * 8;
    memcpy(puVar1,param_2,__n);
    local_170 = (void *)((long)param_2 + __n);
    memcpy(local_130 + 4,local_170,__n);
    local_130[0x12] = 0;
    local_130[0x13] = 0;
    local_130[0x10] = 0;
    local_130[0x11] = 0;
    if (param_4 == (void *)0x0) {
      memset(local_130 + 0x10,0,__n);
      local_130[0x10] = 1;
    }
    else {
      memcpy(local_130 + 0x10,param_4,__n);
    }
    memmove(local_130 + 8,puVar1,__n);
    memmove(local_130,local_130 + 4,__n);
    local_180 = uVar13;
  }
  apply_z(puVar1,local_130 + 4,local_130 + 0x10,param_6);
  pcVar12 = *(code **)(param_6 + 0xa8);
  if (1 < ((ulong)(pcVar12 + -0x102290) >> 3 | (long)pcVar12 << 0x3d)) {
    __cfi_slowpath_diag(0x89ce4e899ed50bb0,pcVar12,&DAT_00100210);
  }
  (*pcVar12)(puVar1,local_130 + 4,local_130 + 0x10,param_6);
  apply_z(local_130 + 8,local_130,local_130 + 0x10,param_6);
  if (0 < (short)(param_5 - 2U)) {
    uVar4 = (uint)(ushort)(param_5 - 2U);
    do {
      bVar6 = (1L << ((ulong)uVar4 & 0x3f) & param_3[uVar4 >> 6]) == 0;
      uVar7 = (ulong)!bVar6;
      uVar8 = (ulong)bVar6;
      XYcZ_addC(local_130 + uVar7 * 4 + 8,local_130 + uVar7 * 4,local_130 + uVar8 * 4 + 8,
                local_130 + uVar8 * 4,param_6);
      XYcZ_add(local_130 + uVar8 * 4 + 8,local_130 + uVar8 * 4,local_130 + uVar7 * 4 + 8,
               local_130 + uVar7 * 4,param_6);
      bVar6 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar6 && uVar4 != 0);
  }
  uVar7 = *param_3 & 1;
  puVar1 = local_130 + uVar7 * 4 + 8;
  puVar2 = local_130 + uVar7 * 4;
  XYcZ_addC(puVar1,puVar2,local_130 + (uVar7 ^ 1) * 4 + 8,local_130 + (uVar7 ^ 1) * 4,param_6);
  if ('\0' < (char)bVar5) {
    local_150 = local_130[0xc] - local_130[8];
    uVar8 = (ulong)(local_130[8] != 0 && local_130[0xc] < local_130[8]);
    if (bVar5 == 1) {
      lVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      uVar3 = local_130[9] + uVar8;
      uVar9 = local_130[0xd] - uVar3;
      if (uVar3 != 0) {
        uVar8 = (ulong)(local_130[0xd] < uVar3);
      }
      local_148 = uVar9;
      if (bVar5 == 2) {
        lVar11 = 0;
        uVar10 = 0;
      }
      else {
        uVar3 = local_130[10] + uVar8;
        uVar10 = local_130[0xe] - uVar3;
        if (uVar3 != 0) {
          uVar8 = (ulong)(local_130[0xe] < uVar3);
        }
        local_140 = uVar10;
        if (bVar5 == 3) {
          lVar11 = 0;
        }
        else {
          uVar3 = local_130[0xb] + uVar8;
          lVar11 = local_130[0xf] - uVar3;
          if (uVar3 != 0) {
            uVar8 = (ulong)(local_130[0xf] < uVar3);
          }
          local_138 = lVar11;
          if (bVar5 != 4) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x105cfc);
            (*pcVar12)();
          }
        }
      }
    }
    if (uVar8 != 0) {
      uVar8 = *(ulong *)(param_6 + 8);
      bVar6 = CARRY8(local_150,uVar8);
      local_150 = local_150 + uVar8;
      if (bVar5 != 1) {
        uVar8 = (ulong)(uVar8 != 0 && bVar6);
        local_148 = uVar9 + uVar8 + *(long *)(param_6 + 0x10);
        if (local_148 != uVar9) {
          uVar8 = (ulong)(local_148 < uVar9);
        }
        if ((bVar5 != 2) && (local_140 = uVar10 + uVar8 + *(long *)(param_6 + 0x18), bVar5 != 3)) {
          if (local_140 != uVar10) {
            uVar8 = (ulong)(local_140 < uVar10);
          }
          local_138 = lVar11 + uVar8 + *(long *)(param_6 + 0x20);
        }
      }
    }
  }
  local_130[0x16] = 0;
  local_130[0x17] = 0;
  local_130[0x14] = 0;
  local_130[0x15] = 0;
  local_130[0x12] = 0;
  local_130[0x13] = 0;
  local_130[0x10] = 0;
  local_130[0x11] = 0;
  uECC_vli_mult(local_130 + 0x10,&local_150,puVar2,*param_6);
  pcVar12 = *(code **)(param_6 + 0xc0);
  if (4 < ((ulong)(pcVar12 + -0x102250) >> 3 | (long)pcVar12 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar12,&DAT_00100350);
  }
  (*pcVar12)(&local_150,local_130 + 0x10);
  local_130[0x16] = 0;
  local_130[0x17] = 0;
  local_130[0x14] = 0;
  local_130[0x15] = 0;
  local_130[0x12] = 0;
  local_130[0x13] = 0;
  local_130[0x10] = 0;
  local_130[0x11] = 0;
  uECC_vli_mult(local_130 + 0x10,&local_150,param_2,*param_6);
  pcVar12 = *(code **)(param_6 + 0xc0);
  if (4 < ((ulong)(pcVar12 + -0x102250) >> 3 | (long)pcVar12 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar12,&DAT_00100350);
  }
  (*pcVar12)(&local_150,local_130 + 0x10);
  uECC_vli_modInv(&local_150,&local_150,param_6 + 8,uVar14 & 0xffffffff);
  local_130[0x16] = 0;
  local_130[0x17] = 0;
  local_130[0x14] = 0;
  local_130[0x15] = 0;
  local_130[0x12] = 0;
  local_130[0x13] = 0;
  local_130[0x10] = 0;
  local_130[0x11] = 0;
  uECC_vli_mult(local_130 + 0x10,&local_150,local_170,*param_6);
  pcVar12 = *(code **)(param_6 + 0xc0);
  if (4 < ((ulong)(pcVar12 + -0x102250) >> 3 | (long)pcVar12 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar12,&DAT_00100350);
  }
  (*pcVar12)(&local_150,local_130 + 0x10);
  local_130[0x16] = 0;
  local_130[0x17] = 0;
  local_130[0x14] = 0;
  local_130[0x15] = 0;
  local_130[0x12] = 0;
  local_130[0x13] = 0;
  local_130[0x10] = 0;
  local_130[0x11] = 0;
  uECC_vli_mult(local_130 + 0x10,&local_150,puVar1,*param_6);
  pcVar12 = *(code **)(param_6 + 0xc0);
  if (4 < ((ulong)(pcVar12 + -0x102250) >> 3 | (long)pcVar12 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar12,&DAT_00100350);
  }
  (*pcVar12)(&local_150,local_130 + 0x10);
  XYcZ_add(local_130 + (uVar7 ^ 1) * 4 + 8,local_130 + (uVar7 ^ 1) * 4,puVar1,puVar2,param_6);
  apply_z(local_130 + 8,local_130,&local_150,param_6);
  if ('\0' < (char)bVar5) {
    memcpy(param_1,local_130 + 8,uVar13 << 3);
    memcpy((void *)((long)param_1 + local_180 * 8),local_130,uVar13 << 3);
  }
  lVar11 = sp_el0;
  if (*(long *)(lVar11 + 0x5e0) != local_130[0x18]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- uECC_compress @ 00105cfc ---- */

void uECC_compress(long param_1,byte *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)*(char *)(param_3 + 1);
  if ('\0' < *(char *)(param_3 + 1)) {
    lVar3 = 0;
    do {
      lVar1 = lVar3 + 1;
      param_2[lVar3 + 1] = *(byte *)(param_1 + lVar3);
      lVar3 = lVar1;
    } while (lVar1 < (char)*(byte *)(param_3 + 1));
    uVar2 = (uint)*(byte *)(param_3 + 1);
  }
  *param_2 = *(byte *)(param_1 + (int)(-(uVar2 >> 7 & 1) & 0xfffffe00 | (uVar2 & 0xff) << 1) + -1) &
             1 | 2;
  return;
}



/* ---- uECC_decompress @ 00105d54 ---- */

void uECC_decompress(byte *param_1,undefined1 *param_2,byte *param_3)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *in_x18;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x30;
  ulong local_88 [9];
  
  *in_x18 = unaff_x30;
  lVar17 = sp_el0;
  local_88[8] = *(long *)(lVar17 + 0x5e0);
  bVar3 = *param_3;
  uVar18 = (ulong)bVar3;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  if (8 < bVar3) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0x5512,0x106004);
    (*pcVar8)();
  }
  bVar4 = param_3[1];
  lVar17 = (long)(char)bVar4;
  uVar7 = (int)(char)bVar4 + 7;
  iVar2 = (int)(uVar7 + ((uVar7 & 0xe000) >> 0xd)) >> 3;
  if (0 < iVar2) {
    memset(local_88,0,(ulong)(uint)(iVar2 << 3) & 0x7f8);
  }
  uVar7 = (uint)(char)bVar4;
  if (0 < (char)bVar4) {
    uVar13 = uVar7 * 8;
    pbVar11 = param_1;
    do {
      uVar13 = uVar13 - 8;
      uVar7 = uVar7 - 1;
      pbVar11 = pbVar11 + 1;
      if ((0x47 < uVar7) || (uVar5 = uVar7 >> 3, uVar5 == 8)) goto LAB_00105ffc;
      lVar17 = lVar17 + -1;
      local_88[uVar5] = (ulong)*pbVar11 << (uVar13 & 0x38) | local_88[uVar5];
    } while (lVar17 != 0);
  }
  pcVar8 = *(code **)(param_3 + 0xb8);
  puVar1 = local_88 + uVar18;
  if (1 < ((ulong)(pcVar8 + -0x102238) >> 3 | (long)pcVar8 << 0x3d)) {
    __cfi_slowpath_diag(0xab0f882174ff70fc,pcVar8,&DAT_00100190);
  }
  (*pcVar8)(puVar1,local_88,param_3);
  pcVar8 = *(code **)(param_3 + 0xb0);
  if (1 < ((ulong)(pcVar8 + -0x102228) >> 3 | (long)pcVar8 << 0x3d)) {
    __cfi_slowpath_diag(0x239f3209c60321b3,pcVar8,&DAT_001001b0);
  }
  (*pcVar8)(puVar1,param_3);
  if (7 < bVar3) {
LAB_00105ffc:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x106000);
    (*pcVar8)();
  }
  uVar9 = *puVar1;
  if (((uVar9 & 1) != ((ulong)*param_1 & 1)) && (bVar4 = *param_3, '\0' < (char)bVar4)) {
    if ((bVar3 & 0xf8) != 0) goto LAB_00105ffc;
    uVar14 = *(ulong *)(param_3 + 8);
    *puVar1 = uVar14 - uVar9;
    if (bVar4 != 1) {
      uVar12 = 0;
      lVar17 = (ulong)bVar4 - 1;
      puVar16 = (ulong *)(param_3 + 0x10);
      uVar15 = uVar18;
      do {
        uVar15 = uVar15 + 1;
        if ((uVar15 & 0x1ffffffffffffff8) != 0) goto LAB_00105ffc;
        bVar6 = uVar14 < uVar9;
        uVar14 = *puVar16;
        if (uVar9 != 0) {
          uVar12 = (ulong)bVar6;
        }
        lVar17 = lVar17 + -1;
        uVar9 = uVar12 + local_88[uVar15];
        local_88[uVar15] = uVar14 - uVar9;
        puVar16 = puVar16 + 1;
      } while (lVar17 != 0);
    }
  }
  bVar3 = param_3[1];
  lVar17 = (long)(char)bVar3;
  uVar7 = (uint)(char)bVar3;
  if (0 < (int)uVar7) {
    uVar13 = (char)bVar3 * 8;
    puVar10 = param_2;
    do {
      uVar13 = uVar13 - 8;
      uVar7 = uVar7 - 1;
      if ((0x47 < uVar7) || (uVar7 >> 3 == 8)) goto LAB_00105ffc;
      lVar17 = lVar17 + -1;
      *puVar10 = (char)(local_88[uVar7 >> 3] >> (uVar13 & 0x38));
      puVar10 = puVar10 + 1;
    } while (lVar17 != 0);
    bVar3 = param_3[1];
    if (0 < (long)(char)bVar3) {
      uVar7 = (char)bVar3 * 8;
      uVar9 = (ulong)(uint)(int)(char)bVar3;
      uVar13 = (uint)(char)bVar3;
      puVar10 = param_2 + (char)bVar3;
      do {
        uVar13 = uVar13 - 1;
        uVar7 = uVar7 - 8;
        if (7 < (uVar13 >> 3) + uVar18) goto LAB_00105ffc;
        uVar9 = uVar9 - 1;
        *puVar10 = (char)(puVar1[uVar13 >> 3] >> (uVar7 & 0x38));
        puVar10 = puVar10 + 1;
      } while (uVar9 != 0);
    }
  }
  lVar17 = sp_el0;
  if (*(long *)(lVar17 + 0x5e0) != local_88[8]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- uECC_valid_public_key @ 00106060 ---- */

void uECC_valid_public_key(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong *__s;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 *in_x18;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined8 unaff_x30;
  ulong local_128 [25];
  
  *in_x18 = unaff_x30;
  lVar18 = sp_el0;
  local_128[0x18] = *(long *)(lVar18 + 0x5e0);
  bVar3 = param_2[1];
  lVar18 = (long)(char)bVar3;
  local_128[6] = 0;
  local_128[7] = 0;
  local_128[4] = 0;
  local_128[5] = 0;
  local_128[2] = 0;
  local_128[3] = 0;
  uVar1 = (int)(char)bVar3 + 7;
  local_128[0] = 0;
  local_128[1] = 0;
  uVar1 = (int)(uVar1 + ((uVar1 & 0xe000) >> 0xd)) >> 3;
  uVar17 = (ulong)((uVar1 & 0xff) << 3);
  if (0 < (int)uVar1) {
    memset(local_128,0,uVar17);
  }
  uVar7 = (uint)(char)bVar3;
  uVar11 = uVar7 * 8;
  if (0 < (char)bVar3) {
    pbVar10 = param_1;
    lVar14 = lVar18;
    uVar6 = uVar7;
    uVar9 = uVar11;
    do {
      uVar9 = uVar9 - 8;
      uVar6 = uVar6 - 1;
      if ((0x47 < uVar6) || (uVar4 = uVar6 >> 3, uVar4 == 8)) goto LAB_0010637c;
      lVar14 = lVar14 + -1;
      local_128[uVar4] = (ulong)*pbVar10 << (uVar9 & 0x38) | local_128[uVar4];
      pbVar10 = pbVar10 + 1;
    } while (lVar14 != 0);
  }
  bVar2 = *param_2;
  uVar15 = (ulong)bVar2;
  if (8 < uVar15) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(0x5512,0x106384);
    (*pcVar16)();
  }
  __s = local_128 + uVar15;
  if (0 < (int)uVar1) {
    memset(__s,0,uVar17);
  }
  if (0 < (int)uVar7) {
    pbVar10 = param_1 + (int)(char)bVar3;
    do {
      uVar11 = uVar11 - 8;
      uVar7 = uVar7 - 1;
      uVar17 = (ulong)(uVar7 >> 3);
      if (7 < uVar17 + uVar15) goto LAB_0010637c;
      lVar18 = lVar18 + -1;
      __s[uVar17] = (ulong)*pbVar10 << (uVar11 & 0x38) | __s[uVar17];
      pbVar10 = pbVar10 + 1;
    } while (lVar18 != 0);
  }
  local_128[0xe] = 0;
  local_128[0xf] = 0;
  local_128[0xc] = 0;
  local_128[0xd] = 0;
  local_128[10] = 0;
  local_128[0xb] = 0;
  local_128[8] = 0;
  local_128[9] = 0;
  if (0 < (char)(bVar2 << 1)) {
    uVar17 = (ulong)(uint)(int)(char)(bVar2 << 1) & 0xff;
    uVar8 = 0;
    uVar12 = uVar17 - 9;
    puVar13 = local_128;
    do {
      if (uVar12 < 0xfffffffffffffff8) goto LAB_0010637c;
      uVar17 = uVar17 - 1;
      uVar8 = *puVar13 | uVar8;
      puVar13 = puVar13 + 1;
    } while (uVar17 != 0);
    if (uVar8 != 0) {
      uVar17 = (ulong)bVar2;
      do {
        uVar1 = (int)uVar17 - 1;
        if ((uVar1 >> 7 & 1) != 0) break;
        uVar17 = (ulong)(uint)(int)(char)uVar1;
        if (local_128[uVar17 & 0xff] < *(ulong *)(param_2 + (uVar17 & 0xff) * 8 + 8)) {
          uVar17 = uVar15;
          goto LAB_00106238;
        }
      } while (local_128[uVar17 & 0xff] <= *(ulong *)(param_2 + (uVar17 & 0xff) * 8 + 8));
    }
  }
  goto LAB_0010626c;
LAB_00106238:
  do {
    uVar1 = (int)uVar17 - 1;
    if ((uVar1 >> 7 & 1) != 0) break;
    bVar3 = (byte)uVar1;
    uVar17 = (ulong)(uint)(int)(char)bVar3;
    if (7 < (uVar17 & 0xff) + uVar15) goto LAB_0010637c;
    if (__s[uVar17 & 0xff] < *(ulong *)(param_2 + (ulong)bVar3 * 8 + 8)) {
      local_128[0x16] = 0;
      local_128[0x17] = 0;
      local_128[0x14] = 0;
      local_128[0x15] = 0;
      local_128[0x12] = 0;
      local_128[0x13] = 0;
      local_128[0x10] = 0;
      local_128[0x11] = 0;
      uECC_vli_mult(local_128 + 0x10,__s,__s,(uint)bVar2);
      pcVar16 = *(code **)(param_2 + 0xc0);
      if (4 < ((ulong)(pcVar16 + -0x102250) >> 3 | (long)pcVar16 << 0x3d)) {
        __cfi_slowpath_diag(0x6dd230d89864710d,pcVar16,&DAT_00100350);
      }
      (*pcVar16)(local_128 + 0xc,local_128 + 0x10);
      pcVar16 = *(code **)(param_2 + 0xb8);
      if (1 < ((ulong)(pcVar16 + -0x102238) >> 3 | (long)pcVar16 << 0x3d)) {
        __cfi_slowpath_diag(0xab0f882174ff70fc,pcVar16,&DAT_00100230);
      }
      (*pcVar16)(local_128 + 8,local_128,param_2);
      uVar1 = bVar2 - 1;
      if ((uVar1 >> 7 & 1) == 0) {
        uVar15 = 0;
        uVar17 = (ulong)(uint)(int)(char)uVar1 & 0xff;
        do {
          if ((uVar17 & 0x1ffffffffffffffc) != 0) {
LAB_0010637c:
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x106380);
            (*pcVar16)();
          }
          bVar5 = uVar17 != 0;
          uVar15 = local_128[uVar17 + 8] ^ local_128[uVar17 + 0xc] | uVar15;
          uVar17 = uVar17 - 1;
        } while (bVar5);
        bVar5 = uVar15 == 0;
      }
      else {
        bVar5 = true;
      }
      goto LAB_00106270;
    }
  } while (__s[uVar17 & 0xff] <= *(ulong *)(param_2 + (ulong)bVar3 * 8 + 8));
LAB_0010626c:
  bVar5 = false;
LAB_00106270:
  lVar18 = sp_el0;
  if (*(long *)(lVar18 + 0x5e0) != local_128[0x18]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}



/* ---- uECC_compute_public_key @ 001063d0 ---- */

void uECC_compute_public_key(byte *param_1,undefined1 *param_2,byte *param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  short sVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_c8 [17];
  
  *in_x18 = unaff_x30;
  lVar12 = sp_el0;
  local_c8[0x10] = *(long *)(lVar12 + 0x5e0);
  sVar5 = *(short *)(param_3 + 2);
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  uVar10 = (uint)((long)sVar5 + 7U >> 3);
  local_c8[0] = 0;
  local_c8[1] = 0;
  iVar2 = uVar10 + 0xe;
  if (-1 < (int)(uVar10 + 7)) {
    iVar2 = uVar10 + 7;
  }
  if (0 < (iVar2 << 0x15) >> 0x18) {
    memset(local_c8 + 8,0,(ulong)((iVar2 >> 3 & 0xffU) << 3));
  }
  if (0 < (int)uVar10) {
    uVar16 = uVar10 * 8;
    uVar14 = (long)sVar5 + 7U >> 3 & 0xffffffff;
    do {
      uVar16 = uVar16 - 8;
      uVar10 = uVar10 - 1;
      if ((0x27 < uVar10) || (uVar6 = uVar10 >> 3, uVar6 == 4)) goto LAB_0010673c;
      uVar14 = uVar14 - 1;
      local_c8[(ulong)uVar6 + 8] = (ulong)*param_1 << (uVar16 & 0x38) | local_c8[(ulong)uVar6 + 8];
      param_1 = param_1 + 1;
    } while (uVar14 != 0);
  }
  iVar2 = sVar5 + 0x3f;
  iVar3 = sVar5 + 0x7e;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (0 < (iVar3 << 0x12) >> 0x18) {
    uVar15 = 0;
    uVar10 = iVar3 >> 6 & 0xff;
    uVar11 = (ulong)uVar10;
    puVar18 = local_c8 + 8;
    uVar14 = uVar11;
    do {
      if (uVar11 - 5 < 0xfffffffffffffffc) goto LAB_0010673c;
      uVar14 = uVar14 - 1;
      uVar15 = *puVar18 | uVar15;
      puVar18 = puVar18 + 1;
    } while (uVar14 != 0);
    if (uVar15 != 0) {
      local_c8[0xe] = 0;
      local_c8[0xf] = 0;
      uVar14 = (ulong)(local_c8[8] != 0 && *(ulong *)(param_3 + 0x28) < local_c8[8]);
      local_c8[0xc] = *(ulong *)(param_3 + 0x28) - local_c8[8];
      local_c8[0xd] = 0;
      if (uVar10 != 1) {
        uVar15 = local_c8[9] + uVar14;
        if (uVar15 != 0) {
          uVar14 = (ulong)(*(ulong *)(param_3 + 0x30) < uVar15);
        }
        local_c8[0xd] = *(ulong *)(param_3 + 0x30) - uVar15;
        if (uVar10 != 2) {
          uVar15 = local_c8[10] + uVar14;
          if (uVar15 != 0) {
            uVar14 = (ulong)(*(ulong *)(param_3 + 0x38) < uVar15);
          }
          local_c8[0xe] = *(ulong *)(param_3 + 0x38) - uVar15;
          if (uVar10 != 3) {
            uVar15 = local_c8[0xb] + uVar14;
            if (uVar15 != 0) {
              uVar14 = (ulong)(*(ulong *)(param_3 + 0x40) < uVar15);
            }
            local_c8[0xf] = *(ulong *)(param_3 + 0x40) - uVar15;
            if (uVar10 != 4) {
LAB_0010673c:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x106740);
              (*pcVar7)();
            }
          }
        }
      }
      if (uVar10 < 2) {
        uVar17 = 0;
        uVar19 = 0;
LAB_00106600:
        lVar12 = uVar11 - uVar17;
        puVar18 = local_c8 + uVar17 + 0xc;
        do {
          lVar12 = lVar12 + -1;
          uVar19 = *puVar18 | uVar19;
          puVar18 = puVar18 + 1;
        } while (lVar12 != 0);
      }
      else {
        uVar17 = uVar11 & 0xfe;
        uVar20 = 0;
        uVar19 = 0;
        puVar18 = local_c8 + 0xd;
        uVar15 = uVar17;
        do {
          puVar1 = puVar18 + -1;
          uVar4 = *puVar18;
          puVar18 = puVar18 + 2;
          uVar15 = uVar15 - 2;
          uVar20 = *puVar1 | uVar20;
          uVar19 = uVar4 | uVar19;
        } while (uVar15 != 0);
        uVar19 = uVar19 | uVar20;
        if (uVar17 != uVar11) goto LAB_00106600;
      }
      uVar8 = 0;
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = 0xfffffffe;
      }
      if (((uVar10 | uVar19 != 0) == 1) &&
         (lVar12 = EccPoint_compute_public_key(local_c8,local_c8 + 8,param_3), uVar8 = 0,
         lVar12 != 0)) {
        bVar9 = param_3[1];
        lVar12 = (long)(char)bVar9;
        uVar10 = (uint)(char)bVar9;
        if (0 < (int)uVar10) {
          uVar16 = (char)bVar9 * 8;
          puVar13 = param_2;
          do {
            uVar16 = uVar16 - 8;
            uVar10 = uVar10 - 1;
            if ((0x47 < uVar10) || (uVar10 >> 3 == 8)) goto LAB_0010673c;
            lVar12 = lVar12 + -1;
            *puVar13 = (char)(local_c8[uVar10 >> 3] >> (uVar16 & 0x38));
            puVar13 = puVar13 + 1;
          } while (lVar12 != 0);
          bVar9 = param_3[1];
        }
        uVar14 = (ulong)*param_3;
        if (8 < uVar14) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x106748);
          (*pcVar7)();
        }
        uVar10 = (uint)(char)bVar9;
        uVar11 = (ulong)uVar10;
        if (0 < (int)uVar10) {
          uVar16 = uVar10 * 8;
          puVar13 = param_2 + (char)bVar9;
          do {
            uVar16 = uVar16 - 8;
            uVar10 = uVar10 - 1;
            if (7 < (uVar10 >> 3) + uVar14) goto LAB_0010673c;
            uVar11 = uVar11 - 1;
            *puVar13 = (char)(local_c8[uVar14 + (uVar10 >> 3)] >> (uVar16 & 0x38));
            puVar13 = puVar13 + 1;
          } while (uVar11 != 0);
        }
        uVar8 = 1;
      }
      goto LAB_00106708;
    }
  }
  uVar8 = 0;
LAB_00106708:
  lVar12 = sp_el0;
  if (*(long *)(lVar12 + 0x5e0) != local_c8[0x10]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}



/* ---- uECC_sign_with_k @ 00106748 ---- */

void uECC_sign_with_k(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  bits2int(&local_68,param_4,(long)*(short *)(param_6 + 2) + 7U >> 3,param_6);
  uECC_sign_with_k_internal(param_1,param_2,param_3,&local_68,param_5,param_6);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- bits2int @ 00106800 ---- */

void bits2int(ulong *param_1,byte *param_2,uint param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *in_x18;
  ulong uVar12;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  sVar5 = *(short *)(param_4 + 2);
  iVar1 = sVar5 + 0x3f;
  iVar4 = sVar5 + 0x7e;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  uVar8 = (uint)((long)(int)sVar5 + 7U >> 3);
  uVar3 = iVar4 >> 6;
  if (param_3 <= uVar8) {
    uVar8 = param_3;
  }
  uVar12 = (ulong)uVar8;
  if (0 < (iVar4 << 0x12) >> 0x18) {
    memset(param_1,0,(ulong)((uVar3 & 0xff) << 3));
  }
  iVar1 = uVar8 + 0xe;
  if (-1 < (int)(uVar8 + 7)) {
    iVar1 = uVar8 + 7;
  }
  if (0 < (iVar1 << 0x15) >> 0x18) {
    memset(param_1,0,(ulong)((iVar1 >> 3 & 0xffU) << 3));
  }
  uVar6 = uVar8 * 8;
  uVar7 = uVar6;
  if (0 < (int)uVar8) {
    do {
      uVar12 = uVar12 - 1;
      uVar10 = (ulong)((uint)uVar12 & 0xfffffff8);
      *(ulong *)((long)param_1 + uVar10) =
           (ulong)*param_2 << (uVar7 - 8 & 0x38) | *(ulong *)((long)param_1 + uVar10);
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 8;
    } while (uVar12 != 0);
  }
  uVar8 = uVar6 - (int)*(short *)(param_4 + 2);
  if ((uint)(int)*(short *)(param_4 + 2) <= uVar6 && uVar8 != 0) {
    puVar9 = param_1 + uVar3;
    if (param_1 < puVar9) {
      uVar12 = 0;
      do {
        puVar9 = puVar9 + -1;
        uVar10 = *puVar9 >> ((ulong)uVar8 & 0x3f) | uVar12;
        uVar12 = *puVar9 << ((ulong)(0x40 - uVar8) & 0x3f);
        *puVar9 = uVar10;
      } while (param_1 < puVar9);
    }
    uVar12 = (ulong)uVar3;
    do {
      uVar8 = (int)uVar12 - 1;
      if ((uVar8 >> 7 & 1) != 0) break;
      uVar12 = (ulong)(uint)(int)(char)uVar8;
      uVar10 = *(ulong *)(param_4 + (uVar12 & 0xff) * 8 + 0x28);
      if (param_1[uVar12 & 0xff] < uVar10) {
        return;
      }
    } while (param_1[uVar12 & 0xff] <= uVar10);
    if ('\0' < (char)uVar3) {
      uVar12 = 0;
      uVar10 = (ulong)(uVar3 & 0xff);
      plVar11 = (long *)(param_4 + 0x28);
      do {
        uVar2 = *plVar11 + uVar12;
        if (uVar2 != 0) {
          uVar12 = (ulong)(*param_1 < uVar2);
        }
        uVar10 = uVar10 - 1;
        *param_1 = *param_1 - uVar2;
        plVar11 = plVar11 + 1;
        param_1 = param_1 + 1;
      } while (uVar10 != 0);
    }
  }
  return;
}



/* ---- uECC_sign_with_k_internal @ 001069a4 ---- */

void uECC_sign_with_k_internal
               (byte *param_1,undefined8 param_2,undefined4 param_3,ulong *param_4,
               undefined1 *param_5,byte *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  size_t sVar14;
  ulong uVar15;
  long lVar16;
  short sVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *in_x18;
  ulong *puVar24;
  char cVar25;
  ulong uVar26;
  size_t __n;
  ulong uVar27;
  undefined8 unaff_x30;
  ulong local_120 [8];
  ulong *local_e0 [2];
  ulong local_d0 [14];
  
  *in_x18 = unaff_x30;
  lVar16 = sp_el0;
  local_d0[0xc] = *(long *)(lVar16 + 0x5e0);
  sVar17 = *(short *)(param_6 + 2);
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_e0[0] = local_d0 + 4;
  local_e0[1] = local_d0;
  iVar13 = sVar17 + 0x3f;
  local_d0[2] = 0;
  local_d0[3] = 0;
  iVar3 = sVar17 + 0x7e;
  if (-1 < iVar13) {
    iVar3 = iVar13;
  }
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_120[6] = 0;
  local_120[7] = 0;
  local_120[4] = 0;
  local_120[5] = 0;
  local_120[2] = 0;
  local_120[3] = 0;
  local_120[0] = 0;
  local_120[1] = 0;
  if ('\0' < (char)*param_6) {
    uVar27 = (ulong)*param_6;
    sVar14 = 0;
    uVar10 = 0;
    uVar21 = iVar3 >> 6;
    uVar26 = (ulong)uVar21;
    __n = uVar27 * 8;
    do {
      puVar1 = (ulong *)((long)param_4 + sVar14);
      sVar14 = sVar14 + 8;
      uVar10 = *puVar1 | uVar10;
    } while (__n != sVar14);
    if (uVar10 != 0) {
      iVar13 = (int)(char)uVar21;
      puVar1 = (ulong *)(param_6 + 0x28);
      local_d0[10] = 0;
      local_d0[0xb] = 0;
      local_d0[9] = 0;
      if (iVar13 < 1) {
        bVar7 = false;
LAB_00106ba0:
        bVar9 = 0;
      }
      else {
        uVar11 = *param_4;
        uVar12 = uVar21 & 0xff;
        uVar15 = (ulong)uVar12;
        uVar10 = (ulong)(uVar11 != 0 && *puVar1 < uVar11);
        local_d0[8] = *puVar1 - uVar11;
        if (uVar12 != 1) {
          uVar11 = param_4[1] + uVar10;
          if (uVar11 != 0) {
            uVar10 = (ulong)(*(ulong *)(param_6 + 0x30) < uVar11);
          }
          local_d0[9] = *(ulong *)(param_6 + 0x30) - uVar11;
          if (uVar12 != 2) {
            uVar11 = param_4[2] + uVar10;
            if (uVar11 != 0) {
              uVar10 = (ulong)(*(ulong *)(param_6 + 0x38) < uVar11);
            }
            local_d0[10] = *(ulong *)(param_6 + 0x38) - uVar11;
            if (uVar12 != 3) {
              uVar11 = param_4[3] + uVar10;
              if (uVar11 != 0) {
                uVar10 = (ulong)(*(ulong *)(param_6 + 0x40) < uVar11);
              }
              local_d0[0xb] = *(ulong *)(param_6 + 0x40) - uVar11;
              if (uVar12 != 4) goto LAB_001072d4;
            }
          }
        }
        if (uVar12 < 2) {
          uVar19 = 0;
          uVar22 = 0;
LAB_00106b70:
          lVar16 = uVar15 - uVar19;
          puVar24 = local_d0 + uVar19 + 8;
          do {
            lVar16 = lVar16 + -1;
            uVar22 = *puVar24 | uVar22;
            puVar24 = puVar24 + 1;
          } while (lVar16 != 0);
        }
        else {
          uVar19 = uVar15 & 0xfe;
          uVar23 = 0;
          uVar22 = 0;
          puVar24 = local_d0 + 9;
          uVar11 = uVar19;
          do {
            puVar2 = puVar24 + -1;
            uVar4 = *puVar24;
            puVar24 = puVar24 + 2;
            uVar11 = uVar11 - 2;
            uVar23 = *puVar2 | uVar23;
            uVar22 = uVar4 | uVar22;
          } while (uVar11 != 0);
          uVar22 = uVar22 | uVar23;
          if (uVar19 != uVar15) goto LAB_00106b70;
        }
        bVar7 = uVar22 != 0;
        if (uVar10 == 0) goto LAB_00106ba0;
        bVar9 = 0xfe;
      }
      if ((bVar9 | bVar7) == 1) {
        if (iVar13 < 1) {
LAB_00106ca4:
          uVar12 = (uint)sVar17;
          if ((int)uVar12 < (int)(uVar21 << 0x18) >> 0x12) {
            uVar18 = (int)uVar12 >> 6;
            if ((uVar18 == 4) ||
               (0x20 < (-(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3)))
            goto LAB_001072d4;
            uVar10 = local_d0[((long)((ulong)uVar12 << 0x20) >> 0x26) + 4] >> ((long)sVar17 & 0x3fU)
                     & 1;
          }
          else {
            uVar10 = 0;
          }
          if (0 < iVar13) goto LAB_00106cf8;
        }
        else {
          uVar12 = uVar21 & 0xff;
          uVar11 = *puVar1;
          uVar10 = (ulong)(uVar11 != 0 && CARRY8(*param_4,uVar11));
          local_d0[4] = *param_4 + uVar11;
          if (uVar12 != 1) {
            uVar11 = param_4[1];
            local_d0[5] = uVar11 + uVar10 + *(long *)(param_6 + 0x30);
            if (local_d0[5] != uVar11) {
              uVar10 = (ulong)(local_d0[5] < uVar11);
            }
            if (uVar12 != 2) {
              uVar11 = param_4[2];
              local_d0[6] = uVar11 + uVar10 + *(long *)(param_6 + 0x38);
              if (local_d0[6] != uVar11) {
                uVar10 = (ulong)(local_d0[6] < uVar11);
              }
              if (uVar12 != 3) {
                uVar11 = param_4[3];
                local_d0[7] = uVar11 + uVar10 + *(long *)(param_6 + 0x40);
                if (local_d0[7] != uVar11) {
                  uVar10 = (ulong)(local_d0[7] < uVar11);
                }
                if (uVar12 != 4) goto LAB_001072d4;
              }
            }
          }
          if (uVar10 == 0) goto LAB_00106ca4;
          uVar10 = 1;
LAB_00106cf8:
          uVar11 = *puVar1;
          uVar12 = uVar21 & 0xff;
          local_d0[0] = local_d0[4] + uVar11;
          if (uVar12 != 1) {
            uVar11 = (ulong)(uVar11 != 0 && CARRY8(local_d0[4],uVar11));
            local_d0[1] = local_d0[5] + uVar11 + *(long *)(param_6 + 0x30);
            if (local_d0[1] != local_d0[5]) {
              uVar11 = (ulong)(local_d0[1] < local_d0[5]);
            }
            if (uVar12 != 2) {
              local_d0[2] = local_d0[6] + uVar11 + *(long *)(param_6 + 0x38);
              if (uVar12 != 3) {
                if (local_d0[2] != local_d0[6]) {
                  uVar11 = (ulong)(local_d0[2] < local_d0[6]);
                }
                local_d0[3] = local_d0[7] + uVar11 + *(long *)(param_6 + 0x40);
                if (uVar12 != 4) goto LAB_001072d4;
              }
            }
          }
        }
        if (g_rng_function == (undefined *)0x0) {
          puVar24 = (ulong *)0x0;
        }
        else {
          puVar24 = local_e0[uVar10];
          uVar8 = uECC_generate_random_int(puVar24,param_6 + 8,uVar27);
          if ((int)uVar8 == 0) goto LAB_00107230;
        }
        EccPoint_mult(local_120,param_6 + 0x48,local_e0[uVar10 ^ 1],puVar24,sVar17 + 1,param_6);
        uVar10 = 0;
        uVar11 = uVar27 - 9;
        puVar24 = local_120;
        do {
          if (uVar11 < 0xfffffffffffffff8) goto LAB_001072d4;
          uVar27 = uVar27 - 1;
          uVar10 = *puVar24 | uVar10;
          puVar24 = puVar24 + 1;
        } while (uVar27 != 0);
        if (uVar10 != 0) {
          if (g_rng_function == (undefined *)0x0) {
            if (0 < iVar13) {
              memset(local_d0 + 4,0,(ulong)((uVar21 & 0xff) << 3));
            }
            local_d0[4] = 1;
          }
          else {
            uVar8 = uECC_generate_random_int(local_d0 + 4,puVar1,uVar21);
            if ((int)uVar8 == 0) goto LAB_00107230;
          }
          uECC_vli_modMult(param_4,param_4,local_d0 + 4,puVar1,uVar21);
          uECC_vli_modInv(param_4,param_4,puVar1,uVar21);
          uECC_vli_modMult(param_4,param_4,local_d0 + 4,puVar1,uVar21);
          bVar9 = param_6[1];
          lVar16 = (long)(char)bVar9;
          uVar12 = (uint)(char)bVar9;
          if (0 < (int)uVar12) {
            uVar18 = (char)bVar9 * 8;
            puVar20 = param_5;
            do {
              uVar18 = uVar18 - 8;
              uVar12 = uVar12 - 1;
              if ((0x47 < uVar12) || (uVar12 >> 3 == 8)) goto LAB_001072d4;
              lVar16 = lVar16 + -1;
              *puVar20 = (char)(local_120[uVar12 >> 3] >> (uVar18 & 0x38));
              puVar20 = puVar20 + 1;
            } while (lVar16 != 0);
          }
          sVar17 = *(short *)(param_6 + 2);
          uVar12 = (uint)((long)sVar17 + 7U >> 3);
          iVar3 = uVar12 + 0xe;
          if (-1 < (int)(uVar12 + 7)) {
            iVar3 = uVar12 + 7;
          }
          if (0 < (iVar3 << 0x15) >> 0x18) {
            memset(local_d0 + 4,0,(ulong)((iVar3 >> 3 & 0xffU) << 3));
          }
          if (0 < (int)uVar12) {
            uVar18 = uVar12 * 8;
            uVar27 = (long)sVar17 + 7U >> 3 & 0xffffffff;
            do {
              uVar18 = uVar18 - 8;
              uVar12 = uVar12 - 1;
              if ((0x27 < uVar12) || (uVar5 = uVar12 >> 3, uVar5 == 4)) goto LAB_001072d4;
              uVar27 = uVar27 - 1;
              local_d0[(ulong)uVar5 + 4] =
                   (ulong)*param_1 << (uVar18 & 0x38) | local_d0[(ulong)uVar5 + 4];
              param_1 = param_1 + 1;
            } while (uVar27 != 0);
          }
          if (3 < iVar13 - 1U) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x1072e0);
            (*pcVar6)();
          }
          local_d0[iVar13 - 1U] = 0;
          memcpy(local_d0,local_120,__n);
          uECC_vli_modMult(local_d0,local_d0 + 4,local_d0,puVar1,uVar21);
          bits2int(local_d0 + 4,param_2,param_3,param_6);
          if (iVar13 < 1) {
LAB_0010708c:
            uVar27 = (ulong)uVar21;
            do {
              uVar12 = (int)uVar27 - 1;
              uVar27 = (ulong)uVar12;
              uVar10 = local_d0[2];
              if ((uVar12 >> 7 & 1) != 0) break;
              if (3 < (uVar12 & 0xff)) goto LAB_001072d4;
              if (local_d0[uVar27 & 0xff] < *(ulong *)(param_6 + (ulong)(byte)uVar12 * 8 + 0x28))
              goto LAB_00107168;
            } while (local_d0[uVar27 & 0xff] <= *(ulong *)(param_6 + (ulong)(byte)uVar12 * 8 + 0x28)
                    );
            if (0 < iVar13) goto LAB_001070cc;
          }
          else {
            uVar12 = uVar21 & 0xff;
            uVar27 = (ulong)(local_d0[0] != 0 && CARRY8(local_d0[4],local_d0[0]));
            local_d0[0] = local_d0[4] + local_d0[0];
            if (uVar12 != 1) {
              local_d0[1] = local_d0[5] + uVar27 + local_d0[1];
              if (local_d0[1] != local_d0[5]) {
                uVar27 = (ulong)(local_d0[1] < local_d0[5]);
              }
              if (uVar12 != 2) {
                local_d0[2] = local_d0[6] + uVar27 + local_d0[2];
                if (local_d0[2] != local_d0[6]) {
                  uVar27 = (ulong)(local_d0[2] < local_d0[6]);
                }
                if (uVar12 != 3) {
                  local_d0[3] = local_d0[7] + uVar27 + local_d0[3];
                  if (local_d0[3] != local_d0[7]) {
                    uVar27 = (ulong)(local_d0[3] < local_d0[7]);
                  }
                  if (uVar12 != 4) goto LAB_001072d4;
                }
              }
            }
            if (uVar27 == 0) goto LAB_0010708c;
LAB_001070cc:
            uVar27 = *puVar1;
            bVar7 = local_d0[0] < uVar27;
            local_d0[0] = local_d0[0] - uVar27;
            uVar12 = uVar21 & 0xff;
            uVar10 = local_d0[2];
            if (uVar12 != 1) {
              uVar11 = (ulong)(uVar27 != 0 && bVar7);
              uVar27 = *(long *)(param_6 + 0x30) + uVar11;
              bVar7 = local_d0[1] < uVar27;
              local_d0[1] = local_d0[1] - uVar27;
              if (uVar27 != 0) {
                uVar11 = (ulong)bVar7;
              }
              if (uVar12 != 2) {
                uVar27 = *(long *)(param_6 + 0x38) + uVar11;
                uVar10 = local_d0[2] - uVar27;
                if (uVar12 != 3) {
                  if (uVar27 != 0) {
                    uVar11 = (ulong)(local_d0[2] < uVar27);
                  }
                  local_d0[3] = local_d0[3] - (*(long *)(param_6 + 0x40) + uVar11);
                  local_d0[2] = uVar10;
                  if (uVar12 != 4) goto LAB_001072d4;
                }
              }
            }
          }
LAB_00107168:
          local_d0[2] = uVar10;
          uECC_vli_modMult(local_d0,local_d0,param_4,puVar1,uVar21);
          iVar13 = (int)(char)((char)uVar21 + -1);
          if (-2 < iVar13) {
            iVar13 = -1;
          }
          do {
            cVar25 = (char)uVar26;
            uVar21 = (int)uVar26 - 1;
            uVar26 = (ulong)uVar21;
            if ((uVar21 >> 7 & 1) != 0) {
              cVar25 = (char)(iVar13 + 1U);
              if ((iVar13 + 1U & 0xff) == 0) {
                iVar13 = 0;
                goto LAB_0010721c;
              }
              break;
            }
            if (3 < (uVar21 & 0xff)) goto LAB_001072d4;
          } while (local_d0[uVar26 & 0xff] == 0);
          lVar16 = (long)cVar25 + -1;
          if (((int)lVar16 == 4) || (0x20 < (ulong)(lVar16 * 8))) {
LAB_001072d4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1072d8);
            (*pcVar6)();
          }
          if (local_d0[lVar16] == 0) {
            sVar17 = 0;
          }
          else {
            sVar17 = 0;
            uVar27 = local_d0[lVar16];
            do {
              sVar17 = sVar17 + 1;
              bVar7 = 1 < uVar27;
              uVar27 = uVar27 >> 1;
            } while (bVar7);
          }
          iVar13 = (int)(short)(sVar17 + (short)lVar16 * 0x40);
LAB_0010721c:
          bVar9 = param_6[1];
          lVar16 = (long)(char)bVar9;
          uVar21 = (char)bVar9 * 8;
          if (iVar13 <= (int)uVar21) {
            uVar12 = (uint)(char)bVar9;
            if ((char)bVar9 < 1) {
              uVar8 = 1;
            }
            else {
              uVar8 = 1;
              puVar20 = param_5 + (int)uVar12;
              do {
                uVar21 = uVar21 - 8;
                uVar12 = uVar12 - 1;
                if ((0x27 < uVar12) || (uVar12 >> 3 == 4)) goto LAB_001072d4;
                lVar16 = lVar16 + -1;
                *puVar20 = (char)(local_d0[uVar12 >> 3] >> (uVar21 & 0x38));
                puVar20 = puVar20 + 1;
              } while (lVar16 != 0);
            }
            goto LAB_00107230;
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_00107230:
  lVar16 = sp_el0;
  if (*(long *)(lVar16 + 0x5e0) != local_d0[0xc]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}



/* ---- uECC_sign @ 001072e0 ---- */

void uECC_sign(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *in_x18;
  long lVar4;
  undefined8 unaff_x30;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar4 = sp_el0;
  local_58 = *(long *)(lVar4 + 0x5e0);
  lVar4 = 0x40;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  while( true ) {
    iVar2 = *(short *)(param_5 + 2) + 0x3f;
    iVar1 = *(short *)(param_5 + 2) + 0x7e;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    uVar3 = uECC_generate_random_int(&local_78,param_5 + 0x28,iVar1 >> 6);
    if ((int)uVar3 == 0) goto LAB_00107390;
    iVar2 = uECC_sign_with_k_internal(param_1,param_2,param_3,&local_78,param_4,param_5);
    if (iVar2 != 0) break;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar3 = 0;
LAB_00107390:
      lVar4 = sp_el0;
      if (*(long *)(lVar4 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
      }
      return;
    }
  }
  uVar3 = 1;
  goto LAB_00107390;
}



/* ---- uECC_sign_deterministic @ 001073cc ---- */

void uECC_sign_deterministic
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
               undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *in_x18;
  uint uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 unaff_x30;
  ulong local_88 [5];
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_88[4] = *(long *)(lVar1 + 0x5e0);
  sVar8 = *(short *)(param_6 + 2);
  lVar18 = param_4[4];
  uVar5 = *(uint *)((long)param_4 + 0x1c);
  iVar10 = sVar8 + 0x3f;
  lVar1 = lVar18 + (ulong)uVar5;
  cVar7 = *(char *)(param_6 + 1);
  iVar3 = sVar8 + 0x7e;
  if (-1 < iVar10) {
    iVar3 = iVar10;
  }
  if (uVar5 == 0) {
    uVar12 = 0;
    lVar17 = lVar18;
  }
  else {
    uVar12 = 0;
    do {
      *(undefined1 *)(lVar1 + uVar12) = 1;
      *(undefined1 *)(lVar18 + uVar12) = 0;
      uVar12 = uVar12 + 1;
      uVar6 = *(uint *)((long)param_4 + 0x1c);
    } while (uVar12 < uVar6);
    lVar17 = param_4[4] + (ulong)(uVar6 << 1);
    if (uVar6 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        *(byte *)(lVar17 + uVar12) = *(byte *)(lVar18 + uVar12) ^ 0x36;
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)((long)param_4 + 0x1c));
    }
  }
  if ((uint)uVar12 < *(uint *)(param_4 + 3)) {
    uVar12 = uVar12 & 0xffffffff;
    do {
      *(undefined1 *)(lVar17 + uVar12) = 0x36;
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_4 + 3));
  }
  pcVar19 = (code *)*param_4;
  __cfi_slowpath_diag(0x7fa11622bf16f537,pcVar19,&DAT_00100250);
  (*pcVar19)(param_4);
  pcVar19 = (code *)param_4[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100270);
  (*pcVar19)(param_4,lVar17,*(undefined4 *)(param_4 + 3));
  *(undefined1 *)(lVar1 + (ulong)*(uint *)((long)param_4 + 0x1c)) = 0;
  pcVar19 = (code *)param_4[1];
  iVar10 = *(int *)((long)param_4 + 0x1c);
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100290);
  (*pcVar19)(param_4,lVar1,iVar10 + 1);
  pcVar19 = (code *)param_4[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100290);
  (*pcVar19)(param_4,param_1,(int)cVar7);
  pcVar19 = (code *)param_4[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100290);
  (*pcVar19)(param_4,param_2,param_3);
  HMAC_finish(param_4,lVar18,lVar18);
  update_V(param_4,lVar18,lVar1);
  uVar6 = *(uint *)((long)param_4 + 0x1c);
  uVar12 = (ulong)uVar6;
  lVar17 = param_4[4] + (ulong)(uVar6 << 1);
  if (uVar6 != 0) {
    uVar12 = 0;
    do {
      *(byte *)(lVar17 + uVar12) = *(byte *)(lVar18 + uVar12) ^ 0x36;
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)((long)param_4 + 0x1c));
  }
  uVar6 = iVar3 >> 6;
  if ((uint)uVar12 < *(uint *)(param_4 + 3)) {
    uVar12 = uVar12 & 0xffffffff;
    do {
      *(undefined1 *)(lVar17 + uVar12) = 0x36;
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_4 + 3));
  }
  pcVar19 = (code *)*param_4;
  __cfi_slowpath_diag(0x7fa11622bf16f537,pcVar19,&DAT_00100250);
  (*pcVar19)(param_4);
  pcVar19 = (code *)param_4[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100270);
  (*pcVar19)(param_4,lVar17,*(undefined4 *)(param_4 + 3));
  *(undefined1 *)(lVar1 + (ulong)*(uint *)((long)param_4 + 0x1c)) = 1;
  pcVar19 = (code *)param_4[1];
  iVar10 = *(int *)((long)param_4 + 0x1c);
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100290);
  (*pcVar19)(param_4,lVar1,iVar10 + 1);
  pcVar19 = (code *)param_4[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100290);
  (*pcVar19)(param_4,param_1,(int)cVar7);
  pcVar19 = (code *)param_4[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100290);
  (*pcVar19)(param_4,param_2,param_3);
  HMAC_finish(param_4,lVar18,lVar18);
  update_V(param_4,lVar18,lVar1);
  lVar17 = 0;
  uVar9 = (int)(char)uVar6 - 1;
  do {
    uVar16 = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
LAB_001078a4:
    do {
      update_V(param_4,lVar18,lVar1);
      uVar12 = (ulong)*(uint *)((long)param_4 + 0x1c);
    } while (*(uint *)((long)param_4 + 0x1c) == 0);
    uVar4 = 0;
    if ((uVar16 & 0xff) < 0x21) {
      uVar4 = 0x20 - (uVar16 & 0xff);
    }
    uVar13 = (ulong)uVar4;
    uVar14 = (ulong)uVar5;
    while( true ) {
      uVar15 = (ulong)uVar16;
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1079f0);
        (*pcVar19)();
      }
      uVar16 = uVar16 + 1;
      *(undefined1 *)((long)local_88 + (uVar15 & 0xff)) = *(undefined1 *)(lVar18 + uVar14);
      if ((int)(-(uVar6 >> 7 & 1) & 0xfffff800 | (uVar6 & 0xff) << 3) <= (int)(uVar16 & 0xff))
      break;
      uVar13 = uVar13 - 1;
      uVar12 = uVar12 - 1;
      uVar14 = uVar14 + 1;
      if (uVar12 == 0) goto LAB_001078a4;
    }
    if ((int)sVar8 < (int)(-(uVar6 >> 7 & 1) & 0xffffc000 | (uVar6 & 0xff) << 6)) {
      if (3 < uVar9) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(0x5512,0x1079f4);
        (*pcVar19)();
      }
      local_88[uVar9] = local_88[uVar9] & 0xffffffffffffffffU >> ((long)-sVar8 & 0x3fU);
    }
    iVar10 = uECC_sign_with_k_internal(param_1,param_2,param_3,local_88,param_5,param_6);
    if (iVar10 != 0) {
      uVar11 = 1;
      goto LAB_001079b0;
    }
    uVar16 = *(uint *)((long)param_4 + 0x1c);
    uVar12 = (ulong)uVar16;
    lVar2 = param_4[4] + (ulong)(uVar16 << 1);
    if (uVar16 != 0) {
      uVar12 = 0;
      do {
        *(byte *)(lVar2 + uVar12) = *(byte *)(lVar18 + uVar12) ^ 0x36;
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)((long)param_4 + 0x1c));
    }
    if ((uint)uVar12 < *(uint *)(param_4 + 3)) {
      uVar12 = uVar12 & 0xffffffff;
      do {
        *(undefined1 *)(lVar2 + uVar12) = 0x36;
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_4 + 3));
    }
    pcVar19 = (code *)*param_4;
    __cfi_slowpath_diag(0x7fa11622bf16f537,pcVar19,&DAT_00100250);
    (*pcVar19)(param_4);
    pcVar19 = (code *)param_4[1];
    __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100270);
    (*pcVar19)(param_4,lVar2,*(undefined4 *)(param_4 + 3));
    *(undefined1 *)(lVar1 + (ulong)*(uint *)((long)param_4 + 0x1c)) = 0;
    pcVar19 = (code *)param_4[1];
    iVar10 = *(int *)((long)param_4 + 0x1c);
    __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar19,&DAT_00100290);
    (*pcVar19)(param_4,lVar1,iVar10 + 1);
    HMAC_finish(param_4,lVar18,lVar18);
    update_V(param_4,lVar18,lVar1);
    lVar17 = lVar17 + 1;
    if (lVar17 == 0x40) {
      uVar11 = 0;
LAB_001079b0:
      lVar1 = sp_el0;
      if (*(long *)(lVar1 + 0x5e0) != local_88[4]) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
      return;
    }
  } while( true );
}



/* ---- HMAC_finish @ 001079f8 ---- */

void HMAC_finish(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *in_x18;
  code *pcVar4;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = *(uint *)((long)param_1 + 0x1c);
  uVar3 = (ulong)uVar2;
  lVar1 = param_1[4] + (ulong)(uVar2 << 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      *(byte *)(lVar1 + uVar3) = *(byte *)(param_2 + uVar3) ^ 0x5c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((long)param_1 + 0x1c));
  }
  if ((uint)uVar3 < *(uint *)(param_1 + 3)) {
    uVar3 = uVar3 & 0xffffffff;
    do {
      *(undefined1 *)(lVar1 + uVar3) = 0x5c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 3));
  }
  pcVar4 = (code *)param_1[2];
  __cfi_slowpath_diag(0x95e162b60e1d248,pcVar4,&DAT_001002b0);
  (*pcVar4)(param_1,param_3);
  pcVar4 = (code *)*param_1;
  __cfi_slowpath_diag(0x7fa11622bf16f537,pcVar4,&DAT_001002d0);
  (*pcVar4)(param_1);
  pcVar4 = (code *)param_1[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar4,&DAT_001002f0);
  (*pcVar4)(param_1,lVar1,*(undefined4 *)(param_1 + 3));
  pcVar4 = (code *)param_1[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar4,&DAT_00100310);
  (*pcVar4)(param_1,param_3,*(undefined4 *)((long)param_1 + 0x1c));
  pcVar4 = (code *)param_1[2];
  __cfi_slowpath_diag(0x95e162b60e1d248,pcVar4,&DAT_00100330);
  (*pcVar4)(param_1,param_3);
  return;
}



/* ---- update_V @ 00107b84 ---- */

void update_V(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *in_x18;
  code *pcVar5;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar2 = *(uint *)((long)param_1 + 0x1c);
  uVar4 = (ulong)uVar2;
  lVar1 = param_1[4] + (ulong)(uVar2 << 1);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      *(byte *)(lVar1 + uVar4) = *(byte *)(param_2 + uVar4) ^ 0x36;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((long)param_1 + 0x1c));
  }
  if ((uint)uVar4 < *(uint *)(param_1 + 3)) {
    uVar4 = uVar4 & 0xffffffff;
    do {
      *(undefined1 *)(lVar1 + uVar4) = 0x36;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 3));
  }
  pcVar5 = (code *)*param_1;
  __cfi_slowpath_diag(0x7fa11622bf16f537,pcVar5,&DAT_00100250);
  (*pcVar5)(param_1);
  pcVar5 = (code *)param_1[1];
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar5,&DAT_00100270);
  (*pcVar5)(param_1,lVar1,*(undefined4 *)(param_1 + 3));
  pcVar5 = (code *)param_1[1];
  uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
  __cfi_slowpath_diag(0x2d1894f034769c3f,pcVar5,&DAT_00100290);
  (*pcVar5)(param_1,param_3,uVar3);
  HMAC_finish(param_1,param_2,param_3);
  return;
}



/* ---- uECC_verify @ 00107cd0 ---- */

void uECC_verify(byte *param_1,undefined8 param_2,undefined4 param_3,byte *param_4,byte *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  char cVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *in_x18;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  ulong *puVar26;
  size_t __n;
  ulong uVar27;
  long lVar28;
  code *pcVar29;
  ulong *puVar30;
  undefined8 unaff_x30;
  long local_2a0;
  ulong local_290 [17];
  byte *pbStack_208;
  ulong *local_200;
  ulong *puStack_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  long local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0 [42];
  
  *in_x18 = unaff_x30;
  lVar8 = sp_el0;
  local_1b0[0x28] = *(long *)(lVar8 + 0x5e0);
  local_1b0[0x1e] = 0;
  local_1b0[0x1f] = 0;
  local_1b0[0x1c] = 0;
  local_1b0[0x1d] = 0;
  local_1b0[0x1a] = 0;
  local_1b0[0x1b] = 0;
  iVar13 = *(short *)(param_5 + 2) + 0x3f;
  local_1b0[0x18] = 0;
  local_1b0[0x19] = 0;
  iVar12 = *(short *)(param_5 + 2) + 0x7e;
  if (-1 < iVar13) {
    iVar12 = iVar13;
  }
  local_1b0[0x16] = 0;
  local_1b0[0x17] = 0;
  local_1b0[0x14] = 0;
  local_1b0[0x15] = 0;
  lVar8 = (long)((iVar12 << 0x12) >> 0x18);
  local_1b0[0x12] = 0;
  local_1b0[0x13] = 0;
  lVar28 = lVar8 + -1;
  local_1b0[0x10] = 0;
  local_1b0[0x11] = 0;
  local_1b0[0xe] = 0;
  local_1b0[0xf] = 0;
  local_1b0[0xc] = 0;
  local_1b0[0xd] = 0;
  local_1b0[10] = 0;
  local_1b0[0xb] = 0;
  local_1b0[8] = 0;
  local_1b0[9] = 0;
  local_1b0[6] = 0;
  local_1b0[7] = 0;
  local_1b0[4] = 0;
  local_1b0[5] = 0;
  local_1b0[2] = 0;
  local_1b0[3] = 0;
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_200 = (ulong *)0x0;
  puStack_1f8 = (ulong *)0x0;
  local_290[0x10] = 0;
  pbStack_208 = (byte *)0x0;
  local_290[0xe] = 0;
  local_290[0xf] = 0;
  local_290[0xc] = 0;
  local_290[0xd] = 0;
  local_290[10] = 0;
  local_290[0xb] = 0;
  local_290[8] = 0;
  local_290[9] = 0;
  local_290[6] = 0;
  local_290[7] = 0;
  local_290[4] = 0;
  local_290[5] = 0;
  local_290[2] = 0;
  local_290[3] = 0;
  local_290[0] = 0;
  local_290[1] = 0;
  if ((uint)lVar28 < 4) {
    if (0x20 < (ulong)(lVar28 * 8)) {
LAB_00108964:
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x108968);
      (*pcVar29)();
    }
    bVar2 = param_5[1];
    lVar25 = (long)(char)bVar2;
    bVar3 = *param_5;
    uVar22 = (ulong)(char)bVar3;
    uVar1 = (int)(char)bVar2 + 7;
    local_1b0[lVar8 + 7] = 0;
    local_290[lVar8 + 3] = 0;
    uVar1 = (int)(uVar1 + ((uVar1 & 0xe000) >> 0xd)) >> 3;
    uVar23 = (ulong)((uVar1 & 0xff) << 3);
    local_290[lVar28] = 0;
    if (0 < (int)uVar1) {
      memset(local_290 + 8,0,uVar23);
    }
    uVar24 = (uint)(char)bVar2;
    uVar17 = uVar24 * 8;
    if (0 < (char)bVar2) {
      pbVar15 = param_1;
      lVar28 = lVar25;
      uVar6 = uVar24;
      uVar11 = uVar17;
      do {
        uVar11 = uVar11 - 8;
        uVar6 = uVar6 - 1;
        if (0x47 < uVar6) goto LAB_00108964;
        uVar16 = uVar6 >> 3;
        if (uVar16 == 8) goto LAB_00108964;
        lVar28 = lVar28 + -1;
        local_290[(ulong)uVar16 + 8] =
             (ulong)*pbVar15 << (uVar11 & 0x38) | local_290[(ulong)uVar16 + 8];
        pbVar15 = pbVar15 + 1;
      } while (lVar28 != 0);
    }
    if (bVar3 < 9) {
      puVar18 = local_290 + uVar22 + 8;
      if (0 < (int)uVar1) {
        memset(puVar18,0,uVar23);
      }
      uVar6 = (uint)(char)bVar2;
      if (0 < (int)uVar24) {
        pbVar15 = param_1 + (int)uVar24;
        lVar28 = lVar25;
        uVar11 = uVar6;
        uVar16 = uVar17;
        do {
          uVar16 = uVar16 - 8;
          uVar11 = uVar11 - 1;
          uVar20 = (ulong)(uVar11 >> 3);
          if (uVar20 + uVar22 == 8) goto LAB_00108964;
          if (0x40 < (uVar20 + uVar22) * 8) goto LAB_00108964;
          lVar28 = lVar28 + -1;
          puVar18[uVar20] = (ulong)*pbVar15 << (uVar16 & 0x38) | puVar18[uVar20];
          pbVar15 = pbVar15 + 1;
        } while (lVar28 != 0);
      }
      if (0 < (int)uVar1) {
        memset(local_290 + 4,0,uVar23);
      }
      if (0 < (int)uVar6) {
        pbVar15 = param_4;
        lVar28 = lVar25;
        uVar11 = uVar6;
        uVar16 = uVar17;
        do {
          uVar16 = uVar16 - 8;
          uVar11 = uVar11 - 1;
          if (0x27 < uVar11) goto LAB_00108964;
          uVar4 = uVar11 >> 3;
          if (uVar4 == 4) goto LAB_00108964;
          lVar28 = lVar28 + -1;
          local_290[(ulong)uVar4 + 4] =
               (ulong)*pbVar15 << (uVar16 & 0x38) | local_290[(ulong)uVar4 + 4];
          pbVar15 = pbVar15 + 1;
        } while (lVar28 != 0);
      }
      if (0 < (int)uVar1) {
        memset(local_290,0,uVar23);
      }
      if (0 < (int)uVar6) {
        pbVar15 = param_4 + (int)uVar24;
        do {
          uVar17 = uVar17 - 8;
          uVar6 = uVar6 - 1;
          if (0x27 < uVar6) goto LAB_00108964;
          uVar1 = uVar6 >> 3;
          if (uVar1 == 4) goto LAB_00108964;
          lVar25 = lVar25 + -1;
          local_290[uVar1] = (ulong)*pbVar15 << (uVar17 & 0x38) | local_290[uVar1];
          pbVar15 = pbVar15 + 1;
        } while (lVar25 != 0);
      }
      uVar23 = (ulong)bVar3;
      if ('\0' < (char)bVar3) {
        uVar9 = 0;
        uVar1 = iVar12 >> 6;
        puVar14 = local_290 + 4;
        uVar20 = uVar23;
        do {
          if (uVar23 - 5 < 0xfffffffffffffffc) goto LAB_00108964;
          uVar20 = uVar20 - 1;
          uVar9 = *puVar14 | uVar9;
          puVar14 = puVar14 + 1;
        } while (uVar20 != 0);
        if (uVar9 != 0) {
          uVar9 = 0;
          puVar14 = local_290;
          uVar20 = uVar23;
          do {
            uVar20 = uVar20 - 1;
            uVar9 = *puVar14 | uVar9;
            puVar14 = puVar14 + 1;
          } while (uVar20 != 0);
          if (uVar9 != 0) {
            puVar14 = (ulong *)(param_5 + 0x28);
            uVar20 = (ulong)uVar1;
            do {
              uVar17 = (int)uVar20 - 1;
              uVar20 = (ulong)uVar17;
              if ((uVar17 >> 7 & 1) != 0) break;
              if (3 < (uVar17 & 0xff)) goto LAB_00108964;
              if (local_290[(uVar20 & 0xff) + 4] <
                  *(ulong *)(param_5 + (ulong)(byte)uVar17 * 8 + 0x28)) {
                uVar20 = (ulong)uVar1;
                goto LAB_001080c4;
              }
            } while (local_290[(uVar20 & 0xff) + 4] <=
                     *(ulong *)(param_5 + (ulong)(byte)uVar17 * 8 + 0x28));
          }
        }
      }
LAB_0010807c:
      bVar5 = false;
LAB_00108080:
      lVar8 = sp_el0;
      if (*(long *)(lVar8 + 0x5e0) != local_1b0[0x28]) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar5);
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(0x5512,0x10896c);
  (*pcVar29)();
LAB_001080c4:
  uVar17 = (int)uVar20 - 1;
  uVar20 = (ulong)uVar17;
  if ((uVar17 >> 7 & 1) != 0) goto LAB_0010807c;
  if (3 < (uVar17 & 0xff)) goto LAB_00108964;
  if (*(ulong *)(param_5 + (ulong)(byte)uVar17 * 8 + 0x28) <= local_290[uVar20 & 0xff]) {
    bVar5 = false;
    if (*(ulong *)(param_5 + (ulong)(byte)uVar17 * 8 + 0x28) < local_290[uVar20 & 0xff])
    goto LAB_00108080;
    goto LAB_001080c4;
  }
  uECC_vli_modInv(local_1b0 + 0x14,local_290,puVar14,uVar1);
  local_1b0[lVar8 + 0x1b] = 0;
  bits2int(local_1b0 + 0x1c,param_2,param_3,param_5);
  uECC_vli_modMult(local_1b0 + 0x1c,local_1b0 + 0x1c,local_1b0 + 0x14,puVar14,uVar1);
  uECC_vli_modMult(local_1b0 + 0x18,local_290 + 4,local_1b0 + 0x14,puVar14,uVar1);
  __n = uVar23 << 3;
  memcpy(local_1b0 + 0xc,local_290 + 8,__n);
  puVar10 = local_1b0 + 0xc + uVar22;
  memcpy(puVar10,puVar18,__n);
  memcpy(local_1b0,param_5 + 0x48,__n);
  memcpy(&local_1d0,param_5 + uVar22 * 8 + 0x48,__n);
  uVar20 = 0;
  uVar9 = uVar23;
  puVar18 = local_1b0 + 0x14;
  puVar26 = local_1b0 + 0xc;
  puVar30 = local_1b0;
  do {
    uVar27 = *puVar30 + uVar20;
    if (uVar27 != 0) {
      uVar20 = (ulong)(*puVar26 < uVar27);
    }
    uVar9 = uVar9 - 1;
    *puVar18 = *puVar26 - uVar27;
    puVar18 = puVar18 + 1;
    puVar26 = puVar26 + 1;
    puVar30 = puVar30 + 1;
  } while (uVar9 != 0);
  if (uVar20 != 0) {
    uVar20 = 0;
    puVar18 = local_1b0 + 0x14;
    uVar9 = uVar23;
    pbVar15 = param_5;
    do {
      pbVar15 = pbVar15 + 8;
      uVar21 = *puVar18;
      uVar27 = uVar21 + uVar20 + *(long *)pbVar15;
      if (uVar27 != uVar21) {
        uVar20 = (ulong)(uVar27 < uVar21);
      }
      uVar9 = uVar9 - 1;
      *puVar18 = uVar27;
      puVar18 = puVar18 + 1;
    } while (uVar9 != 0);
  }
  puVar18 = (ulong *)(param_5 + 8);
  XYcZ_add(local_1b0,&local_1d0,local_1b0 + 0xc,puVar10,param_5);
  uECC_vli_modInv(local_1b0 + 0x14,local_1b0 + 0x14,puVar18,uVar22 & 0xffffffff);
  apply_z(local_1b0 + 0xc,puVar10,local_1b0 + 0x14,param_5);
  iVar13 = (int)(char)((char)uVar1 + -1);
  uVar20 = (ulong)uVar1;
  if (-2 < iVar13) {
    iVar13 = -1;
  }
  local_290[0x10] = 0;
  pbStack_208 = param_5 + 0x48;
  uVar17 = iVar13 + 1;
  local_200 = local_290 + 8;
  puStack_1f8 = local_1b0 + 0xc;
  do {
    cVar19 = (char)uVar20;
    uVar24 = (int)uVar20 - 1;
    uVar20 = (ulong)uVar24;
    if ((uVar24 >> 7 & 1) != 0) {
      cVar19 = (char)uVar17;
      if ((uVar17 & 0xff) != 0) break;
      iVar13 = 0;
      goto LAB_00108324;
    }
    if (3 < (uVar24 & 0xff)) goto LAB_00108964;
  } while (local_1b0[(uVar20 & 0xff) + 0x1c] == 0);
  lVar8 = (long)cVar19 + -1;
  iVar12 = (int)lVar8;
  if (iVar12 == 4) goto LAB_00108964;
  if (0x20 < (ulong)(lVar8 * 8)) goto LAB_00108964;
  if (local_1b0[(long)cVar19 + 0x1b] == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    uVar20 = local_1b0[(long)cVar19 + 0x1b];
    do {
      iVar13 = iVar13 + 1;
      bVar5 = 1 < uVar20;
      uVar20 = uVar20 >> 1;
    } while (bVar5);
  }
  iVar13 = iVar13 + iVar12 * 0x40;
LAB_00108324:
  uVar20 = (ulong)uVar1;
  do {
    cVar19 = (char)uVar20;
    uVar24 = (int)uVar20 - 1;
    uVar20 = (ulong)uVar24;
    if ((uVar24 >> 7 & 1) != 0) {
      cVar19 = (char)uVar17;
      if ((uVar17 & 0xff) != 0) break;
      iVar12 = 0;
      goto LAB_001083ac;
    }
    if (3 < (uVar24 & 0xff)) goto LAB_00108964;
  } while (local_1b0[(uVar20 & 0xff) + 0x18] == 0);
  lVar8 = (long)cVar19 + -1;
  iVar7 = (int)lVar8;
  if (iVar7 == 4) goto LAB_00108964;
  if (0x20 < (ulong)(lVar8 * 8)) goto LAB_00108964;
  if (local_1b0[(long)cVar19 + 0x17] == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    uVar20 = local_1b0[(long)cVar19 + 0x17];
    do {
      iVar12 = iVar12 + 1;
      bVar5 = 1 < uVar20;
      uVar20 = uVar20 >> 1;
    } while (bVar5);
  }
  iVar12 = iVar12 + iVar7 * 0x40;
LAB_001083ac:
  if ((short)iVar13 <= (short)iVar12) {
    iVar13 = iVar12;
  }
  uVar17 = (iVar13 + -1) * 0x10000 >> 0x16;
  if (uVar17 == 4) goto LAB_00108964;
  if (0x20 < (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3))
  goto LAB_00108964;
  uVar20 = (ulong)(uint)(int)(short)(iVar13 + -1);
  lVar8 = (long)(uVar20 << 0x20) >> 0x26;
  puVar10 = (ulong *)local_290[((local_1b0[lVar8 + 0x18] >> (uVar20 & 0x3f) & 1) << 1 |
                               local_1b0[lVar8 + 0x1c] >> (uVar20 & 0x3f) & 1) + 0x10];
  local_1b0[8] = *puVar10;
  iVar12 = (int)(char)bVar3;
  if (bVar3 == 1) {
    local_1b0[4] = puVar10[1];
  }
  else {
    local_1b0[9] = puVar10[1];
    if (bVar3 == 2) {
      local_1b0[4] = puVar10[2];
      local_1b0[5] = puVar10[3];
    }
    else {
      local_1b0[10] = puVar10[2];
      if ((bVar3 != 3) && (local_1b0[0xb] = puVar10[3], iVar12 != 4)) goto LAB_00108964;
      puVar10 = puVar10 + uVar22;
      local_1b0[4] = *puVar10;
      local_1b0[5] = puVar10[1];
      local_1b0[6] = puVar10[2];
      if (bVar3 != 3) {
        local_1b0[7] = puVar10[3];
      }
    }
  }
  memset(local_1b0 + 0x14,0,__n);
  local_1b0[0x14] = 1;
  if ((iVar13 - 2U >> 0xf & 1) == 0) {
    uVar20 = 0;
    local_2a0 = 0;
    uVar9 = 0;
    uVar17 = (int)(short)(iVar13 - 2U);
    do {
      pcVar29 = *(code **)(param_5 + 0xa8);
      if (1 < ((ulong)(pcVar29 + -0x102290) >> 3 | (long)pcVar29 << 0x3d)) {
        __cfi_slowpath_diag(0x89ce4e899ed50bb0,pcVar29,&DAT_001001d0);
      }
      (*pcVar29)(local_1b0 + 8,local_1b0 + 4,local_1b0 + 0x14,param_5);
      uVar24 = uVar17 & 0xffff;
      if (0x13f < uVar24) goto LAB_00108964;
      uVar6 = uVar17 >> 6 & 0x3ff;
      if (uVar6 == 4) goto LAB_00108964;
      puVar10 = (ulong *)local_290[((local_1b0[(ulong)uVar6 + 0x18] >> ((ulong)uVar24 & 0x3f) & 1)
                                    << 1 | local_1b0[(ulong)uVar6 + 0x1c] >> ((ulong)uVar24 & 0x3f)
                                           & 1) + 0x10];
      uVar27 = uVar9;
      if (puVar10 != (ulong *)0x0) {
        local_1b0[0] = *puVar10;
        if (iVar12 == 1) {
          local_1d0 = puVar10[uVar22];
        }
        else {
          local_1b0[1] = puVar10[1];
          if (bVar3 == 2) {
            local_1d0 = puVar10[2];
            local_1c8 = puVar10[3];
          }
          else {
            local_1b0[2] = puVar10[2];
            if ((bVar3 != 3) && (local_1b0[3] = puVar10[3], bVar3 != 4)) goto LAB_00108964;
            puVar10 = puVar10 + uVar22;
            local_1d0 = *puVar10;
            local_1c8 = puVar10[1];
            local_1c0 = puVar10[2];
            if ((bVar3 != 3) && (local_1b8 = puVar10[3], bVar3 != 4)) goto LAB_00108964;
          }
        }
        apply_z(local_1b0,&local_1d0,local_1b0 + 0x14,param_5);
        local_1f0 = local_1b0[8] - local_1b0[0];
        uVar21 = (ulong)(local_1b0[0] != 0 && local_1b0[8] < local_1b0[0]);
        if (bVar3 != 1) {
          uVar27 = local_1b0[1] + uVar21;
          uVar20 = local_1b0[9] - uVar27;
          if (uVar27 != 0) {
            uVar21 = (ulong)(local_1b0[9] < uVar27);
          }
          local_1e8 = uVar20;
          if (iVar12 != 2) {
            uVar27 = local_1b0[2] + uVar21;
            uVar9 = local_1b0[10] - uVar27;
            if (uVar27 != 0) {
              uVar21 = (ulong)(local_1b0[10] < uVar27);
            }
            local_1e0 = uVar9;
            if (bVar3 != 3) {
              uVar27 = local_1b0[3] + uVar21;
              local_2a0 = local_1b0[0xb] - uVar27;
              if (uVar27 != 0) {
                uVar21 = (ulong)(local_1b0[0xb] < uVar27);
              }
              local_1d8 = local_2a0;
              if (iVar12 != 4) goto LAB_00108964;
            }
          }
        }
        uVar27 = uVar9;
        if (uVar21 != 0) {
          uVar21 = *puVar18;
          bVar5 = CARRY8(local_1f0,uVar21);
          local_1f0 = local_1f0 + uVar21;
          if (iVar12 != 1) {
            uVar21 = (ulong)(uVar21 != 0 && bVar5);
            local_1e8 = uVar20 + uVar21 + *(long *)(param_5 + 0x10);
            if (local_1e8 != uVar20) {
              uVar21 = (ulong)(local_1e8 < uVar20);
            }
            uVar20 = local_1e8;
            if (bVar3 != 2) {
              local_1e0 = uVar9 + uVar21 + *(long *)(param_5 + 0x18);
              uVar27 = local_1e0;
              if (bVar3 != 3) {
                if (local_1e0 != uVar9) {
                  uVar21 = (ulong)(local_1e0 < uVar9);
                }
                local_2a0 = local_2a0 + uVar21 + *(long *)(param_5 + 0x20);
                local_1d8 = local_2a0;
                if (iVar12 != 4) goto LAB_00108964;
              }
            }
          }
        }
        XYcZ_add(local_1b0,&local_1d0,local_1b0 + 8,local_1b0 + 4,param_5);
        local_1b0[0x26] = 0;
        local_1b0[0x27] = 0;
        local_1b0[0x24] = 0;
        local_1b0[0x25] = 0;
        local_1b0[0x22] = 0;
        local_1b0[0x23] = 0;
        local_1b0[0x20] = 0;
        local_1b0[0x21] = 0;
        uECC_vli_mult(local_1b0 + 0x20,local_1b0 + 0x14,&local_1f0,*param_5);
        pcVar29 = *(code **)(param_5 + 0xc0);
        if (4 < ((ulong)(pcVar29 + -0x102250) >> 3 | (long)pcVar29 << 0x3d)) {
          __cfi_slowpath_diag(0x6dd230d89864710d,pcVar29,&DAT_00100350);
        }
        (*pcVar29)(local_1b0 + 0x14,local_1b0 + 0x20);
      }
      uVar24 = uVar17 & 0xffff;
      uVar9 = uVar27;
      uVar17 = uVar17 - 1;
    } while (uVar24 != 0);
  }
  uECC_vli_modInv(local_1b0 + 0x14,local_1b0 + 0x14,puVar18,uVar23);
  apply_z(local_1b0 + 8,local_1b0 + 4,local_1b0 + 0x14,param_5);
  uVar22 = local_1b0[10];
  uVar23 = (ulong)uVar1;
  while( true ) {
    uVar17 = (int)uVar23 - 1;
    uVar23 = (ulong)uVar17;
    if ((uVar17 >> 7 & 1) != 0) break;
    if (3 < (uVar17 & 0xff)) goto LAB_00108964;
    if (local_1b0[(uVar23 & 0xff) + 8] < *(ulong *)(param_5 + (ulong)(byte)uVar17 * 8 + 0x28))
    goto LAB_0010890c;
    if (*(ulong *)(param_5 + (ulong)(byte)uVar17 * 8 + 0x28) < local_1b0[(uVar23 & 0xff) + 8])
    break;
  }
  if ('\0' < (char)uVar1) {
    uVar23 = *puVar14;
    bVar5 = local_1b0[8] < uVar23;
    uVar1 = uVar1 & 0xff;
    local_1b0[8] = local_1b0[8] - uVar23;
    if (uVar1 != 1) {
      uVar20 = (ulong)(uVar23 != 0 && bVar5);
      uVar23 = *(long *)(param_5 + 0x30) + uVar20;
      if (uVar23 != 0) {
        uVar20 = (ulong)(local_1b0[9] < uVar23);
      }
      local_1b0[9] = local_1b0[9] - uVar23;
      if (uVar1 != 2) {
        uVar23 = *(long *)(param_5 + 0x38) + uVar20;
        local_1b0[10] = local_1b0[10] - uVar23;
        if (uVar1 != 3) {
          if (uVar23 != 0) {
            uVar20 = (ulong)(uVar22 < uVar23);
          }
          local_1b0[0xb] = local_1b0[0xb] - (*(long *)(param_5 + 0x40) + uVar20);
          if (uVar1 != 4) goto LAB_00108964;
        }
      }
    }
  }
LAB_0010890c:
  uVar23 = 0;
  uVar22 = (ulong)(iVar12 - 1) & 0xff;
  do {
    if ((uVar22 & 0x1ffffffffffffffc) != 0) goto LAB_00108964;
    bVar5 = uVar22 != 0;
    uVar23 = local_290[uVar22 + 4] ^ local_1b0[uVar22 + 8] | uVar23;
    uVar22 = uVar22 - 1;
  } while (bVar5);
  bVar5 = uVar23 == 0;
  goto LAB_00108080;
}



/* ---- uECC_vli_modInv @ 00108970 ---- */

void uECC_vli_modInv(void *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  bool bVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 *in_x18;
  size_t __n;
  ulong *puVar21;
  undefined8 unaff_x30;
  ulong local_d8 [17];
  
  *in_x18 = unaff_x30;
  lVar18 = sp_el0;
  local_d8[0x10] = *(long *)(lVar18 + 0x5e0);
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0;
  local_d8[5] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  if ('\0' < (char)param_4) {
    uVar14 = (ulong)param_4 & 0xff;
    uVar15 = 0;
    puVar16 = param_2;
    uVar17 = uVar14;
    do {
      uVar17 = uVar17 - 1;
      uVar15 = *puVar16 | uVar15;
      puVar16 = puVar16 + 1;
    } while (uVar17 != 0);
    if (uVar15 != 0) {
      __n = uVar14 << 3;
      puVar21 = local_d8 + 0xc;
      memcpy(local_d8 + 0xc,param_2,__n);
      puVar16 = local_d8 + 8;
      memcpy(local_d8 + 8,param_3,__n);
      puVar1 = local_d8 + 4;
      memset(local_d8 + 4,0,__n);
      local_d8[4] = 1;
      memset(local_d8,0,__n);
      uVar17 = -((ulong)(param_4 >> 7) & 1) & 0xfffffffffffff800 | ((ulong)param_4 & 0xff) << 3;
      lVar18 = (long)(char)param_4 + -1;
      puVar2 = (ulong *)((long)puVar16 + uVar17);
      puVar3 = (ulong *)((long)local_d8 + uVar17);
      puVar4 = (ulong *)((long)puVar21 + uVar17);
      puVar5 = (ulong *)((long)puVar1 + uVar17);
LAB_00108a9c:
      uVar17 = (ulong)param_4;
LAB_00108aa0:
      do {
        uVar10 = local_d8[0xe];
        uVar9 = local_d8[0xd];
        uVar8 = local_d8[0xc];
        uVar7 = local_d8[10];
        uVar6 = local_d8[9];
        uVar19 = local_d8[8];
        uVar15 = local_d8[6];
        uVar14 = local_d8[2];
        if ((char)uVar17 < '\x01') {
          memcpy(param_1,local_d8 + 4,__n);
          goto LAB_0010943c;
        }
        if ((param_4 - 5 & 0xff) < 0xfc) goto LAB_00109474;
        uVar17 = (ulong)((int)uVar17 - 1);
      } while (puVar21[uVar17 & 0xff] == puVar16[uVar17 & 0xff]);
      puVar20 = puVar1;
      if ((local_d8[0xc] & 1) == 0) {
        if (puVar21 < puVar4) {
          uVar17 = 0;
          puVar13 = puVar4;
          do {
            puVar13 = puVar13 + -1;
            uVar14 = uVar17 | *puVar13 >> 1;
            uVar17 = *puVar13 << 0x3f;
            *puVar13 = uVar14;
          } while (puVar21 < puVar13);
        }
        if ((local_d8[4] & 1) != 0) {
          uVar17 = *param_3;
          uVar14 = (ulong)(uVar17 != 0 && CARRY8(uVar17,local_d8[4]));
          local_d8[4] = uVar17 + local_d8[4];
          if ((param_4 & 0xff) != 1) {
            uVar17 = local_d8[5] + uVar14 + param_3[1];
            if (uVar17 != local_d8[5]) {
              uVar14 = (ulong)(uVar17 < local_d8[5]);
            }
            local_d8[5] = uVar17;
            if ((param_4 & 0xff) != 2) {
              uVar17 = local_d8[6] + uVar14 + param_3[2];
              if (uVar17 != local_d8[6]) {
                uVar14 = (ulong)(uVar17 < local_d8[6]);
              }
              local_d8[6] = uVar17;
              if ((param_4 & 0xff) != 3) {
                uVar17 = local_d8[7] + uVar14 + param_3[3];
                if (uVar17 != local_d8[7]) {
                  uVar14 = (ulong)(uVar17 < local_d8[7]);
                }
                local_d8[7] = uVar17;
                if ((param_4 & 0xff) != 4) goto LAB_00109474;
              }
            }
          }
          if (puVar1 < puVar5) {
            uVar17 = 0;
            puVar13 = puVar5;
            do {
              puVar13 = puVar13 + -1;
              uVar15 = uVar17 | *puVar13 >> 1;
              uVar17 = *puVar13 << 0x3f;
              *puVar13 = uVar15;
            } while (puVar1 < puVar13);
          }
          goto joined_r0x00109178;
        }
        uVar17 = (ulong)param_4;
        if (puVar1 < puVar5) goto LAB_00109388;
        goto LAB_00108aa0;
      }
      if ((local_d8[8] & 1) == 0) {
        if (puVar16 < puVar2) {
          uVar17 = 0;
          puVar20 = puVar2;
          do {
            puVar20 = puVar20 + -1;
            uVar14 = uVar17 | *puVar20 >> 1;
            uVar17 = *puVar20 << 0x3f;
            *puVar20 = uVar14;
          } while (puVar16 < puVar20);
        }
        if ((local_d8[0] & 1) == 0) {
          uVar17 = (ulong)param_4;
          if (puVar3 <= local_d8) goto LAB_00108aa0;
          uVar17 = 0;
          puVar20 = puVar3;
          do {
            puVar20 = puVar20 + -1;
            uVar14 = uVar17 | *puVar20 >> 1;
            uVar17 = *puVar20 << 0x3f;
            *puVar20 = uVar14;
          } while (local_d8 < puVar20);
          goto LAB_00108a9c;
        }
        uVar17 = *param_3;
        uVar14 = (ulong)(uVar17 != 0 && CARRY8(uVar17,local_d8[0]));
        local_d8[0] = uVar17 + local_d8[0];
        if ((param_4 & 0xff) != 1) {
          uVar17 = local_d8[1] + uVar14 + param_3[1];
          if (uVar17 != local_d8[1]) {
            uVar14 = (ulong)(uVar17 < local_d8[1]);
          }
          local_d8[1] = uVar17;
          if ((param_4 & 0xff) != 2) {
            uVar17 = local_d8[2] + uVar14 + param_3[2];
            if (uVar17 != local_d8[2]) {
              uVar14 = (ulong)(uVar17 < local_d8[2]);
            }
            local_d8[2] = uVar17;
            if ((param_4 & 0xff) != 3) {
              uVar17 = local_d8[3] + uVar14 + param_3[3];
              if (uVar17 != local_d8[3]) {
                uVar14 = (ulong)(uVar17 < local_d8[3]);
              }
              local_d8[3] = uVar17;
              if ((param_4 & 0xff) != 4) goto LAB_00109474;
            }
          }
        }
        puVar20 = local_d8;
        if (local_d8 < puVar3) {
          uVar17 = 0;
          puVar13 = puVar3;
          do {
            puVar13 = puVar13 + -1;
            uVar15 = uVar17 | *puVar13 >> 1;
            uVar17 = *puVar13 << 0x3f;
            *puVar13 = uVar15;
          } while (local_d8 < puVar13);
        }
      }
      else if (puVar16[uVar17 & 0xff] < puVar21[uVar17 & 0xff]) {
        local_d8[0xc] = local_d8[0xc] - local_d8[8];
        if ((param_4 & 0xff) != 1) {
          uVar17 = local_d8[9];
          if (uVar8 < local_d8[8]) {
            uVar17 = local_d8[9] + 1;
          }
          local_d8[0xd] = local_d8[0xd] - uVar17;
          if ((param_4 & 0xff) != 2) {
            bVar12 = uVar8 < local_d8[8];
            if (uVar17 != 0) {
              bVar12 = uVar9 < uVar17;
            }
            uVar17 = bVar12 + local_d8[10];
            local_d8[0xe] = local_d8[0xe] - uVar17;
            if ((param_4 & 0xff) != 3) {
              uVar14 = (ulong)bVar12;
              if (uVar17 != 0) {
                uVar14 = (ulong)(uVar10 < uVar17);
              }
              local_d8[0xf] = local_d8[0xf] - (uVar14 + local_d8[0xb]);
            }
          }
        }
        if (puVar21 < puVar4) {
          uVar17 = 0;
          puVar13 = puVar4;
          do {
            puVar13 = puVar13 + -1;
            uVar14 = uVar17 | *puVar13 >> 1;
            uVar17 = *puVar13 << 0x3f;
            *puVar13 = uVar14;
          } while (puVar21 < puVar13);
        }
        uVar17 = (ulong)param_4;
        do {
          if ((char)uVar17 < '\x01') {
LAB_00108f38:
            bVar12 = local_d8[4] < local_d8[0];
            local_d8[4] = local_d8[4] - local_d8[0];
            if ((param_4 & 0xff) == 1) goto LAB_0010909c;
            bVar12 = local_d8[0] != 0 && bVar12;
            goto LAB_00109020;
          }
          uVar17 = (ulong)((int)uVar17 - 1);
          uVar14 = local_d8[uVar17 & 0xff];
          if (uVar14 < puVar1[uVar17 & 0xff]) goto LAB_00108f38;
        } while (uVar14 <= puVar1[uVar17 & 0xff]);
        uVar14 = *param_3;
        uVar17 = local_d8[4] + uVar14;
        if ((param_4 & 0xff) == 1) {
          local_d8[4] = uVar17 - local_d8[0];
        }
        else {
          uVar19 = (ulong)(uVar14 != 0 && CARRY8(local_d8[4],uVar14));
          uVar14 = local_d8[5] + uVar19 + param_3[1];
          if (uVar14 != local_d8[5]) {
            uVar19 = (ulong)(uVar14 < local_d8[5]);
          }
          if ((param_4 & 0xff) != 2) {
            local_d8[6] = local_d8[6] + uVar19 + param_3[2];
            if ((param_4 & 0xff) != 3) {
              if (local_d8[6] != uVar15) {
                uVar19 = (ulong)(local_d8[6] < uVar15);
              }
              local_d8[7] = local_d8[7] + uVar19 + param_3[3];
            }
          }
          local_d8[4] = uVar17 - local_d8[0];
          bVar12 = local_d8[0] != 0 && uVar17 < local_d8[0];
          local_d8[5] = uVar14;
LAB_00109020:
          uVar15 = local_d8[6];
          uVar17 = local_d8[1] + bVar12;
          uVar14 = (ulong)bVar12;
          if (uVar17 != 0) {
            uVar14 = (ulong)(local_d8[5] < uVar17);
          }
          local_d8[5] = local_d8[5] - uVar17;
          if ((param_4 & 0xff) != 2) {
            uVar17 = local_d8[2] + uVar14;
            local_d8[6] = local_d8[6] - uVar17;
            if ((param_4 & 0xff) != 3) {
              if (uVar17 != 0) {
                uVar14 = (ulong)(uVar15 < uVar17);
              }
              local_d8[7] = local_d8[7] - (local_d8[3] + uVar14);
              if ((param_4 & 0xff) != 4) goto LAB_00109474;
            }
          }
        }
LAB_0010909c:
        if ((local_d8[4] & 1) == 0) {
          uVar17 = (ulong)param_4;
          if (puVar5 <= puVar1) goto LAB_00108aa0;
          uVar17 = 0;
          puVar20 = puVar5;
          do {
            puVar20 = puVar20 + -1;
            uVar14 = uVar17 | *puVar20 >> 1;
            uVar17 = *puVar20 << 0x3f;
            *puVar20 = uVar14;
          } while (puVar1 < puVar20);
          goto LAB_00108a9c;
        }
        uVar17 = *param_3;
        uVar14 = (ulong)(uVar17 != 0 && CARRY8(uVar17,local_d8[4]));
        local_d8[4] = uVar17 + local_d8[4];
        if ((param_4 & 0xff) != 1) {
          uVar17 = local_d8[5] + uVar14 + param_3[1];
          if (uVar17 != local_d8[5]) {
            uVar14 = (ulong)(uVar17 < local_d8[5]);
          }
          local_d8[5] = uVar17;
          if ((param_4 & 0xff) != 2) {
            uVar17 = local_d8[6] + uVar14 + param_3[2];
            if (uVar17 != local_d8[6]) {
              uVar14 = (ulong)(uVar17 < local_d8[6]);
            }
            local_d8[6] = uVar17;
            if ((param_4 & 0xff) != 3) {
              uVar17 = local_d8[7] + uVar14 + param_3[3];
              if (uVar17 != local_d8[7]) {
                uVar14 = (ulong)(uVar17 < local_d8[7]);
              }
              local_d8[7] = uVar17;
            }
          }
        }
        if (puVar1 < puVar5) {
          uVar17 = 0;
          puVar13 = puVar5;
          do {
            puVar13 = puVar13 + -1;
            uVar15 = uVar17 | *puVar13 >> 1;
            uVar17 = *puVar13 << 0x3f;
            *puVar13 = uVar15;
          } while (puVar1 < puVar13);
        }
      }
      else {
        local_d8[8] = local_d8[8] - local_d8[0xc];
        if ((param_4 & 0xff) != 1) {
          uVar17 = local_d8[0xd];
          if (uVar19 < local_d8[0xc]) {
            uVar17 = local_d8[0xd] + 1;
          }
          local_d8[9] = local_d8[9] - uVar17;
          if ((param_4 & 0xff) != 2) {
            bVar12 = uVar19 < local_d8[0xc];
            if (uVar17 != 0) {
              bVar12 = uVar6 < uVar17;
            }
            uVar17 = bVar12 + local_d8[0xe];
            local_d8[10] = local_d8[10] - uVar17;
            if ((param_4 & 0xff) != 3) {
              uVar15 = (ulong)bVar12;
              if (uVar17 != 0) {
                uVar15 = (ulong)(uVar7 < uVar17);
              }
              local_d8[0xb] = local_d8[0xb] - (uVar15 + local_d8[0xf]);
            }
          }
        }
        if (puVar16 < puVar2) {
          uVar17 = 0;
          puVar20 = puVar2;
          do {
            puVar20 = puVar20 + -1;
            uVar15 = uVar17 | *puVar20 >> 1;
            uVar17 = *puVar20 << 0x3f;
            *puVar20 = uVar15;
          } while (puVar16 < puVar20);
        }
        uVar17 = (ulong)param_4;
        do {
          if ((char)uVar17 < '\x01') {
LAB_00108f68:
            bVar12 = local_d8[0] < local_d8[4];
            local_d8[0] = local_d8[0] - local_d8[4];
            if ((param_4 & 0xff) == 1) goto LAB_0010928c;
            bVar12 = local_d8[4] != 0 && bVar12;
            goto LAB_00109210;
          }
          uVar17 = (ulong)((int)uVar17 - 1);
          uVar15 = local_d8[uVar17 & 0xff];
          if (puVar1[uVar17 & 0xff] < uVar15) goto LAB_00108f68;
        } while (puVar1[uVar17 & 0xff] <= uVar15);
        uVar15 = *param_3;
        uVar17 = local_d8[0] + uVar15;
        if ((param_4 & 0xff) == 1) {
          local_d8[0] = uVar17 - local_d8[4];
        }
        else {
          uVar19 = (ulong)(uVar15 != 0 && CARRY8(local_d8[0],uVar15));
          uVar15 = local_d8[1] + uVar19 + param_3[1];
          if (uVar15 != local_d8[1]) {
            uVar19 = (ulong)(uVar15 < local_d8[1]);
          }
          if ((param_4 & 0xff) != 2) {
            local_d8[2] = local_d8[2] + uVar19 + param_3[2];
            if ((param_4 & 0xff) != 3) {
              if (local_d8[2] != uVar14) {
                uVar19 = (ulong)(local_d8[2] < uVar14);
              }
              local_d8[3] = local_d8[3] + uVar19 + param_3[3];
            }
          }
          local_d8[0] = uVar17 - local_d8[4];
          bVar12 = local_d8[4] != 0 && uVar17 < local_d8[4];
          local_d8[1] = uVar15;
LAB_00109210:
          uVar15 = local_d8[2];
          uVar17 = local_d8[5] + bVar12;
          uVar14 = (ulong)bVar12;
          if (uVar17 != 0) {
            uVar14 = (ulong)(local_d8[1] < uVar17);
          }
          local_d8[1] = local_d8[1] - uVar17;
          if ((param_4 & 0xff) != 2) {
            uVar17 = local_d8[6] + uVar14;
            local_d8[2] = local_d8[2] - uVar17;
            if ((param_4 & 0xff) != 3) {
              if (uVar17 != 0) {
                uVar14 = (ulong)(uVar15 < uVar17);
              }
              local_d8[3] = local_d8[3] - (local_d8[7] + uVar14);
              if ((param_4 & 0xff) != 4) goto LAB_00109474;
            }
          }
        }
LAB_0010928c:
        if ((local_d8[0] & 1) == 0) {
          uVar17 = (ulong)param_4;
          if (puVar3 <= local_d8) goto LAB_00108aa0;
          uVar17 = 0;
          puVar20 = puVar3;
          do {
            puVar20 = puVar20 + -1;
            uVar14 = uVar17 | *puVar20 >> 1;
            uVar17 = *puVar20 << 0x3f;
            *puVar20 = uVar14;
          } while (local_d8 < puVar20);
          goto LAB_00108a9c;
        }
        uVar17 = *param_3;
        uVar14 = (ulong)(uVar17 != 0 && CARRY8(uVar17,local_d8[0]));
        local_d8[0] = uVar17 + local_d8[0];
        if ((param_4 & 0xff) != 1) {
          uVar17 = local_d8[1] + uVar14 + param_3[1];
          if (uVar17 != local_d8[1]) {
            uVar14 = (ulong)(uVar17 < local_d8[1]);
          }
          local_d8[1] = uVar17;
          if ((param_4 & 0xff) != 2) {
            uVar17 = local_d8[2] + uVar14 + param_3[2];
            if (uVar17 != local_d8[2]) {
              uVar14 = (ulong)(uVar17 < local_d8[2]);
            }
            local_d8[2] = uVar17;
            if ((param_4 & 0xff) != 3) {
              uVar17 = local_d8[3] + uVar14 + param_3[3];
              if (uVar17 != local_d8[3]) {
                uVar14 = (ulong)(uVar17 < local_d8[3]);
              }
              local_d8[3] = uVar17;
            }
          }
        }
        puVar20 = local_d8;
        if (local_d8 < puVar3) {
          uVar17 = 0;
          puVar13 = puVar3;
          do {
            puVar13 = puVar13 + -1;
            uVar15 = uVar17 | *puVar13 >> 1;
            uVar17 = *puVar13 << 0x3f;
            *puVar13 = uVar15;
          } while (local_d8 < puVar13);
        }
      }
joined_r0x00109178:
      uVar17 = (ulong)param_4;
      if (uVar14 != 0) {
        if (lVar18 == 4 || 0x20 < (ulong)(lVar18 * 8)) {
LAB_00109474:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x109478);
          (*pcVar11)();
        }
        uVar17 = (ulong)param_4;
        puVar20[lVar18] = puVar20[lVar18] | 0x8000000000000000;
      }
      goto LAB_00108aa0;
    }
    memset(param_1,0,uVar14 << 3);
  }
LAB_0010943c:
  lVar18 = sp_el0;
  if (*(long *)(lVar18 + 0x5e0) != local_d8[0x10]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00109388:
  uVar17 = 0;
  puVar20 = puVar5;
  do {
    puVar20 = puVar20 + -1;
    uVar14 = uVar17 | *puVar20 >> 1;
    uVar17 = *puVar20 << 0x3f;
    *puVar20 = uVar14;
  } while (puVar1 < puVar20);
  goto LAB_00108a9c;
}



/* ---- uECC_vli_modMult @ 0010947c ---- */

void uECC_vli_modMult(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                     ulong param_5)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 ***pppuVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  char cVar11;
  code *pcVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  ulong *puVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  char cVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *in_x18;
  uint uVar24;
  uint uVar25;
  undefined8 unaff_x30;
  undefined8 ***local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *****local_f8 [10];
  ulong local_a8 [9];
  
  *in_x18 = unaff_x30;
  lVar22 = sp_el0;
  local_a8[8] = *(long *)(lVar22 + 0x5e0);
  local_108 = 0;
  local_100 = 0;
  local_118 = 0;
  local_110 = 0;
  local_128 = 0;
  local_120 = 0;
  local_138 = (undefined8 ***)0x0;
  local_130 = 0;
  uECC_vli_mult(&local_138,param_2,param_3,param_5 & 0xffffffff);
  uVar24 = (uint)param_5;
  cVar11 = (char)param_5;
  iVar17 = (int)(char)(cVar11 + -1);
  iVar7 = (int)cVar11;
  uVar5 = -(uVar24 >> 7 & 1) & 0xfffffe00 | (uVar24 & 0xff) << 1;
  local_f8[0] = local_f8 + 2;
  local_f8[1] = (undefined8 *****)&local_138;
  if (-2 < iVar17) {
    iVar17 = -1;
  }
  uVar20 = param_5 & 0xffffffff;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_f8[8] = (undefined8 *****)0x0;
  local_f8[9] = (undefined8 *****)0x0;
  local_f8[6] = (undefined8 *****)0x0;
  local_f8[7] = (undefined8 *****)0x0;
  local_f8[4] = (undefined8 *****)0x0;
  local_f8[5] = (undefined8 *****)0x0;
  local_f8[2] = (undefined8 *****)0x0;
  local_f8[3] = (undefined8 *****)0x0;
  do {
    cVar19 = (char)uVar20;
    uVar6 = (int)uVar20 - 1;
    if ((uVar6 >> 7 & 1) != 0) {
      cVar19 = (char)(iVar17 + 1U);
      if ((iVar17 + 1U & 0xff) == 0) {
        iVar17 = 0;
        goto LAB_00109584;
      }
      break;
    }
    uVar20 = (ulong)(uint)(int)(char)uVar6;
  } while (param_4[uVar20 & 0xff] == 0);
  if (param_4[cVar19 + -1] == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    uVar20 = param_4[cVar19 + -1];
    do {
      iVar17 = iVar17 + 1;
      bVar1 = 1 < uVar20;
      uVar20 = uVar20 >> 1;
    } while (bVar1);
  }
  iVar17 = iVar17 + (cVar19 + -1) * 0x40;
LAB_00109584:
  iVar17 = (-(uVar24 >> 7 & 1) & 0xffff8000 | (uVar24 & 0xff) << 7) - iVar17;
  sVar8 = (short)iVar17;
  uVar25 = (uint)sVar8;
  iVar17 = iVar17 + (uVar25 >> 0x19 & 0x3f);
  uVar9 = (ushort)iVar17;
  uVar6 = iVar17 * 0x10000 >> 0x16;
  uVar10 = (uint)(short)(sVar8 - (uVar9 & 0xffc0));
  if (0 < ((int)(short)uVar9 << 0x12) >> 0x18) {
    memset(local_a8,0,(ulong)((uVar6 & 0xff) << 3));
  }
  if ((int)uVar10 < 1) {
    if (8 < (uVar6 & 0xff)) {
LAB_00109924:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(0x5512,0x109928);
      (*pcVar12)();
    }
    if (0 < iVar7) {
      memcpy(local_a8 + (uVar6 & 0xff),param_4,(param_5 & 0xff) << 3);
    }
  }
  else if ((param_5 & 0xff) != 0) {
    uVar20 = (ulong)(char)uVar6;
    uVar23 = uVar20;
    if (7 < uVar20) {
      uVar23 = 8;
    }
    uVar18 = 0;
    lVar21 = (long)cVar11;
    lVar22 = uVar23 - 8;
    do {
      if (lVar22 == 0) goto LAB_00109924;
      if ((uVar20 & 0x1ffffffffffffff8) != 0) goto LAB_00109928;
      lVar21 = lVar21 + -1;
      lVar22 = lVar22 + 1;
      uVar23 = *param_4 << ((ulong)uVar10 & 0x3f) | uVar18;
      uVar18 = *param_4 >> ((ulong)(0x40 - uVar10) & 0x3f);
      local_a8[uVar20] = uVar23;
      uVar20 = uVar20 + 1;
      param_4 = param_4 + 1;
    } while (lVar21 != 0);
  }
  if ((int)uVar25 < 0) {
    ppppuVar13 = &local_138;
  }
  else {
    uVar6 = iVar7 - 1;
    uVar20 = -((param_5 & 0xffffffff) >> 7 & 1) & 0xfffffffffffff800 | (param_5 & 0xff) << 3;
    puVar2 = (ulong *)((long)local_a8 + uVar20);
    puVar3 = (ulong *)((long)puVar2 + uVar20);
    if ((int)uVar5 < 2) {
      uVar5 = 1;
    }
    uVar20 = 1;
    do {
      uVar23 = uVar20;
      if (iVar7 < 1) {
        uVar18 = 0;
      }
      else {
        ppppuVar14 = local_f8[uVar23];
        ppppuVar13 = local_f8[uVar23 ^ 1];
        uVar18 = (ulong)((undefined8 ***)local_a8[0] != (undefined8 ***)0x0 &&
                        *ppppuVar14 < local_a8[0]);
        *ppppuVar13 = (undefined8 ***)((long)*ppppuVar14 - local_a8[0]);
        pppuVar4 = (undefined8 ***)(local_a8[1] + uVar18);
        if (pppuVar4 != (undefined8 ***)0x0) {
          uVar18 = (ulong)(ppppuVar14[1] < pppuVar4);
        }
        ppppuVar13[1] = (undefined8 ***)((long)ppppuVar14[1] - (long)pppuVar4);
        if (uVar5 != 2) {
          pppuVar4 = (undefined8 ***)(local_a8[2] + uVar18);
          if (pppuVar4 != (undefined8 ***)0x0) {
            uVar18 = (ulong)(ppppuVar14[2] < pppuVar4);
          }
          ppppuVar13[2] = (undefined8 ***)((long)ppppuVar14[2] - (long)pppuVar4);
          if (uVar5 != 3) {
            pppuVar4 = (undefined8 ***)(local_a8[3] + uVar18);
            if (pppuVar4 != (undefined8 ***)0x0) {
              uVar18 = (ulong)(ppppuVar14[3] < pppuVar4);
            }
            ppppuVar13[3] = (undefined8 ***)((long)ppppuVar14[3] - (long)pppuVar4);
            if (uVar5 != 4) {
              pppuVar4 = (undefined8 ***)(local_a8[4] + uVar18);
              if (pppuVar4 != (undefined8 ***)0x0) {
                uVar18 = (ulong)(ppppuVar14[4] < pppuVar4);
              }
              ppppuVar13[4] = (undefined8 ***)((long)ppppuVar14[4] - (long)pppuVar4);
              if (uVar5 != 5) {
                pppuVar4 = (undefined8 ***)(local_a8[5] + uVar18);
                if (pppuVar4 != (undefined8 ***)0x0) {
                  uVar18 = (ulong)(ppppuVar14[5] < pppuVar4);
                }
                ppppuVar13[5] = (undefined8 ***)((long)ppppuVar14[5] - (long)pppuVar4);
                if (uVar5 != 6) {
                  pppuVar4 = (undefined8 ***)(local_a8[6] + uVar18);
                  if (pppuVar4 != (undefined8 ***)0x0) {
                    uVar18 = (ulong)(ppppuVar14[6] < pppuVar4);
                  }
                  ppppuVar13[6] = (undefined8 ***)((long)ppppuVar14[6] - (long)pppuVar4);
                  if (uVar5 != 7) {
                    pppuVar4 = (undefined8 ***)(local_a8[7] + uVar18);
                    if (pppuVar4 != (undefined8 ***)0x0) {
                      uVar18 = (ulong)(ppppuVar14[7] < pppuVar4);
                    }
                    ppppuVar13[7] = (undefined8 ***)((long)ppppuVar14[7] - (long)pppuVar4);
                    if (uVar5 != 8) goto LAB_00109924;
                  }
                }
              }
            }
          }
        }
      }
      if (local_a8 < puVar2) {
        uVar20 = 0;
        puVar15 = puVar2;
        do {
          puVar15 = puVar15 + -1;
          uVar16 = uVar20 | *puVar15 >> 1;
          uVar20 = *puVar15 << 0x3f;
          *puVar15 = uVar16;
        } while (local_a8 < puVar15);
      }
      if (7 < (uVar24 & 0xff) || 7 < uVar6) goto LAB_00109924;
      if (0x40 < (ulong)((long)(char)(param_5 & 0xffffffff) * 8)) {
LAB_00109928:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10992c);
        (*pcVar12)();
      }
      local_a8[uVar6] = local_a8[uVar6] | *puVar2 << 0x3f;
      if (puVar2 < puVar3) {
        uVar20 = 0;
        puVar15 = puVar3;
        do {
          puVar15 = puVar15 + -1;
          uVar16 = uVar20 | *puVar15 >> 1;
          uVar20 = *puVar15 << 0x3f;
          *puVar15 = uVar16;
        } while (puVar2 < puVar15);
      }
      sVar8 = (short)uVar25;
      uVar20 = (ulong)(uVar23 == uVar18);
      uVar25 = uVar25 - 1;
    } while (0 < sVar8);
    ppppuVar13 = local_f8[uVar23 == uVar18];
  }
  if (0 < iVar7) {
    param_5 = param_5 & 0xff;
    do {
      param_5 = param_5 - 1;
      *param_1 = *ppppuVar13;
      ppppuVar13 = ppppuVar13 + 1;
      param_1 = param_1 + 1;
    } while (param_5 != 0);
  }
  lVar22 = sp_el0;
  if (*(long *)(lVar22 + 0x5e0) != local_a8[8]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- XYcZ_add @ 00109930 ---- */

void XYcZ_add(ulong *param_1,long *param_2,ulong *param_3,ulong *param_4,byte *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  byte *pbVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *in_x18;
  ulong uVar15;
  undefined8 unaff_x30;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar11 = sp_el0;
  local_58 = *(long *)(lVar11 + 0x5e0);
  bVar1 = *param_5;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar15 = (ulong)bVar1;
  uVar4 = local_a8;
  if ('\0' < (char)bVar1) {
    uVar4 = *param_1;
    local_b8 = *param_3 - uVar4;
    uVar12 = (ulong)(uVar4 != 0 && *param_3 < uVar4);
    if (bVar1 != 1) {
      uVar4 = param_1[1] + uVar12;
      local_b0 = param_3[1] - uVar4;
      if (uVar4 != 0) {
        uVar12 = (ulong)(param_3[1] < uVar4);
      }
      if (bVar1 != 2) {
        uVar4 = param_1[2] + uVar12;
        local_a8 = param_3[2] - uVar4;
        if (uVar4 != 0) {
          uVar12 = (ulong)(param_3[2] < uVar4);
        }
        if (bVar1 != 3) {
          uVar4 = param_1[3] + uVar12;
          local_a0 = param_3[3] - uVar4;
          if (uVar4 != 0) {
            uVar12 = (ulong)(param_3[3] < uVar4);
          }
          if (bVar1 != 4) goto LAB_0010a2d4;
        }
      }
    }
    uVar4 = local_a8;
    if (uVar12 != 0) {
      uVar12 = *(ulong *)(param_5 + 8);
      bVar2 = CARRY8(local_b8,uVar12);
      local_b8 = local_b8 + uVar12;
      if (bVar1 != 1) {
        uVar5 = (ulong)(uVar12 != 0 && bVar2);
        uVar12 = local_b0 + uVar5 + *(long *)(param_5 + 0x10);
        if (uVar12 != local_b0) {
          uVar5 = (ulong)(uVar12 < local_b0);
        }
        local_b0 = uVar12;
        if (bVar1 != 2) {
          uVar4 = local_a8 + uVar5 + *(long *)(param_5 + 0x18);
          if (bVar1 != 3) {
            if (uVar4 != local_a8) {
              uVar5 = (ulong)(uVar4 < local_a8);
            }
            local_a0 = local_a0 + uVar5 + *(long *)(param_5 + 0x20);
          }
        }
      }
    }
  }
  local_a8 = uVar4;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uECC_vli_mult(&local_98,&local_b8,&local_b8,uVar15);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(&local_b8,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uECC_vli_mult(&local_98,param_1,&local_b8,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_1,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uECC_vli_mult(&local_98,param_3,&local_b8,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_3,&local_98);
  if ('\0' < (char)bVar1) {
    uVar4 = 0;
    puVar8 = param_4;
    plVar9 = param_2;
    uVar12 = uVar15;
    do {
      uVar5 = *plVar9 + uVar4;
      if (uVar5 != 0) {
        uVar4 = (ulong)(*puVar8 < uVar5);
      }
      uVar12 = uVar12 - 1;
      *puVar8 = *puVar8 - uVar5;
      puVar8 = puVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar12 != 0);
    if (uVar4 != 0) {
      uVar4 = 0;
      puVar8 = param_4;
      uVar12 = uVar15;
      pbVar7 = param_5;
      do {
        pbVar7 = pbVar7 + 8;
        uVar14 = *puVar8;
        uVar5 = uVar14 + uVar4 + *(long *)pbVar7;
        if (uVar5 != uVar14) {
          uVar4 = (ulong)(uVar5 < uVar14);
        }
        uVar12 = uVar12 - 1;
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
      } while (uVar12 != 0);
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uECC_vli_mult(&local_98,param_4,param_4,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(&local_b8,&local_98);
  if ('\0' < (char)bVar1) {
    uVar12 = *param_1;
    bVar2 = local_b8 < uVar12;
    local_b8 = local_b8 - uVar12;
    uVar4 = (ulong)(uVar12 != 0 && bVar2);
    if (bVar1 != 1) {
      uVar5 = param_1[1] + uVar4;
      bVar2 = local_b0 < uVar5;
      local_b0 = local_b0 - uVar5;
      if (uVar5 != 0) {
        uVar4 = (ulong)bVar2;
      }
      if (bVar1 != 2) {
        uVar5 = param_1[2] + uVar4;
        bVar2 = local_a8 < uVar5;
        local_a8 = local_a8 - uVar5;
        if (uVar5 != 0) {
          uVar4 = (ulong)bVar2;
        }
        if (bVar1 != 3) {
          uVar5 = param_1[3] + uVar4;
          bVar2 = local_a0 < uVar5;
          local_a0 = local_a0 - uVar5;
          if (uVar5 != 0) {
            uVar4 = (ulong)bVar2;
          }
          if (bVar1 != 4) goto LAB_0010a2d4;
        }
      }
    }
    if (uVar4 == 0) {
      uVar5 = *param_3;
      bVar2 = local_b8 < uVar5;
      local_b8 = local_b8 - uVar5;
      uVar4 = (ulong)(uVar5 != 0 && bVar2);
      if (bVar1 != 1) goto LAB_00109e00;
    }
    else {
      uVar5 = *(ulong *)(param_5 + 8);
      uVar4 = local_b8 + uVar5;
      if (bVar1 == 1) {
        uVar5 = *param_3;
        local_b8 = uVar4 - uVar5;
        uVar4 = (ulong)(uVar5 != 0 && uVar4 < uVar5);
      }
      else {
        uVar5 = (ulong)(uVar5 != 0 && CARRY8(local_b8,uVar5));
        uVar14 = local_b0 + uVar5 + *(long *)(param_5 + 0x10);
        if (uVar14 != local_b0) {
          uVar5 = (ulong)(uVar14 < local_b0);
        }
        uVar10 = local_a8;
        if (bVar1 != 2) {
          uVar10 = local_a8 + uVar5 + *(long *)(param_5 + 0x18);
          if (bVar1 != 3) {
            if (uVar10 != local_a8) {
              uVar5 = (ulong)(uVar10 < local_a8);
            }
            local_a0 = local_a0 + uVar5 + *(long *)(param_5 + 0x20);
          }
        }
        local_a8 = uVar10;
        uVar5 = *param_3;
        local_b8 = uVar4 - uVar5;
        uVar4 = (ulong)(uVar5 != 0 && uVar4 < uVar5);
        local_b0 = uVar14;
LAB_00109e00:
        uVar14 = param_3[1] + uVar4;
        bVar2 = local_b0 < uVar14;
        local_b0 = local_b0 - uVar14;
        if (uVar14 != 0) {
          uVar4 = (ulong)bVar2;
        }
        if (bVar1 != 2) {
          uVar14 = param_3[2] + uVar4;
          bVar2 = local_a8 < uVar14;
          local_a8 = local_a8 - uVar14;
          if (uVar14 != 0) {
            uVar4 = (ulong)bVar2;
          }
          if (bVar1 != 3) {
            uVar14 = param_3[3] + uVar4;
            bVar2 = local_a0 < uVar14;
            local_a0 = local_a0 - uVar14;
            if (uVar14 != 0) {
              uVar4 = (ulong)bVar2;
            }
          }
        }
      }
    }
    uVar14 = local_a8;
    if (uVar4 != 0) {
      uVar4 = *(ulong *)(param_5 + 8);
      bVar2 = CARRY8(local_b8,uVar4);
      local_b8 = local_b8 + uVar4;
      if (bVar1 != 1) {
        uVar10 = (ulong)(uVar4 != 0 && bVar2);
        uVar4 = local_b0 + uVar10 + *(long *)(param_5 + 0x10);
        if (uVar4 != local_b0) {
          uVar10 = (ulong)(uVar4 < local_b0);
        }
        local_b0 = uVar4;
        if (bVar1 != 2) {
          uVar14 = local_a8 + uVar10 + *(long *)(param_5 + 0x18);
          if (bVar1 != 3) {
            if (uVar14 != local_a8) {
              uVar10 = (ulong)(uVar14 < local_a8);
            }
            local_a0 = local_a0 + uVar10 + *(long *)(param_5 + 0x20);
          }
        }
      }
    }
    local_a8 = uVar14;
    uVar4 = (ulong)(uVar12 != 0 && uVar5 < uVar12);
    *param_3 = uVar5 - uVar12;
    if (bVar1 != 1) {
      lVar11 = uVar15 - 1;
      puVar8 = param_3;
      puVar13 = param_1;
      do {
        puVar13 = puVar13 + 1;
        puVar8 = puVar8 + 1;
        uVar12 = *puVar13 + uVar4;
        if (uVar12 != 0) {
          uVar4 = (ulong)(*puVar8 < uVar12);
        }
        lVar11 = lVar11 + -1;
        *puVar8 = *puVar8 - uVar12;
      } while (lVar11 != 0);
    }
    if (uVar4 != 0) {
      uVar4 = 0;
      puVar8 = param_3;
      uVar12 = uVar15;
      pbVar7 = param_5;
      do {
        pbVar7 = pbVar7 + 8;
        uVar14 = *puVar8;
        uVar5 = uVar14 + uVar4 + *(long *)pbVar7;
        if (uVar5 != uVar14) {
          uVar4 = (ulong)(uVar5 < uVar14);
        }
        uVar12 = uVar12 - 1;
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
      } while (uVar12 != 0);
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uECC_vli_mult(&local_98,param_2,param_3,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_2,&local_98);
  if ('\0' < (char)bVar1) {
    uVar12 = *param_1 - local_b8;
    uVar4 = (ulong)(local_b8 != 0 && *param_1 < local_b8);
    *param_3 = uVar12;
    if (bVar1 != 1) {
      uVar5 = local_b0 + uVar4;
      if (uVar5 != 0) {
        uVar4 = (ulong)(param_1[1] < uVar5);
      }
      param_3[1] = param_1[1] - uVar5;
      if (bVar1 != 2) {
        uVar5 = local_a8 + uVar4;
        if (uVar5 != 0) {
          uVar4 = (ulong)(param_1[2] < uVar5);
        }
        param_3[2] = param_1[2] - uVar5;
        if (bVar1 != 3) {
          uVar5 = local_a0 + uVar4;
          if (uVar5 != 0) {
            uVar4 = (ulong)(param_1[3] < uVar5);
          }
          param_3[3] = param_1[3] - uVar5;
          if (bVar1 != 4) {
LAB_0010a2d4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2d8);
            (*pcVar6)();
          }
        }
      }
    }
    if (uVar4 != 0) {
      uVar4 = uVar12 + *(long *)(param_5 + 8);
      *param_3 = uVar4;
      if (bVar1 != 1) {
        uVar5 = 0;
        lVar11 = uVar15 - 1;
        pbVar7 = param_5 + 0x10;
        puVar8 = param_3;
        do {
          puVar8 = puVar8 + 1;
          bVar2 = uVar4 < uVar12;
          bVar3 = uVar4 != uVar12;
          uVar12 = *puVar8;
          if (bVar3) {
            uVar5 = (ulong)bVar2;
          }
          lVar11 = lVar11 + -1;
          uVar4 = uVar12 + uVar5 + *(long *)pbVar7;
          *puVar8 = uVar4;
          pbVar7 = pbVar7 + 8;
        } while (lVar11 != 0);
      }
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uECC_vli_mult(&local_98,param_4,param_3,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_4,&local_98);
  if ('\0' < (char)bVar1) {
    uVar4 = 0;
    puVar8 = param_4;
    uVar12 = uVar15;
    do {
      uVar5 = *param_2 + uVar4;
      if (uVar5 != 0) {
        uVar4 = (ulong)(*puVar8 < uVar5);
      }
      uVar12 = uVar12 - 1;
      *puVar8 = *puVar8 - uVar5;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    } while (uVar12 != 0);
    if (uVar4 != 0) {
      uVar4 = 0;
      uVar12 = uVar15;
      do {
        param_5 = param_5 + 8;
        uVar14 = *param_4;
        uVar5 = uVar14 + uVar4 + *(long *)param_5;
        if (uVar5 != uVar14) {
          uVar4 = (ulong)(uVar5 < uVar14);
        }
        uVar12 = uVar12 - 1;
        *param_4 = uVar5;
        param_4 = param_4 + 1;
      } while (uVar12 != 0);
    }
    memcpy(param_3,&local_b8,uVar15 << 3);
  }
  lVar11 = sp_el0;
  if (*(long *)(lVar11 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- apply_z @ 0010a2d8 ---- */

void apply_z(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  code *pcVar2;
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
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uECC_vli_mult(&local_88,param_3,param_3,*param_4);
  pcVar2 = *(code **)(param_4 + 0xc0);
  if (4 < ((ulong)(pcVar2 + -0x102250) >> 3 | (long)pcVar2 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar2,&DAT_00100350);
  }
  (*pcVar2)(&local_a8,&local_88);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uECC_vli_mult(&local_88,param_1,&local_a8,*param_4);
  pcVar2 = *(code **)(param_4 + 0xc0);
  if (4 < ((ulong)(pcVar2 + -0x102250) >> 3 | (long)pcVar2 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar2,&DAT_00100350);
  }
  (*pcVar2)(param_1,&local_88);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uECC_vli_mult(&local_88,&local_a8,param_3,*param_4);
  pcVar2 = *(code **)(param_4 + 0xc0);
  if (4 < ((ulong)(pcVar2 + -0x102250) >> 3 | (long)pcVar2 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar2,&DAT_00100350);
  }
  (*pcVar2)(&local_a8,&local_88);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uECC_vli_mult(&local_88,param_2,&local_a8,*param_4);
  pcVar2 = *(code **)(param_4 + 0xc0);
  if (4 < ((ulong)(pcVar2 + -0x102250) >> 3 | (long)pcVar2 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar2,&DAT_00100350);
  }
  (*pcVar2)(param_2,&local_88);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- default_RNG.1af211300d3f8d16da1ad8e243f7d3fd @ 0010a508 ---- */

undefined8 default_RNG_1af211300d3f8d16da1ad8e243f7d3fd(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  get_random_bytes();
  return 1;
}



/* ---- double_jacobian_default.1af211300d3f8d16da1ad8e243f7d3fd @ 0010a530 ---- */

void double_jacobian_default_1af211300d3f8d16da1ad8e243f7d3fd
               (ulong *param_1,ulong *param_2,ulong *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  ulong *puVar7;
  size_t sVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *in_x18;
  size_t __n;
  ulong uVar16;
  ulong uVar17;
  undefined8 unaff_x30;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  *in_x18 = unaff_x30;
  lVar15 = sp_el0;
  local_58 = *(long *)(lVar15 + 0x5e0);
  bVar1 = *param_4;
  uVar16 = (ulong)(char)bVar1;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  if (0 < (long)uVar16) {
    uVar17 = (ulong)bVar1;
    sVar8 = 0;
    uVar5 = 0;
    __n = uVar17 * 8;
    do {
      puVar7 = (ulong *)((long)param_3 + sVar8);
      sVar8 = sVar8 + 8;
      uVar5 = *puVar7 | uVar5;
    } while (__n != sVar8);
    if (uVar5 == 0) goto LAB_0010af38;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,param_2,param_2,uVar16 & 0xffffffff);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(&local_b8,&local_98);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,param_1,&local_b8,*param_4);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(&local_d8,&local_98);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,&local_b8,&local_b8,*param_4);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(&local_b8,&local_98);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,param_2,param_3,*param_4);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(param_2,&local_98);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,param_3,param_3,*param_4);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(param_3,&local_98);
    uVar5 = 0;
    uVar11 = 0;
    do {
      uVar10 = uVar11 + 1;
      uVar12 = param_1[uVar11];
      uVar14 = uVar12 + uVar5 + param_3[uVar11];
      param_1[uVar11] = uVar14;
      if (uVar14 != uVar12) {
        uVar5 = (ulong)(uVar14 < uVar12);
      }
      uVar11 = uVar10;
    } while (uVar17 != uVar10);
    if (uVar5 == 0) {
      uVar5 = uVar16 & 0xffffffff;
      do {
        uVar2 = (int)uVar5 - 1;
        if ((uVar2 >> 7 & 1) != 0) break;
        uVar5 = (ulong)(uint)(int)(char)uVar2;
        if (param_1[uVar5 & 0xff] < *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8)) goto LAB_0010a784;
      } while (param_1[uVar5 & 0xff] <= *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8));
    }
    uVar5 = 0;
    puVar7 = param_1;
    uVar11 = uVar17;
    pbVar9 = param_4;
    do {
      pbVar9 = pbVar9 + 8;
      uVar10 = *(long *)pbVar9 + uVar5;
      if (uVar10 != 0) {
        uVar5 = (ulong)(*puVar7 < uVar10);
      }
      uVar11 = uVar11 - 1;
      *puVar7 = *puVar7 - uVar10;
      puVar7 = puVar7 + 1;
    } while (uVar11 != 0);
LAB_0010a784:
    uVar5 = 0;
    uVar11 = 0;
    do {
      uVar10 = uVar11 + 1;
      uVar12 = param_3[uVar11];
      uVar14 = uVar5 + uVar12 * 2;
      param_3[uVar11] = uVar14;
      if (uVar14 != uVar12) {
        uVar5 = (ulong)(uVar14 < uVar12);
      }
      uVar11 = uVar10;
    } while (uVar17 != uVar10);
    if (uVar5 == 0) {
      uVar5 = uVar16 & 0xffffffff;
      do {
        uVar2 = (int)uVar5 - 1;
        if ((uVar2 >> 7 & 1) != 0) break;
        uVar5 = (ulong)(uint)(int)(char)uVar2;
        if (param_3[uVar5 & 0xff] < *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8)) goto LAB_0010a7f0;
      } while (param_3[uVar5 & 0xff] <= *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8));
    }
    uVar5 = 0;
    puVar7 = param_3;
    uVar11 = uVar17;
    pbVar9 = param_4;
    do {
      pbVar9 = pbVar9 + 8;
      uVar10 = *(long *)pbVar9 + uVar5;
      if (uVar10 != 0) {
        uVar5 = (ulong)(*puVar7 < uVar10);
      }
      uVar11 = uVar11 - 1;
      *puVar7 = *puVar7 - uVar10;
      puVar7 = puVar7 + 1;
    } while (uVar11 != 0);
LAB_0010a7f0:
    uVar5 = 0;
    uVar11 = 0;
    do {
      uVar10 = uVar11 + 1;
      uVar14 = param_3[uVar11] + uVar5;
      if (uVar14 != 0) {
        uVar5 = (ulong)(param_1[uVar11] < uVar14);
      }
      param_3[uVar11] = param_1[uVar11] - uVar14;
      uVar11 = uVar10;
    } while (uVar17 != uVar10);
    if (uVar5 != 0) {
      uVar5 = 0;
      puVar7 = param_3;
      uVar11 = uVar17;
      pbVar9 = param_4;
      do {
        pbVar9 = pbVar9 + 8;
        uVar14 = *puVar7;
        uVar10 = uVar14 + uVar5 + *(long *)pbVar9;
        if (uVar10 != uVar14) {
          uVar5 = (ulong)(uVar10 < uVar14);
        }
        uVar11 = uVar11 - 1;
        *puVar7 = uVar10;
        puVar7 = puVar7 + 1;
      } while (uVar11 != 0);
    }
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,param_1,param_3,*param_4);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(param_1,&local_98);
    uVar5 = 0;
    uVar11 = 0;
    do {
      uVar10 = uVar11 + 1;
      uVar12 = param_1[uVar11];
      uVar14 = uVar5 + uVar12 * 2;
      param_3[uVar11] = uVar14;
      if (uVar14 != uVar12) {
        uVar5 = (ulong)(uVar14 < uVar12);
      }
      uVar11 = uVar10;
    } while (uVar17 != uVar10);
    if (uVar5 == 0) {
      uVar5 = uVar16 & 0xffffffff;
      do {
        uVar2 = (int)uVar5 - 1;
        if ((uVar2 >> 7 & 1) != 0) break;
        uVar5 = (ulong)(uint)(int)(char)uVar2;
        if (param_3[uVar5 & 0xff] < *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8)) goto LAB_0010a914;
      } while (param_3[uVar5 & 0xff] <= *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8));
    }
    uVar5 = 0;
    puVar7 = param_3;
    uVar11 = uVar17;
    pbVar9 = param_4;
    do {
      pbVar9 = pbVar9 + 8;
      uVar10 = *(long *)pbVar9 + uVar5;
      if (uVar10 != 0) {
        uVar5 = (ulong)(*puVar7 < uVar10);
      }
      uVar11 = uVar11 - 1;
      *puVar7 = *puVar7 - uVar10;
      puVar7 = puVar7 + 1;
    } while (uVar11 != 0);
LAB_0010a914:
    uVar5 = 0;
    uVar11 = 0;
    do {
      uVar10 = uVar11 + 1;
      uVar12 = param_1[uVar11];
      uVar14 = uVar12 + uVar5 + param_3[uVar11];
      param_1[uVar11] = uVar14;
      if (uVar14 != uVar12) {
        uVar5 = (ulong)(uVar14 < uVar12);
      }
      uVar11 = uVar10;
    } while (uVar17 != uVar10);
    if (uVar5 == 0) {
      uVar5 = uVar16 & 0xffffffff;
      do {
        uVar2 = (int)uVar5 - 1;
        if ((uVar2 >> 7 & 1) != 0) break;
        uVar5 = (ulong)(uint)(int)(char)uVar2;
        if (param_1[uVar5 & 0xff] < *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8)) goto LAB_0010a988;
      } while (param_1[uVar5 & 0xff] <= *(ulong *)(param_4 + (uVar5 & 0xff) * 8 + 8));
    }
    uVar5 = 0;
    puVar7 = param_1;
    uVar11 = uVar17;
    pbVar9 = param_4;
    do {
      pbVar9 = pbVar9 + 8;
      uVar10 = *(long *)pbVar9 + uVar5;
      if (uVar10 != 0) {
        uVar5 = (ulong)(*puVar7 < uVar10);
      }
      uVar11 = uVar11 - 1;
      *puVar7 = *puVar7 - uVar10;
      puVar7 = puVar7 + 1;
    } while (uVar11 != 0);
LAB_0010a988:
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) {
      puVar7 = param_1 + uVar16;
      if (param_1 < puVar7) {
        uVar16 = 0;
        do {
          puVar7 = puVar7 + -1;
          uVar5 = uVar16 | *puVar7 >> 1;
          uVar16 = *puVar7 << 0x3f;
          *puVar7 = uVar5;
        } while (param_1 < puVar7);
      }
    }
    else {
      uVar10 = *(ulong *)(param_4 + 8);
      uVar11 = (ulong)(uVar10 != 0 && CARRY8(uVar5,uVar10));
      *param_1 = uVar5 + uVar10;
      if (bVar1 != 1) {
        lVar15 = uVar17 - 1;
        pbVar9 = param_4 + 0x10;
        puVar7 = param_1;
        do {
          puVar7 = puVar7 + 1;
          uVar10 = *puVar7;
          uVar5 = uVar11 + uVar10 + *(long *)pbVar9;
          if (uVar5 != uVar10) {
            uVar11 = (ulong)(uVar5 < uVar10);
          }
          lVar15 = lVar15 + -1;
          *puVar7 = uVar5;
          pbVar9 = pbVar9 + 8;
        } while (lVar15 != 0);
      }
      puVar7 = param_1 + uVar16;
      if (param_1 < puVar7) {
        uVar16 = 0;
        puVar13 = puVar7;
        do {
          puVar13 = puVar13 + -1;
          uVar5 = uVar16 | *puVar13 >> 1;
          uVar16 = *puVar13 << 0x3f;
          *puVar13 = uVar5;
        } while (param_1 < puVar13);
      }
      puVar7[-1] = puVar7[-1] | uVar11 << 0x3f;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,param_1,param_1,*param_4);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(param_3,&local_98);
    uVar5 = *param_3 - local_d8;
    uVar16 = (ulong)(local_d8 != 0 && *param_3 < local_d8);
    *param_3 = uVar5;
    if (bVar1 != 1) {
      uVar11 = local_d0 + uVar16;
      if (uVar11 != 0) {
        uVar16 = (ulong)(param_3[1] < uVar11);
      }
      param_3[1] = param_3[1] - uVar11;
      if (bVar1 != 2) {
        uVar11 = local_c8 + uVar16;
        if (uVar11 != 0) {
          uVar16 = (ulong)(param_3[2] < uVar11);
        }
        param_3[2] = param_3[2] - uVar11;
        if (bVar1 != 3) {
          uVar11 = local_c0 + uVar16;
          if (uVar11 != 0) {
            uVar16 = (ulong)(param_3[3] < uVar11);
          }
          param_3[3] = param_3[3] - uVar11;
          if (bVar1 != 4) goto LAB_0010b1a4;
        }
      }
    }
    if (uVar16 != 0) {
      uVar16 = uVar5 + *(long *)(param_4 + 8);
      *param_3 = uVar16;
      if (bVar1 != 1) {
        uVar11 = 0;
        lVar15 = uVar17 - 1;
        pbVar9 = param_4 + 0x10;
        puVar7 = param_3;
        do {
          puVar7 = puVar7 + 1;
          bVar3 = uVar16 < uVar5;
          bVar4 = uVar16 != uVar5;
          uVar5 = *puVar7;
          if (bVar4) {
            uVar11 = (ulong)bVar3;
          }
          lVar15 = lVar15 + -1;
          uVar16 = uVar5 + uVar11 + *(long *)pbVar9;
          *puVar7 = uVar16;
          pbVar9 = pbVar9 + 8;
        } while (lVar15 != 0);
      }
      uVar5 = *param_3;
    }
    uVar11 = uVar5 - local_d8;
    uVar16 = (ulong)(local_d8 != 0 && uVar5 < local_d8);
    *param_3 = uVar11;
    if (bVar1 != 1) {
      uVar5 = local_d0 + uVar16;
      if (uVar5 != 0) {
        uVar16 = (ulong)(param_3[1] < uVar5);
      }
      param_3[1] = param_3[1] - uVar5;
      if (bVar1 != 2) {
        uVar5 = local_c8 + uVar16;
        if (uVar5 != 0) {
          uVar16 = (ulong)(param_3[2] < uVar5);
        }
        param_3[2] = param_3[2] - uVar5;
        if (bVar1 != 3) {
          uVar5 = local_c0 + uVar16;
          if (uVar5 != 0) {
            uVar16 = (ulong)(param_3[3] < uVar5);
          }
          param_3[3] = param_3[3] - uVar5;
          if (bVar1 != 4) goto LAB_0010b1a4;
        }
      }
    }
    if (uVar16 != 0) {
      uVar16 = uVar11 + *(long *)(param_4 + 8);
      *param_3 = uVar16;
      if (bVar1 != 1) {
        uVar5 = 0;
        lVar15 = uVar17 - 1;
        pbVar9 = param_4 + 0x10;
        puVar7 = param_3;
        do {
          puVar7 = puVar7 + 1;
          bVar3 = uVar16 < uVar11;
          bVar4 = uVar16 != uVar11;
          uVar11 = *puVar7;
          if (bVar4) {
            uVar5 = (ulong)bVar3;
          }
          lVar15 = lVar15 + -1;
          uVar16 = uVar11 + uVar5 + *(long *)pbVar9;
          *puVar7 = uVar16;
          pbVar9 = pbVar9 + 8;
        } while (lVar15 != 0);
      }
      uVar11 = *param_3;
    }
    bVar3 = local_d8 < uVar11;
    local_d8 = local_d8 - uVar11;
    uVar16 = (ulong)(uVar11 != 0 && bVar3);
    if (bVar1 != 1) {
      uVar5 = param_3[1] + uVar16;
      bVar3 = local_d0 < uVar5;
      local_d0 = local_d0 - uVar5;
      if (uVar5 != 0) {
        uVar16 = (ulong)bVar3;
      }
      if (bVar1 != 2) {
        uVar5 = param_3[2] + uVar16;
        bVar3 = local_c8 < uVar5;
        local_c8 = local_c8 - uVar5;
        if (uVar5 != 0) {
          uVar16 = (ulong)bVar3;
        }
        if (bVar1 != 3) {
          uVar5 = param_3[3] + uVar16;
          bVar3 = local_c0 < uVar5;
          local_c0 = local_c0 - uVar5;
          if (uVar5 != 0) {
            uVar16 = (ulong)bVar3;
          }
          if (bVar1 != 4) {
LAB_0010b1a4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1a8);
            (*pcVar6)();
          }
        }
      }
    }
    uVar5 = local_c8;
    if (uVar16 != 0) {
      uVar16 = *(ulong *)(param_4 + 8);
      bVar3 = CARRY8(local_d8,uVar16);
      local_d8 = local_d8 + uVar16;
      if (bVar1 != 1) {
        uVar11 = (ulong)(uVar16 != 0 && bVar3);
        uVar16 = local_d0 + uVar11 + *(long *)(param_4 + 0x10);
        if (uVar16 != local_d0) {
          uVar11 = (ulong)(uVar16 < local_d0);
        }
        local_d0 = uVar16;
        if (bVar1 != 2) {
          uVar5 = local_c8 + uVar11 + *(long *)(param_4 + 0x18);
          if (bVar1 != 3) {
            if (uVar5 != local_c8) {
              uVar11 = (ulong)(uVar5 < local_c8);
            }
            local_c0 = local_c0 + uVar11 + *(long *)(param_4 + 0x20);
          }
        }
      }
    }
    local_c8 = uVar5;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uECC_vli_mult(&local_98,param_1,&local_d8,*param_4);
    pcVar6 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
    }
    (*pcVar6)(param_1,&local_98);
    bVar4 = local_b8 != 0;
    bVar3 = *param_1 < local_b8;
    local_b8 = *param_1 - local_b8;
    uVar16 = (ulong)(bVar4 && bVar3);
    if (bVar1 != 1) {
      uVar5 = local_b0 + uVar16;
      local_b0 = param_1[1] - uVar5;
      if (uVar5 != 0) {
        uVar16 = (ulong)(param_1[1] < uVar5);
      }
      if (bVar1 != 2) {
        uVar5 = local_a8 + uVar16;
        local_a8 = param_1[2] - uVar5;
        if (uVar5 != 0) {
          uVar16 = (ulong)(param_1[2] < uVar5);
        }
        if (bVar1 != 3) {
          uVar5 = local_a0 + uVar16;
          local_a0 = param_1[3] - uVar5;
          if (uVar5 != 0) {
            uVar16 = (ulong)(param_1[3] < uVar5);
          }
        }
      }
    }
    uVar5 = local_a8;
    if (uVar16 != 0) {
      uVar16 = *(ulong *)(param_4 + 8);
      bVar3 = CARRY8(local_b8,uVar16);
      local_b8 = local_b8 + uVar16;
      if (bVar1 != 1) {
        uVar11 = (ulong)(uVar16 != 0 && bVar3);
        uVar16 = local_b0 + uVar11 + *(long *)(param_4 + 0x10);
        if (uVar16 != local_b0) {
          uVar11 = (ulong)(uVar16 < local_b0);
        }
        local_b0 = uVar16;
        if (bVar1 != 2) {
          uVar5 = local_a8 + uVar11 + *(long *)(param_4 + 0x18);
          if (bVar1 != 3) {
            if (uVar5 != local_a8) {
              uVar11 = (ulong)(uVar5 < local_a8);
            }
            local_a0 = local_a0 + uVar11 + *(long *)(param_4 + 0x20);
          }
        }
      }
    }
    local_a8 = uVar5;
    puVar7 = param_3;
    uVar16 = uVar17;
    do {
      uVar16 = uVar16 - 1;
      *param_1 = *puVar7;
      puVar7 = puVar7 + 1;
      param_1 = param_1 + 1;
    } while (uVar16 != 0);
    puVar7 = param_2;
    do {
      uVar17 = uVar17 - 1;
      *param_3 = *puVar7;
      puVar7 = puVar7 + 1;
      param_3 = param_3 + 1;
    } while (uVar17 != 0);
    memcpy(param_2,&local_b8,__n);
  }
LAB_0010af38:
  lVar15 = sp_el0;
  if (*(long *)(lVar15 + 0x5e0) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- mod_sqrt_default.1af211300d3f8d16da1ad8e243f7d3fd @ 0010b1a8 ---- */

void mod_sqrt_default_1af211300d3f8d16da1ad8e243f7d3fd(void *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8 [13];
  
  *in_x18 = unaff_x30;
  lVar5 = sp_el0;
  local_b8[0xc] = *(long *)(lVar5 + 0x5e0);
  bVar2 = *param_2;
  local_b8[0] = 1;
  local_b8[1] = 0;
  local_d8 = 1;
  uStack_d0 = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if ('\0' < (char)bVar2) {
    uVar7 = *(ulong *)(param_2 + 8);
    local_b8[0] = uVar7 + 1;
    if (bVar2 != 1) {
      uVar10 = *(ulong *)(param_2 + 0x10);
      local_b8[1] = uVar10 + (0xfffffffffffffffe < uVar7);
      if (bVar2 != 2) {
        local_b8[2] = (ulong)(local_b8[1] < uVar10);
        if (uVar7 != 0xffffffffffffffff) {
          local_b8[2] = (ulong)(0xfffffffffffffffe < uVar7);
        }
        local_b8[2] = *(ulong *)(param_2 + 0x18) + local_b8[2];
        if ((bVar2 != 3) &&
           (local_b8[3] = *(long *)(param_2 + 0x20) +
                          (ulong)((uVar7 == 0xffffffffffffffff && local_b8[1] < uVar10) &&
                                 local_b8[2] < *(ulong *)(param_2 + 0x18)), bVar2 != 4))
        goto LAB_0010b4b4;
      }
    }
  }
  iVar8 = (int)(char)(bVar2 - 1);
  if (-2 < iVar8) {
    iVar8 = -1;
  }
  uVar7 = (long)(char)bVar2 & 0xffffffff;
  do {
    cVar9 = (char)uVar7;
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar3;
    if ((uVar3 >> 7 & 1) != 0) {
      cVar9 = (char)(iVar8 + 1U);
      if ((iVar8 + 1U & 0xff) == 0) goto LAB_0010b464;
      break;
    }
    if (3 < (uVar3 & 0xff)) goto LAB_0010b4b4;
  } while (local_b8[uVar7 & 0xff] == 0);
  lVar5 = (long)cVar9 + -1;
  if (((int)lVar5 != 4) && ((ulong)(lVar5 * 8) < 0x21)) {
    if (local_b8[lVar5] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      uVar7 = local_b8[lVar5];
      do {
        iVar8 = iVar8 + 1;
        bVar1 = 1 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar1);
    }
    uVar3 = (iVar8 + (int)lVar5 * 0x40) - 1;
    if (1 < (short)uVar3) {
      uVar3 = uVar3 & 0xffff;
      uVar4 = (int)(char)bVar2;
      while( true ) {
        local_b8[10] = 0;
        local_b8[0xb] = 0;
        local_b8[8] = 0;
        local_b8[9] = 0;
        local_b8[6] = 0;
        local_b8[7] = 0;
        local_b8[4] = 0;
        local_b8[5] = 0;
        uECC_vli_mult(local_b8 + 4,&local_d8,&local_d8,uVar4);
        pcVar6 = *(code **)(param_2 + 0xc0);
        if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
          __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
        }
        (*pcVar6)(&local_d8,local_b8 + 4);
        if ((0x13f < uVar3) || (uVar3 >> 6 == 4)) goto LAB_0010b4b4;
        if ((local_b8[uVar3 >> 6] >> ((ulong)uVar3 & 0x3f) & 1) != 0) {
          local_b8[10] = 0;
          local_b8[0xb] = 0;
          local_b8[8] = 0;
          local_b8[9] = 0;
          local_b8[6] = 0;
          local_b8[7] = 0;
          local_b8[4] = 0;
          local_b8[5] = 0;
          uECC_vli_mult(local_b8 + 4,&local_d8,param_1,*param_2);
          pcVar6 = *(code **)(param_2 + 0xc0);
          if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
          }
          (*pcVar6)(&local_d8,local_b8 + 4);
        }
        uVar3 = uVar3 - 1;
        if ((short)uVar3 < 2) break;
        uVar4 = (uint)*param_2;
      }
    }
LAB_0010b464:
    if (0 < (char)bVar2) {
      memcpy(param_1,&local_d8,(ulong)bVar2 << 3);
    }
    lVar5 = sp_el0;
    if (*(long *)(lVar5 + 0x5e0) != local_b8[0xc]) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_0010b4b4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b4b8);
  (*pcVar6)();
}



/* ---- x_side_default.1af211300d3f8d16da1ad8e243f7d3fd @ 0010b4bc ---- */

void x_side_default_1af211300d3f8d16da1ad8e243f7d3fd
               (ulong *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *in_x18;
  ulong uVar14;
  undefined8 unaff_x30;
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
  lVar13 = sp_el0;
  local_48 = *(long *)(lVar13 + 0x5e0);
  bVar1 = *param_3;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uECC_vli_mult(&local_88,param_2,param_2,(long)(char)bVar1 & 0xffffffff);
  pcVar5 = *(code **)(param_3 + 0xc0);
  if (4 < ((ulong)(pcVar5 + -0x102250) >> 3 | (long)pcVar5 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar5,&DAT_00100350);
  }
  uVar14 = (ulong)bVar1;
  (*pcVar5)(param_1,&local_88);
  if ('\0' < (char)bVar1) {
    uVar8 = *param_1;
    uVar6 = uVar8 - 3;
    uVar10 = (ulong)(uVar8 < 3);
    *param_1 = uVar6;
    if (bVar1 == 1) {
      uVar12 = uVar10;
    }
    else {
      uVar11 = param_1[1];
      uVar12 = (ulong)(uVar11 < uVar10);
      if (2 < uVar8) {
        uVar12 = uVar10;
      }
      param_1[1] = uVar11 - uVar10;
      if (bVar1 != 2) {
        uVar2 = (uint)((uVar8 < 3 && uVar11 < uVar10) && param_1[2] < uVar12);
        uVar8 = (ulong)uVar2;
        param_1[2] = param_1[2] - uVar12;
        uVar12 = uVar8;
        if (bVar1 != 3) {
          uVar12 = (ulong)(param_1[3] < uVar8);
          if (uVar2 == 0) {
            uVar12 = uVar8;
          }
          param_1[3] = param_1[3] - uVar8;
          if (bVar1 != 4) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10b7a8);
            (*pcVar5)();
          }
        }
      }
    }
    if (uVar12 != 0) {
      uVar8 = uVar6 + *(long *)(param_3 + 8);
      *param_1 = uVar8;
      if (bVar1 != 1) {
        uVar10 = 0;
        lVar13 = uVar14 - 1;
        pbVar7 = param_3 + 0x10;
        puVar9 = param_1;
        do {
          puVar9 = puVar9 + 1;
          bVar3 = uVar8 < uVar6;
          bVar4 = uVar8 != uVar6;
          uVar6 = *puVar9;
          if (bVar4) {
            uVar10 = (ulong)bVar3;
          }
          lVar13 = lVar13 + -1;
          uVar8 = uVar6 + uVar10 + *(long *)pbVar7;
          *puVar9 = uVar8;
          pbVar7 = pbVar7 + 8;
        } while (lVar13 != 0);
      }
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uECC_vli_mult(&local_88,param_1,param_2,*param_3);
  pcVar5 = *(code **)(param_3 + 0xc0);
  if (4 < ((ulong)(pcVar5 + -0x102250) >> 3 | (long)pcVar5 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar5,&DAT_00100350);
  }
  (*pcVar5)(param_1,&local_88);
  if ('\0' < (char)bVar1) {
    uVar6 = 0;
    pbVar7 = param_3 + 0x88;
    puVar9 = param_1;
    uVar8 = uVar14;
    do {
      uVar12 = *puVar9;
      uVar10 = uVar12 + uVar6 + *(long *)pbVar7;
      if (uVar10 != uVar12) {
        uVar6 = (ulong)(uVar10 < uVar12);
      }
      uVar8 = uVar8 - 1;
      *puVar9 = uVar10;
      pbVar7 = pbVar7 + 8;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
    if (uVar6 != 0) goto LAB_0010b6e4;
  }
  uVar6 = (long)(char)bVar1 & 0xffffffff;
  do {
    uVar2 = (int)uVar6 - 1;
    if ((uVar2 >> 7 & 1) != 0) break;
    uVar6 = (ulong)(uint)(int)(char)uVar2;
    if (param_1[uVar6 & 0xff] < *(ulong *)(param_3 + (uVar6 & 0xff) * 8 + 8)) goto LAB_0010b71c;
  } while (param_1[uVar6 & 0xff] <= *(ulong *)(param_3 + (uVar6 & 0xff) * 8 + 8));
LAB_0010b6e4:
  if ('\0' < (char)bVar1) {
    uVar6 = 0;
    do {
      param_3 = param_3 + 8;
      uVar8 = *(long *)param_3 + uVar6;
      if (uVar8 != 0) {
        uVar6 = (ulong)(*param_1 < uVar8);
      }
      uVar14 = uVar14 - 1;
      *param_1 = *param_1 - uVar8;
      param_1 = param_1 + 1;
    } while (uVar14 != 0);
  }
LAB_0010b71c:
  lVar13 = sp_el0;
  if (*(long *)(lVar13 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- vli_mmod_fast_secp160r1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010b7a8 ---- */

void vli_mmod_fast_secp160r1_1af211300d3f8d16da1ad8e243f7d3fd(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = param_2[3];
  uVar4 = param_2[4];
  uVar7 = param_2[2] >> 0x20 | uVar10 << 0x20;
  uVar5 = uVar10 >> 0x20 | uVar4 << 0x20;
  uVar8 = uVar4 >> 0x20 | param_2[5] << 0x20;
  uVar9 = uVar7 * 0x80000001;
  uVar10 = (uVar10 & 0xffffffff) >> 1;
  if (uVar9 < uVar7) {
    uVar10 = uVar10 + 1;
  }
  param_2[2] = param_2[2] & 0xffffffff;
  uVar7 = uVar10 + uVar5 * 0x80000001;
  uVar11 = *param_2;
  lVar2 = (ulong)(uVar7 < uVar5 || uVar10 != 0 && uVar7 == uVar5) + ((uVar4 & 0xffffffff) >> 1);
  uVar10 = lVar2 + uVar8 * 0x80000001;
  uVar1 = ((uint)param_2[5] >> 1) + (uint)(uVar10 < uVar8 || lVar2 != 0 && uVar10 == uVar8);
  *param_1 = uVar11 + uVar9;
  uVar8 = param_2[1];
  uVar6 = uVar10 >> 0x20 | (ulong)uVar1 << 0x20;
  uVar5 = (ulong)(uVar9 != 0 && CARRY8(uVar11,uVar9));
  uVar4 = uVar7 + uVar8 + uVar5;
  uVar9 = (ulong)(uVar1 >> 1);
  param_1[1] = uVar4;
  if (uVar4 != uVar8) {
    uVar5 = (ulong)(uVar4 < uVar8);
  }
  uVar4 = uVar6 * 0x80000001;
  if (uVar4 < uVar6) {
    uVar9 = uVar9 + 1;
  }
  param_1[2] = uVar5 + param_2[2] + (uVar10 & 0xffffffff);
  *param_2 = uVar4;
  param_2[1] = uVar9;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar9 = *param_1;
  uVar5 = param_1[1];
  uVar10 = uVar4 + uVar9;
  *param_1 = uVar10;
  uVar9 = (ulong)(uVar4 != 0 && CARRY8(uVar4,uVar9));
  uVar4 = param_2[1] + uVar5 + uVar9;
  param_1[1] = uVar4;
  if (uVar4 != uVar5) {
    uVar9 = (ulong)(uVar4 < uVar5);
  }
  uVar9 = param_2[2] + param_1[2] + uVar9;
  while ((uVar9 >> 0x20 != 0 ||
         (((uVar9 == 0xffffffff && (uVar4 == 0xffffffffffffffff)) && (0xffffffff7fffffff < uVar10)))
         )) {
    bVar3 = -(ulong)(0xffffffff7ffffffe < uVar10) <= uVar4;
    uVar4 = uVar4 + (0xffffffff7ffffffe < uVar10);
    *param_1 = uVar10 + 0x80000001;
    param_1[1] = uVar4;
    lVar2 = -0x100000000;
    if (bVar3 && 0xffffffff7ffffffe < uVar10) {
      lVar2 = -0xffffffff;
    }
    uVar9 = lVar2 + uVar9;
    uVar10 = uVar10 + 0x80000001;
  }
  param_1[2] = uVar9;
  return;
}



/* ---- vli_mmod_fast_secp192r1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010b944 ---- */

void vli_mmod_fast_secp192r1_1af211300d3f8d16da1ad8e243f7d3fd(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar8 = *param_2;
  *param_1 = uVar8;
  uVar6 = param_2[1];
  param_1[1] = uVar6;
  uVar9 = param_2[2];
  param_1[2] = uVar9;
  uVar7 = param_2[3];
  uVar1 = uVar7 + uVar8;
  uVar12 = (ulong)(uVar7 != 0 && CARRY8(uVar7,uVar8));
  uVar13 = param_2[5];
  uVar2 = param_2[4] + uVar6 + uVar12;
  if (uVar2 != uVar6) {
    uVar12 = (ulong)(uVar2 < uVar6);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar6 = uVar13 + uVar9 + uVar12;
  param_1[2] = uVar6;
  uVar3 = param_2[3];
  uVar13 = uVar2 + uVar3;
  uVar14 = (ulong)(uVar3 != 0 && CARRY8(uVar2,uVar3));
  uVar2 = param_2[4] + uVar14;
  uVar3 = uVar2 + uVar6;
  param_1[1] = uVar13;
  param_1[2] = uVar3;
  if (uVar6 != uVar9) {
    uVar12 = (ulong)(uVar6 < uVar9);
  }
  uVar9 = param_2[5];
  uVar11 = (uint)(uVar9 != 0 && CARRY8(uVar9,uVar1));
  uVar8 = uVar7 + uVar9 + uVar8;
  uVar7 = uVar9 + uVar13 + (ulong)uVar11;
  *param_1 = uVar9 + uVar1;
  uVar1 = (ulong)uVar11;
  if (uVar7 != uVar13) {
    uVar11 = (uint)(uVar7 < uVar13);
    uVar1 = (ulong)(uVar7 < uVar13);
  }
  uVar9 = uVar1 + uVar3;
  if (uVar2 != 0) {
    uVar14 = (ulong)CARRY8(uVar2,uVar6);
  }
  lVar10 = uVar14 + uVar12 + (ulong)(uVar11 & CARRY8(uVar1,uVar3));
  while( true ) {
    uVar8 = uVar8 + 1;
    param_1[1] = uVar7;
    param_1[2] = uVar9;
    if (((int)lVar10 == 0) &&
       (((uVar9 != 0xffffffffffffffff || (uVar7 < 0xfffffffffffffffe)) ||
        ((uVar7 != 0xffffffffffffffff && (uVar8 != 0)))))) break;
    uVar1 = 0xfffffffffffffffe;
    if (uVar8 != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    *param_1 = uVar8;
    bVar4 = uVar1 <= uVar7;
    uVar7 = uVar7 - uVar1;
    uVar1 = (ulong)bVar4;
    bVar5 = uVar9 < -uVar1;
    uVar9 = uVar9 + uVar1;
    lVar10 = (long)(int)lVar10 - (ulong)(!bVar4 || bVar5);
  }
  return;
}



/* ---- mod_sqrt_secp224r1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010ba94 ---- */

void mod_sqrt_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(ulong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  ulong uVar246;
  bool bVar247;
  bool bVar248;
  bool bVar249;
  bool bVar250;
  ulong uVar251;
  ulong uVar252;
  ulong uVar253;
  ulong uVar254;
  ulong uVar255;
  ulong uVar256;
  ulong uVar257;
  int iVar258;
  ulong uVar259;
  ulong uVar260;
  uint uVar261;
  ulong uVar262;
  ulong uVar263;
  ulong uVar264;
  long lVar265;
  ulong uVar266;
  ulong uVar267;
  ulong uVar268;
  long lVar269;
  ulong uVar270;
  ulong uVar271;
  ulong uVar272;
  undefined8 *in_x18;
  uint uVar273;
  undefined8 unaff_x30;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  long local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  
  *in_x18 = unaff_x30;
  lVar265 = sp_el0;
  local_70 = *(long *)(lVar265 + 0x5e0);
  uVar254 = *param_1;
  uVar268 = param_1[1];
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uVar260 = uVar268;
  if (1 < uVar254) {
    uVar260 = uVar268 + 1;
  }
  local_130 = 0;
  uStack_128 = 0;
  bVar247 = 1 < uVar254;
  if (uVar260 != 0) {
    bVar247 = 0xffffffff00000000 < uVar260;
  }
  uVar253 = (ulong)bVar247;
  local_1a0 = 0;
  uStack_198 = 0;
  uVar259 = uVar253 + param_1[2];
  local_1b0 = 0;
  uStack_1a8 = 0;
  if (uVar259 != 0) {
    uVar253 = 0;
  }
  uStack_178 = uVar253 + param_1[3];
  uVar255 = 1 - uVar254;
  if (uStack_178 != 0) {
    uVar253 = (ulong)(uStack_178 >> 0x20 != 0);
  }
  uStack_188 = -uVar260 - 0x100000000;
  local_180 = ~uVar259;
  if (uVar253 == 0) {
    uStack_178 = 0xffffffff - uStack_178;
  }
  else {
    uVar260 = 0xffffffff00000000;
    if (2 - uVar254 < uVar255) {
      uVar260 = 0xffffffff00000001;
    }
    bVar247 = CARRY8(uStack_188,uVar260);
    uStack_188 = uStack_188 + uVar260;
    uVar259 = (bVar247 - uVar259) - 2;
    uVar260 = (ulong)bVar247;
    if (uVar259 != local_180) {
      uVar260 = (ulong)(uVar259 < local_180);
    }
    uStack_178 = (uVar260 - uStack_178) + 0x1fffffffe;
    local_180 = uVar259;
    uVar255 = 2 - uVar254;
  }
  uVar261 = 0;
  iVar258 = 1;
  uVar260 = param_1[3];
  uVar259 = 0;
  uVar253 = 0;
  uVar267 = 1;
  uVar263 = 0;
  uVar272 = param_1[2];
  do {
    uVar257 = 0xffffffff00000000;
    uVar273 = 1;
    local_190 = uVar255;
    local_170 = uVar267;
    uStack_168 = uVar259;
    local_160 = uVar263;
    uStack_158 = uVar253;
    local_150 = uVar254;
    uStack_148 = uVar268;
    local_140 = uVar272;
    uStack_138 = uVar260;
    do {
      mod_sqrt_secp224r1_rs(&local_150,&local_170,&local_190,&local_150,&local_170,&local_190);
      uVar1 = uVar273 & 0xffff;
      uVar273 = uVar273 + 1;
    } while (uVar1 < ((int)(char)iVar258 & 0xffffU));
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_170;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = uVar267;
    uVar252 = SUB168(auVar2 * auVar124,8);
    local_f0 = 0;
    uStack_e8 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_170;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = uVar259;
    uVar255 = uVar252 + local_170 * uVar259;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_168;
    auVar126._8_8_ = 0;
    auVar126._0_8_ = uVar267;
    uVar252 = SUB168(auVar3 * auVar125,8) + (ulong)CARRY8(uVar252,local_170 * uVar259);
    uStack_a8 = uVar255 + uStack_168 * uVar267;
    uVar264 = uVar252 + SUB168(auVar4 * auVar126,8) + (ulong)CARRY8(uVar255,uStack_168 * uVar267);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_170;
    auVar127._8_8_ = 0;
    auVar127._0_8_ = uVar263;
    bVar247 = uStack_a8 < uVar255;
    if (uVar264 != uVar252) {
      bVar247 = uVar264 < uVar252;
    }
    uVar252 = (ulong)bVar247;
    uVar255 = uVar264 + local_170 * uVar263;
    uVar270 = uVar252 + SUB168(auVar5 * auVar127,8) + (ulong)CARRY8(uVar264,local_170 * uVar263);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack_168;
    auVar128._8_8_ = 0;
    auVar128._0_8_ = uVar259;
    bVar247 = uVar255 < uVar264;
    if (uVar270 != uVar252) {
      bVar247 = uVar270 < uVar252;
    }
    uVar252 = uVar255 + uStack_168 * uVar259;
    uVar264 = uVar270 + SUB168(auVar6 * auVar128,8) + (ulong)CARRY8(uVar255,uStack_168 * uVar259);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_160;
    auVar129._8_8_ = 0;
    auVar129._0_8_ = uVar267;
    bVar248 = uVar252 < uVar255;
    if (uVar264 != uVar270) {
      bVar248 = uVar264 < uVar270;
    }
    local_a0 = uVar252 + local_160 * uVar267;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_170;
    auVar130._8_8_ = 0;
    auVar130._0_8_ = uVar253;
    uVar255 = uVar264 + SUB168(auVar7 * auVar129,8) + (ulong)CARRY8(uVar252,local_160 * uVar267);
    bVar249 = local_a0 < uVar252;
    if (uVar255 != uVar264) {
      bVar249 = uVar255 < uVar264;
    }
    local_b0 = local_170 * uVar267;
    uVar252 = uVar255 + local_170 * uVar253;
    uVar264 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar270 = uVar264 + SUB168(auVar8 * auVar130,8) + (ulong)CARRY8(uVar255,local_170 * uVar253);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uStack_168;
    auVar131._8_8_ = 0;
    auVar131._0_8_ = uVar263;
    bVar247 = uVar252 < uVar255;
    if (uVar270 != uVar264) {
      bVar247 = uVar270 < uVar264;
    }
    uVar255 = uVar252 + uStack_168 * uVar263;
    uVar264 = uVar270 + SUB168(auVar9 * auVar131,8) + (ulong)CARRY8(uVar252,uStack_168 * uVar263);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_160;
    auVar132._8_8_ = 0;
    auVar132._0_8_ = uVar259;
    bVar248 = uVar255 < uVar252;
    if (uVar264 != uVar270) {
      bVar248 = uVar264 < uVar270;
    }
    uVar252 = uVar255 + local_160 * uVar259;
    uVar270 = uVar264 + SUB168(auVar10 * auVar132,8) + (ulong)CARRY8(uVar255,local_160 * uVar259);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uStack_158;
    auVar133._8_8_ = 0;
    auVar133._0_8_ = uVar267;
    bVar249 = uVar252 < uVar255;
    if (uVar270 != uVar264) {
      bVar249 = uVar270 < uVar264;
    }
    uStack_98 = uVar252 + uStack_158 * uVar267;
    uVar255 = uVar270 + SUB168(auVar11 * auVar133,8) + (ulong)CARRY8(uVar252,uStack_158 * uVar267);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uStack_168;
    auVar134._8_8_ = 0;
    auVar134._0_8_ = uVar253;
    bVar250 = uStack_98 < uVar252;
    if (uVar255 != uVar270) {
      bVar250 = uVar255 < uVar270;
    }
    uVar252 = uVar255 + uStack_168 * uVar253;
    uVar264 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
    uVar270 = uVar264 + SUB168(auVar12 * auVar134,8) + (ulong)CARRY8(uVar255,uStack_168 * uVar253);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_160;
    auVar135._8_8_ = 0;
    auVar135._0_8_ = uVar263;
    bVar247 = uVar252 < uVar255;
    if (uVar270 != uVar264) {
      bVar247 = uVar270 < uVar264;
    }
    uVar255 = uVar252 + local_160 * uVar263;
    uVar264 = uVar270 + SUB168(auVar13 * auVar135,8) + (ulong)CARRY8(uVar252,local_160 * uVar263);
    bVar248 = uVar255 < uVar252;
    if (uVar264 != uVar270) {
      bVar248 = uVar264 < uVar270;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uStack_158;
    auVar136._8_8_ = 0;
    auVar136._0_8_ = uVar259;
    local_90 = uVar255 + uStack_158 * uVar259;
    uVar252 = uVar264 + SUB168(auVar14 * auVar136,8) + (ulong)CARRY8(uVar255,uStack_158 * uVar259);
    bVar249 = local_90 < uVar255;
    if (uVar252 != uVar264) {
      bVar249 = uVar252 < uVar264;
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uStack_158;
    auVar137._8_8_ = 0;
    auVar137._0_8_ = uVar263;
    uVar255 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_160;
    auVar138._8_8_ = 0;
    auVar138._0_8_ = uVar253;
    uVar264 = uVar252 + local_160 * uVar253;
    uVar270 = uVar255 + SUB168(auVar16 * auVar138,8) + (ulong)CARRY8(uVar252,local_160 * uVar253);
    bVar247 = uVar264 < uVar252;
    if (uVar270 != uVar255) {
      bVar247 = uVar270 < uVar255;
    }
    uStack_88 = uVar264 + uStack_158 * uVar263;
    uVar255 = uVar270 + SUB168(auVar15 * auVar137,8) + (ulong)CARRY8(uVar264,uStack_158 * uVar263);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uStack_158;
    auVar139._8_8_ = 0;
    auVar139._0_8_ = uVar253;
    bVar248 = uStack_88 < uVar264;
    if (uVar255 != uVar270) {
      bVar248 = uVar255 < uVar270;
    }
    local_80 = uVar255 + uStack_158 * uVar253;
    lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar17 * auVar139,8) +
                (ulong)CARRY8(uVar255,uStack_158 * uVar253);
    vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_d0,&local_b0);
    uVar252 = *param_1;
    uVar270 = param_1[1];
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar252;
    auVar140._8_8_ = 0;
    auVar140._0_8_ = local_d0;
    uVar264 = SUB168(auVar18 * auVar140,8);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar270;
    auVar141._8_8_ = 0;
    auVar141._0_8_ = local_d0;
    uVar255 = uVar270 * local_d0 + uVar264;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uStack_c8;
    auVar142._8_8_ = 0;
    auVar142._0_8_ = uVar252;
    uVar251 = SUB168(auVar19 * auVar141,8) + (ulong)CARRY8(uVar270 * local_d0,uVar264);
    uVar264 = param_1[2];
    uVar262 = param_1[3];
    uStack_a8 = uVar255 + uStack_c8 * uVar252;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uStack_c8;
    auVar143._8_8_ = 0;
    auVar143._0_8_ = uVar270;
    uVar266 = uVar251 + SUB168(auVar20 * auVar142,8) + (ulong)CARRY8(uVar255,uStack_c8 * uVar252);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar264;
    auVar144._8_8_ = 0;
    auVar144._0_8_ = local_d0;
    bVar247 = uStack_a8 < uVar255;
    if (uVar266 != uVar251) {
      bVar247 = uVar266 < uVar251;
    }
    uVar271 = (ulong)bVar247;
    uVar255 = uVar266 + uVar264 * local_d0;
    uVar251 = uVar271 + SUB168(auVar22 * auVar144,8) + (ulong)CARRY8(uVar266,uVar264 * local_d0);
    bVar247 = uVar255 < uVar266;
    if (uVar251 != uVar271) {
      bVar247 = uVar251 < uVar271;
    }
    uVar266 = uVar255 + uStack_c8 * uVar270;
    uVar271 = uVar251 + SUB168(auVar21 * auVar143,8) + (ulong)CARRY8(uVar255,uStack_c8 * uVar270);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_c0;
    auVar145._8_8_ = 0;
    auVar145._0_8_ = uVar252;
    bVar248 = uVar266 < uVar255;
    if (uVar271 != uVar251) {
      bVar248 = uVar271 < uVar251;
    }
    local_a0 = uVar266 + local_c0 * uVar252;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar262;
    auVar146._8_8_ = 0;
    auVar146._0_8_ = local_d0;
    uVar255 = uVar271 + SUB168(auVar23 * auVar145,8) + (ulong)CARRY8(uVar266,local_c0 * uVar252);
    bVar249 = local_a0 < uVar266;
    if (uVar255 != uVar271) {
      bVar249 = uVar255 < uVar271;
    }
    uVar251 = uVar255 + uVar262 * local_d0;
    uVar266 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar271 = uVar266 + SUB168(auVar24 * auVar146,8) + (ulong)CARRY8(uVar255,uVar262 * local_d0);
    local_b0 = uVar252 * local_d0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar264;
    auVar147._8_8_ = 0;
    auVar147._0_8_ = uStack_c8;
    bVar247 = uVar251 < uVar255;
    if (uVar271 != uVar266) {
      bVar247 = uVar271 < uVar266;
    }
    uVar255 = uVar251 + uVar264 * uStack_c8;
    uVar266 = uVar271 + SUB168(auVar25 * auVar147,8) + (ulong)CARRY8(uVar251,uVar264 * uStack_c8);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_c0;
    auVar148._8_8_ = 0;
    auVar148._0_8_ = uVar270;
    bVar248 = uVar255 < uVar251;
    if (uVar266 != uVar271) {
      bVar248 = uVar266 < uVar271;
    }
    uVar251 = uVar255 + local_c0 * uVar270;
    uVar271 = uVar266 + SUB168(auVar26 * auVar148,8) + (ulong)CARRY8(uVar255,local_c0 * uVar270);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uStack_b8;
    auVar149._8_8_ = 0;
    auVar149._0_8_ = uVar252;
    bVar249 = uVar251 < uVar255;
    if (uVar271 != uVar266) {
      bVar249 = uVar271 < uVar266;
    }
    uStack_98 = uVar251 + uStack_b8 * uVar252;
    uVar255 = uVar271 + SUB168(auVar27 * auVar149,8) + (ulong)CARRY8(uVar251,uStack_b8 * uVar252);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar262;
    auVar150._8_8_ = 0;
    auVar150._0_8_ = uStack_c8;
    bVar250 = uStack_98 < uVar251;
    if (uVar255 != uVar271) {
      bVar250 = uVar255 < uVar271;
    }
    uVar252 = uVar255 + uVar262 * uStack_c8;
    uVar251 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
    uVar266 = uVar251 + SUB168(auVar28 * auVar150,8) + (ulong)CARRY8(uVar255,uVar262 * uStack_c8);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = local_c0;
    auVar151._8_8_ = 0;
    auVar151._0_8_ = uVar264;
    bVar247 = uVar252 < uVar255;
    if (uVar266 != uVar251) {
      bVar247 = uVar266 < uVar251;
    }
    uVar255 = uVar252 + local_c0 * uVar264;
    uVar251 = uVar266 + SUB168(auVar29 * auVar151,8) + (ulong)CARRY8(uVar252,local_c0 * uVar264);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uStack_b8;
    auVar152._8_8_ = 0;
    auVar152._0_8_ = uVar270;
    bVar248 = uVar255 < uVar252;
    if (uVar251 != uVar266) {
      bVar248 = uVar251 < uVar266;
    }
    local_90 = uVar255 + uStack_b8 * uVar270;
    uVar252 = uVar251 + SUB168(auVar30 * auVar152,8) + (ulong)CARRY8(uVar255,uStack_b8 * uVar270);
    bVar249 = local_90 < uVar255;
    if (uVar252 != uVar251) {
      bVar249 = uVar252 < uVar251;
    }
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar262;
    auVar153._8_8_ = 0;
    auVar153._0_8_ = local_c0;
    uVar255 = uVar252 + uVar262 * local_c0;
    uVar270 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar251 = uVar270 + SUB168(auVar31 * auVar153,8) + (ulong)CARRY8(uVar252,uVar262 * local_c0);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uStack_b8;
    auVar154._8_8_ = 0;
    auVar154._0_8_ = uVar264;
    bVar247 = uVar255 < uVar252;
    if (uVar251 != uVar270) {
      bVar247 = uVar251 < uVar270;
    }
    uStack_88 = uVar255 + uStack_b8 * uVar264;
    uVar252 = uVar251 + SUB168(auVar32 * auVar154,8) + (ulong)CARRY8(uVar255,uStack_b8 * uVar264);
    bVar248 = uStack_88 < uVar255;
    if (uVar252 != uVar251) {
      bVar248 = uVar252 < uVar251;
    }
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uStack_b8;
    auVar155._8_8_ = 0;
    auVar155._0_8_ = uVar262;
    local_80 = uVar252 + uStack_b8 * uVar262;
    lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar33 * auVar155,8) +
                (ulong)CARRY8(uVar252,uStack_b8 * uVar262);
    vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_d0,&local_b0);
    uVar270 = uStack_138;
    uVar264 = local_140;
    uVar252 = uStack_148;
    uVar255 = local_150;
    if (1 < local_d0) {
      uStack_c8 = uStack_c8 + 1;
    }
    uVar262 = -uStack_c8 - 0x100000000;
    bVar247 = 1 < local_d0;
    if (uStack_c8 != 0) {
      bVar247 = 0xffffffff00000000 < uStack_c8;
    }
    uVar266 = (ulong)bVar247;
    uVar251 = uVar266 + local_c0;
    if (uVar251 != 0) {
      uVar266 = 0;
    }
    uVar256 = ~uVar251;
    uVar271 = uVar266 + uStack_b8;
    uStack_b8 = 0xffffffff - uVar271;
    if (uVar271 != 0) {
      uVar266 = (ulong)(uVar271 >> 0x20 != 0);
    }
    uVar246 = 1 - local_d0;
    uStack_c8 = uVar262;
    local_c0 = uVar256;
    if (uVar266 != 0) {
      if (2 - local_d0 < 1 - local_d0) {
        uVar257 = 0xffffffff00000001;
      }
      uStack_c8 = uVar262 + uVar257;
      local_c0 = (CARRY8(uVar262,uVar257) - uVar251) - 2;
      uVar257 = (ulong)CARRY8(uVar262,uVar257);
      if (local_c0 != uVar256) {
        uVar257 = (ulong)(local_c0 < uVar256);
      }
      uStack_b8 = (uVar257 - uVar271) + 0x1fffffffe;
      uVar246 = 2 - local_d0;
    }
    local_d0 = uVar246;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = local_150;
    auVar156._8_8_ = 0;
    auVar156._0_8_ = uVar254;
    uVar262 = SUB168(auVar34 * auVar156,8);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = local_150;
    auVar157._8_8_ = 0;
    auVar157._0_8_ = uVar268;
    uVar257 = uVar262 + local_150 * uVar268;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uStack_148;
    auVar158._8_8_ = 0;
    auVar158._0_8_ = uVar254;
    uVar262 = SUB168(auVar35 * auVar157,8) + (ulong)CARRY8(uVar262,local_150 * uVar268);
    uStack_a8 = uVar257 + uStack_148 * uVar254;
    uVar251 = uVar262 + SUB168(auVar36 * auVar158,8) + (ulong)CARRY8(uVar257,uStack_148 * uVar254);
    auVar37._8_8_ = 0;
    auVar37._0_8_ = local_150;
    auVar159._8_8_ = 0;
    auVar159._0_8_ = uVar272;
    bVar247 = uStack_a8 < uVar257;
    if (uVar251 != uVar262) {
      bVar247 = uVar251 < uVar262;
    }
    uVar266 = (ulong)bVar247;
    uVar257 = uVar251 + local_150 * uVar272;
    uVar262 = uVar266 + SUB168(auVar37 * auVar159,8) + (ulong)CARRY8(uVar251,local_150 * uVar272);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uStack_148;
    auVar160._8_8_ = 0;
    auVar160._0_8_ = uVar268;
    bVar247 = uVar257 < uVar251;
    if (uVar262 != uVar266) {
      bVar247 = uVar262 < uVar266;
    }
    uVar251 = uVar257 + uStack_148 * uVar268;
    uVar266 = uVar262 + SUB168(auVar38 * auVar160,8) + (ulong)CARRY8(uVar257,uStack_148 * uVar268);
    auVar39._8_8_ = 0;
    auVar39._0_8_ = local_140;
    auVar161._8_8_ = 0;
    auVar161._0_8_ = uVar254;
    bVar248 = uVar251 < uVar257;
    if (uVar266 != uVar262) {
      bVar248 = uVar266 < uVar262;
    }
    local_a0 = uVar251 + local_140 * uVar254;
    uVar257 = uVar266 + SUB168(auVar39 * auVar161,8) + (ulong)CARRY8(uVar251,local_140 * uVar254);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = local_150;
    auVar162._8_8_ = 0;
    auVar162._0_8_ = uVar260;
    bVar249 = local_a0 < uVar251;
    if (uVar257 != uVar266) {
      bVar249 = uVar257 < uVar266;
    }
    uVar262 = uVar257 + local_150 * uVar260;
    uVar251 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar266 = uVar251 + SUB168(auVar40 * auVar162,8) + (ulong)CARRY8(uVar257,local_150 * uVar260);
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uStack_148;
    auVar163._8_8_ = 0;
    auVar163._0_8_ = uVar272;
    bVar247 = uVar262 < uVar257;
    if (uVar266 != uVar251) {
      bVar247 = uVar266 < uVar251;
    }
    uVar257 = uVar262 + uStack_148 * uVar272;
    uVar251 = uVar266 + SUB168(auVar41 * auVar163,8) + (ulong)CARRY8(uVar262,uStack_148 * uVar272);
    auVar42._8_8_ = 0;
    auVar42._0_8_ = local_140;
    auVar164._8_8_ = 0;
    auVar164._0_8_ = uVar268;
    bVar248 = uVar257 < uVar262;
    if (uVar251 != uVar266) {
      bVar248 = uVar251 < uVar266;
    }
    uVar262 = uVar257 + local_140 * uVar268;
    uVar266 = uVar251 + SUB168(auVar42 * auVar164,8) + (ulong)CARRY8(uVar257,local_140 * uVar268);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uStack_138;
    auVar165._8_8_ = 0;
    auVar165._0_8_ = uVar254;
    bVar249 = uVar262 < uVar257;
    if (uVar266 != uVar251) {
      bVar249 = uVar266 < uVar251;
    }
    uStack_98 = uVar262 + uStack_138 * uVar254;
    uVar257 = uVar266 + SUB168(auVar43 * auVar165,8) + (ulong)CARRY8(uVar262,uStack_138 * uVar254);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uStack_148;
    auVar166._8_8_ = 0;
    auVar166._0_8_ = uVar260;
    bVar250 = uStack_98 < uVar262;
    if (uVar257 != uVar266) {
      bVar250 = uVar257 < uVar266;
    }
    uVar262 = uVar257 + uStack_148 * uVar260;
    uVar251 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
    uVar266 = uVar251 + SUB168(auVar44 * auVar166,8) + (ulong)CARRY8(uVar257,uStack_148 * uVar260);
    auVar45._8_8_ = 0;
    auVar45._0_8_ = local_140;
    auVar167._8_8_ = 0;
    auVar167._0_8_ = uVar272;
    bVar247 = uVar262 < uVar257;
    if (uVar266 != uVar251) {
      bVar247 = uVar266 < uVar251;
    }
    uVar257 = uVar262 + local_140 * uVar272;
    uVar251 = uVar266 + SUB168(auVar45 * auVar167,8) + (ulong)CARRY8(uVar262,local_140 * uVar272);
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uStack_138;
    auVar168._8_8_ = 0;
    auVar168._0_8_ = uVar268;
    bVar248 = uVar257 < uVar262;
    if (uVar251 != uVar266) {
      bVar248 = uVar251 < uVar266;
    }
    local_90 = uVar257 + uStack_138 * uVar268;
    uVar262 = uVar251 + SUB168(auVar46 * auVar168,8) + (ulong)CARRY8(uVar257,uStack_138 * uVar268);
    local_b0 = local_150 * uVar254;
    bVar249 = local_90 < uVar257;
    if (uVar262 != uVar251) {
      bVar249 = uVar262 < uVar251;
    }
    auVar47._8_8_ = 0;
    auVar47._0_8_ = local_140;
    auVar169._8_8_ = 0;
    auVar169._0_8_ = uVar260;
    uVar257 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar251 = uVar262 + local_140 * uVar260;
    uVar266 = uVar257 + SUB168(auVar47 * auVar169,8) + (ulong)CARRY8(uVar262,local_140 * uVar260);
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uStack_138;
    auVar170._8_8_ = 0;
    auVar170._0_8_ = uVar272;
    bVar247 = uVar251 < uVar262;
    if (uVar266 != uVar257) {
      bVar247 = uVar266 < uVar257;
    }
    uStack_88 = uVar251 + uStack_138 * uVar272;
    uVar257 = uVar266 + SUB168(auVar48 * auVar170,8) + (ulong)CARRY8(uVar251,uStack_138 * uVar272);
    bVar248 = uStack_88 < uVar251;
    if (uVar257 != uVar266) {
      bVar248 = uVar257 < uVar266;
    }
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uStack_138;
    auVar171._8_8_ = 0;
    auVar171._0_8_ = uVar260;
    local_80 = uVar257 + uStack_138 * uVar260;
    lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar49 * auVar171,8) +
                (ulong)CARRY8(uVar257,uStack_138 * uVar260);
    vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_f0,&local_b0);
    bVar247 = CARRY8(local_d0,local_f0);
    local_f0 = local_d0 + local_f0;
    uVar262 = (ulong)(local_d0 != 0 && bVar247);
    uVar257 = uStack_c8 + uStack_e8 + uVar262;
    if (uVar257 != uStack_e8) {
      uVar262 = (ulong)(uVar257 < uStack_e8);
    }
    uVar251 = local_c0 + local_e0 + uVar262;
    if (uVar251 != local_e0) {
      uVar262 = (ulong)(uVar251 < local_e0);
    }
    uVar266 = uStack_b8 + uStack_d8 + uVar262;
    if (uVar266 != uStack_d8) {
      uVar262 = (ulong)(uVar266 < uStack_d8);
    }
    if ((uVar262 != 0) ||
       ((uStack_e8 = uVar257, local_e0 = uVar251, uStack_d8 = uVar266, 0xfffffffe < uVar266 &&
        ((uVar266 != 0xffffffff ||
         (((uVar251 == 0xffffffffffffffff && (0xfffffffeffffffff < uVar257)) &&
          ((uVar257 != 0xffffffff00000000 || (local_f0 != 0)))))))))) {
      uVar262 = 0xffffffff00000000;
      if (local_f0 == 0) {
        uVar262 = 0xffffffff00000001;
      }
      local_f0 = local_f0 - 1;
      lVar265 = -0x100000000;
      if (-(ulong)(uVar262 <= uVar257) <= uVar251 && uVar262 <= uVar257) {
        lVar265 = -0xffffffff;
      }
      uStack_e8 = uVar257 - uVar262;
      local_e0 = uVar251 + (uVar262 <= uVar257);
      uStack_d8 = uVar266 + lVar265;
    }
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar255;
    auVar172._8_8_ = 0;
    auVar172._0_8_ = uVar267;
    uVar262 = SUB168(auVar50 * auVar172,8);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar255;
    auVar173._8_8_ = 0;
    auVar173._0_8_ = uVar259;
    uVar257 = uVar262 + uVar255 * uVar259;
    uVar262 = SUB168(auVar51 * auVar173,8) + (ulong)CARRY8(uVar262,uVar255 * uVar259);
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar252;
    auVar174._8_8_ = 0;
    auVar174._0_8_ = uVar267;
    uStack_a8 = uVar257 + uVar252 * uVar267;
    uVar251 = uVar262 + SUB168(auVar52 * auVar174,8) + (ulong)CARRY8(uVar257,uVar252 * uVar267);
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar255;
    auVar175._8_8_ = 0;
    auVar175._0_8_ = uVar263;
    bVar247 = uStack_a8 < uVar257;
    if (uVar251 != uVar262) {
      bVar247 = uVar251 < uVar262;
    }
    uVar262 = (ulong)bVar247;
    uVar257 = uVar251 + uVar255 * uVar263;
    uVar266 = uVar262 + SUB168(auVar53 * auVar175,8) + (ulong)CARRY8(uVar251,uVar255 * uVar263);
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar252;
    auVar176._8_8_ = 0;
    auVar176._0_8_ = uVar259;
    bVar247 = uVar257 < uVar251;
    if (uVar266 != uVar262) {
      bVar247 = uVar266 < uVar262;
    }
    uVar262 = uVar257 + uVar252 * uVar259;
    uVar251 = uVar266 + SUB168(auVar54 * auVar176,8) + (ulong)CARRY8(uVar257,uVar252 * uVar259);
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar264;
    auVar177._8_8_ = 0;
    auVar177._0_8_ = uVar267;
    bVar248 = uVar262 < uVar257;
    if (uVar251 != uVar266) {
      bVar248 = uVar251 < uVar266;
    }
    local_a0 = uVar262 + uVar264 * uVar267;
    uVar257 = uVar251 + SUB168(auVar55 * auVar177,8) + (ulong)CARRY8(uVar262,uVar264 * uVar267);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar255;
    auVar178._8_8_ = 0;
    auVar178._0_8_ = uVar253;
    bVar249 = local_a0 < uVar262;
    if (uVar257 != uVar251) {
      bVar249 = uVar257 < uVar251;
    }
    uVar262 = uVar257 + uVar255 * uVar253;
    uVar251 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar266 = uVar251 + SUB168(auVar56 * auVar178,8) + (ulong)CARRY8(uVar257,uVar255 * uVar253);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar252;
    auVar179._8_8_ = 0;
    auVar179._0_8_ = uVar263;
    bVar247 = uVar262 < uVar257;
    if (uVar266 != uVar251) {
      bVar247 = uVar266 < uVar251;
    }
    uVar257 = uVar262 + uVar252 * uVar263;
    uVar251 = uVar266 + SUB168(auVar57 * auVar179,8) + (ulong)CARRY8(uVar262,uVar252 * uVar263);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar264;
    auVar180._8_8_ = 0;
    auVar180._0_8_ = uVar259;
    bVar248 = uVar257 < uVar262;
    if (uVar251 != uVar266) {
      bVar248 = uVar251 < uVar266;
    }
    uVar262 = uVar257 + uVar264 * uVar259;
    uVar266 = uVar251 + SUB168(auVar58 * auVar180,8) + (ulong)CARRY8(uVar257,uVar264 * uVar259);
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar270;
    auVar181._8_8_ = 0;
    auVar181._0_8_ = uVar267;
    bVar249 = uVar262 < uVar257;
    if (uVar266 != uVar251) {
      bVar249 = uVar266 < uVar251;
    }
    uStack_98 = uVar262 + uVar270 * uVar267;
    uVar257 = uVar266 + SUB168(auVar59 * auVar181,8) + (ulong)CARRY8(uVar262,uVar270 * uVar267);
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar252;
    auVar182._8_8_ = 0;
    auVar182._0_8_ = uVar253;
    bVar250 = uStack_98 < uVar262;
    if (uVar257 != uVar266) {
      bVar250 = uVar257 < uVar266;
    }
    uVar262 = uVar257 + uVar252 * uVar253;
    uVar251 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
    uVar252 = uVar251 + SUB168(auVar60 * auVar182,8) + (ulong)CARRY8(uVar257,uVar252 * uVar253);
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar264;
    auVar183._8_8_ = 0;
    auVar183._0_8_ = uVar263;
    bVar247 = uVar262 < uVar257;
    if (uVar252 != uVar251) {
      bVar247 = uVar252 < uVar251;
    }
    uVar257 = uVar262 + uVar264 * uVar263;
    uVar251 = uVar252 + SUB168(auVar61 * auVar183,8) + (ulong)CARRY8(uVar262,uVar264 * uVar263);
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar270;
    auVar184._8_8_ = 0;
    auVar184._0_8_ = uVar259;
    bVar248 = uVar257 < uVar262;
    if (uVar251 != uVar252) {
      bVar248 = uVar251 < uVar252;
    }
    local_90 = uVar257 + uVar270 * uVar259;
    uVar259 = uVar251 + SUB168(auVar62 * auVar184,8) + (ulong)CARRY8(uVar257,uVar270 * uVar259);
    local_b0 = uVar255 * uVar267;
    bVar249 = local_90 < uVar257;
    if (uVar259 != uVar251) {
      bVar249 = uVar259 < uVar251;
    }
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar264;
    auVar185._8_8_ = 0;
    auVar185._0_8_ = uVar253;
    uVar255 = uVar259 + uVar264 * uVar253;
    uVar267 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar257 = uVar267 + SUB168(auVar63 * auVar185,8) + (ulong)CARRY8(uVar259,uVar264 * uVar253);
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar270;
    auVar186._8_8_ = 0;
    auVar186._0_8_ = uVar263;
    bVar247 = uVar255 < uVar259;
    if (uVar257 != uVar267) {
      bVar247 = uVar257 < uVar267;
    }
    uStack_88 = uVar255 + uVar270 * uVar263;
    uVar259 = uVar257 + SUB168(auVar64 * auVar186,8) + (ulong)CARRY8(uVar255,uVar270 * uVar263);
    bVar248 = uStack_88 < uVar255;
    if (uVar259 != uVar257) {
      bVar248 = uVar259 < uVar257;
    }
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar270;
    auVar187._8_8_ = 0;
    auVar187._0_8_ = uVar253;
    local_80 = uVar259 + uVar270 * uVar253;
    lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar65 * auVar187,8) +
                (ulong)CARRY8(uVar259,uVar270 * uVar253);
    vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_d0,&local_b0);
    auVar66._8_8_ = 0;
    auVar66._0_8_ = local_170;
    auVar188._8_8_ = 0;
    auVar188._0_8_ = uVar254;
    uVar253 = SUB168(auVar66 * auVar188,8);
    uVar255 = local_170 * uVar268;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = local_170;
    auVar189._8_8_ = 0;
    auVar189._0_8_ = uVar268;
    uVar267 = SUB168(auVar67 * auVar189,8);
    uVar259 = uVar253 + uVar255;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uStack_168;
    auVar190._8_8_ = 0;
    auVar190._0_8_ = uVar254;
    uStack_a8 = uVar259 + uStack_168 * uVar254;
    uVar259 = uVar267 + CARRY8(uVar253,uVar255) + SUB168(auVar68 * auVar190,8) +
              (ulong)CARRY8(uVar259,uStack_168 * uVar254);
    auVar69._8_8_ = 0;
    auVar69._0_8_ = local_160;
    auVar191._8_8_ = 0;
    auVar191._0_8_ = uVar254;
    bVar247 = uStack_a8 < uVar255;
    if (uVar259 != uVar267) {
      bVar247 = uVar259 < uVar267;
    }
    uVar255 = (ulong)bVar247;
    uVar253 = uVar259 + local_160 * uVar254;
    uVar267 = uVar255 + SUB168(auVar69 * auVar191,8) + (ulong)CARRY8(uVar259,local_160 * uVar254);
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uStack_168;
    auVar192._8_8_ = 0;
    auVar192._0_8_ = uVar268;
    bVar247 = uVar253 < uVar259;
    if (uVar267 != uVar255) {
      bVar247 = uVar267 < uVar255;
    }
    uVar259 = uVar253 + uStack_168 * uVar268;
    uVar255 = uVar267 + SUB168(auVar70 * auVar192,8) + (ulong)CARRY8(uVar253,uStack_168 * uVar268);
    auVar71._8_8_ = 0;
    auVar71._0_8_ = local_170;
    auVar193._8_8_ = 0;
    auVar193._0_8_ = uVar272;
    bVar248 = uVar259 < uVar253;
    if (uVar255 != uVar267) {
      bVar248 = uVar255 < uVar267;
    }
    local_a0 = uVar259 + local_170 * uVar272;
    uVar253 = uVar255 + SUB168(auVar71 * auVar193,8) + (ulong)CARRY8(uVar259,local_170 * uVar272);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uStack_158;
    auVar194._8_8_ = 0;
    auVar194._0_8_ = uVar254;
    bVar249 = local_a0 < uVar259;
    if (uVar253 != uVar255) {
      bVar249 = uVar253 < uVar255;
    }
    uVar259 = uVar253 + uStack_158 * uVar254;
    uVar255 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar267 = uVar255 + SUB168(auVar72 * auVar194,8) + (ulong)CARRY8(uVar253,uStack_158 * uVar254);
    auVar73._8_8_ = 0;
    auVar73._0_8_ = local_160;
    auVar195._8_8_ = 0;
    auVar195._0_8_ = uVar268;
    bVar247 = uVar259 < uVar253;
    if (uVar267 != uVar255) {
      bVar247 = uVar267 < uVar255;
    }
    uVar253 = uVar259 + local_160 * uVar268;
    uVar255 = uVar267 + SUB168(auVar73 * auVar195,8) + (ulong)CARRY8(uVar259,local_160 * uVar268);
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uStack_168;
    auVar196._8_8_ = 0;
    auVar196._0_8_ = uVar272;
    bVar248 = uVar253 < uVar259;
    if (uVar255 != uVar267) {
      bVar248 = uVar255 < uVar267;
    }
    uVar259 = uVar253 + uStack_168 * uVar272;
    uVar267 = uVar255 + SUB168(auVar74 * auVar196,8) + (ulong)CARRY8(uVar253,uStack_168 * uVar272);
    auVar75._8_8_ = 0;
    auVar75._0_8_ = local_170;
    auVar197._8_8_ = 0;
    auVar197._0_8_ = uVar260;
    bVar249 = uVar259 < uVar253;
    if (uVar267 != uVar255) {
      bVar249 = uVar267 < uVar255;
    }
    uStack_98 = uVar259 + local_170 * uVar260;
    uVar253 = uVar267 + SUB168(auVar75 * auVar197,8) + (ulong)CARRY8(uVar259,local_170 * uVar260);
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uStack_158;
    auVar198._8_8_ = 0;
    auVar198._0_8_ = uVar268;
    bVar250 = uStack_98 < uVar259;
    if (uVar253 != uVar267) {
      bVar250 = uVar253 < uVar267;
    }
    uVar259 = uVar253 + uStack_158 * uVar268;
    uVar255 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
    uVar268 = uVar255 + SUB168(auVar76 * auVar198,8) + (ulong)CARRY8(uVar253,uStack_158 * uVar268);
    local_b0 = local_170 * uVar254;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = local_160;
    auVar199._8_8_ = 0;
    auVar199._0_8_ = uVar272;
    bVar247 = uVar259 < uVar253;
    if (uVar268 != uVar255) {
      bVar247 = uVar268 < uVar255;
    }
    uVar254 = uVar259 + local_160 * uVar272;
    uVar253 = uVar268 + SUB168(auVar77 * auVar199,8) + (ulong)CARRY8(uVar259,local_160 * uVar272);
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uStack_168;
    auVar200._8_8_ = 0;
    auVar200._0_8_ = uVar260;
    bVar248 = uVar254 < uVar259;
    if (uVar253 != uVar268) {
      bVar248 = uVar253 < uVar268;
    }
    local_90 = uVar254 + uStack_168 * uVar260;
    uVar268 = uVar253 + SUB168(auVar78 * auVar200,8) + (ulong)CARRY8(uVar254,uStack_168 * uVar260);
    bVar249 = local_90 < uVar254;
    if (uVar268 != uVar253) {
      bVar249 = uVar268 < uVar253;
    }
    auVar79._8_8_ = 0;
    auVar79._0_8_ = uStack_158;
    auVar201._8_8_ = 0;
    auVar201._0_8_ = uVar272;
    uVar254 = uVar268 + uStack_158 * uVar272;
    uVar259 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar253 = uVar259 + SUB168(auVar79 * auVar201,8) + (ulong)CARRY8(uVar268,uStack_158 * uVar272);
    auVar80._8_8_ = 0;
    auVar80._0_8_ = local_160;
    auVar202._8_8_ = 0;
    auVar202._0_8_ = uVar260;
    bVar247 = uVar254 < uVar268;
    if (uVar253 != uVar259) {
      bVar247 = uVar253 < uVar259;
    }
    uStack_88 = uVar254 + local_160 * uVar260;
    uVar268 = uVar253 + SUB168(auVar80 * auVar202,8) + (ulong)CARRY8(uVar254,local_160 * uVar260);
    auVar81._8_8_ = 0;
    auVar81._0_8_ = uStack_158;
    auVar203._8_8_ = 0;
    auVar203._0_8_ = uVar260;
    bVar248 = uStack_88 < uVar254;
    if (uVar268 != uVar253) {
      bVar248 = uVar268 < uVar253;
    }
    local_80 = uVar268 + uStack_158 * uVar260;
    lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar81 * auVar203,8) +
                (ulong)CARRY8(uVar268,uStack_158 * uVar260);
    vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_170,&local_b0);
    bVar247 = CARRY8(local_d0,local_170);
    local_170 = local_d0 + local_170;
    uVar254 = (ulong)(local_d0 != 0 && bVar247);
    uVar260 = uStack_c8 + uStack_168 + uVar254;
    if (uVar260 != uStack_168) {
      uVar254 = (ulong)(uVar260 < uStack_168);
    }
    uVar268 = local_c0 + local_160 + uVar254;
    if (uVar268 != local_160) {
      uVar254 = (ulong)(uVar268 < local_160);
    }
    uVar259 = uStack_b8 + uStack_158 + uVar254;
    if (uVar259 != uStack_158) {
      uVar254 = (ulong)(uVar259 < uStack_158);
    }
    if (uVar254 == 0) {
      uVar253 = uVar259;
      uVar254 = uVar268;
      uVar255 = uVar260;
      uStack_168 = uVar260;
      local_160 = uVar268;
      uStack_158 = uVar259;
      if (0xfffffffe < uVar259) {
        if (uVar259 != 0xffffffff) goto LAB_0010c96c;
        if (uVar268 == 0xffffffffffffffff) {
          if (uVar260 < 0xffffffff00000000) {
            uVar254 = 0xffffffffffffffff;
          }
          else {
            if ((uVar260 != 0xffffffff00000000) || (local_170 != 0)) goto LAB_0010c96c;
            uVar254 = 0xffffffffffffffff;
            uVar255 = 0xffffffff00000000;
          }
        }
        uVar253 = 0xffffffff;
      }
    }
    else {
LAB_0010c96c:
      bVar247 = local_170 == 0;
      local_170 = local_170 - 1;
      uVar267 = 0xffffffff00000000;
      if (bVar247) {
        uVar267 = 0xffffffff00000001;
      }
      uVar254 = uVar268 + (uVar267 <= uVar260);
      lVar265 = -0x100000000;
      if (-(ulong)(uVar267 <= uVar260) <= uVar268 && uVar267 <= uVar260) {
        lVar265 = -0xffffffff;
      }
      uVar253 = uVar259 + lVar265;
      uVar255 = uVar260 - uVar267;
      uStack_168 = uVar260 - uVar267;
      local_160 = uVar254;
      uStack_158 = uVar259 + lVar265;
    }
    uVar268 = local_170 * uVar255;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = local_170;
    auVar204._8_8_ = 0;
    auVar204._0_8_ = uVar255;
    uVar259 = SUB168(auVar82 * auVar204,8);
    auVar83._8_8_ = 0;
    auVar83._0_8_ = local_170;
    auVar205._8_8_ = 0;
    auVar205._0_8_ = local_170;
    uVar260 = SUB168(auVar83 * auVar205,8);
    uVar267 = local_170 * uVar254;
    uStack_a8 = uVar260 + uVar268 * 2;
    uVar260 = (uVar268 >> 0x3f | uVar259 << 1) + (ulong)CARRY8(uVar260,uVar268 * 2);
    auVar84._8_8_ = 0;
    auVar84._0_8_ = local_170;
    auVar206._8_8_ = 0;
    auVar206._0_8_ = uVar254;
    lVar265 = SUB168(auVar84 * auVar206,8);
    bVar247 = uStack_a8 < uVar268;
    if (uVar260 != uVar259) {
      bVar247 = uVar260 < uVar259;
    }
    uVar263 = (ulong)bVar247;
    uVar268 = uVar260 + uVar267;
    uVar259 = uVar263 + lVar265 + (ulong)CARRY8(uVar260,uVar267);
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar255;
    auVar207._8_8_ = 0;
    auVar207._0_8_ = uVar255;
    bVar247 = uVar268 < uVar260;
    if (uVar259 != uVar263) {
      bVar247 = uVar259 < uVar263;
    }
    uVar260 = uVar268 + uVar255 * uVar255;
    uVar263 = uVar259 + SUB168(auVar85 * auVar207,8) + (ulong)CARRY8(uVar268,uVar255 * uVar255);
    bVar248 = uVar260 < uVar268;
    if (uVar263 != uVar259) {
      bVar248 = uVar263 < uVar259;
    }
    local_a0 = uVar260 + uVar267;
    uVar259 = uVar263 + lVar265 + (ulong)CARRY8(uVar260,uVar267);
    auVar86._8_8_ = 0;
    auVar86._0_8_ = uVar253;
    auVar208._8_8_ = 0;
    auVar208._0_8_ = local_170;
    lVar265 = SUB168(auVar86 * auVar208,8);
    uVar268 = uVar253 * local_170;
    bVar249 = local_a0 < uVar260;
    if (uVar259 != uVar263) {
      bVar249 = uVar259 < uVar263;
    }
    uVar260 = uVar259 + uVar268;
    uVar267 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar263 = uVar255 * uVar254;
    uVar272 = uVar267 + lVar265 + (ulong)CARRY8(uVar259,uVar268);
    local_b0 = local_170 * local_170;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar255;
    auVar209._8_8_ = 0;
    auVar209._0_8_ = uVar254;
    lVar269 = SUB168(auVar87 * auVar209,8);
    bVar247 = uVar260 < uVar259;
    if (uVar272 != uVar267) {
      bVar247 = uVar272 < uVar267;
    }
    uVar259 = uVar260 + uVar263;
    uVar267 = uVar272 + lVar269 + (ulong)CARRY8(uVar260,uVar263);
    bVar248 = uVar259 < uVar260;
    if (uVar267 != uVar272) {
      bVar248 = uVar267 < uVar272;
    }
    uVar260 = uVar259 + uVar263;
    uVar263 = uVar267 + lVar269 + (ulong)CARRY8(uVar259,uVar263);
    bVar249 = uVar260 < uVar259;
    if (uVar263 != uVar267) {
      bVar249 = uVar263 < uVar267;
    }
    uStack_98 = uVar260 + uVar268;
    uVar268 = uVar263 + lVar265 + (ulong)CARRY8(uVar260,uVar268);
    auVar88._8_8_ = 0;
    auVar88._0_8_ = uVar253;
    auVar210._8_8_ = 0;
    auVar210._0_8_ = uVar255;
    lVar265 = SUB168(auVar88 * auVar210,8);
    uVar255 = uVar253 * uVar255;
    bVar250 = uStack_98 < uVar260;
    if (uVar268 != uVar263) {
      bVar250 = uVar268 < uVar263;
    }
    uVar260 = uVar268 + uVar255;
    uVar259 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
    uVar267 = uVar259 + lVar265 + (ulong)CARRY8(uVar268,uVar255);
    auVar89._8_8_ = 0;
    auVar89._0_8_ = uVar254;
    auVar211._8_8_ = 0;
    auVar211._0_8_ = uVar254;
    bVar247 = uVar260 < uVar268;
    if (uVar267 != uVar259) {
      bVar247 = uVar267 < uVar259;
    }
    uVar268 = uVar260 + uVar254 * uVar254;
    uVar259 = uVar267 + SUB168(auVar89 * auVar211,8) + (ulong)CARRY8(uVar260,uVar254 * uVar254);
    bVar248 = uVar268 < uVar260;
    if (uVar259 != uVar267) {
      bVar248 = uVar259 < uVar267;
    }
    local_90 = uVar268 + uVar255;
    uVar255 = uVar259 + lVar265 + (ulong)CARRY8(uVar268,uVar255);
    uVar260 = uVar253 * uVar254;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = uVar253;
    auVar212._8_8_ = 0;
    auVar212._0_8_ = uVar254;
    lVar265 = SUB168(auVar90 * auVar212,8);
    bVar249 = local_90 < uVar268;
    if (uVar255 != uVar259) {
      bVar249 = uVar255 < uVar259;
    }
    uVar254 = uVar255 + uVar260;
    uVar268 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar259 = uVar268 + lVar265 + (ulong)CARRY8(uVar255,uVar260);
    bVar247 = uVar254 < uVar255;
    if (uVar259 != uVar268) {
      bVar247 = uVar259 < uVar268;
    }
    uStack_88 = uVar254 + uVar260;
    uVar260 = uVar259 + lVar265 + (ulong)CARRY8(uVar254,uVar260);
    auVar91._8_8_ = 0;
    auVar91._0_8_ = uVar253;
    auVar213._8_8_ = 0;
    auVar213._0_8_ = uVar253;
    bVar248 = uStack_88 < uVar254;
    if (uVar260 != uVar259) {
      bVar248 = uVar260 < uVar259;
    }
    local_80 = uVar260 + uVar253 * uVar253;
    lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar91 * auVar213,8) +
                (ulong)CARRY8(uVar260,uVar253 * uVar253);
    vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_190,&local_b0);
    uVar254 = *param_1;
    uVar259 = param_1[1];
    auVar92._8_8_ = 0;
    auVar92._0_8_ = uVar254;
    auVar214._8_8_ = 0;
    auVar214._0_8_ = local_190;
    uVar268 = SUB168(auVar92 * auVar214,8);
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar259;
    auVar215._8_8_ = 0;
    auVar215._0_8_ = local_190;
    uVar260 = uVar259 * local_190 + uVar268;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = uStack_188;
    auVar216._8_8_ = 0;
    auVar216._0_8_ = uVar254;
    uVar255 = SUB168(auVar93 * auVar215,8) + (ulong)CARRY8(uVar259 * local_190,uVar268);
    uVar268 = param_1[2];
    uVar253 = param_1[3];
    uStack_a8 = uVar260 + uStack_188 * uVar254;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = uStack_188;
    auVar217._8_8_ = 0;
    auVar217._0_8_ = uVar259;
    uVar267 = uVar255 + SUB168(auVar94 * auVar216,8) + (ulong)CARRY8(uVar260,uStack_188 * uVar254);
    auVar96._8_8_ = 0;
    auVar96._0_8_ = uVar268;
    auVar218._8_8_ = 0;
    auVar218._0_8_ = local_190;
    bVar247 = uStack_a8 < uVar260;
    if (uVar267 != uVar255) {
      bVar247 = uVar267 < uVar255;
    }
    uVar263 = (ulong)bVar247;
    uVar260 = uVar267 + uVar268 * local_190;
    uVar255 = uVar263 + SUB168(auVar96 * auVar218,8) + (ulong)CARRY8(uVar267,uVar268 * local_190);
    bVar247 = uVar260 < uVar267;
    if (uVar255 != uVar263) {
      bVar247 = uVar255 < uVar263;
    }
    uVar267 = uVar260 + uStack_188 * uVar259;
    uVar263 = uVar255 + SUB168(auVar95 * auVar217,8) + (ulong)CARRY8(uVar260,uStack_188 * uVar259);
    auVar97._8_8_ = 0;
    auVar97._0_8_ = local_180;
    auVar219._8_8_ = 0;
    auVar219._0_8_ = uVar254;
    bVar248 = uVar267 < uVar260;
    if (uVar263 != uVar255) {
      bVar248 = uVar263 < uVar255;
    }
    local_a0 = uVar267 + local_180 * uVar254;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = uVar253;
    auVar220._8_8_ = 0;
    auVar220._0_8_ = local_190;
    uVar260 = uVar263 + SUB168(auVar97 * auVar219,8) + (ulong)CARRY8(uVar267,local_180 * uVar254);
    bVar249 = local_a0 < uVar267;
    if (uVar260 != uVar263) {
      bVar249 = uVar260 < uVar263;
    }
    uVar255 = uVar260 + uVar253 * local_190;
    uVar267 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar263 = uVar267 + SUB168(auVar98 * auVar220,8) + (ulong)CARRY8(uVar260,uVar253 * local_190);
    local_b0 = uVar254 * local_190;
    auVar99._8_8_ = 0;
    auVar99._0_8_ = uVar268;
    auVar221._8_8_ = 0;
    auVar221._0_8_ = uStack_188;
    bVar247 = uVar255 < uVar260;
    if (uVar263 != uVar267) {
      bVar247 = uVar263 < uVar267;
    }
    uVar260 = uVar255 + uVar268 * uStack_188;
    uVar267 = uVar263 + SUB168(auVar99 * auVar221,8) + (ulong)CARRY8(uVar255,uVar268 * uStack_188);
    auVar100._8_8_ = 0;
    auVar100._0_8_ = local_180;
    auVar222._8_8_ = 0;
    auVar222._0_8_ = uVar259;
    bVar248 = uVar260 < uVar255;
    if (uVar267 != uVar263) {
      bVar248 = uVar267 < uVar263;
    }
    uVar255 = uVar260 + local_180 * uVar259;
    uVar263 = uVar267 + SUB168(auVar100 * auVar222,8) + (ulong)CARRY8(uVar260,local_180 * uVar259);
    auVar101._8_8_ = 0;
    auVar101._0_8_ = uStack_178;
    auVar223._8_8_ = 0;
    auVar223._0_8_ = uVar254;
    bVar249 = uVar255 < uVar260;
    if (uVar263 != uVar267) {
      bVar249 = uVar263 < uVar267;
    }
    uStack_98 = uVar255 + uStack_178 * uVar254;
    uVar260 = uVar263 + SUB168(auVar101 * auVar223,8) + (ulong)CARRY8(uVar255,uStack_178 * uVar254);
    auVar102._8_8_ = 0;
    auVar102._0_8_ = uVar253;
    auVar224._8_8_ = 0;
    auVar224._0_8_ = uStack_188;
    bVar250 = uStack_98 < uVar255;
    if (uVar260 != uVar263) {
      bVar250 = uVar260 < uVar263;
    }
    uVar254 = uVar260 + uVar253 * uStack_188;
    uVar255 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
    uVar267 = uVar255 + SUB168(auVar102 * auVar224,8) + (ulong)CARRY8(uVar260,uVar253 * uStack_188);
    auVar103._8_8_ = 0;
    auVar103._0_8_ = local_180;
    auVar225._8_8_ = 0;
    auVar225._0_8_ = uVar268;
    bVar247 = uVar254 < uVar260;
    if (uVar267 != uVar255) {
      bVar247 = uVar267 < uVar255;
    }
    uVar260 = uVar254 + local_180 * uVar268;
    uVar255 = uVar267 + SUB168(auVar103 * auVar225,8) + (ulong)CARRY8(uVar254,local_180 * uVar268);
    auVar104._8_8_ = 0;
    auVar104._0_8_ = uStack_178;
    auVar226._8_8_ = 0;
    auVar226._0_8_ = uVar259;
    bVar248 = uVar260 < uVar254;
    if (uVar255 != uVar267) {
      bVar248 = uVar255 < uVar267;
    }
    local_90 = uVar260 + uStack_178 * uVar259;
    uVar254 = uVar255 + SUB168(auVar104 * auVar226,8) + (ulong)CARRY8(uVar260,uStack_178 * uVar259);
    bVar249 = local_90 < uVar260;
    if (uVar254 != uVar255) {
      bVar249 = uVar254 < uVar255;
    }
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar253;
    auVar227._8_8_ = 0;
    auVar227._0_8_ = local_180;
    uVar260 = uVar254 + uVar253 * local_180;
    uVar259 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
    uVar255 = uVar259 + SUB168(auVar105 * auVar227,8) + (ulong)CARRY8(uVar254,uVar253 * local_180);
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uStack_178;
    auVar228._8_8_ = 0;
    auVar228._0_8_ = uVar268;
    bVar247 = uVar260 < uVar254;
    if (uVar255 != uVar259) {
      bVar247 = uVar255 < uVar259;
    }
    uStack_88 = uVar260 + uStack_178 * uVar268;
    uVar254 = uVar255 + SUB168(auVar106 * auVar228,8) + (ulong)CARRY8(uVar260,uStack_178 * uVar268);
    bVar248 = uStack_88 < uVar260;
    if (uVar254 != uVar255) {
      bVar248 = uVar254 < uVar255;
    }
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uStack_178;
    auVar229._8_8_ = 0;
    auVar229._0_8_ = uVar253;
    local_80 = uVar254 + uStack_178 * uVar253;
    lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar107 * auVar229,8) +
                (ulong)CARRY8(uVar254,uStack_178 * uVar253);
    vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_190,&local_b0);
    if (1 < local_190) {
      uStack_188 = uStack_188 + 1;
    }
    bVar247 = 1 < local_190;
    if (uStack_188 != 0) {
      bVar247 = 0xffffffff00000000 < uStack_188;
    }
    uVar254 = (ulong)bVar247;
    uStack_188 = -uStack_188 - 0x100000000;
    uVar260 = uVar254 + local_180;
    if (uVar260 != 0) {
      uVar254 = 0;
    }
    uVar259 = ~uVar260;
    uVar268 = uVar254 + uStack_178;
    uStack_178 = 0xffffffff - uVar268;
    if (uVar268 != 0) {
      uVar254 = (ulong)(uVar268 >> 0x20 != 0);
    }
    local_180 = uVar259;
    uVar255 = 1 - local_190;
    if (uVar254 != 0) {
      uVar255 = 2 - local_190;
      uVar254 = 0xffffffff00000000;
      if (uVar255 < 1 - local_190) {
        uVar254 = 0xffffffff00000001;
      }
      bVar247 = CARRY8(uStack_188,uVar254);
      uStack_188 = uStack_188 + uVar254;
      local_180 = (bVar247 - uVar260) - 2;
      uVar260 = (ulong)bVar247;
      if (local_180 != uVar259) {
        uVar260 = (ulong)(local_180 < uVar259);
      }
      uStack_178 = (uVar260 - uVar268) + 0x1fffffffe;
    }
    bVar247 = uVar261 < 6;
    uVar261 = uVar261 + 1;
    iVar258 = (int)(char)iVar258 << 1;
    local_150 = local_f0;
    uStack_148 = uStack_e8;
    local_140 = local_e0;
    uStack_138 = uStack_d8;
    uVar254 = local_f0;
    uVar260 = uStack_d8;
    uVar268 = uStack_e8;
    uVar259 = uStack_168;
    uVar253 = uStack_158;
    uVar267 = local_170;
    uVar263 = local_160;
    uVar272 = local_e0;
  } while (bVar247);
  local_190 = uVar255;
  mod_sqrt_secp224r1_rs(&local_1b0,&local_110,&local_130,&local_150,&local_170,&local_190);
  uVar261 = 1;
  do {
    local_150 = local_1b0;
    uStack_148 = uStack_1a8;
    local_140 = local_1a0;
    uStack_138 = uStack_198;
    local_170 = local_110;
    uStack_168 = uStack_108;
    local_160 = local_100;
    uStack_158 = uStack_f8;
    local_180 = local_120;
    uStack_178 = uStack_118;
    local_190 = local_130;
    uStack_188 = uStack_128;
    mod_sqrt_secp224r1_rs(&local_1b0,&local_110,&local_130,&local_150,&local_170,&local_190);
    if (((uStack_1a8 == 0 && local_1b0 == 0) && local_1a0 == 0) && uStack_198 == 0) break;
    bVar247 = uVar261 < 0x5f;
    uVar261 = uVar261 + 1;
  } while (bVar247);
  uECC_vli_modInv(&local_130,&local_170,&DAT_00100c88,4);
  auVar108._8_8_ = 0;
  auVar108._0_8_ = local_130;
  auVar230._8_8_ = 0;
  auVar230._0_8_ = local_150;
  uVar254 = SUB168(auVar108 * auVar230,8);
  auVar109._8_8_ = 0;
  auVar109._0_8_ = uStack_128;
  auVar231._8_8_ = 0;
  auVar231._0_8_ = local_150;
  uVar260 = uStack_128 * local_150 + uVar254;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = uStack_148;
  auVar232._8_8_ = 0;
  auVar232._0_8_ = local_130;
  uVar254 = SUB168(auVar109 * auVar231,8) + (ulong)CARRY8(uStack_128 * local_150,uVar254);
  uStack_a8 = uVar260 + uStack_148 * local_130;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = uStack_148;
  auVar233._8_8_ = 0;
  auVar233._0_8_ = uStack_128;
  uVar268 = uVar254 + SUB168(auVar110 * auVar232,8) + (ulong)CARRY8(uVar260,uStack_148 * local_130);
  auVar112._8_8_ = 0;
  auVar112._0_8_ = local_120;
  auVar234._8_8_ = 0;
  auVar234._0_8_ = local_150;
  bVar247 = uStack_a8 < uVar260;
  if (uVar268 != uVar254) {
    bVar247 = uVar268 < uVar254;
  }
  uVar259 = (ulong)bVar247;
  uVar260 = uVar268 + local_120 * local_150;
  uVar254 = uVar259 + SUB168(auVar112 * auVar234,8) + (ulong)CARRY8(uVar268,local_120 * local_150);
  bVar247 = uVar260 < uVar268;
  if (uVar254 != uVar259) {
    bVar247 = uVar254 < uVar259;
  }
  uVar268 = uVar260 + uStack_148 * uStack_128;
  uVar259 = uVar254 + SUB168(auVar111 * auVar233,8) + (ulong)CARRY8(uVar260,uStack_148 * uStack_128)
  ;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = local_140;
  auVar235._8_8_ = 0;
  auVar235._0_8_ = local_130;
  bVar248 = uVar268 < uVar260;
  if (uVar259 != uVar254) {
    bVar248 = uVar259 < uVar254;
  }
  local_a0 = uVar268 + local_140 * local_130;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = uStack_118;
  auVar236._8_8_ = 0;
  auVar236._0_8_ = local_150;
  uVar260 = uVar259 + SUB168(auVar113 * auVar235,8) + (ulong)CARRY8(uVar268,local_140 * local_130);
  bVar249 = local_a0 < uVar268;
  if (uVar260 != uVar259) {
    bVar249 = uVar260 < uVar259;
  }
  uVar254 = uVar260 + uStack_118 * local_150;
  uVar268 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
  uVar259 = uVar268 + SUB168(auVar114 * auVar236,8) + (ulong)CARRY8(uVar260,uStack_118 * local_150);
  local_b0 = local_130 * local_150;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = local_120;
  auVar237._8_8_ = 0;
  auVar237._0_8_ = uStack_148;
  bVar247 = uVar254 < uVar260;
  if (uVar259 != uVar268) {
    bVar247 = uVar259 < uVar268;
  }
  uVar260 = uVar254 + local_120 * uStack_148;
  uVar268 = uVar259 + SUB168(auVar115 * auVar237,8) + (ulong)CARRY8(uVar254,local_120 * uStack_148);
  auVar116._8_8_ = 0;
  auVar116._0_8_ = local_140;
  auVar238._8_8_ = 0;
  auVar238._0_8_ = uStack_128;
  bVar248 = uVar260 < uVar254;
  if (uVar268 != uVar259) {
    bVar248 = uVar268 < uVar259;
  }
  uVar254 = uVar260 + local_140 * uStack_128;
  uVar259 = uVar268 + SUB168(auVar116 * auVar238,8) + (ulong)CARRY8(uVar260,local_140 * uStack_128);
  auVar117._8_8_ = 0;
  auVar117._0_8_ = uStack_138;
  auVar239._8_8_ = 0;
  auVar239._0_8_ = local_130;
  bVar249 = uVar254 < uVar260;
  if (uVar259 != uVar268) {
    bVar249 = uVar259 < uVar268;
  }
  uStack_98 = uVar254 + uStack_138 * local_130;
  uVar260 = uVar259 + SUB168(auVar117 * auVar239,8) + (ulong)CARRY8(uVar254,uStack_138 * local_130);
  auVar118._8_8_ = 0;
  auVar118._0_8_ = uStack_118;
  auVar240._8_8_ = 0;
  auVar240._0_8_ = uStack_148;
  bVar250 = uStack_98 < uVar254;
  if (uVar260 != uVar259) {
    bVar250 = uVar260 < uVar259;
  }
  uVar254 = uVar260 + uStack_118 * uStack_148;
  uVar268 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249 + (ulong)bVar250;
  uVar259 = uVar268 + SUB168(auVar118 * auVar240,8) + (ulong)CARRY8(uVar260,uStack_118 * uStack_148)
  ;
  auVar119._8_8_ = 0;
  auVar119._0_8_ = local_140;
  auVar241._8_8_ = 0;
  auVar241._0_8_ = local_120;
  bVar247 = uVar254 < uVar260;
  if (uVar259 != uVar268) {
    bVar247 = uVar259 < uVar268;
  }
  uVar260 = uVar254 + local_140 * local_120;
  uVar268 = uVar259 + SUB168(auVar119 * auVar241,8) + (ulong)CARRY8(uVar254,local_140 * local_120);
  auVar120._8_8_ = 0;
  auVar120._0_8_ = uStack_138;
  auVar242._8_8_ = 0;
  auVar242._0_8_ = uStack_128;
  bVar248 = uVar260 < uVar254;
  if (uVar268 != uVar259) {
    bVar248 = uVar268 < uVar259;
  }
  local_90 = uVar260 + uStack_138 * uStack_128;
  uVar254 = uVar268 + SUB168(auVar120 * auVar242,8) + (ulong)CARRY8(uVar260,uStack_138 * uStack_128)
  ;
  bVar249 = local_90 < uVar260;
  if (uVar254 != uVar268) {
    bVar249 = uVar254 < uVar268;
  }
  auVar121._8_8_ = 0;
  auVar121._0_8_ = uStack_118;
  auVar243._8_8_ = 0;
  auVar243._0_8_ = local_140;
  uVar260 = uVar254 + uStack_118 * local_140;
  uVar268 = (ulong)bVar248 + (ulong)bVar247 + (ulong)bVar249;
  uVar259 = uVar268 + SUB168(auVar121 * auVar243,8) + (ulong)CARRY8(uVar254,uStack_118 * local_140);
  auVar122._8_8_ = 0;
  auVar122._0_8_ = uStack_138;
  auVar244._8_8_ = 0;
  auVar244._0_8_ = local_120;
  bVar247 = uVar260 < uVar254;
  if (uVar259 != uVar268) {
    bVar247 = uVar259 < uVar268;
  }
  uStack_88 = uVar260 + uStack_138 * local_120;
  uVar254 = uVar259 + SUB168(auVar122 * auVar244,8) + (ulong)CARRY8(uVar260,uStack_138 * local_120);
  bVar248 = uStack_88 < uVar260;
  if (uVar254 != uVar259) {
    bVar248 = uVar254 < uVar259;
  }
  auVar123._8_8_ = 0;
  auVar123._0_8_ = uStack_138;
  auVar245._8_8_ = 0;
  auVar245._0_8_ = uStack_118;
  local_80 = uVar254 + uStack_138 * uStack_118;
  lStack_78 = (ulong)bVar248 + (ulong)bVar247 + SUB168(auVar123 * auVar245,8) +
              (ulong)CARRY8(uVar254,uStack_138 * uStack_118);
  vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(param_1,&local_b0);
  lVar265 = sp_el0;
  if (*(long *)(lVar265 + 0x5e0) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- vli_mmod_fast_secp224r1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010d23c ---- */

void vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar13 = *param_2;
  *param_1 = uVar13;
  uVar8 = param_2[1];
  param_1[1] = uVar8;
  uVar10 = param_2[2];
  param_1[2] = uVar10;
  uVar4 = param_2[3];
  param_1[3] = (ulong)(uint)uVar4;
  uVar15 = (ulong)*(uint *)((long)param_2 + 0x1c) << 0x20;
  uVar1 = uVar15 + uVar8;
  uVar15 = (ulong)(*(uint *)((long)param_2 + 0x1c) != 0 && CARRY8(uVar15,uVar8));
  uVar11 = param_2[5];
  uVar8 = param_2[4] + uVar10 + uVar15;
  *param_1 = uVar13;
  param_1[1] = uVar1;
  if (uVar8 != uVar10) {
    uVar15 = (ulong)(uVar8 < uVar10);
  }
  uVar15 = (ulong)(uint)uVar11 + (ulong)(uint)uVar4 + uVar15;
  param_1[2] = uVar8;
  param_1[3] = uVar15;
  uVar11 = (ulong)*(uint *)((long)param_2 + 0x2c) << 0x20;
  uVar4 = uVar11 + uVar1;
  uVar11 = (ulong)(*(uint *)((long)param_2 + 0x2c) != 0 && CARRY8(uVar11,uVar1));
  uVar1 = param_2[6] + uVar8 + uVar11;
  if (uVar1 != uVar8) {
    uVar11 = (ulong)(uVar1 < uVar8);
  }
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  uVar11 = uVar11 + uVar15;
  param_1[3] = uVar11;
  uVar16 = param_2[3] >> 0x20 | param_2[4] << 0x20;
  uVar2 = param_2[6];
  uVar15 = uVar13 - uVar16;
  uVar10 = (ulong)(uVar16 != 0 && uVar13 < uVar16);
  uVar8 = (param_2[4] >> 0x20 | param_2[5] << 0x20) + uVar10;
  uVar9 = uVar4 - uVar8;
  if (uVar8 != 0) {
    uVar10 = (ulong)(uVar4 < uVar8);
  }
  uVar8 = uVar10 + (param_2[5] >> 0x20 | uVar2 << 0x20);
  *param_1 = uVar15;
  param_1[1] = uVar9;
  uVar4 = uVar1 - uVar8;
  if (uVar8 != 0) {
    uVar10 = (ulong)(uVar1 < uVar8);
  }
  uVar1 = uVar10 + (uVar2 >> 0x20);
  uVar2 = uVar11 - uVar1;
  param_1[2] = uVar4;
  param_1[3] = uVar2;
  uVar18 = param_2[5] >> 0x20 | param_2[6] << 0x20;
  uVar7 = (uint)(uVar18 != 0 && uVar15 < uVar18);
  uVar8 = (ulong)uVar7 + (param_2[6] >> 0x20);
  uVar12 = uVar9 - uVar8;
  uVar3 = (ulong)uVar7;
  if (uVar8 != 0) {
    uVar7 = (uint)(uVar9 < uVar8);
    uVar3 = (ulong)(uVar9 < uVar8);
  }
  uVar9 = uVar4 - uVar3;
  *param_1 = uVar15 - uVar18;
  param_1[1] = uVar12;
  uVar6 = (ulong)(uVar7 & uVar4 < uVar3);
  uVar8 = uVar2 - uVar6;
  uVar2 = (ulong)(uVar2 < uVar6);
  if ((uVar7 & uVar4 < uVar3) == 0) {
    uVar2 = uVar6;
  }
  if (uVar1 != 0) {
    uVar10 = (ulong)(uVar11 < uVar1);
  }
  param_1[2] = uVar9;
  param_1[3] = uVar8;
  lVar17 = (-(uVar10 << 0x20) >> 0x20) - uVar2;
  if ((int)lVar17 < 0) {
    lVar14 = (uVar16 + uVar18) - uVar13;
    do {
      lVar14 = lVar14 + -1;
      uVar1 = uVar12;
      if (lVar14 == 0) {
        uVar1 = uVar12 + 1;
      }
      uVar1 = uVar1 - 0x100000000;
      lVar17 = (long)(int)lVar17;
      uVar15 = uVar9;
      if (uVar1 < uVar12) {
        uVar15 = uVar9 + 1;
      }
      uVar15 = uVar15 - 1;
      bVar5 = uVar1 < uVar12;
      if (uVar15 != uVar9) {
        bVar5 = uVar15 < uVar9;
      }
      uVar4 = uVar8 + bVar5 + 0xffffffff;
      if (uVar4 < uVar8) {
        lVar17 = lVar17 + 1;
      }
      uVar9 = uVar15;
      uVar8 = uVar4;
      uVar12 = uVar1;
    } while ((int)lVar17 < 0);
    param_1[2] = uVar15;
    param_1[3] = uVar4;
    *param_1 = -lVar14;
    param_1[1] = uVar1;
    return;
  }
  if (0xfffffffe < uVar8) {
    uVar15 = ~uVar18 + uVar15;
    do {
      if (uVar8 == 0xffffffff) {
        if (uVar9 != 0xffffffffffffffff) {
          return;
        }
        if (uVar12 < 0xffffffff00000000) {
          return;
        }
        if ((uVar12 == 0xffffffff00000000) && (uVar15 == 0xffffffffffffffff)) {
          return;
        }
      }
      uVar1 = 0xffffffff00000000;
      if (uVar15 == 0xffffffffffffffff) {
        uVar1 = 0xffffffff00000001;
      }
      bVar5 = -(ulong)(uVar1 <= uVar12) <= uVar9;
      uVar9 = uVar9 + (uVar1 <= uVar12);
      *param_1 = uVar15;
      param_1[1] = uVar12 - uVar1;
      uVar15 = uVar15 - 1;
      lVar17 = -0x100000000;
      if (bVar5 && uVar1 <= uVar12) {
        lVar17 = -0xffffffff;
      }
      uVar8 = lVar17 + uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar8;
      uVar12 = uVar12 - uVar1;
    } while (0xfffffffe < uVar8);
  }
  return;
}



/* ---- mod_sqrt_secp224r1_rs @ 0010d4b4 ---- */

void mod_sqrt_secp224r1_rs
               (long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
               ulong *param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  bool bVar86;
  bool bVar87;
  bool bVar88;
  bool bVar89;
  ulong uVar90;
  ulong uVar91;
  ulong uVar92;
  ulong uVar93;
  ulong uVar94;
  ulong uVar95;
  ulong uVar96;
  ulong uVar97;
  long lVar98;
  long lVar99;
  ulong uVar100;
  ulong uVar101;
  ulong uVar102;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  long local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  *in_x18 = unaff_x30;
  lVar98 = sp_el0;
  local_48 = *(long *)(lVar98 + 0x5e0);
  uVar101 = *param_4;
  uVar94 = param_4[1];
  local_98 = 0;
  uStack_90 = 0;
  uVar92 = param_4[2];
  uVar93 = param_4[3];
  local_a8 = 0;
  uStack_a0 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar101;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar101;
  uVar91 = SUB168(auVar2 * auVar44,8);
  uVar95 = uVar94 * uVar101;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar94;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar101;
  uVar97 = SUB168(auVar3 * auVar45,8);
  uVar100 = uVar92 * uVar101;
  uStack_80 = uVar91 + uVar95 * 2;
  uVar91 = (uVar95 >> 0x3f | uVar97 << 1) + (ulong)CARRY8(uVar91,uVar95 * 2);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar92;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar101;
  lVar98 = SUB168(auVar4 * auVar46,8);
  bVar89 = uStack_80 < uVar95;
  if (uVar91 != uVar97) {
    bVar89 = uVar91 < uVar97;
  }
  uVar96 = (ulong)bVar89;
  uVar95 = uVar91 + uVar100;
  uVar97 = uVar96 + lVar98 + (ulong)CARRY8(uVar91,uVar100);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar94;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar94;
  bVar89 = uVar95 < uVar91;
  if (uVar97 != uVar96) {
    bVar89 = uVar97 < uVar96;
  }
  uVar91 = uVar95 + uVar94 * uVar94;
  uVar96 = uVar97 + SUB168(auVar5 * auVar47,8) + (ulong)CARRY8(uVar95,uVar94 * uVar94);
  bVar86 = uVar91 < uVar95;
  if (uVar96 != uVar97) {
    bVar86 = uVar96 < uVar97;
  }
  local_78 = uVar91 + uVar100;
  uVar97 = uVar96 + lVar98 + (ulong)CARRY8(uVar91,uVar100);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar93;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar101;
  lVar98 = SUB168(auVar6 * auVar48,8);
  uVar95 = uVar93 * uVar101;
  bVar87 = local_78 < uVar91;
  if (uVar97 != uVar96) {
    bVar87 = uVar97 < uVar96;
  }
  uVar91 = uVar97 + uVar95;
  uVar100 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87;
  uVar96 = uVar92 * uVar94;
  uVar102 = uVar100 + lVar98 + (ulong)CARRY8(uVar97,uVar95);
  local_88 = uVar101 * uVar101;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar92;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar94;
  lVar99 = SUB168(auVar7 * auVar49,8);
  bVar89 = uVar91 < uVar97;
  if (uVar102 != uVar100) {
    bVar89 = uVar102 < uVar100;
  }
  uVar101 = uVar91 + uVar96;
  uVar97 = uVar102 + lVar99 + (ulong)CARRY8(uVar91,uVar96);
  bVar86 = uVar101 < uVar91;
  if (uVar97 != uVar102) {
    bVar86 = uVar97 < uVar102;
  }
  uVar91 = uVar101 + uVar96;
  uVar100 = uVar97 + lVar99 + (ulong)CARRY8(uVar101,uVar96);
  bVar87 = uVar91 < uVar101;
  if (uVar100 != uVar97) {
    bVar87 = uVar100 < uVar97;
  }
  uStack_70 = uVar91 + uVar95;
  uVar101 = uVar100 + lVar98 + (ulong)CARRY8(uVar91,uVar95);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar93;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar94;
  lVar98 = SUB168(auVar8 * auVar50,8);
  uVar94 = uVar93 * uVar94;
  bVar88 = uStack_70 < uVar91;
  if (uVar101 != uVar100) {
    bVar88 = uVar101 < uVar100;
  }
  uVar91 = uVar101 + uVar94;
  uVar95 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87 + (ulong)bVar88;
  uVar97 = uVar95 + lVar98 + (ulong)CARRY8(uVar101,uVar94);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar92;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar92;
  bVar89 = uVar91 < uVar101;
  if (uVar97 != uVar95) {
    bVar89 = uVar97 < uVar95;
  }
  uVar101 = uVar91 + uVar92 * uVar92;
  uVar95 = uVar97 + SUB168(auVar9 * auVar51,8) + (ulong)CARRY8(uVar91,uVar92 * uVar92);
  bVar86 = uVar101 < uVar91;
  if (uVar95 != uVar97) {
    bVar86 = uVar95 < uVar97;
  }
  local_68 = uVar101 + uVar94;
  uVar94 = uVar95 + lVar98 + (ulong)CARRY8(uVar101,uVar94);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar93;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar92;
  lVar98 = SUB168(auVar10 * auVar52,8);
  uVar92 = uVar93 * uVar92;
  bVar87 = local_68 < uVar101;
  if (uVar94 != uVar95) {
    bVar87 = uVar94 < uVar95;
  }
  uVar101 = uVar94 + uVar92;
  uVar91 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87;
  uVar95 = uVar91 + lVar98 + (ulong)CARRY8(uVar94,uVar92);
  bVar89 = uVar101 < uVar94;
  if (uVar95 != uVar91) {
    bVar89 = uVar95 < uVar91;
  }
  uStack_60 = uVar101 + uVar92;
  uVar92 = uVar95 + lVar98 + (ulong)CARRY8(uVar101,uVar92);
  bVar86 = uStack_60 < uVar101;
  if (uVar92 != uVar95) {
    bVar86 = uVar92 < uVar95;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar93;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar93;
  local_58 = uVar92 + uVar93 * uVar93;
  lStack_50 = (ulong)bVar86 + (ulong)bVar89 + SUB168(auVar11 * auVar53,8) +
              (ulong)CARRY8(uVar92,uVar93 * uVar93);
  vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(&local_a8,&local_88);
  uVar92 = *param_5;
  uVar91 = param_5[1];
  uVar94 = *param_4;
  uVar95 = param_4[1];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar92;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar94;
  uVar93 = SUB168(auVar12 * auVar54,8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar91;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar94;
  uVar101 = uVar91 * uVar94 + uVar93;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar95;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar92;
  uVar100 = SUB168(auVar13 * auVar55,8) + (ulong)CARRY8(uVar91 * uVar94,uVar93);
  uVar93 = param_5[2];
  uVar97 = param_5[3];
  uStack_80 = uVar101 + uVar95 * uVar92;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar95;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar91;
  uVar96 = uVar100 + SUB168(auVar14 * auVar56,8) + (ulong)CARRY8(uVar101,uVar95 * uVar92);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar93;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar94;
  bVar89 = uStack_80 < uVar101;
  if (uVar96 != uVar100) {
    bVar89 = uVar96 < uVar100;
  }
  uVar102 = (ulong)bVar89;
  uVar101 = uVar96 + uVar93 * uVar94;
  uVar100 = uVar102 + SUB168(auVar16 * auVar58,8) + (ulong)CARRY8(uVar96,uVar93 * uVar94);
  bVar89 = uVar101 < uVar96;
  if (uVar100 != uVar102) {
    bVar89 = uVar100 < uVar102;
  }
  uVar96 = uVar101 + uVar95 * uVar91;
  uVar102 = param_4[2];
  uVar1 = param_4[3];
  uVar90 = uVar100 + SUB168(auVar15 * auVar57,8) + (ulong)CARRY8(uVar101,uVar95 * uVar91);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar102;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar92;
  bVar86 = uVar96 < uVar101;
  if (uVar90 != uVar100) {
    bVar86 = uVar90 < uVar100;
  }
  local_78 = uVar96 + uVar102 * uVar92;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar97;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar94;
  uVar101 = uVar90 + SUB168(auVar17 * auVar59,8) + (ulong)CARRY8(uVar96,uVar102 * uVar92);
  bVar87 = local_78 < uVar96;
  if (uVar101 != uVar90) {
    bVar87 = uVar101 < uVar90;
  }
  uVar100 = uVar101 + uVar97 * uVar94;
  uVar96 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87;
  uVar90 = uVar96 + SUB168(auVar18 * auVar60,8) + (ulong)CARRY8(uVar101,uVar97 * uVar94);
  local_88 = uVar92 * uVar94;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar93;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = uVar95;
  bVar89 = uVar100 < uVar101;
  if (uVar90 != uVar96) {
    bVar89 = uVar90 < uVar96;
  }
  uVar101 = uVar100 + uVar93 * uVar95;
  uVar94 = uVar90 + SUB168(auVar19 * auVar61,8) + (ulong)CARRY8(uVar100,uVar93 * uVar95);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar102;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar91;
  bVar86 = uVar101 < uVar100;
  if (uVar94 != uVar90) {
    bVar86 = uVar94 < uVar90;
  }
  uVar100 = uVar101 + uVar102 * uVar91;
  uVar96 = uVar94 + SUB168(auVar20 * auVar62,8) + (ulong)CARRY8(uVar101,uVar102 * uVar91);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = uVar92;
  bVar87 = uVar100 < uVar101;
  if (uVar96 != uVar94) {
    bVar87 = uVar96 < uVar94;
  }
  uStack_70 = uVar100 + uVar1 * uVar92;
  uVar101 = uVar96 + SUB168(auVar21 * auVar63,8) + (ulong)CARRY8(uVar100,uVar1 * uVar92);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar97;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = uVar95;
  bVar88 = uStack_70 < uVar100;
  if (uVar101 != uVar96) {
    bVar88 = uVar101 < uVar96;
  }
  uVar92 = uVar101 + uVar97 * uVar95;
  uVar94 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87 + (ulong)bVar88;
  uVar95 = uVar94 + SUB168(auVar22 * auVar64,8) + (ulong)CARRY8(uVar101,uVar97 * uVar95);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar102;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = uVar93;
  bVar89 = uVar92 < uVar101;
  if (uVar95 != uVar94) {
    bVar89 = uVar95 < uVar94;
  }
  uVar101 = uVar92 + uVar102 * uVar93;
  uVar94 = uVar95 + SUB168(auVar23 * auVar65,8) + (ulong)CARRY8(uVar92,uVar102 * uVar93);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = uVar91;
  bVar86 = uVar101 < uVar92;
  if (uVar94 != uVar95) {
    bVar86 = uVar94 < uVar95;
  }
  local_68 = uVar101 + uVar1 * uVar91;
  uVar92 = uVar94 + SUB168(auVar24 * auVar66,8) + (ulong)CARRY8(uVar101,uVar1 * uVar91);
  bVar87 = local_68 < uVar101;
  if (uVar92 != uVar94) {
    bVar87 = uVar92 < uVar94;
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar97;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = uVar102;
  uVar101 = uVar92 + uVar97 * uVar102;
  uVar94 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87;
  uVar91 = uVar94 + SUB168(auVar25 * auVar67,8) + (ulong)CARRY8(uVar92,uVar97 * uVar102);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar1;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = uVar93;
  bVar89 = uVar101 < uVar92;
  if (uVar91 != uVar94) {
    bVar89 = uVar91 < uVar94;
  }
  uStack_60 = uVar101 + uVar1 * uVar93;
  uVar92 = uVar91 + SUB168(auVar26 * auVar68,8) + (ulong)CARRY8(uVar101,uVar1 * uVar93);
  bVar86 = uStack_60 < uVar101;
  if (uVar92 != uVar91) {
    bVar86 = uVar92 < uVar91;
  }
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar1;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = uVar97;
  local_58 = uVar92 + uVar1 * uVar97;
  lStack_50 = (ulong)bVar86 + (ulong)bVar89 + SUB168(auVar27 * auVar69,8) +
              (ulong)CARRY8(uVar92,uVar1 * uVar97);
  vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(param_2,&local_88);
  uVar101 = *param_6;
  lVar98 = uVar101 + local_a8;
  *param_1 = lVar98;
  uVar92 = (ulong)(uVar101 != 0 && CARRY8(uVar101,local_a8));
  uVar101 = param_6[1] + uStack_a0 + uVar92;
  param_1[1] = uVar101;
  if (uVar101 != uStack_a0) {
    uVar92 = (ulong)(uVar101 < uStack_a0);
  }
  uVar94 = param_6[2] + local_98 + uVar92;
  param_1[2] = uVar94;
  if (uVar94 != local_98) {
    uVar92 = (ulong)(uVar94 < local_98);
  }
  uVar93 = param_6[3] + uStack_90 + uVar92;
  if (uVar93 != uStack_90) {
    uVar92 = (ulong)(uVar93 < uStack_90);
  }
  param_1[3] = uVar93;
  if ((uVar92 != 0) ||
     ((0xfffffffe < uVar93 &&
      ((uVar93 != 0xffffffff ||
       (((uVar94 == 0xffffffffffffffff && (0xfffffffeffffffff < uVar101)) &&
        ((uVar101 != 0xffffffff00000000 || (lVar98 != 0)))))))))) {
    uVar92 = 0xffffffff00000000;
    if (lVar98 == 0) {
      uVar92 = 0xffffffff00000001;
    }
    *param_1 = lVar98 + -1;
    param_1[1] = uVar101 - uVar92;
    lVar98 = -0x100000000;
    if (-(ulong)(uVar92 <= uVar101) <= uVar94 && uVar92 <= uVar101) {
      lVar98 = -0xffffffff;
    }
    param_1[2] = uVar94 + (uVar92 <= uVar101);
    param_1[3] = uVar93 + lVar98;
  }
  uVar93 = param_2[1];
  uVar94 = param_2[2];
  uVar91 = param_2[3];
  uVar95 = *param_2 * 2;
  uVar92 = (ulong)(uVar95 < *param_2);
  uVar101 = uVar92 | uVar93 << 1;
  if (uVar101 != uVar93) {
    uVar92 = (ulong)(uVar101 < uVar93);
  }
  *param_2 = uVar95;
  param_2[1] = uVar101;
  uVar93 = uVar92 | uVar94 << 1;
  if (uVar93 != uVar94) {
    uVar92 = (ulong)(uVar93 < uVar94);
  }
  uVar94 = uVar92 | uVar91 << 1;
  if (uVar94 != uVar91) {
    uVar92 = (ulong)(uVar94 < uVar91);
  }
  param_2[2] = uVar93;
  param_2[3] = uVar94;
  if ((uVar92 != 0) ||
     ((0xfffffffe < uVar94 &&
      ((uVar94 != 0xffffffff ||
       (((uVar93 == 0xffffffffffffffff && (0xfffffffeffffffff < uVar101)) &&
        ((uVar101 != 0xffffffff00000000 || (uVar95 != 0)))))))))) {
    uVar92 = 0xffffffff00000000;
    if (uVar95 == 0) {
      uVar92 = 0xffffffff00000001;
    }
    *param_2 = uVar95 - 1;
    param_2[1] = uVar101 - uVar92;
    lVar98 = -0x100000000;
    if (-(ulong)(uVar92 <= uVar101) <= uVar93 && uVar92 <= uVar101) {
      lVar98 = -0xffffffff;
    }
    param_2[2] = uVar93 + (uVar92 <= uVar101);
    param_2[3] = uVar94 + lVar98;
  }
  uVar92 = *param_6;
  uVar93 = param_6[1];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar92;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = local_a8;
  uVar100 = SUB168(auVar28 * auVar70,8);
  uVar95 = uVar92 * uStack_a0;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar92;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = uStack_a0;
  uVar97 = SUB168(auVar29 * auVar71,8);
  uVar101 = uVar100 + uVar95;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar93;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = local_a8;
  uStack_80 = uVar101 + uVar93 * local_a8;
  uVar94 = param_6[2];
  uVar91 = param_6[3];
  uVar101 = uVar97 + CARRY8(uVar100,uVar95) + SUB168(auVar30 * auVar72,8) +
            (ulong)CARRY8(uVar101,uVar93 * local_a8);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar94;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = local_a8;
  bVar89 = uStack_80 < uVar95;
  if (uVar101 != uVar97) {
    bVar89 = uVar101 < uVar97;
  }
  uVar97 = (ulong)bVar89;
  uVar95 = uVar101 + uVar94 * local_a8;
  uVar100 = uVar97 + SUB168(auVar31 * auVar73,8) + (ulong)CARRY8(uVar101,uVar94 * local_a8);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar93;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = uStack_a0;
  bVar89 = uVar95 < uVar101;
  if (uVar100 != uVar97) {
    bVar89 = uVar100 < uVar97;
  }
  uVar101 = uVar95 + uVar93 * uStack_a0;
  uVar97 = uVar100 + SUB168(auVar32 * auVar74,8) + (ulong)CARRY8(uVar95,uVar93 * uStack_a0);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar92;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = local_98;
  bVar86 = uVar101 < uVar95;
  if (uVar97 != uVar100) {
    bVar86 = uVar97 < uVar100;
  }
  local_78 = uVar101 + uVar92 * local_98;
  uVar95 = uVar97 + SUB168(auVar33 * auVar75,8) + (ulong)CARRY8(uVar101,uVar92 * local_98);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar91;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = local_a8;
  bVar87 = local_78 < uVar101;
  if (uVar95 != uVar97) {
    bVar87 = uVar95 < uVar97;
  }
  uVar101 = uVar95 + uVar91 * local_a8;
  uVar97 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87;
  uVar100 = uVar97 + SUB168(auVar34 * auVar76,8) + (ulong)CARRY8(uVar95,uVar91 * local_a8);
  local_88 = uVar92 * local_a8;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar94;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = uStack_a0;
  bVar89 = uVar101 < uVar95;
  if (uVar100 != uVar97) {
    bVar89 = uVar100 < uVar97;
  }
  uVar95 = uVar101 + uVar94 * uStack_a0;
  uVar97 = uVar100 + SUB168(auVar35 * auVar77,8) + (ulong)CARRY8(uVar101,uVar94 * uStack_a0);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar93;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = local_98;
  bVar86 = uVar95 < uVar101;
  if (uVar97 != uVar100) {
    bVar86 = uVar97 < uVar100;
  }
  uVar101 = uVar95 + uVar93 * local_98;
  uVar100 = uVar97 + SUB168(auVar36 * auVar78,8) + (ulong)CARRY8(uVar95,uVar93 * local_98);
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar92;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = uStack_90;
  bVar87 = uVar101 < uVar95;
  if (uVar100 != uVar97) {
    bVar87 = uVar100 < uVar97;
  }
  uStack_70 = uVar101 + uVar92 * uStack_90;
  uVar92 = uVar100 + SUB168(auVar37 * auVar79,8) + (ulong)CARRY8(uVar101,uVar92 * uStack_90);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar91;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = uStack_a0;
  bVar88 = uStack_70 < uVar101;
  if (uVar92 != uVar100) {
    bVar88 = uVar92 < uVar100;
  }
  uVar101 = uVar92 + uVar91 * uStack_a0;
  uVar95 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87 + (ulong)bVar88;
  uVar97 = uVar95 + SUB168(auVar38 * auVar80,8) + (ulong)CARRY8(uVar92,uVar91 * uStack_a0);
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar94;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = local_98;
  bVar89 = uVar101 < uVar92;
  if (uVar97 != uVar95) {
    bVar89 = uVar97 < uVar95;
  }
  uVar92 = uVar101 + uVar94 * local_98;
  uVar95 = uVar97 + SUB168(auVar39 * auVar81,8) + (ulong)CARRY8(uVar101,uVar94 * local_98);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar93;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = uStack_90;
  bVar86 = uVar92 < uVar101;
  if (uVar95 != uVar97) {
    bVar86 = uVar95 < uVar97;
  }
  local_68 = uVar92 + uVar93 * uStack_90;
  uVar101 = uVar95 + SUB168(auVar40 * auVar82,8) + (ulong)CARRY8(uVar92,uVar93 * uStack_90);
  bVar87 = local_68 < uVar92;
  if (uVar101 != uVar95) {
    bVar87 = uVar101 < uVar95;
  }
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar91;
  auVar83._8_8_ = 0;
  auVar83._0_8_ = local_98;
  uVar92 = uVar101 + uVar91 * local_98;
  uVar93 = (ulong)bVar86 + (ulong)bVar89 + (ulong)bVar87;
  uVar95 = uVar93 + SUB168(auVar41 * auVar83,8) + (ulong)CARRY8(uVar101,uVar91 * local_98);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar94;
  auVar84._8_8_ = 0;
  auVar84._0_8_ = uStack_90;
  bVar89 = uVar92 < uVar101;
  if (uVar95 != uVar93) {
    bVar89 = uVar95 < uVar93;
  }
  uStack_60 = uVar92 + uVar94 * uStack_90;
  uVar101 = uVar95 + SUB168(auVar42 * auVar84,8) + (ulong)CARRY8(uVar92,uVar94 * uStack_90);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar91;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = uStack_90;
  bVar86 = uStack_60 < uVar92;
  if (uVar101 != uVar95) {
    bVar86 = uVar101 < uVar95;
  }
  local_58 = uVar101 + uVar91 * uStack_90;
  lStack_50 = (ulong)bVar86 + (ulong)bVar89 + SUB168(auVar43 * auVar85,8) +
              (ulong)CARRY8(uVar101,uVar91 * uStack_90);
  vli_mmod_fast_secp224r1_1af211300d3f8d16da1ad8e243f7d3fd(param_3,&local_88);
  uVar93 = param_3[1];
  uVar94 = param_3[2];
  uVar91 = param_3[3];
  uVar95 = *param_3 * 2;
  uVar92 = (ulong)(uVar95 < *param_3);
  uVar101 = uVar92 | uVar93 << 1;
  if (uVar101 != uVar93) {
    uVar92 = (ulong)(uVar101 < uVar93);
  }
  uVar93 = uVar92 | uVar94 << 1;
  if (uVar93 != uVar94) {
    uVar92 = (ulong)(uVar93 < uVar94);
  }
  uVar94 = uVar92 | uVar91 << 1;
  if (uVar94 != uVar91) {
    uVar92 = (ulong)(uVar94 < uVar91);
  }
  if (uVar92 == 0) {
    if (uVar94 < 0xffffffff) goto LAB_0010de20;
    if (uVar94 == 0xffffffff) {
      if (uVar93 != 0xffffffffffffffff) {
        uVar94 = 0xffffffff;
        goto LAB_0010de20;
      }
      if (uVar101 < 0xffffffff00000000) {
        uVar93 = 0xffffffffffffffff;
        uVar94 = 0xffffffff;
        goto LAB_0010de20;
      }
      if ((uVar101 == 0xffffffff00000000) && (uVar95 == 0)) {
        uVar93 = 0xffffffffffffffff;
        uVar94 = 0xffffffff;
        uVar101 = 0xffffffff00000000;
        goto LAB_0010de20;
      }
    }
  }
  uVar92 = 0xffffffff00000000;
  if (uVar95 == 0) {
    uVar92 = 0xffffffff00000001;
  }
  uVar95 = uVar95 - 1;
  bVar89 = -(ulong)(uVar92 <= uVar101) <= uVar93;
  uVar93 = uVar93 + (uVar92 <= uVar101);
  lVar98 = -0x100000000;
  if (bVar89 && uVar92 <= uVar101) {
    lVar98 = -0xffffffff;
  }
  uVar94 = uVar94 + lVar98;
  uVar101 = uVar101 - uVar92;
LAB_0010de20:
  uVar97 = uVar95 * 2;
  uVar92 = (ulong)(uVar97 < uVar95) | uVar101 << 1;
  uVar91 = (ulong)(uVar97 < uVar95);
  if (uVar92 != uVar101) {
    uVar91 = (ulong)(uVar92 < uVar101);
  }
  *param_3 = uVar97;
  param_3[1] = uVar92;
  uVar101 = uVar91 | uVar93 << 1;
  if (uVar101 != uVar93) {
    uVar91 = (ulong)(uVar101 < uVar93);
  }
  uVar93 = uVar91 | uVar94 << 1;
  if (uVar93 != uVar94) {
    uVar91 = (ulong)(uVar93 < uVar94);
  }
  param_3[2] = uVar101;
  param_3[3] = uVar93;
  if ((uVar91 != 0) ||
     ((0xfffffffe < uVar93 &&
      ((uVar93 != 0xffffffff ||
       (((uVar101 == 0xffffffffffffffff && (0xfffffffeffffffff < uVar92)) &&
        ((uVar92 != 0xffffffff00000000 || (uVar97 != 0)))))))))) {
    uVar94 = 0xffffffff00000000;
    if (uVar97 == 0) {
      uVar94 = 0xffffffff00000001;
    }
    lVar98 = -0x100000000;
    if (-(ulong)(uVar94 <= uVar92) <= uVar101 && uVar94 <= uVar92) {
      lVar98 = -0xffffffff;
    }
    *param_3 = uVar97 - 1;
    param_3[1] = uVar92 - uVar94;
    param_3[2] = uVar101 + (uVar94 <= uVar92);
    param_3[3] = uVar93 + lVar98;
  }
  lVar98 = sp_el0;
  if (*(long *)(lVar98 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- vli_mmod_fast_secp256r1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010df18 ---- */

void vli_mmod_fast_secp256r1_1af211300d3f8d16da1ad8e243f7d3fd(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *in_x18;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  uVar18 = *param_2;
  *param_1 = uVar18;
  uVar22 = param_2[1];
  param_1[1] = uVar22;
  uVar23 = param_2[2];
  param_1[2] = uVar23;
  uVar24 = param_2[3];
  param_1[3] = uVar24;
  uVar26 = param_2[6];
  uVar3 = param_2[7];
  uVar27 = (ulong)*(uint *)((long)param_2 + 0x2c) << 0x21;
  uVar20 = (ulong)(uVar27 < (ulong)*(uint *)((long)param_2 + 0x2c) << 0x20);
  uVar21 = uVar20 | uVar26 << 1;
  if (uVar21 != uVar26) {
    uVar20 = (ulong)(uVar21 < uVar26);
  }
  uVar26 = uVar27 + uVar22;
  uVar27 = (ulong)(uVar27 != 0 && CARRY8(uVar27,uVar22));
  uVar21 = uVar21 + uVar23 + uVar27;
  uVar22 = uVar20 | uVar3 << 1;
  *param_1 = uVar18;
  param_1[1] = uVar26;
  if (uVar21 != uVar23) {
    uVar27 = (ulong)(uVar21 < uVar23);
  }
  uVar23 = uVar22 + uVar24 + uVar27;
  param_1[2] = uVar21;
  param_1[3] = uVar23;
  uVar25 = param_2[6];
  uVar14 = uVar25 << 0x21;
  uVar1 = param_2[7] << 0x20;
  uVar28 = uVar25 >> 0x20 | uVar1;
  uVar16 = (ulong)(uVar14 < uVar25 << 0x20);
  uVar12 = param_2[7] >> 0x20;
  uVar1 = uVar16 | (uVar25 >> 0x20 | uVar1 & 0x7fffffffffffffff) << 1;
  if (uVar1 != uVar28) {
    uVar16 = (ulong)(uVar1 < uVar28);
  }
  if (uVar23 != uVar24) {
    uVar27 = (ulong)(uVar23 < uVar24);
  }
  uVar24 = uVar14 + uVar26;
  uVar25 = (ulong)(uVar14 != 0 && CARRY8(uVar14,uVar26));
  uVar26 = uVar1 + uVar21 + uVar25;
  uVar1 = uVar16 | uVar12 << 1;
  if (uVar26 != uVar21) {
    uVar25 = (ulong)(uVar26 < uVar21);
  }
  uVar21 = uVar1 + uVar23 + uVar25;
  param_1[1] = uVar24;
  param_1[2] = uVar26;
  param_1[3] = uVar21;
  if (uVar1 != uVar12) {
    uVar16 = (ulong)(uVar1 < uVar12);
  }
  uVar28 = param_2[4];
  uVar31 = param_2[7];
  uVar1 = uVar28 + uVar18;
  uVar11 = (uint)(uVar28 != 0 && CARRY8(uVar28,uVar18));
  uVar12 = (uint)param_2[5] + uVar24 + (ulong)uVar11;
  uVar14 = (ulong)uVar11;
  if (uVar12 != uVar24) {
    uVar11 = (uint)(uVar12 < uVar24);
    uVar14 = (ulong)(uVar12 < uVar24);
  }
  uVar24 = uVar14 + uVar26;
  *param_1 = uVar1;
  param_1[1] = uVar12;
  uVar14 = (ulong)(uVar11 & CARRY8(uVar14,uVar26));
  uVar26 = uVar21 + uVar31 + uVar14;
  if (uVar21 != uVar23) {
    uVar25 = (ulong)(uVar21 < uVar23);
  }
  param_1[2] = uVar24;
  param_1[3] = uVar26;
  uVar2 = param_2[4];
  uVar10 = param_2[6];
  uVar29 = uVar2 >> 0x20 | param_2[5] << 0x20;
  uVar23 = uVar29 + uVar1;
  uVar31 = (ulong)(uVar29 != 0 && CARRY8(uVar29,uVar1));
  uVar1 = (uVar10 & 0xffffffff00000000 | param_2[5] >> 0x20) + uVar12 + uVar31;
  if (uVar1 != uVar12) {
    uVar31 = (ulong)(uVar1 < uVar12);
  }
  uVar12 = param_2[7] + uVar24 + uVar31;
  *param_1 = uVar23;
  param_1[1] = uVar1;
  if (uVar12 != uVar24) {
    uVar31 = (ulong)(uVar12 < uVar24);
  }
  uVar24 = uVar26 + (uVar10 >> 0x20 | uVar2 << 0x20) + uVar31;
  if (uVar26 != uVar21) {
    uVar14 = (ulong)(uVar26 < uVar21);
  }
  param_1[2] = uVar12;
  param_1[3] = uVar24;
  uVar2 = param_2[5];
  uVar15 = uVar2 >> 0x20 | param_2[6] << 0x20;
  uVar10 = uVar23 - uVar15;
  uVar11 = (uint)(uVar15 != 0 && uVar23 < uVar15);
  uVar21 = (ulong)uVar11 + (param_2[6] >> 0x20);
  uVar23 = uVar1 - uVar21;
  uVar13 = param_2[4];
  uVar30 = (ulong)uVar11;
  if (uVar21 != 0) {
    uVar11 = (uint)(uVar1 < uVar21);
    uVar30 = (ulong)(uVar1 < uVar21);
  }
  uVar1 = uVar12 - uVar30;
  *param_1 = uVar10;
  param_1[1] = uVar23;
  uVar11 = uVar11 & uVar12 < uVar30;
  uVar21 = ((ulong)(uint)uVar13 | uVar2 << 0x20) + (ulong)uVar11;
  uVar12 = uVar24 - uVar21;
  param_1[2] = uVar1;
  param_1[3] = uVar12;
  if (uVar24 != uVar26) {
    uVar31 = (ulong)(uVar24 < uVar26);
  }
  uVar2 = param_2[6];
  uVar30 = uVar10 - uVar2;
  uVar33 = (uint)(uVar2 != 0 && uVar10 < uVar2);
  uVar4 = *(undefined4 *)((long)param_2 + 0x24);
  uVar26 = param_2[7] + (ulong)uVar33;
  uVar10 = uVar23 - uVar26;
  uVar5 = *(undefined4 *)((long)param_2 + 0x2c);
  uVar13 = (ulong)uVar33;
  if (uVar26 != 0) {
    uVar33 = (uint)(uVar23 < uVar26);
    uVar13 = (ulong)(uVar23 < uVar26);
  }
  uVar23 = uVar1 - uVar13;
  *param_1 = uVar30;
  param_1[1] = uVar10;
  uVar33 = uVar33 & uVar1 < uVar13;
  uVar26 = CONCAT44(uVar5,uVar4) + (ulong)uVar33;
  uVar1 = uVar12 - uVar26;
  if (uVar21 != 0) {
    uVar11 = (uint)(uVar24 < uVar21);
  }
  param_1[2] = uVar23;
  param_1[3] = uVar1;
  uVar13 = param_2[6];
  uVar17 = uVar13 >> 0x20 | param_2[7] << 0x20;
  uVar7 = uVar30 - uVar17;
  uVar24 = (ulong)(uVar17 != 0 && uVar30 < uVar17);
  uVar21 = (param_2[7] >> 0x20 | param_2[4] << 0x20) + uVar24;
  uVar30 = uVar10 - uVar21;
  if (uVar21 != 0) {
    uVar24 = (ulong)(uVar10 < uVar21);
  }
  uVar21 = uVar24 + (param_2[4] >> 0x20 | param_2[5] << 0x20);
  *param_1 = uVar7;
  param_1[1] = uVar30;
  uVar10 = uVar23 - uVar21;
  if (uVar21 != 0) {
    uVar24 = (ulong)(uVar23 < uVar21);
  }
  uVar21 = uVar24 | uVar13 << 0x20;
  uVar23 = uVar1 - uVar21;
  if (uVar26 != 0) {
    uVar33 = (uint)(uVar12 < uVar26);
  }
  param_1[2] = uVar10;
  param_1[3] = uVar23;
  uVar32 = param_2[7];
  uVar12 = (ulong)(uVar32 != 0 && uVar7 < uVar32);
  uVar6 = *(uint *)((long)param_2 + 0x34);
  uVar26 = uVar12 | (ulong)*(uint *)((long)param_2 + 0x24) << 0x20;
  uVar13 = uVar30 - uVar26;
  if (uVar26 != 0) {
    uVar12 = (ulong)(uVar30 < uVar26);
  }
  uVar26 = uVar12 + param_2[5];
  *param_1 = uVar7 - uVar32;
  param_1[1] = uVar13;
  uVar30 = uVar10 - uVar26;
  if (uVar26 != 0) {
    uVar12 = (ulong)(uVar10 < uVar26);
  }
  uVar26 = uVar12 | (ulong)uVar6 << 0x20;
  uVar10 = uVar23 - uVar26;
  if (uVar26 != 0) {
    uVar12 = (ulong)(uVar23 < uVar26);
  }
  if (uVar21 != 0) {
    uVar24 = (ulong)(uVar1 < uVar21);
  }
  param_1[2] = uVar30;
  param_1[3] = uVar10;
  if (uVar22 != uVar3) {
    uVar20 = (ulong)(uVar22 < uVar3);
  }
  uVar21 = (((uVar27 + uVar20 + uVar16 + uVar25 + uVar14 + uVar31) - (ulong)uVar11) - (ulong)uVar33)
           - (uVar24 + uVar12);
  if ((int)uVar21 < 0) {
    lVar19 = (((uVar15 + uVar17 + uVar2 + uVar32) - uVar29) - uVar28) - uVar18;
    do {
      uVar20 = uVar13;
      if (lVar19 != 0) {
        uVar20 = uVar13 + 1;
      }
      uVar20 = uVar20 + 0xffffffff;
      uVar21 = (ulong)(int)uVar21;
      lVar19 = lVar19 + 1;
      uVar26 = (ulong)(uVar20 < uVar13);
      bVar8 = CARRY8(uVar30,uVar26);
      uVar30 = uVar30 + uVar26;
      uVar26 = (uVar10 + (uVar20 < uVar13 && bVar8)) - 0xffffffff;
      if (uVar26 < uVar10) {
        uVar21 = uVar21 + 1;
      }
      uVar10 = uVar26;
      uVar13 = uVar20;
    } while ((int)uVar21 < 0);
    param_1[2] = uVar30;
    param_1[3] = uVar26;
    *param_1 = -lVar19;
    param_1[1] = uVar20;
  }
  else {
    uVar32 = ((((uVar29 + uVar28 + uVar18) - uVar15) - uVar17) - uVar2) - uVar32;
    while( true ) {
      uVar32 = uVar32 + 1;
      if (((int)uVar21 == 0) &&
         ((uVar10 < 0xffffffff00000001 ||
          (((uVar10 == 0xffffffff00000001 && (uVar30 == 0)) &&
           ((uVar13 < 0xffffffff || ((uVar13 == 0xffffffff && (uVar32 != 0)))))))))) break;
      uVar20 = 0xffffffff;
      if (uVar32 != 0) {
        uVar20 = 0x100000000;
      }
      uVar26 = (ulong)(uVar13 < uVar20);
      bVar8 = uVar30 < uVar26;
      uVar30 = uVar30 - uVar26;
      bVar9 = uVar20 <= uVar13;
      uVar13 = uVar13 - uVar20;
      uVar20 = (ulong)bVar8;
      if (bVar9) {
        uVar20 = uVar26;
      }
      bVar8 = uVar10 < uVar20 - 0xffffffff;
      uVar10 = uVar10 - (uVar20 - 0xffffffff);
      *param_1 = uVar32;
      param_1[1] = uVar13;
      uVar21 = (ulong)((int)uVar21 - (uint)bVar8);
      param_1[2] = uVar30;
      param_1[3] = uVar10;
    }
  }
  return;
}



/* ---- double_jacobian_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010e420 ---- */

void double_jacobian_secp256k1_1af211300d3f8d16da1ad8e243f7d3fd
               (ulong *param_1,ulong *param_2,long *param_3,undefined1 *param_4)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *in_x18;
  undefined8 unaff_x30;
  ulong local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
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
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x5e0);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uECC_vli_mult(&local_88,param_2,param_2,*param_4);
    pcVar3 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar3 + -0x102250) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar3,&DAT_00100350);
    }
    (*pcVar3)(&local_c8,&local_88);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uECC_vli_mult(&local_88,param_1,&local_c8,*param_4);
    pcVar3 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar3 + -0x102250) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar3,&DAT_00100350);
    }
    (*pcVar3)(&local_a8,&local_88);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uECC_vli_mult(&local_88,param_1,param_1,*param_4);
    pcVar3 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar3 + -0x102250) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar3,&DAT_00100350);
    }
    (*pcVar3)(param_1,&local_88);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uECC_vli_mult(&local_88,&local_c8,&local_c8,*param_4);
    pcVar3 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar3 + -0x102250) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar3,&DAT_00100350);
    }
    (*pcVar3)(&local_c8,&local_88);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uECC_vli_mult(&local_88,param_2,param_3,*param_4);
    pcVar3 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar3 + -0x102250) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar3,&DAT_00100350);
    }
    (*pcVar3)(param_3,&local_88);
    uVar4 = *param_1 * 2;
    uVar7 = (ulong)(uVar4 < *param_1);
    *param_2 = uVar4;
    uVar8 = param_1[1];
    uVar6 = uVar7 | uVar8 << 1;
    param_2[1] = uVar6;
    if (uVar6 != uVar8) {
      uVar7 = (ulong)(uVar6 < uVar8);
    }
    uVar9 = param_1[2];
    uVar8 = uVar7 | uVar9 << 1;
    param_2[2] = uVar8;
    if (uVar8 != uVar9) {
      uVar7 = (ulong)(uVar8 < uVar9);
    }
    uVar10 = param_1[3];
    uVar9 = uVar7 | uVar10 << 1;
    if (uVar9 != uVar10) {
      uVar7 = (ulong)(uVar9 < uVar10);
    }
    param_2[3] = uVar9;
    if ((uVar7 != 0) ||
       ((*(ulong *)(param_4 + 0x20) <= uVar9 &&
        ((*(ulong *)(param_4 + 0x20) < uVar9 ||
         ((*(ulong *)(param_4 + 0x18) <= uVar8 &&
          ((*(ulong *)(param_4 + 0x18) < uVar8 ||
           ((*(ulong *)(param_4 + 0x10) <= uVar6 &&
            ((*(ulong *)(param_4 + 0x10) < uVar6 || (*(ulong *)(param_4 + 8) <= uVar4))))))))))))))
    {
      uVar7 = *(ulong *)(param_4 + 8);
      bVar2 = uVar4 < uVar7;
      uVar4 = uVar4 - uVar7;
      uVar10 = (ulong)(uVar7 != 0 && bVar2);
      *param_2 = uVar4;
      uVar7 = *(long *)(param_4 + 0x10) + uVar10;
      bVar2 = uVar6 < uVar7;
      uVar6 = uVar6 - uVar7;
      if (uVar7 != 0) {
        uVar10 = (ulong)bVar2;
      }
      param_2[1] = uVar6;
      uVar7 = uVar10 + *(long *)(param_4 + 0x18);
      bVar2 = uVar8 < uVar7;
      uVar8 = uVar8 - uVar7;
      if (uVar7 != 0) {
        uVar10 = (ulong)bVar2;
      }
      param_2[2] = uVar8;
      uVar9 = uVar9 - (*(long *)(param_4 + 0x20) + uVar10);
      param_2[3] = uVar9;
    }
    uVar10 = *param_1;
    uVar7 = uVar10 + uVar4;
    *param_2 = uVar7;
    uVar10 = (ulong)(uVar10 != 0 && CARRY8(uVar10,uVar4));
    uVar4 = param_1[1] + uVar6 + uVar10;
    param_2[1] = uVar4;
    if (uVar4 != uVar6) {
      uVar10 = (ulong)(uVar4 < uVar6);
    }
    uVar6 = param_1[2] + uVar8 + uVar10;
    param_2[2] = uVar6;
    if (uVar6 != uVar8) {
      uVar10 = (ulong)(uVar6 < uVar8);
    }
    uVar8 = param_1[3] + uVar9 + uVar10;
    if (uVar8 != uVar9) {
      uVar10 = (ulong)(uVar8 < uVar9);
    }
    param_2[3] = uVar8;
    if ((uVar10 != 0) ||
       ((*(ulong *)(param_4 + 0x20) <= uVar8 &&
        ((*(ulong *)(param_4 + 0x20) < uVar8 ||
         ((*(ulong *)(param_4 + 0x18) <= uVar6 &&
          ((*(ulong *)(param_4 + 0x18) < uVar6 ||
           ((*(ulong *)(param_4 + 0x10) <= uVar4 &&
            ((*(ulong *)(param_4 + 0x10) < uVar4 || (*(ulong *)(param_4 + 8) <= uVar7))))))))))))))
    {
      uVar9 = *(ulong *)(param_4 + 8);
      bVar2 = uVar7 < uVar9;
      uVar7 = uVar7 - uVar9;
      uVar10 = (ulong)(uVar9 != 0 && bVar2);
      *param_2 = uVar7;
      uVar9 = *(long *)(param_4 + 0x10) + uVar10;
      bVar2 = uVar4 < uVar9;
      uVar4 = uVar4 - uVar9;
      if (uVar9 != 0) {
        uVar10 = (ulong)bVar2;
      }
      param_2[1] = uVar4;
      uVar9 = uVar10 + *(long *)(param_4 + 0x18);
      bVar2 = uVar6 < uVar9;
      uVar6 = uVar6 - uVar9;
      if (uVar9 != 0) {
        uVar10 = (ulong)bVar2;
      }
      param_2[2] = uVar6;
      uVar8 = uVar8 - (*(long *)(param_4 + 0x20) + uVar10);
      param_2[3] = uVar8;
    }
    if ((uVar7 & 1) == 0) {
      puVar5 = param_2 + 4;
      if (param_2 < puVar5) {
        uVar6 = 0;
        do {
          puVar5 = puVar5 + -1;
          uVar7 = uVar6 | *puVar5 >> 1;
          uVar6 = *puVar5 << 0x3f;
          *puVar5 = uVar7;
        } while (param_2 < puVar5);
      }
    }
    else {
      uVar9 = *(ulong *)(param_4 + 8);
      *param_2 = uVar9 + uVar7;
      uVar9 = (ulong)(uVar9 != 0 && CARRY8(uVar9,uVar7));
      uVar7 = *(long *)(param_4 + 0x10) + uVar4 + uVar9;
      param_2[1] = uVar7;
      if (uVar7 != uVar4) {
        uVar9 = (ulong)(uVar7 < uVar4);
      }
      uVar7 = *(long *)(param_4 + 0x18) + uVar6 + uVar9;
      param_2[2] = uVar7;
      if (uVar7 != uVar6) {
        uVar9 = (ulong)(uVar7 < uVar6);
      }
      uVar6 = *(long *)(param_4 + 0x20) + uVar8 + uVar9;
      if (uVar6 != uVar8) {
        uVar9 = (ulong)(uVar6 < uVar8);
      }
      puVar5 = param_2 + 4;
      param_2[3] = uVar6;
      if (param_2 < puVar5) {
        uVar6 = 0;
        do {
          puVar5 = puVar5 + -1;
          uVar7 = uVar6 | *puVar5 >> 1;
          uVar6 = *puVar5 << 0x3f;
          *puVar5 = uVar7;
        } while (param_2 < puVar5);
        uVar6 = param_2[3];
      }
      param_2[3] = uVar6 | uVar9 << 0x3f;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uECC_vli_mult(&local_88,param_2,param_2,*param_4);
    pcVar3 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar3 + -0x102250) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar3,&DAT_00100350);
    }
    (*pcVar3)(param_1,&local_88);
    uVar7 = *param_1 - local_a8;
    uVar4 = (ulong)(local_a8 != 0 && *param_1 < local_a8);
    uVar6 = uStack_a0 + uVar4;
    uVar8 = param_1[1] - uVar6;
    if (uVar6 != 0) {
      uVar4 = (ulong)(param_1[1] < uVar6);
    }
    *param_1 = uVar7;
    param_1[1] = uVar8;
    uVar6 = uVar4 + local_98;
    uVar9 = param_1[2] - uVar6;
    if (uVar6 != 0) {
      uVar4 = (ulong)(param_1[2] < uVar6);
    }
    uVar6 = uVar4 + uStack_90;
    uVar10 = param_1[3] - uVar6;
    if (uVar6 != 0) {
      uVar4 = (ulong)(param_1[3] < uVar6);
    }
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    uVar11 = uVar9;
    uVar6 = uVar8;
    if (uVar4 != 0) {
      uVar6 = *(ulong *)(param_4 + 8);
      bVar2 = CARRY8(uVar6,uVar7);
      uVar7 = uVar6 + uVar7;
      *param_1 = uVar7;
      uVar4 = (ulong)(uVar6 != 0 && bVar2);
      uVar6 = *(long *)(param_4 + 0x10) + uVar8 + uVar4;
      param_1[1] = uVar6;
      if (uVar6 != uVar8) {
        uVar4 = (ulong)(uVar6 < uVar8);
      }
      uVar11 = *(long *)(param_4 + 0x18) + uVar9 + uVar4;
      param_1[2] = uVar11;
      if (uVar11 != uVar9) {
        uVar4 = (ulong)(uVar11 < uVar9);
      }
      uVar10 = *(long *)(param_4 + 0x20) + uVar10 + uVar4;
    }
    uVar4 = uVar7 - local_a8;
    uVar8 = (ulong)(local_a8 != 0 && uVar7 < local_a8);
    uVar7 = uStack_a0 + uVar8;
    uVar9 = uVar6 - uVar7;
    if (uVar7 != 0) {
      uVar8 = (ulong)(uVar6 < uVar7);
    }
    uVar6 = uVar8 + local_98;
    *param_1 = uVar4;
    param_1[1] = uVar9;
    uVar7 = uVar11 - uVar6;
    if (uVar6 != 0) {
      uVar8 = (ulong)(uVar11 < uVar6);
    }
    uVar6 = uVar8 + uStack_90;
    uVar11 = uVar10 - uVar6;
    if (uVar6 != 0) {
      uVar8 = (ulong)(uVar10 < uVar6);
    }
    param_1[2] = uVar7;
    param_1[3] = uVar11;
    uVar10 = uVar7;
    uVar6 = uVar9;
    if (uVar8 != 0) {
      uVar6 = *(ulong *)(param_4 + 8);
      bVar2 = CARRY8(uVar6,uVar4);
      uVar4 = uVar6 + uVar4;
      *param_1 = uVar4;
      uVar8 = (ulong)(uVar6 != 0 && bVar2);
      uVar6 = *(long *)(param_4 + 0x10) + uVar9 + uVar8;
      param_1[1] = uVar6;
      if (uVar6 != uVar9) {
        uVar8 = (ulong)(uVar6 < uVar9);
      }
      uVar10 = *(long *)(param_4 + 0x18) + uVar7 + uVar8;
      param_1[2] = uVar10;
      if (uVar10 != uVar7) {
        uVar8 = (ulong)(uVar10 < uVar7);
      }
      uVar11 = *(long *)(param_4 + 0x20) + uVar11 + uVar8;
      param_1[3] = uVar11;
    }
    bVar2 = local_a8 < uVar4;
    local_a8 = local_a8 - uVar4;
    uVar7 = (ulong)(uVar4 != 0 && bVar2);
    uVar6 = uVar6 + uVar7;
    uVar4 = uStack_a0 - uVar6;
    if (uVar6 != 0) {
      uVar7 = (ulong)(uStack_a0 < uVar6);
    }
    uVar10 = uVar7 + uVar10;
    uVar6 = local_98 - uVar10;
    if (uVar10 != 0) {
      uVar7 = (ulong)(local_98 < uVar10);
    }
    uVar11 = uVar7 + uVar11;
    bVar2 = uStack_90 < uVar11;
    uStack_90 = uStack_90 - uVar11;
    if (uVar11 != 0) {
      uVar7 = (ulong)bVar2;
    }
    uStack_a0 = uVar4;
    local_98 = uVar6;
    if (uVar7 != 0) {
      uVar7 = *(ulong *)(param_4 + 8);
      bVar2 = CARRY8(uVar7,local_a8);
      local_a8 = uVar7 + local_a8;
      uVar7 = (ulong)(uVar7 != 0 && bVar2);
      uStack_a0 = *(long *)(param_4 + 0x10) + uVar4 + uVar7;
      if (uStack_a0 != uVar4) {
        uVar7 = (ulong)(uStack_a0 < uVar4);
      }
      local_98 = *(long *)(param_4 + 0x18) + uVar6 + uVar7;
      if (local_98 != uVar6) {
        uVar7 = (ulong)(local_98 < uVar6);
      }
      uStack_90 = *(long *)(param_4 + 0x20) + uStack_90 + uVar7;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uECC_vli_mult(&local_88,param_2,&local_a8,*param_4);
    pcVar3 = *(code **)(param_4 + 0xc0);
    if (4 < ((ulong)(pcVar3 + -0x102250) >> 3 | (long)pcVar3 << 0x3d)) {
      __cfi_slowpath_diag(0x6dd230d89864710d,pcVar3,&DAT_00100350);
    }
    (*pcVar3)(param_2,&local_88);
    uVar4 = *param_2 - local_c8;
    uVar7 = (ulong)(local_c8 != 0 && *param_2 < local_c8);
    uVar6 = lStack_c0 + uVar7;
    uVar8 = param_2[1] - uVar6;
    if (uVar6 != 0) {
      uVar7 = (ulong)(param_2[1] < uVar6);
    }
    *param_2 = uVar4;
    param_2[1] = uVar8;
    uVar6 = uVar7 + local_b8;
    uVar9 = param_2[2] - uVar6;
    if (uVar6 != 0) {
      uVar7 = (ulong)(param_2[2] < uVar6);
    }
    uVar6 = uVar7 + lStack_b0;
    uVar10 = param_2[3] - uVar6;
    if (uVar6 != 0) {
      uVar7 = (ulong)(param_2[3] < uVar6);
    }
    param_2[2] = uVar9;
    param_2[3] = uVar10;
    if (uVar7 != 0) {
      uVar6 = *(ulong *)(param_4 + 8);
      *param_2 = uVar6 + uVar4;
      uVar7 = (ulong)(uVar6 != 0 && CARRY8(uVar6,uVar4));
      uVar6 = *(long *)(param_4 + 0x10) + uVar8 + uVar7;
      param_2[1] = uVar6;
      if (uVar6 != uVar8) {
        uVar7 = (ulong)(uVar6 < uVar8);
      }
      uVar6 = *(long *)(param_4 + 0x18) + uVar9 + uVar7;
      param_2[2] = uVar6;
      if (uVar6 != uVar9) {
        uVar7 = (ulong)(uVar6 < uVar9);
      }
      param_2[3] = *(long *)(param_4 + 0x20) + uVar10 + uVar7;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x5e0) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- x_side_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010edd8 ---- */

void x_side_secp256k1_1af211300d3f8d16da1ad8e243f7d3fd
               (ulong *param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *in_x18;
  undefined8 unaff_x30;
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
  uECC_vli_mult(&local_78,param_2,param_2,*param_3);
  pcVar6 = *(code **)(param_3 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_1,&local_78);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uECC_vli_mult(&local_78,param_1,param_2,*param_3);
  pcVar6 = *(code **)(param_3 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_1,&local_78);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = *(ulong *)(param_3 + 0x88);
  uVar3 = param_1[2];
  uVar8 = param_1[3];
  uVar1 = uVar7 + uVar2;
  *param_1 = uVar1;
  uVar7 = (ulong)(uVar7 != 0 && CARRY8(uVar7,uVar2));
  uVar2 = *(long *)(param_3 + 0x90) + uVar4 + uVar7;
  param_1[1] = uVar2;
  if (uVar2 != uVar4) {
    uVar7 = (ulong)(uVar2 < uVar4);
  }
  uVar4 = *(long *)(param_3 + 0x98) + uVar3 + uVar7;
  param_1[2] = uVar4;
  if (uVar4 != uVar3) {
    uVar7 = (ulong)(uVar4 < uVar3);
  }
  uVar3 = *(long *)(param_3 + 0xa0) + uVar8 + uVar7;
  if (uVar3 != uVar8) {
    uVar7 = (ulong)(uVar3 < uVar8);
  }
  param_1[3] = uVar3;
  if ((uVar7 != 0) ||
     ((*(ulong *)(param_3 + 0x20) <= uVar3 &&
      ((*(ulong *)(param_3 + 0x20) < uVar3 ||
       ((*(ulong *)(param_3 + 0x18) <= uVar4 &&
        ((*(ulong *)(param_3 + 0x18) < uVar4 ||
         ((*(ulong *)(param_3 + 0x10) <= uVar2 &&
          ((*(ulong *)(param_3 + 0x10) < uVar2 || (*(ulong *)(param_3 + 8) <= uVar1)))))))))))))) {
    uVar8 = *(ulong *)(param_3 + 8);
    uVar7 = (ulong)(uVar8 != 0 && uVar1 < uVar8);
    *param_1 = uVar1 - uVar8;
    uVar1 = *(long *)(param_3 + 0x10) + uVar7;
    if (uVar1 != 0) {
      uVar7 = (ulong)(uVar2 < uVar1);
    }
    param_1[1] = uVar2 - uVar1;
    uVar1 = uVar7 + *(long *)(param_3 + 0x18);
    if (uVar1 != 0) {
      uVar7 = (ulong)(uVar4 < uVar1);
    }
    param_1[2] = uVar4 - uVar1;
    param_1[3] = uVar3 - (*(long *)(param_3 + 0x20) + uVar7);
  }
  lVar5 = sp_el0;
  if (*(long *)(lVar5 + 0x5e0) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- vli_mmod_fast_secp256k1.1af211300d3f8d16da1ad8e243f7d3fd @ 0010f03c ---- */

void vli_mmod_fast_secp256k1_1af211300d3f8d16da1ad8e243f7d3fd(ulong *param_1,ulong *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar19 = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[4];
  uVar12 = SUB168(auVar2 * ZEXT816(0x1000003d1),8);
  uVar15 = param_2[5] * 0x1000003d1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[5];
  uVar17 = param_2[6] * 0x1000003d1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[6];
  uVar11 = SUB168(auVar3 * ZEXT816(0x1000003d1),8) + (ulong)CARRY8(uVar15,uVar12);
  uVar16 = param_2[7] * 0x1000003d1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[7];
  uVar13 = SUB168(auVar4 * ZEXT816(0x1000003d1),8) + (ulong)CARRY8(uVar11,uVar17);
  uVar9 = param_2[4] * 0x1000003d1;
  uVar18 = SUB168(auVar5 * ZEXT816(0x1000003d1),8) + (ulong)CARRY8(uVar13,uVar16);
  *param_1 = uVar19 + uVar9;
  uVar19 = (ulong)(uVar9 != 0 && CARRY8(uVar19,uVar9));
  uVar14 = param_2[1];
  uVar9 = uVar14 + uVar15 + uVar12 + uVar19;
  puVar10 = param_1 + 1;
  *puVar10 = uVar9;
  uVar12 = param_2[2];
  if (uVar9 != uVar14) {
    uVar19 = (ulong)(uVar9 < uVar14);
  }
  uVar14 = uVar18 * 0x1000003d1;
  uVar9 = uVar12 + uVar11 + uVar17 + uVar19;
  param_1[2] = uVar9;
  uVar11 = param_2[3];
  if (uVar9 != uVar12) {
    uVar19 = (ulong)(uVar9 < uVar12);
  }
  uVar9 = uVar11 + uVar13 + uVar16 + uVar19;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar18;
  param_1[3] = uVar9;
  *param_2 = uVar14;
  param_2[1] = SUB168(auVar6 * ZEXT816(0x1000003d1),8);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar17 = *param_1;
  uVar20 = *puVar10;
  uVar15 = param_1[2];
  uVar16 = param_1[3];
  uVar12 = uVar17 + uVar14;
  *param_1 = uVar12;
  uVar14 = (ulong)(uVar14 != 0 && CARRY8(uVar17,uVar14));
  uVar13 = param_2[1] + uVar20 + uVar14;
  *puVar10 = uVar13;
  if (uVar13 != uVar20) {
    uVar14 = (ulong)(uVar13 < uVar20);
  }
  uVar20 = param_2[2] + uVar15 + uVar14;
  param_1[2] = uVar20;
  if (uVar20 != uVar15) {
    uVar14 = (ulong)(uVar20 < uVar15);
  }
  uVar15 = param_2[3] + uVar16 + uVar14;
  if (uVar15 != uVar16) {
    uVar14 = (ulong)(uVar15 < uVar16);
  }
  param_1[3] = uVar15;
  if (uVar9 != uVar11) {
    uVar19 = (ulong)(uVar9 < uVar11);
  }
  lVar1 = uVar14 + uVar19;
  if (lVar1 != 0) {
    bVar7 = -(ulong)(0xfffffffefffffc2e < uVar12) <= uVar13;
    uVar13 = uVar13 + (0xfffffffefffffc2e < uVar12);
    bVar7 = 0xfffffffefffffc2e < uVar12 && bVar7;
    uVar9 = (ulong)bVar7;
    bVar8 = -uVar9 <= uVar20;
    uVar20 = uVar20 + uVar9;
    uVar15 = uVar15 + (bVar7 && bVar8);
    if (lVar1 != 1) {
      bVar7 = uVar12 + 0x2000007a2 < 0x1000003d1;
      uVar9 = (ulong)bVar7;
      bVar8 = -uVar9 <= uVar13;
      uVar13 = uVar13 + uVar9;
      bVar7 = bVar7 && bVar8;
      uVar9 = (ulong)bVar7;
      bVar8 = -uVar9 <= uVar20;
      uVar20 = uVar20 + uVar9;
      uVar15 = uVar15 + (bVar7 && bVar8);
    }
    uVar12 = uVar17 + (lVar1 + uVar18) * 0x1000003d1;
    param_1[2] = uVar20;
    param_1[3] = uVar15;
    *param_1 = uVar12;
    param_1[1] = uVar13;
  }
  if ((((uVar15 == 0xffffffffffffffff) && (uVar20 == 0xffffffffffffffff)) &&
      (uVar13 == 0xffffffffffffffff)) && (0xfffffffefffffc2f < uVar12)) {
    *puVar10 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = uVar12 + 0x1000003d1;
  }
  return;
}



/* ---- XYcZ_addC @ 0010f25c ---- */

void XYcZ_addC(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,byte *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *in_x18;
  uint uVar15;
  uint uVar14;
  undefined8 unaff_x30;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8 [17];
  
  *in_x18 = unaff_x30;
  lVar13 = sp_el0;
  local_d8[0x10] = *(long *)(lVar13 + 0x5e0);
  bVar1 = *param_5;
  local_d8[6] = 0;
  local_d8[7] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uVar14 = (uint)(char)bVar1;
  uVar15 = (uint)(char)bVar1;
  uVar4 = local_d8[6];
  if ('\0' < (char)bVar1) {
    uVar4 = *param_1;
    local_d8[4] = *param_3 - uVar4;
    uVar11 = (ulong)(uVar4 != 0 && *param_3 < uVar4);
    if (uVar15 != 1) {
      uVar4 = param_1[1] + uVar11;
      local_d8[5] = param_3[1] - uVar4;
      if (uVar4 != 0) {
        uVar11 = (ulong)(param_3[1] < uVar4);
      }
      if (uVar15 != 2) {
        uVar4 = param_1[2] + uVar11;
        local_d8[6] = param_3[2] - uVar4;
        if (uVar4 != 0) {
          uVar11 = (ulong)(param_3[2] < uVar4);
        }
        if (uVar15 != 3) {
          uVar4 = param_1[3] + uVar11;
          local_d8[7] = param_3[3] - uVar4;
          if (uVar4 != 0) {
            uVar11 = (ulong)(param_3[3] < uVar4);
          }
          if (uVar15 != 4) goto LAB_00110140;
        }
      }
    }
    uVar4 = local_d8[6];
    if (uVar11 != 0) {
      uVar11 = *(ulong *)(param_5 + 8);
      bVar2 = CARRY8(local_d8[4],uVar11);
      local_d8[4] = local_d8[4] + uVar11;
      if (bVar1 != 1) {
        uVar5 = (ulong)(uVar11 != 0 && bVar2);
        uVar11 = local_d8[5] + uVar5 + *(long *)(param_5 + 0x10);
        if (uVar11 != local_d8[5]) {
          uVar5 = (ulong)(uVar11 < local_d8[5]);
        }
        local_d8[5] = uVar11;
        if (bVar1 != 2) {
          uVar4 = local_d8[6] + uVar5 + *(long *)(param_5 + 0x18);
          if (uVar14 != 3) {
            if (uVar4 != local_d8[6]) {
              uVar5 = (ulong)(uVar4 < local_d8[6]);
            }
            local_d8[7] = local_d8[7] + uVar5 + *(long *)(param_5 + 0x20);
          }
        }
      }
    }
  }
  local_d8[6] = uVar4;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,local_d8 + 4,local_d8 + 4,uVar14);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(local_d8 + 4,local_d8 + 8);
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,param_1,local_d8 + 4,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_1,local_d8 + 8);
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,param_3,local_d8 + 4,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  uVar4 = (ulong)bVar1;
  (*pcVar6)(param_3,local_d8 + 8);
  if ((char)bVar1 < '\x01') {
LAB_0010f584:
    uVar11 = (ulong)uVar14;
    do {
      uVar14 = (int)uVar11 - 1;
      uVar11 = (ulong)uVar14;
      uVar5 = local_d8[2];
      if ((uVar14 >> 7 & 1) != 0) break;
      if (3 < (uVar14 & 0xff)) goto LAB_00110140;
      if (local_d8[(uVar11 & 0xff) + 4] < *(ulong *)(param_5 + (ulong)(byte)uVar14 * 8 + 8)) {
        uVar11 = local_d8[6];
        if ('\0' < (char)bVar1) goto LAB_0010f668;
        goto LAB_0010f808;
      }
    } while (local_d8[(uVar11 & 0xff) + 4] <= *(ulong *)(param_5 + (ulong)(byte)uVar14 * 8 + 8));
    if ('\0' < (char)bVar1) goto LAB_0010f5c4;
  }
  else {
    uVar5 = *param_2;
    uVar11 = (ulong)(uVar5 != 0 && CARRY8(*param_4,uVar5));
    local_d8[4] = *param_4 + uVar5;
    if (bVar1 != 1) {
      uVar5 = param_4[1];
      local_d8[5] = uVar5 + uVar11 + param_2[1];
      if (local_d8[5] != uVar5) {
        uVar11 = (ulong)(local_d8[5] < uVar5);
      }
      if (bVar1 != 2) {
        uVar5 = param_4[2];
        local_d8[6] = uVar5 + uVar11 + param_2[2];
        if (local_d8[6] != uVar5) {
          uVar11 = (ulong)(local_d8[6] < uVar5);
        }
        if (uVar14 != 3) {
          uVar5 = param_4[3];
          local_d8[7] = uVar5 + uVar11 + param_2[3];
          if (local_d8[7] != uVar5) {
            uVar11 = (ulong)(local_d8[7] < uVar5);
          }
        }
      }
    }
    if (uVar11 == 0) goto LAB_0010f584;
LAB_0010f5c4:
    uVar5 = *(ulong *)(param_5 + 8);
    bVar2 = local_d8[4] < uVar5;
    local_d8[4] = local_d8[4] - uVar5;
    uVar11 = local_d8[6];
    if (bVar1 != 1) {
      uVar7 = (ulong)(uVar5 != 0 && bVar2);
      uVar5 = *(long *)(param_5 + 0x10) + uVar7;
      bVar2 = local_d8[5] < uVar5;
      local_d8[5] = local_d8[5] - uVar5;
      if (uVar5 != 0) {
        uVar7 = (ulong)bVar2;
      }
      if (bVar1 != 2) {
        uVar5 = *(long *)(param_5 + 0x18) + uVar7;
        uVar11 = local_d8[6] - uVar5;
        if (bVar1 != 3) {
          if (uVar5 != 0) {
            uVar7 = (ulong)(local_d8[6] < uVar5);
          }
          local_d8[7] = local_d8[7] - (*(long *)(param_5 + 0x20) + uVar7);
          local_d8[6] = uVar11;
          if (bVar1 != 4) goto LAB_00110140;
        }
      }
    }
LAB_0010f668:
    local_d8[6] = uVar11;
    uVar11 = 0;
    puVar9 = param_4;
    puVar10 = param_2;
    uVar5 = uVar4;
    do {
      uVar7 = *puVar10 + uVar11;
      if (uVar7 != 0) {
        uVar11 = (ulong)(*puVar9 < uVar7);
      }
      uVar5 = uVar5 - 1;
      *puVar9 = *puVar9 - uVar7;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar5 != 0);
    if (uVar11 != 0) {
      uVar11 = 0;
      puVar9 = param_4;
      uVar5 = uVar4;
      pbVar8 = param_5;
      do {
        pbVar8 = pbVar8 + 8;
        uVar12 = *puVar9;
        uVar7 = uVar12 + uVar11 + *(long *)pbVar8;
        if (uVar7 != uVar12) {
          uVar11 = (ulong)(uVar7 < uVar12);
        }
        uVar5 = uVar5 - 1;
        *puVar9 = uVar7;
        puVar9 = puVar9 + 1;
      } while (uVar5 != 0);
    }
    uVar11 = *param_1;
    local_d8[0] = *param_3 - uVar11;
    uVar11 = (ulong)(uVar11 != 0 && *param_3 < uVar11);
    if (bVar1 != 1) {
      uVar5 = param_1[1] + uVar11;
      local_d8[1] = param_3[1] - uVar5;
      if (uVar5 != 0) {
        uVar11 = (ulong)(param_3[1] < uVar5);
      }
      if (bVar1 != 2) {
        uVar5 = param_1[2] + uVar11;
        local_d8[2] = param_3[2] - uVar5;
        if (uVar5 != 0) {
          uVar11 = (ulong)(param_3[2] < uVar5);
        }
        if (uVar15 != 3) {
          uVar5 = param_1[3] + uVar11;
          local_d8[3] = param_3[3] - uVar5;
          if (uVar5 != 0) {
            uVar11 = (ulong)(param_3[3] < uVar5);
          }
          if (uVar15 != 4) goto LAB_00110140;
        }
      }
    }
    uVar5 = local_d8[2];
    if (uVar11 != 0) {
      uVar11 = *(ulong *)(param_5 + 8);
      bVar2 = CARRY8(local_d8[0],uVar11);
      local_d8[0] = local_d8[0] + uVar11;
      if (uVar15 != 1) {
        uVar7 = (ulong)(uVar11 != 0 && bVar2);
        uVar11 = local_d8[1] + uVar7 + *(long *)(param_5 + 0x10);
        if (uVar11 != local_d8[1]) {
          uVar7 = (ulong)(uVar11 < local_d8[1]);
        }
        local_d8[1] = uVar11;
        if (uVar15 != 2) {
          uVar5 = local_d8[2] + uVar7 + *(long *)(param_5 + 0x18);
          if (bVar1 != 3) {
            if (uVar5 != local_d8[2]) {
              uVar7 = (ulong)(uVar5 < local_d8[2]);
            }
            local_d8[3] = local_d8[3] + uVar7 + *(long *)(param_5 + 0x20);
          }
        }
      }
    }
  }
LAB_0010f808:
  local_d8[2] = uVar5;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,param_2,local_d8,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_2,local_d8 + 8);
  if ((char)bVar1 < '\x01') {
LAB_0010f8f0:
    uVar11 = (ulong)uVar15;
    do {
      uVar14 = (int)uVar11 - 1;
      uVar11 = (ulong)uVar14;
      uVar5 = local_d8[2];
      if ((uVar14 >> 7 & 1) != 0) break;
      if (3 < (uVar14 & 0xff)) goto LAB_00110140;
      if (local_d8[uVar11 & 0xff] < *(ulong *)(param_5 + (ulong)(byte)uVar14 * 8 + 8))
      goto LAB_0010f9c8;
    } while (local_d8[uVar11 & 0xff] <= *(ulong *)(param_5 + (ulong)(byte)uVar14 * 8 + 8));
    if (0 < (int)uVar15) goto LAB_0010f930;
  }
  else {
    uVar5 = *param_3;
    uVar11 = (ulong)(uVar5 != 0 && CARRY8(*param_1,uVar5));
    local_d8[0] = *param_1 + uVar5;
    if (uVar15 != 1) {
      uVar5 = param_1[1];
      local_d8[1] = uVar5 + uVar11 + param_3[1];
      if (local_d8[1] != uVar5) {
        uVar11 = (ulong)(local_d8[1] < uVar5);
      }
      if (uVar15 != 2) {
        uVar5 = param_1[2];
        local_d8[2] = uVar5 + uVar11 + param_3[2];
        if (local_d8[2] != uVar5) {
          uVar11 = (ulong)(local_d8[2] < uVar5);
        }
        if (uVar15 != 3) {
          uVar5 = param_1[3];
          local_d8[3] = uVar5 + uVar11 + param_3[3];
          if (local_d8[3] != uVar5) {
            uVar11 = (ulong)(local_d8[3] < uVar5);
          }
        }
      }
    }
    if (uVar11 == 0) goto LAB_0010f8f0;
LAB_0010f930:
    uVar11 = *(ulong *)(param_5 + 8);
    bVar2 = local_d8[0] < uVar11;
    local_d8[0] = local_d8[0] - uVar11;
    uVar5 = local_d8[2];
    if (bVar1 != 1) {
      uVar7 = (ulong)(uVar11 != 0 && bVar2);
      uVar11 = *(long *)(param_5 + 0x10) + uVar7;
      bVar2 = local_d8[1] < uVar11;
      local_d8[1] = local_d8[1] - uVar11;
      if (uVar11 != 0) {
        uVar7 = (ulong)bVar2;
      }
      if (uVar15 != 2) {
        uVar11 = *(long *)(param_5 + 0x18) + uVar7;
        uVar5 = local_d8[2] - uVar11;
        if (uVar15 != 3) {
          if (uVar11 != 0) {
            uVar7 = (ulong)(local_d8[2] < uVar11);
          }
          local_d8[3] = local_d8[3] - (*(long *)(param_5 + 0x20) + uVar7);
          local_d8[2] = uVar5;
          if (bVar1 != 4) goto LAB_00110140;
        }
      }
    }
  }
LAB_0010f9c8:
  local_d8[2] = uVar5;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,param_4,param_4,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_3,local_d8 + 8);
  uVar11 = local_e8;
  if ('\0' < (char)bVar1) {
    uVar5 = *param_3 - local_d8[0];
    uVar11 = (ulong)(local_d8[0] != 0 && *param_3 < local_d8[0]);
    *param_3 = uVar5;
    if (bVar1 != 1) {
      uVar7 = local_d8[1] + uVar11;
      if (uVar7 != 0) {
        uVar11 = (ulong)(param_3[1] < uVar7);
      }
      param_3[1] = param_3[1] - uVar7;
      if (bVar1 != 2) {
        uVar7 = local_d8[2] + uVar11;
        if (uVar7 != 0) {
          uVar11 = (ulong)(param_3[2] < uVar7);
        }
        param_3[2] = param_3[2] - uVar7;
        if (bVar1 != 3) {
          uVar7 = local_d8[3] + uVar11;
          if (uVar7 != 0) {
            uVar11 = (ulong)(param_3[3] < uVar7);
          }
          param_3[3] = param_3[3] - uVar7;
          if (bVar1 != 4) goto LAB_00110140;
        }
      }
    }
    if (uVar11 != 0) {
      uVar11 = uVar5 + *(long *)(param_5 + 8);
      *param_3 = uVar11;
      if (bVar1 != 1) {
        uVar7 = 0;
        lVar13 = uVar4 - 1;
        pbVar8 = param_5 + 0x10;
        puVar9 = param_3;
        do {
          puVar9 = puVar9 + 1;
          bVar2 = uVar11 < uVar5;
          bVar3 = uVar11 != uVar5;
          uVar5 = *puVar9;
          if (bVar3) {
            uVar7 = (ulong)bVar2;
          }
          lVar13 = lVar13 + -1;
          uVar11 = uVar5 + uVar7 + *(long *)pbVar8;
          *puVar9 = uVar11;
          pbVar8 = pbVar8 + 8;
        } while (lVar13 != 0);
      }
      uVar5 = *param_3;
    }
    local_f8 = *param_1 - uVar5;
    uVar5 = (ulong)(uVar5 != 0 && *param_1 < uVar5);
    if (bVar1 != 1) {
      uVar11 = param_3[1] + uVar5;
      local_f0 = param_1[1] - uVar11;
      if (uVar11 != 0) {
        uVar5 = (ulong)(param_1[1] < uVar11);
      }
      if (bVar1 != 2) {
        uVar11 = param_3[2] + uVar5;
        local_e8 = param_1[2] - uVar11;
        if (uVar11 != 0) {
          uVar5 = (ulong)(param_1[2] < uVar11);
        }
        if (bVar1 != 3) {
          uVar11 = param_3[3] + uVar5;
          local_e0 = param_1[3] - uVar11;
          if (uVar11 != 0) {
            uVar5 = (ulong)(param_1[3] < uVar11);
          }
          if (bVar1 != 4) goto LAB_00110140;
        }
      }
    }
    uVar11 = local_e8;
    if (uVar5 != 0) {
      uVar5 = *(ulong *)(param_5 + 8);
      bVar2 = CARRY8(local_f8,uVar5);
      local_f8 = local_f8 + uVar5;
      if (bVar1 != 1) {
        uVar7 = (ulong)(uVar5 != 0 && bVar2);
        uVar5 = local_f0 + uVar7 + *(long *)(param_5 + 0x10);
        if (uVar5 != local_f0) {
          uVar7 = (ulong)(uVar5 < local_f0);
        }
        local_f0 = uVar5;
        if (bVar1 != 2) {
          uVar11 = local_e8 + uVar7 + *(long *)(param_5 + 0x18);
          if (bVar1 != 3) {
            if (uVar11 != local_e8) {
              uVar7 = (ulong)(uVar11 < local_e8);
            }
            local_e0 = local_e0 + uVar7 + *(long *)(param_5 + 0x20);
          }
        }
      }
    }
  }
  local_e8 = uVar11;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,param_4,&local_f8,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(param_4,local_d8 + 8);
  if ('\0' < (char)bVar1) {
    uVar11 = 0;
    puVar9 = param_4;
    puVar10 = param_2;
    uVar5 = uVar4;
    do {
      uVar7 = *puVar10 + uVar11;
      if (uVar7 != 0) {
        uVar11 = (ulong)(*puVar9 < uVar7);
      }
      uVar5 = uVar5 - 1;
      *puVar9 = *puVar9 - uVar7;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar5 != 0);
    if (uVar11 != 0) {
      uVar11 = 0;
      uVar5 = uVar4;
      pbVar8 = param_5;
      do {
        pbVar8 = pbVar8 + 8;
        uVar12 = *param_4;
        uVar7 = uVar12 + uVar11 + *(long *)pbVar8;
        if (uVar7 != uVar12) {
          uVar11 = (ulong)(uVar7 < uVar12);
        }
        uVar5 = uVar5 - 1;
        *param_4 = uVar7;
        param_4 = param_4 + 1;
      } while (uVar5 != 0);
    }
  }
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,local_d8 + 4,local_d8 + 4,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(&local_f8,local_d8 + 8);
  uVar11 = local_d8[2];
  if ((char)bVar1 < '\x01') goto LAB_0010ffc4;
  bVar2 = local_f8 < local_d8[0];
  local_f8 = local_f8 - local_d8[0];
  uVar11 = (ulong)(local_d8[0] != 0 && bVar2);
  if (bVar1 != 1) {
    uVar5 = local_d8[1] + uVar11;
    bVar2 = local_f0 < uVar5;
    local_f0 = local_f0 - uVar5;
    if (uVar5 != 0) {
      uVar11 = (ulong)bVar2;
    }
    if (bVar1 != 2) {
      uVar5 = local_d8[2] + uVar11;
      bVar2 = local_e8 < uVar5;
      local_e8 = local_e8 - uVar5;
      if (uVar5 != 0) {
        uVar11 = (ulong)bVar2;
      }
      if (bVar1 != 3) {
        uVar5 = local_d8[3] + uVar11;
        bVar2 = local_e0 < uVar5;
        local_e0 = local_e0 - uVar5;
        if (uVar5 != 0) {
          uVar11 = (ulong)bVar2;
        }
        if (bVar1 != 4) {
LAB_00110140:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x110144);
          (*pcVar6)();
        }
      }
    }
  }
  if (uVar11 == 0) {
    uVar11 = *param_1;
    local_d8[0] = local_f8 - uVar11;
    uVar5 = (ulong)(uVar11 != 0 && local_f8 < uVar11);
    if (bVar1 != 1) goto LAB_0010fec8;
  }
  else {
    uVar11 = *(ulong *)(param_5 + 8);
    bVar2 = CARRY8(local_f8,uVar11);
    local_f8 = local_f8 + uVar11;
    if (bVar1 == 1) {
      uVar11 = *param_1;
      local_d8[0] = local_f8 - uVar11;
      uVar5 = (ulong)(uVar11 != 0 && local_f8 < uVar11);
    }
    else {
      uVar5 = (ulong)(uVar11 != 0 && bVar2);
      uVar11 = local_f0 + uVar5 + *(long *)(param_5 + 0x10);
      if (uVar11 != local_f0) {
        uVar5 = (ulong)(uVar11 < local_f0);
      }
      uVar7 = local_e8;
      if (bVar1 != 2) {
        uVar7 = local_e8 + uVar5 + *(long *)(param_5 + 0x18);
        if (bVar1 != 3) {
          if (uVar7 != local_e8) {
            uVar5 = (ulong)(uVar7 < local_e8);
          }
          local_e0 = local_e0 + uVar5 + *(long *)(param_5 + 0x20);
        }
      }
      local_e8 = uVar7;
      uVar5 = *param_1;
      local_d8[0] = local_f8 - uVar5;
      uVar5 = (ulong)(uVar5 != 0 && local_f8 < uVar5);
      local_f0 = uVar11;
LAB_0010fec8:
      uVar11 = param_1[1] + uVar5;
      local_d8[1] = local_f0 - uVar11;
      if (uVar11 != 0) {
        uVar5 = (ulong)(local_f0 < uVar11);
      }
      if (bVar1 != 2) {
        uVar11 = param_1[2] + uVar5;
        local_d8[2] = local_e8 - uVar11;
        if (uVar11 != 0) {
          uVar5 = (ulong)(local_e8 < uVar11);
        }
        if (bVar1 != 3) {
          uVar11 = param_1[3] + uVar5;
          local_d8[3] = local_e0 - uVar11;
          if (uVar11 != 0) {
            uVar5 = (ulong)(local_e0 < uVar11);
          }
        }
      }
    }
  }
  uVar11 = local_d8[2];
  if (uVar5 != 0) {
    uVar5 = *(ulong *)(param_5 + 8);
    bVar2 = CARRY8(local_d8[0],uVar5);
    local_d8[0] = local_d8[0] + uVar5;
    if (bVar1 != 1) {
      uVar7 = (ulong)(uVar5 != 0 && bVar2);
      uVar5 = local_d8[1] + uVar7 + *(long *)(param_5 + 0x10);
      if (uVar5 != local_d8[1]) {
        uVar7 = (ulong)(uVar5 < local_d8[1]);
      }
      local_d8[1] = uVar5;
      if (bVar1 != 2) {
        uVar11 = local_d8[2] + uVar7 + *(long *)(param_5 + 0x18);
        if (bVar1 != 3) {
          if (uVar11 != local_d8[2]) {
            uVar7 = (ulong)(uVar11 < local_d8[2]);
          }
          local_d8[3] = local_d8[3] + uVar7 + *(long *)(param_5 + 0x20);
        }
      }
    }
  }
LAB_0010ffc4:
  local_d8[2] = uVar11;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  uECC_vli_mult(local_d8 + 8,local_d8,local_d8 + 4,*param_5);
  pcVar6 = *(code **)(param_5 + 0xc0);
  if (4 < ((ulong)(pcVar6 + -0x102250) >> 3 | (long)pcVar6 << 0x3d)) {
    __cfi_slowpath_diag(0x6dd230d89864710d,pcVar6,&DAT_00100350);
  }
  (*pcVar6)(local_d8,local_d8 + 8);
  if ('\0' < (char)bVar1) {
    uVar11 = *param_2;
    uVar5 = local_d8[0] - uVar11;
    uVar11 = (ulong)(uVar11 != 0 && local_d8[0] < uVar11);
    *param_2 = uVar5;
    if (bVar1 != 1) {
      uVar7 = param_2[1] + uVar11;
      if (uVar7 != 0) {
        uVar11 = (ulong)(local_d8[1] < uVar7);
      }
      param_2[1] = local_d8[1] - uVar7;
      if (bVar1 != 2) {
        uVar7 = param_2[2] + uVar11;
        if (uVar7 != 0) {
          uVar11 = (ulong)(local_d8[2] < uVar7);
        }
        param_2[2] = local_d8[2] - uVar7;
        if (bVar1 != 3) {
          uVar7 = param_2[3] + uVar11;
          if (uVar7 != 0) {
            uVar11 = (ulong)(local_d8[3] < uVar7);
          }
          param_2[3] = local_d8[3] - uVar7;
        }
      }
    }
    if (uVar11 != 0) {
      uVar11 = uVar5 + *(long *)(param_5 + 8);
      *param_2 = uVar11;
      if (bVar1 != 1) {
        uVar7 = 0;
        lVar13 = uVar4 - 1;
        pbVar8 = param_5 + 0x10;
        do {
          param_2 = param_2 + 1;
          bVar2 = uVar11 < uVar5;
          bVar3 = uVar11 != uVar5;
          uVar5 = *param_2;
          if (bVar3) {
            uVar7 = (ulong)bVar2;
          }
          lVar13 = lVar13 + -1;
          uVar11 = uVar5 + uVar7 + *(long *)pbVar8;
          *param_2 = uVar11;
          pbVar8 = pbVar8 + 8;
        } while (lVar13 != 0);
      }
    }
    memcpy(param_1,&local_f8,uVar4 << 3);
  }
  lVar13 = sp_el0;
  if (*(long *)(lVar13 + 0x5e0) != local_d8[0x10]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ---- uECC_vli_mult @ 00110290 ---- */

void uECC_vli_mult(long param_1,ulong *param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  char cVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  
  cVar4 = (char)param_4;
  iVar11 = (int)cVar4;
  if (iVar11 < 1) {
    uVar19 = 0;
    uVar12 = 0;
  }
  else {
    lVar15 = 0;
    uVar17 = 0;
    uVar19 = 0;
    uVar13 = 0;
    do {
      uVar12 = 0;
      puVar18 = param_2;
      uVar14 = uVar19;
      lVar20 = lVar15;
      do {
        uVar19 = *(ulong *)(param_3 + lVar20) * *puVar18;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulong *)(param_3 + lVar20);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *puVar18;
        uVar2 = uVar14 + uVar19;
        uVar19 = uVar13 + SUB168(auVar5 * auVar7,8) + (ulong)CARRY8(uVar14,uVar19);
        bVar10 = uVar2 < uVar14;
        if (uVar19 != uVar13) {
          bVar10 = uVar19 < uVar13;
        }
        uVar12 = uVar12 + bVar10;
        bVar10 = lVar20 != 0;
        puVar18 = puVar18 + 1;
        uVar14 = uVar2;
        lVar20 = lVar20 + -8;
        uVar13 = uVar19;
      } while (bVar10);
      *(ulong *)(param_1 + uVar17 * 8) = uVar2;
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 8;
      uVar13 = uVar12;
    } while (uVar17 != ((ulong)param_4 & 0xff));
  }
  iVar3 = (-(param_4 >> 7 & 1) & 0xfffffe00 | (param_4 & 0xff) << 1) - 1;
  if (iVar11 < iVar3) {
    cVar16 = '\x01';
    uVar17 = uVar19;
    do {
      uVar19 = uVar12;
      cVar9 = (char)iVar11 + '\x01';
      lVar15 = (long)cVar16;
      if ((char)(cVar9 - cVar4) < cVar4) {
        uVar12 = 0;
        uVar13 = uVar19;
        uVar14 = uVar17;
        puVar18 = (ulong *)(param_3 + (iVar11 - lVar15) * 8);
        do {
          puVar1 = param_2 + lVar15;
          lVar15 = lVar15 + 1;
          uVar19 = *puVar18 * *puVar1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *puVar18;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = *puVar1;
          uVar17 = uVar14 + uVar19;
          uVar19 = uVar13 + SUB168(auVar6 * auVar8,8) + (ulong)CARRY8(uVar14,uVar19);
          bVar10 = uVar17 < uVar14;
          if (uVar19 != uVar13) {
            bVar10 = uVar19 < uVar13;
          }
          uVar12 = uVar12 + bVar10;
          uVar13 = uVar19;
          uVar14 = uVar17;
          puVar18 = puVar18 + -1;
        } while (((uint)lVar15 & 0xff) != (param_4 & 0xff));
      }
      else {
        uVar12 = 0;
      }
      *(ulong *)(param_1 + (long)iVar11 * 8) = uVar17;
      iVar11 = (int)cVar9;
      cVar16 = cVar16 + '\x01';
      uVar17 = uVar19;
    } while (iVar11 < iVar3);
  }
  *(ulong *)(param_1 + (long)iVar3 * 8) = uVar19;
  return;
}



/* ---- init_module @ 00110404 ---- */

void init_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<6>%s enter\n","slg_init");
  __platform_driver_register(&slg_driver,&__this_module);
  return;
}



/* ---- cleanup_module @ 0011044c ---- */

void cleanup_module(void)

{
  undefined8 *in_x18;
  undefined8 unaff_x30;
  
  *in_x18 = unaff_x30;
  _printk("<3>%s enter\n","slg_exit");
  platform_driver_unregister(&slg_driver);
  return;
}


/* functions: 69 ok, 0 failed */
