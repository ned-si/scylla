// Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

/* Handedness: resistors are installed on the adapter PCB, so read it from the pin. */
#define SPLIT_HAND_PIN F1 // GP15 on the Splinky v3
#define SPLIT_HAND_PIN_LOW_IS_LEFT // High -> right, Low -> left.

/* The converter assumes a VBUS sense pin (GP19); detect the master by USB enumeration instead. */
#undef USB_VBUS_PIN
#define SPLIT_USB_DETECT

/* Reset: double-tap the reset button to enter the bootloader. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED 17U // GP17: GPxx names are not defined under the converter
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* Split: sync layer/mods state so RGB effects work on both halves. */
#define SPLIT_TRANSPORT_MIRROR

/* RGB matrix. */
#undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_DEFAULT_VAL 64
#define RGB_MATRIX_DEFAULT_SPD 32
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_FLOWER_BLOOMING
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
