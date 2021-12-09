#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSubmixPreset
#include "SubmixEffectReverbFastSettings.h"
#include "SubmixEffectReverbFastPreset.generated.h"

class UReverbEffect;

UCLASS(BlueprintType, EditInlineNew)
class AUDIOMIXER_API USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectReverbFastSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettingsWithReverbEffect(const UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectReverbFastSettings& InSettings);
    
    USubmixEffectReverbFastPreset();
};

