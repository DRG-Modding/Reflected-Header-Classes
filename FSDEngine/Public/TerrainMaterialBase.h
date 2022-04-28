#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "TerrainMaterialBase.generated.h"

UCLASS(Blueprintable)
class FSDENGINE_API UTerrainMaterialBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UTerrainMaterialBase();
};

