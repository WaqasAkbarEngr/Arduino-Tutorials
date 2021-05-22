void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int potval=analogRead(A0);
Serial.print("Potentiometer Value is: ");
Serial.println(potval);
}
