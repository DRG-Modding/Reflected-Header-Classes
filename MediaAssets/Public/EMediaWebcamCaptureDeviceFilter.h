#pragma once
#include "CoreMinimal.h"
#include "EMediaWebcamCaptureDeviceFilter.generated.h"

UENUM()
enum class EMediaWebcamCaptureDeviceFilter {
    None,
    DepthSensor,
    Front,
    Rear = 0x4,
    Unknown = 0x8,
};

