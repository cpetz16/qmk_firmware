/*
* @Author: cpetz16
* @Date:   2019-07-19
* @Last Modified by:   cpetz16
* @Last Modified time: 2019-07-19
*/

#include QMK_KEYBOARD_H

//TASK chains the keypresses needed to open task manager into a single key press
//#define TASK (LCTL(LALT(KC_DEL)))
#define _____ KC_TRNS

enum layers {
    _BL = 0, //Base Layer
    _FL     //Function Layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BL] = LAYOUT_directional(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_BSPC,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
      KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_PSCR, MO(1), KC_LEFT, KC_DOWN, KC_RIGHT
      ),

  [_FL] = LAYOUT_directional(
      KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _____, _____,
      _____, KC_MPRV, KC_MNXT, _____, RGB_TOG, RGB_MOD, RGB_RMOD, _____, _____, BL_TOGG, BL_INC, BL_DEC, _____, _____,
      _____, KC_VOLU, _____, _____, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _____, _____, _____, _____, _____,
      _____, KC_VOLD, _____, _____, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD, _____, _____, _____, _____, KC_PGUP, _____,
      RESET, _____, KC_MUTE, KC_MPLY, KC_MPLY, KC_MPLY, KC_MYCM, KC_TRNS, _____, KC_PGDN, _____
      )
};

/* function that can be used to set solid underglow color
 * this example changes all underglow lights to yellow
 * the list of colors can be found in qmk_firmware/quantum/rgblight_list.h
void matrix_init_user(void) {
    rgblight_sethsv_noeeprom_yellow();
  }
*/