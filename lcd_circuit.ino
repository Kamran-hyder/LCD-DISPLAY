
#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.print("kamran hyder!");
}

void loop() {
  // put your main code here, to run repeatedly:
 lcd.setCursor(0,1);
 lcd.print(millis() / 1000);
}
