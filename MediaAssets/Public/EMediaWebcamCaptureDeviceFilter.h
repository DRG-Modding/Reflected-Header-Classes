#pragma once
#include "CoreMinimal.h"
#include "EMediaWebcamCaptureDeviceFilter.generated.h"

UENUM(BlueprintType)
enum class EMediaWebcamCaptureDeviceFilter : uint8 {
    None,
    DepthSensor,
    Front,
    Rear = 0x4,
    Unknown = 0x8,
};

