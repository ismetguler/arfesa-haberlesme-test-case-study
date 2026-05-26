# ARFESA Haberlesme Test Case Study

This repository is a public case study for a TEKNOFEST rocket telemetry communication test.

The original team repository is private, so this repository focuses on the architecture, engineering decisions, test workflow, and safe code snippets that describe the work without exposing private team assets.

## Project Summary

The goal was to validate communication between a rocket flight computer and a ground station.

**Flight computer side**

- STM32F407 based embedded software
- BNO055 IMU data
- MS5611 barometer data
- GPS status and position data
- Ebyte LoRa telemetry transmission

**Ground station side**

- ESP32 based LoRa receiver
- USB serial monitor output
- Packet counter, link status, and telemetry display workflow

## My Contribution

- Worked on the STM32 to ESP32 telemetry communication flow
- Prepared documentation for wiring, LoRa setup, packet format, and test steps
- Organized a repeatable communication test workflow for flight computer and ground station
- Helped structure the project files for easier review and future development

## Tech Stack

- C
- STM32CubeIDE
- STM32F407
- ESP32
- LoRa E22
- BNO055
- MS5611
- GPS module
- Serial debugging

## Architecture

```text
Sensors
  |-- BNO055 IMU
  |-- MS5611 Barometer
  |-- GPS Module
        |
        v
STM32F407 Flight Computer
        |
        | LoRa telemetry packet
        v
ESP32 Ground Station
        |
        v
PC Serial Monitor / Dashboard
```

## Repository Structure

```text
docs/
  architecture.md
  test-workflow.md
  wiring-notes.md

code-snippets/
  telemetry_packet.h

images/
  .gitkeep
```

## What This Demonstrates

- Embedded system communication design
- Sensor-to-telemetry data flow
- STM32 and ESP32 integration thinking
- Documentation discipline for hardware/software projects
- Practical debugging with serial monitor output

## Future Improvements

- Add screenshots from serial monitor output
- Add wiring diagram images
- Add a short demo video link
- Add packet loss and RSSI test results
- Add a simplified dashboard preview
