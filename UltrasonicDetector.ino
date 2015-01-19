int pirPin = 4;
int minSecsBetweenEmails = 60; // 1 min
long lastSend = -minSecsBetweenEmails * 1000l;
void setup()
{
pinMode(pirPin, INPUT);
Serial.begin(9600);
}
void loop()
{
long now = millis();
if (digitalRead(pirPin) == HIGH)
{
if (now > (lastSend + minSecsBetweenEmails * 1000l))
{
Serial.println("MOVEMENT DETECTED");
lastSend = now;
}
else
{
Serial.println("Wait");
}
}
delay(
