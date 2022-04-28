#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "SimpleCameraShakePattern.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API USimpleCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    USimpleCameraShakePattern();
};

