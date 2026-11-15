# sapphire kernel — FirstPlace

Open-source kernel tree for the **Redmi Note 13 4G** (`sapphire` / `sapphiren`, Qualcomm SM6225 "khaje", Android 13-5.15 GKI). It contains **only modules that have been tested and work on a real device**. The branch grows as more modules are verified.

The reverse-engineering work behind it (decompiled stock modules, analysis, patches, tools) is on the [`main`](../../tree/main) branch.

## Status

Tested on sapphiren with Lunaris AOSP 3.13 (stock prebuilt GKI `5.15.178-android13-8`):

- **264 of the 317 vendor modules** come from this tree: 208 from `msm-kernel` and 56 from the vendor repos.
- They are loaded from both `vendor_boot` (first-stage ramdisk and recovery, 213 modules) and `vendor_dlkm` (191 modules).
- The phone boots normally.
- Verified working:
  - display, with the GPU (`msm_kgsl`, Adreno 610);
  - speakers: stereo, top and bottom (FourSemi fs1815 x2);
  - headset and microphone;
  - Wi-Fi (`qca_cld3_wlan` + `cfg80211`);
  - Bluetooth, including Bluetooth audio;
  - mobile data / IPA;
  - charging, with a correct battery temperature;
  - power key, vibration and flashlight.

| Area | What is ours |
|---|---|
| First stage (vendor_boot) | clocks (`clk-qcom`, `gcc-khaje`, `clk-smd-rpm`), pinctrl (`pinctrl-msm`, `pinctrl-khaje`), RPM/regulators, interconnect, SPMI/PMIC, SMEM/SMP2P/GLINK/QRTR (+`ns`), IOMMU (`arm_smmu`), SCM/QSEECOM, `sched-walt`, CPU vendor hooks, cpufreq-hw, watchdog, eMMC (`sdhci-msm`), DMA heaps, … |
| Remote processors | `qcom_q6v5`, `qcom_q6v5_pas` (ADSP/CDSP/modem), `qcom_aoss`, `rproc_qcom_common`, `pdr_interface` |
| Display / GPU / video | `dispcc-khaje`, `gpucc-khaje`, `msm_kgsl`, `msm_video`, `msm-mmrm` |
| Audio (28) | ADSP core, bengal machine, `wcd937x` with the sapphire stereo speaker glue, bolero macros, soundwire, `mbhc`, **`fs1815`**, **`aw87xxx`**, **`lct_audio_info`** |
| Connectivity | Wi-Fi (`qca_cld3_wlan`, `cfg80211`, `icnss2`, `cnss_*`), BT/FM, IPA (`ipam`, `ipa_clientsm`, `gsim`, …), rmnet |
| Platform | thermal and cooling, PMIC ADC/GPIO/PON/RTC, USB gadget functions and PHYs, LEDs and vibrator, coresight/STM, DCVS (`qcom_dcvs`, `bwmon`, `memlat`), crypto, … |

The full list, with the built path of each module, is in [`build/TESTED_MODULES.txt`](build/TESTED_MODULES.txt).

Xiaomi changed some **data** and **build options** in otherwise unmodified drivers. These were recovered from the stock modules by comparing every function, data object, export and CRC, and ported:
- the battery NTC table `adcmap_batt_therm_30k`: with the CLO table the phone shut down for "battery over temperature";
- the GENI I2C SCL timings;
- IPA rule prefetch buffer size 128;
- kgsl page pools (no `USE_SHMEM`);
- the qcacld `/dev/wlan` control node and `cld80211` (`WLAN_CTRL_NAME=wlan`, `CONFIG_CNSS_GENL`);
- `q6v5_pas` without the xo proxy clock on khaje;
- the `spf_core` close-all timeout;
- the qrtr nameservice built as a separate `ns.ko`. Built into `qrtr.ko`, its exports collided with the stock `ns.ko` and first-stage init rebooted the phone.

**Not yet covered** (they stay stock until they are verified on a device):
- modules Xiaomi modified heavily:
  - display `msm_drm`;
  - charger `qpnp-smb5` and fuel gauge `qpnp-qg`;
  - `dwc3-msm`, `usbpd`, `ufs_qcom`;
  - `zram`, `minidump`, `mi_thermal_interface`, `bcl_pmic5`;
- the UFS crypto chain tied to `ufs_qcom`: `phy-qcom-ufs`, `ufshcd-crypto-qti`, `crypto-qti-*`, `cqhci`;
- the Xiaomi-only closed drivers:
  - charge pumps and PD policy;
  - battery authentication;
  - fingerprint, touch and NFC;
  - `mi_memory`, `miev`, `millet`, `bootinfo`, `swinfo`, `perf_helper`;
- the camera.

## Layout

```
kernel_platform/msm-kernel     CLO KERNEL.PLATFORM.2.0.r1-22800 (5.15.194) + sapphire changes
kernel_platform/gki-stock      vmlinux.symvers + System.map of the stock GKI boot.img (mixed build)
vendor/qcom/opensource/...     CLO LA.VENDOR.13.2.1.r1 (DIVAR) module repos + sapphire changes
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
