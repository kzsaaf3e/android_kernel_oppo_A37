 /*
 * Copyright (c) Nexuschips Co., Ltd.
 */


#ifndef __NXU8010_KERNEL_H__
#define __NXU8010_KERNEL_H__

static const unsigned char NXU8010_RGBW_INIT_DATA[] = {
0x01, 0x08,
0x00, 0x02,
0x02, 0x00,
0x03, 0x70,
0x04, 0x28,
0x05, 0x00,
0x06, 0x40,
0x07, 0x0A,
0x30, 0x0C,
0x31, 0x00,
0x32, 0x00,
0x33, 0x00,
0x08, 0x08,
0x09, 0x18,
0x0A, 0x00,
0x0B, 0x00,
0x0C, 0x00,
0x0D, 0x00,
0x0E, 0x08,
0x0F, 0x18,
0x10, 0x00,
0x11, 0x00,
0x12, 0x00,
0x13, 0x00,
0x14, 0x08,
0x15, 0x18,
0x16, 0x00,
0x17, 0x00,
0x18, 0x00,
0x19, 0x00,
0x1A, 0x08,
0x1B, 0x18,
0x1C, 0x00,
0x1D, 0x00,
0x1E, 0x00,
0x1F, 0x00,
0x35, 0x15,
0x50, 0x01,
0x51, 0x23,
0x52, 0x45,
0x53, 0x67,
0x54, 0x89,
0x55, 0xAB,
0x56, 0xCD,
0x57, 0xEF,
0x41, 0x00,
0x40, 0x01,

0x01, 0x04, // reset
0x34, 0x00, // gain control begin
0x00, 0x22,
0x00, 0x02,
0x07, 0x0A,
0x08, 0x08,
0x0E, 0x08,
0x14, 0x08,
0x1A, 0x08, // gain control end

0x34, 0x03
};

#endif // __SMARTCAM_KERNEL_H__