$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base_telephony.mk)

# Inherit from hardware-specific part of the product configuration
$(call inherit-product, device/amazon/tank/device.mk)

PRODUCT_NAME := omni_tank
PRODUCT_DEVICE := tank
PRODUCT_BRAND := Fire
PRODUCT_MANUFACTURER := Amazon
PRODUCT_RELEASE_NAME := tank
