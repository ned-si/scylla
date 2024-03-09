#include "nedsi.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT_wrapper(
    KC_ESC, KC_AGRV, KC_EGRV, KC_EAIG, KC_MINS, KC_UNDS,                             KC_QUOT, KC_DQT, KC_LPRN, KC_RPRN, NXTPRV, KC_MPLY,
    CW_TOGG, ________________MAIN_L1________________,                                ________________MAIN_R1________________, KC_CAPS,
    KC_LGUI, KC_A, KC_S, KC_D, KC_F, KC_G,                                                 KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_LGUI,
    MO(_MISC), ________________MAIN_L3________________,                                ________________MAIN_R3________________, KC_DEL,
                                          MO(_SYM), KC_LSFT, KC_LCTL, MO(_ACC), KC_SPC, MO(_NUM),
                                                      KC_TAB, KC_LALT, KC_LCTL, KC_LSFT
  ),

  [_GAMING] = LAYOUT_wrapper(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                                            KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
    _______, ________________MAIN_L1________________,                                ________________MAIN_R1________________, _______,
    _______, ________________GAMING_L2_________________,                             ________________MAIN_R2________________, _______,
    _______, ________________GAMING_L3_________________,                             ________________MAIN_R3________________, _______,
    KC_VOLD, KC_VOLU,  MO(_SYM), KC_TAB, CACCCV,     UNDO,    REDO,       KC_DEL, KC_SPC, MO(_NUM)
  ),

  [_SYM] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, ________________SYM_L1________________,                                ________________SYM_R1________________, _______,
    _______, ________________SYM_L2________________,                                ________________SYM_R2________________, _______,
    _______, ________________SYM_L3________________,                                ________________SYM_R3________________, _______,
    _______, _______, _______, _______, KC_SPC,MO(_NAV), _______, _______,    _______,  _______
  ),

  [_ACC] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, ________________ACC_L1________________,                                ________________ACC_R1________________, _______,
    _______, ________________ACC_L2________________,                                ________________ACC_R2________________, _______,
    _______, ________________ACC_L3________________,                                ________________ACC_R3________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ 
  ),

  [_NUM] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, ________________NUM_L1________________,                                ________________NUM_R1________________, _______,
    _______, ________________NUM_L2________________,                                ________________NUM_R2________________, _______,
    _______, ________________NUM_L3________________,                                ________________NUM_R3________________, _______,
    MO(_NAV), _______, _______, MO(_NAV), _______, _______, _______, _______, _______, _______
  ),

  [_NAV] = LAYOUT_wrapper(
    QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, ________________NAV_L1________________,                                ________________NAV_R1________________, _______,
    _______, ________________NAV_L2________________,                                ________________NAV_R2________________, _______,
    _______, ________________NAV_L3________________,                                ________________NAV_R3________________, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

  [_MISC] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, _______,
    _______, ________________MISC_L1________________,                                RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, RGB_M_TW, _______,
    _______, ________________MISC_L2________________,                                ________________MISC_R2________________, _______,
    _______, ________________MISC_L3________________,                                RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD,
    _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT,
    _______, _______, RGB_MOD,  RGB_TOG
  )
};

__attribute__ ((weak))
void matrix_init_keymap(void) {}
void matrix_init_user(void) {

  set_unicode_input_mode(UNICODE_MODE_LINUX);

  matrix_init_keymap();
}
