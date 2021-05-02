#include <Arduino_APDS9960.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);
  pinMode(D2, OUTPUT);
  APDS.begin();
//  if (!APDS.begin()) {
//    Serial.println("Error initializing APDS-9960 sensor!");
//  }
}

void loop() {
    // Timing Starts Here
    int i = 0;
 // digitalWrite(D2,HIGH);
  // check if a proximity reading is available
  if (APDS.proximityAvailable()) {
    // read the proximity
    // - 0   => close
    // - 255 => far
    // - -1  => error
    digitalWrite(D2,HIGH);
    i = APDS.readProximity();
    digitalWrite(D2,LOW);
    Serial.println(i);
    delay(100);
  }
  // Timing Ends Here
 // digitalWrite(D2,LOW);
  // wait a bit before reading again
 // delay(100);
}
