#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportLightmapMin.generated.h"

UENUM(BlueprintType)
enum class EDatasmithImportLightmapMin : uint8 {
    LIGHTMAP_16,
    LIGHTMAP_32,
    LIGHTMAP_64,
    LIGHTMAP_128,
    LIGHTMAP_256,
    LIGHTMAP_512,
    LIGHTMAP_MAX UMETA(Hidden),
};

