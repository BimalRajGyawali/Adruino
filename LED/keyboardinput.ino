
int data=0;

int led1 = A0;
int led2 = A1;
int led3 = A2;
int led4 = A3;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

 if(Serial.available() > 0)
 {
       data=Serial.read();

       ledCall();

 }

}


    void allLedOff()
    {
          digitalWrite(led1,LOW);
          digitalWrite(led2,LOW);
          digitalWrite(led3,LOW);
          digitalWrite(led4,LOW);

          Serial.println("All led off");
    }


    void ledCall()
    {

         if(data == 'a')
       {
          digitalWrite(led1,HIGH);
          Serial.println("Led1 is on"):
       }

        else if(data == 'b')
       {
          digitalWrite(led2,HIGH);
          Serial.println("Led1 is on"):
       }

        else if(data == 'c')
       {
          digitalWrite(led3,HIGH);
          Serial.println("Led1 is on"):
       }

       else if(data == 'd')
       {
          digitalWrite(led4,HIGH);
          Serial.println("Led1 is on"):
       }

       else if(data=='z')
       {
         allLedOff();
        
       }



      
    }



       

