float powervoltage=5;//define the power supply voltage.
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}
void loop() {
  float temperature;
  // read the input on analog pin 0:
  float sensorValue = analogRead(A0);
  // print out the value you read:
  temperature=(sensorValue/1023)*powervoltage*100;
  Serial.print("The room temperature degree is:");
  Serial.println(temperature,1);
  delay(1);        // delay in between reads for stability
}
