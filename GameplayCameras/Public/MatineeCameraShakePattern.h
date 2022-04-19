#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "MatineeCameraShakePattern.generated.h"

UCLASS(EditInlineNew, HideDropdown)
class GAMEPLAYCAMERAS_API UMatineeCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UMatineeCameraShakePattern();
};

