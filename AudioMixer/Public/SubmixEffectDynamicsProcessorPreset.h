#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSubmixPreset
#include "SubmixEffectDynamicsProcessorSettings.h"
#include "SubmixEffectDynamicsProcessorPreset.generated.h"

class USoundSubmix;

UCLASS(BlueprintType, EditInlineNew)
class AUDIOMIXER_API USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectDynamicsProcessorSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalSubmix(USoundSubmix* Submix);
    
    USubmixEffectDynamicsProcessorPreset();
};

