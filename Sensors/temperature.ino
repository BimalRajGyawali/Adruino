int tempInPin = A0;
float temperature = 0;

int buzzerPin = 8 ; //digital output

void setup()
{
     
   Serial.begin(9600);
   pinMode(buzzerPin,OUTPUT);
   
}

void loop()
{

   temperature = analogRead(tempInPin); //temperature is not the temperature, we should further calculate
   
   temperature = (temperature*500)/1023; //gives temperature in celcius

   if(temperature > 26 )
   {
       digitalWrite(buzzerPin,HIGH);

       
   }

   else{

      digitalWrite(buzzerPin,LOW);
   }
   
   
   
  
}

