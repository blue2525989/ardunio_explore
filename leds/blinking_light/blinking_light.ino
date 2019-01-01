int red_light_pin = 11;
int green_light_pin = 10;
int blue_light_pin = 9;

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {
  // red
  RGB_color(255,0, 0);
  delay(1000);
  // blue
  RGB_color(0, 0, 255);
  delay(1000);
  // green
  RGB_color(0, 255, 0);
  delay(1000);
  // random
  RGB_color(random(0, 256), random(0, 256), random(0, 256));
  delay(1000);
}

void RGB_color(int red_light_value, int blue_light_value, int green_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
