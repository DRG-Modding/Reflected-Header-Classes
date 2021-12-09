#pragma once
#include "CoreMinimal.h"
#include "EPawnActionMoveMode.generated.h"

UENUM()
namespace EPawnActionMoveMode {
    enum Type {
        UsePathfinding,
        StraightLine,
    };
}

