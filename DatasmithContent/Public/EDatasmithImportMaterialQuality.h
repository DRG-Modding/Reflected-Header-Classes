#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportMaterialQuality.generated.h"

UENUM(BlueprintType)
enum class EDatasmithImportMaterialQuality : uint8 {
    UseNoFresnelCurves,
    UseSimplifierFresnelCurves,
    UseRealFresnelCurves,
};

