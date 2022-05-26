#pragma once
#include "CoreMinimal.h"
#include "EToolSide.generated.h"

UENUM(BlueprintType)
enum class EToolSide : uint8 {
    Left = 0x1,
    Mouse = 0x1,
    Right,
};

