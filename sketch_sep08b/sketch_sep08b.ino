#include <LiquidCrystal.h>
 
//Khởi tạo với các chân
LiquidCrystal lcd(6, 5, 4, 3, 2,1);
 
void setup() {

lcd.begin(16,2);
 lcd.print("i love");
}
 
void loop() {
  lcd.setCursor(0,1);
  lcd.print("san");
}
