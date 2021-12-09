#pragma once
#include "CoreMinimal.h"
#include "EXRTrackedDeviceType.generated.h"

UENUM()
enum class EXRTrackedDeviceType : uint8 {
    HeadMountedDisplay,
    Controller,
    TrackingReference,
    Other,
    Invalid = 0xFE,
    Any,
};

