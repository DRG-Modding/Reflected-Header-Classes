#pragma once
#include "CoreMinimal.h"
#include "FoliageVertexColorChannelMask.generated.h"

USTRUCT(BlueprintType)
struct FFoliageVertexColorChannelMask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 UseMask: 1;
    
    UPROPERTY(EditAnywhere)
    float MaskThreshold;
    
    UPROPERTY(EditAnywhere)
    uint8 InvertMask: 1;
    
    FOLIAGE_API FFoliageVertexColorChannelMask();
};

