#ifdef TW_AMONET

#include <unistd.h>

const char *amonet_boot_part = "/dev/block/platform/mtk-msdc.0/by-name/boot";
const char *amonet_recovery_part = "/dev/block/platform/mtk-msdc.0/by-name/recovery";

uint8_t microloader_bin[1024] = {
  0x41, 0x4e, 0x44, 0x52, 0x4f, 0x49, 0x44, 0x21, 0x00, 0x10, 0x00, 0x00,
  0xf0, 0x7f, 0xe6, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x40, 0x00, 0x00, 0x00, 0x48,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x11, 0x04, 0x0e,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x62, 0x6f, 0x6f, 0x74, 0x6f, 0x70, 0x74, 0x3d,
  0x36, 0x34, 0x53, 0x33, 0x2c, 0x33, 0x32, 0x4e, 0x32, 0x2c, 0x33, 0x32,
  0x4e, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4c, 0x80, 0xe6, 0x81, 0xd4, 0xfb, 0xe3, 0x81,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5c, 0x80, 0xe6, 0x81, 0x00, 0x00, 0x00, 0x00, 0xa4, 0xab, 0xe3, 0x81,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa4, 0xba, 0xe0, 0x81, 0x00, 0x81, 0xe6, 0x81,
  0x00, 0x02, 0x00, 0x00, 0xad, 0xde, 0x00, 0x00, 0x94, 0xab, 0xe3, 0x81,
  0xad, 0xde, 0x00, 0x00, 0xad, 0xde, 0x00, 0x00, 0xad, 0xde, 0x00, 0x00,
  0xad, 0xde, 0x00, 0x00, 0xad, 0xde, 0x00, 0x00, 0xad, 0xde, 0x00, 0x00,
  0x99, 0x1d, 0xe0, 0x81, 0xad, 0xde, 0x00, 0x00, 0x00, 0x81, 0xe6, 0x81,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x81, 0xd4, 0xa0, 0xe3, 0x12, 0x00, 0x00, 0xfa, 0x03, 0x4a, 0x13, 0x68,
  0x9b, 0x06, 0xfc, 0xd5, 0x02, 0x4b, 0x18, 0x60, 0x70, 0x47, 0x00, 0xbf,
  0x14, 0x20, 0x00, 0x11, 0x00, 0x20, 0x00, 0x11, 0x0a, 0x28, 0x01, 0x46,
  0x08, 0xb5, 0x02, 0xd1, 0x0d, 0x20, 0xff, 0xf7, 0xed, 0xff, 0x08, 0x46,
  0xff, 0xf7, 0xea, 0xff, 0x08, 0xbd, 0x38, 0xb5, 0x45, 0x1e, 0x15, 0xf8,
  0x01, 0x4f, 0x24, 0xb9, 0x0a, 0x20, 0xff, 0xf7, 0xed, 0xff, 0x20, 0x46,
  0x38, 0xbd, 0x20, 0x46, 0xff, 0xf7, 0xe8, 0xff, 0xf3, 0xe7, 0x00, 0xbf,
  0x7f, 0xb5, 0x4f, 0xf0, 0x01, 0x44, 0x0e, 0x4e, 0x4f, 0xf4, 0x00, 0x25,
  0x0d, 0x48, 0xff, 0xf7, 0xe8, 0xff, 0x33, 0x68, 0x98, 0x47, 0x01, 0x95,
  0x01, 0x23, 0x02, 0x93, 0x4f, 0xf4, 0x00, 0x22, 0x00, 0x94, 0x00, 0x23,
  0x01, 0x69, 0x88, 0x47, 0x73, 0x68, 0x29, 0x46, 0x20, 0x46, 0x98, 0x47,
  0x05, 0x48, 0xff, 0xf7, 0xd6, 0xff, 0xa0, 0x47, 0x04, 0x48, 0xff, 0xf7,
  0xd2, 0xff, 0xfe, 0xe7, 0xfc, 0x81, 0xe6, 0x81, 0xa4, 0x81, 0xe6, 0x81,
  0xc8, 0x81, 0xe6, 0x81, 0xdc, 0x81, 0xe6, 0x81, 0x6d, 0x69, 0x63, 0x72,
  0x6f, 0x6c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x20, 0x62, 0x79, 0x20, 0x78,
  0x79, 0x7a, 0x2e, 0x20, 0x43, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68,
  0x74, 0x20, 0x32, 0x30, 0x31, 0x39, 0x2e, 0x00, 0x4a, 0x75, 0x6d, 0x70,
  0x20, 0x74, 0x6f, 0x20, 0x74, 0x68, 0x65, 0x20, 0x70, 0x61, 0x79, 0x6c,
  0x6f, 0x61, 0x64, 0x00, 0x53, 0x6f, 0x6d, 0x65, 0x74, 0x68, 0x69, 0x6e,
  0x67, 0x20, 0x77, 0x65, 0x6e, 0x74, 0x20, 0x68, 0x6f, 0x72, 0x72, 0x69,
  0x62, 0x6c, 0x79, 0x20, 0x77, 0x72, 0x6f, 0x6e, 0x67, 0x21, 0x00, 0x00,
  0xf5, 0x42, 0xe3, 0x81, 0x94, 0xab, 0xe3, 0x81, 0xdc, 0x93, 0xe6, 0x81,
  0xe9, 0x04, 0xe4, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};

#endif
