#pragma once
#include "CoreMinimal.h"
#include "EInputCaptureSide.generated.h"

UENUM(BlueprintType)
enum class EInputCaptureSide : uint8 {
    None,
    Left,
    Right,
    Both,
    Any = 0x63,
};

