#pragma once
#include "CoreMinimal.h"
#include "EARSpatialMeshUsageFlags.generated.h"

UENUM()
enum class EARSpatialMeshUsageFlags : uint8 {
    NotApplicable,
    Visible,
    Collision,
};

