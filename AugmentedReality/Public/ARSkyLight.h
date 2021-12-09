#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SkyLight
#include "ARSkyLight.generated.h"

class UAREnvironmentCaptureProbe;

UCLASS()
class AUGMENTEDREALITY_API AARSkyLight : public ASkyLight {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAREnvironmentCaptureProbe* CaptureProbe;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);
    
    AARSkyLight();
};

