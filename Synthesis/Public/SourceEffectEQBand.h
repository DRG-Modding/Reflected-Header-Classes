#pragma once
#include "CoreMinimal.h"
#include "SourceEffectEQBand.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectEQBand {
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
    
    FSourceEffectEQBand();
};

