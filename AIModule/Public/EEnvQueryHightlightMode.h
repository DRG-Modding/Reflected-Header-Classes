#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryHightlightMode.generated.h"

UENUM()
enum class EEnvQueryHightlightMode : uint8 {
    All,
    Best5Pct,
    Best25Pct,
};

