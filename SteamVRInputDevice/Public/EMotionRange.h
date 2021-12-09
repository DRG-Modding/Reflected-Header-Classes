#pragma once
#include "CoreMinimal.h"
#include "EMotionRange.generated.h"

UENUM(BlueprintType)
enum class EMotionRange : uint8 {
    VR_WithoutController,
    VR_WithController,
    VR_MAX UMETA(Hidden),
};

