#pragma once
#include "CoreMinimal.h"
#include "EStereoDelaySourceEffect.h"
#include "SourceEffectStereoDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectStereoDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStereoDelaySourceEffect DelayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetLevel;
    
    FSourceEffectStereoDelaySettings();
};

