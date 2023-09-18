#pragma once
#include "vars.h"
int concatenate(int i, int j) {
    int result = i * 100 + j; 
    return result;
}

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
  matrix.drawFastVLine(zeroX, zeroY - legth, legth, AMBER);
}

void drawCistercian2() {
  matrix.drawFastVLine(zeroX + legth, zeroY - legth, legth, AMBER);
}
void drawCistercian3() {
  matrix.drawLine(zeroX + legth, zeroY - legth, zeroX, zeroY, AMBER);
}
void drawCistercian4() {
  matrix.drawLine(zeroX, zeroY - legth, zeroX + legth, zeroY, AMBER);
}
void drawCistercian5(){
  drawCistercian1();
  drawCistercian4();
}
void drawCistercian6() {
  matrix.drawFastHLine(zeroX, zeroY - legth, legth, AMBER);
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
  matrix.drawFastVLine(zeroX, zeroY, legth, AMBER);
}
void drawCistercian20() {
  matrix.drawFastVLine(zeroX + legth, zeroY, legth + 1, AMBER);
}
void drawCistercian30() {
  matrix.drawLine(zeroX, zeroY, zeroX + legth, zeroY + legth, AMBER);
}
void drawCistercian40() {
  matrix.drawLine(zeroX, zeroY + legth, zeroX + legth, zeroY, AMBER);
}
void drawCistercian50(){
  drawCistercian10();
  drawCistercian40();
}
void drawCistercian60() {
  matrix.drawFastHLine(zeroX, zeroY + legth-1, legth, AMBER);
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
  drawCistercian20();
  drawCistercian60();
}
void drawCistercian1h() {
  matrix.drawFastVLine(zeroLength + 1, zeroY - legth, legth, AMBER);
}
void drawCistercian2h() {
  matrix.drawFastVLine(zeroLength - legth+1, zeroY - legth, legth, AMBER);
}
void drawCistercian3h() {
  matrix.drawLine(zeroLength - legth + 1, zeroY - legth, zeroLength + 1, zeroY, AMBER);
}
void drawCistercian4h() {
  matrix.drawLine(zeroLength - legth+1, zeroY, zeroLength+1, zeroY - legth, AMBER);
}
void drawCistercian5h(){
  drawCistercian1h();
  drawCistercian4h();
}
void drawCistercian6h() {
  matrix.drawFastHLine(zeroLength - legth +1, zeroY - legth, legth, AMBER);
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
  drawCistercian2h();
  drawCistercian6h();
}
void drawCistercian1th() {
  matrix.drawFastVLine(zeroLength+1, zeroY, legth, AMBER);
}
void drawCistercian2th() {
  matrix.drawFastVLine(zeroLength-legth+1, zeroY, legth, AMBER);
}
void drawCistercian3th() {
  matrix.drawLine(zeroLength-legth+1, zeroY+legth, zeroLength+1, zeroY, AMBER);
}
void drawCistercian4th() {
  matrix.drawLine(zeroLength-legth+1, zeroY, zeroLength, zeroY+legth-1, AMBER);
}

void drawCistercian5th(){
  drawCistercian1th();
  drawCistercian4th();
}
void drawCistercian6th() {
  matrix.drawFastHLine(zeroLength-legth+1, zeroY+legth-1, legth, AMBER);
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
  drawCistercian2th();
  drawCistercian6th();
}
void drawUnits(){
  if (counter == 0){
    drawCistercian0();
  }
  if (counter == 1){
    drawCistercian1();
  }
  if (counter ==2){
    drawCistercian2();
  }
  if (counter == 3){
    drawCistercian3();
  }
  if (counter == 4){
    drawCistercian4();
  }
  if (counter == 5){
    drawCistercian5();
  }
  if (counter == 6){
    drawCistercian6();
  }
  if (counter == 7){
    drawCistercian7();
  }
  if (counter == 8){
    drawCistercian8();
  }
  if (counter == 9){
    drawCistercian9();
  }
}
void drawTens(){
  if (counter >= 10 && counter < 20){
    drawCistercian10();
    counter -=10;
    drawUnits();
    counter+=10;
  }
  if (counter >= 20 && counter < 30){
    drawCistercian20();
    counter -=20;
    drawUnits();
    counter+=20;
  }
  if (counter >= 30 && counter < 40){
    drawCistercian30();
    counter -=30;
    drawUnits();
    counter+=30;
  }
  if (counter >= 40 && counter < 50){
    drawCistercian40();
    counter -=40;
    drawUnits();
    counter+=40;
  }
  if (counter >= 50 && counter < 60){
    drawCistercian50();
    counter -=50;
    drawUnits();
    counter+=50;
  }
  if (counter >= 60 && counter < 70){
    drawCistercian60();
    counter -=60;
    drawUnits();
    counter+=60;
  }
  if (counter >= 70 && counter < 80){
    drawCistercian70();
    counter -=70;
    drawUnits();
    counter+=70;
  }
  if (counter >= 80 && counter < 90){
    drawCistercian80();
    counter -=80;
    drawUnits();
    counter+=80;
  }
  if (counter >= 90 && counter < 100){
    drawCistercian90();
    counter -=90;
    drawUnits();
    counter+=90;
  }
}
void drawHundreds(){
  if (counter >= 100&& counter < 200){
    drawCistercian1h();
    counter -=100;
    drawUnits();
    drawTens();
    counter+=100;
  }
  if (counter >= 200&& counter < 300){
    drawCistercian2h();
    counter -=200;
    drawUnits();
    drawTens();
    counter+=200;
  }
  if (counter >= 300&& counter < 400){
    drawCistercian3h();
    counter -=300;
    drawUnits();
    drawTens();
    counter+=300;
  }
  if (counter >= 400&& counter < 500){
    drawCistercian4h();
    counter -=400;
    drawUnits();
    drawTens();
    counter+=400;
  }
  if (counter >= 500&& counter < 600){
    drawCistercian5h();
    counter -=500;
    drawUnits();
    drawTens();
    counter+=500;
  }
  if (counter >= 600&& counter < 700){
    drawCistercian6h();
    counter -=600;
    drawUnits();
    drawTens();
    counter+=600;
  }
  if (counter >= 700&& counter < 800){
    drawCistercian7h();
    counter -=700;
    drawUnits();
    drawTens();
    counter+=700;
  }
  if (counter >= 800&& counter < 900){
    drawCistercian8h();
    counter -=800;
    drawUnits();
    drawTens();
    counter+=800;
  }
  if (counter >= 900&& counter < 1000){
    drawCistercian9h();
    counter -=900;
    drawUnits();
    drawTens();
    counter+=900;
  }
}
void drawThousands(){
  if (counter >= 1000 && counter < 2000){
    drawCistercian1th();
    counter -=1000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=1000;
  }
  if (counter >= 2000 && counter < 3000){
    drawCistercian2th();
    counter -=2000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=2000;
  }
  if (counter >= 3000 && counter < 4000){
    drawCistercian3th();
    counter -=3000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=3000;
  }
  if (counter >= 4000 && counter < 5000){
    drawCistercian4th();
    counter -=4000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=4000;
  }
  if (counter >= 5000 && counter < 6000){
    drawCistercian5th();
    counter -=5000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=5000;
  }
  if (counter >= 6000 && counter < 7000){
    drawCistercian6th();
    counter -=6000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=6000;
  }
  if (counter >= 7000 && counter < 8000){
    drawCistercian7th();
    counter -=7000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=7000;
  }
  if (counter >= 8000 && counter < 9000){
    drawCistercian8th();
    counter -=8000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=8000;
  }
  if (counter >= 9000 && counter < 10000){
    drawCistercian9th();
    counter -=9000;
    drawUnits();
    drawTens();
    drawHundreds();
    counter+=9000;
  }
}
void drawDots(){
  if (counter % 2 == 0){
    matrix.fillRect(30, 7, 4, 4, AMBER);
    matrix.fillRect(30, 22, 4, 4, AMBER);
  }
}
void drawCistercian(){
  drawUnits();
  drawTens();
  drawHundreds();
  drawThousands();
}

void application() {
  //matrix.setCursor(0,0);
  //matrix.print("Working!");
  //matrix.drawBitmap(32, 15, cistercian0, 7, 7, WHITE);
  //matrix.drawFastHLine(zeroX, 0, zeroLength, WHITE);
  //thousands
  /*drawCistercian6th();
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
  //zero*/
  
  /*if(!digitalRead(NEXT_BUTTON) && counter >= 0) {
      counter--;
    //while(!digitalRead(BACK_BUTTON));
  }
  if(!digitalRead(BACK_BUTTON) && counter < 9999) {
    counter++;
    //while(!digitalRead(BACK_BUTTON));
  }*/
  //drawDots();
  //matrix.setCursor(32,0);
  //matrix.print(counter);
  int h = timeClient.getHours();
  int m = timeClient.getMinutes();
  counter = concatenate(h, m);

  drawCistercian();//interpret the counter
  drawCistercian0();//but always shows zero



}