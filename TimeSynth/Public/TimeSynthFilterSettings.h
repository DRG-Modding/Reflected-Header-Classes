#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthFilterType.h"
#include "TimeSynthFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETimeSynthFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterQ;
    
    FTimeSynthFilterSettings();
};

