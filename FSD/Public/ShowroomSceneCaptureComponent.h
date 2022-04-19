#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
#include "ShowroomSceneCaptureComponent.generated.h"

class UShowroomCameraKey;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UShowroomSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShowroomCameraKey* CameraKey;
    
    UShowroomSceneCaptureComponent();
};

