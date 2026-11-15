# Redmi Note 13 4G (sapphire / sapphiren) — kernel reverse engineering

Xiaomi never published the kernel source for the Redmi Note 13 4G (`sapphire`/`sapphiren`, Qualcomm SM6225 "khaje", 5.15 GKI). This repository holds the work to rebuild it as open source:

- the stock vendor modules **decompiled**;
- the reconstructed sources, as **patches** on top of CodeLinaro;
- the analysis and tools used.

> **Status:** all 317 vendor modules built from this work (228 msm-kernel, 59 Qualcomm vendor, 30 Xiaomi closed modules rebuilt from source; no stock module left) run on a Redmi Note 13 4G (Lunaris 3.13, stock GKI). They include the first-stage `vendor_boot` ramdisk, the GPU, Wi-Fi, IPA and the remote processors.
>
> - **Build tree:** the [`FirstKernel`](../../tree/FirstKernel) branch has the buildable kernel tree with only device-tested modules.
> - **Details:** see [docs/TESTING.md](docs/TESTING.md).

## Contents

| Path | What |
|---|---|
| [`decompiled/`](decompiled/) | 46 stock modules decompiled with Ghidra 12.2 (~7,600 functions). Each file has every string of the module and the C pseudocode of every function, with `printk` texts inlined. [`INDEX.md`](decompiled/INDEX.md) lists functions, DT compatibles, DT properties and module params. |
| [`patches/`](patches/) | Reconstructed sources as `git format-patch` series, with the exact CodeLinaro base revisions. |
| [`analysis/`](analysis/) | Stock GKI config, `sapphire_GKI.config`, decompiled DTB/DTBO overlays (sapphire = board-id `0x20022`, sapphiren = `0x30022`), module inventories, `modules.load`, the DIVAR vendor manifest. |
| [`docs/`](docs/) | Findings, closed-driver source report, testing notes. |
| [`tools/`](tools/) | Scripts. Ghidra decompile/dump scripts, ABI/CRC checks, the symbol resolver, `vendor_dlkm`/`vendor_boot` repackers, verification scripts. |
| [`logs/`](logs/) | Live module load test on the device (OrangeFox, stock Lunaris kernel). |

The decompiled modules include:
- **Xiaomi charging:** `pd_policy_manager` with the sapphire "N7" layer, `xm_smart_chg`, `cp_qc30`, `bq25960`, `sc8541`, `qpnp-smb5`, battery authentication.
- **Fingerprint, touch and NFC:** `xiaomi_fp`, `focaltech`, `lct_tp`, NFC.
- **Xiaomi system modules:** `millet`, `miev`, `mi_memory`.
- **Display and camera:** `msm_drm`, `camera`.
- **Audio.**

## Key findings

- `boot.img` is pure Google GKI. Stock HyperOS uses `android13-5.15-2025-12_r9`; the Lunaris prebuilt uses `5.15.178`. The missing pieces are the vendor modules and the device trees.
- **Base.** Xiaomi built the vendor modules from CodeLinaro `LA.VENDOR.13.2.1.r1-0x000-DIVAR`. Several modules (mmrm, datarmnet, wlan/platform) match CLO commits exactly.
- **ABI.** Module CRCs must match the device kernel. They were extracted from the stock `boot.img` itself.
  - `CONFIG_DEBUG_INFO_BTF` changes `struct module`.
  - msm-kernel must be based on the same ACK quarterly release: CLO `KERNEL.PLATFORM.2.0.r1-22800`.
  - The rebuilt `msm-kernel` matches the stock kernel with **0/8573 CRC mismatches**.
- **Audio.** Sapphire has **stereo speakers with dual-sourced amplifiers** (FourSemi `fs1815` or Awinic `aw87xxx`), unlike topaz. The audio stack is reconstructed from public FourSemi v4.1.0-a / Awinic v2.10.0 drivers plus the Xiaomi changes recovered from the decompiled modules.
  - Verified against stock: same functions, exports and DAPM routes.

## Building

See [docs/NOTES.md](docs/NOTES.md). The workspace follows the Qualcomm layout (`kernel_platform/msm-kernel` + `vendor/qcom/opensource/*`), built in mixed mode against the stock GKI `vmlinux.symvers`.

## Disclaimer

The decompiled files are machine-generated pseudocode of GPL-licensed kernel modules shipped on the device. They are provided for interoperability and research, to help bring proper open-source kernel support to the device.
