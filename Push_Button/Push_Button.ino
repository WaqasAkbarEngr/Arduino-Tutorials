# define pb 2
# define led 4
int button = 0;
int dely = 1000;
int pressed = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(pb,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
if (digitalRead(pb)==HIGH)
{
  digitalWrite(led,HIGH);
  Serial.print("Push Button is Pressed");
  Serial.print(pressed);
  Serial.println(" times");
  delay(dely);
  dely=dely+1000;
  pressed=pressed+1;
  digitalWrite(led,LOW);
    }
}
