#pragma once
#include "arrays.h"
//----------------RGB Matrix settings------------------//
#define HEIGHT 32   // Matrix height (pixels) - SET TO 64 FOR 64x64 MATRIX!
#define WIDTH 64    // Matrix width (pixels)
#define MAX_FPS 40  // Maximum redraw rate, frames/second
// Color definitions
#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define AMBER 0x9465
#define WHITE 0xFFFF

#if defined(_VARIANT_MATRIXPORTAL_M4_)  // MatrixPortal M4
uint8_t rgbPins[] = { 7, 8, 9, 10, 11, 12 };
uint8_t addrPins[] = { 17, 18, 19, 20, 21 };
uint8_t clockPin = 14;
uint8_t latchPin = 15;
uint8_t oePin = 16;
#else  // MatrixPortal ESP32-S3
uint8_t rgbPins[] = { 42, 41, 40, 38, 39, 37 };
uint8_t addrPins[] = { 35, 36, 48, 45, 21 };
uint8_t clockPin = 2;
uint8_t latchPin = 47;
uint8_t oePin = 14;
#endif

#define CLICKTHRESHHOLD 20
#define NUM_ADDR_PINS 4

uint8_t legth = 16;  // leg length
uint8_t zeroLength = 60;
uint8_t zeroX = 2;
uint8_t zeroY = 16;

uint32_t prevTime = 0;  // Used for frames-per-second throttle