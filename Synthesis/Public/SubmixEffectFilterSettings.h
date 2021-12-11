#pragma once
#include "CoreMinimal.h"
#include "ESubmixFilterType.h"
#include "ESubmixFilterAlgorithm.h"
#include "SubmixEffectFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixFilterAlgorithm FilterAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterQ;
    
    FSubmixEffectFilterSettings();
};

