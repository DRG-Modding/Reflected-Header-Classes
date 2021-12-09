#pragma once
#include "CoreMinimal.h"
#include "EPawnActionResult.generated.h"

UENUM()
namespace EPawnActionResult {
    enum Type {
        NotStarted,
        InProgress,
        Success,
        Failed,
        Aborted,
    };
}

