const int buttonPin = 2; // Pin untuk Push Button
const int ledPin = 12;   // Pin untuk LED 1
bool buttonState = LOW;
bool lastButtonState = LOW;
bool ledState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      ledState = !ledState; // Mengubah keadaan LED (hidup/matikan)
      digitalWrite(ledPin, ledState);
    }
    delay(50); // Delay untuk menghindari bouncing
  }

  lastButtonState = buttonState;
}
