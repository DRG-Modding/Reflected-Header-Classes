#pragma once
#include "CoreMinimal.h"
#include "EDatasmithCADStitchingTechnique.generated.h"

UENUM(BlueprintType)
enum class EDatasmithCADStitchingTechnique : uint8 {
    StitchingNone,
    StitchingHeal,
    StitchingSew,
};

