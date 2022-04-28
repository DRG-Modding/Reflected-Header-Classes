#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaximumDelayLength;
    
    UPROPERTY(EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(EditAnywhere)
    float DelayLength;
    
    FSubmixEffectDelaySettings();
};

