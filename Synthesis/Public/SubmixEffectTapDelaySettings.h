#pragma once
#include "CoreMinimal.h"
#include "TapDelayInfo.h"
#include "SubmixEffectTapDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectTapDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaximumDelayLength;
    
    UPROPERTY(EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTapDelayInfo> Taps;
    
    FSubmixEffectTapDelaySettings();
};

