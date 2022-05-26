#pragma once
#include "CoreMinimal.h"
#include "ETrackingConfidence.generated.h"

UENUM(BlueprintType)
enum class ETrackingConfidence : uint8 {
    Low,
    High,
};

