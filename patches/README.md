# Patches

Apply with `git am` on top of the listed CodeLinaro base revision.

| tree | CLO project | base revision |
|---|---|---|
| msm-kernel | clo/la/kernel/msm-5.15 | KERNEL.PLATFORM.2.0.r1-22800-kernel.0 (5.15.194, ACK android13-5.15-2025-12_r1) |
| audio-kernel | platform/vendor/qcom/opensource/audio-kernel-ar | 52ca9d36b9bfc378ce6b7d443512b5a1d2825ec6 (LA.VENDOR.13.2.1.r1-09000-DIVAR) |
| camera-kernel | platform/vendor/opensource/camera-kernel | acca4c844a7b98baabd7dcb197dacb8a738d54db |
| qcacld-3.0 | platform/vendor/qcom-opensource/wlan/qcacld-3.0 | 31b88a3249dcf71c2413e5b074312ab27eb64e0f |
| dataipa | vendor/qcom/opensource/dataipa (LA.VENDOR.13.2.1.r1 DIVAR manifest) | d80024824e37bfc33c1938f769a42098e7c127a5 |
| graphics-kernel | vendor/qcom/opensource/graphics-kernel (LA.VENDOR.13.2.1.r1 DIVAR manifest) | b908a4b19eb80bc925e60f54eef128809bb1c4f6 |

Build options that are not patches but must match stock:
- `qcacld-3.0`: build with `CONFIG_CNSS_GENL=m WLAN_CTRL_NAME=wlan`, as the Android build does. Without them there is no `/dev/wlan` and no `cld80211`.
- The vendor build recipe for every repo is `build/build.sh` on the `FirstKernel` branch.
