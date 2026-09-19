#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = 13; // Sets the pin for the first motor input oim9
const int MOTOR_B_1B = 12; // Sets the pin for the second motor input oim9

void setup() {
  // TODO: Initialize Serial communication
  Serial.begin(115200); // sets the baud rate oim9

  // TODO: Set your motor pins as OUTPUTs
  pinMode(MOTOR_B_1A, OUTPUT); // sets the first motor pin as an output oim9
  pinMode(MOTOR_B_1B, OUTPUT); // sets the second motor pin as an output oim9

  Serial.println("Its Motor Time!");  // prints a message to the serial monitor oim9
}

void loop() {
  // --- SECTION 1: Clokwise (5s) ---
  Serial.println("Its clockwise Time"); // prints a message to the serial monitor oim9
  
  // TODO: Write HIGH to one pin and LOW to the other
  digitalWrite(MOTOR_B_1A, LOW);   // sets the first motor pin to LOW oim9
  digitalWrite(MOTOR_B_1B, HIGH);  // sets the second motor pin to HIGH oim9
  
  delay(5000); // delays the program for 5 seconds oim9

  // --- SECTION 2: Stop (2s) ---
  Serial.println("its Stop Time"); // prints a message to the serial monitor oim9
  
  // TODO: Turn off the motor
  digitalWrite(MOTOR_B_1A, LOW); // sets the first motor pin to LOW oim9
  digitalWrite(MOTOR_B_1B, LOW); // sets the second motor pin to LOW oim9

  delay(2000); // delays the program for 2 seconds oim9

  // --- SECTION 3: Counterclockwise (5s) ---
  Serial.println("Its Counterclockwise Time"); // prints a message to the serial monitor oim9
  
  // TODO: Write HIGH to one pin and LOW to the other
  digitalWrite(MOTOR_B_1A, HIGH); // sets the first motor pin to HIGH oim9
  digitalWrite(MOTOR_B_1B, LOW); // sets the second motor pin to LOW oim9

  delay(5000); // delays the program for 5 seconds oim9

  // --- SECTION 4: Stop (2s) ---
  Serial.println("Its Stop Time"); // prints a message to the serial monitor oim9
  
  // TODO: Turn off the motor
  digitalWrite(MOTOR_B_1A, LOW); // sets the first motor pin to LOW oim9
  digitalWrite(MOTOR_B_1B, LOW); // sets the second motor pin to LOW oim9

  delay(2000);  // delays the program for 2 seconds oim9
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.
