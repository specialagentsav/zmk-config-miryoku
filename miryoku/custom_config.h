// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <behaviors.dtsi>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/keys.h>

#define U_TAPPING_TERM 200
#define U_QUICK_TAP_MS 175
#define U_STRINGIFY(x) #x

#include "hold_tap.h"
#include "homerow_mods.h"
#include "macros.h"
#include "sticky_key.h"
#include "swapper.h"

#include "combos.dtsi"
#include "hold_tap.dtsi"
#include "homerow_mods.dtsi"
#include "macros.dtsi"
#include "sticky_key.dtsi"
#include "swapper.dtsi"

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_ADV360( \
     K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX  XXX                                               XXX  XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04  XXX                                               XXX  K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14  XXX       K32  K32                 K35  K35       XXX  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       XXX  XXX  K32  XXX       XXX  K35  XXX  XXX       K25  K26  K27  K28  K29  XXX \
XXX  XXX  XXX  XXX  K32            K33  K34  K32                 K35  K37  K36            K35  XXX  XXX  XXX  XXX

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ADV360

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,                                   &kp B,               &kp J,             &kp L,             &kp U,             &kp Y,             U_DQUOTES_SQUOTES,      \
U_HML(LGUI, A),    U_HML(LALT, R),    U_HML(LCTRL, S),   U_HML(LSHFT, T),                         &kp G,               &kp M,             U_HMR(LSHFT, N),   U_HMR(LCTRL, E),   U_HMR(LALT, I),    U_HMR(LGUI, O),          \
&kp Z,             &kp X,             &kp C,             &kp D,                                   &kp V,               &kp K,             &kp H,             U_UNDER_MINUS,     U_DOT_BANG,        U_COMMA_QUESTION,       \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT_SHIFT_MORPH_SENTENCE_SKQ(U_NAV),    U_LT(U_MOUSE, TAB),  U_LT(U_FUN, DEL),  U_LT(U_SYM, BSPC), U_LT(U_NUM, RET),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,                      &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             U_DQUOTES_SQUOTES,   \
&kp A,             &kp R,             &kp S,             &kp T,                      &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,               \
&kp Z,             &kp X,             &kp C,             &kp D,                      &kp V,             &kp K,             &kp H,             U_UNDER_MINUS,     U_DOT_BANG,        U_COMMA_QUESTION,    \
U_NP,              U_NP,              &kp ESC,           U_SHIFT_MORPH_SENTENCE_SKQ, &kp TAB,           &kp DEL,           &kp BSPC,          &kp RET,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PG_UP,         &kp LS(LC(TAB)),   U_NAV_UP,          &kp LC(TAB),   &kp LS(TAB),               \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PG_DN,         U_NAV_LEFT,        U_NAV_DOWN,        U_NAV_RIGHT,   U_ALT_GUI_TAB_SWAPPER,     \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_NAV,       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,         U_UND,                     \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NAV_DEL,         U_NAV_BSPC,        &kp RET,           U_NP,          U_NP

#define MIRYOKU_LAYER_SYM \
U_SINGLE_DOUBLE_TILDE,         U_SINGLE_TRIPLE_BACKTICK,     U_SINGLE_DOUBLE_BACKSLASH,             U_SINGLE_DOUBLE_AMPERSAND,                U_SINGLE_DOUBLE_PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_SINGLE_DOUBLE_HASH,          U_SINGLE_DOUBLE_BRACKETS,     U_SINGLE_DOUBLE_BRACES,                U_SINGLE_DOUBLE_EQUAL,                    U_SINGLE_DOUBLE_SLASH,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_SINGLE_DOUBLE_AT_SIGN,       U_SINGLE_DOUBLE_LESS_THAN,    U_SINGLE_DOUBLE_GREATER_THAN,          U_SINGLE_DOUBLE_PIPE,                     U_SINGLE_DOUBLE_ASTERISK,      U_NA,              &u_to_U_SYM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,                          U_NP,                         U_SINGLE_DOUBLE_SEMICOLON,             U_SINGLE_DOUBLE_PARENS,                   U_SINGLE_DOUBLE_COLON,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
U_SINGLE_DOUBLE_CARET,         &kp N6,      &kp N5,                      &kp N4,            U_SINGLE_DOUBLE_PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_SINGLE_DOUBLE_DOLLAR,        &kp N3,      &kp N2,                      &kp N1,            U_SINGLE_DOUBLE_SLASH,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_SINGLE_DOUBLE_PERCENT,       &kp N9,      &kp N8,                      &kp N7,            U_SINGLE_DOUBLE_ASTERISK,      U_NA,              &u_to_U_NUM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,                          U_NP,        U_SINGLE_DOUBLE_SEMICOLON,   &kp N0,            U_SINGLE_DOUBLE_COLON,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_MOUSE,     U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN3,            U_BTN1,            U_BTN2,            U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LC(LA(LS(T))),    &kp LC(PLUS),        &kp C_VOL_UP,        &kp LC(LA(LS(M))),         &kp C_BRIGHTNESS_INC,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_LOCK_POWER,         U_ZOOM_OUT_RESET,    U_VOLUME_DOWN_MUTE,  U_MIC_DOWN_MUTE,           &kp C_BRIGHTNESS_DEC,         \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &kp LG(DOT),          &kp C_PREV,          &kp C_NEXT,          U_OUT_USB_BLE,             &bt BT_NXT,                   \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_EMAIL,              U_PLAY_PAUSE_STOP,   &kp LC(LA(LS(N))),   U_NP,                      U_NP

#define MIRYOKU_LAYER_FUN \
&kp SCLK,          &kp F6,            &kp F5,            &kp F4,                     &kp F11,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_SCREENSHOT,      &kp F3,            &kp F2,            &kp F1,                     &kp F10,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp PAUSE_BREAK,   &kp F9,            &kp F8,            &kp F7,                     &kp F12,           U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         U_SHIFT_MORPH_SENTENCE_SKQ, &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
