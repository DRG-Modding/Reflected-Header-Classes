#pragma once
#include "CoreMinimal.h"
#include "EGranularSynthSeekType.generated.h"

UENUM()
enum class EGranularSynthSeekType : uint8 {
    FromBeginning,
    FromCurrentPosition,
    Count,
};

