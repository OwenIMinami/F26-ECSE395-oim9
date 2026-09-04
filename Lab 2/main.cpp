#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // TODO: Define your baud rates
  Serial.begin(115200); // Start the Serial connection
  // made baud rate 115200 oim9
}

void loop() {
  // TODO: Define your text output
  Serial.println("I am a ESP32!"); // Print the words to the Serial Monitor.
  // ESP32 will now print "I am a ESP32!" oim9
  
  // TODO: Set up your delay in milliseconds
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(100); // Speed in milliseconds
  // ESP 32 will delay 100 ms before turning LED off oim9
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(100); // Speed in milliseconds
    // ESP 32 will delay 100 ms before turning LED on oim9
} 