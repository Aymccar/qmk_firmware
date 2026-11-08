#include QMK_KEYBOARD_H
#include "keymap_bepo.h"

enum layers {
    _LAYER0,
    _LAYER1
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_LAYER0] = LAYOUT(KC_ESC,  BP_DQUO, BP_LDAQ,    BP_RDAQ,   BP_LPRN,    BP_RPRN,    KC_LCTL, 
                   BP_W,    BP_B,    BP_EACU,    BP_P,      BP_O,       BP_EGRV,    KC_LSFT, 
                   BP_CCED, BP_A,    BP_U,       BP_I,      BP_E,       BP_COMM,    KC_SPC,
                   BP_EQL,  BP_ECIR, BP_AGRV,    BP_Y,      BP_X,       BP_DOT, 
                   KC_TAB,  MO(1),   KC_LGUI,    KC_LALT,   KC_BSPC,

                   TG(1),   BP_ASTR, BP_SLSH, BP_MINS, BP_PLUS, BP_AT,   KC_RCTL,
                   BP_Z,    BP_J,    BP_L,    BP_D,    BP_V,    BP_DCIR, KC_LSFT,
                   BP_M,    BP_N,    BP_R,    BP_S,    BP_T,    BP_C,    KC_ENT,
                   BP_F,    BP_H,    BP_G,    BP_Q,    BP_QUOT, BP_K,
                   KC_TAB,  MO(1),   KC_RGUI, KC_RALT, KC_DEL),

[_LAYER1] = LAYOUT(KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_BRID,
                   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_VOLD,
                   KC_NO, KC_NO, KC_LEFT, KC_UP,   KC_RGHT, KC_NO, KC_NO,
                   KC_NO, KC_NO, KC_NO,   KC_DOWN, KC_NO,   KC_NO,
                   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,

                   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_BRIU,
                   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_VOLU,
                   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                   KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO)
};


//led_config_t g_led_config = {
//        {
//        {0,  1,  2,  3,  4,  5,  29},
//        {6,  7,  8,  9,  10, 11, 30},
//        {12, 13, 14, 15, 16, 17, 31},
//        {18, 19, 20, 21, 22, 23, NO_LED},
//        {24, 25, 26, 27, 28, NO_LED, NO_LED},
//
//        {32, 33, 34, 35, 36, 37, 61},
//        {38, 39, 40, 41, 42, 43, 62},
//        {44, 45, 46, 47, 48, 49, 63},
//        {50, 51, 52, 53, 54, 55, NO_LED},
//        {56, 57, 58, 59, 60, NO_LED, NO_LED}
//    },{
//        {0, 0},  {20, 0},  {41, 0},  {61, 0},    {81, 0},  {102, 0},
//        {0, 16}, {20, 16}, {41, 16}, {61,  16},  {81, 16}, {102, 16},
//        {0, 32}, {20, 32}, {41, 32}, {61,  32},  {81, 32}, {102, 32},
//        {0, 48}, {20, 48}, {41, 48}, {61,  48},  {81, 48}, {102, 48},
//        {0, 64}, {20, 64}, {41, 64}, {61, 64},   {81, 64}, 
//
//        {122, 0},  {142, 0},  {163, 0},  {183, 0},    {204, 0},  {224, 0},
//        {122, 16}, {142, 16}, {163, 16}, {183,  16},  {204, 16}, {224, 16},
//        {122, 32}, {142, 32}, {163, 32}, {183,  32},  {204, 32}, {224, 32},
//        {122, 48}, {142, 48}, {163, 48}, {183,  48},  {204, 48}, {224, 48},
//                   {142, 64}, {163, 64}, {183, 64},   {204, 64}, {224, 64},
//
//        {106, 64}, {106, 72}, {110, 80},
//        {118, 64}, {118, 72}, {114, 80} 
//
//    },{
//         2, 2, 2, 2, 2, 2, 2,
//         2, 2, 2, 2, 2, 2, 2, 
//         2, 2, 2, 2, 2, 2, 2, 
//         2, 2, 2, 2, 2, 2, 
//         2, 2, 2, 2, 2,
//
//         2, 2, 2, 2, 2, 2, 2, 
//         2, 2, 2, 2, 2, 2, 2, 
//         2, 2, 2, 2, 2, 2, 2, 
//         2, 2, 2, 2, 2, 2, 
//         2, 2, 2, 2, 2, 
//    }
//};
