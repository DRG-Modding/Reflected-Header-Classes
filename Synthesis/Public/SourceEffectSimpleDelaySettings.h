#pragma once
#include "CoreMinimal.h"
#include "SourceEffectSimpleDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectSimpleDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedOfSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDelayBasedOnDistance: 1;
    
    FSourceEffectSimpleDelaySettings();
};

