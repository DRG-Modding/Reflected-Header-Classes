#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PerPlatformInt
#include "LandscapeComponentMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLandscapeComponentMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformInt LODIndex;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    LANDSCAPE_API FLandscapeComponentMaterialOverride();
};

