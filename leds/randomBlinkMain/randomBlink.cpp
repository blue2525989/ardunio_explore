/*
 * randomBlink.cpp
 * author: Jason Bierbrauer
 * blink a RGB LED using a push button
 */
#include "Arduino.h"
#include "RandomBlink.h"

RandomBlink::RandomBlink(int redLed, int greenLed, int blueLed, int buttonPin)
{
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  _redLed = redLed;
  _greenLed = greenLed;
  _blueLed = blueLed;

  pinMode(buttonPin, INPUT);
  _buttonPin = buttonPin;

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

/**
 * checkButton
 * function for checking button
 */
void RandomBlink::checkButton() {
  _buttonState = digitalRead(_buttonPin);

  if (_buttonState == HIGH) {
    randomColor();
    Serial.println(_buttonState);
  } else {
    noColor();
    Serial.println(_buttonState);
  }
  delay(100);
}

/**
 * randomColor
 * pick a random color for RGB scale
 */
void RandomBlink::randomColor() {
  analogWrite(_redLed, random(0, 256));
  analogWrite(_greenLed, random(0, 256));
  analogWrite(_blueLed, random(0, 256));
}

/**
 * noColor
 * set the power to 0 on RGB
 */
void RandomBlink::noColor() {
  analogWrite(_redLed, 0);
  analogWrite(_greenLed, 0);
  analogWrite(_blueLed, 0);
}
