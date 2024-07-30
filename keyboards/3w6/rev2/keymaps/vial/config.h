/*
Copyright 2021 weteor

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


/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 10

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

#define VIAL_KEYBOARD_UID {0xDD, 0x78, 0xF2, 0x56, 0x7F, 0x59, 0xF8, 0x6E}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 }
/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


#ifndef DYNAMIC_MACRO_COUNT
#define DYNAMIC_MACRO_COUNT 8
#endif
#define DYNAMIC_KEYMAP_MACRO_COUNT 8
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 8
#define VIAL_TAP_DANCE_ENTRIES 8
#define LAYER_STATE_8BIT
