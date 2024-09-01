# Project: DC Motor Control with PWM and MOSFET using Atmega324p Microcontroller

## The aim
The Atmega324p microcontroller cannot directly control motors. In order to enable this, we need to use external components: metal-oxide-semiconductor field-effect transistors (MOSFETs), transistors that can switch or amplify voltages in circuits. This project demonstrates how to control a small DC motor using PWM signal, operating the motor at various speeds. The aim of this application is to show how to control the PWM signal by varying the duty cycle using a potentiometer. The Embedded C is applied to compile program using Makefile in VScode IDE. The system is designed and simulated using Proteus simulation software. 

## Hardware Requirements

```
      1- Atmega324p microcontroller
      2- DC Motor
      3- N-Channel Power MOSFET IRFZ44N
      4- Transistor NPN 2N3904 
      5- Potentiomer 10 kΩ
      6- Proteus Debuggers and Virtual Instruments Mode (Oscilloscope)
```

## Simulation of the main circuit diagram using Proteus Design Suite software
<img src="https://github.com/user-attachments/assets/b5812c20-a830-43e7-8b23-c25167033b4c" width="800">
