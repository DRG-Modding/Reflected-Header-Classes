#pragma once
#include "CoreMinimal.h"
#include "LandscapeLayerStruct.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT()
struct FLandscapeLayerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfoObj;
    
    LANDSCAPE_API FLandscapeLayerStruct();
};

