/*
   Name: LCDI2C
   File: BlacklightBlink.ino
   Author: IOXhop
   Website: http://www.ioxhop.com/
*/

#include <LCDI2C.h>

LCDI2C lcd(0x27); // Set i2c address

void setup() {
	lcd.begin(16, 2); // Set display screen size is 16x2
	
	lcd.setCursor(0);
	lcd.print("    Example!    ");
	lcd.setCursor(0, 1);
	lcd.print("Blacklight Blink");
	delay(3000);
}

void loop() {
	lcd.noBlacklight(); // Off Black Light
	delay(1000);
	lcd.blacklight(); // On Black Light
	delay(1000);
}