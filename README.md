# Home-Automation-System
IOT based home automation system.
## Basic Idea
Whatever the future holds for IoT, Smart devices will become convoluted into our lives. Here we are controlling an AC bulb and a security gate using NodeMCU.
## Components Required
Arduino Nano/Uno, NodeMCU (Esp8266), Relay Module, Servo motor, IC 7809, Breadboard, breadboard wires, male to male wires, male to male wires, 12V battery, Bulb.
## Design and Working
Here we have used Blynk app as a GUI to control NodeMCU.We are creating a passcode through the app, if it matches the pascode specified in the code, then thw gate opens through a servo motor. For bulb, if we have given a high signal in app, it creates a low signal at relay as it is an active low pin.
## How to run
Run "bulb using arduino" code in arduino IDE and upload in arduino Nano and run "Home_Automation_Using_Node_MCU" code in arduino IDE and upload in NodeMCU.
