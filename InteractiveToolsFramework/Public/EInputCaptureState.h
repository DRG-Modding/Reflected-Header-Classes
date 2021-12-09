#pragma once
#include "CoreMinimal.h"
#include "EInputCaptureState.generated.h"

UENUM()
enum class EInputCaptureState {
    Begin = 0x1,
    Continue,
    End,
    Ignore,
};

