#pragma once
#include "CoreMinimal.h"
#include "EModioMaturityFlags.generated.h"

UENUM(BlueprintType)
enum class EModioMaturityFlags : uint8 {
    None,
    Alcohol,
    Drugs,
    Violence = 0x4,
    Explicit = 0x8,
};

