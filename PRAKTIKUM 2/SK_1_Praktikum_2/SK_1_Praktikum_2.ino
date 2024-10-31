//Praktikum 2
//SK 1

const int buttonPin1 = 2; // Pin untuk Push Button 1
const int buttonPin2 = 3; // Pin untuk Push Button 2
const int ledPin = 12;    // Pin untuk LED

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    digitalWrite(ledPin, HIGH);  // Menyalakan lampu jika tombol 1 ditekan
  } else if (digitalRead(buttonPin2) == HIGH) {
    digitalWrite(ledPin, LOW);   // Mematikan lampu jika tombol 2 ditekan
  }
}
