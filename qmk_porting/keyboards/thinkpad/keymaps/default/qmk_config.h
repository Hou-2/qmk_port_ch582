#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0B96
#define DEVICE_VER   0x0001
#define HOWTOTHINKKEYV01
#define PRODUCT      HTTK

#define MATRIX_ROWS 8
#define MATRIX_COLS 16
#define MATRIX_ROW_PINS            \
    {                              \
        B18 , B19 ,B20 ,B21 ,B4, B5, B6 , B7 , \
    } 
#define MATRIX_COL_PINS                                                \
    {                                                                  \
        B16 ,B17 ,B8 ,B9 ,A9 , A8 ,A7 ,A4 ,A5 ,A6 , A0 ,A1 ,A2 ,A3 ,A15 , A12\
    }
#define DIODE_DIRECTION  COL2ROW
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE
/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT