#pragma once
#include "CoreMinimal.h"
#include "FAIDistanceType.generated.h"

UENUM()
enum class FAIDistanceType : uint8 {
    Distance3D,
    Distance2D,
    DistanceZ,
    MAX,
};

