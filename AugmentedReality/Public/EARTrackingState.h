#pragma once
#include "CoreMinimal.h"
#include "EARTrackingState.generated.h"

UENUM()
enum class EARTrackingState : uint8 {
    Unknown,
    Tracking,
    NotTracking,
    StoppedTracking,
};

