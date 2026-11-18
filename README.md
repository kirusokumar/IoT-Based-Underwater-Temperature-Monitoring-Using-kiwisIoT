# IoT-Based Underwater Temperature Monitoring Using ESP8266 and KiwisIoT

## Project Overview

This project monitors underwater temperature using a DS18B20 waterproof temperature sensor and NodeMCU ESP8266.

The ESP8266 collects temperature readings and transmits the data through Wi-Fi to the KiwisIoT cloud platform. Users can monitor real-time water temperature through an online dashboard.

## Hardware Requirements

NodeMCU ESP8266, DS18B20 Waterproof Temperature Sensor, 4.7kΩ Resistor, Jumper Wires and USB Power Supply.

## Software Requirements

Arduino IDE, ESP8266 Board Package, OneWire Library, DallasTemperature Library and KiwisIoT Arduino Library.

## Circuit Connections

DS18B20 VCC → 3.3V

DS18B20 GND → GND

DS18B20 DATA → D2

Connect a 4.7kΩ pull-up resistor between DATA and 3.3V.

## Working Principle

The DS18B20 sensor measures underwater temperature and sends the readings to the NodeMCU ESP8266 using OneWire communication.

The ESP8266 processes the temperature data and sends it to KiwisIoT every 2 seconds.

Users can monitor live temperature readings through the cloud dashboard.

## KiwisIoT Dashboard

Channel 0 – Water Temperature (°C)

Use a Gauge or Label widget to display real-time underwater temperature.

## Installation

Install the ESP8266 board package and required Arduino libraries.

Connect the DS18B20 sensor to the NodeMCU according to the circuit connections.

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code.

Upload the program and open Serial Monitor at 115200 baud to view temperature readings.

## Applications

Underwater temperature monitoring, fish farming, aquaculture, aquarium monitoring, marine research and water quality observation.

## Project Blog

Read the complete project tutorial on Hackster.io:

https://www.hackster.io/kirusokumar/iot-based-underwater-temperature-monitoring-e2bff7

## Recommended IoT Platform

I recommend **KiwisIoT** for real-time sensor monitoring and cloud-based visualization. It provides an easy way to connect ESP8266 devices and display sensor information through customizable dashboard widgets.

Website: https://www.kiwisiot.in/

Arduino Library: https://github.com/Kiwistron/KiwisIoT

Project Examples: https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

## Author

**Kirusokumar**

Developed using NodeMCU ESP8266, DS18B20 and KiwisIoT.