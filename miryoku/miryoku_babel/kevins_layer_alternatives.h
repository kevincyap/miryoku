#define KEVIN_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,               &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,                \
U_MT_X(LGUI, A),   U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,               &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT_X(LGUI, SQT),    \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,               &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define KEVIN_ALTERNATIVES_BASE_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,               &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT_X(LGUI, A),   U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp D,               &kp H,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT_X(LGUI, O),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,               &kp K,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define KEVIN_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,               &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,              \
U_MT_X(LGUI, A),   U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,               &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT_X(LGUI, O),      \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,               &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT_X(LGUI, A),   U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             &kp D,             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT_X(LGUI, S),   \
U_LT(U_BUTTON, SLASH),  &kp Q,        &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define KEVIN_ALTERNATIVES_BASE_GAME \
&kp ESC,           &kp Q,             &kp W,             &kp E,             U_MT_X(T, R),        &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp TAB,           &kp A,             &kp S,             &kp D,             U_MT_X(G, F),        &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT_X(LGUI, SQT), \
&kp LSHFT,         &kp Z,             &kp X,             &kp C,             U_MT_X(B, V),        &kp N,             &kp M,             &kp COMMA,         &kp DOT,           U_LT(U_BUTTON, SLASH),         \
U_NP,              U_NP,              &kp LCTRL,         &kp SPACE,         U_LT(U_NUM, ESC),    U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define KEVIN_ALTERNATIVES_NUM \
&kp PRCNT,         &kp N7,            &kp N8,            &kp N9,            &kp AT,              &u_to_U_BASE,      &kp LBKT,          &kp RBKT,          &kp ASTRK,         U_BOOT,            \
&kp GRAVE,         &kp N4,            &kp N5,            &kp N6,            &kp ASTRK,           U_NA,              U_MT(LSHFT, UNDER),U_MT(LCTRL, EQUAL),U_MT(LALT, LPAR),  U_MT(LGUI, RPAR),          \
&kp COLON,         &kp N1,            &kp N2,            &kp N3,            &kp PIPE,            U_NA,              &kp MINUS,         &kp PLUS,          &kp CARET,         &kp BSLH,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define KEVIN_ALTERNATIVES_SYM \
&kp DLLR,          &kp LBRC,          &kp RBRC,          &kp LBKT,          &kp RBKT,            U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp TILDE,         &kp EQUAL,         &kp MINUS,         &kp PLUS,          &kp AMPS,            U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp SEMI,          &kp EXCL,          &kp HASH,          &kp CARET,         &kp BSLH,            U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define KEVIN_ALTERNATIVES_SYM_BKP \
&kp DLLR,          &kp LBRC,          &kp RBRC,          &kp LBKT,          &kp RBKT,            U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp TILDE,         &kp EQUAL,         &kp MINUS,         &kp PLUS,          &kp AMPS,            U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp SEMI,          &kp EXCL,          &kp HASH,          &kp CARET,         &kp BSLH,            U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define KEVIN_ALTERNATIVES_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,                U_RDO,             U_PST,             U_CPY,              U_CUT,              U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &u_caps_word,        &kp LEFT,          &kp DOWN,          &kp UP,             &kp RIGHT,          &u_caps_word,      \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,               &kp HOME,          &kp PG_DN,         &kp PG_UP,          &kp END,            U_NA,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                &kp RET,           &kp BSPC,          &kp DEL,            U_NP,               U_NP

#define KEVIN_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,            U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,     U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,             U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define KEVIN_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,               U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,                U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F13,           &kp F14,           &kp F15,           &kp F16,           &kp F17,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define KEVIN_ALTERNATIVES_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,                U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,                &u_out_tog,        &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,                &bt BT_CLR,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP
