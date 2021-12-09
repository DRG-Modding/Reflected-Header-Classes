#pragma once
#include "CoreMinimal.h"
#include "EMediaVideoCaptureDeviceFilter.generated.h"

UENUM()
enum class EMediaVideoCaptureDeviceFilter {
    None,
    Card,
    Software,
    Unknown = 0x4,
    Webcam = 0x8,
};

