#pragma once
#include "CoreMinimal.h"
#include "ELocationFilteringModeEnum.generated.h"

UENUM(BlueprintType)
enum class ELocationFilteringModeEnum : uint8 {
    ChaosNiagara_LocationFilteringMode_Inclusive,
    ChaosNiagara_LocationFilteringMode_Exclusive,
    ChaosNiagara_Max,
};

