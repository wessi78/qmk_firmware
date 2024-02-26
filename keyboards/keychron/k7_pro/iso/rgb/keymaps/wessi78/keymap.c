/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
  MAC_BASE,
  WIN_BASE,
  MAC_FN1,
  WIN_FN1,
  FN2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_69_iso(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_DEL,
        KC_TAB,   KC_Q,     LT(0,KC_W),     LT(0,KC_E),     LT(0,KC_R),     KC_T,     LT(0,KC_Y),     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                      KC_HOME,
        KC_CAPS,  LT(0,KC_A),     KC_S,     KC_D,     LT(0,KC_F),     KC_G,     LT(0,KC_H),     KC_J,     KC_K,     LT(0,KC_L),     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,             KC_PGUP,
        KC_LSFT,  KC_NUBS,  KC_Z,     LT(0,KC_X),     LT(0,KC_C),     LT(0,KC_V),     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LOPT, KC_LCMD,                                 KC_SPC,                                 KC_ROPT, MO(MAC_FN1),MO(FN2), KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_BASE] = LAYOUT_69_iso(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                      KC_HOME,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,             KC_PGUP,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN1),MO(FN2), KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN1] = LAYOUT_69_iso(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_FN1] = LAYOUT_69_iso(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN2] = LAYOUT_69_iso(
        KC_TILD,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),
};

//Overwrite KeyCode on Hold function
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_X):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_X)); // Intercept hold function to send CMD-X
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_C):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_C)); // Intercept hold function to send CMD-C
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_V):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_V)); // Intercept hold function to send CMD-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_A):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_A)); // Intercept hold function to send CMD-A
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_W):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_W)); // Intercept hold function to send CMD-W
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_E):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LOPT(KC_E)); // Intercept hold function to send OPT-E
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_R):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_R)); // Intercept hold function to send CMD-R
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_F):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_F)); // Intercept hold function to send CMD-F
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_Z):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_Z)); // Intercept hold function to send CMD-Z
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_H):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LCMD(KC_H)); // Intercept hold function to send CMD-H
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_L):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LOPT(KC_L)); // Intercept hold function to send OPT-L
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
    }
    return true;
}

