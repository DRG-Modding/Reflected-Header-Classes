#pragma once
#include "CoreMinimal.h"
#include "WeightmapLayerAllocationInfo.h"
#include "WeightmapData.generated.h"

class ULandscapeWeightmapUsage;
class UTexture2D;

USTRUCT(BlueprintType)
struct FWeightmapData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTexture2D*> Textures;
    
    UPROPERTY()
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;
    
    UPROPERTY(Transient)
    TArray<ULandscapeWeightmapUsage*> TextureUsages;
    
    LANDSCAPE_API FWeightmapData();
};

