#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterType.h"
#include "ESourceEffectFilterCircuit.h"
#include "SourceEffectFilterAudioBusModulationSettings.h"
#include "SourceEffectFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectFilterCircuit FilterCircuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;
    
    FSourceEffectFilterSettings();
};

