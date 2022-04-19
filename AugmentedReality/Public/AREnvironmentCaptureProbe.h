#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARTrackedGeometry.h"
#include "AREnvironmentCaptureProbe.generated.h"

class UAREnvironmentCaptureProbeTexture;

UCLASS()
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbe : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;
    
public:
    UAREnvironmentCaptureProbe();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
    
};

