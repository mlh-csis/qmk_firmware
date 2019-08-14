#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
	 * QWERTY
	 
	[0] = LAYOUT(
	    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS,
	    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
	    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RSFT_T(KC_QUOT),
	    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LALT, MO(3), KC_N, KC_M, KC_COMM, KC_DOT, KC_PSLS, KC_RCTL,
	                        KC_LGUI, KC_DEL, LT(1, KC_ENT), LT(2,KC_SPC), KC_BSPC, KC_RALT
	),*/
	/*COLEMAK MOD DH */
	[0] = LAYOUT(
	    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                 KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS,
	    KC_TAB,  KC_Q, KC_W, KC_F, KC_P, KC_B,                KC_J, KC_L, KC_U, KC_Y, KC_NO, KC_NO,
	    LSFT_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_G,         KC_K, KC_N, KC_E, KC_I, KC_O, KC_RSFT,
	    KC_LCTL, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_LALT, MO(3), KC_M, KC_H, KC_COMM, KC_DOT, KC_PSLS, KC_RCTL,
	                        KC_LGUI, KC_DEL, MO(1), LT(2, KC_SPC), KC_BSPC, KC_RALT
	),
	[1] = LAYOUT(
		KC_NO,   KC_F1, KC_F2,   KC_F3,   KC_F4,  KC_NO, KC_F6, KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_NO,
		KC_NO,   KC_NO, KC_NO,   KC_PGUP, KC_NO,  KC_NO, KC_NO, KC_NO,   KC_UP,   KC_LBRC,   KC_NO,  KC_NO,
		KC_TRNS, KC_SCLN, KC_HOME, KC_PGDN, KC_END, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN,  KC_QUOT,
		KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		                           KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, KC_DEL, KC_TRNS
	),
	[2] = LAYOUT(
	    KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
	    KC_NO, KC_EXLM, RALT(KC_2), KC_HASH, RALT(KC_4), KC_PERC, LSFT(KC_6), KC_PEQL, LSFT(KC_MINS), LSFT(KC_RBRC), RALT(KC_RBRC), KC_NO,
	    KC_TRNS, LSFT(KC_DOT), RALT(KC_8), RALT(KC_7), LSFT(KC_8), KC_PMNS, KC_PPLS, LSFT(KC_9), RALT(KC_0), RALT(KC_9), LSFT(KC_COMM), KC_NO,
	    KC_TRNS, KC_NO, LSFT(KC_EQL), KC_BSLS, KC_NUBS, LSFT(KC_SLASH), KC_NO, KC_NO, KC_PAST, LSFT(KC_NUBS), LSFT(KC_2), RALT(KC_EQL), KC_NUBS, KC_NO,
	                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        ),
	[3] = LAYOUT(
	    RGB_TOG, RGB_VAI, RGB_SAI, RGB_HUI, RGB_SPI, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET,
	    KC_NO, RGB_VAD, RGB_SAD, RGB_HUD, RGB_SPD, RGB_RMOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    RGB_M_X, RGB_M_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	),
};
/*dddd
uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case 1:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case 2:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case 3:
        rgblight_setrgb (0x00,  0xFF, 0x00);
        break;
    case 4:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    case 5:
        rgblight_setirgb (0x7A,  0xFF, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x7A,  0xFF, 0xFF);
	break;
    }
  return state;
} */
