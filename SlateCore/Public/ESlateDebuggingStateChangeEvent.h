#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingStateChangeEvent.generated.h"

UENUM()
enum class ESlateDebuggingStateChangeEvent {
    MouseCaptureGained,
    MouseCaptureLost,
};

