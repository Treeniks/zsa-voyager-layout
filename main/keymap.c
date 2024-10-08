#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
    // was already here by Oryx
    // reset the RGB to default
    // see `process_record_user`
    RGB_SLD = ML_SAFE_RANGE,

    MT_X    = LALT_T(KC_X),

    MT_QUOT = RSFT_T(KC_QUOT),
    MT_EQL  = RCTL_T(KC_EQL),

    LT_ENT  = LT(4, KC_ENT),
    LT_ESC  = LT(5, KC_ESC),
    LT_BSPC = LT(6, KC_BSPC),
    LT_SPC  = LT(7, KC_SPC), // unused

    ALT_TAB = LALT(KC_TAB),

    RALT_Q  = RALT(KC_Q),
    RALT_P  = RALT(KC_P),
    RALT_Y  = RALT(KC_Y),
    RALT_S  = RALT(KC_S),
    RALT_5  = RALT(KC_5),

    NAV_1   = LGUI(KC_1),
    NAV_2   = LGUI(KC_2),
    NAV_3   = LGUI(KC_3),
    NAV_4   = LGUI(KC_4),
    NAV_5   = LGUI(KC_5),
    NAV_6   = LGUI(KC_6),
    NAV_7   = LGUI(KC_7),
    NAV_8   = LGUI(KC_8),
    NAV_9   = LGUI(KC_9),
    NAV_0   = LGUI(KC_0),

    TAB_PRE = LCTL(LSFT(KC_TAB)),
    TAB_NEX = LCTL(KC_TAB),

    VIM_ESC = LCTL(KC_LBRC),

    RGB_TLC = TOGGLE_LAYER_COLOR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Main
    [0] = LAYOUT_voyager(
        KC_LGUI, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    /* */ KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_RALT,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    /* */ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    /* */ KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_QUOT,
        KC_LCTL, KC_Z,    MT_X,    KC_C,    KC_V,    KC_B,    /* */ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT_EQL,
                                            LT_ENT,  LT_ESC,  /* */ LT_BSPC, KC_SPC
    ),

    // Game
    [1] = LAYOUT_voyager(
        KC_ESC,  KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    /* */ ALT_TAB, _______, _______, _______, _______, TO(0),
        _______, KC_M,    KC_Q,    KC_W,    KC_R,    KC_T,    /* */ _______, _______, _______, _______, _______, _______,
        _______, KC_G,    KC_A,    KC_S,    KC_D,    KC_F,    /* */ _______, _______, _______, _______, _______, _______,
        _______, KC_B,    KC_Z,    KC_X,    KC_C,    KC_V,    /* */ _______, _______, _______, _______, _______, _______,
                                            KC_SPC,  KC_E,    /* */ KC_BSPC, KC_ENT
    ),

    // Anime
    [2] = LAYOUT_voyager(
        _______, _______, _______, _______, _______, _______, /* */ KC_ESC,  KC_P1,   KC_P2,   KC_INS,  KC_HOME, KC_PGUP,
        _______, _______, _______, KC_UP,   KC_COMM, KC_DOT,  /* */ KC_COMM, KC_DOT,  KC_UP,   KC_DEL,  KC_END,  KC_PGDN,
        KC_LSFT, KC_C,    KC_LEFT, KC_DOWN, KC_RGHT, KC_F,    /* */ KC_F,    KC_LEFT, KC_DOWN, KC_RGHT, KC_C,    KC_RSFT,
        KC_LCTL, KC_LALT, KC_J,    KC_K,    KC_L,    KC_M,    /* */ KC_M,    KC_J,    KC_K,    KC_L,    KC_LALT, KC_LCTL,
                                            KC_SPC,  _______, /* */ KC_ENT,  KC_SPC
    ),

    // Fn overlay
    [3] = LAYOUT_voyager(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   /* */ KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, _______, /* */ _______, _______, _______, _______, _______, KC_F12,
        _______, _______, _______, _______, _______, _______, /* */ _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, /* */ _______, _______, _______, _______, _______, _______,
                                            _______, _______, /* */ _______, _______
    ),

    // Num
    [4] = LAYOUT_voyager(
        _______, _______, _______, _______, _______, _______, /* */ _______, _______, _______, _______, _______, _______,
        _______, KC_F12,  KC_F11,  KC_F10,  KC_F9,   KC_PSCR, /* */ _______, KC_7,    KC_8,    KC_9,    KC_MINS, _______,
        _______, KC_F8,   KC_F7,   KC_F6,   KC_F5,   KC_INS,  /* */ _______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, KC_F4,   KC_F3,   KC_F2,   KC_F1,   KC_CAPS, /* */ _______, KC_1,    KC_2,    KC_3,    _______, _______,
                                            _______, _______, /* */ _______, KC_0
    ),

    // Sym
    [5] = LAYOUT_voyager(
        _______, _______, _______, _______, _______, _______, /* */ _______, _______, _______, _______, _______, _______,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, /* */ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_LBRC,
        _______, RALT_Q,  RALT_P,  RALT_Y,  RALT_S,  RALT_5,  /* */ KC_TILD, KC_GRV,  VIM_ESC, KC_LCBR, KC_RCBR, KC_RBRC,
        _______, _______, _______, _______, _______, _______, /* */ KC_UNDS, KC_MINS, _______, _______, _______, _______,
                                            _______, _______, /* */ _______, _______
    ),

    // Nav
    [6] = LAYOUT_voyager(
        _______, _______, _______, _______, _______, _______, /* */ _______, _______, _______, _______, _______, _______,
        ALT_TAB, NAV_1,   NAV_2,   NAV_3,   NAV_4,   NAV_5,   /* */ TAB_PRE, _______, _______, TAB_NEX, _______, _______,
        _______, NAV_6,   NAV_7,   NAV_8,   NAV_9,   NAV_0,   /* */ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______, /* */ KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,
                                            _______, _______, /* */ _______, _______
    ),

    // Fn (unused)
    [7] = LAYOUT_voyager(
        _______, _______, _______, _______, _______, _______, /* */ _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, /* */ KC_PSCR, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        _______, _______, _______, _______, _______, _______, /* */ KC_INS,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,
        _______, _______, _______, _______, _______, _______, /* */ KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
                                            _______, _______, /* */ _______, _______
    ),

    // Board
    [8] = LAYOUT_voyager(
        RGB_TOG, RGB_MOD, RGB_SPD, RGB_SPI, RGB_VAD, RGB_VAI, /* */ _______, _______, _______, _______, _______, QK_BOOT,
        RGB_HUI, _______, KC_VOLD, KC_VOLU, KC_MUTE, RGB_SAI, /* */ _______, _______, _______, _______, _______, _______,
        RGB_HUD, KC_MPRV, KC_MNXT, KC_MSTP, KC_MPLY, RGB_SAD, /* */ _______, _______, _______, _______, _______, _______,
        RGB_TLC, _______, _______, KC_BRID, KC_BRIU, _______, /* */ NK_TOGG, KC_NUM,  _______, _______, _______, _______,
                                            _______, RGB_SLD, /* */ _______, _______
    ),
};

// right side - top right - 3 towards bottom
const uint16_t PROGMEM combo0[] = { KC_RALT, KC_BSLS, MT_QUOT, COMBO_END };
// right side - top right - 3 towards left - not in use
// const uint16_t PROGMEM combo1[] = { KC_RALT, KC_0, KC_9, COMBO_END };
// left thumb keys
const uint16_t PROGMEM combo2[] = { LT_ENT, LT_ESC, COMBO_END };
// right side - top left - 3 towards right
const uint16_t PROGMEM combo3[] = { KC_6, KC_7, KC_8, COMBO_END };
// left side - top right - 3 towards left
const uint16_t PROGMEM combo4[] = { KC_5, KC_4, KC_3, COMBO_END };
// left side - 2nd row, right - 3 towards left
const uint16_t PROGMEM combo5[] = { KC_T, KC_R, KC_E, COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(1)), // Game
    COMBO(combo2, KC_DEL),
    COMBO(combo3, TG(8)), // Board
    COMBO(combo4, TG(2)), // Anime
    COMBO(combo5, TG(3)), // Fn overlay
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    // Game
    [1] = {
        {215,255,255}, {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0},       {0,0,0}, {0,0,0},       {129,255,255}, {0,0,0},       {0,0,0},
        {0,0,0},       {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},
        {0,0,0},       {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {172,255,255}, {0,0,0},
        /* */
        {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255},
        {0,0,0},     {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0},     {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0},     {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {172,255,255}
    },

    // Anime
    [2] = {
        {0,0,0},      {0,0,0},      {0,0,0},      {0,0,0},      {0,0,0},      {0,0,0},
        {0,0,0},      {0,0,0},      {0,0,0},      {0,0,80},     {129,255,80}, {129,255,80},
        {215,255,80}, {86,255,80},  {0,0,80},     {0,0,80},     {0,0,80},     {86,255,80},
        {215,255,80}, {215,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {86,255,80},
        {0,0,80}, {0,0,0},
        /* */
        {0,255,80},   {129,255,80}, {129,255,80}, {129,255,80}, {129,255,80}, {129,255,80},
        {129,255,80}, {129,255,80}, {0,0,80},     {129,255,80}, {129,255,80}, {129,255,80},
        {86,255,80},  {0,0,80},     {0,0,80},     {0,0,80},     {86,255,80},  {215,255,80},
        {86,255,80},  {129,255,80}, {129,255,80}, {129,255,80}, {215,255,80}, {215,255,80},
        {86,255,80},  {0,0,80}
    },

    // Fn overlay
    [3] = {
        {0,0,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
        {0,0,255}, {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},
        {0,0,255}, {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},
        {0,0,255}, {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},
        {0,0,255}, {0,0,255},
        /* */
        {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
        {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {129,255,255},
        {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},
        {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},     {0,0,255},
        {0,0,255}, {0,0,255}
    },

    // Num
    [4] = {
        {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {172,255,255},
        {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {172,255,255},
        {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,255,255},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {0,0,0},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},       {0,0,0},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},       {0,0,0},
        {0,0,0}, {129,255,255}
    },

    // Sym
    [5] = {
        {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
        {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255},
        {0,0,0}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
        {129,255,255}, {129,255,255}, {215,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
        {129,255,255}, {129,255,255}, {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {0,0,0}
    },

    // Nav
    [6] = {
        {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255},
        {0,0,0},       {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255},
        {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0}, {0,0,0},
        {215,255,255}, {0,0,0},       {0,0,0},       {215,255,255}, {0,0,0}, {0,0,0},
        {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0},
        {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}
    },

    // Fn
    [7] = {
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0},
        /* */
        {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},       {0,0,0},
        {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},
        {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},
        {215,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0},
        {0,0,0}, {0,0,0}
    },

    // Board
    [8] = {
        {43,255,255}, {43,255,255},  {43,255,255},  {43,255,255},  {43,255,255},  {43,255,255},
        {43,255,255}, {0,0,0},       {172,255,255}, {172,255,255}, {172,255,255}, {43,255,255},
        {43,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {43,255,255},
        {43,255,255}, {0,0,0},       {0,0,0},       {215,255,255}, {215,255,255}, {0,0,0},
        {0,0,0}, {43,255,255},
        /* */
        {0,0,0},     {0,0,0},       {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255},
        {0,0,0},     {0,0,0},       {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0},     {0,0,0},       {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
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
    int layer = biton32(layer_state);
    switch (layer) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            set_layer_color(layer);
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
        case LT_ENT:
        case LT_ESC:
            return TAPPING_TERM_LONG;
        default:
            return TAPPING_TERM;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT_ENT:
        case LT_ESC:
            return true;
        default:
            return false;
    }
}
