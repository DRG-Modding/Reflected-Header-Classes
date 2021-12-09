#pragma once
#include "CoreMinimal.h"
#include "ESamplePlayerSeekType.generated.h"

UENUM()
enum class ESamplePlayerSeekType : uint8 {
    FromBeginning,
    FromCurrentPosition,
    FromEnd,
    Count,
};

