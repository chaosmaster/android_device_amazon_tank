EXTRA_CFLAGS += -mfpu=neon
EXTRA_CFLAGS += -D__KERNEL__ -DKERNEL -DCONFIG_KEXEC -march=armv7-a -mtune=cortex-a9

ARCH		= arm
KERNEL ?= /mnt/mnt/kernel-build
CONFIG = ford_cyanogenmod_defconfig
CROSS_COMPILE ?= /home/chaosmaster/omni/prebuilts/gcc/linux-x86/arm/arm-linux-androideabi-4.9/bin/arm-linux-androideabi-
CROSS_COMPILE ?= device/amazon/ford/modules/selinux_permissive/Makefile:CROSS_COMPILE
MDIR ?= $(PWD)

CPPFLAGS	=  -I$(KERNEL)/

obj-m += selinux_permissive.o
selinux_permissive-objs := selinux-permissive.o

all: module push

module:
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERNEL)/ M=$(MDIR) modules

clean:
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERNEL)/ M=$(MDIR) clean
	rm -f *.order

prepare:
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERNEL)/ $(CONFIG)
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERNEL)/ modules_prepare

kernel_clean:
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERNEL)/ mrproper
	ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) make -C $(KERNEL)/ clean

push:
	adb push selinux_permissive.ko /mnt/sdcard/
