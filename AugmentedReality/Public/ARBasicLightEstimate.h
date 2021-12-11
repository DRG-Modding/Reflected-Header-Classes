#pragma once
#include "CoreMinimal.h"
#include "ARLightEstimate.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ARBasicLightEstimate.generated.h"

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARBasicLightEstimate : public UARLightEstimate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float AmbientIntensityLumens;
    
    UPROPERTY()
    float AmbientColorTemperatureKelvin;
    
    UPROPERTY()
    FLinearColor AmbientColor;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbientIntensityLumens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbientColorTemperatureKelvin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAmbientColor() const;
    
    UARBasicLightEstimate();
};

