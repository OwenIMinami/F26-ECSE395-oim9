#include <ESP32Servo.h>
#include <Arduino.h>

Servo myServo;
const int servoPin = A0; // declare the pin number for the servo motor oim9
const int sensorPin = A2; // declare the pin number for the potentiometer oim9

int pulseWidth; // initiate pulsewidth varaible oim9
int sensor; // initiate sensor variable oim9
int angle; // initiate angle variable oim9

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {

    Serial.begin(115200); // set baud rate oim9
    myServo.attach(servoPin, minPulseWidth, maxPulseWidth); // attach the servo to the right pin and use the right pulsewidths

    myServo.setPeriodHertz(50); //set the PWM frequency oim9
}


void loop() {

    sensor = analogRead(sensorPin); // read potentiometer signal oim9

    angle = sensor / 1023.0 * 180; // map potentiometer signal to angle oim9

    Serial.println(angle); // print the angle oim9

    pulseWidth = map(angle, 0, 180, minPulseWidth, maxPulseWidth); // set pulse width based on the sensor reading oim9
    myServo.writeMicroseconds(pulseWidth); // write pulse width to servo oim9

}
