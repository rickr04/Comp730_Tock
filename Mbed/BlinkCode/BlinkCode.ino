/*  GPIO test
 * 
 * Test: Setting a gpio pin high, low
 *       Testing a 100ms delay call
 * 
 */

void setup()
{
  // Set pin D2/D3 to output
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
}

void loop()
{
  // Start Timing
  digitalWrite(D2, HIGH);

  // digitalWrite(D3, LOW);  // Uncomment to test setting a gpio pin low
  // digitalWrite(D3, HIGH); // Uncomment to test setting a gpio pin high
  // delay(100); // Uncomment to test 100ms delay

  // Timing Stops Here
  digitalWrite(D2, LOW);

}
