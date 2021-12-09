#pragma once
#include "CoreMinimal.h"
#include "ERingModulatorTypeSourceEffect.h"
#include "SourceEffectRingModulationSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectRingModulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERingModulatorTypeSourceEffect ModulatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetLevel;
    
    FSourceEffectRingModulationSettings();
};

