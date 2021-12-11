#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ARTrackedGeometry.h"
#include "AREnvironmentCaptureProbe.generated.h"

class UAREnvironmentCaptureProbeTexture;

UCLASS()
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbe : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
    
    UAREnvironmentCaptureProbe();
};

