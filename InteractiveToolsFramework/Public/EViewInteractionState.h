#pragma once
#include "CoreMinimal.h"
#include "EViewInteractionState.generated.h"

UENUM()
enum class EViewInteractionState {
    None,
    Hovered,
    Focused,
};

