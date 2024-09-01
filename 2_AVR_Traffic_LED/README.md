# Project: Compiling and Linking Embedded C for the ATmega328p using Makefile

## The aim
The aim of this application is to show how to make a makefile for compiling Embedded C program for the Atmega328p microcontroller. This application use a USBasp programmer, a device that interfaces between the PC and the Atmega328p microcontroller to send the embedded C code to the application’s microcontroller. To download and install the AVR toolchain in Ubuntu Linux 20.04 LTS, first ensure that the system has completed all the latest updates. Next, open a terminal window and enter the following command:
```
$ sudo apt-get install gcc build-essential
```
Enter your password if requested. You may then be asked if you want to continue: enter Y and press ENTER. A lot of text describing various packages should scroll by, and then the command prompt should once again appear. Enter the following command:
```
$ sudo apt-get install gcc-avr binutils-avr avr-libc gdb-avr
```
Again, enter your password and give permission to continue if required by the installation process. Then enter the following command:
```
$ sudo apt-get install avrdude
```
Now you need to install the USB driver for the USBasp programmer. To do so, enter the following command:
```
$ sudo apt-get install libusb-dev
```
Next, check the USBasp is working correctly by connecting your USBasp programmer to your computer. To do this, you’ll use a program that’s part of the installed toolchain called AVRDUDE, which is a utility to upload code to Atmega328p microcontroller. Open a terminal window and enter the command:
```
$ avrdude -p m328p -c usbasp -B 4
``` 
To compile the Embedded C code and upload it to the microcontroller. You’ll need to pair the Embedded C file for your project with a Makefile. Next, navigate to the folder containing the two files for your project, and enter the following commands:
```
$ make
$ avrdude -c USBasp -p m328p -B 4 -U flash:w:main.hex:i
```

## Hardware Requirements

```
      1- Atmega328p microcontroller
      2- USBasp programmer
      3- Solderless breadboard
      4- Traffic Light LED Display Module
      5- Jumper wires
```

## The main circuit diagram
<img src="https://github.com/user-attachments/assets/a18fa94c-7e1f-4a52-b5cc-21fe16cf51e4" width="800">
