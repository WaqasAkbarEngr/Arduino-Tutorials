#define sound 2
#define led 8

int sensorInput;

int firstClap;
int secondClap;
int timebwclap;
int currentclaptime;
int previousclaptime=0;

int clapNumber=0;
bool clap = false;

void setup() {
  // put your setup code here, to run once:
pinMode(sound,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorInput=digitalRead(sound);

if (sensorInput==1)
{
  currentclaptime=millis();
  
  Serial.print("Clapped at: ");
  Serial.println(currentclaptime);
  
  if ((currentclaptime-previousclaptime)<=200)
  {
    Serial.println("clapped fast enough");
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
    delay(200);
    }
    previousclaptime=currentclaptime;
//  if (clapNumber<2)
//  {
//    
//    }
  }

//if (sensorInput==1 && clapNumber ==2 && clap==true)
//{
//  digitalWrite(led,HIGH);
//  delay(500);
//  digitalWrite(led,LOW);
//  delay(200);
//  }
}
