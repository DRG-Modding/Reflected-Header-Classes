#pragma once
#include "CoreMinimal.h"
#include "LandscapeMaterialTextureStreamingInfo.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeMaterialTextureStreamingInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName TextureName;
    
    UPROPERTY()
    float TexelFactor;
    
    LANDSCAPE_API FLandscapeMaterialTextureStreamingInfo();
};

