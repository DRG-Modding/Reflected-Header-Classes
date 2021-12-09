#pragma once
#include "CoreMinimal.h"
#include "EEnvTraceShape.generated.h"

UENUM()
namespace EEnvTraceShape {
    enum Type {
        Line,
        Box,
        Sphere,
        Capsule,
    };
}

