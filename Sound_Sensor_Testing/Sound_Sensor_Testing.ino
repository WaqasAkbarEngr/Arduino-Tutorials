#define soundDigi 2
#define soundAnlog A0

#define LED 8

void setup() {
  // put your setup code here, to run once:
pinMode(soundDigi,INPUT);
pinMode(soundAnlog,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Digital value of Sound Sensor :  ");
Serial.print(digitalRead(soundDigi));
Serial.print("          Analog value of Sound Sensor :  ");
Serial.println(analogRead(soundAnlog));
if (digitalRead(soundDigi)==HIGH)
{
  digitalWrite(LED,HIGH);
  delay(2000);
  digitalWrite(LED,LOW);
}

}
