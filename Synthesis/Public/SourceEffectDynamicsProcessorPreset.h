#pragma once
#include "CoreMinimal.h"
#include "SourceEffectDynamicsProcessorSettings.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectDynamicsProcessorPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectDynamicsProcessorSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectDynamicsProcessorSettings& InSettings);
    
    USourceEffectDynamicsProcessorPreset();
};

