int inPin = A0;
int led = 9;
int data=0;

void setup()
{
   
}


void loop()
{

   data = analogRead(inPin);

   //  converting this data from 0 to 255

   data = map(0,1023,0,255);

   analogWrite(led,data);

  
}

