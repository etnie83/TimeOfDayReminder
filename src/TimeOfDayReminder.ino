/*
    Edited (C) 2018 André Geiger TimeOfDayReminder

    TimeOfDayReminder is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
*/
#include <ESP8266WiFi.h>
#include "userconfig.h"                    // Fixed user configurable options

// =========Definitions==============
#define MICROSEC              1000000L
#define MILLISEC              1000L
#define SEC                   1L
#define MINUTE                (unsigned int) 60L*SEC
#define HOUR                  (unsigned int) 60L*MINUTE
#define DAY                   (unsigned long) 24L*HOUR
int hour=3;
int minute=27;

// =========WiFi parameters===========
#define MAX_WIFI_ATTEMPTS     20
int _attempts = 0;
// ====================================

#ifndef MY_LANGUAGE
  #include "language/de-DE.h"
#else
  #define QUOTEME(x) QUOTEME_1(x)
  #define QUOTEME_1(x) #x
  #define INCLUDE_FILE(x) QUOTEME(language/x.h)
  #include INCLUDE_FILE(MY_LANGUAGE)
#endif

#ifdef NEOPIXEL
#include "neopixel.h"
#endif // NEOPIXEL

// Global variables

// ==============SETUP================
void setup() {
  // Serial initialize
  serialInit();
  // Wifi initialize
  wifiInit();
#ifdef NEOPIXEL
  pixels.begin(); // This initializes the NeoPixel library.
  pixels.setBrightness(50);
#endif
}

// ===============LOOP================
void loop()
{
showdisplay(0);
delay(3000);
for (int i = 0; i < 3; i++)
  {
    showdisplay(1);
  }

}
