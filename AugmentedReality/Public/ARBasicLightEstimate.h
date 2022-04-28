#pragma once
#include "CoreMinimal.h"
#include "ARLightEstimate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ARBasicLightEstimate.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARBasicLightEstimate : public UARLightEstimate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float AmbientIntensityLumens;
    
    UPROPERTY(EditAnywhere)
    float AmbientColorTemperatureKelvin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmbientColor;
    
public:
    UARBasicLightEstimate();
    UFUNCTION(BlueprintPure)
    float GetAmbientIntensityLumens() const;
    
    UFUNCTION(BlueprintPure)
    float GetAmbientColorTemperatureKelvin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAmbientColor() const;
    
};

