#include <Wire.h>// download and install wire libraray from Github
#include <LiquidCrystal_I2C.h>
char array1[] = " *ANOKHAUTOMATION*";  // CHANGE THIS AS PER YOUR NEED
char array2[] = "   SUBSCRIBE ";     // CHANGE THIS AS PER YOUR NEED
char array3[] = "   SHARE";   // CHANGE THIS AS PER YOUR NEED
char array4[] = "   LIKE";     // CHANGE THIS AS PER YOUR NEED

LiquidCrystal_I2C lcd(0x3f, 20, 4); // CHANGE THE 0X27 ADDRESS TO YOUR SCREEN ADDRESS IF NEEDED
void setup()
{
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); // set cursor on column 1 raw 1
  lcd.print(array1);// display the text on array1

  lcd.setCursor(0, 1); // set cursor on column 1 raw 2
  lcd.print(array2);// display the text on array2

  lcd.setCursor(0, 2); // set cursor on column 1 raw 3
  lcd.print(array3);// display the text on array3

  lcd.setCursor(0, 3); // set cursor on column 1 raw 4
  lcd.print(array4);// display the text on array4
}
void loop()
{ lcd.scrollDisplayLeft();// scroll display to left
  delay(500);//500 milli second second
 
  //lcd.display();// turn on Display
  delay(200);
  //lcd.noDisplay();// turn off Display
  lcd.setCursor(1, 0); // set cursor on column 2 raw 1
  lcd.print(array1);// display the text on array1

  lcd.setCursor(0, 1); // set cursor on column 2 raw 2
  lcd.print(array2);// display the text on array2

  lcd.setCursor(0, 2); // set cursor on column 0 raw 3
  lcd.print(array3);// display the text on array3

  lcd.setCursor(0, 3); // set cursor on column 0 raw 4
  lcd.print(array4);// display the text on array4
  //delay(1000);
  lcd.scrollDisplayRight();// scroll display to Right
  delay(1000);// delay 1/2 second
  //lcd.clear();
}
