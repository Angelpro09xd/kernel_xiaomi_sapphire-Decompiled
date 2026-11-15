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

Lista exacta de módulos probados y árbol compilable: rama [`FirstPlace`](../../../tree/FirstPlace).
