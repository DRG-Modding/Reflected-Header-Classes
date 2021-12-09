#pragma once
#include "CoreMinimal.h"
#include "ESimulationSpace.generated.h"

UENUM()
enum class ESimulationSpace : uint8 {
    ComponentSpace,
    WorldSpace,
    BaseBoneSpace,
};

