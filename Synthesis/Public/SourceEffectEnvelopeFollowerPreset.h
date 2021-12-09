#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectEnvelopeFollowerSettings.h"
#include "SourceEffectEnvelopeFollowerPreset.generated.h"

class UEnvelopeFollowerListener;

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectEnvelopeFollowerSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectEnvelopeFollowerSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
    
    USourceEffectEnvelopeFollowerPreset();
};

