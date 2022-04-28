#pragma once
#include "CoreMinimal.h"
#include "SourceEffectEQBand.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectEQBand {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Bandwidth;
    
    UPROPERTY(EditAnywhere)
    float GainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    FSourceEffectEQBand();
};

