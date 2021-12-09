#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimTarget.generated.h"

UENUM()
enum class ENiagaraSimTarget : uint8 {
    CPUSim,
    GPUComputeSim,
};

