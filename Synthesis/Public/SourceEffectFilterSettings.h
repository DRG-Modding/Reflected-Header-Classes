#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterType.h"
#include "ESourceEffectFilterCircuit.h"
#include "SourceEffectFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectFilterCircuit FilterCircuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterQ;
    
    FSourceEffectFilterSettings();
};

