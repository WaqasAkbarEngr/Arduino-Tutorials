#include <Servo.h>

# define servoPin 3

Servo myServo;
void setup() {
  // put your setup code here, to run once:
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
myServo.write(0);
delay(500);
myServo.write(90);
delay(500);
myServo.write(180);
delay(2000);
}
