# Inherit from those products. Most specific first.
$(call inherit-product, device/amazon/tank/device.mk)

$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

PRODUCT_CHARACTERISTICS := tablet

PRODUCT_NAME := full_tank
PRODUCT_DEVICE := tank
PRODUCT_BRAND := Fire
PRODUCT_MODEL := Fire
PRODUCT_MANUFACTURER := Amazon
