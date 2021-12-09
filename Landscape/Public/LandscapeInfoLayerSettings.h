#pragma once
#include "CoreMinimal.h"
#include "LandscapeInfoLayerSettings.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT()
struct FLandscapeInfoLayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    ULandscapeLayerInfoObject* LayerInfoObj;
    
    UPROPERTY()
    FName LayerName;
    
    LANDSCAPE_API FLandscapeInfoLayerSettings();
};

