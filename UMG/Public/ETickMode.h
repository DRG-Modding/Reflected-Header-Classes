#pragma once
#include "CoreMinimal.h"
#include "ETickMode.generated.h"

UENUM()
enum class ETickMode : uint8 {
    Disabled,
    Enabled,
    Automatic,
};

