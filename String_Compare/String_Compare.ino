char c1[]={"School"};
char c2[]={"college"};

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

delay(2000);

if ( ( String("School").equals("abcdef") ) )
{
  Serial.println("String is Equal");
  }
  else
  {
    Serial.println("String is not Equal");
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
