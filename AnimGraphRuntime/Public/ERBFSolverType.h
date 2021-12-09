#pragma once
#include "CoreMinimal.h"
#include "ERBFSolverType.generated.h"

UENUM()
enum class ERBFSolverType : uint8 {
    Additive,
    Interpolative,
};

