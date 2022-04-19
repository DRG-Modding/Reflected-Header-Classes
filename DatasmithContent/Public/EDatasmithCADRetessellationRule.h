#pragma once
#include "CoreMinimal.h"
#include "EDatasmithCADRetessellationRule.generated.h"

UENUM(BlueprintType)
enum class EDatasmithCADRetessellationRule : uint8 {
    All,
    SkipDeletedSurfaces,
};

