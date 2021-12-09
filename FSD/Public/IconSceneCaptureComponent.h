#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneCaptureComponent2D
#include "IconSceneCaptureComponent.generated.h"

class UIconGenerationCameraKey;

UCLASS(EditInlineNew)
class UIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey;
    
    UIconSceneCaptureComponent();
};

