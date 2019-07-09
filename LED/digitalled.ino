
int ledPin = A2;



void setup() {
  // we should tell it that we are getting output through ledPin



  pinMode(A2,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite(ledPin,HIGH);
  delay(2000); //2000ms
  digitalWrite(ledPin,LOW);
  delay(2000);

}
