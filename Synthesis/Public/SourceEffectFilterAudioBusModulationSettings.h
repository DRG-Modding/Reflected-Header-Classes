#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterParam.h"
#include "SourceEffectFilterAudioBusModulationSettings.generated.h"

class UAudioBus;

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectFilterAudioBusModulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioBus* AudioBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerAttackTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerReleaseTimeMsec;
    
    UPROPERTY(EditAnywhere)
    float EnvelopeGainMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectFilterParam FilterParam;
    
    UPROPERTY(EditAnywhere)
    float MinFrequencyModulation;
    
    UPROPERTY(EditAnywhere)
    float MaxFrequencyModulation;
    
    UPROPERTY(EditAnywhere)
    float MinResonanceModulation;
    
    UPROPERTY(EditAnywhere)
    float MaxResonanceModulation;
    
    FSourceEffectFilterAudioBusModulationSettings();
};

