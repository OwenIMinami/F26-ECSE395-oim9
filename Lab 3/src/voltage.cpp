

#include <Arduino.h>

// function prototype
int voltage(float analogvalue);
int sensorValue;
float sensorVoltage;

// Put your potentiometer pin assignment here
const int sensorPin = A0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    sensorValue = analogRead(sensorPin); // this code is reading the alaog value from the analog pin and storing it as a varaible oim9
    sensorVoltage = sensorValue * (3.3 / 4095.0); // This code converts the analog read value to a voltage using some conversion factors oim9
    Serial.println(sensorVoltage);
    delay(75); // this code delays the printing of each sensor reading my 75 ms oim9
}

// function to calculate output voltage
int voltage(float analogvalue){
    int voltage;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    return voltage;
}

