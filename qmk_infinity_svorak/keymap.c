#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_ESC, KC_NUHS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_NUBS, KC_X, KC_C, KC_V, KC_B, MO(1), KC_LGUI, KC_GRV, KC_PSCR, KC_LEFT, KC_RGHT, KC_DEL, KC_HOME, KC_END, KC_BSPC, KC_LCTL, KC_LALT, KC_ESC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, MO(1), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_RGUI, KC_PGUP, KC_RCTL, KC_PGDN, KC_RALT, KC_ENT, KC_SPC),
	[1] = LAYOUT_ergodox(RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
