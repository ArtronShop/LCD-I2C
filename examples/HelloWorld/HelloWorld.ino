/*
   Name: LCDI2C
   File: HelloWorld.ino
   Author: IOXhop
   Website: http://www.ioxhop.com/
*/

#include <LCDI2C.h>

LCDI2C lcd(0x27); // Set i2c address

void setup() {
	lcd.begin(16, 2); // Set display screen size is 16x2
	
	lcd.setCursor(0); // Set cursor to column 1 , line 1
	lcd.print("  Hello World!  "); // Print Hello World! to LCD
	lcd.setCursor(0, 1); // Set cursor to column 1 , line 2
	lcd.print(" www.ioxhop.com "); // Print www.ioxhop.com to LCD
}

void loop() {
}