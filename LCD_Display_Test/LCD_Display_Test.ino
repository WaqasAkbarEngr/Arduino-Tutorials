#include <LiquidCrystal.h>

LiquidCrystal lcd(5,3,13,12,11,10);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);
lcd.setCursor(16,0);
}

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available())
{
  lcd.write(Serial.read());
  }
  lcd.scrollDisplayLeft();
  delay(300);
if(Serial.read()=='clear')
{
  lcd.clear();
  }
  Serial.println(Serial.read());
}
