#pragma once
#include "CoreMinimal.h"
#include "EChaosWeightMapTarget.generated.h"

UENUM()
enum class EChaosWeightMapTarget {
    None,
    MaxDistance,
    BackstopDistance,
    BackstopRadius,
    AnimDriveMultiplier,
};

