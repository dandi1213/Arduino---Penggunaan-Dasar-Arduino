int pinLed = 3;
void setup(){}
void loop(){
  for (int nilai = 0;nilai <= 255; nilai +=5){
    analogWrite(pinLed, nilai);
    delay(30);
  }
  for(int nilai = 255; nilai >=0; nilai -= 5){
    analogWrite(pinLed, nilai);
    delay(30);
  }
}
