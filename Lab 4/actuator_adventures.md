This will be my 3rd assignment working with the ESP32 controller. I will be working on connecting actuators to the ESP 32. I am uploading the code to the ESP32 using PlatformIO on Windows. The code for the repository for the servo motor can be found in the file "CHANGE THIS" and the code for the DC motor can be found in the file "CHANGE THIS".

**Steps:**
1. figure out how to spin TT motor:
   
     changing the values for anlogWrite() changes the torque of the motor
   
     Swappiing the analogWrite() values changes the spin direction of the motor

     Modifying delay() changes how long the motor runs before it stops

2. figure out how to spin servo motor

     changing minPulseWidth changes the start position of the servo motion

     changing maxPulseWidth changes the end position of the servo motion

     changing setPeriodHertz changes how frequent the servo chnges position to get from the start position to the end position

     changing delay changes the delay between movements in one direction of the servo movement

     
