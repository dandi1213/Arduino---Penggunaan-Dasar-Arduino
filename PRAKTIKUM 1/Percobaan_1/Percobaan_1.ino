//menemani pin yang terhubung ke LED
const int ledpin_red = 10;
const int ledpin_yellow = 12;
const int ledpin_green = 11;

void setup() {
  //set pin sebagai output 
  pinMode(ledpin_red, OUTPUT);
  pinMode(ledpin_yellow, OUTPUT);
  pinMode(ledpin_green, OUTPUT);
}

void loop() {
  //menyalakan LED
  digitalWrite(ledpin_red, LOW);
  digitalWrite(ledpin_yellow, LOW);
  digitalWrite(ledpin_green, LOW);
  delay(250);
  digitalWrite(ledpin_red, HIGH);
  digitalWrite(ledpin_yellow, HIGH);
  digitalWrite(ledpin_green, HIGH);
  delay(250);
}
