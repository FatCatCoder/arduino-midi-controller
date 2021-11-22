#include "MIDIUSB.h"

uint8_t intensity0;
uint8_t intensity1;
uint8_t intensity2;

void setup() {
  Serial.begin(9600); //Begin Serial Communication with a baud rate of 9600
}

void loop() {

  int val0 = analogRead(A0);
  int val1 = analogRead(A1);
  int val2 = analogRead(A2);
  
  intensity0 = (map(val0, 0, 1023, 0, 127)); // convert to readable midi values 
  intensity1 = (map(val1, 0, 1023, 0, 127));
  intensity2 = (map(val2, 0, 1023, 0, 127));
  
  MidiUSB.flush(); // sends midi signals to the computer
}