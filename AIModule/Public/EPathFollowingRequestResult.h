#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingRequestResult.generated.h"

UENUM()
namespace EPathFollowingRequestResult {
    enum Type {
        Failed,
        AlreadyAtGoal,
        RequestSuccessful,
    };
}

