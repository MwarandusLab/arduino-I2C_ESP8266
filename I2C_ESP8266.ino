#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the I2C address of your LCD module
#define LCD_ADDRESS 0x27

// Initialize the LiquidCrystal_I2C object
LiquidCrystal_I2C lcd(LCD_ADDRESS, 16, 4); // 16 columns, 2 rows

void setup() {
  // Initialize the Wire library for I2C communication
  //Wire.begin(22, 21); // SDA on GPIO4 (D2), SCL on GPIO5 (D1)
  
  // Initialize the LCD
  lcd.init();
  lcd.backlight(); // Turn on the backlight

}

void loop() {
  // Your loop code here
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("I2C LCD");
  lcd.setCursor(0, 1);
  lcd.print("Hello, World!");
  delay(2000); // Display the message for 2 seconds
}
