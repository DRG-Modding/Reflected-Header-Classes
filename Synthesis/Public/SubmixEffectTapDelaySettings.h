#pragma once
#include "CoreMinimal.h"
#include "TapDelayInfo.h"
#include "SubmixEffectTapDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectTapDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumDelayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTapDelayInfo> Taps;
    
    FSubmixEffectTapDelaySettings();
};

