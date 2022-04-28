#pragma once
#include "CoreMinimal.h"
#include "CameraLensSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraLensSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinFocalLength;
    
    UPROPERTY(EditAnywhere)
    float MaxFocalLength;
    
    UPROPERTY(EditAnywhere)
    float MinFStop;
    
    UPROPERTY(EditAnywhere)
    float MaxFStop;
    
    UPROPERTY(EditAnywhere)
    float MinimumFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DiaphragmBladeCount;
    
    CINEMATICCAMERA_API FCameraLensSettings();
};

