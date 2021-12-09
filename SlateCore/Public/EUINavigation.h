#pragma once
#include "CoreMinimal.h"
#include "EUINavigation.generated.h"

UENUM()
enum class EUINavigation : uint8 {
    Left,
    Right,
    Up,
    Down,
    Next,
    Previous,
    Num,
    Invalid,
};

