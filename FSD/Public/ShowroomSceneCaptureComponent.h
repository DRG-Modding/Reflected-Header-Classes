#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneCaptureComponent2D
#include "ShowroomSceneCaptureComponent.generated.h"

class UShowroomCameraKey;

UCLASS(EditInlineNew)
class UShowroomSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UShowroomCameraKey* CameraKey;
    
    UShowroomSceneCaptureComponent();
};

