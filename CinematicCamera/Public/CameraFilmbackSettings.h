#pragma once
#include "CoreMinimal.h"
#include "CameraFilmbackSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraFilmbackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Interp)
    float SensorWidth;
    
    UPROPERTY(EditAnywhere, Interp)
    float SensorHeight;
    
    UPROPERTY(EditAnywhere, Interp)
    float SensorAspectRatio;
    
    CINEMATICCAMERA_API FCameraFilmbackSettings();
};

