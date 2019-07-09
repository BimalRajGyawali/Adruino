
int ledPin = 11; //11 pwm pin



void setup() {
  // we should tell it that we are getting output through ledPin



 // pinMode(A2,OUTPUT);no pinMode in analog 
  

}

void loop() {
  // put your main code here, to run repeatedly:


    for(int i=0;i<255;i++)
    {
      
        analogWrite(ledPin,i); // 0 t0 255 // increase from 0 to 255
        delay(20);//delaying the loop

    }

    for(int i=255;i>=0;i--)
    {

           analogWrite(ledPin,i); // 255 to 0// decrease from 255 to 0
           delay(20);//delaying the loop
      
    }

}
