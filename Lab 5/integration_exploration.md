# Integration Exploration

### Owen Minami

This is the last assignment we will be working with the ESP 32s. In this lab we will be workingon integrating sensors and actuators. I am uploading code using PlatformIO on a Windows 11 PC

For the sensor I will be using a potentiometer, and the actuator will be a servo Motor. the code for the file can be found as "PotentiometerAndServo".

The goal of my system will be for the servo motor to be controlled by the potentiometer in such a way that wherever you turn the potentiometer, the servo motor also turn to that same spot.

To integrate the potentiometer and the servo together, I have the potentiometer with VCC at the ESP32 3V pin and the ground pin on the common ground for the project. the Out pit is connected to the ESP32's A2 pin, which is where the angle is read from. The servo is connectr to the ESP 32 on the A0 Pin, and it is powered using an expernal DC power supply.

<img width="640" height="480" alt="IMG_6196" src="https://github.com/user-attachments/assets/fd743e5a-7251-4b03-b17c-929391e1172c" />

he code sets up variables, then in a loop, reads the A2 pin, converts that to an angle, and sends that angle to the servo to move it to the correct spot.

One thing of note in this project is that the servo is very jittery. I suspect this is because even if the servo is off by a little, it will try to correct and then overshoot and will continue to do that even with no potentiometer angle change.

**Time Reporting and Reflection**

1. 1.5 hours
2. Low
3. NA
4. pretty comfortable. getting used to coding these ESP32s
5. nope
