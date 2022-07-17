/*
Tutorial 1: Blink
Author: Morgan
*/

#define led 13

void loop()
{
  pinMode(led, OUTPUT);
}

void setup()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
