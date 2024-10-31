//Menyala Bersamaan


//menemani pin yang terhubung ke LED
const int ledpin_red = 13;
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
  digitalWrite(ledpin_red, HIGH);
  digitalWrite(ledpin_yellow, LOW);
  digitalWrite(ledpin_green, HIGH);
}
