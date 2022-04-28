#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
#include "IconSceneCaptureComponent.generated.h"

class UIconGenerationCameraKey;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIconGenerationCameraKey* CameraKey;
    
    UIconSceneCaptureComponent();
};

