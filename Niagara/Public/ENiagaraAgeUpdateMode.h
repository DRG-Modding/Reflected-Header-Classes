#pragma once
#include "CoreMinimal.h"
#include "ENiagaraAgeUpdateMode.generated.h"

UENUM()
enum class ENiagaraAgeUpdateMode : uint8 {
    TickDeltaTime,
    DesiredAge,
    DesiredAgeNoSeek,
};

