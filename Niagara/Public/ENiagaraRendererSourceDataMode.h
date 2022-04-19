#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRendererSourceDataMode.generated.h"

UENUM()
enum class ENiagaraRendererSourceDataMode : uint8 {
    Particles,
    Emitter,
};

