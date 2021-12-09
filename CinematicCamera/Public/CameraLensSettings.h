#pragma once
#include "CoreMinimal.h"
#include "CameraLensSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraLensSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DiaphragmBladeCount;
    
    CINEMATICCAMERA_API FCameraLensSettings();
};

