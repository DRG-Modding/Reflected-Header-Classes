#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_PostProcessEffects.generated.h"

UENUM(BlueprintType)
enum class EOculusMR_PostProcessEffects : uint8 {
    PPE_Off,
    PPE_On,
    PPE_MAX UMETA(Hidden),
};

