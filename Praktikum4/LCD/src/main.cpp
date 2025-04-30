#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

int SDA_PIN = D2;
int SCL_PIN = D3;
LiquidCrystal_I2C lcd(0x27, 16, 1);

void setup() {
  Wire.begin(SDA_PIN, SCL_PIN);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Praktikum Project 4");
  lcd.setCursor(0,1);
  lcd.print("الَّذِيْنَ يُؤْمِنُوْنَ بِالْغَيْبِ وَيُقِيْمُوْنَ الصَّلٰوةَ وَمِمَّا رَزَقْنٰهُمْ يُنْفِقُوْنَ");
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(300);
}
