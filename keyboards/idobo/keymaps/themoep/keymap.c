/* Copyright 2018 xAceOfSpaidsx
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
#include QMK_KEYBOARD_H

// Layer shorthand
#define _QW 0
#define _NM 1
#define _FN 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_QW] = LAYOUT_ortho_5x15(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_INS,  KC_HOME, KC_PGUP, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,   
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_DEL,  KC_END,  KC_PGDN, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,   
    KC_GRV,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,   KC_UP,   KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,    
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LEFT, KC_DOWN, KC_RGHT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,   
    KC_LCTL, MO(_FN), KC_LGUI, KC_LALT, MO(_NM), KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  MO(_FN), KC_RALT, KC_RGUI, KC_NO,   KC_RCTL   
    ),

	[_NM] = LAYOUT_ortho_5x15(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS, KC_TRNS, KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS, KC_TRNS, KC_TRNS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,   
    KC_CAPS, KC_TRNS, KC_INS,  KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_HOME, KC_PGUP, KC_LBRC, KC_RBRC, KC_EQL,
    KC_TRNS, KC_TRNS, KC_DEL,  KC_END,  KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,  KC_END,  KC_PGDN, KC_QUOT, KC_BSLS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

	[_FN] = LAYOUT_ortho_5x15(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS, RESET,   KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS, KC_TRNS, KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
    KC_TRNS, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_TRNS, KC_VOLU, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )

};
