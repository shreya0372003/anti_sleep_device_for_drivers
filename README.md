# Anti-Sleep Alarm System for Drivers

## Introduction
Drowsy driving is a leading cause of road accidents, endangering the lives of drivers and other road users. The Anti-Sleep Alarm System for Drivers is designed to tackle this issue by providing a proactive and innovative solution. This system monitors the driver's alertness using advanced sensors and algorithms, ensuring real-time detection of fatigue and timely intervention to prevent accidents.

## Overview
The Anti-Sleep Alarm System incorporates multiple technologies to track physiological and behavioral indicators such as eye movements, heart rate, and steering patterns. When signs of drowsiness are detected, the system triggers immediate alerts, including audible alarms, seat vibrations, or dashboard notifications. Advanced versions also integrate with navigation systems to suggest nearby rest stops or safe places to pull over. By leveraging real-time data and cutting-edge analysis, this project aims to enhance road safety, reduce fatigue-related risks, and encourage healthier driving habits. Designed for accessibility, the system can be implemented as a standard vehicle feature or an aftermarket add-on.


## Components Required
• Arduino Nano: The microcontroller that controls the entire system.

• Eyelid Sensor: This sensor detects when the driver's eyes are closed for an extended period. 

• Buzzer: This emits a loud sound to alert the driver when drowsiness is detected. 

• Power Supply: Two 9V batteries provide power to the circuit. 

• Switch: This switch turns the alarm system on and off.

## Circuit Connection Diagram

![Screenshot 2025-01-27 143028](https://github.com/user-attachments/assets/e81b11ad-8c08-4245-a893-e19b2d56b960)

## Table for Pin Connection
| Eyelid Sensor | Arduino Nano |
| --- | --- |
| A | 1 |
| B | 2 |
| C | 3 |
| D | 4 |

| Buzzer | Arduino Nano |
| --- | --- |
| SW1 | PD2 |
| GND | GND |

| SPST | Arduino Nano |
| --- | --- |
| SW1 |  |
| GND | GND |
