#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OculusSceneCaptureCubemap.generated.h"

class USceneCaptureComponent2D;

UCLASS()
class UOculusSceneCaptureCubemap : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<USceneCaptureComponent2D*> CaptureComponents;
    
public:
    UOculusSceneCaptureCubemap();
};

