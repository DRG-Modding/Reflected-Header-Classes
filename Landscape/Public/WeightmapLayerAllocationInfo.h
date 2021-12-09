#pragma once
#include "CoreMinimal.h"
#include "WeightmapLayerAllocationInfo.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT(BlueprintType)
struct FWeightmapLayerAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    ULandscapeLayerInfoObject* LayerInfo;
    
    UPROPERTY()
    uint8 WeightmapTextureIndex;
    
    UPROPERTY()
    uint8 WeightmapTextureChannel;
    
    LANDSCAPE_API FWeightmapLayerAllocationInfo();
};

