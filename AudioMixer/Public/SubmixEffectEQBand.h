#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectEQBand.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectEQBand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Bandwidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnabled: 1;
    
    FSubmixEffectEQBand();
};

