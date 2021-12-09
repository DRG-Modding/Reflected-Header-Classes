#pragma once
#include "CoreMinimal.h"
#include "EMediaAudioCaptureDeviceFilter.generated.h"

UENUM()
enum class EMediaAudioCaptureDeviceFilter {
    None,
    Card,
    Microphone,
    Software = 0x4,
    Unknown = 0x8,
};

