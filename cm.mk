# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_tablet_wifionly.mk)

# Inherit device configuration for Fire Phone
$(call inherit-product, device/amazon/tank/full_tank.mk)

TARGET_SCREEN_WIDTH := 600
TARGET_SCREEN_HEIGHT := 1024

PRODUCT_NAME := cm_tank
PRODUCT_RELEASE_NAME := tank
