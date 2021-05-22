# define trig 8
# define echo 2
int tim=0;
int counter=0;
int distance=0;
void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
Serial.println("Number of thigs passed = 0");
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
tim=pulseIn(echo,HIGH)/2;
distance=0.032*tim;
if (distance<10)
{
  counter=counter+1;
  Serial.print("Number of things passed = ");
  Serial.println(counter);
  delay(500);
  }
}
