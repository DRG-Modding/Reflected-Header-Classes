#pragma once
#include "CoreMinimal.h"
#include "LandscapeInfoLayerSettings.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT()
struct FLandscapeInfoLayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfoObj;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    LANDSCAPE_API FLandscapeInfoLayerSettings();
};

