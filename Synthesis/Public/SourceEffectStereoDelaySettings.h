#pragma once
#include "CoreMinimal.h"
#include "EStereoDelaySourceEffect.h"
#include "EStereoDelayFiltertype.h"
#include "SourceEffectStereoDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectStereoDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStereoDelaySourceEffect DelayMode;
    
    UPROPERTY(EditAnywhere)
    float DelayTimeMsec;
    
    UPROPERTY(EditAnywhere)
    float Feedback;
    
    UPROPERTY(EditAnywhere)
    float DelayRatio;
    
    UPROPERTY(EditAnywhere)
    float WetLevel;
    
    UPROPERTY(EditAnywhere)
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStereoDelayFiltertype FilterType;
    
    UPROPERTY(EditAnywhere)
    float FilterFrequency;
    
    UPROPERTY(EditAnywhere)
    float FilterQ;
    
    FSourceEffectStereoDelaySettings();
};

