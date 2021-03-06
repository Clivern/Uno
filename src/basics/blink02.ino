// Copyright 2021 Clivern. All rights reserved.
// Use of this source code is governed by the MIT
// license that can be found in the LICENSE file.

// Hardware Used (To build one circuit)
// - PC with Arduino IDE
// - UNO R3 with Cable 1 PCS
// - 3 Leds 5 PCS (Blue, Red, Green)
// - 830 Tie-Points BreadBoard 1 PCS
// - 65 Jumper Wire 1 PCS
// - Resistor 100 PCS

#define LED 13                // The pin the LED is connected to

void setup() {
  pinMode(LED, OUTPUT);       // Declare the LED as an output
}

void loop() {
  digitalWrite(LED, HIGH);     // sets the digital pin 13 on
  delay(1000);                 // waits for a second
  digitalWrite(LED, LOW);      // sets the digital pin 13 off
  delay(1000);                 // waits for a second
}
