#include <IRremote.h>
int RECV_PIN = 6;
long LED_ON  = 0x00FF02FD;
long LED_OFF = 0x00FF22DD;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(RECV_PIN, INPUT);  
  pinMode(3, OUTPUT); 
  irrecv.enableIRIn(); // Start the receiver
}
void loop() {
  int i=0;
   if (irrecv.decode(&results)) 
   {
     irrecv.resume(); // Receive the next value
     if (results.value == LED_ON )
      {
       digitalWrite(3,HIGH);
      }
    if (results.value == LED_OFF )
      {
      digitalWrite(3,LOW);
      }
   }   
 }
