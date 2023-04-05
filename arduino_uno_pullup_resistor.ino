int ledPin = 2; // the pin that the LED is attached to
int buttonPin = 3; // the pin that the push button is attached to
int buttonState = 0; // variable to store the button state

void setup() {
  pinMode(ledPin, OUTPUT); // set the LED pin as an output
  pinMode(buttonPin, INPUT_PULLUP); // set the button pin as an input with internal pull-up resistor
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the button

  if (buttonState == LOW) { // if the button is pressed
    digitalWrite(ledPin, HIGH); // turn on the LED
  } else { // if the button is not pressed
    digitalWrite(ledPin, LOW); // turn off the LED
  }
}
