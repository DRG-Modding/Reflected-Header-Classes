#pragma once
#include "CoreMinimal.h"
#include "EFixedFoveatedRenderingLevel.generated.h"

UENUM(BlueprintType)
enum class EFixedFoveatedRenderingLevel : uint8 {
    FFR_Off,
    FFR_Low,
    FFR_Medium,
    FFR_High,
    FFR_HighTop,
    FFR_MAX UMETA(Hidden),
};

