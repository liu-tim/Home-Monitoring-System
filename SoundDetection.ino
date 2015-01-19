void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT); 
}

void loop() {
  digitalWrite(3, HIGH);    // set the LED off
  int sensorValue = analogRead(A0); //Read the analog value of the sound sensor
  int digitalVlaue = digitalRead(15);
  Serial.println(sensorValue);//Print the analog value to serial monitor
  if(digitalVlaue){
  digitalWrite(3, LOW);   // If the digital value of the sound sensor is 1, set the LED on.
  delay(1000);              // wait for a second
 }
}
