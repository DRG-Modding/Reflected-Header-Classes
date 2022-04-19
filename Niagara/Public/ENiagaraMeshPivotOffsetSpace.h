#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMeshPivotOffsetSpace.generated.h"

UENUM()
enum class ENiagaraMeshPivotOffsetSpace : uint8 {
    Mesh,
    Simulation,
    World,
    Local,
};

