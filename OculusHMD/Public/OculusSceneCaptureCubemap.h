#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OculusSceneCaptureCubemap.generated.h"

class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class UOculusSceneCaptureCubemap : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USceneCaptureComponent2D*> CaptureComponents;
    
public:
    UOculusSceneCaptureCubemap();
};

