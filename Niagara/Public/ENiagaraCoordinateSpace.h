#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCoordinateSpace.generated.h"

UENUM()
enum class ENiagaraCoordinateSpace {
    Simulation,
    World,
    Local,
};

