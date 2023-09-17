#pragma once
#include "vars.h"

void err(int x) {
  uint8_t i;
  pinMode(LED_BUILTIN, OUTPUT);        // Using onboard LED
  for (i = 1;; i++) {                  // Loop forever...
    digitalWrite(LED_BUILTIN, i & 1);  // LED on/off blink to alert user
    delay(x);
  }
}

void drawCistercian0() {
  matrix.drawFastHLine(zeroX, zeroY, zeroLength, AMBER);
}

void drawCistercian1() {
  matrix.drawFastVLine(zeroX, zeroY - legth, legth, RED);
}

void drawCistercian2() {
  matrix.drawFastVLine(zeroX + legth, zeroY - legth, legth, RED);
}
void drawCistercian3() {
  matrix.drawLine(zeroX + legth, zeroY - legth, zeroX, zeroY, RED);
}
void drawCistercian4() {
  matrix.drawLine(zeroX, zeroY - legth, zeroX + legth, zeroY, RED);
}
void drawCistercian5(){
  drawCistercian1();
  drawCistercian4();
}
void drawCistercian6() {
  matrix.drawFastHLine(zeroX, zeroY - legth, legth, RED);
}
void drawCistercian7(){
  drawCistercian1();
  drawCistercian6();
}
void drawCistercian8(){
  drawCistercian2();
  drawCistercian6();
}
void drawCistercian9(){
  drawCistercian1();
  drawCistercian2();
  drawCistercian6();
}
void drawCistercian10() {
  matrix.drawFastVLine(zeroX, zeroY, legth, GREEN);
}
void drawCistercian20() {
  matrix.drawFastVLine(zeroX + legth, zeroY, legth + 1, GREEN);
}
void drawCistercian30() {
  matrix.drawLine(zeroX, zeroY, zeroX + legth, zeroY + legth, GREEN);
}
void drawCistercian40() {
  matrix.drawLine(zeroX, zeroY + legth, zeroX + legth, zeroY, GREEN);
}
void drawCistercian50(){
  drawCistercian10();
  drawCistercian40();
}
void drawCistercian60() {
  matrix.drawFastHLine(zeroX, zeroY + legth-1, legth, GREEN);
}
void drawCistercian70(){
  drawCistercian10();
  drawCistercian60();
}
void drawCistercian80(){
  drawCistercian20();
  drawCistercian60();
}
void drawCistercian90(){
  drawCistercian10();
  drawCistercian20()
  drawCistercian60();
}
void drawCistercian1h() {
  matrix.drawFastVLine(zeroLength + 1, zeroY - legth, legth, MAGENTA);
}
void drawCistercian2h() {
  matrix.drawFastVLine(zeroLength - legth+1, zeroY - legth, legth, MAGENTA);
}
void drawCistercian3h() {
  matrix.drawLine(zeroLength - legth + 1, zeroY - legth, zeroLength + 1, zeroY, MAGENTA);
}
void drawCistercian4h() {
  matrix.drawLine(zeroLength - legth+1, zeroY, zeroLength+1, zeroY - legth, MAGENTA);
}
void drawCistercian5h(){
  drawCistercian1h();
  drawCistercian4h();
}
void drawCistercian6h() {
  matrix.drawFastHLine(zeroLength - legth +1, zeroY - legth, legth, MAGENTA);
}
void drawCistercian7h(){
  drawCistercian1h();
  drawCistercian6h();
}
void drawCistercian8h(){
  drawCistercian2h();
  drawCistercian6h();
}
void drawCistercian9h(){
  drawCistercian1h();
  drawCistercian2h()
  drawCistercian6h();
}
void drawCistercian1th() {
  matrix.drawFastVLine(zeroLength+1, zeroY, legth, YELLOW);
}
void drawCistercian2th() {
  matrix.drawFastVLine(zeroLength-legth+1, zeroY, legth, YELLOW);
}
void drawCistercian3th() {
  matrix.drawLine(zeroLength-legth+1, zeroY+legth, zeroLength+1, zeroY, YELLOW);
}
void drawCistercian4th() {
  matrix.drawLine(zeroLength-legth+1, zeroY, zeroLength, zeroY+legth-1, YELLOW);
}

void drawCistercian5th(){
  drawCistercian1th();
  drawCistercian4th();
}
void drawCistercian6th() {
  matrix.drawFastHLine(zeroLength-legth+1, zeroY+legth-1, legth, YELLOW);
}

void drawCistercian7th(){
  drawCistercian1th();
  drawCistercian6th();
}
void drawCistercian8th(){
  drawCistercian2th();
  drawCistercian6th();
}
void drawCistercian9th(){
  drawCistercian1th();
  drawCistercian2th()
  drawCistercian6th();
}

void application() {
  //matrix.setCursor(0,0);
  //matrix.print("Working!");
  //matrix.drawBitmap(32, 15, cistercian0, 7, 7, WHITE);
  //matrix.drawFastHLine(zeroX, 0, zeroLength, WHITE);
  //thousands
  drawCistercian6th();
  drawCistercian4th();
  drawCistercian3th();
  drawCistercian2th();
  drawCistercian1th();
  //hundreds
  drawCistercian6h();
  drawCistercian4h();
  drawCistercian3h();
  drawCistercian2h();
  drawCistercian1h();
  //tens
  drawCistercian60();
  drawCistercian40();
  drawCistercian30();
  drawCistercian20();
  drawCistercian10();
  //units
  drawCistercian6();
  drawCistercian4();
  drawCistercian3();
  drawCistercian2();
  drawCistercian1();
  //zero
  drawCistercian0();
}