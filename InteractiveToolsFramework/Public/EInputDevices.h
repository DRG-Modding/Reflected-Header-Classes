#pragma once
#include "CoreMinimal.h"
#include "EInputDevices.generated.h"

UENUM(BlueprintType)
enum class EInputDevices : uint8 {
    None,
    Keyboard,
    Mouse,
    Gamepad = 0x4,
    OculusTouch = 0x8,
    HTCViveWands = 0x10,
    AnySpatialDevice = 0x18,
    TabletFingers = 0x400,
};

