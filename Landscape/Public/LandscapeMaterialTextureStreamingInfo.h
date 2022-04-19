#pragma once
#include "CoreMinimal.h"
#include "LandscapeMaterialTextureStreamingInfo.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeMaterialTextureStreamingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName TextureName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TexelFactor;
    
    LANDSCAPE_API FLandscapeMaterialTextureStreamingInfo();
};

