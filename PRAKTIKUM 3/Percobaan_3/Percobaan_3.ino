#include <Keypad.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
const uint8_t ROWS = 4;
const uint8_t COLS = 4;
char keys[ROWS][COLS] = {
  { '1', '4', '7', '*' },
  { '2', '5', '8', '0' },
  { '3', '6', '9', '#' },
  { 'A', 'B', 'C', 'D' },
};

uint8_t colPins[COLS] = { 5,4,3,2 };
uint8_t rowPins[ROWS] = { 9,8,7,6 };

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  char key = keypad.getKey();

  if (key !=NO_KEY){
    Serial.println(key);
    lcd.setCursor(5,0);
    lcd.print(key);
  }
}
