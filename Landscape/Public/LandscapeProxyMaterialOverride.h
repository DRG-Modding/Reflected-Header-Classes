#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PerPlatformInt
#include "LandscapeProxyMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLandscapeProxyMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformInt LODIndex;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    LANDSCAPE_API FLandscapeProxyMaterialOverride();
};

