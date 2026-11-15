# sapphire kernel — FirstKernel

Open-source kernel tree for the **Redmi Note 13 4G** (`sapphire` / `sapphiren`, Qualcomm SM6225 "khaje", Android 13-5.15 GKI). Everything here has been **tested and works on a real device**. The phone runs entirely on a kernel built from this source: the GKI kernel (**FirstKernel**), all 317 vendor modules and the device tree.

The reverse-engineering work behind it (decompiled stock modules, analysis, patches, tools) is on the [`main`](../../tree/main) branch.

## Status

Tested on sapphiren with Lunaris AOSP 3.13, running **`5.15.194-android13-8-FirstKernel`** (our GKI build, `build/build_gki.sh`):

- **All 317 of the 317 vendor modules** come from this tree: 228 from `msm-kernel`, 59 from the Qualcomm vendor repos and 30 Xiaomi closed modules rebuilt from source (`vendor/xiaomi/opensource`). No stock module is left.
- They are loaded from both `vendor_boot` (first-stage ramdisk and recovery, 253 modules) and `vendor_dlkm` (230 modules).
- The device tree comes from source too: `devicetree/` builds the vendor_boot DTB (6 khaje DTBs) and `dtbo.img` (47 entries), semantically identical to stock (`make verify`), with the stock node order and `__symbols__` (base DTBs merged with AOSP libufdt like the stock build; the camera CPAS driver needs that order). The phone boots with both (`ro.boot.dtbo_idx=46`, sapphiren).
- Tested as a full ROM: an official Lunaris 3.13 (Android 16) build for sapphire that ships this kernel, its modules and this device tree (everything works, camera included).
- The phone boots normally.
- Verified working:
  - display (`msm_drm` with the Xiaomi `mi_disp` layer: brightness, 60/90/120 Hz, AOD, FOD/HBM for the fingerprint) and the GPU (`msm_kgsl`, Adreno 610);
  - speakers: stereo, top and bottom (FourSemi fs1815 x2);
  - headset and microphone;
  - Wi-Fi (`qca_cld3_wlan` + `cfg80211`);
  - Bluetooth, including Bluetooth audio;
  - mobile data / IPA;
  - charging, with a correct battery temperature (`qti_battery_charger`, `bcl_pmic5`);
  - power key, vibration and flashlight;
  - USB to PC (`usbpd` with the Xiaomi adapter verification, `dwc3-msm`);
  - storage on our UFS stack (`ufs_qcom`, `ufshcd-crypto-qti`, `phy-qcom-ufs`, `crypto-qti-*`);
  - camera (`camera`: rear 108 MP and front), with our camera module.
  - charging with our whole charging stack: `qpnp-smb5` charger, `qpnp-qg` fuel gauge, charge pumps and the Xiaomi fast-charging policy.
  - NFC, touch (`focaltech_ts_i2c`, FT5452J) and in-display fingerprint (`xiaomi_fp`).

| Area | What is ours |
|---|---|
| First stage (vendor_boot) | clocks (`clk-qcom`, `gcc-khaje`, `clk-smd-rpm`), pinctrl (`pinctrl-msm`, `pinctrl-khaje`), RPM/regulators, interconnect, SPMI/PMIC, SMEM/SMP2P/GLINK/QRTR (+`ns`), IOMMU (`arm_smmu`), SCM/QSEECOM, `sched-walt`, CPU vendor hooks, cpufreq-hw, watchdog, eMMC (`sdhci-msm`), DMA heaps, … |
| Remote processors | `qcom_q6v5`, `qcom_q6v5_pas` (ADSP/CDSP/modem), `qcom_aoss`, `rproc_qcom_common`, `pdr_interface` |
| Display / GPU / video | `msm_drm` (+ Xiaomi `mi_disp`, from MiCode xun-t-oss khaje + stock decompile), `dispcc-khaje`, `gpucc-khaje`, `msm_kgsl`, `msm_video`, `msm-mmrm` |
| Audio (28) | ADSP core, bengal machine, `wcd937x` with the sapphire stereo speaker glue, bolero macros, soundwire, `mbhc`, **`fs1815`**, **`aw87xxx`**, **`lct_audio_info`** |
| Connectivity | Wi-Fi (`qca_cld3_wlan`, `cfg80211`, `icnss2`, `cnss_*`), BT/FM, IPA (`ipam`, `ipa_clientsm`, `gsim`, …), rmnet |
| Xiaomi | `mi_thermal_interface` (thermal_message sysfs + notifier, reconstructed), `zram` with writeback + Xiaomi ExtM memory extension, `panel_event_notifier` with Xiaomi client ids |
| USB | `usbpd` (Xiaomi `Charging_Adapter` PD verification, SVID 0x2717 VDM auth, PPS limits, exports for the charger stack), `dwc3-msm` |
| Xiaomi closed modules | `millet` (core, binder, hs, pkg, sig, oem_cgroup) + `binder_gki`, `binder_prio`, `perf_helper`, `mi_wmark`, `mi_memory`, `miev`, `bootinfo`, `swinfo`, NFC (`stm_nfc_i2c` ST21NFC, `nxp-nci` SN1xx), `lct_tp`, `xiaomi_touch_game`, touch `focaltech_ts_i2c`, fingerprint `xiaomi_fp`, charge pumps `sc8541_charger`/`bq25960_charger`, charging policy `cp_qc30`/`pd_policy_manager` (sapphire N7 CP 2:1/1:1 layer)/`xm_smart_chg`, battery authentication (`battery_auth_class`, `auth_battery`, `ds28e30_verify`, `slg_verify`, `stick_verify`) |
| Storage (UFS) | CLO `ufs_qcom` on the GKI UFS core + the Xiaomi diagnostics `mi_memory` reads (`ufs_stats` at the stock offset, `get_ufs_data` with the stock CRC). Xiaomi's private UFS core copy, CLD and UFS firmware auto-update are not used: on sapphire they are no-ops (firmware already newest, CLD unsupported on the YMTC part, identical quirk table) |
| Camera | `camera` on the stock CLO base (r1-07400/07900) + Xiaomi `notify_frame_skip` backport, back GPIO flash LED driver (`qcom,leds-back-gpio-flash`), `gpio-custom3` sensor power, stock csiphy tables; topaz-only KTD2691/wl2866d code removed |
| Charger / gauge | `qpnp-smb5` (Xiaomi charger: audio/touch/charging-policy exports, MTBF/float/QC2 handling), `qpnp-qg` (FFC, soc decimal, night charging) |
| Platform | thermal and cooling, `bcl_pmic5`, `minidump`, PMIC ADC/GPIO/PON/RTC, USB gadget functions and PHYs, LEDs and vibrator, coresight/STM, DCVS (`qcom_dcvs`, `bwmon`, `memlat`), crypto, … |

The full list, with the built path of each module, is in [`build/TESTED_MODULES.txt`](build/TESTED_MODULES.txt).

Xiaomi changed some **data** and **build options** in otherwise unmodified drivers. These were recovered from the stock modules by comparing every function, data object, export and CRC, and ported:
- the battery NTC table `adcmap_batt_therm_30k`: with the CLO table the phone shut down for "battery over temperature";
- the GENI I2C SCL timings;
- IPA rule prefetch buffer size 128;
- kgsl page pools (no `USE_SHMEM`);
- the qcacld `/dev/wlan` control node and `cld80211` (`WLAN_CTRL_NAME=wlan`, `CONFIG_CNSS_GENL`);
- `q6v5_pas` without the xo proxy clock on khaje;
- the `spf_core` close-all timeout;
- the Xiaomi `panel_event_notifier` client enum (`FINGERPRINT`, `XM_SMART_CHG`), which restores the stock CRC of `panel_event_notifier_register`;
- the stock/topaz `PSY_IIO_*` channel numbering in `qti_power_supply_iio.h`;
- the qrtr nameservice built as a separate `ns.ko`. Built into `qrtr.ko`, its exports collided with the stock `ns.ko` and first-stage init rebooted the phone.

Where the stock Xiaomi modules have real bugs, they are fixed here instead of copied (uninitialised mutexes, OF match tables without sentinel, focaltech `BLANK_LP` work never initialised, `tp_data_dump` use-after-free, fingerprint notifier never unregistered, millet skb leak, sc8541 slave-mode overrun). Each fix is commented in the source.

**Still to do:**
- have `build.sh` also pack the final `vendor_boot.img` / `vendor_dlkm.img` (today the `.ko` files and DTBs are packed into the stock images with the repack tools on `main`).

## Layout

```
kernel_platform/msm-kernel     CLO KERNEL.PLATFORM.2.0.r1-22800 (5.15.194) + sapphire changes
kernel_platform/gki-stock      vmlinux.symvers + System.map of the stock GKI boot.img (mixed build)
vendor/qcom/opensource/...     CLO LA.VENDOR.13.2.1.r1 (DIVAR) module repos + sapphire changes
vendor/xiaomi/opensource/...   Xiaomi closed modules rebuilt from MiCode/community sources
build/build.sh                 builds msm-kernel + vendor/Xiaomi modules, collects the .ko files, builds the DT
build/build_gki.sh             builds the GKI kernel Image (FirstKernel) from ACK at the stock tag
devicetree/                    sapphire/sapphiren device tree source (MiCode creek GPL base + reconstructed sapphire board)
build/TESTED_MODULES.txt       device-tested modules
build/VERSIONS.txt             source revision of every component
build/stock_defconfig          GKI config extracted from the stock boot.img
build/stock-closed.symvers     CRCs of closed stock exports used by our modules (qpnp-smb5)
```

The `msm-kernel` and `audio-kernel` changes are also published as patch series on top of the exact CLO revisions on [`main`](../../tree/main/patches).

## Building

```sh
# GKI kernel (boot.img kernel): ACK android13-5.15-2025-12_r9 + stock GKI config
CLANG_DIR=/path/to/clang-r450784e build/build_gki.sh          # -> out-gki/arch/arm64/boot/Image
# vendor modules + device tree
CLANG_DIR=/path/to/clang-r450784e QDTC=/path/to/clo-dtc build/build.sh   # -> out/*.ko, out/dtb.img, out/dtbo.img
```

The GKI full-LTO link needs more than 20 GB of RAM (`LTO=thin` builds the same ABI with less).
The device tree build needs the CLO dtc fork (`fdtoverlaymerge`), AOSP libufdt `ufdt_apply_overlay` (`UFDT_APPLY_OVERLAY=<path>`, build recipe in `devicetree/build.sh`) and AOSP `mkdtboimg.py`, see `devicetree/README.md`.


You need:
- AOSP clang `clang-r450784e`;
- `pahole` >= 1.25;
- GNU make 4.3 and python3.

```sh
CLANG_DIR=/path/to/clang-r450784e build/build.sh
# -> out/*.ko  (the 47 tested modules, debug info stripped)
```

The ABI matters:
- The modules must load on the **stock GKI kernel**, so `msm-kernel` is configured from the real GKI config of the stock `boot.img`, with all GKI built-in options restored, and BTF on.
- The result matches the stock kernel with **0 / 8573 symbol CRC mismatches**.
- Modules are linked against `gki-stock/vmlinux.symvers` (mixed build).

## Installing (testing)

1. Replace the modules in the device `vendor_dlkm` image. Keep the file names, `modules.load`, `modules.dep`, SELinux contexts and EROFS layout.
2. Flash it to `vendor_dlkm_<slot>` from fastbootd.

The repack and verification tools are in [`main/tools`](../../tree/main/tools).

> Keep a recovery that boots on the slot you are testing. An Android → recovery reboot into a recovery that cannot boot on that slot looks exactly like a kernel bootloop.

## License

GPL-2.0, like the upstream sources it is based on.
