#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectStereoDelaySettings.h"
#include "SourceEffectStereoDelayPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectStereoDelayPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectStereoDelaySettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectStereoDelaySettings& InSettings);
    
    USourceEffectStereoDelayPreset();
};

