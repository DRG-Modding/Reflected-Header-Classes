#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSubmixPreset
#include "SubmixEffectDelaySettings.h"
#include "SubmixEffectDelayPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USubmixEffectDelayPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectDelaySettings Settings;
    
    UPROPERTY(Transient)
    FSubmixEffectDelaySettings DynamicSettings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectDelaySettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetDelay(float Length);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDelayInMilliseconds();
    
    USubmixEffectDelayPreset();
};

