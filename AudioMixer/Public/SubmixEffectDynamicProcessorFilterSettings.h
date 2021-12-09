#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectDynamicProcessorFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectDynamicProcessorFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Cutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GainDb;
    
    FSubmixEffectDynamicProcessorFilterSettings();
};

