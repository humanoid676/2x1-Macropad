// Copyright 2024 BuildTools (@BuildTools)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */
#define VIAL_KEYBOARD_UID {6xXX, 8xXX, 4xXX, 7xXX, 3xXX, 5xXX, 1xXX, 2xXX}
/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

    #define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
    #define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
