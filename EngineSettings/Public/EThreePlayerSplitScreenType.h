#pragma once
#include "CoreMinimal.h"
#include "EThreePlayerSplitScreenType.generated.h"

UENUM()
namespace EThreePlayerSplitScreenType {
    enum Type {
        FavorTop,
        FavorBottom,
        Vertical,
        Horizontal,
    };
}

