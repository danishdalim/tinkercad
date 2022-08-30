// Danish Ikhwan
// Question1
void setup()
{
  
  Serial.begin(9600);
  pinMode(8, OUTPUT);//L1
  pinMode(9, OUTPUT);//L2
  pinMode(10, OUTPUT);//L3
  pinMode(11, OUTPUT);//L4
  pinMode(2, INPUT);//S1
  pinMode(3, INPUT);//S2
  pinMode(4, INPUT);//S3
  pinMode(5, INPUT);//S4
}

void loop()
{
  //s1
  if (digitalRead(2) == HIGH)
  {
    Serial.println("S1 PRESSED");
    digitalWrite(8, HIGH);
    Serial.println("L1 ON");
    delay(1000); // Wait for 1000 millisecond(s)
    
  } else {
    digitalWrite(8, LOW);
  }
  
  //s2
  if (digitalRead(3) == HIGH)
  {
    Serial.println("S2 PRESSED");
    digitalWrite(9, HIGH);
    Serial.println("L2 ON");
    delay(1000); // Wait for 1000 millisecond(s)
    
  } else {
    digitalWrite(9, LOW);
  }
  
  //s3
  if (digitalRead(4) == HIGH)
  {
    Serial.println("S3 PRESSED");
    digitalWrite(10, HIGH);
    Serial.println("L3 ON");
    delay(1000); // Wait for 1000 millisecond(s)
  
  } else {
    digitalWrite(10, LOW);
  }
  
  //s4
  if (digitalRead(5) == HIGH)
  {
    Serial.println("S4 PRESSED");
    digitalWrite(11, HIGH);
    Serial.println("L4 ON");
    delay(1000); // Wait for 1000 millisecond(s)
    
  } else {
    digitalWrite(11, LOW);
  }
}