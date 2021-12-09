#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptGroup.generated.h"

UENUM()
enum class ENiagaraScriptGroup {
    Particle,
    Emitter,
    System,
    Max,
};

