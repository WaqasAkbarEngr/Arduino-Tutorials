#include<BlynkSimpleEsp8266.h>

char authToken[] = "Authorization Code";
char networkSSID[] = "Network SSID";
char password[] = "Network Wifi Password";

const byte pin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
Blynk.begin(authToken,networkSSID,password);
attachInterrupt(digitalPinToInterrupt(pin),IntCallback, RISING);
pinMode(16,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}

ICACHE_RAM_ATTR void IntCallback(){
  digitalWrite(16,LOW);
  Serial.println(digitalRead(16));
}
