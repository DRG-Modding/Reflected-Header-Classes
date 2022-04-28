#pragma once
#include "CoreMinimal.h"
#include "SourceEffectWaveShaperSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectWaveShaperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Amount;
    
    UPROPERTY(EditAnywhere)
    float OutputGainDb;
    
    FSourceEffectWaveShaperSettings();
};

