#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardTrigger.generated.h"

UENUM()
enum class EVirtualKeyboardTrigger : uint8 {
    OnFocusByPointer,
    OnAllFocusEvents,
};

