#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectEQBand.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectEQBand {
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
    
    FSubmixEffectEQBand();
};

