char device[7];
char concatenate[80];
int i=0;
//int deviceStatus=0;
int dpio = 16;

void deviceDetect(int i)
{
    switch(i+1)
    {
      case(1):
      {
        strcpy(device,"Light1");
        break;
      }
      case(2):
      {
        strcpy(device,"Light2");
        break;
      }
      case(3):
      {
        strcpy(device,"Light3");
        break;
      }
      case(4):
      {
        strcpy(device,"Light4");
      }
      default:
      break;
    }
}

void deviceStatus(int i)
{
  if (i == 1 || i == 4)
  {
    strcat(concatenate," HIGH,");
  }
  if (i == 2 || i == 3)
  {
    strcat(concatenate," LOW,");
  }
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
digitalWrite(dpio,HIGH);
pinMode(dpio,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
      i = random(4);
      deviceDetect(i);
      //deviceStatus(dpio);
      //strcpy(device,detectDevice
      strcpy(concatenate,device);
      strcat(concatenate,",");
      //strcat(concatenate,deviceStatus(dpio));
      deviceStatus(i);
      Serial.println(concatenate);
      delay(1000);
}
