#pragma once
#include "CoreMinimal.h"
#include "EInputDevices.generated.h"

UENUM()
enum class EInputDevices {
    None,
    Keyboard,
    Mouse,
    Gamepad = 0x4,
    OculusTouch = 0x8,
    HTCViveWands = 0x10,
    AnySpatialDevice = 0x18,
    TabletFingers = 0x400,
};

