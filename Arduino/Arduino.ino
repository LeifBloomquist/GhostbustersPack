// Arduino Code for the Arduino Uno in Andreas' Ghostbusters Pack

#define LIGHT1 8
#define LIGHT2 9
#define LIGHT3 10
#define LIGHT4 11

void setup()
{
    pinMode(LIGHT1, OUTPUT);
    pinMode(LIGHT2, OUTPUT);
    pinMode(LIGHT3, OUTPUT);
    pinMode(LIGHT4, OUTPUT);
    
    TurnAllLightsOff();
}

void loop()
{
  TurnAllLightsOff();
  digitalWrite(LIGHT1, HIGH);
  delay(500);
  
  TurnAllLightsOff();
  digitalWrite(LIGHT2, HIGH);
  delay(500);

  TurnAllLightsOff();
  digitalWrite(LIGHT3, HIGH);
  delay(500);

  TurnAllLightsOff();
  digitalWrite(LIGHT4, HIGH);
  delay(500);
}

void TurnAllLightsOff()
{
    digitalWrite(LIGHT1, LOW);
    digitalWrite(LIGHT2, LOW); 
    digitalWrite(LIGHT3, LOW); 
    digitalWrite(LIGHT4, LOW);  
}
