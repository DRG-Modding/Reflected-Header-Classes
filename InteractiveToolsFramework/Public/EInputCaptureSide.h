#pragma once
#include "CoreMinimal.h"
#include "EInputCaptureSide.generated.h"

UENUM()
enum class EInputCaptureSide {
    None,
    Left,
    Right,
    Both,
    Any = 0x63,
};

