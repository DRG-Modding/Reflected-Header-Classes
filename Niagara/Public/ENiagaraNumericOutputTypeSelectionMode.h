#pragma once
#include "CoreMinimal.h"
#include "ENiagaraNumericOutputTypeSelectionMode.generated.h"

UENUM()
enum class ENiagaraNumericOutputTypeSelectionMode {
    None,
    Largest,
    Smallest,
    Scalar,
};

