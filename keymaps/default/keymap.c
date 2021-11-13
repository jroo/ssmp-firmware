#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
	_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT_all(
		KC_MPRV, KC_MNXT, KC_MPLY, LCTL(LCMD(KC_Q)),
		KC_VOLD, KC_VOLU, KC_MUTE, MO(_FN)),

	[_FN] = LAYOUT_all(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		RESET, KC_TRNS, KC_MUTE, KC_TRNS),

};

