#pragma once
#include "CoreMinimal.h"
#include "EReflexMode.generated.h"

UENUM(BlueprintType)
enum class EReflexMode : uint8 {
    Disabled,
    Enabled,
    EnabledPlusBoost = 0x3,
};

