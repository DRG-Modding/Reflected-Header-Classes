#pragma once
#include "CoreMinimal.h"
#include "EPickaxePartLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
#include "PickaxeIconSceneCaptureComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPickaxeIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickaxePartLocation CameraKey;
    
    UPickaxeIconSceneCaptureComponent();
};

