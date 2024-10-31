//Praktikum 5
//Percobaan 1

const int EN1 = 11;
const int IN1 = 13;
const int IN2 = 12;

const int EN2 = 10;
const int IN3 = 9;
const int IN4 = 8;

const int Button1 = 7;
const int Button2 = 6;
const int Button3 = 5;

int potensio, motorSpeed = 0;

void setup(){
  pinMode(EN1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(Button1, OUTPUT);
  pinMode(Button2, OUTPUT);
  pinMode(Button3, OUTPUT);
}

void bacaSpeed(){
  potensio = analogRead(A0);
  motorSpeed = map (potensio, 0, 1023, 0, 255);
}

void motor1_CW(){
  analogWrite(EN1, motorSpeed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void motor1_CCW(){
  analogWrite(EN1,motorSpeed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2,HIGH);
}

void motor1_STOP(){
  analogWrite(EN1, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

void motor2_CW(){
  analogWrite(EN2,motorSpeed);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void motor2_CCW(){
  analogWrite(EN2, motorSpeed);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void motor2_STOP(){
  analogWrite(EN2, 0);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop(){
  bacaSpeed();
  if (digitalRead(Button1) == HIGH){
    motor1_CW();
    motor2_CCW();
  }

  if (digitalRead(Button2) == HIGH){
    motor1_CCW();
    motor2_CW();
  }

  if (digitalRead(Button3) == HIGH){
    motor1_STOP();
    motor2_STOP();
  }
}
