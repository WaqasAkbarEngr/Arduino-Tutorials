// initializing pins of ultrasonic sensor
#define trigger 13
#define echo 12

// initializing constant with value equal to speed of sound
#define SPEED_OF_SOUND 340

void setup() {
  // put your setup code here, to run once:

  // Starting Serial Communication with baud rate 9600
  Serial.begin(9600);

  // setting input/output pins
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // setting trigger pin to LOW in case it was already on
  digitalWrite(trigger,LOW);
  // delay of 2 microseconds to let pin attain a value of 0
  delayMicroseconds(2);

  // triggering trigger pin to HIGH state for 10 microseconds and then turning it back to LOW
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  float timeTaken = pulseIn(echo,HIGH)/2;

  float distance = (SPEED_OF_SOUND * timeTaken) / 1000000;  // This distance in in meter

  float distanceInCentimeter = distance * 100;
  float distanceInMillimeter = distance * 1000;

  Serial.print("Distance: ");
  Serial.print(distanceInCentimeter);
  Serial.print(" cm \t");
  Serial.print(distanceInMillimeter);
  Serial.println(" mm");
  delay(250);

}
