
#ifndef __SIO_H
#define __SIO_H

#include <stdint.h>

// SIO low register definition for QFN60 (30 GPIOs)
typedef struct {
    uint32_t GPIO_0        : 1; //      [0] GPIO 0
    uint32_t GPIO_1        : 1; //      [1] GPIO 1
    uint32_t GPIO_2        : 1; //      [2] GPIO 2
    uint32_t GPIO_3        : 1; //      [3] GPIO 3
    uint32_t GPIO_4        : 1; //      [4] GPIO 4
    uint32_t GPIO_5        : 1; //      [5] GPIO 5
    uint32_t GPIO_6        : 1; //      [6] GPIO 6
    uint32_t GPIO_7        : 1; //      [7] GPIO 7
    uint32_t GPIO_8        : 1; //      [8] GPIO 8
    uint32_t GPIO_9        : 1; //      [9] GPIO 9
    uint32_t GPIO_10       : 1; //     [10] GPIO 10
    uint32_t GPIO_11       : 1; //     [11] GPIO 11
    uint32_t GPIO_12       : 1; //     [12] GPIO 12
    uint32_t GPIO_13       : 1; //     [13] GPIO 13
    uint32_t GPIO_14       : 1; //     [14] GPIO 14
    uint32_t GPIO_15       : 1; //     [15] GPIO 15
    uint32_t GPIO_16       : 1; //     [16] GPIO 16
    uint32_t GPIO_17       : 1; //     [17] GPIO 17
    uint32_t GPIO_18       : 1; //     [18] GPIO 18
    uint32_t GPIO_19       : 1; //     [19] GPIO 19
    uint32_t GPIO_20       : 1; //     [20] GPIO 20
    uint32_t GPIO_21       : 1; //     [21] GPIO 21
    uint32_t GPIO_22       : 1; //     [22] GPIO 22
    uint32_t GPIO_23       : 1; //     [23] GPIO 23
    uint32_t GPIO_24       : 1; //     [24] GPIO 24
    uint32_t GPIO_25       : 1; //     [25] GPIO 25
    uint32_t GPIO_26       : 1; //     [26] GPIO 26
    uint32_t GPIO_27       : 1; //     [27] GPIO 27
    uint32_t GPIO_28       : 1; //     [28] GPIO 28
    uint32_t GPIO_29       : 1; //     [29] GPIO 29
    uint32_t reserved31_30 : 2; // [31..30] RESERVED - DO NOT WRITE
} QFN60_SIO_LOW_Bitfield_t;

// SIO low register definition for QFN80 (48 GPIOs)
typedef struct {
    uint32_t GPIO_0        : 1; //      [0] GPIO 0
    uint32_t GPIO_1        : 1; //      [1] GPIO 1
    uint32_t GPIO_2        : 1; //      [2] GPIO 2
    uint32_t GPIO_3        : 1; //      [3] GPIO 3
    uint32_t GPIO_4        : 1; //      [4] GPIO 4
    uint32_t GPIO_5        : 1; //      [5] GPIO 5
    uint32_t GPIO_6        : 1; //      [6] GPIO 6
    uint32_t GPIO_7        : 1; //      [7] GPIO 7
    uint32_t GPIO_8        : 1; //      [8] GPIO 8
    uint32_t GPIO_9        : 1; //      [9] GPIO 9
    uint32_t GPIO_10       : 1; //     [10] GPIO 10
    uint32_t GPIO_11       : 1; //     [11] GPIO 11
    uint32_t GPIO_12       : 1; //     [12] GPIO 12
    uint32_t GPIO_13       : 1; //     [13] GPIO 13
    uint32_t GPIO_14       : 1; //     [14] GPIO 14
    uint32_t GPIO_15       : 1; //     [15] GPIO 15
    uint32_t GPIO_16       : 1; //     [16] GPIO 16
    uint32_t GPIO_17       : 1; //     [17] GPIO 17
    uint32_t GPIO_18       : 1; //     [18] GPIO 18
    uint32_t GPIO_19       : 1; //     [19] GPIO 19
    uint32_t GPIO_20       : 1; //     [20] GPIO 20
    uint32_t GPIO_21       : 1; //     [21] GPIO 21
    uint32_t GPIO_22       : 1; //     [22] GPIO 22
    uint32_t GPIO_23       : 1; //     [23] GPIO 23
    uint32_t GPIO_24       : 1; //     [24] GPIO 24
    uint32_t GPIO_25       : 1; //     [25] GPIO 25
    uint32_t GPIO_26       : 1; //     [26] GPIO 26
    uint32_t GPIO_27       : 1; //     [27] GPIO 27
    uint32_t GPIO_28       : 1; //     [28] GPIO 28
    uint32_t GPIO_29       : 1; //     [29] GPIO 29
    uint32_t GPIO_30       : 1; //     [30] GPIO 30
    uint32_t GPIO_31       : 1; //     [31] GPIO 31
} QFN80_SIO_LOW_Bitfield_t;

// SIO high register definition for QFN80 (48 GPIOs)
typedef struct {
    uint32_t GPIO_32       : 1; //      [0] GPIO 32
    uint32_t GPIO_33       : 1; //      [1] GPIO 33
    uint32_t GPIO_34       : 1; //      [2] GPIO 34
    uint32_t GPIO_35       : 1; //      [3] GPIO 35
    uint32_t GPIO_36       : 1; //      [4] GPIO 36
    uint32_t GPIO_37       : 1; //      [5] GPIO 37
    uint32_t GPIO_38       : 1; //      [6] GPIO 38
    uint32_t GPIO_39       : 1; //      [7] GPIO 39
    uint32_t GPIO_40       : 1; //      [8] GPIO 40
    uint32_t GPIO_41       : 1; //      [9] GPIO 41
    uint32_t GPIO_42       : 1; //     [10] GPIO 42
    uint32_t GPIO_43       : 1; //     [11] GPIO 43
    uint32_t GPIO_44       : 1; //     [12] GPIO 44
    uint32_t GPIO_45       : 1; //     [13] GPIO 45
    uint32_t GPIO_46       : 1; //     [14] GPIO 46
    uint32_t GPIO_47       : 1; //     [15] GPIO 47
    uint32_t reserved23_16 : 8; // [23..16] RESERVED - DO NOT WRITE
    uint32_t USB_DP        : 1; //     [24] USB_DP
    uint32_t USB_DM        : 1; //     [25] USB_DM
    uint32_t QSPI_SCK      : 1; //     [26] QSPI_SCK
    uint32_t QSPI_CS       : 1; //     [27] QSPI_CS
    uint32_t QSPI_DATA     : 4; // [31..28] QSPI_DATA
} QFN80_SIO_HIGH_Bitfield_t;

typedef union {
    uint32_t reg;
    QFN80_SIO_LOW_Bitfield_t bit;
} QFN60_SIO_LOW_Register_t;

typedef union {
    uint32_t reg;
    QFN80_SIO_LOW_Bitfield_t bit;
} QFN80_SIO_LOW_Register_t;

typedef union {
    uint32_t reg;
    QFN60_SIO_LOW_Bitfield_t bit;
} QFN80_SIO_HIGH_Register_t;

typedef struct {
    volatile uint32_t                 CPUID;          // [0x000] processor core identifier register
    volatile QFN60_SIO_LOW_Register_t IN;             // [0x004] input register
    volatile uint32_t                 reserved_0x008; // [0x008] RESERVED - DO NOT WRITE
    volatile uint32_t                 reserved_0x00C; // [0x00C] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OUT;            // [0x010] output register
    volatile uint32_t                 reserved_0x014; // [0x014] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OUT_SET;        // [0x018] output bit set register
    volatile uint32_t                 reserved_0x01C; // [0x01C] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OUT_CLR;        // [0x020] output bit clear register
    volatile uint32_t                 reserved_0x024; // [0x024] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OUT_XOR;        // [0x028] output bit toggle register
    volatile uint32_t                 reserved_0x02C; // [0x02C] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OE;             // [0x030] output enable register
    volatile uint32_t                 reserved_0x034; // [0x034] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OE_SET;         // [0x038] output enable bit set register
    volatile uint32_t                 reserved_0x03C; // [0x03C] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OE_CLR;         // [0x040] output enable bit clear register
    volatile uint32_t                 reserved_0x044; // [0x044] RESERVED - DO NOT WRITE
    volatile QFN60_SIO_LOW_Register_t OE_XOR;         // [0x048] output enable bit toggle register
    volatile uint32_t                 reserved_0x04C; // [0x04C] RESERVED - DO NOT WRITE
} QFN60_SIO_Registers_t;

typedef struct {
    volatile uint32_t                  CPUID;          // [0x000] processor core identifier register
    volatile QFN80_SIO_LOW_Register_t  IN;             // [0x004] input register
    volatile QFN80_SIO_HIGH_Register_t HI_IN;          // [0x008] high input register
    volatile uint32_t                  reserved_0x00C; // [0x00C] RESERVED - DO NOT WRITE
    volatile QFN80_SIO_LOW_Register_t  OUT;            // [0x010] output register
    volatile QFN80_SIO_HIGH_Register_t HI_OUT;         // [0x014] high output register
    volatile QFN80_SIO_LOW_Register_t  OUT_SET;        // [0x018] output bit set register
    volatile QFN80_SIO_HIGH_Register_t HI_OUT_SET;     // [0x01C] high output bit set register
    volatile QFN80_SIO_LOW_Register_t  OUT_CLR;        // [0x020] output bit clear register
    volatile QFN80_SIO_HIGH_Register_t HI_OUT_CLR;     // [0x024] high output bit clear register
    volatile QFN80_SIO_LOW_Register_t  OUT_XOR;        // [0x028] output bit toggle register
    volatile QFN80_SIO_HIGH_Register_t HI_OUT_XOR;     // [0x02C] high output bit toggle register
    volatile QFN80_SIO_LOW_Register_t  OE;             // [0x030] output enable register
    volatile QFN80_SIO_HIGH_Register_t HI_OE;          // [0x034] high output enable register
    volatile QFN80_SIO_LOW_Register_t  OE_SET;         // [0x038] output enable bit set register
    volatile QFN80_SIO_HIGH_Register_t HI_OE_SET;      // [0x03C] high output enable bit set register
    volatile QFN80_SIO_LOW_Register_t  OE_CLR;         // [0x040] output enable bit clear register
    volatile QFN80_SIO_HIGH_Register_t HI_OE_CLR;      // [0x044] high output enable bit clear register
    volatile QFN80_SIO_LOW_Register_t  OE_XOR;         // [0x048] output enable bit toggle register
    volatile QFN80_SIO_HIGH_Register_t HI_OE_XOR;      // [0x04C] high output enable bit toggle register
} QFN80_SIO_Registers_t;


/* peripheral definitions */
#if (QFN60 == RP2350_PACKAGE)
    #define SIO ((QFN60_SIO_Registers_t*) 0xD0000000)
#elif (QFN80 == RP2350_PACKAGE)
    #define SIO ((QFN80_SIO_Registers_t*) 0xD0000000)
#endif

#endif

