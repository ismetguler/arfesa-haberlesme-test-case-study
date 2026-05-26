# Architecture

The telemetry system is designed around a simple flight-to-ground communication pipeline.

## High-Level Flow

```text
BNO055 + MS5611 + GPS
        |
        v
STM32F407 flight computer
        |
        v
LoRa telemetry packet
        |
        v
ESP32 ground station
        |
        v
Serial monitor / dashboard
```

## Flight Computer Responsibilities

- Read sensor values
- Prepare telemetry packet fields
- Add packet counter and status information
- Send packet through LoRa module

## Ground Station Responsibilities

- Receive LoRa packet
- Parse packet fields
- Validate packet structure
- Print telemetry values over USB serial

## Important Telemetry Fields

- Packet counter
- Altitude
- Pitch
- Roll
- GPS fix state
- Latitude and longitude
- Link status

## Engineering Notes

The main goal of this workflow is repeatability. A good test setup should make it easy to show that sensor changes on the flight computer are reflected on the ground station output.
