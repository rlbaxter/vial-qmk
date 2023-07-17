#include QMK_KEYBOARD_H


enum encoder_names {
    _LEFT,
    _RIGHT,
};

enum unicode_names {
    TM,
    HAPPY,
    SHRUG,
    AFLIP,
    TFLIP,
    TDOWN,
    FLIP2,
    FFLIP,
    FLIPU
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* EMOJI Pad
    * ,--------------.
    * |Knob 1| Knob 2|
    * |------+-------+-------.
    * |  TM  | HAPPY | SHRUG |
    * |------+-------+-------|
    * |AFLIP | TFLIP | TDOWN |
    * |------+-------+-------|
    * | FLIP2| FFLIP | FLIPU |
    * `----------------------'
    */
    LAYOUT_ut11(
        KC_MUTE, KC_MPLY,
        TM,      HAPPY,    SHRUG,
        AFLIP,   TFLIP,    TDOWN,
        FLIP2,   FFLIP,    FLIPU
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == _RIGHT) {
        if (clockwise) {
            tap_code(KC_MS_WH_UP);
        } else {
            tap_code(KC_MS_WH_DOWN);
        }
    }
    else if (index == _LEFT) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case TM:    // ™
                if(record->event.pressed){
                    send_unicode_string("2122");
                }
                return false;
                break;
            case HAPPY:    // (っ▀¯▀)つ
                if(record->event.pressed){
                    send_unicode_string("0028 3063 2580 00AF 2580 0029 3064");
                }
                return false;
                break;
            case SHRUG:    // ¯\_(ツ)_/¯
                if(record->event.pressed){
                     send_unicode_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
                }
                return false;
                break;
            case AFLIP:    // (╯°益°)╯彡┻━┻
                if(record->event.pressed){
                    send_unicode_string("0028 256F 00B0 76CA 00B0 0029 256F 5F61 253B 2501 253B");
                }
                return false;
                break;
            case TFLIP:    // (╯°□°）╯︵ ┻━┻
                if (record->event.pressed) {
                    send_unicode_string("0028 256F 00B0 25A1 00B0 FF09 256F FE35 0020 253B 2501 253B");
                }
                return false;
                break;
            case TDOWN:    // ┬─┬ノ( º _ ºノ)
                if(record->event.pressed){
                    send_unicode_string("252C 2500 252C 30CE 0028 0020 00BA 0020 005F 0020 00BA 30CE 0029");
                }
                return false;
                break;
            case FLIP2:    // ┻━┻ ︵ヽ(`Д´)ﾉ︵ ┻━┻
                if(record->event.pressed){
                    send_unicode_string("253B 2501 253B 0020 FE35 30FD 0028 0060 0414 00B4 0029 FF89 FE35 0020 253B 2501 253B");
                }
                return false;
                break;
            case FFLIP:    // (╯°Д°)╯︵ /(.□ . ＼)
                if(record->event.pressed){
                    send_unicode_string("0028 256F 00B0 0414 00B0 0029 256F FE35 0020 002F 0028 002E 25A1 0020 002E 0020 FF3C 0029");
                }
                return false;
                break;
            case FLIPU:    // ┬─┬ ︵ /(.□. \）
                if(record->event.pressed){
                    send_unicode_string("252C 2500 252C 0020 FE35 0020 002F 0028 002E 25A1 002E 0020 005C FF09");
                }
                return false;
                break;
                }
    }
    return true;
}
