#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumDelayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayLength;
    
    FSubmixEffectDelaySettings();
};

