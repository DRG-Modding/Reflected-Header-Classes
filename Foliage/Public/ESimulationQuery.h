#pragma once
#include "CoreMinimal.h"
#include "ESimulationQuery.generated.h"

UENUM()
namespace ESimulationQuery {
    enum Type {
        None,
        CollisionOverlap,
        ShadeOverlap,
        AnyOverlap,
    };
}

