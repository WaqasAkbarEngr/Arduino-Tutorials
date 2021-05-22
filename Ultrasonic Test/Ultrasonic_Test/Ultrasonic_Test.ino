# define trig 8
#define echo 2
int timed = 0;
int distance = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  timed = pulseIn(echo,HIGH)/2;
  distance=0.032*timed;
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);
}
