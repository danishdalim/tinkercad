int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;
int buzzPin = 2;

void setup ()
{
  Serial.begin(9600);
  pinMode (ledPin, OUTPUT);
  pinMode (buzzPin, OUTPUT);
}

void loop()
{
  
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  delay(sensorValue);
  
  if (sensorValue > 500)
  {
   digitalWrite(buzzPin, HIGH);
  }
  
  else
  {
    digitalWrite(buzzPin, LOW);
  }
  
  
}
    