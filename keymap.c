#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0
#define SYMB 1
#define MDIA 2
#define NPAD 3

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE,
  EPRM,
  VRSN,
  RGB_SLD,
  RGB_LYR
};

typedef union {
  uint32_t raw;
  struct {
    bool     rgb_layer_change :1;
  };
} user_config_t;

user_config_t user_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox(
        // left hand
        KC_AUDIO_VOL_DOWN,  KC_1,           KC_2,             KC_3,         KC_4,     KC_5,   LT(NPAD,KC_NO),
        KC_DELT,            KC_Q,           KC_W,             KC_E,         KC_R,     KC_T,   KC_NO,
        LT(SYMB,KC_BSPC),   LT(MDIA, KC_A), KC_S,             KC_D,         KC_F,     KC_G,
        KC_LSFT,            CTL_T(KC_Y),    KC_X,             KC_C,         KC_V,     KC_B,   ALL_T(KC_NO),
        KC_LGUI,            KC_NO,          LGUI(KC_X),       LGUI(KC_C),   LGUI(KC_V),
                                                                                              KC_LALT, KC_LGUI,
                                                                                                       KC_HOME,
                                                                                      KC_SPC, KC_TAB,  KC_END,
        // right hand
             LT(NPAD,KC_NO),  KC_6,   KC_7,  KC_8,   KC_9,   KC_0,             KC_AUDIO_VOL_UP,
             KC_NO,           KC_Z,   KC_U,  KC_I,   KC_O,   KC_P,             KC_NO,
                              KC_H,   KC_J,  KC_K,   KC_L,   LT(MDIA, KC_NO),  LT(SYMB, KC_NO),
             MEH_T(KC_NO),    KC_N,   KC_M,  KC_COMM,KC_DOT, CTL_T(KC_SLSH),   KC_RSFT,
                                        LGUI(KC_Z), KC_UP,KC_DOWN, KC_LEFT, KC_RIGHT,
             KC_RGUI,        KC_RALT,
             KC_NO,
             KC_NO,KC_TAB, KC_ENT
    ),


[SYMB] = LAYOUT_ergodox(
       // left hand
       VRSN,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_NO,
       RESET,  KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,KC_NO,
       KC_NO,KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,
       EPRM,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,KC_NO,
          KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
                                       RGB_MOD,RGB_LYR,
                                               KC_NO,
                               RGB_VAD,RGB_VAI,KC_NO,
       // right hand
       KC_NO, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_NO, KC_UP,   KC_7,   KC_8,    KC_9,    KC_ASTR, KC_F12,
                KC_DOWN, KC_4,   KC_5,    KC_6,    KC_PLUS, KC_NO,
       KC_NO, KC_AMPR, KC_1,   KC_2,    KC_3,    KC_BSLS, KC_NO,
                         KC_NO,KC_DOT,  KC_0,    KC_EQL,  KC_NO,
       RGB_TOG, RGB_SLD,
       KC_NO,
       KC_NO, RGB_HUD, RGB_HUI
),

[MDIA] = LAYOUT_ergodox(
    // left hand
       KC_NO, KC_NO, KC_NO,   KC_NO,    KC_NO,    KC_NO, KC_NO,
       KC_NO, KC_NO, KC_NO,   KC_MS_U,  KC_NO,    KC_NO, KC_NO,
       KC_NO, KC_NO, KC_MS_L, KC_MS_D,  KC_MS_R,  KC_NO,
       KC_NO, KC_NO, KC_NO,   KC_NO,    KC_NO,    KC_NO, KC_NO,
       KC_NO, KC_NO, KC_NO,   KC_BTN1,  KC_BTN2,
                                                  KC_NO,  KC_NO,
                                                          KC_NO,
                                            KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPLY,
       KC_NO,  KC_NO, KC_NO, KC_MPRV, KC_MNXT, KC_NO, KC_NO,
                          KC_VOLU, KC_VOLD, KC_MUTE, KC_NO, KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_NO, KC_NO
),

[NPAD] = LAYOUT_ergodox(
    // left hand
       RESET, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO, KC_NO,
       KC_NO, KC_NO, KC_7,  KC_8,  KC_9, KC_NO, KC_NO,
       KC_NO, KC_NO, KC_4,  KC_5,  KC_6, KC_NO,
       KC_NO, KC_NO, KC_1,  KC_2,  KC_3, KC_NO, KC_NO,
       KC_NO, KC_NO, KC_NO, KC_0,  KC_NO,
                                           KC_NO, KC_NO,
                                                  KC_NO,
                                    KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO,  KC_NO, KC_7,    KC_8,    KC_9,    KC_NO, KC_NO,
               KC_NO, KC_4,    KC_5,    KC_6,    KC_NO, KC_NO,
       KC_NO,  KC_NO, KC_1,    KC_2,    KC_3,    KC_NO, KC_NO,
                      KC_NO,   KC_0,    KC_NO,   KC_NO, KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_NO, KC_NO
),
};

void eeconfig_init_user(void) {
  rgblight_enable();
  rgblight_sethsv_cyan();
  rgblight_mode(1);
  user_config.rgb_layer_change = true;
  eeconfig_update_user(user_config.raw);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
     case RGB_LYR:
        if (record->event.pressed) {
            user_config.rgb_layer_change ^= 1;
            eeconfig_update_user(user_config.raw);
            if (user_config.rgb_layer_change) {
                layer_state_set(layer_state);
            }
        }
        return false; break;
    case RGB_MODE_FORWARD ... RGB_MODE_GRADIENT:
        if (record->event.pressed) {
            if (user_config.rgb_layer_change) {
                user_config.rgb_layer_change = false;
                eeconfig_update_user(user_config.raw);
            }
        }
        return true; break;
 }
  return true;
}

void matrix_init_user(void) {
  user_config.raw = eeconfig_read_user();

  if (user_config.rgb_layer_change) {
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom_cyan();
    rgblight_mode_noeeprom(1);
  }
}

void matrix_scan_user(void) {

};

uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (biton32(state)) {
    case SYMB:
        ergodox_right_led_1_on();
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_pink(); rgblight_mode_noeeprom(1); }
        break;
    case MDIA:
        ergodox_right_led_2_on();
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_green(); rgblight_mode_noeeprom(1); }
        break;
    case NPAD:
        ergodox_right_led_3_on();
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_blue(); rgblight_mode_noeeprom(1); }
        break;
    case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_orange(); rgblight_mode_noeeprom(1); }
        break;
    case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_yellow(); rgblight_mode_noeeprom(1); }
        break;
    case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_pink(); rgblight_mode_noeeprom(1); }
        break;
    case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_white(); rgblight_mode_noeeprom(1); }
        break;
    default:
        if (user_config.rgb_layer_change) { rgblight_sethsv_noeeprom_cyan(); rgblight_mode_noeeprom(1); }
        break;
    }
  return state;
}
