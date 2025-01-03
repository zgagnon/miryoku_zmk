// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/// Add a custom miryoku configuration, creating a new macro for the combination |>
///
#define MACRO_COMBINATION_PIPE_TO_ARROW 0x01 // Define a unique identifier for the macro

// Define the macro for double-tapping the | key
#define ACTION_MACRO_COMBINATION_PIPE_TO_ARROW \
    ACTION_MACRO( \
        ACTION_MODS_TAP(MOD_LSFT, KC_BSLS), \
        ACTION_MODS_TAP(MOD_LSFT, KC_BSLS) \
    )

// Add the macro to the keymap
#define MY_CUSTOM_MACRO \
    [0] = { \
        [MACRO_COMBINATION_PIPE_TO_ARROW] = ACTION_MACRO_COMBINATION_PIPE_TO_ARROW, \
    }
