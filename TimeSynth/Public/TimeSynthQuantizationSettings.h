#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthBeatDivision.h"
#include "ETimeSynthEventQuantization.h"
#include "TimeSynthQuantizationSettings.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthQuantizationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BeatsPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatsPerBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeSynthBeatDivision BeatDivision;
    
    UPROPERTY(EditAnywhere)
    float EventDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeSynthEventQuantization GlobalQuantization;
    
    FTimeSynthQuantizationSettings();
};

