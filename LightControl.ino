

int led1 = 3;           // the pin that the LED is attached to
int led2 = 5;           // the pin that the second LED is attached to
int BUZZER = 4;           // the pin that the buzzer is attached to
int brightness = 0;    // how bright the LED is
void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(BUZZER,OUTPUT);
  pinMode(16,INPUT);
}
void loop()  { 
  int brightness1=analogRead(A0);
  int brightness2=analogRead(A1);
  brightness1=map(brightness1, 0, 1023, 0, 255);
  brightness2=map(brightness2, 0, 1023, 0, 255);
  analogWrite(led1,brightness1);  
  analogWrite(led2,brightness2);
  if(digitalRead(16))
  digitalWrite(4,HIGH);
  else
  digitalWrite(4,LOW);
}
