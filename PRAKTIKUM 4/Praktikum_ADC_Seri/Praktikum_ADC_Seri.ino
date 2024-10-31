#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void loop() {
  // put your main code here, to run repeatedly: 
  float dataADC=analogRead(A3);
  float volt = dataADC*5/1023; 
  lcd.print("Data ADC = "); 
  lcd.print(dataADC);
  lcd.setCursor(0,1); 
  lcd.print("Data Tegangan = "); 
  lcd.print(volt);
}
