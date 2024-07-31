#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
};

// to align with mini.align:
// select the left half of the 4 lines, then `gajrm <CR>ipts, <CR>`
// select the right half of the 4 lines, then `gajlm <CR>ipts, <CR>`
// yes this is super scuffed

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Main
    [0] = LAYOUT_voyager(
          KC_LEFT_GUI, KC_1,              KC_2, KC_3, KC_4, KC_5, /* */ KC_6, KC_7, KC_8,     KC_9,   KC_0,     KC_RIGHT_ALT,
               KC_TAB, KC_Q,              KC_W, KC_E, KC_R, KC_T, /* */ KC_Y, KC_U, KC_I,     KC_O,   KC_P,     KC_BSLS,
        KC_LEFT_SHIFT, KC_A,              KC_S, KC_D, KC_F, KC_G, /* */ KC_H, KC_J, KC_K,     KC_L,   KC_SCLN,  MT(MOD_RSFT,KC_QUOTE),
         KC_LEFT_CTRL, KC_Z, MT(MOD_LALT,KC_X), KC_C, KC_V, KC_B, /* */ KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, MT(MOD_RCTL,KC_EQUAL),

                                 LT(7,KC_ENTER), LT(8,KC_ESCAPE), /* */ LT(9,KC_BSPC), LT(10,KC_SPACE)
    ),

    // Valorant (top_right \ ')
    [1] = LAYOUT_voyager(
            KC_ESCAPE,   KC_5, KC_1, KC_2, KC_3, KC_4, /* */ LALT(KC_TAB), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                 KC_M, KC_TAB, KC_Q, KC_W, KC_R, KC_T, /* */ KC_MINUS,     KC_7,           KC_8,           KC_9,           KC_SLASH,       KC_TRANSPARENT,
        KC_LEFT_SHIFT,   KC_G, KC_A, KC_S, KC_D, KC_F, /* */ KC_PLUS,      KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_ENTER,
         KC_LEFT_CTRL,   KC_V, KC_Z, KC_Y, KC_C, KC_B, /* */ KC_COMMA,     KC_1,           KC_2,           KC_3,           KC_DOT,         KC_ENTER,

                                       KC_SPACE, KC_X, /* */ KC_TRANSPARENT, KC_0
    ),

    // Game (9 0 top_right)
    [2] = LAYOUT_voyager(
             KC_ESCAPE, KC_5, KC_1, KC_2, KC_3, KC_4, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_T, KC_Q, KC_W, KC_E, KC_R, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_G, KC_A, KC_S, KC_D, KC_F, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_B, KC_Z, KC_X, KC_C, KC_V, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        
                                  KC_SPACE, KC_ENTER, /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),

    // Anime (3 4 5)
    [3] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_ESCAPE, KC_KP_1, KC_KP_2, KC_INSERT, KC_HOME,     KC_PAGE_UP,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,          KC_UP,       KC_COMMA,         KC_DOT, /* */ KC_COMMA,  KC_DOT,  KC_UP,   KC_DELETE, KC_END,      KC_PGDN,
         KC_LEFT_SHIFT,           KC_C,        KC_LEFT,        KC_DOWN,       KC_RIGHT,           KC_F, /* */ KC_F,      KC_LEFT, KC_DOWN, KC_RIGHT,  KC_C,        KC_RIGHT_SHIFT,
          KC_LEFT_CTRL,    KC_LEFT_ALT,           KC_J,           KC_K,           KC_L,           KC_M, /* */ KC_M,      KC_J,    KC_K,    KC_L,      KC_LEFT_ALT, KC_RIGHT_CTRL,

                                                                              KC_SPACE, KC_TRANSPARENT, /* */ KC_ENTER, KC_SPACE
    ),

    // Fn over (e r t)
    [4] = LAYOUT_voyager(
        KC_TRANSPARENT,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5, /* */ KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                                                                        KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),

    // Num left (unused)
    [5] = LAYOUT_voyager(
                 TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,           KC_7,           KC_8,           KC_9, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,           KC_4,           KC_5,           KC_6, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,           KC_1,           KC_2,           KC_3, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                                                                                        KC_0, KC_ENTER, /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),

    // Fn left (unused)
    [6] = LAYOUT_voyager(
                 TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,   QK_LLCK, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT,          KC_F9,         KC_F10,         KC_F11,         KC_F12,   KC_PSCR, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT,          KC_F5,          KC_F6,          KC_F7,          KC_F8,   KC_CAPS, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT,          KC_F1,          KC_F2,          KC_F3,          KC_F4, KC_DELETE, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                                                                   KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),

    // Num (on hold for left ENTER (small thumb key))
    [7] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_ASTR,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_COLON,       KC_SPACE,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,        QK_LLCK, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_SLASH,       KC_EQUAL,

                                                                        KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_0
    ),

    // Sym (on hold for left ESC (large thumb key))
    [8] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT,        KC_EXLM,          KC_AT,        KC_HASH,         KC_DLR,        KC_PERC, /* */ KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_LBRC,
        KC_TRANSPARENT,     RALT(KC_Q),     RALT(KC_P),     RALT(KC_Y),     RALT(KC_S),     RALT(KC_5), /* */ KC_GRAVE,       KC_TILD,        KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_RBRC,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,        QK_LLCK, KC_TRANSPARENT, /* */ KC_MINUS,       KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                                                                        KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),

    // Nav (on hold for right BACKSPACE (large thumb key))
    [9] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
          LALT(KC_TAB),     LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5), /* */ LCTL(LSFT(KC_TAB)), KC_DELETE,      KC_INSERT,      LCTL(KC_TAB),   KC_TRANSPARENT, LSFT(KC_LBRC),
        KC_TRANSPARENT,     LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     LGUI(KC_0), /* */ KC_LEFT,            KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, LSFT(KC_RBRC),
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,        QK_LLCK, KC_TRANSPARENT, /* */ KC_HOME,            KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,

                                                                         KC_TRANSPARENT, LCTL(KC_LBRC), /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),

    // Fn (on hold for right SPACE (small thumb key))
    [10] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_PSCR,        KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_CAPS,        KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,        QK_LLCK, KC_TRANSPARENT, /* */ KC_DELETE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT,

                                                                        KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),

    // Board (6 7 8)
    [11] = LAYOUT_voyager(
                   RGB_TOG,    RGB_MODE_FORWARD,             RGB_SPD,            RGB_SPI,             RGB_VAD,        RGB_VAI, /* */ KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
                   RGB_HUI,      KC_TRANSPARENT,   KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP,       KC_AUDIO_MUTE,        RGB_SAI, /* */ KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                   RGB_HUD, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK,      KC_MEDIA_STOP, KC_MEDIA_PLAY_PAUSE,        RGB_SAD, /* */ KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        TOGGLE_LAYER_COLOR,      KC_TRANSPARENT,      KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,    KC_BRIGHTNESS_UP, KC_TRANSPARENT, /* */ MAGIC_TOGGLE_NKRO, KC_NUM_LOCK,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                                                                                               KC_TRANSPARENT, KC_TRANSPARENT, /* */ KC_TRANSPARENT, KC_TRANSPARENT
    ),
};

const uint16_t PROGMEM combo0[] = { KC_BSLS, MT(MOD_RSFT, KC_QUOTE), KC_RIGHT_ALT, COMBO_END };
const uint16_t PROGMEM combo1[] = { KC_0, KC_9, KC_RIGHT_ALT, COMBO_END };
const uint16_t PROGMEM combo2[] = { LT(7,KC_ENTER), LT(8,KC_ESCAPE), COMBO_END };
const uint16_t PROGMEM combo3[] = { KC_8, KC_7, KC_6, COMBO_END };
const uint16_t PROGMEM combo4[] = { KC_5, KC_4, KC_3, COMBO_END };
const uint16_t PROGMEM combo5[] = { KC_E, KC_R, KC_T, COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(1)),
    COMBO(combo1, TG(2)),
    COMBO(combo2, KC_DELETE),
    COMBO(combo3, TG(11)),
    COMBO(combo4, TG(3)),
    COMBO(combo5, TG(4)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {215,255,255}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {215,255,255}, {0,0,0}, {129,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,80}, {129,255,80}, {129,255,80}, {215,255,80}, {86,255,80}, {0,0,80}, {0,0,80}, {0,0,80}, {86,255,80}, {215,255,80}, {215,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {86,255,80}, {0,0,80}, {0,0,0}, {0,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {0,0,80}, {129,255,80}, {129,255,80}, {129,255,80}, {86,255,80}, {0,0,80}, {0,0,80}, {0,0,80}, {86,255,80}, {215,255,80}, {86,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {215,255,80}, {215,255,80}, {86,255,80}, {0,0,80} },

    [4] = { {0,0,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [5] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},     {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},     {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},     {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {172,255,255},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {215,255,255},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {172,255,255},
        {0,0,0}, {129,255,255}
    },

    [8] = {
        {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
        {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255},
        {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,255,255},   {0,0,0},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
        {129,255,255}, {129,255,255}, {0,0,0},       {129,255,255}, {129,255,255}, {129,255,255},
        {129,255,255}, {129,255,255}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {0,0,0}
    },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {172,255,255}, {172,255,255}, {215,255,255}, {0,0,0}, {215,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {215,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},
        {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},
        {215,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},
        {0,0,0}, {0,0,0}
    },

    [11] = {
        {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255},
        {43,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {43,255,255},
        {43,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {43,255,255},
        {43,255,255}, {0,0,0}, {0,0,0}, {215,255,255}, {215,255,255}, {0,0,0},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}
    },

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

bool rgb_matrix_indicators_user(void) {
    if (rawhid_state.rgb_control) {
        return false;
    }
    if (keyboard_config.disable_layer_led) { return false; }
    switch (biton32(layer_state)) {
        case 1:
            set_layer_color(1);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        case 6:
            set_layer_color(6);
            break;
        case 7:
            set_layer_color(7);
            break;
        case 8:
            set_layer_color(8);
            break;
        case 9:
            set_layer_color(9);
            break;
        case 10:
            set_layer_color(10);
            break;
        case 11:
            set_layer_color(11);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE)
                rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(7,KC_ENTER):
        case LT(8,KC_ESCAPE):
        case LT(9,KC_BSPC):
            return TAPPING_TERM_LONG;
        default:
            return TAPPING_TERM;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(7,KC_ENTER):
        case LT(8,KC_ESCAPE):
        case LT(9,KC_BSPC):
            return true;
        default:
            return false;
    }
}
