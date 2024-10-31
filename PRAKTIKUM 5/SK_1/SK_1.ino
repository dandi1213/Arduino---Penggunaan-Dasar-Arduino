//Praktikum 5
//SK 1

#include <Servo.h>

Servo myservo;

void setup() {
// put your setup code here, to run once: myservo.attach(9);
}

void loop() 
  { myservo.write(-90); 
  delay(1000);
  
  myservo.write(-45); 
  delay(1000);

  myservo.write(0); 
  delay(1000);

  myservo.write(45); 
  delay(1000);

  myservo.write(90); 
  delay(1000);
}
