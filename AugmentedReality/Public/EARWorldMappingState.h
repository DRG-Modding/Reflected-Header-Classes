#pragma once
#include "CoreMinimal.h"
#include "EARWorldMappingState.generated.h"

UENUM()
enum class EARWorldMappingState : uint8 {
    NotAvailable,
    StillMappingNotRelocalizable,
    StillMappingRelocalizable,
    Mapped,
};

