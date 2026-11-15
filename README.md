# sapphire kernel — FirstPlace

Open-source kernel tree for the **Redmi Note 13 4G** (`sapphire` / `sapphiren`, Qualcomm SM6225 "khaje", Android 13-5.15 GKI). It contains **only modules that have been tested and work on a real device**. The branch grows as more modules are verified.

The reverse-engineering work behind it (decompiled stock modules, analysis, patches, tools) is on the [`main`](../../tree/main) branch.

## Status

Tested on sapphiren with Lunaris AOSP 3.13 (stock prebuilt GKI `5.15.178-android13-8`):

- **173 modules** built from this tree are loaded from `vendor_dlkm` instead of the stock ones: 50 from the vendor repos and 123 from `msm-kernel`.
- `vendor_boot` (first-stage ramdisk and recovery) is untouched.
- The phone boots normally.
- Verified working:
  - speakers: stereo, top and bottom (FourSemi fs1815 x2);
  - headset (jack detection and buttons) and microphone;
  - Wi-Fi;
  - Bluetooth, including Bluetooth audio;
  - charging, with a correct battery temperature;
  - power key, vibration and flashlight.

| Area | Modules |
|---|---|
| Audio (28) | ADSP core (`adsp_loader`, `gpr`, `spf_core`, `q6_notifier`, `q6_pdr`, `snd_event`, `q6`, `audio_prm`, `audio_pkt`, `audpkt_ion`), `machine` (bengal sound card), `wcd937x` + slave (with the sapphire stereo speaker glue), `wcd9xxx`, `wcd_core`, `mbhc`, bolero + `rx/tx/va_macro`, `swr`, `swr_ctrl`, `pinctrl_lpi`, `stub`, `wsa881x_analog`, **`fs1815`**, **`aw87xxx`**, **`lct_audio_info`** |
| Wi-Fi platform (5) | `icnss2`, `cnss_utils`, `cnss_nl`, `cnss_prealloc`, `wlan_firmware_service` |
| Bluetooth / FM (3) | `btpower`, `bt_fm_slim`, `radio-i2c-rtc6226-qca` |
| Data (6) | `gsim`, `ipanetm`, `rndisipam`, `rmnet_core`, `rmnet_ctl`, `rmnet_wlan` |
| Crypto / TZ (5) | `qce50`, `qcedev-mod`, `qcrypto-msm`, `smcinvoke`, `hdcp_qseecom` |
| Video (3) | `msm_video`, `msm-mmrm`, `mmrm_test_module` |
| msm-kernel (123) | SoC/QTI drivers (`drivers/soc`, 31), coresight/STM tracing (18), thermal and cooling (`tsens`, `qti_*_cdev`, `lmh`, …, 17), USB gadget functions/PHYs/BAM (12), UFS/USB PHYs (7), LEDs and vibrator (5), PMIC ADC (`qcom-spmi-adc5`, `qcom-vadc-common`), PMIC GPIO/MPP, power key/PON, RTC, PWM, cpufreq governors, GENI I2C/SPI, `spidev`, `sg`, remoteproc helpers, … |

The full list, with the built path of each module, is in [`build/TESTED_MODULES.txt`](build/TESTED_MODULES.txt).

Data tables matter, not only code. Xiaomi changed some data in otherwise unmodified drivers. These were recovered from the stock modules by comparing every data object, and ported:
- the battery NTC table `adcmap_batt_therm_30k`: with the CLO table the phone shut itself down for "battery over temperature" right after boot;
- the GENI I2C SCL timings.

**Not yet covered** (they stay stock until they are verified on a device):
- the 90 first-stage `vendor_boot` ramdisk modules;
- remoteproc (`qcom_q6v5_pas`) and `frpc-adsprpc`;
- GPU (`msm_kgsl`);
- the Wi-Fi driver (`qca_cld3_wlan`);
- the IPA core (`ipam`);
- the camera;
- modules Xiaomi modified heavily: display (`msm_drm`), charger (`qpnp-smb5`), fuel gauge (`qpnp-qg`), `dwc3-msm`, `mi_thermal_interface`, `bcl_pmic5`;
- the Xiaomi-only charging, fingerprint, touch and NFC drivers.

## Layout

```
kernel_platform/msm-kernel     CLO KERNEL.PLATFORM.2.0.r1-22800 (5.15.194) + sapphire changes
kernel_platform/gki-stock      vmlinux.symvers + System.map of the stock GKI boot.img (mixed build)
vendor/qcom/opensource/...     CLO LA.VENDOR.13.2.1.r1 (DIVAR) module repos + sapphire changes
build/build.sh                 builds everything and collects the tested .ko files
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
