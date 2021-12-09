#pragma once
#include "CoreMinimal.h"
#include "ENiagaraExecutionState.generated.h"

UENUM()
enum class ENiagaraExecutionState {
    Active,
    Inactive,
    InactiveClear,
    Complete,
    Disabled,
    Num,
};

