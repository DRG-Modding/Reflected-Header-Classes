#pragma once
#include "CoreMinimal.h"
#include "ESimulationOverlap.generated.h"

UENUM()
namespace ESimulationOverlap {
    enum Type {
        CollisionOverlap,
        ShadeOverlap,
        None,
    };
}

