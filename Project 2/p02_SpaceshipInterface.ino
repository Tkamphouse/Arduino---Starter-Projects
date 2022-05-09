/*
  Arduino Starter Kit example
  Project 2 - Spaceship Interface
*/

int switchstate = 0;

void setup() {
  // declare the LED pins as outputs
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  

  // declare the switch pin as an input
  pinMode(2, INPUT);
}

void loop() {

  // read the value of the switch
  // digitalRead() checks to see if there is voltage on the pin or not
  switchstate = digitalRead(2);

  // if the button is not pressed turn on the green LED and off the red LEDs
  if (switchstate == LOW) {
    digitalWrite(3, HIGH); // turn the green LED on pin 3 on
    digitalWrite(4, LOW);  // turn the red LED on pin 4 off
    digitalWrite(5, LOW);  // turn the red LED on pin 5 off
    digitalWrite(6, LOW);  // turn the red LED on pin 6 off
  }
  // this else is part of the above if() statement.
  // if the switch is not LOW (the button is pressed) turn off the green LED and
  // blink alternatively the red LEDs
  else {
    digitalWrite(3, LOW);  // turn the green LED on pin 3 off
    digitalWrite(4, LOW);  // turn the red LED on pin 4 off
    digitalWrite(5, LOW); // turn the red LED on pin 5 on
    digitalWrite(6, HIGH); // turn the red LED on pin 6 on
    // wait for a tenth second before changing the light
    delay(100);
    digitalWrite(5, HIGH); // turn the red LED on pin 5 on
    digitalWrite(6, LOW);  // turn the red LED on pin 6 off
    // wait for a tenth second before changing the light
    delay(100);
    digitalWrite(4, HIGH);  // turn the green LED on pin 4 off
    digitalWrite(5, LOW);  // turn the red LED on pin 5 off
    delay(100);
    // wait for a tenth second before changing the light
  }
}
