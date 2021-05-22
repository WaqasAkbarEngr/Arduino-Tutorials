#define trig 8
#define echo 2
int distance=0;
#define relay 7
void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(relay,OUTPUT);
digitalWrite(relay,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
distance=0.032*(pulseIn(echo,HIGH)/2);
Serial.println(distance);
if (distance>10)
{
  delay(500);
  digitalWrite(relay,LOW);
}
if ((distance>5) && (distance <10))
{
  digitalWrite(relay,HIGH);
  }
}
