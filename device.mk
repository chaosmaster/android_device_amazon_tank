$(call inherit-product, build/target/product/full_base_telephony.mk)

LOCAL_PATH := device/amazon/tank

ifeq ($(TARGET_PREBUILT_KERNEL),)
	LOCAL_KERNEL := $(LOCAL_PATH)/kernel
else
	LOCAL_KERNEL := $(TARGET_PREBUILT_KERNEL)
endif

DEVICE_FOLDER := device/amazon/tank

PRODUCT_COPY_FILES += \
	$(LOCAL_KERNEL):kernel
