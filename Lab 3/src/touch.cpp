#include <Arduino.h>

#define LED_PIN 13 // this code is defining what pin the LED we are going to use it oim9
//Put your potentiometer pin assignment here
const int sensorPin = A0; //This code is assigning the analog pin A0 to be a sensot input oim9

void setup() {
    pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
    if (analogRead(sensorPin) == 4095) {
        Serial.println("Touch detected!");
        digitalWrite(LED_PIN, HIGH); // Turn LED on oim9
    } else {
        Serial.println("No touch detected.");
        digitalWrite(LED_PIN, LOW); // Turn LED off oim9
    }
    delay(50);
}