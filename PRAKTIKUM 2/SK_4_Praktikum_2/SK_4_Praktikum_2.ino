//Praktikum 2
//SK 4

const int switchPin = 2;   // Pin untuk Switch
const int ledPins[] = {3, 4, 5, 6};  // Pin untuk 4 LED
int ledCount = 0;
bool lastSwitchState = LOW;

void setup() {
  pinMode(switchPin, INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  bool switchState = digitalRead(switchPin);

  if (switchState == HIGH && lastSwitchState == LOW) {
    ledCount = (ledCount + 1) % 5;  // Siklus antara 0 hingga 4
    for (int i = 0; i < 4; i++) {
      digitalWrite(ledPins[i], i < ledCount ? HIGH : LOW);
    }
  }

  lastSwitchState = switchState;
}
