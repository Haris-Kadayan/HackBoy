#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

enum custom_keycodes {
    COPY = SAFE_RANGE,
    CUT,
    PASTE,
    UNDO
};

typedef enum {
    OLED_BOOT_1,
    OLED_BOOT_2,
    OLED_VOL,
    OLED_MUTED
} oled_state_t;

static oled_state_t oled_state = OLED_BOOT_1;
static uint32_t oled_timer = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        COPY,  CUT,   KC_MUTE,
        PASTE, UNDO
    ),

    [_FN] = LAYOUT(
        KC_NO, KC_NO, QK_BOOT,
        KC_NO, KC_NO
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        case COPY:
            tap_code16(C(KC_C));
            return false;

        case CUT:
            tap_code16(C(KC_X));
            return false;

        case PASTE:
            tap_code16(C(KC_V));
            return false;

        case UNDO:
            tap_code16(C(KC_Z));
            return false;

        case KC_MUTE:
            oled_state = OLED_MUTED;
            oled_timer = timer_read32();
            return true;
    }

    return true;
}

void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(1);
    rgblight_sethsv_noeeprom(0, 255, 255); // red
#endif

    oled_state = OLED_BOOT_1;
    oled_timer = timer_read32();
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index != 0) {
        return false;
    }

    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }

    oled_state = OLED_VOL;
    oled_timer = timer_read32();
    return false;
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_0;
}

static void render_boot_1(void) {
    oled_write_ln_P(PSTR("Hack Boy"), false);
}

static void render_boot_2(void) {
    oled_write_ln_P(PSTR("By: Haris"), false);
    oled_write_ln_P(PSTR("K."), false);
}

static void render_vol(void) {
    oled_write_ln_P(PSTR("Vol"), false);
}

static void render_muted(void) {
    oled_write_ln_P(PSTR("MUTED"), false);
}

bool oled_task_user(void) {
    oled_clear();

    uint32_t elapsed = timer_elapsed32(oled_timer);

    switch (oled_state) {
        case OLED_BOOT_1:
            render_boot_1();
            if (elapsed > 2000) {
                oled_state = OLED_BOOT_2;
                oled_timer = timer_read32();
            }
            break;

        case OLED_BOOT_2:
            render_boot_2();
            if (elapsed > 2000) {
                oled_state = OLED_VOL;
                oled_timer = timer_read32();
            }
            break;

        case OLED_MUTED:
            render_muted();
            if (elapsed > 5000) {
                oled_state = OLED_VOL;
                oled_timer = timer_read32();
            }
            break;

        case OLED_VOL:
        default:
            render_vol();
            break;
    }

    return false;
}
#endif