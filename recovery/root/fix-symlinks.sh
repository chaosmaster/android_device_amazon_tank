#!/sbin/sh

REAL_UBOOT=`readlink -f /dev/block/platform/mtk-msdc.0/by-name/UBOOT`
REAL_TEE1=`readlink -f /dev/block/platform/mtk-msdc.0/by-name/TEE1`
REAL_TEE2=`readlink -f /dev/block/platform/mtk-msdc.0/by-name/TEE2`

rm /dev/block/platform/mtk-msdc.0/by-name/UBOOT
rm /dev/block/platform/mtk-msdc.0/by-name/TEE1
rm /dev/block/platform/mtk-msdc.0/by-name/TEE2

ln -s $REAL_UBOOT /dev/block/platform/mtk-msdc.0/by-name/UBOOT_real
ln -s $REAL_TEE1 /dev/block/platform/mtk-msdc.0/by-name/TEE1_real
ln -s $REAL_TEE2 /dev/block/platform/mtk-msdc.0/by-name/TEE2_real

ln -s /dev/null /dev/block/platform/mtk-msdc.0/by-name/UBOOT
ln -s /dev/null /dev/block/platform/mtk-msdc.0/by-name/TEE1
ln -s /dev/null /dev/block/platform/mtk-msdc.0/by-name/TEE2
