#pragma once
#include "CoreMinimal.h"
#include "ERecastPartitioning.generated.h"

UENUM()
namespace ERecastPartitioning {
    enum Type {
        Monotone,
        Watershed,
        ChunkyMonotone,
    };
}

