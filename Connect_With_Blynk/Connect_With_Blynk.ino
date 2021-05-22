#include <BlynkSimpleEsp8266.h>

char authToken = "here comes your authentication token that you receive on email";
char networkSSID[] = "Wifi Name";
char password[] = "Wifi Password";

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Blynk.begin(authToken,networkSSID,password);
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}
