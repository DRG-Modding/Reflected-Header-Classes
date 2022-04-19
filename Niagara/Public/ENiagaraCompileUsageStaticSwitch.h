#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCompileUsageStaticSwitch.generated.h"

UENUM()
enum class ENiagaraCompileUsageStaticSwitch {
    Spawn,
    Update,
    Event,
    SimulationStage,
    Default,
};

