# Actuator Adventures

### Owen Minami

This will be my 3rd assignment working with the ESP32 controller. I will be working on connecting actuators to the ESP 32. I am uploading the code to the ESP32 using PlatformIO on Windows. The code for the repository for the DC motor can be found in the files "TTMotor.cpp" and "TTMotorRotate.cpp" and the code for the servo motor can be found in the files "ServoMotor.cpp" and "ServoMotorRotate.cpp".

**Steps:**
1. Figure out how to spin the TT motor:
   
     changing the values for anlogWrite() changes the torque of the motor
   
     Swapping the analogWrite() values changes the spin direction of the motor

     Modifying delay() changes how long the motor runs before it stops

2. Figure out how to spin a servo motor

     Changing minPulseWidth changes the start position of the servo motion

     changing maxPulseWidth changes the end position of the servo motion

     changing setPeriodHertz changes how frequently the servo changes position to get from the start position to the end position

     changing delay changes the delay between movements in one direction of the servo movement

**Time Reporting and Reflection:**
1. 3-4 hours
   
2. Medium
   
3. It was difficult to figure out how to get my code in the right spot in VSCode

4. Alright for everything except how to use Github well

5. nah



     
