#pragma once
#include "CoreMinimal.h"
#include "WeightmapLayerAllocationInfo.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT(BlueprintType)
struct FWeightmapLayerAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfo;
    
    UPROPERTY(EditAnywhere)
    uint8 WeightmapTextureIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 WeightmapTextureChannel;
    
    LANDSCAPE_API FWeightmapLayerAllocationInfo();
};

