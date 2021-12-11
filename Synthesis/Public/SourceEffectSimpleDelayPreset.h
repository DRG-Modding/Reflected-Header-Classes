#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectSimpleDelaySettings.h"
#include "SourceEffectSimpleDelayPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectSimpleDelaySettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectSimpleDelaySettings& InSettings);
    
    USourceEffectSimpleDelayPreset();
};

