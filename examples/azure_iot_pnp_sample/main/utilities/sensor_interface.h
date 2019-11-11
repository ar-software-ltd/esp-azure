﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.0.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: Tuesday, August 20, 2019
 ***********************************************************************************************/

#ifndef SENSOR_INTERFACE_H
#define SENSOR_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"

#include "digitaltwin_client_helper.h"
#include "digitaltwin_serializer.h"
#include "parson.h"
#include "../esp32AzureKit_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum SENSOR_TELEMETRY_TAG
{
    Sensor_TEMP_TELEMETRY,
    Sensor_HUMID_TELEMETRY,
    Sensor_LIGHT_TELEMETRY,
    Sensor_PITCH_TELEMETRY,
    Sensor_ROLL_TELEMETRY,
    Sensor_PRESSURE_TELEMETRY,
    Sensor_ALTITUDE_TELEMETRY,
    Sensor_MAGNETX_TELEMETRY,
    Sensor_MAGNETY_TELEMETRY,
    Sensor_MAGNETZ_TELEMETRY
} SENSOR_TELEMETRY;

typedef enum SENSOR_READONLY_PROPERTY_TAG
{
    Sensor_FANSPEED_PROPERTY,
    Sensor_TEMPTHRESHOLD_PROPERTY
} SENSOR_PROPERTY;

// DigitalTwin interface name from service perspective.
// static const char SensorInterfaceId[] = "urn:pebj:EnvironmentalSensor:1";
static const char SensorInterfaceId[] = "urn:pebj:interfaces:esp32AzureKit:1";

// static const char SensorInterfaceInstanceName[] = "sensor";
static const char SensorInterfaceInstanceName[] = "esp32AzureKit";

// Telemetry names for this interface.

static const char SensorInterface_TempTelemetry[] = "temp";

static const char SensorInterface_HumidTelemetry[] = "humid";

static const char SensorInterface_LightTelemetry[] = "light";

static const char SensorInterface_PitchTelemetry[] = "pitch";

static const char SensorInterface_RollTelemetry[] = "roll";

static const char SensorInterface_PressureTelemetry[] = "pressure";

static const char SensorInterface_AltitudeTelemetry[] = "altitude";

static const char SensorInterface_MagnetXTelemetry[] = "MagnetX";

static const char SensorInterface_MagnetYTelemetry[] = "MagnetY";

static const char SensorInterface_MagnetZTelemetry[] = "MagnetZ";

// Property names for this interface.

#define SensorInterface_FanSpeedProperty "fanSpeed"

#define SensorInterface_TempThresholdProperty "tempThreshold"

// Command names for this interface

#define SensorInterface_EchoCommand "echo"

#define SensorInterface_StartFanCommand "startFan"

#define SensorInterface_StopFanCommand "stopFan"

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE SensorInterface_Create();

void SensorInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendTemp();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendHumid();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendLight();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendPitch();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendRoll();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendPressure();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendAltitude();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendMagnetX();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendMagnetY();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendMagnetZ();

DIGITALTWIN_CLIENT_RESULT SensorInterface_Telemetry_SendAll();

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACE_H