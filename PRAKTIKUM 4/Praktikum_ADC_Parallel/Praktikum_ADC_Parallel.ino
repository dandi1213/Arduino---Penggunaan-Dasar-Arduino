#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup(){
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Program ADC");
  delay(1000);
  lcd.clear();
}

void loop(){
  float dataADC = analogRead(A0);
  float volt = dataADC*5/1023;

  lcd.setCursor(0,0);
  lcd.print("ADC = ");
  lcd.print(dataADC);

  lcd.setCursor(0,1);
  lcd.print(" V=");
  lcd.print(volt);
  delay(500);
}
