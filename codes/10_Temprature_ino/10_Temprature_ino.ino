int baselineTemp = 0;
int celsius = 0;
int fahrenheit = 0;
int cel = 0;
int fahr = 0;
void setup(){
    pinMode(12, INPUT);
    Serial.begin(9600);
}
void loop()
{
  celsius = map(((analogRead(12) - 20) * 3.04), 0, 1023, -40, 125);
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print("1 == >");
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  delay(1000);
}
