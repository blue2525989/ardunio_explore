const int buttonPin = 2;

const int redLed = 9;
const int greenLed = 10;
const int blueLed = 11;

int buttonState = HIGH;

/**
 * setup
 * declare variables/pins
 */
void setup() {
  // console port
//  Serial.begin(9600);

  // set number
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  
  // set button
  pinMode(buttonPin, INPUT);
  
  // stop infernal blinky light on ardunio
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

/**
 * loop
 * main execution loop
 */
void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    randomColor();
//    Serial.println(buttonState);
  } else {
    noColor();
//    Serial.println(buttonState);
  }
  delay(75);
}

/**
 * randomColor
 * pick a random color for RGB scale
 */
void randomColor() {
  analogWrite(redLed, random(0, 256));
  analogWrite(greenLed, random(0, 256));
  analogWrite(blueLed, random(0, 256));
}

/**
 * noColor
 * set the power to 0 on RGB
 */
void noColor() {
  analogWrite(redLed, 0);
  analogWrite(greenLed, 0);
  analogWrite(blueLed, 0);
}
