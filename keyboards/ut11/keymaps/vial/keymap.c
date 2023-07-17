#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ut11(
        KC_MUTE, KC_MPLY,
        KC_7,    KC_8,   KC_9,
        KC_4,    KC_5,   KC_6,
        KC_1,    KC_2,   KC_3
    ),
    LAYOUT_ut11(
        _______, _______,
        _______,  _______,  _______,
        _______,  _______,  _______,
        _______,  _______,  _______
    ),
   LAYOUT_ut11(
        _______, _______,
        _______,  _______,  _______,
        _______,  _______,  _______,
        _______,  _______,  _______
    ),
    LAYOUT_ut11(
        _______, _______,
        _______,  _______,  _______,
        _______,  _______,  _______,
        _______,  _______,  _______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)  },
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)  },
    [2] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)  },
    [3] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)  },
    //                  Encoder 1                                     Encoder 2
};
#endif
