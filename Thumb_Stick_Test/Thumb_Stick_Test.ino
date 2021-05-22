#define thumbStickX A0
#define thumbStickY A1
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(thumbStickX,INPUT);
pinMode(thumbStickY,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Value of Thumbstick is: X = ");
Serial.print(analogRead(thumbStickX));
Serial.print(" , Y = ");
Serial.println(analogRead(thumbStickY));
delay(100);
}
