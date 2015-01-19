
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  //If there is a flame nearby, buzzer activates.
  if(sensorValue>500)
  digitalWrite(9,HIGH);
  else
  digitalWrite(9,LOW);
}
