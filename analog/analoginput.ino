int inPin = A0;
int data = 0;

void setup()
{
 
    Serial.begin(9600);
    
}

void loop()
{
   data = analogRead(inPin);

   if(data <= 100)
   {
     Serial.println("Value less thaan 100");
   }

   

   Serial.println(data);
   delay(50);
 

   
}


