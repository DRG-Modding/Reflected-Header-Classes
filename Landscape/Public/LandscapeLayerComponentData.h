#pragma once
#include "CoreMinimal.h"
#include "HeightmapData.h"
#include "WeightmapData.h"
#include "LandscapeLayerComponentData.generated.h"

USTRUCT()
struct FLandscapeLayerComponentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FHeightmapData HeightmapData;
    
    UPROPERTY()
    FWeightmapData WeightmapData;
    
    LANDSCAPE_API FLandscapeLayerComponentData();
};

