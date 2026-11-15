# sapphire kernel — FirstKernel

Open-source kernel tree for the **Redmi Note 13 4G** (`sapphire` / `sapphiren`, Qualcomm SM6225 "khaje", Android 13-5.15 GKI). It contains **only modules that have been tested and work on a real device**. The branch grows as more modules are verified.

The reverse-engineering work behind it (decompiled stock modules, analysis, patches, tools) is on the [`main`](../../tree/main) branch.

## Status

Tested on sapphiren with Lunaris AOSP 3.13 (stock prebuilt GKI `5.15.178-android13-8`):

- **316 of the 317 vendor modules** come from this tree: 228 from `msm-kernel`, 58 from the Qualcomm vendor repos and 30 Xiaomi closed modules rebuilt from source (`vendor/xiaomi/opensource`). Only the camera is still stock.
- They are loaded from both `vendor_boot` (first-stage ramdisk and recovery, 253 modules) and `vendor_dlkm` (229 modules).
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
  - storage on our UFS stack (`ufs_qcom`, `ufshcd-crypto-qti`, `phy-qcom-ufs`, `crypto-qti-*`) and camera photos;
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

**Not yet covered** (stays stock until verified on a device):
- the camera (`camera`: CLO `notify_frame_skip` and the bundled `led_gpio_flash` driver to port) — in progress.

## Layout

```
kernel_platform/msm-kernel     CLO KERNEL.PLATFORM.2.0.r1-22800 (5.15.194) + sapphire changes
kernel_platform/gki-stock      vmlinux.symvers + System.map of the stock GKI boot.img (mixed build)
vendor/qcom/opensource/...     CLO LA.VENDOR.13.2.1.r1 (DIVAR) module repos + sapphire changes
vendor/xiaomi/opensource/...   Xiaomi closed modules rebuilt from MiCode/community sources
build/build.sh                 builds msm-kernel + vendor modules and collects the tested .ko files
build/TESTED_MODULES.txt       device-tested modules
build/VERSIONS.txt             source revision of every component
build/stock_defconfig          GKI config extracted from the stock boot.img
build/stock-closed.symvers     CRCs of closed stock exports used by our modules (qpnp-smb5)
```

The `msm-kernel` and `audio-kernel` changes are also published as patch series on top of the exact CLO revisions on [`main`](../../tree/main/patches).

## Building

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
