#pragma once
#include "CoreMinimal.h"
#include "ETouchType.generated.h"

UENUM()
namespace ETouchType {
    enum Type {
        Began,
        Moved,
        Stationary,
        ForceChanged,
        FirstMove,
        Ended,
        NumTypes,
    };
}

