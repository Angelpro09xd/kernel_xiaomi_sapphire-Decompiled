#!/bin/bash
# SPDX-License-Identifier: GPL-2.0-only
#
# FirstKernel: build the GKI kernel Image (boot.img kernel) from Google's ACK
# at the exact tag of the stock sapphire HyperOS kernel, with the stock GKI
# config, the stock exported-symbol list and our name.
#
#   CLANG_DIR=/path/to/clang-r450784e build/build_gki.sh
#   -> out-gki/arch/arm64/boot/Image  (5.15.194-android13-8-FirstKernel)
#
# The result exports exactly the 8575 stock GKI symbols with identical CRCs,
# so the vendor modules of this tree (and the stock ones) load on it.
# Full LTO needs a lot of RAM for the final link (>20 GB); use JOBS/a big box,
# or LTO=thin (same ABI/CRCs, different code generation).
set -e
ROOT=$(cd "$(dirname "$0")/.." && pwd)
: "${CLANG_DIR:?set CLANG_DIR to AOSP clang-r450784e, the compiler of the stock kernel}"
TAG=${TAG:-android13-5.15-2025-12_r9}   # stock: 5.15.194-android13-8-00019-gf4321180a397
NAME=${NAME:--android13-8-FirstKernel}
ACK=${ACK:-$ROOT/kernel_platform/common}
O=${OUT_GKI:-$ROOT/out-gki}
export PATH=$CLANG_DIR/bin:$PATH

if [ ! -d "$ACK/.git" ] && [ ! -f "$ACK/Makefile" ]; then
	git clone --depth 1 --branch "$TAG" https://android.googlesource.com/kernel/common "$ACK"
fi
mkdir -p "$O"
cp "$ROOT/build/stock_defconfig" "$O/.config"
# export only the stock GKI symbols (CONFIG_UNUSED_KSYMS_WHITELIST)
awk '{print $2}' "$ROOT/kernel_platform/gki-stock/vmlinux.symvers" | sort -u > "$O/abi_symbollist.raw"
sed -i "s#^CONFIG_UNUSED_KSYMS_WHITELIST=.*#CONFIG_UNUSED_KSYMS_WHITELIST=\"$O/abi_symbollist.raw\"#" "$O/.config"
if [ "${LTO:-full}" = thin ]; then
	"$ACK/scripts/config" --file "$O/.config" -d LTO_CLANG_FULL -e LTO_CLANG_THIN
fi
# kernel release name: 5.15.194 + $NAME (no -g<sha> suffix)
printf -- "%s" "$NAME" > "$ACK/.scmversion"
trap 'rm -f "$ACK/.scmversion"' EXIT
M="make -C $ACK O=$O ARCH=arm64 LLVM=1 LLVM_IAS=1 CROSS_COMPILE=aarch64-linux-gnu- -j${JOBS:-$(nproc)}"
$M olddefconfig
echo ">> kernelrelease: $($M -s kernelrelease)"
$M Image vmlinux
# sanity: exported symbols and CRCs must equal the stock GKI
"$CLANG_DIR/bin/llvm-nm" "$O/vmlinux" | awk '$3 ~ /^__crc_/ {sub("__crc_","",$3); print $3, "0x"$1}' | sort > "$O/crcs.txt"
awk '{print $2, $1}' "$ROOT/kernel_platform/gki-stock/vmlinux.symvers" | sort > "$O/stock_crcs.txt"
bad=$(join "$O/crcs.txt" "$O/stock_crcs.txt" | awk '{a=strtonum($2); b=strtonum($3); if (a!=b) n++} END {print n+0}')
miss=$(join -v2 "$O/crcs.txt" "$O/stock_crcs.txt" | wc -l)
echo ">> CRC check vs stock: $bad different, $miss missing"
ls -la "$O/arch/arm64/boot/Image"
