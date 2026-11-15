# Primera prueba en el teléfono (Lunaris)

El kernel de Lunaris es el GKI `5.15.178-android13-8-ab13729987`, prebuilt de OS2.0.210.

- Sus 8421 símbolos tienen el mismo CRC que el GKI de la 215 contra el que se compilan nuestros módulos.
- Los paquetes solo **sustituyen módulos .ko**. El kernel (boot.img), el DTB y el dtbo se quedan como están.

## Paquetes

La versión **definitiva** está en `C:\Users\angel\Desktop\kernel-oss\test-packages\` (18:48). La que hay en `~/sapphire-oss/` del server es una versión **anterior**: el acceso SSH se cortó antes de subir la buena. Sube la de Windows con `scp`.

| Paquete | Qué cambia | Riesgo |
|---|---|---|
| `sapphire-oss-modules-planA.tgz` | 193 módulos nuestros: los de vendor_dlkm, también donde están duplicados en vendor_ramdisk | menor |
| `sapphire-oss-modules-planB.tgz` | 274/317 módulos nuestros, incluido el arranque temprano | mayor |

- `MANIFEST.txt` dentro de cada paquete dice qué módulo es `ours` y cuál `stock`.
- Siguen siendo de stock los cerrados de Xiaomi y las versiones modificadas por Xiaomi de las que dependen:
  - `panel_event_notifier`, `mi_thermal_interface`, `qti_battery_charger`
  - `qpnp-smb5-main`
  - en el plan A, además: `ufs_qcom`, `usbpd` y varios de clk/rproc

Un resolvedor de símbolos y CRC garantiza 0 conflictos de carga en ambos planes.

Copia de seguridad de tus imágenes actuales: `~/sapphire-oss/orig/` (vendor_boot, vendor_dlkm, vbmeta, boot, dtbo).

## Generar las imágenes (server)

```bash
cd ~/lunaris/device/xiaomi/sapphire-kernel
git switch -c oss-test                     # rama temporal, se descarta luego
tar -xzf ~/sapphire-oss/sapphire-oss-modules-planA.tgz vendor_dlkm vendor_ramdisk
git status --short | head                   # deberían salir solo .ko modificados
cd ~/lunaris && . build/envsetup.sh && lunch <tu target de sapphire>
m vendorbootimage vendor_dlkmimage vbmetaimage
```

AOSP regenera `modules.dep` con depmod. Algunos de nuestros módulos tienen dependencias distintas a las de stock (por ejemplo `msm_gpi`, `qcom_aoss`, `cnss_utils`), y todas están incluidas.

Para volver al tree original: `git switch - && git branch -D oss-test`.

## Flashear

```bash
fastboot flash vendor_boot vendor_boot.img
fastboot reboot fastboot                    # vendor_dlkm es lógica (super), va desde fastbootd
fastboot flash vendor_dlkm vendor_dlkm.img
fastboot reboot bootloader
fastboot flash vbmeta vbmeta.img            # o: fastboot --disable-verity --disable-verification flash vbmeta vbmeta.img
fastboot reboot
```

## Qué recoger

```bash
adb shell dmesg > dmesg.txt                 # o adb shell su -c dmesg
adb shell cat /proc/modules > modules.txt
adb logcat -b all -d > logcat.txt
```

Si no arranca, desde fastboot: `cat /proc/last_kmsg` o el pstore en recovery si hay acceso. Después restaura `~/sapphire-oss/orig/*`.

Qué conviene probar:
- pantalla y brillo
- táctil
- WiFi y BT
- datos móviles (IPA/rmnet)
- audio: altavoz, auricular y micrófono
- cámara y flash
- carga
- huella
- NFC
- vídeo (decodificación HW)

## Resultados (2026-11-15, sapphiren, Lunaris 3.13, GKI prebuilt 5.15.178)

Pruebas sobre `vendor_dlkm` (ramdisk de `vendor_boot` intacto):

| Plan | Módulos nuestros | Resultado |
|---|---|---|
| C3 | 39 (audio, WiFi plataforma, BT, vídeo, crypto, rmnet; núcleo ADSP e IPA de stock) | arranca, todo OK |
| C4 | C3 + `rndisipam`, `ipanetm` (41) | arranca |
| C2 | C4 + núcleo ADSP (`adsp_loader`, `gpr`, `spf_core`, `q6_notifier`, `q6_pdr`, `snd_event`) = 47 | arranca |
| C5 | C2 + timeout de `spf_core` igual a stock (47) | arranca: altavoces estéreo, auricular, micro, WiFi, BT, audio BT |

El "bootloop" que se vio antes con C2 **no venía de los módulos**: los 6 del núcleo ADSP son iguales a stock función a función y byte a byte en datos. Venía de `recovery_a`, que contenía una recovery que no arranca en el slot a: cuando Android pide reiniciar a recovery, el teléfono queda en bucle. **Antes de probar, deja en el slot de prueba una recovery que arranque.**

Lista exacta de módulos probados y árbol compilable: rama [`FirstKernel`](../../../tree/FirstKernel).

### Plan D: módulos de segunda etapa duplicados en `vendor_boot` y `vendor_dlkm`

- De los 253 módulos del ramdisk de `vendor_boot`, solo 90 están en `modules.load` y se cargan en primera etapa.
- 164 están también en `vendor_dlkm`. En un arranque normal se cargan desde ahí (el ramdisk los lista solo en `modules.load.recovery`).
- Por eso se pueden sustituir **sin tocar `vendor_boot`**, y la recovery sigue intacta.

| Intento | Módulos nuestros | Resultado |
|---|---|---|
| D (1) | 174 | llega al logo, vibra y se apaga; después arranca en carga offline |
| D (2) | 173 (+ tablas de stock portadas, `bcl_pmic5` de stock) | arranca y todo funciona; batería a 27,9 °C |

Diagnóstico de D (1), leyendo los datos de Android desde OrangeFox (slot b, `/data` descifrado):
- `persist.sys.boot.reason = shutdown,thermal,battery`.
- `/data/system/shutdown-checkpoints/*` muestra `BatteryService.shutdownIfOverTempLocked`.
- **Causa:** Xiaomi recalibró la tabla del termistor de 30k de la batería (`adcmap_batt_therm_30k` en `qcom-vadc-common`). Con la tabla de CLO, la temperatura sale disparada.
- **Cómo se encontró:** comparando todos los objetos de datos, no solo las funciones, de cada módulo con el de stock. Así apareció también el ajuste de tiempos del I2C GENI.
- **Arreglo:** `patches/msm-kernel/0007`.

### Plan E: GPU, driver WiFi e IPA (`vendor_dlkm`, 182 nuestros)

Antes de flashear, la comparación con stock (funciones, exports, datos) mostró diferencias de **configuración**, no de código:
- `msm_kgsl`: stock usa los page pools de kgsl, sin `QCOM_KGSL_USE_SHMEM` → `patches/graphics-kernel/0001`.
- `qca_cld3_wlan`: faltaban `/dev/wlan` (`WLAN_CTRL_NAME=wlan`) y `cld80211`/`ptt_sock` (`CONFIG_CNSS_GENL`), que pone el build de Android.
- `ipam`: `IPA3_0_HW_RULE_PREFETCH_BUF_SIZE` vale 128 en stock y 256 en CLO → `patches/dataipa/0001`.

Resultado: arranca y todo funciona (pantalla con nuestra GPU, WiFi, datos móviles, BT).

### Plan F y G: ramdisk de primera etapa en `vendor_boot`

| Intento | Qué | Resultado |
|---|---|---|
| F | 212 en el ramdisk + 191 en `vendor_dlkm` | bootloop (también cae la recovery del slot a) |
| G1 | solo `vendor_boot`: 67 módulos de primera etapa con CRC iguales a stock, `vendor_dlkm` = E | arranca |
| G2 | F + arreglos: 213 en el ramdisk + 191 en `vendor_dlkm` (264 de 317 nuestros) | arranca |

Causa del bootloop de F, encontrada offline (pstore no sirve en este teléfono: el bootloader borra ramoops en cada reinicio):
- Nuestro msm-kernel compilaba el *nameservice* de qrtr **dentro** de `qrtr.ko`, mientras que stock tiene un `ns.ko` aparte en `modules.load`.
- Los dos exportan `qrtr_ns_init`, `qrtr_ns_remove` y `qrtr_get_service_id`, así que `ns.ko` no carga.
- El first-stage init es estricto y reinicia el teléfono.
- **Arreglo:** `patches/msm-kernel/0009`.

**Comprobaciones antes de cada `vendor_boot`:**
- sin símbolos sin resolver (ramdisk solo y ramdisk + `vendor_dlkm`);
- **sin exports duplicados** en lo que realmente se carga;
- cambios en el cierre de dependencias de la primera etapa.

Además, `patches/msm-kernel/0008` quita `has_xo_clk` en `q6v5_pas` para khaje, igual que stock.

La vuelta atrás siempre funciona:
1. Desde el bootloader, `fastboot flash vendor_boot_a` con el original.
2. Desde fastbootd, el `vendor_dlkm` bueno anterior.

### Plan H: 270 de 317 (G2 + Xiaomi thermal/zram/panel notifier)

| Módulo | Qué se hizo |
|---|---|
| `zram` | upstream 5.15 + `ZRAM_WRITEBACK` + la "ExtM" de Xiaomi (desde un árbol Xiaomi 5.15 de sm8550), con compresor `lzo-rle` y `low_compress_ratio` 75 como en stock (`patches/msm-kernel/0010`) |
| `panel_event_notifier` | enum de clientes de Xiaomi (`FINGERPRINT`, `XM_SMART_CHG`), nombres y orden sacados del `.ko` de stock. Devuelve el CRC de stock a `panel_event_notifier_register` y desbloquea `qti_battery_charger` (`0011`) |
| `mi_thermal_interface` | reconstruido (linaje marble + decompilado de stock): los 22 nodos de `thermal_message` de stock y el notifier SRCU exportado. Código idéntico instrucción a instrucción (`0012`) |
| `bcl_pmic5`, `minidump` | sin cambios: eran diferencias de versión de CLO, no de Xiaomi |

Resultado: arranca, `thermal_message` expone exactamente los nodos de stock y la carga funciona (comprobado por el usuario).

### Plan I: 295 de 317

- **USB:**
  - `usbpd`, reconstruido sobre CLO `r1-12800` con los cambios de Xiaomi: clase `Charging_Adapter`, verificación de cargadores PD, VDM SVID 0x2717, límites PPS del DT y exports para la pila de carga. Exports con CRC de stock 15/15.
  - `dwc3-msm`, sobre `r1-12500`. Exports 10/10.
  - Parche: `patches/msm-kernel/0013`.
- **18 módulos cerrados de Xiaomi** reconstruidos desde fuentes de MiCode y de la comunidad, comparados con stock (funciones, CRC de exports, imports, cadenas y datos):
  - `millet` (7 módulos), `binder_prio`, `perf_helper`, `mi_wmark`;
  - `mi_memory`, `miev`, `bootinfo`, `swinfo`, que van en la primera etapa;
  - `stm_nfc_i2c`, `nxp-nci`, `lct_tp`, `xiaomi_touch_game`.
  - Las fuentes están en la rama `FirstKernel`, en `vendor/xiaomi/opensource`.
- **Solo diferencias de versión de CLO:** `frpc-adsprpc`, `snd-usb-audio-qmi`, `msm_geni_serial`, `tz_log`, `usb_f_gsi`.

Resultado: arranca y todo funciona (comprobado por el usuario). Por `/proc/modules` se ve que los módulos cargados son los nuestros, también los de la primera etapa: dependencias que solo tienen nuestras versiones, como `rproc_qcom_common` → `qcom_aoss`, `nxp_nci` → `smcinvoke_dlkm` y `qcom_ipc_logging` sin `minidump`.

### Plan J: 304 de 317 (carga, batería, táctil y huella)

- **Bombas de carga:**
  - `sc8541_charger`: canales IIO de stock, incluido `cp_workmode` 0xe9.
  - `bq25960_charger`: es una variante con registros de TI, no un simple cambio de nombre.
- **Autenticación de batería:** `battery_auth_class` (+ onewire), `auth_battery`, `ds28e30_verify`, `slg_verify`, `stick_verify`. Exports con CRC de stock.
- **Táctil `focaltech_ts_i2c` (FT5452J) y huella `xiaomi_fp`.**
  - **Descalibrado en la primera prueba:** al pulsar abajo detectaba arriba.
  - **Causa:** este panel da X en 1/8 de píxel pero **Y en 1/16** (un bit más, en el byte de área). La base FT3519T usaba 1/8 para los dos ejes.
  - **Arreglo:** Y se calcula como en stock. Tras corregirlo, táctil, teclado y huella funcionan.
- **Fallos reales de stock corregidos en vez de copiados:**
  - mutex sin inicializar;
  - tablas OF sin terminador;
  - trabajo `BLANK_LP` sin inicializar en `focaltech`;
  - uso de memoria liberada en `tp_data_dump`;
  - notifier de la huella sin desregistrar;
  - fuga de skb en `millet`.

### Planes K y L: 311 de 317 (carga rápida de Xiaomi, UFS)

- **K, lógica de carga rápida**, en la rama `FirstKernel` (`vendor/xiaomi/opensource`):
  - `cp_qc30` (QC3.0);
  - `pd_policy_manager` (PD/PPS con la capa "N7" de sapphire: bomba de carga 2:1/1:1, votable `LOW_FAST`, retención por carga inteligente o nocturna);
  - `xm_smart_chg`.

  Tablas y structs iguales a stock. Arranca y carga; falta probar con cargador rápido.
- **L, UFS:** `phy-qcom-ufs`, `crypto-qti-common`, `crypto-qti-tz` y `cqhci` recompilados desde CLO `r1-12800` (la base de stock). Idénticos a stock (`patches/msm-kernel/0014`). Almacenamiento y cámara bien.
- **`ufs_qcom` + `ufshcd-crypto-qti` siguen de stock.**
  - El `ufs_qcom` de Xiaomi es una copia completa del núcleo UFS (`mi_ufs` + CLD), con 3 firmwares de UFS incrustados que puede flashear al arrancar.
  - Solo hay fuentes públicas de `mi_ufs` para socrates y sky. Topaz y creek (bengal 5.15) no lo tienen.
- **Numeración IIO:** la cabecera `qti_power_supply_iio.h` de la importación de topaz desplaza 0x15 el bloque de Xiaomi respecto a stock. Los módulos probados usan los números de stock; la cabecera se corregirá con el parche de `smb5`/`qg`.

### Plan M: 313 de 317 (cargador y medidor de batería)

- **`qpnp-smb5` reconstruido:**
  - 15 exports con CRC de stock, 147 imports, las mismas tablas de carga y `struct smb_charger` idéntica (`real_charger_type` en 0x128c);
  - 314 de 370 funciones idénticas en el decompilado, y las otras 56 con la misma lógica.
- **`qpnp-qg` reconstruido:** además corrige fallos de stock (fuga de `pm_relax` y trabajos sin cancelar).
- **Cabecera `qti_power_supply_iio.h`:** recupera la numeración `PSY_IIO_*` de stock y topaz.
- **Config:** `QPNP_SMBLITE` desactivado, como en stock, porque `battery.c` exporta ahora `set_fv_ageing` (`patches/msm-kernel/0015`, `0016`).

**Resultado:** arranca y carga (100 %, 4.418 mV, 22 °C); el usuario confirma que todo funciona. Quedan de stock `msm_drm`, `ufs_qcom` + `ufshcd-crypto-qti` y la cámara.

### Plan N: 314 de 317 (pantalla)

`msm_drm` reconstruido (`patches/display-drivers/0001`):
- **Capa `mi_disp` de Xiaomi:** sale del código oficial de MiCode `vendor_opensource_display-drivers` rama `xun-t-oss` (Redmi Pad SE, mismo SoC khaje y mismo ODM). Se le han quitado las partes solo de la tablet: el chip de retroiluminación ktz8866, la secuencia de encendido de su panel, CABC en lugar de HBM_FOD y unos valores fijos del PHY DSI.
- **Lo propio de sapphire**, desde el decompilado de stock:
  - 94 comandos (120/90/60 Hz, HBM L1-L5, dimming);
  - HBM local / FOD para la huella;
  - doze/AOD, ESD y `/sys/android_lcd`.
- **Verificación:** 48/48 exports y 690/690 imports con CRC de stock; 821/835 objetos de datos idénticos.
- **Fallos de stock corregidos:**
  - buffer de `lc_wp_info` más pequeño que su parámetro;
  - `strcpy` sin límite;
  - puntero nulo en el IRQ de ESD (`&&` en lugar de `||`);
  - `sde_conn` nulo en el kickoff.

Resultado: la pantalla funciona perfectamente (brillo, refresco y huella), confirmado por el usuario. Quedan de stock `ufs_qcom` + `ufshcd-crypto-qti` (por seguridad) y la cámara.

### Plan O: 316 de 317 (UFS)

- **Investigación** del `ufs_qcom` de Xiaomi en el log de arranque de stock. El teléfono lleva UFS **YMTC YMUS8B2TE2A2C1, firmware 3.a**:
  - **Reflasheo de firmware (FFU):** `ufs_flag is not FFU`, `firmware is already the newest now`. No hace nada.
  - **CLD:** `ufscld_init: CLD get cld ops fail`. No se activa con este chip.
  - **Tabla `ufs_fixups` de Xiaomi:** idéntica a la del GKI (Micron, Samsung, SK hynix, Toshiba). Ninguna entrada para YMTC.
  - Topaz y creek (bengal 5.15) no publican el `mi_ufs`; solo socrates y sky lo tienen.
- **Solución** (`patches/msm-kernel/0017`): el `ufs_qcom` de CLO `r1-22800` sobre el núcleo UFS del GKI, más solo lo que usa `mi_memory`:
  - `ufs_stats` en el desplazamiento 0x6c, como en stock;
  - `get_ufs_data()` con el CRC de stock `0xd45d0297`.
- **Resultado:** arranca desde UFS, el almacenamiento y las fotos funcionan (confirmado por el usuario), y `/proc/modules` muestra que `ufs_qcom` ya no depende de `miev`, es decir, que es el nuestro.

**Solo la cámara sigue de stock.**
