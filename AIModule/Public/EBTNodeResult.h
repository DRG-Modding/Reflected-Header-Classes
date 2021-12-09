#pragma once
#include "CoreMinimal.h"
#include "EBTNodeResult.generated.h"

UENUM()
namespace EBTNodeResult {
    enum Type {
        Succeeded,
        Failed,
        Aborted,
        InProgress,
    };
}

