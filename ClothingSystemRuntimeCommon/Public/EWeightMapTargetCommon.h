#pragma once
#include "CoreMinimal.h"
#include "EWeightMapTargetCommon.generated.h"

UENUM()
enum class EWeightMapTargetCommon : uint8 {
    None,
    MaxDistance,
    BackstopDistance,
    BackstopRadius,
    AnimDriveMultiplier,
};

