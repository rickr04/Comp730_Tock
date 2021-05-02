/*  GPIO test
 * 
 * Test: 4Bit Counter
 * 
 */

void setup()
{
  // Set our pins to output
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}

void loop()
{

  /* 
  *  digitalWrite(<Pin>, LOW) <- Sets gpio pin to low
  *  digitalWrite(<Pin>, LOW) <- Sets gpio pin to high
  *  delay(amount) <- Delays in ms for said amount
  */

  // Start timing
  digitalWrite(D6, HIGH);

  // 1
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D2, HIGH);
  //delay(100);

  //2
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  //delay(100);

  //3
  digitalWrite(D3, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  //delay(100);

  //4
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
  //delay(100);

  //5
  digitalWrite(D4, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D4, HIGH);
  //delay(100);

  //6
  digitalWrite(D2, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  //delay(100);

  //7
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  //delay(100);

  //8
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, HIGH);
  //delay(100);

  // Stop Timing
  digitalWrite(D6, LOW);
}
