#pragma once
#include "CoreMinimal.h"
#include "SourceEffectSimpleDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectSimpleDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SpeedOfSound;
    
    UPROPERTY(EditAnywhere)
    float DelayAmount;
    
    UPROPERTY(EditAnywhere)
    float DryAmount;
    
    UPROPERTY(EditAnywhere)
    float WetAmount;
    
    UPROPERTY(EditAnywhere)
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDelayBasedOnDistance: 1;
    
    FSourceEffectSimpleDelaySettings();
};

