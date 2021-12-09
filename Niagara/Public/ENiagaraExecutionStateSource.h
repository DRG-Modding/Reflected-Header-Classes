#pragma once
#include "CoreMinimal.h"
#include "ENiagaraExecutionStateSource.generated.h"

UENUM()
enum class ENiagaraExecutionStateSource {
    Scalability,
    Internal,
    Owner,
    InternalCompletion,
};

