#pragma once
#include "CoreMinimal.h"
#include "ERingModulatorTypeSourceEffect.h"
#include "SourceEffectRingModulationSettings.generated.h"

class UAudioBus;

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectRingModulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERingModulatorTypeSourceEffect ModulatorType;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    float DryLevel;
    
    UPROPERTY(EditAnywhere)
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioBus* AudioBusModulator;
    
    FSourceEffectRingModulationSettings();
};

