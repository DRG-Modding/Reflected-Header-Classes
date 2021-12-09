#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMeshLockedAxisSpace.generated.h"

UENUM()
enum class ENiagaraMeshLockedAxisSpace : uint8 {
    Simulation,
    World,
    Local,
};

