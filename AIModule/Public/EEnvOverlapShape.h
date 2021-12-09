#pragma once
#include "CoreMinimal.h"
#include "EEnvOverlapShape.generated.h"

UENUM()
namespace EEnvOverlapShape {
    enum Type {
        Box,
        Sphere,
        Capsule,
    };
}

