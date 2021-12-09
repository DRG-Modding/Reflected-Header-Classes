#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthBeatDivision.h"
#include "ETimeSynthEventQuantization.h"
#include "TimeSynthQuantizationSettings.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthQuantizationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeatsPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BeatsPerBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETimeSynthBeatDivision BeatDivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EventDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETimeSynthEventQuantization GlobalQuantization;
    
    FTimeSynthQuantizationSettings();
};

