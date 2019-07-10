
int inputPin = A3;
int outPin = A1;
int input;




void setup() {

  pinMode(inputPin,INPUT);
  pinMode(outPin,OUTPUT);
  

}

void loop() {

   input = digitalRead(inputPin);

   if(input==HIGH)
   {
        for(int i=0;i<5;i++) {
         
         digitalWrite(outPin,HIGH);
         delay(500);
         digitalWrite(outPin,LOW);
         
        }
     
   }

   else if(input == LOW)
   {
      digitalWrite(outPin,LOW);
   }


  }
