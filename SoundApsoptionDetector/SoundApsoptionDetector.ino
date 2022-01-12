//1.9.2022
float frequencies[] = {100, 200, 500, 1500};//The frequencies of incident sound
float TranSound;//The transmitted sound
float soundAbsCoe; // The sound absorbed

#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("Hello, World!");
}
