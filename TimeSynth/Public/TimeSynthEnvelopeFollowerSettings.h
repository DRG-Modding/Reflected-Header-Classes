#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEnvelopeFollowerPeakMode.h"
#include "TimeSynthEnvelopeFollowerSettings.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthEnvelopeFollowerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETimeSynthEnvelopeFollowerPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAnalogMode;
    
    FTimeSynthEnvelopeFollowerSettings();
};

