#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectDynamicsProcessorSettings.h"
#include "SubmixEffectDynamicsProcessorPreset.generated.h"

class USoundSubmix;
class UAudioBus;

UCLASS(BlueprintType, EditInlineNew)
class AUDIOMIXER_API USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectDynamicsProcessorSettings Settings;
    
    USubmixEffectDynamicsProcessorPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalSubmix(USoundSubmix* Submix);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBus(UAudioBus* AudioBus);
    
    UFUNCTION(BlueprintCallable)
    void ResetKey();
    
};

