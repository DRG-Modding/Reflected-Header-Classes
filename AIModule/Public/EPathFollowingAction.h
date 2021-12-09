#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingAction.generated.h"

UENUM()
namespace EPathFollowingAction {
    enum Type {
        Error,
        NoMove,
        DirectMove,
        PartialPath,
        PathToGoal,
    };
}

