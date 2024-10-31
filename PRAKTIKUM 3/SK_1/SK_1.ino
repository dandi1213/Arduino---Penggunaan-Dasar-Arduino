//Praktikum 3
//SK 1

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '4', '7', 'C'},
  {'2', '5', '8', '0'},
  {'3', '6', '9', '='},
  {'+', '-', '*', '/'}
};
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

String inputString = "";
bool newData = false;
float operand1 = 0;
float operand2 = 0;
char operatorChar = ' ';
float result = 0;
bool resultCalculated = false;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Kalkulator");
  lcd.setCursor(0, 1);
  lcd.print("");
}

void loop() {
  char key = keypad.getKey();
  if (key != NO_KEY) {
    if (key == 'C') { // Clear input
      inputString = "";
      resultCalculated = false;
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Kalkulator");
      lcd.setCursor(0, 1);
      lcd.print("");
    } else if (key == '=') { // Calculate result
      if (!resultCalculated) {
        if (parseEquation()) {
          result = calculateResult(operand1, operatorChar, operand2);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Hasil");
          lcd.setCursor(0, 1);
          lcd.print(result);
          resultCalculated = true;
        } else {
          lcd.setCursor(0, 1); // Set the cursor back to the input line
          lcd.print("");
        }
        inputString = "";
      }
    } else {
      if (!resultCalculated) {
        inputString += key;
        lcd.setCursor(0, 1); // Set the cursor to the input line
        lcd.print(inputString);
      }
    }
  }
}

bool parseEquation() {
  int operatorIndex = -1;
  for (int i = 0; i < inputString.length(); i++) {
    if (inputString[i] == '+' || inputString[i] == '-' || inputString[i] == '*' || inputString[i] == '/') {
      operatorChar = inputString[i];
      operatorIndex = i;
      break;
    }
  }

  if (operatorIndex == -1) {
    return false;
  }

  String operand1Str = inputString.substring(0, operatorIndex);
  String operand2Str = inputString.substring(operatorIndex + 1);

  operand1 = operand1Str.toFloat();
  operand2 = operand2Str.toFloat();
  return true;
}

float calculateResult(float a, char op, float b) {
  switch (op) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      if (b != 0) {
        return a / b;
      }
      break;
  }
  return 0; // Error or division by zero
}
