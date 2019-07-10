int alocoholPin = A0;
int alcohol = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  alcohol = analogRead(alcoholPin);
  Serial.println(alcohol);
  delay(100);
  
}

