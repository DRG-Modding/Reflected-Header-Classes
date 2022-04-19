#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonShapeMode.generated.h"

UENUM()
enum class ENiagaraRibbonShapeMode : uint8 {
    Plane,
    MultiPlane,
    Tube,
    Custom,
};

