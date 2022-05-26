#pragma once
#include "CoreMinimal.h"
#include "EMediaVideoCaptureDeviceFilter.generated.h"

UENUM(BlueprintType)
enum class EMediaVideoCaptureDeviceFilter : uint8 {
    None,
    Card,
    Software,
    Unknown = 0x4,
    Webcam = 0x8,
};

