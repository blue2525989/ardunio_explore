/*
 * randomBlinkMain.ino
 * author: Jason Bierbrauer
 * Main File - this is a .ino file for compiling
 * blink a RGB LED using a push button
 */
#include "randomBlink.h"

int main ()
  {
    init ();  // initialize timers
  
    RandomBlink* blinky = new RandomBlink(9, 10, 11, 2);
    while (true) {
      blinky->checkButton();
    }
  }  
