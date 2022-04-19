#pragma once
#include "CoreMinimal.h"
#include "ARLightEstimate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ARBasicLightEstimate.generated.h"

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARBasicLightEstimate : public UARLightEstimate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AmbientIntensityLumens;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AmbientColorTemperatureKelvin;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLinearColor AmbientColor;
    
public:
    UARBasicLightEstimate();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbientIntensityLumens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbientColorTemperatureKelvin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAmbientColor() const;
    
};

