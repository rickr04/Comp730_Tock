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
  // How about GPIO.set low?
//  digitalWrite(D3, LOW);
 // digitalWrite(D3, HIGH);
  delay(100); // milliseconds
  // Timing Stops Here
  digitalWrite(D2, LOW);
  delay(100);

//  digitalWrite(D3, HIGH);
}
