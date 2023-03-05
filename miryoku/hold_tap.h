// Copyright 2022 Lukas Kucera
// https://github.com/kucera-lukas/miryoku

#pragma once

#define U_LEFT_RIGHT_PAREN HOLD_TAP(RPAR, LPAR)
#define U_LEFT_RIGHT_BRACE HOLD_TAP(RIGHT_BRACE, LEFT_BRACE)
#define U_LEFT_RIGHT_BRACKET HOLD_TAP(RIGHT_BRACKET, LEFT_BRACKET)

// Inspired by https://github.com/urob/zmk-config
#define U_NAV_LEFT  HOLD_TAP(HOME, LEFT)      // tap: left  | long-tap: beginning of line
#define U_NAV_RIGHT HOLD_TAP(END, RIGHT)      // tap: right | long-tap: end of line
#define U_NAV_UP    HOLD_TAP(LC(HOME), UP)    // tap: up    | long-tap: beginning of document
#define U_NAV_DOWN  HOLD_TAP(LC(END), DOWN)   // tap: down  | long-tap: end of document
#define U_NAV_BSPC  HOLD_TAP(LC(BSPC), BSPC)  // tap: bspc  | long-tap: delete word backward
#define U_NAV_DEL   HOLD_TAP(LC(DEL), DEL)    // tap: del   | long-tap: delete word forward
