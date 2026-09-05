#include <LiquidCrystal.h>

// RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 13, 14, 27, 26, 25);

void setup() {
  lcd.begin(16, 2);

  // First row
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");

  // Second row
  lcd.setCursor(0, 1);
  lcd.print("ESP32 Project");
}

void loop() {
}