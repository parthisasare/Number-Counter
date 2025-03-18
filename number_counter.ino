#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int buttonIncrement = 6; 
int buttonDecrement = 7;

int counter = 0;

void setup() {
                        
  lcd.backlight();
  lcd.init();

  pinMode(buttonIncrement, INPUT_PULLUP);
  pinMode(buttonDecrement, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonIncrement) == LOW)
    counter++; 
    delay(100);  
  
  if (digitalRead(buttonDecrement) == LOW) 
    counter--;
    delay(150); 

  lcd.setCursor(0,0); 
  lcd.print("Counter:"); 
  lcd.print(counter); 
}


  
