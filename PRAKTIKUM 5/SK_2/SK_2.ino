//Praktikum 5
//SK 2

const int motorPin1 = 2;
const int motorPin2 = 3;

void setup() { 
  pinMode(motorPin1, OUTPUT); 
  pinMode(motorPin2, OUTPUT);
}

void loop() { 
  digitalWrite(motorPin1, HIGH); 
  digitalWrite(motorPin2, LOW); 
  delay(2000);

  digitalWrite(motorPin1, LOW); 
  digitalWrite(motorPin2, LOW); 
  delay(1000);

  digitalWrite(motorPin1, LOW); 
  digitalWrite(motorPin2, HIGH); 
  delay(2000);

  digitalWrite(motorPin1, LOW); 
  digitalWrite(motorPin2, LOW); 
  delay(1000);
}