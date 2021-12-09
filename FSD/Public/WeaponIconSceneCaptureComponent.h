#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneCaptureComponent2D
#include "WeaponIconSceneCaptureComponent.generated.h"

class UIconGenerationCameraKey;

UCLASS(EditInlineNew)
class UWeaponIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey;
    
    UWeaponIconSceneCaptureComponent();
};

