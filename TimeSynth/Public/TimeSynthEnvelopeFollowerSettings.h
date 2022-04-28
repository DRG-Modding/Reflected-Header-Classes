#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEnvelopeFollowerPeakMode.h"
#include "TimeSynthEnvelopeFollowerSettings.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthEnvelopeFollowerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AttackTime;
    
    UPROPERTY(EditAnywhere)
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeSynthEnvelopeFollowerPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnalogMode;
    
    FTimeSynthEnvelopeFollowerSettings();
};

