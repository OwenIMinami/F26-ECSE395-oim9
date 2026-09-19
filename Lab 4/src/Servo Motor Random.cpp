#include <ESP32Servo.h>
// Don't forget to include the library!!
// From PlatfromIO library, search for ESP32 servo and add it to the project

// Define the servo and the pin it is connected to, what is your servo pin?
Servo myServo;
const int servoPin = A0; // declare the pin number for the servo motor oim9

// variable for random angle
int randomAngle;

// Variable for pulse width
int pulseWidth;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  myServo.setPeriodHertz(50); // Standard 50Hz servo
}

void loop() {
    //  --- SECTION 1: Make a Random Angle Between 0 to 180 ---
    randomAngle = random(0, 181); // random(0, 181); returns a random value between 0 and 180 

    // ---SECTION 2: Map Pulse Width with Angle
    pulseWidth = map(randomAngle, 0, 180, minPulseWidth, maxPulseWidth); // set pulse width based on the random angle generated oim9
    myServo.writeMicroseconds(pulseWidth); // write pulse width to servo oim9

    delay(random(100, 1000)); // delay by a random amount between 100ms and 1000ms before the next random angle is generated oim9
}
