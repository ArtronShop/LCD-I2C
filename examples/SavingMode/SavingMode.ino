/*
   Name: LCDI2C
   File: SavingMode.ino
   Author: IOXhop
   Website: http://www.ioxhop.com/
*/

#include <LCDI2C.h>

LCDI2C lcd(0x27); // Set i2c address

void setup() {
	lcd.begin(16, 2); // Set display screen size is 16x2
	
	lcd.setCursor(0);
	lcd.print("Example Power");
	lcd.setCursor(0, 1);
	lcd.print("Saving mode");
	delay(3000);
}

void loop() {
	lcd.clear();
	lcd.setCursor(0);
	lcd.print("Into saving mode");
	lcd.setCursor(0, 1);
	lcd.print("for 5 sec");
	delay(2000);
	
	lcd.noDisplay(); // Off display
	lcd.noBlacklight(); // Off Black Light
	delay(5000);
	lcd.display(); // On display
	lcd.blacklight(); // On Black Light
	
	lcd.clear();
	lcd.setCursor(0);
	lcd.print("Wake up !");
	delay(2000);
}