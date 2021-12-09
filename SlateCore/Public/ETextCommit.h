#pragma once
#include "CoreMinimal.h"
#include "ETextCommit.generated.h"

UENUM()
namespace ETextCommit {
    enum Type {
        Default,
        OnEnter,
        OnUserMovedFocus,
        OnCleared,
    };
}

