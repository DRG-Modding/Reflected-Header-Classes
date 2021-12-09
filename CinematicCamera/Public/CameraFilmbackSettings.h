#pragma once
#include "CoreMinimal.h"
#include "CameraFilmbackSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraFilmbackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SensorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SensorHeight;
    
    UPROPERTY(BlueprintReadOnly, Interp, VisibleAnywhere)
    float SensorAspectRatio;
    
    CINEMATICCAMERA_API FCameraFilmbackSettings();
};

