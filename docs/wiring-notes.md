# Wiring Notes

This file summarizes the wiring areas that matter most in a telemetry test.

## STM32 Side

- SPI or UART wiring must match the selected module configuration
- Sensor power levels must be checked before connection
- Common ground is required between connected modules
- LoRa module TX/RX or SPI lines must be verified carefully

## ESP32 Side

- LoRa module power requirement must be checked
- UART or SPI pins should be documented clearly
- USB serial output should be stable during long tests

## Practical Checklist

- Antenna connected before LoRa transmission
- Power source is stable
- Ground is shared where required
- Serial baud rate matches firmware
- Pin mapping is documented before field testing

## Common Issues

- Wrong TX/RX direction
- Missing common ground
- Incorrect baud rate
- Weak power supply
- Antenna mismatch
- GPS tested indoors without fix
