# 🛰️ ARFESA — Rocket Telemetry Communication Test

> STM32-based telemetry communication test case study for the ARFESA TEKNOFEST rocket team.

![C](https://img.shields.io/badge/C-A8B9CC?logo=c&logoColor=black)
![STM32](https://img.shields.io/badge/STM32-03234B?logo=stmicroelectronics&logoColor=white)

## About

A focused test/case study for the avionics communication layer of a TEKNOFEST competition rocket. It validates real-time, multi-sensor data flow on **STM32** microcontrollers over **SPI / I2C / UART**, as part of the rocket's flight-data pipeline.

## Highlights

- 📡 Multi-sensor data acquisition over SPI / I2C / UART
- 🎯 Kalman filtering for sensor-noise reduction (~25%) and altitude estimation
- ⚡ Real-time data-flow optimization for the avionics backend
- 🪂 Part of fail-safe flight & recovery logic

## Tech stack

- **C** (bare-metal / STM32 HAL)
- **STM32** microcontrollers
- **FreeRTOS**, Kalman filter, sensor fusion
- Buses: **SPI, I2C, UART**

## Build

Open with **STM32CubeIDE** (or build with the ARM GCC toolchain), flash to the target STM32 board.

---
Made by [İsmet Güler](https://github.com/ismetguler) · [Portfolio](https://ismetguler.github.io)
