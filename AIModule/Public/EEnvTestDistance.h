#pragma once
#include "CoreMinimal.h"
#include "EEnvTestDistance.generated.h"

UENUM()
namespace EEnvTestDistance {
    enum Type {
        Distance3D,
        Distance2D,
        DistanceZ,
        DistanceAbsoluteZ,
    };
}

