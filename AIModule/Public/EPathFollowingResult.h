#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingResult.generated.h"

UENUM()
namespace EPathFollowingResult {
    enum Type {
        Success,
        Blocked,
        OffPath,
        Aborted,
        Skipped_DEPRECATED,
        Invalid,
    };
}

