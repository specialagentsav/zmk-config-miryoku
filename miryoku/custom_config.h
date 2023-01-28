// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

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
XXX  XXX  XXX  XXX  XXX            K33  K34  K32                 K35  K37  K36            XXX  XXX  XXX  XXX  XXX

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ADV360

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MOUSE, ESC),U_LT(U_NAV, SPC),  U_LT(U_MEDIA, RET),U_LT(U_FUN, TAB),  U_LT(U_NUM, BSPC), U_LT(U_SYM, DEL),  U_NP,              U_NP
