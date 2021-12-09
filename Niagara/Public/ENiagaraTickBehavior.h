#pragma once
#include "CoreMinimal.h"
#include "ENiagaraTickBehavior.generated.h"

UENUM()
enum class ENiagaraTickBehavior : uint8 {
    UsePrereqs,
    UseComponentTickGroup,
    ForceTickFirst,
    ForceTickLast,
};

