#pragma once
#include "CoreMinimal.h"
#include "EEyeTrackerStatus.generated.h"

UENUM()
enum class EEyeTrackerStatus {
    NotConnected,
    NotTracking,
    Tracking,
};

