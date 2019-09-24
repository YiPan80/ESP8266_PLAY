

void setup()
{
  pinMode(15, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(15, LOW);
  delay(1000);
  digitalWrite(15, HIGH);
  delay(2000);
}
