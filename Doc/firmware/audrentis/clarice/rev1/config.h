/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_COL_PINS { B2, B1, B0, A7, A6, A5, A4, B11, B8, B7, B6, B5, B4, B3, C14, A15 }
#define MATRIX_ROW_PINS { A10, B10, B9, A3, A2 }
#define UNUSED_PINS

#define BACKLIGHT_PIN A9
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_ON_STATE 1
#define BACKLIGHT_PWM_DRIVER PWMD1
#define BACKLIGHT_PWM_CHANNEL 2
