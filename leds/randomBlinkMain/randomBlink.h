/*
 * randomBlink.h
 * author: Jason Bierbrauer
 * blink a RGB LED using a push button
 */
#ifndef RandomBlink_h
#define RandomBlink_h

#include "Arduino.h"

class RandomBlink
{
  public:
    RandomBlink(int redLed, int greenLed, int blueLed, int buttonPin);
    void checkButton();
    
   private:
    void randomColor();
    void noColor();
    int _redLed;
    int _greenLed;
    int _blueLed;
    int _buttonPin;
    boolean _buttonState;
};

#endif
