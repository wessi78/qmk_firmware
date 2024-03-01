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

#include "rgb_matrix.h"
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
        case LT(0,KC_Y):
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

//RGB Matrix Definition for each Layer
/*layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case MAC_BASE:
        //rgb_matrix_set_color_all(0, 0, 255); //blue
        rgb_matrix_reload_from_eeprom();
        break;
    case WIN_BASE:
        //rgb_matrix_set_color_all(255, 0, 0);//red
        rgb_matrix_reload_from_eeprom();
        break;
    case MAC_FN1:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
        rgb_matrix_set_color_all(255, 255, 0); //yellow
        break;
    case WIN_FN1:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
        rgb_matrix_set_color_all(255, 165, 0); //orange
        break;
    case FN2:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
        rgb_matrix_set_color_all(0, 255, 0); //green
        break;
    default: //  for any other layers, or the default layer
        //rgb_matrix_set_color_all(255, 255, 255); //white
        rgb_matrix_reload_from_eeprom();
        break;
    }
  return state;
}*/

//RGB Control based on the method Moonlander is handling this
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = {{32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {202,218,204}, {202,218,204}, {202,218,204}, {202,218,204}, {202,218,204}, {202,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {202,218,204}, {202,218,204}, {202,218,204}, {202,218,204}, {202,218,204}, {202,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = {{32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {32,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  /*if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }*/
  switch (biton32(layer_state)) {
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}
