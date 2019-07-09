
int led1 = A0;
int led2 = A1;
int led3 = A2;
int led4 = A3;

void setup() {
  // put your setup code here, to run once:


  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);

  delay(1000);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);

    delay(1000);
  
  

}
