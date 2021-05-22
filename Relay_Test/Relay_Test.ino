int relayPin = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(relayPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relayPin,HIGH);
delay(2000);
digitalWrite(relayPin,LOW);
delay(100);
digitalWrite(relayPin,HIGH);
delay(250);
digitalWrite(relayPin,LOW);
delay(100);
digitalWrite(relayPin,HIGH);
delay(100);
digitalWrite(relayPin,LOW);
delay(100);
digitalWrite(relayPin,HIGH);
delay(100);
digitalWrite(relayPin,LOW);
delay(100);
digitalWrite(relayPin,HIGH);
delay(200);
digitalWrite(relayPin,LOW);
delay(100);
digitalWrite(relayPin,HIGH);
delay(300);
digitalWrite(relayPin,LOW);
delay(150);
digitalWrite(relayPin,HIGH);
delay(300);
digitalWrite(relayPin,LOW);
delay(250);
}
