//Blinking secara pelan ketika awal2 dan lama2 semakin cepat

// Menentukan pin yang terhubung ke LED
const int ledpin_red = 10;
const int ledpin_yellow = 12;
const int ledpin_green = 11;

int delayTime = 500; // Waktu jeda awal (500 ms)
int minDelayTime = 50; // Waktu jeda minimum (50 ms)

void setup() {
  // Set pin sebagai output
  pinMode(ledpin_red, OUTPUT);
  pinMode(ledpin_yellow, OUTPUT);
  pinMode(ledpin_green, OUTPUT);
}

void loop() {
  while (delayTime >= minDelayTime) {
    digitalWrite(ledpin_red, HIGH);
    digitalWrite(ledpin_yellow, HIGH);
    digitalWrite(ledpin_green, HIGH);
    delay(delayTime);
    digitalWrite(ledpin_red, LOW);
    digitalWrite(ledpin_yellow, LOW);
    digitalWrite(ledpin_green, LOW);
    delay(delayTime);
       // Kurangi waktu jeda seiring berjalannya waktu
    delayTime -= 50;
  }
  // Reset waktu jeda ke nilai awal
  delayTime = 500;
}
