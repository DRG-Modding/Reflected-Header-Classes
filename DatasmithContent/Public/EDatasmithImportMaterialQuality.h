#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportMaterialQuality.generated.h"

UENUM()
enum class EDatasmithImportMaterialQuality : uint8 {
    UseNoFresnelCurves,
    UseSimplifierFresnelCurves,
    UseRealFresnelCurves,
};

