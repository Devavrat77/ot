void setup() {
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(10, INPUT);
}
void loop() {
int hasObstacle = digitalRead(10);
if (hasObstacle == 1) {
digitalWrite(3, HIGH);
digitalWrite(5, LOW);
}
else {
digitalWrite(3, LOW);
digitalWrite(5, HIGH);

}
delay(200);
}
