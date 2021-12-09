#pragma once
#include "CoreMinimal.h"
#include "ENCPoolMethod.generated.h"

UENUM()
enum class ENCPoolMethod : uint8 {
    None,
    AutoRelease,
    ManualRelease,
    ManualRelease_OnComplete,
    FreeInPool,
};

