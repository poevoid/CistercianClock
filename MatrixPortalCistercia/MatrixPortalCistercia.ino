
#include <Wire.h>
//#include <Adafruit_LIS3DH.h>
#include <Adafruit_Protomatter.h>
#include "vars.h"
#include <NTPClient.h>
#include <WiFiNINA.h>
Adafruit_Protomatter matrix(
  WIDTH, 4, 1, rgbPins, NUM_ADDR_PINS, addrPins,
  clockPin, latchPin, oePin, true);

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "north-america.pool.ntp.org", -18000, 3600);
//Adafruit_LIS3DH accel = Adafruit_LIS3DH();
#include "func.h"


void setup() {
  // put your setup code here, to run once:
  ProtomatterStatus status = matrix.begin();
  WiFi.begin(ssid, pass);
  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
  }
  timeClient.begin();
  //if (!accel.begin(0x19)) {
  //Serial.println("Couldn't find accelerometer");
  ///err(250);  // Fast bink = I2C error
  //}
  //accel.setRange(LIS3DH_RANGE_2_G);  // 2, 4, 8 or 16 G!
  //accel.setClick(2, CLICKTHRESHHOLD);
  #if defined(BACK_BUTTON)
    pinMode(BACK_BUTTON, INPUT_PULLUP);
  #endif
  #if defined(NEXT_BUTTON)
    pinMode(NEXT_BUTTON, INPUT_PULLUP);
  #endif
}

void loop() {
  // put your main code here, to run repeatedly:
  uint32_t t;
  while (((t = micros()) - prevTime) < (1000000L / MAX_FPS))
    ;
  prevTime = t;
  timeClient.update();
  matrix.fillScreen(0x0);  // blank the screen
  application();
  matrix.show();  //show objects
  delay(15000);
}
