#include <ESP32Servo.h>
#include <Arduino.h>

Servo myServo;
const int servoPin = A0; // declare the pin number for the servo motor oim9
const int sensorPin = A2;

int pulseWidth;
int sensor;
int angle;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {

    Serial.begin(115200);
    myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

    myServo.setPeriodHertz(50); 
    Serial.println("hello");
}


void loop() {

    sensor = analogRead(sensorPin);

    //  --- SECTION 1: Make a Random Angle Between 0 to 180 ---
    angle = sensor / 1023.0 * 180; // Map the sensor value to an angle between 0 and 180

    Serial.println(angle);

    // ---SECTION 2: Map Pulse Width with Angle
    pulseWidth = map(angle, 0, 180, minPulseWidth, maxPulseWidth); // set pulse width based on the sensor reading
    myServo.writeMicroseconds(pulseWidth); // write pulse width to servo oim9
    
}
