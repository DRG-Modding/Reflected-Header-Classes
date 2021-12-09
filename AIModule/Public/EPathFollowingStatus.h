#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingStatus.generated.h"

UENUM()
namespace EPathFollowingStatus {
    enum Type {
        Idle,
        Waiting,
        Paused,
        Moving,
    };
}

