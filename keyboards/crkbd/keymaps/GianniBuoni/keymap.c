/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
    XXXXXXX,  KC_Q,          KC_W,         KC_F,         KC_P,          KC_B,    KC_J,    KC_L,          KC_U,          KC_Y,          KC_SCLN,       XXXXXXX,
    XXXXXXX,  LGUI_T(KC_A),  LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T),  KC_G,    KC_M,    RSFT_T(KC_N),  RCTL_T(KC_E),  RALT_T(KC_I),  RGUI_T(KC_O),  XXXXXXX,
    XXXXXXX,  KC_X,          KC_C,         KC_D,         KC_V,          KC_Z,    KC_K,    KC_H,          KC_COMM,       KC_SLSH,       KC_DOT,        XXXXXXX,
                                           KC_ESC,       KC_TAB,        KC_SPC,  KC_ENT,  KC_BSPC,       OSL(1)
  ),

    [1] = LAYOUT_split_3x6_3(
    XXXXXXX,  KC_PAST,  KC_HASH,  KC_PERC,  KC_DQUO,  KC_AT,    KC_LT,    KC_QUOT,  KC_GRV,   KC_GT,    KC_TRNS,  XXXXXXX,
    XXXXXXX,  KC_CIRC,  KC_PMNS,  KC_PPLS,  KC_DLR,   KC_PEQL,  KC_LPRN,  KC_LCBR,  KC_RCBR,  KC_RPRN,  TO(3),    XXXXXXX,
    XXXXXXX,  KC_TILD,  KC_UNDS,  KC_BSLS,  KC_BSLS,  KC_AMPR,  KC_LBRC,  KC_RBRC,  KC_QUES,  KC_PIPE,  KC_EXLM,  XXXXXXX,
                                  TO(0),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TO(2)
  ),

    [2] = LAYOUT_split_3x6_3(
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_1,    KC_2,  KC_3,  KC_TRNS,  XXXXXXX,
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_4,    KC_5,  KC_6,  KC_TRNS,  XXXXXXX,
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_0,     KC_7,    KC_8,  KC_9,  KC_DOT,   XXXXXXX,
                                  TO(0),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, OSL(1)
  ),

    [3] = LAYOUT_split_3x6_3(
    XXXXXXX,  KC_Q,  KC_W,  KC_E,     KC_J,     KC_ESC,   KC_DOWN,  KC_RGHT,        KC_TRNS,        KC_TRNS,         KC_TRNS,         XXXXXXX,
    XXXXXXX,  KC_A,  KC_S,  KC_D,     KC_I,     KC_TAB,   KC_F2,    RSFT_T(KC_F4),  RCTL_T(KC_F5),  RALT_T(KC_F11),  RGUI_T(KC_F12),  XXXXXXX,
    XXXXXXX,  KC_Z,  KC_X,  KC_C,     KC_M,     KC_LALT,  KC_UP,    KC_LEFT,        KC_TRNS,        KC_TRNS,         KC_TRNS,         XXXXXXX,
                            TO(0),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        OSL(1)
  )
};
