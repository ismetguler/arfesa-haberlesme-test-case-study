# Test Workflow

This document describes a repeatable communication test for the telemetry system.

## 1. Prepare Hardware

- Connect STM32F407 flight computer
- Connect ESP32 ground station
- Check LoRa module wiring
- Check antenna connections
- Power both devices safely

## 2. Upload Firmware

- Flash STM32 firmware from STM32CubeIDE
- Flash ESP32 receiver firmware from Arduino IDE or PlatformIO
- Open serial monitor for the ground station

## 3. Validate Link

Expected serial monitor output should include:

```text
packet_id=125
altitude_m=120.4
pitch_deg=3.1
roll_deg=-1.8
gps_fix=1
link=OK
```

## 4. Move Sensors

- Rotate the IMU and check pitch/roll changes
- Simulate altitude changes if barometer test setup allows it
- Check GPS fix state outdoors or with a valid GPS test condition

## 5. Record Results

Useful values to record:

- Packet count
- Lost packet count
- RSSI or link quality if available
- Sensor value stability
- Test distance
- Antenna type

## Success Criteria

- Ground station receives packets continuously
- Packet counter increments correctly
- Sensor values update live
- No unexpected resets occur during the test
