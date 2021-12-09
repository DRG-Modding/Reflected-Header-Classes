#pragma once
#include "CoreMinimal.h"
#include "AnimPhysLinearConstraintType.generated.h"

UENUM()
enum class AnimPhysLinearConstraintType : uint8 {
    Free,
    Limited,
};

