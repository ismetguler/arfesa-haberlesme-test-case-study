#ifndef TELEMETRY_PACKET_H
#define TELEMETRY_PACKET_H

#include <stdint.h>

typedef struct
{
    uint32_t packet_id;
    float altitude_m;
    float pitch_deg;
    float roll_deg;
    double latitude;
    double longitude;
    uint8_t gps_fix;
    uint8_t status;
} telemetry_packet_t;

#endif
