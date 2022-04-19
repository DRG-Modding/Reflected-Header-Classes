#pragma once
#include "CoreMinimal.h"
#include "HeightmapData.h"
#include "WeightmapData.h"
#include "LandscapeLayerComponentData.generated.h"

USTRUCT()
struct FLandscapeLayerComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHeightmapData HeightmapData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWeightmapData WeightmapData;
    
    LANDSCAPE_API FLandscapeLayerComponentData();
};

