#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AREnvironmentCaptureProbe.generated.h"

class UAREnvironmentCaptureProbeTexture;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbe : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;
    
public:
    UAREnvironmentCaptureProbe();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
    
};

