#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingFocusEvent.generated.h"

UENUM()
enum class ESlateDebuggingFocusEvent {
    FocusChanging,
    FocusLost,
    FocusReceived,
    MAX,
};

