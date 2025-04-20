
#ifndef __GPIO_H
#define __GPIO_H

#include <stdint.h>

// TODO: implement remaining registers

/* bitfield definitions */
typedef struct {
    uint32_t reserved8_0   : 9; //   [8..0] RESERVED - DO NOT WRITE
    uint32_t OUT_PAD       : 1; //      [9] output signal to pad after register override
    uint32_t reserved12_10 : 3; // [12..10] RESERVED - DO NOT WRITE
    uint32_t OE_PAD        : 1; //     [13] output enable to pad after register override
    uint32_t reserved16_14 : 3; // [16..14] RESERVED - DO NOT WRITE
    uint32_t IN_PAD        : 1; //     [17] input signal from pad before filtering and override
    uint32_t reserved25_18 : 8; // [25..18] RESERVED - DO NOT WRITE
    uint32_t IRQ_PROC      : 1; //     [26] interrupt to processors after override
    uint32_t reserved31_27 : 5; // [31..27] RESERVED - DO NOT WRITE
} GPIOx_STATUS_Bitfield_t;

typedef struct {
    uint32_t FUNCSEL       :  5; //   [4..0] select pin function (see table)
    uint32_t reserved11_5  :  7; //  [11..5] RESERVED - DO NOT WRITE
    uint32_t OUTOVER       :  2; // [13..12] select output mode
    uint32_t OEOVER        :  2; // [15..14] select output enable mode
    uint32_t INOVER        :  2; // [17..16] select input mode
    uint32_t reserved27_18 : 10; // [27..18] RESERVED - DO NOT WRITE
    uint32_t IRQOVER       :  2; // [29..28] select interrupt mode
    uint32_t reserved31_30 :  2; // [31..30] RESERVED - DO NOT WRITE
} GPIOx_CONTROL_Bitfield_t;


/* union definitions */
typedef union {
    uint32_t reg;
    GPIOx_STATUS_Bitfield_t bit;
} GPIOx_STATUS_Register_t;

typedef union {
    uint32_t reg;
    GPIOx_CONTROL_Bitfield_t bit;
} GPIOx_CONTROL_Register_t;


/* register definitions */
typedef struct {
    GPIOx_STATUS_Register_t  GPIO0_STATUS;       // 0x000 - gpio0 status register
    GPIOx_CONTROL_Register_t GPIO0_CONTROL;      // 0x004 - gpio0 control register
    GPIOx_STATUS_Register_t  GPIO1_STATUS;       // 0x008 - gpio1 status register
    GPIOx_CONTROL_Register_t GPIO1_CONTROL;      // 0x00C - gpio1 control register
    GPIOx_STATUS_Register_t  GPIO2_STATUS;       // 0x010 - gpio2 status register
    GPIOx_CONTROL_Register_t GPIO2_CONTROL;      // 0x014 - gpio2 control register
    GPIOx_STATUS_Register_t  GPIO3_STATUS;       // 0x018 - gpio3 status register
    GPIOx_CONTROL_Register_t GPIO3_CONTROL;      // 0x01C - gpio3 control register
    GPIOx_STATUS_Register_t  GPIO4_STATUS;       // 0x020 - gpio4 status register
    GPIOx_CONTROL_Register_t GPIO4_CONTROL;      // 0x024 - gpio4 control register
    GPIOx_STATUS_Register_t  GPIO5_STATUS;       // 0x028 - gpio5 status register
    GPIOx_CONTROL_Register_t GPIO5_CONTROL;      // 0x02C - gpio5 control register
    GPIOx_STATUS_Register_t  GPIO6_STATUS;       // 0x030 - gpio6 status register
    GPIOx_CONTROL_Register_t GPIO6_CONTROL;      // 0x034 - gpio6 control register
    GPIOx_STATUS_Register_t  GPIO7_STATUS;       // 0x038 - gpio7 status register
    GPIOx_CONTROL_Register_t GPIO7_CONTROL;      // 0x03C - gpio7 control register
    GPIOx_STATUS_Register_t  GPIO8_STATUS;       // 0x040 - gpio8 status register
    GPIOx_CONTROL_Register_t GPIO8_CONTROL;      // 0x044 - gpio8 control register
    GPIOx_STATUS_Register_t  GPIO9_STATUS;       // 0x048 - gpio9 status register
    GPIOx_CONTROL_Register_t GPIO9_CONTROL;      // 0x04C - gpio9 control register
    GPIOx_STATUS_Register_t  GPIO10_STATUS;      // 0x050 - gpio10 status register
    GPIOx_CONTROL_Register_t GPIO10_CONTROL;     // 0x054 - gpio10 control register
    GPIOx_STATUS_Register_t  GPIO11_STATUS;      // 0x058 - gpio11 status register
    GPIOx_CONTROL_Register_t GPIO11_CONTROL;     // 0x05C - gpio11 control register
    GPIOx_STATUS_Register_t  GPIO12_STATUS;      // 0x060 - gpio12 status register
    GPIOx_CONTROL_Register_t GPIO12_CONTROL;     // 0x064 - gpio12 control register
    GPIOx_STATUS_Register_t  GPIO13_STATUS;      // 0x068 - gpio13 status register
    GPIOx_CONTROL_Register_t GPIO13_CONTROL;     // 0x06C - gpio13 control register
    GPIOx_STATUS_Register_t  GPIO14_STATUS;      // 0x070 - gpio14 status register
    GPIOx_CONTROL_Register_t GPIO14_CONTROL;     // 0x074 - gpio14 control register
    GPIOx_STATUS_Register_t  GPIO15_STATUS;      // 0x078 - gpio15 status register
    GPIOx_CONTROL_Register_t GPIO15_CONTROL;     // 0x07C - gpio15 control register
    GPIOx_STATUS_Register_t  GPIO16_STATUS;      // 0x080 - gpio16 status register
    GPIOx_CONTROL_Register_t GPIO16_CONTROL;     // 0x084 - gpio16 control register
    GPIOx_STATUS_Register_t  GPIO17_STATUS;      // 0x088 - gpio17 status register
    GPIOx_CONTROL_Register_t GPIO17_CONTROL;     // 0x08C - gpio17 control register
    GPIOx_STATUS_Register_t  GPIO18_STATUS;      // 0x090 - gpio18 status register
    GPIOx_CONTROL_Register_t GPIO18_CONTROL;     // 0x094 - gpio18 control register
    GPIOx_STATUS_Register_t  GPIO19_STATUS;      // 0x098 - gpio19 status register
    GPIOx_CONTROL_Register_t GPIO19_CONTROL;     // 0x09C - gpio19 control register
    GPIOx_STATUS_Register_t  GPIO20_STATUS;      // 0x0A0 - gpio20 status register
    GPIOx_CONTROL_Register_t GPIO20_CONTROL;     // 0x0A4 - gpio20 control register
    GPIOx_STATUS_Register_t  GPIO21_STATUS;      // 0x0A8 - gpio21 status register
    GPIOx_CONTROL_Register_t GPIO21_CONTROL;     // 0x0AC - gpio21 control register
    GPIOx_STATUS_Register_t  GPIO22_STATUS;      // 0x0B0 - gpio22 status register
    GPIOx_CONTROL_Register_t GPIO22_CONTROL;     // 0x0B4 - gpio22 control register
    GPIOx_STATUS_Register_t  GPIO23_STATUS;      // 0x0B8 - gpio23 status register
    GPIOx_CONTROL_Register_t GPIO23_CONTROL;     // 0x0BC - gpio23 control register
    GPIOx_STATUS_Register_t  GPIO24_STATUS;      // 0x0C0 - gpio24 status register
    GPIOx_CONTROL_Register_t GPIO24_CONTROL;     // 0x0C4 - gpio24 control register
    GPIOx_STATUS_Register_t  GPIO25_STATUS;      // 0x0C8 - gpio25 status register
    GPIOx_CONTROL_Register_t GPIO25_CONTROL;     // 0x0CC - gpio25 control register
    GPIOx_STATUS_Register_t  GPIO26_STATUS;      // 0x0D0 - gpio26 status register
    GPIOx_CONTROL_Register_t GPIO26_CONTROL;     // 0x0D4 - gpio26 control register
    GPIOx_STATUS_Register_t  GPIO27_STATUS;      // 0x0D8 - gpio27 status register
    GPIOx_CONTROL_Register_t GPIO27_CONTROL;     // 0x0DC - gpio27 control register
    GPIOx_STATUS_Register_t  GPIO28_STATUS;      // 0x0E0 - gpio28 status register
    GPIOx_CONTROL_Register_t GPIO28_CONTROL;     // 0x0E4 - gpio28 control register
    GPIOx_STATUS_Register_t  GPIO29_STATUS;      // 0x0E8 - gpio29 status register
    GPIOx_CONTROL_Register_t GPIO29_CONTROL;     // 0x0EC - gpio29 control register
    uint32_t                 reserved_0x0F0[36]; // 0x0F0..0x17C - RESERVED
} QFN60_GPIO_Registers_t;

typedef struct {
    GPIOx_STATUS_Register_t  GPIO0_STATUS;       // 0x000 - gpio0 status register
    GPIOx_CONTROL_Register_t GPIO0_CONTROL;      // 0x004 - gpio0 control register
    GPIOx_STATUS_Register_t  GPIO1_STATUS;       // 0x008 - gpio1 status register
    GPIOx_CONTROL_Register_t GPIO1_CONTROL;      // 0x00C - gpio1 control register
    GPIOx_STATUS_Register_t  GPIO2_STATUS;       // 0x010 - gpio2 status register
    GPIOx_CONTROL_Register_t GPIO2_CONTROL;      // 0x014 - gpio2 control register
    GPIOx_STATUS_Register_t  GPIO3_STATUS;       // 0x018 - gpio3 status register
    GPIOx_CONTROL_Register_t GPIO3_CONTROL;      // 0x01C - gpio3 control register
    GPIOx_STATUS_Register_t  GPIO4_STATUS;       // 0x020 - gpio4 status register
    GPIOx_CONTROL_Register_t GPIO4_CONTROL;      // 0x024 - gpio4 control register
    GPIOx_STATUS_Register_t  GPIO5_STATUS;       // 0x028 - gpio5 status register
    GPIOx_CONTROL_Register_t GPIO5_CONTROL;      // 0x02C - gpio5 control register
    GPIOx_STATUS_Register_t  GPIO6_STATUS;       // 0x030 - gpio6 status register
    GPIOx_CONTROL_Register_t GPIO6_CONTROL;      // 0x034 - gpio6 control register
    GPIOx_STATUS_Register_t  GPIO7_STATUS;       // 0x038 - gpio7 status register
    GPIOx_CONTROL_Register_t GPIO7_CONTROL;      // 0x03C - gpio7 control register
    GPIOx_STATUS_Register_t  GPIO8_STATUS;       // 0x040 - gpio8 status register
    GPIOx_CONTROL_Register_t GPIO8_CONTROL;      // 0x044 - gpio8 control register
    GPIOx_STATUS_Register_t  GPIO9_STATUS;       // 0x048 - gpio9 status register
    GPIOx_CONTROL_Register_t GPIO9_CONTROL;      // 0x04C - gpio9 control register
    GPIOx_STATUS_Register_t  GPIO10_STATUS;      // 0x050 - gpio10 status register
    GPIOx_CONTROL_Register_t GPIO10_CONTROL;     // 0x054 - gpio10 control register
    GPIOx_STATUS_Register_t  GPIO11_STATUS;      // 0x058 - gpio11 status register
    GPIOx_CONTROL_Register_t GPIO11_CONTROL;     // 0x05C - gpio11 control register
    GPIOx_STATUS_Register_t  GPIO12_STATUS;      // 0x060 - gpio12 status register
    GPIOx_CONTROL_Register_t GPIO12_CONTROL;     // 0x064 - gpio12 control register
    GPIOx_STATUS_Register_t  GPIO13_STATUS;      // 0x068 - gpio13 status register
    GPIOx_CONTROL_Register_t GPIO13_CONTROL;     // 0x06C - gpio13 control register
    GPIOx_STATUS_Register_t  GPIO14_STATUS;      // 0x070 - gpio14 status register
    GPIOx_CONTROL_Register_t GPIO14_CONTROL;     // 0x074 - gpio14 control register
    GPIOx_STATUS_Register_t  GPIO15_STATUS;      // 0x078 - gpio15 status register
    GPIOx_CONTROL_Register_t GPIO15_CONTROL;     // 0x07C - gpio15 control register
    GPIOx_STATUS_Register_t  GPIO16_STATUS;      // 0x080 - gpio16 status register
    GPIOx_CONTROL_Register_t GPIO16_CONTROL;     // 0x084 - gpio16 control register
    GPIOx_STATUS_Register_t  GPIO17_STATUS;      // 0x088 - gpio17 status register
    GPIOx_CONTROL_Register_t GPIO17_CONTROL;     // 0x08C - gpio17 control register
    GPIOx_STATUS_Register_t  GPIO18_STATUS;      // 0x090 - gpio18 status register
    GPIOx_CONTROL_Register_t GPIO18_CONTROL;     // 0x094 - gpio18 control register
    GPIOx_STATUS_Register_t  GPIO19_STATUS;      // 0x098 - gpio19 status register
    GPIOx_CONTROL_Register_t GPIO19_CONTROL;     // 0x09C - gpio19 control register
    GPIOx_STATUS_Register_t  GPIO20_STATUS;      // 0x0A0 - gpio20 status register
    GPIOx_CONTROL_Register_t GPIO20_CONTROL;     // 0x0A4 - gpio20 control register
    GPIOx_STATUS_Register_t  GPIO21_STATUS;      // 0x0A8 - gpio21 status register
    GPIOx_CONTROL_Register_t GPIO21_CONTROL;     // 0x0AC - gpio21 control register
    GPIOx_STATUS_Register_t  GPIO22_STATUS;      // 0x0B0 - gpio22 status register
    GPIOx_CONTROL_Register_t GPIO22_CONTROL;     // 0x0B4 - gpio22 control register
    GPIOx_STATUS_Register_t  GPIO23_STATUS;      // 0x0B8 - gpio23 status register
    GPIOx_CONTROL_Register_t GPIO23_CONTROL;     // 0x0BC - gpio23 control register
    GPIOx_STATUS_Register_t  GPIO24_STATUS;      // 0x0C0 - gpio24 status register
    GPIOx_CONTROL_Register_t GPIO24_CONTROL;     // 0x0C4 - gpio24 control register
    GPIOx_STATUS_Register_t  GPIO25_STATUS;      // 0x0C8 - gpio25 status register
    GPIOx_CONTROL_Register_t GPIO25_CONTROL;     // 0x0CC - gpio25 control register
    GPIOx_STATUS_Register_t  GPIO26_STATUS;      // 0x0D0 - gpio26 status register
    GPIOx_CONTROL_Register_t GPIO26_CONTROL;     // 0x0D4 - gpio26 control register
    GPIOx_STATUS_Register_t  GPIO27_STATUS;      // 0x0D8 - gpio27 status register
    GPIOx_CONTROL_Register_t GPIO27_CONTROL;     // 0x0DC - gpio27 control register
    GPIOx_STATUS_Register_t  GPIO28_STATUS;      // 0x0E0 - gpio28 status register
    GPIOx_CONTROL_Register_t GPIO28_CONTROL;     // 0x0E4 - gpio28 control register
    GPIOx_STATUS_Register_t  GPIO29_STATUS;      // 0x0E8 - gpio29 status register
    GPIOx_CONTROL_Register_t GPIO29_CONTROL;     // 0x0EC - gpio29 control register
    GPIOx_STATUS_Register_t  GPIO30_STATUS;      // 0x0F0 - gpio30 status register
    GPIOx_CONTROL_Register_t GPIO30_CONTROL;     // 0x0F4 - gpio30 control register
    GPIOx_STATUS_Register_t  GPIO31_STATUS;      // 0x0F8 - gpio31 status register
    GPIOx_CONTROL_Register_t GPIO31_CONTROL;     // 0x0FC - gpio31 control register
    GPIOx_STATUS_Register_t  GPIO32_STATUS;      // 0x100 - gpio32 status register
    GPIOx_CONTROL_Register_t GPIO32_CONTROL;     // 0x104 - gpio32 control register
    GPIOx_STATUS_Register_t  GPIO33_STATUS;      // 0x108 - gpio33 status register
    GPIOx_CONTROL_Register_t GPIO33_CONTROL;     // 0x10C - gpio33 control register
    GPIOx_STATUS_Register_t  GPIO34_STATUS;      // 0x110 - gpio34 status register
    GPIOx_CONTROL_Register_t GPIO34_CONTROL;     // 0x114 - gpio34 control register
    GPIOx_STATUS_Register_t  GPIO35_STATUS;      // 0x118 - gpio35 status register
    GPIOx_CONTROL_Register_t GPIO35_CONTROL;     // 0x11C - gpio35 control register
    GPIOx_STATUS_Register_t  GPIO36_STATUS;      // 0x120 - gpio36 status register
    GPIOx_CONTROL_Register_t GPIO36_CONTROL;     // 0x124 - gpio36 control register
    GPIOx_STATUS_Register_t  GPIO37_STATUS;      // 0x128 - gpio37 status register
    GPIOx_CONTROL_Register_t GPIO37_CONTROL;     // 0x12C - gpio37 control register
    GPIOx_STATUS_Register_t  GPIO38_STATUS;      // 0x130 - gpio38 status register
    GPIOx_CONTROL_Register_t GPIO38_CONTROL;     // 0x134 - gpio38 control register
    GPIOx_STATUS_Register_t  GPIO39_STATUS;      // 0x138 - gpio39 status register
    GPIOx_CONTROL_Register_t GPIO39_CONTROL;     // 0x13C - gpio39 control register
    GPIOx_STATUS_Register_t  GPIO40_STATUS;      // 0x140 - gpio40 status register
    GPIOx_CONTROL_Register_t GPIO40_CONTROL;     // 0x144 - gpio40 control register
    GPIOx_STATUS_Register_t  GPIO41_STATUS;      // 0x148 - gpio41 status register
    GPIOx_CONTROL_Register_t GPIO41_CONTROL;     // 0x14C - gpio41 control register
    GPIOx_STATUS_Register_t  GPIO42_STATUS;      // 0x150 - gpio42 status register
    GPIOx_CONTROL_Register_t GPIO42_CONTROL;     // 0x154 - gpio42 control register
    GPIOx_STATUS_Register_t  GPIO43_STATUS;      // 0x158 - gpio43 status register
    GPIOx_CONTROL_Register_t GPIO43_CONTROL;     // 0x15C - gpio43 control register
    GPIOx_STATUS_Register_t  GPIO44_STATUS;      // 0x160 - gpio44 status register
    GPIOx_CONTROL_Register_t GPIO44_CONTROL;     // 0x164 - gpio44 control register
    GPIOx_STATUS_Register_t  GPIO45_STATUS;      // 0x168 - gpio45 status register
    GPIOx_CONTROL_Register_t GPIO45_CONTROL;     // 0x16C - gpio45 control register
    GPIOx_STATUS_Register_t  GPIO46_STATUS;      // 0x170 - gpio46 status register
    GPIOx_CONTROL_Register_t GPIO46_CONTROL;     // 0x174 - gpio46 control register
    GPIOx_STATUS_Register_t  GPIO47_STATUS;      // 0x178 - gpio47 status register
    GPIOx_CONTROL_Register_t GPIO47_CONTROL;     // 0x17C - gpio47 control register
} QFN80_GPIO_Registers_t;


/* peripheral definitions */
#if (QFN60 == RP2350_PACKAGE)
    #define GPIO ((QFN60_GPIO_Registers_t*) 0x40028000)
#elif (QFN80 == RP2350_PACKAGE)
    #define GPIO ((QFN80_GPIO_Registers_t*) 0x40028000)
#endif

#endif

