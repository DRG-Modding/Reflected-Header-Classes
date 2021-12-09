#pragma once
#include "CoreMinimal.h"
#include "ERBFDistanceMethod.generated.h"

UENUM()
enum class ERBFDistanceMethod : uint8 {
    Euclidean,
    Quaternion,
    SwingAngle,
    TwistAngle,
    DefaultMethod,
};

