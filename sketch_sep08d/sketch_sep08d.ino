#include<LiquidCrystal.h>
int x=0;
LiquidCrystal lcd(6, 5, 4,3,2,1);
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print(x);
  x++;
  delay(1000);
}
