// Copyright 2022 Lukas Kucera
// https://github.com/kucera-lukas/zmk-config

#pragma once

#define U_LEFT_RIGHT_PAREN HOLD_TAP(RPAR, LPAR)
#define U_LEFT_RIGHT_BRACE HOLD_TAP(RIGHT_BRACE, LEFT_BRACE)
#define U_LEFT_RIGHT_BRACKET HOLD_TAP(RIGHT_BRACKET, LEFT_BRACKET)

// Inspired by https://github.com/urob/zmk-config

// mask CTRL when holding left/right to avoid accidental jumps to beginning/end of document
#define U_NAV_LEFT  NAV_MASKED_HOME_TAP(LEFT)     // tap: left  | long-tap: beginning of line
#define U_NAV_RIGHT NAV_MASKED_END_TAP(RIGHT)     // tap: right | long-tap: end of line

#define U_NAV_UP    NAV_HOLD_TAP(LC(HOME), UP)    // tap: up   | long-tap: beginning of document
#define U_NAV_DOWN  NAV_HOLD_TAP(LC(END), DOWN)   // tap: down | long-tap: end of document
#define U_NAV_BSPC  NAV_HOLD_TAP(BSPC, LC(BSPC))  // tap: delete word backward | long-tap: bspc
#define U_NAV_DEL   NAV_HOLD_TAP(DEL, LC(DEL))    // tap: delete word forward  | long-tap: del

#define U_COPY_SELECT_ALL HOLD_TAP(LC(A), LC(INS))
#define U_CUT_EDIT_CLIPBOARD HOLD_TAP(LC(LA(LS(E))), LS(DEL))
#define U_OPEN_CLEAR_CLIPBOARD_HISTORY HOLD_TAP(LC(LA(LS(H))), LG(V))

#define U_REFRESH_CLOSE_TAB HOLD_TAP(LC(W), LC(R))

#define U_SCREENSHOT HOLD_TAP(PSCRN, LS(LG(PSCRN)))

#define U_PLAY_PAUSE_STOP HOLD_TAP(C_STOP, C_PLAY_PAUSE)
#define U_LOCK_POWER HOLD_TAP(C_POWER, LG(L))
#define U_VOLUME_DOWN_MUTE HOLD_TAP(C_MUTE, C_VOLUME_DOWN)
#define U_MIC_DOWN_MUTE HOLD_TAP(LC(LA(LS(C))), LC(LA(LS(I))))
#define U_ZOOM_OUT_RESET HOLD_TAP(LC(N0), LC(MINUS))

#define U_OUT_USB_BLE OUT_HOLD_TAP(OUT_BLE, OUT_USB)
#define U_RGB_TOG_OFF RGB_HOLD_TAP(RGB_OFF, RGB_TOG)
#define U_EP_TOG_OFF EXT_POWER_HOLD_TAP(EP_OFF, EP_TOG)
