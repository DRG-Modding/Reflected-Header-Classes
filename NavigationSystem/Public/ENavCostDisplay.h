#pragma once
#include "CoreMinimal.h"
#include "ENavCostDisplay.generated.h"

UENUM()
namespace ENavCostDisplay {
    enum Type {
        TotalCost,
        HeuristicOnly,
        RealCostOnly,
    };
}

