#pragma once
#include "CoreMinimal.h"
#include "CaptureResolution.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENECAPTURE_API FCaptureResolution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 ResX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 ResY;
    
    FCaptureResolution();
};

