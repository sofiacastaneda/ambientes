int ledA = 9;
int ledB = 6;
int ledC = 3;

void setup()
{
  pinMode(ledA, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(ledC, OUTPUT);

}

void loop()
{
 //Prender y apagar los 3 leds
  analogWrite(ledA, HIGH);
    analogWrite(ledB, HIGH);
      analogWrite(ledC, HIGH);
      
  delay(500); 
  
  analogWrite(ledA, LOW);
    analogWrite(ledB, LOW);
      analogWrite(ledC, LOW);
      
  delay(500); 
}
