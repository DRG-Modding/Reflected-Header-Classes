#pragma once
#include "CoreMinimal.h"
#include "WeightmapLayerAllocationInfo.h"
#include "WeightmapData.generated.h"

class UTexture2D;
class ULandscapeWeightmapUsage;

USTRUCT(BlueprintType)
struct FWeightmapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Textures;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeWeightmapUsage*> TextureUsages;
    
    LANDSCAPE_API FWeightmapData();
};

