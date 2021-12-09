#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSubmixPreset
#include "SubmixEffectFlexiverbSettings.h"
#include "SubmixEffectFlexiverbPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectFlexiverbSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectFlexiverbSettings& InSettings);
    
    USubmixEffectFlexiverbPreset();
};

