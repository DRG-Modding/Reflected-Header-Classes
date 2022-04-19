#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
#include "WeaponIconSceneCaptureComponent.generated.h"

class UIconGenerationCameraKey;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWeaponIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIconGenerationCameraKey* CameraKey;
    
    UWeaponIconSceneCaptureComponent();
};

