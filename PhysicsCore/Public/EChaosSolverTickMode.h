#pragma once
#include "CoreMinimal.h"
#include "EChaosSolverTickMode.generated.h"

UENUM()
enum class EChaosSolverTickMode {
    Fixed,
    Variable,
    VariableCapped,
    VariableCappedWithTarget,
};

