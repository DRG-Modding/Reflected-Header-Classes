#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
#include "TestCameraShake.generated.h"

UCLASS(EditInlineNew, HideDropdown)
class UTestCameraShake : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UTestCameraShake();
};

