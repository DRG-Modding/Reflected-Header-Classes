#pragma once
#include "CoreMinimal.h"
#include "EViewInteractionState.generated.h"

UENUM(BlueprintType)
enum class EViewInteractionState : uint8 {
    None,
    Hovered,
    Focused,
};

