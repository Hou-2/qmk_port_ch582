/*
Copyright 2022 Huckies <https://github.com/Huckies>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0B95
#define DEVICE_VER   0x0001
#define MANUFACTURER HASAKI    
#define PRODUCT     THINKpadX61

#define MATRIX_ROWS 8
#define MATRIX_COLS 16
#define MATRIX_ROW_PINS      \
    {                        \
       A15,A3,A2,A1,A0,A6,A5,A4, \
    }
#define MATRIX_COL_PINS \
    {                   \
        A8,A9,B9,B8,B17,B16,B18,B19,B20,B21,B7,B6,B5,B4,B3,B2,B1,  \
    }
// #define DYNAMIC_KEYMAP_LAYER_COUNT 10

#define DIODE_DIRECTION  COL2ROW
#define BOOTMAGIC_ROW    0
#define BOOTMAGIC_COLUMN 0
// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE



#endif
