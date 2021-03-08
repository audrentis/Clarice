/*
Copyright 2020 Bryan Ong

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED //fix later 
#define PRODUCT_ID      0xFEED //fix later
#define DEVICE_VER      0x0001 
#define MANUFACTURER    Audrentis
#define PRODUCT         Clarice

/*Bootmagic boot button, set to topmost, leftmost key */
#define BOOTMAGIC_LITE_ROW	2
#define BOOTMAGIC_LITE_COLUMN	0

/* encoder */
/* #define NUMBER_OF_ENCODERS 1 */
#define ENCODERS_PAD_A { A8 }
#define ENCODERS_PAD_B { A9 }
#define ENCODER_RESOLUTION 1

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_COL_PINS { B2, B1, B0, A7, A6, A5, A4, B11, B8, B7, B6, B5, B4, B3, C14, A15 }
#define MATRIX_ROW_PINS { A10, B10, B9, A3, A2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


#define BACKLIGHT_PIN B12
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_ON_STATE 1
#define BACKLIGHT_PWM_DRIVER 
#define BACKLIGHT_PWM_CHANNEL 

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
