# Needed to tell Yocto to search inside this path
FILESEXTRAPATHS:prepend := "${THISDIR}:${THISDIR}/files:"

ARCH_KERNEL = "stm32mp1"

SRC_URI += " \
    file://${ARCH_KERNEL}/0001-add-i2c5-userspace-dts.patch \
    file://${ARCH_KERNEL}/0001-v6.1-stm32mp-r1-CONFIG.patch \
    file://${ARCH_KERNEL}/0002-original-patch-0001-add-i2c5-userspace-dts.patch \
    "
# SRC_URI[md5sum] = "d061eb1337c518a8c3a42043cb4489d6"

# Apply default configuration
# KERNEL_CONFIG_FRAGMENTS:append = "defconfig"
