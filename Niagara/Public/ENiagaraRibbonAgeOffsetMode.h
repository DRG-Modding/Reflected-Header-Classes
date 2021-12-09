#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonAgeOffsetMode.generated.h"

UENUM()
enum class ENiagaraRibbonAgeOffsetMode : uint8 {
    Scale,
    Clip,
};

