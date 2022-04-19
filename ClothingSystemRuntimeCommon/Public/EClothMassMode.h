#pragma once
#include "CoreMinimal.h"
#include "EClothMassMode.generated.h"

UENUM()
enum class EClothMassMode {
    UniformMass,
    TotalMass,
    Density,
    MaxClothMassMode,
};

