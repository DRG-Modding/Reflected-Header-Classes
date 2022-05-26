#pragma once
#include "CoreMinimal.h"
#include "EBoundaryType.generated.h"

UENUM(BlueprintType)
enum class EBoundaryType : uint8 {
    Boundary_Outer,
    Boundary_PlayArea,
    Boundary_MAX UMETA(Hidden),
};

