#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEnvelopeFollowerPeakMode.h"
#include "TimeSynthEnvelopeFollowerSettings.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthEnvelopeFollowerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeSynthEnvelopeFollowerPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnalogMode;
    
    FTimeSynthEnvelopeFollowerSettings();
};

