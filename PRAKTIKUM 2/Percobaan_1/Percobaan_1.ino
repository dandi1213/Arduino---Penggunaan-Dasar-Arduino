//Praktikum 2
//Percobaan 1

const int ledPin = 13;
const int inputPin = 5;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop(){
  int val =digitalRead(inputPin); //baca input pushbutton)
  if (val== HIGH) //jika pushbutton ditekan bernilai HIGH
  {
    digitalWrite(ledPin, HIGH); //nyalakan Led
  }
  else //jika tidak ditekan
  {
    digitalWrite(ledPin, LOW); //matikan led
  }
}
