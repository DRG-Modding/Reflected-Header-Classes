#pragma once
#include "CoreMinimal.h"
#include "ENDILandscape_SourceMode.generated.h"

UENUM()
enum class ENDILandscape_SourceMode : uint8 {
    Default,
    Source,
    AttachParent,
    ENDILandscape_MAX UMETA(Hidden),
};

