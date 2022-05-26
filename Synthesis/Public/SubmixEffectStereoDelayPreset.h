#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectStereoDelaySettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectStereoDelayPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectStereoDelaySettings Settings;
    
    USubmixEffectStereoDelayPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectStereoDelaySettings& InSettings);
    
};

