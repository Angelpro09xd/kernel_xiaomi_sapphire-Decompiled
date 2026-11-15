# sapphire kernel — FirstPlace

Open-source kernel tree for the **Redmi Note 13 4G** (`sapphire` / `sapphiren`, Qualcomm SM6225 "khaje", Android 13-5.15 GKI). It contains **only modules that have been tested and work on a real device**. The branch grows as more modules are verified.

The reverse-engineering work behind it (decompiled stock modules, analysis, patches, tools) is on the [`main`](../../tree/main) branch.

## Status

Tested on sapphiren with Lunaris AOSP 3.13 (stock prebuilt GKI `5.15.178-android13-8`):

- **47 vendor modules** built from this tree replace every stock module in `vendor_dlkm` (except camera).
- The phone boots normally.
- Verified working:
  - speakers: stereo, top and bottom (FourSemi fs1815 x2);
  - headset (jack detection and buttons) and microphone;
  - Wi-Fi;
  - Bluetooth, including Bluetooth audio.

| Area | Modules |
|---|---|
| Audio (28) | ADSP core (`adsp_loader`, `gpr`, `spf_core`, `q6_notifier`, `q6_pdr`, `snd_event`, `q6`, `audio_prm`, `audio_pkt`, `audpkt_ion`), `machine` (bengal sound card), `wcd937x` + slave (with the sapphire stereo speaker glue), `wcd9xxx`, `wcd_core`, `mbhc`, bolero + `rx/tx/va_macro`, `swr`, `swr_ctrl`, `pinctrl_lpi`, `stub`, `wsa881x_analog`, **`fs1815`**, **`aw87xxx`**, **`lct_audio_info`** |
| Wi-Fi platform (5) | `icnss2`, `cnss_utils`, `cnss_nl`, `cnss_prealloc`, `wlan_firmware_service` |
| Bluetooth / FM (3) | `btpower`, `bt_fm_slim`, `radio-i2c-rtc6226-qca` |
| Data (6) | `gsim`, `ipanetm`, `rndisipam`, `rmnet_core`, `rmnet_ctl`, `rmnet_wlan` |
| Crypto (3) | `qce50`, `qcedev-mod`, `qcrypto-msm` |
| Video (2) | `msm_video`, `mmrm_test_module` |

The full list, with the source path of each module, is in [`build/TESTED_MODULES.txt`](build/TESTED_MODULES.txt).

**Not yet covered:**
- the `vendor_boot` ramdisk modules (first stage), including `qcom_q6v5_pas` and `frpc-adsprpc`;
- the camera;
- the Wi-Fi driver `qcacld-3.0` (`wlan.ko`, in the `vendor` partition);
- display and touch;
- the Xiaomi charging, fingerprint and NFC drivers.

These stay stock until they are verified on a device.

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
