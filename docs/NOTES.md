# Sapphire (Redmi Note 13 4G) — kernel OSS: hallazgos y hoja de ruta

Firmware analizado: `sapphiren_eea_global_images_OS2.0.215.0.VNHEUXM` (Android 15).
Workspace WSL: `/home/angel/sapphire` (fw/, unpacked/, x/, src/, clo/).

## Qué es cada parte del kernel de stock

| Parte | Origen | ¿Hay fuente? |
|---|---|---|
| `boot.img` → Image | GKI de Google `5.15.194-android13-8-00019-gf4321180a397-ab15212794` | **Sí** (ACK `android13-5.15`) |
| vendor_boot ramdisk | 253 módulos (.ko) | parcial |
| vendor_dlkm | 230 módulos (.ko) | parcial |
| vendor_boot dtb | 6 DTB base khaje/khajeg/khajep/khajeq | **No** (hay que reconstruir) |
| dtbo.img | 47 overlays; **#45 sapphire (board-id 0x20022)**, **#46 sapphiren (0x30022)** | **No** (reconstruir) |

Los módulos vendor se compilaron contra el KMI **5.15.94**, así que cualquier Image android13-5.15 posterior los carga.

## Bases de Qualcomm (CodeLinaro, DIVAR = khaje/bengal 5.15)

Coincidencias exactas de `scmversion` en los .ko de stock con commits de CLO:
- mmrm `0bdd7546c541`, datarmnet `ec9548905246`, datarmnet-ext `de8edc0ecd37`, wlan/platform `6ab133819d1b`

Por tanto la base es **`LA.VENDOR.13.2.1.r1-08500…09000-DIVAR`** (julio 2023).
El manifest está en `analysis/LA.VENDOR.13.2.1.r1-09000-DIVAR.QSSI14.0.xml`.
Repos modificados por Xiaomi (hash no público): msm-kernel `755a42d1c84f`, audio, display, camera, kgsl, video, securemsm, dataipa, qcacld, bt, touch-drivers.

## Cobertura de fuente (317 módulos únicos)

- **257** tienen fuente en MiCode `topaz-t-oss` + sus repos audio/camera/wlan/data.
- **Faltan ~32 de Qualcomm abiertos**, están en CLO:
  - display-drivers, graphics-kernel, video-driver, mmrm, securemsm-kernel
  - dataipa, datarmnet, bt-kernel, qcacld (naming)
  - phy-ufs, coresight-replicator, pmic_glink_debug, sdhci-msm-scaling
- **Faltan ~28 de Xiaomi/Longcheer cerrados.** Candidatos de fuente:
  - Carga: `bq25960_charger` y `sc8541_charger` (SouthChip), `xm_smart_chg`, `ds28e30_verify`, `slg_verify`. Están en el stack `hq_chg` de Xiaomi moon/tanzanite (Mayuri-Chan/android_kernel_xiaomi_moon, itswill00/android_kernel_xiaomi_tanzanite) y en mertsan2007/android_kernel_xiaomi_ums9230.
  - `cp_qc30`: árboles Xiaomi sm8250/sm6150 (drivers/power/supply/ti/cp_qc30.c).
  - `xiaomi_fp`: Xiaomi sm7325/sm8350 (drivers/input/fingerprint/xiaomi_fp). La ruta de stock es `xiaomi_fp/fp_driver.c`.
  - Táctil:
    - `focaltech_ts_i2c` y `lct_tp`: stock en `vendor/qcom/opensource/touch-drivers/{fts_touch_i2c,lct_tp}`.
    - lct_tp_* existe en kernels Longcheer (surya, AGNi).
    - Las bases de focaltech están en CLO touch-drivers.
  - `millet_*` (drivers/mihw/millet), `miev`, `mi_memory`, `mi_wmark`, `binder_gki`: releases MiCode de otros dispositivos 5.15.
  - Sin localizar aún: `auth_battery`, `battery_auth_class`, `stick_verify`, `lct_audio_info`, `bootinfo`, `swinfo`.
  - `stm_nfc_i2c`: driver ST21NFC público de STMicroelectronics.

## Hardware sapphire vs topaz (por qué los kernels de topaz "funcionan")

Funcionan porque solo sustituyen el Image GKI; los módulos y DTB siguen siendo los de stock.
- Carga: sapphire usa PM7250B/pmic_glink + bq25960/sc8541; topaz usa el stack "nopmi" (bq2589x, ln8000, sc8551, sm5602).
- **No activar nopmi para sapphire.**
- Huella: sapphire tiene FOD (`xiaomi_fp`); topaz, lateral (fpc/goodix).
- Paneles sapphire: `m7_38_0c_0a`, `m7_38_0c_0b`, `n7_38_0c_0a` (fhdp video).

## Estado (2026-11-14)

Workspace con layout Qualcomm en WSL: `/home/angel/sapphire/ws`.

| Ruta | Contenido |
|---|---|
| `kernel_platform/msm-kernel` | Rama `sapphire`: CLO `KERNEL.PLATFORM.2.0.r1-22800` (5.15.194, ACK 2025-12_r1) + parche Xiaomi de topaz-t-oss |
| `kernel_platform/common` | ACK `android13-5.15-2025-12_r9` (= GKI de stock) |
| `kernel_platform/gki-stock` | `vmlinux.symvers`/`System.map` **extraídos del boot.img de stock**, usados como `KBUILD_MIXED_TREE` |
| `vendor/qcom/opensource/*` | Repos CLO en la base DIVAR de stock (jul-2023) + parches Xiaomi de MiCode (audio, camera, qcacld) |

- Scripts: `build.sh` (msm-kernel), `vbuild.sh` (repos vendor), `cmp.sh` (cobertura frente a stock).
- Toolchain: clang r450784e (el mismo de stock), GNU make 4.3, pahole 1.25.
- Cobertura: 285/317 módulos de stock compilan desde fuente (más `qca_cld3_wlan` = `wlan.ko`).
- Los 31 que faltan son de Xiaomi/Longcheer. Fuentes localizadas y puntuadas en `closed-drivers.md`.

Verificación de ABI (último build, rama `sapphire` sobre r1-22800):
- vmlinux de msm-kernel frente al Image de stock: **0/8573 CRC distintos**.
- Símbolos GKI importados por nuestros módulos: **0 distintos**. Cargan en el kernel de stock.
- Símbolos exportados entre módulos: 105/2127 distintos frente a stock (95 % coinciden).
  - Afectan a clk_qcom, mbhc, ipa_fmwk, sdhci_msm_scaling, coresight_tmc, panel_event_notifier…
  - Son relevantes al mezclar módulos de stock con los nuestros.

Lecciones de ABI:
- Los CRC del KMI deben coincidir con el Image de stock. Los he extraído del propio boot.img.
- Hace falta `CONFIG_DEBUG_INFO_BTF=y`, porque cambia `struct module`.
- La config base debe ser la del GKI de stock, no el `gki_defconfig` de msm-kernel.
- La base de msm-kernel debe llevar el mismo ACK trimestral.

## Audio de sapphire (reconstruido desde los .ko decompilados)

Hardware real (descubierto decompilando):
- Altavoces estéreo con dos amplificadores. El proveedor es doble: FourSemi `fs1815` o Awinic `aw87xxx`.
- Topaz monta un solo `aw87xxx`, así que su audio no sirve tal cual.

| Módulo | Fuente | Cambios Xiaomi reconstruidos |
|---|---|---|
| `fs1815_dlkm` | FourSemi pública **v4.1.0-a** (= versión stock), I²C adaptado a 5.15 | `g_probe_complete_flag` + `get_fsm_probe_complete_flag()`; chip-id previo con fallback a 0x34; PA `"<dev>-FSM-"`; guardas spk on/off |
| `aw87xxx_dlkm` | Awinic pública **v2.10.0** de Qualcomm (Motorola sm6375) | Espera a fs1815 (`EPROBE_DEFER`, 500 intentos; si fs1815 OK → `-ENODEV`); PA `"<dev>-AW-"`; `aw87xxx_get_prof_index`, `aw87xxx_show_current_profile_index`; sin RUNIN_TEST; `aw87xxx_dsp` sin DSP (como stock) |
| `lct_audio_info_dlkm` | Longcheer pública, recortada | `/sys/android_audio/{audio_codec,audio_pa}` |
| `wcd937x_dlkm` | CLO + pegamento nuevo | Widgets `AUX EXT SPK`/`EAR EXT SPK`; controles `AUX/EAR EXT SPK MODE` (13 modos, 12 = Invariable) y `AUX PATH Mode`; tablas `aw_profile[]` y modo→escena FourSemi extraídas del .ko |
| `machine_dlkm` (bengal.c) | CLO/topaz | `lct_audio_info_create_sysfs()` en `msm_rx_tx_codec_init` |
| `mbhc_dlkm` | CLO | Notifier `power_supply` → `audio_get_prop_typec_mode()` (smb5 Xiaomi): adaptador USB-C analógico = headset |

Herramientas: Ghidra 12.2 headless.
- `DecompileAll.java`: C con las cadenas incrustadas.
- `DumpData.java` + `symaddr.py`: tablas de datos.
- `verify_audio.py`: comparación contra stock.

## Hoja de ruta

1. **Fase 1 — Image GKI desde fuente.** ACK android13-5.15 con la config de stock (`analysis/stock_gki_config`). Arranca con los módulos de stock. Trivial; ya está validado por la comunidad.
2. **Fase 2 — workspace kernel_platform.**
   - Montar CLO msm-5.15 (tag de jul-2023) y los repos vendor del manifest DIVAR.
   - Aplicar los cambios Xiaomi de topaz-t-oss.
   - Compilar los módulos Qualcomm.
   - Sustituir los de stock uno a uno (vendor_dlkm primero, vendor_boot después) y verificar en el teléfono.
3. **Fase 3 — portar los drivers Xiaomi cerrados** desde los candidatos de arriba. Validar contra los .ko de stock comparando parámetros de módulo, strings y símbolos exportados.
4. **Fase 4 — DTS en fuente.**
   - Convertir el overlay #45/#46 y la base khaje a .dts/.dtsi legibles.
   - Puntos de partida: Nikita-Projects/android_kernel_xiaomi_sm6225-devicetrees y MotorolaMobilityLLC/kernel-devicetree para la base bengal 5.15.
5. **Fase 5 — integrarlo en `device_xiaomi_sapphire-kernel`** (prebuilts → fuente).
