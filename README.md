# Smart Fall Detection System (ESP32 + MPU6050 + ML)

## Overview

This project detects human falls using MPU6050 sensor data and a machine learning model running on ESP32. When a fall is detected, alerts are triggered through buzzer, LED, and Blynk app notifications.

## Hardware

* ESP32
* MPU6050
* Buzzer (GPIO 25)
* LED (GPIO 26)

## Features

* Real-time fall detection
* ML-based classification
* IoT alerts using Blynk
* Embedded implementation

## Working

Sensor data → ESP32 → Feature extraction → ML model → Fall detection → Alert system

## Future Improvements

- GSM module for SMS alerts  
- GPS module for real-time location tracking  
- Wearable design for practical use  
- Improved ML model accuracy and training dataset  
- Mobile app integration for live monitoring  
