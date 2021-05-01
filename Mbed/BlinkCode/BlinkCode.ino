/*  GPIO overhead test
 * 
 * Test: Overhead of setting GPIO pin high
 * 
 */

void setup() {
    // Set pin D2/D3 to output
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
}


void loop() {
  // Timing Starts Here
  digitalWrite(D2,HIGH);

  // How long does a call to GPIO.set high take?
  digitalWrite(D3, HIGH);
  
  // Timing Stops Here
  digitalWrite(D2, LOW);

   digitalWrite(D3, LOW);
}