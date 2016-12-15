static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: Layer 0: Default Layer with US host layout.
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ESC   |   1  |   2  |   3  |   4  |   5  |      |           |Dead `|   6  |   7  |   8  |   9  |   0  |  BSPC  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  TAB   |   Q  |   W  |   F  |   P  |   G  | CAPS |           | PgUp |   J  |   L  |   U  |   Y  |   ;  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  ESC   |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
     * |--------+------+------+------+------+------|  NO  |           | PgDn |------+------+------+------+------+--------|
     * | LSHIFT |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RSHIFT |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Ctrl | Ctrl | Ctrl | LAlt | LGui |                                       |  L1  | LEFT | DOWN |  UP | RIGHT |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  NO  |Teensy|       |  NO  |  NO  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  NO  |       |  NO  |      |      |
     *                                 |  L1  |  L2  |------|       |------|  ENT |  Spc |
     *                                 |      |      |  L3  |       |  NO  |      |      |
     *                                 `--------------------'       `--------------------'
     *
     *
     * Keymap: Layer 1 - Symbols and Navigation with US host layout.
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   !  |   #  |   {  |   }  |   ~  |      |           |      |   *  |   +  |  UP  |      |   :  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   @  |   $  |   (  |   )  |   %  |------|           |------|   =  | LEFT | DOWN | RIGHT|   _  |   "    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   `  |   ^  |   [  |   ]  |   |  |      |           |      |   &  |   -  |  <   |  >   |  ?   |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap: Layer 2 - Numpad
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |   7  |   8  |   9  |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |   4  |   5  |   6  |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |   1  |   2  |   3  |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |   0  |   ,  |   .  |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap: Layer 3: Swedish Colemak Layer with special host layout.
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ESC   |   1  |   2  |   3  |   4  |   5  |      |           |Dead `|   6  |   7  |   8  |   9  |   0  |  BSPC  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  TAB   |   Q  |   W  |   F  |   P  |   G  |  NO  |           | PgUp |   J  |   L  |   U  |   Y  |   Ä  |   Å    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  BSPC  |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   Ö    |
     * |--------+------+------+------+------+------|  NO  |           | PgDn |------+------+------+------+------+--------|
     * | LSHIFT |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RSHIFT |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Ctrl | Ctrl | Ctrl | LAlt | LGui |                                       |  L1  | LEFT | DOWN |  UP | RIGHT |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  NO  |  NO  |       |  NO  |  NO  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  NO  |       |  NO  |      |      |
     *                                 |  L1  |  L2  |------|       |------|  ENT |  Spc |
     *                                 |      |      |  L0  |       |  NO  |      |      |
     *                                 `--------------------'       `--------------------'
     *
     *
     *
     */

    KEYMAP(  // Layer0: default - To be used with us colemak host layout.
        // left hand
        ESC, 1,   2,   3,   4,   5,   NO,
        TAB, Q,   W,   E,   R,   T,   CAPS,
        ESC, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   NO,
        LCTL,LCTL,LCTL,LALT,LGUI,
                                      NO,FN30,
                                           NO,
                                 FN25,FN26,FN28,
        // right hand
             NO, 6,   7,   8,   9,   0,   BSPC,
             NO, Y,   U,   I,   O,   P,   BSLS,
                 H,   J,   K,   L,   SCLN,QUOT,
             NO, N,   M,   COMM,DOT, SLSH,RSFT,
                      FN25,  LEFT,DOWN,UP,  RIGHT,
        NO,  NO,
        NO,
        NO,  ENT,SPC
    ),

    KEYMAP(  // Layer1: Swedish layer to be used with Colemak (Programming) host layout.
        // left hand
        ESC, 1,   2,   3,   4,   5,   NO,
        TAB, Q,   W,   E,   R,   T,   CAPS,
        BSPC,A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   NO,
        LCTL,LCTL,LCTL,LALT,LGUI,
                                      NO,  NO,
                                           NO,
                                 FN25,FN26,FN27,
        // right hand
             NO,   6,   7,   8,   9,   0,   BSPC,
             PGUP, Y,   U,   I,   O,   PMNS,PAST,
                   H,   J,   K,   L,   SCLN,PPLS,
             PGDN, N,   M,   COMM,DOT, SLSH,RSFT,
                      FN25,LEFT,DOWN,UP, RIGHT,
        NO,  NO,
        NO,
        NO,  ENT,SPC
    ),

    KEYMAP(  // Layer2: Arrows and punctuation, HOLD
        // left hand
        TRNS,  F1,  F2,  F3,  F4,  F5,TRNS,
        TRNS, FN1, FN3,FN10,FN11,FN13,TRNS,
        TRNS, FN2, FN4, FN9, FN0, FN5,
        TRNS, GRV, FN6,LBRC,RBRC,FN12,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        // right hand
             TRNS,F6,  F7,  F8,  F9,  F10, TRNS,
             PGUP,FN8, FN20,UP,  NO,  P   ,BSLS,
                  EQL, LEFT,DOWN,RGHT,FN14,QUOT,
             PGDN,FN7, MINS,FN16,FN17,FN18,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer3: Numpad, HOLD
        // left hand
        TRNS, NO, NO, NO, NO, NO,TRNS,
        TRNS, NO, NO, NO, NO, NO,TRNS,
        TRNS, NO, NO, NO, NO, NO,
        TRNS, NO, NO, NO, NO, NO,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        // right hand
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  7,   8,   9,   NO,  NO  ,
                  NO,  4,   5,   6,   NO,  NO  ,
             TRNS,NO,  1,   2,   3,   NO,  TRNS,
                       0, COMM,DOT,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),



    /*
    KEYMAP(  // Layer4: To be used with us qwerty host layout.
        // left hand
        ESC, 1,   2,   3,   4,   5,   NO,
        TAB, Q,   W,   F,   P,   G,   CAPS,
        BSPC,A,   R,   S,   T,   D,
        LSFT,Z,   X,   C,   V,   B,   NO,
        LCTL,LCTL,LCTL,LALT,LGUI,
                                      NO,FN30,
                                           NO,
                                 FN25,FN26,FN28,
        // right hand
             NO, 6,   7,   8,   9,   0,   BSPC,
             NO, J,   L,   U,   Y,   SCLN,BSLS,
                 H,   N,   E,   I,   O,   QUOT,
             NO, K,   M,   COMM,DOT, SLSH,RSFT,
                      FN25,  LEFT,DOWN,UP,  RIGHT,
        NO,  NO,
        NO,
        NO,  ENT,SPC
    ),
    /*

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
    CUSTOM_KEY,
    L_CTRL_ALT_ENT,
    R_CTRL_ALT_ENT,
};

enum macro_id {
    XMONAD_RESET,
    PASSWORD1,
    PASSWORD2,
    PASSWORD3,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {

    [0] =   ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN0  = Shifted 0 // )
    [1] =   ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN1  = Shifted 1 // !
    [2] =   ACTION_MODS_KEY(MOD_LSFT, KC_2),                // FN2  = Shifted 2 // @
    [3] =   ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN3  = Shifted 3 // #
    [4] =   ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN4  = Shifted 4 // $
    [5] =   ACTION_MODS_KEY(MOD_LSFT, KC_5),                // FN5  = Shifted 5 // %
    [6] =   ACTION_MODS_KEY(MOD_LSFT, KC_6),                // FN6  = Shifted 6 // ^
    [7] =   ACTION_MODS_KEY(MOD_LSFT, KC_7),                // FN7  = Shifted 7 // &
    [8] =   ACTION_MODS_KEY(MOD_LSFT, KC_8),                // FN8  = Shifted 8 // *
    [9] =   ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN9  = Shifted 9 // (
	[10] =  ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN10 = Shifted [ // {
	[11] =  ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN11 = Shifted ] // }

    [12] =  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN12 = Shifted \ // |
    [13] =  ACTION_MODS_KEY(MOD_LSFT, KC_GRV),              // FN13 = Shifted ` // ~
    [14] =  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN14 = Shifted - // _
    [15] =  ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),             // FN15 = Shifted ' // "
    [16] =  ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN16 = Shifted , // <
    [17] =  ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN17 = Shifted . // >
    [18] =  ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),             // FN18 = Shifted / // ?
    [19] =  ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),             // FN19 = Shifted ; // :
    [20] =  ACTION_MODS_KEY(MOD_LSFT, KC_EQL),              // FN20 = Shifted = // +

    [21] =  ACTION_MODS_KEY(MOD_LALT, KC_P),                // FN21 = Ä
    [22] =  ACTION_MODS_KEY(MOD_LALT, KC_LBRC),             // FN22 = Å
    [23] =  ACTION_MODS_KEY(MOD_LALT, KC_QUOT),             // FN23 = Ö

    //[20] =	ACTION_LAYER_TAP_TOGGLE(1),						// FN20 - Tap toggle Layer 1
    //[21] =	ACTION_LAYER_TAP_TOGGLE(2),						// FN21 - Tap toggle Layer 2
    //[22] =	ACTION_LAYER_TAP_TOGGLE(3),						// FN22 - Tap toggle Layer 3

    [25] =  ACTION_LAYER_MOMENTARY(2),                      // FN25 = momentary Layer2
    [26] =  ACTION_LAYER_MOMENTARY(3),                      // FN26 = momentary Layer3
    [27] =  ACTION_DEFAULT_LAYER_SET(0),                    // FN27 = Set default layer to Layer0
    [28] =  ACTION_DEFAULT_LAYER_SET(1),                    // FN28 = Set default layer to Layer1


    //[24] =  ACTION_MODS_ONESHOT(MOD_LSFT),                  // FN24 = Oneshot shift

    [30] =  ACTION_FUNCTION(TEENSY_KEY),                    // FN23 - Teensy key


/*
    [1] =   ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN1  = Shifted BackSlash // " in Workman
    [2] =   ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN2  = Shifted Minus     // \ in Workman
    [3] =   ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN3  = Shifted comma     // < in Workman
    [4] =   ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN4  = Shifted dot       // > in Workman

    [5] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPC),         // FN5  = LShift with tap BackSpace
    [6] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_DEL),          // FN6  = LCtrl  with tap Delete
    [7] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_ESC),          // FN7  = LAlt   with tap Escape
    [8] =   ACTION_MODS_TAP_KEY(MOD_RGUI, KC_INS),          // FN8  = RGui   with tap Ins
    [9] =   ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),          // FN9  = RShift with tap Enter
    [10] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),          // FN10 = RCtrl  with tap Space

    [11] =  ACTION_MODS_TAP_KEY(MOD_LSFT, KC_TAB),          // FN11 = LShift with tap Tab
    [12] =  ACTION_MODS_TAP_KEY(MOD_LCTL, KC_GRV),          // FN12 = LCtrl  with tap Tilda
    [13] =  ACTION_MODS_TAP_KEY(MOD_LALT, KC_SPC),          // FN13 = LAlt   with tap Space
    [14] =  ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),          // FN14 = LGui   with tap Escape
    [15] =  ACTION_MODS_TAP_KEY(MOD_RSFT, KC_QUOT),         // FN15 = RShift with tap quotes
    [16] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RBRC),         // FN16 = RCtrl  with tap ]

    [17] =  ACTION_LAYER_SET(0, ON_BOTH),                   // FN17 - set Layer0
    [18] =  ACTION_LAYER_SET(1, ON_BOTH),                   // FN18 - set Layer1, to use Workman layout at firmware level
    [19] =  ACTION_LAYER_SET(2, ON_BOTH),                   // FN19 - set Layer2, to use with Numpad keys

    [21] =  ACTION_FUNCTION_TAP(L_CTRL_ALT_ENT),            // FN21 - momentary Layer5+CTRL+ALT on Enter, to use with F* keys on top row
    [22] =  ACTION_FUNCTION_TAP(R_CTRL_ALT_ENT),            // FN22 - momentary Layer6+CTRL+ALT on Enter, to use with F* keys on top row + utils

    [28] =  ACTION_LAYER_TAP_KEY(4, KC_A),                  // FN28 = momentary Layer4 on A key, to use with unconvenient keys
    [29] =  ACTION_LAYER_TAP_KEY(3, KC_S),                  // FN29 = momentary Layer3 on S key, to use with F* keys
    [30] =  ACTION_LAYER_TAP_KEY(8, KC_D),                  // FN30 = momentary Layer8 on D key, to use with mouse and navigation keys
    [31] =  ACTION_LAYER_TAP_KEY(2, KC_F),                  // FN31 = momentary Layer2 on F key, to use with Numpad keys

    // i'd like to remove this - will try to get used to live without this and convert them to usual keys
    [20] =  ACTION_LAYER_MOMENTARY(2),                      // FN20 - momentary Layer2, to use with Numpad keys
// or
//  [20] =  ACTION_FUNCTION_TAP(CUSTOM_KEY),                // FN20 - use custom key, with tapping support

    [23] =  ACTION_LAYER_TAP_KEY(7, KC_BSLS),               // FN23 - momentary Layer7 on ' , to use with F* keys (F1-F24)

    [24] =  ACTION_LAYER_TAP_KEY(4, KC_Z),                  // FN24 = momentary Layer4 on Z key, to use with unconvenient keys
    [25] =  ACTION_LAYER_TAP_KEY(3, KC_X),                  // FN25 = momentary Layer3 on X key, to use with F* keys
    [26] =  ACTION_LAYER_TAP_KEY(8, KC_C),                  // FN26 = momentary Layer8 on C key, to use with mouse and navigation keys
    [27] =  ACTION_LAYER_TAP_KEY(9, KC_V),                  // FN27 = momentary Layer9 on V key, to use with application-specific shortcuts
    */
};

static const uint16_t PROGMEM fn_actions_4[] = {
    [1]  =  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN1  = Shifted BackSlash // " in Workman
    [2]  =  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN2  = Shifted Minus     // \ in Workman
    [3]  =  ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN3  = Shifted comma     // < in Workman
    [4]  =  ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN4  = Shifted dot       // > in Workman
    [5]  =  ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),             // FN5  = Shifted slash     // ? in Workman
};

static const uint16_t PROGMEM fn_actions_7[] = {
    [0]  =  ACTION_MACRO(XMONAD_RESET),                     // FN0  = xmonad-reanimator
    [1]  =  ACTION_MACRO(PASSWORD1),                        // FN1  = default password
    [2]  =  ACTION_MACRO(PASSWORD1),                        // FN2  = other password
    [3]  =  ACTION_MACRO(PASSWORD1),                        // FN3  = mega password
};

static const uint16_t PROGMEM fn_actions_9[] = {
    [0]  =  ACTION_MODS_KEY(MOD_LCTL,          KC_P0),      // FN0  = Ctrl+0
    [1]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P1),      // FN1  = Alt+1
    [2]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P2),      // FN2  = Alt+2
    [3]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P3),      // FN3  = Alt+3
    [4]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P4),      // FN4  = Alt+4
    [5]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P5),      // FN5  = Alt+5
    [6]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P6),      // FN6  = Alt+6
    [7]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P7),      // FN7  = Alt+7
    [8]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P8),      // FN8  = Alt+8
    [9]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P9),      // FN9  = Alt+9
    [10] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_TAB),     // FN10 = Ctrl+Shift+Tab
    [11] =  ACTION_MODS_KEY(MOD_LCTL,          KC_TAB),     // FN11 = Ctrl+Tab
    [12] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_PGUP),    // FN12 = Ctrl+Shift+PgUp
    [13] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_PGDN),    // FN13 = Ctrl+Shift+PgDn
    [14] =  ACTION_MODS_KEY(MOD_LCTL,          KC_PMNS),    // FN14 = Ctrl+Pad Minus
    [15] =  ACTION_MODS_KEY(MOD_LCTL,          KC_PPLS),    // FN15 = Ctrl+Pad Plus
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // print("action_function called\n");
    // print("id  = "); phex(id); print("\n");
    // print("opt = "); phex(opt); print("\n");

    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(50);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }

    if (id == L_CTRL_ALT_ENT || id == R_CTRL_ALT_ENT) {
        if (record->tap.count == 0 || record->tap.interrupted) {
            uint8_t weak_mods;
            uint8_t layer;

            if (id == L_CTRL_ALT_ENT) {
                weak_mods = MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT);
                layer     = 5;
            } else {
                weak_mods = MOD_BIT(KC_RCTL) | MOD_BIT(KC_RALT);
                layer     = 6;
            }

            if (record->event.pressed) {
                layer_on(layer);
                add_weak_mods(weak_mods);
            } else {
                del_weak_mods(weak_mods);
                layer_off(layer);
            }
        } else {
            if (record->event.pressed) {
                add_key(KC_ENT);
                send_keyboard_report();
            } else {
                del_key(KC_ENT);
                send_keyboard_report();
            }
        }
    }


/*
 * just an example of custom key implementation
 * not really needed with custom keymap_fn_to_action(),
 * because it will allow you to have 32 FN** keys on EACH layer
 */

/*
    keyevent_t event = record->event;

    if (id == CUSTOM_KEY) {
        uint8_t layer = biton32(layer_state);
        uint8_t col = event.key.col;
        uint8_t row = event.key.row;
        uint8_t handled = 0;

        if (event.pressed) {
            if (layer == XXX && col == XXX && row == XXX) {
                    action_macro_play(
                        MACRO(
                            ...........
                        END)
                    );
                    handled++;
                }
            }
        }

        if (!handled) {
            print("custom key not handled");
            print(": layer "); pdec(layer);
            print(", col "); pdec(col);
            print(", row "); pdec(row);
            print("\n");
        }
    }
*/

}

#include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
            case XMONAD_RESET:  return MACRO_XMONAD_RESET;
            case PASSWORD1:     return MACRO_PASSWORD1;
        }
    }
    return MACRO_NONE;
}

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_4_SIZE   (sizeof(fn_actions_4) / sizeof(fn_actions_4[0]))
#define FN_ACTIONS_7_SIZE   (sizeof(fn_actions_7) / sizeof(fn_actions_7[0]))
#define FN_ACTIONS_9_SIZE   (sizeof(fn_actions_9) / sizeof(fn_actions_9[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
 /*
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    if (layer == 4 && FN_INDEX(keycode) < FN_ACTIONS_4_SIZE) {
        action.code = pgm_read_word(&fn_actions_4[FN_INDEX(keycode)]);
    }

    if (layer == 7 && FN_INDEX(keycode) < FN_ACTIONS_7_SIZE) {
        action.code = pgm_read_word(&fn_actions_7[FN_INDEX(keycode)]);
    }

    if (layer == 9 && FN_INDEX(keycode) < FN_ACTIONS_9_SIZE) {
        action.code = pgm_read_word(&fn_actions_9[FN_INDEX(keycode)]);
    }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
*/
