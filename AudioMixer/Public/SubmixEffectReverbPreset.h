#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectReverbSettings.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSubmixPreset
#include "SubmixEffectReverbPreset.generated.h"

class UReverbEffect;

UCLASS(BlueprintType, EditInlineNew)
class AUDIOMIXER_API USubmixEffectReverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectReverbSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettingsWithReverbEffect(const UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectReverbSettings& InSettings);
    
    USubmixEffectReverbPreset();
};

