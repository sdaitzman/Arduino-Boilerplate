// Program.ino
// License is available in LICENSE.md
// This program was created by <HUMAN>

#import "imports.ino"   // go to this file to import libraries
#import "variables.ino" // go to this file to set variables

void setup() {
  delay(500); // reduces Serial issues
  Serial.begin(57600); // not 9600 - so it's fast
  Serial.print("Program started. Using Arduino-Boilerplate v");
  Serial.println(arduinoBPVersion);
  // put your setup code below



  Serial.println("End setup.");

}

void loop() {
  delay(loopDelay); // set in variables.ino and defaults to 100
}
