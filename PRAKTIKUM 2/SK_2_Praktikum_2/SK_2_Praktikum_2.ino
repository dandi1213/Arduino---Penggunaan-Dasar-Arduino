//Praktikum 2
//SK 2

const int inA = 2;  // Pin input A
const int inB = 3;  // Pin input B
const int inC = 4;  // Pin input C
const int inD = 5;  // Pin input D
const int LED1 = 10; // Pin LED 1
const int LED2 = 11; // Pin LED 2

void setup() {
  pinMode(inA, INPUT);
  pinMode(inB, INPUT);
  pinMode(inC, INPUT);
  pinMode(inD, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  bool inputA = digitalRead(inA);
  bool inputB = digitalRead(inB);
  bool inputC = digitalRead(inC);
  bool inputD = digitalRead(inD);

  // Menghidupkan LED 1 jika input A dan B aktif
  if (inputA && inputB) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

  // Menghidupkan LED 2 jika input C dan D aktif
  if (inputC && inputD) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }
}
