#pragma once
#include "CoreMinimal.h"
#include "EBTFlowAbortMode.generated.h"

UENUM()
namespace EBTFlowAbortMode {
    enum Type {
        None,
        LowerPriority,
        Self,
        Both,
    };
}

