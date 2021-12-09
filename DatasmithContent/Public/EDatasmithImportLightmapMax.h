#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportLightmapMax.generated.h"

UENUM(BlueprintType)
enum class EDatasmithImportLightmapMax : uint8 {
    LIGHTMAP_64,
    LIGHTMAP_128,
    LIGHTMAP_256,
    LIGHTMAP_512,
    LIGHTMAP_1024,
    LIGHTMAP_2048,
    LIGHTMAP_4096,
    LIGHTMAP_MAX UMETA(Hidden),
};

