#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBindingSource.generated.h"

UENUM()
enum ENiagaraBindingSource {
    ImplicitFromSource,
    ExplicitParticles,
    ExplicitEmitter,
    ExplicitSystem,
    ExplicitUser,
    MaxBindingSource,
};

