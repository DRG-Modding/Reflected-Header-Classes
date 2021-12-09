#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonTessellationMode.generated.h"

UENUM()
enum class ENiagaraRibbonTessellationMode : uint8 {
    Automatic,
    Custom,
    Disabled,
};

