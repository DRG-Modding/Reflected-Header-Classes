#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemInstanceState.generated.h"

UENUM()
enum class ENiagaraSystemInstanceState {
    None,
    PendingSpawn,
    PendingSpawnPaused,
    Spawning,
    Running,
    Paused,
    Num,
};

