// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <dt-bindings/zmk/keys.h>
#include <behaviors.dtsi>

#define U_TAPPING_TERM 200
#define U_STRINGIFY(x) #x

#include "hold_tap.h"
#include "shift_morph.h"

#include "hold_tap.dtsi"
#include "shift_morph.dtsi"

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_ADV360( \
     K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX  XXX                                               XXX  XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04  XXX                                               XXX  K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14  XXX       XXX  XXX                 XXX  XXX       XXX  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       XXX  XXX  XXX  XXX       XXX  XXX  XXX  XXX       K25  K26  K27  K28  K29  XXX \
XXX  XXX  XXX  XXX  K32            K33  K34  K32                 K35  K37  K36            K35  XXX  XXX  XXX  XXX

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ADV360

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,                                 U_DOUBLE_SINGLE,                         \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),                         U_MT(LGUI, O),                           \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             U_UNDER_MINUS,     U_DOT_BANG_TAP_MT(RALT),               U_COMMA_QUESTION_TAP_LT(U_BUTTON),       \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_FUN, DEL),  U_LT(U_SYM, BSPC), U_LT(U_NUM, RET),  U_NP,                                  U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             U_DOUBLE_SINGLE,   \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             U_UNDER_MINUS,     U_DOT_BANG,        U_COMMA_QUESTION,  \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp DEL,           &kp BSPC,          &kp RET,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_NAV,       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp DEL,           &kp BSPC,          &kp RET,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp TILDE,         &kp GRAVE,              &kp BACKSLASH,             &kp AMPERSAND,                &kp PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp HASH,          U_LEFT_RIGHT_BRACKET,   U_LEFT_RIGHT_BRACE,        &kp EQUAL,                    &kp SLASH,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp AT_SIGN,       &kp LESS_THAN,          &kp GREATER_THAN,          &kp PIPE,                     &kp ASTERISK,      U_NA,              &u_to_U_SYM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,                   &kp SEMICOLON,             U_LEFT_RIGHT_PAREN,           &kp COLON,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp CARET,         &kp N9,            &kp N8,            &kp N7,            &kp PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp DOLLAR,        &kp N3,            &kp N2,            &kp N1,            &kp SLASH,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp PERCENT,       &kp N6,            &kp N5,            &kp N4,            &kp ASTERISK,      U_NA,              &u_to_U_NUM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp SEMICOLON,     &kp N0,            &kp COLON,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_MOUSE,     U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN3,            U_BTN1,            U_BTN2,            U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         &kp C_VOL_UP,      U_RGB_HUI,         U_RGB_SAI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_RGB_BRI,         \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp SCLK,          &kp F9,            &kp F8,            &kp F7,            &kp F12,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PSCRN,         &kp F3,            &kp F2,            &kp F1,            &kp F10,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp PAUSE_BREAK,   &kp F6,            &kp F5,            &kp F4,            &kp F11,           U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
