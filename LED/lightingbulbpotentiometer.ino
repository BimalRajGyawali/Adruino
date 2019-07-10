int inPin = A0;
int data = 0;
int outPin = 1;

void setup()
{
 
    Serial.begin(9600);

    pinMode(outPin,OUTPUT);
    
}

void loop()
{
   data = analogRead(inPin);

   if(data == 1023)
   {

      digitalWrite(outPin,HIGH);
      delay(50);
      digitalWrite(outPin,HIGH);
      
     
   }

   else{

     digitalWrite(outPin,LOW);
    
   }

   

  
  

   
}


