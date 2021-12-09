#pragma once
#include "CoreMinimal.h"
#include "ESelectInfo.generated.h"

UENUM()
namespace ESelectInfo {
    enum Type {
        OnKeyPress,
        OnNavigation,
        OnMouseClick,
        Direct,
    };
}

