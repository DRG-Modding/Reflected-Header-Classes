#pragma once
#include "CoreMinimal.h"
#include "TimeSynthSpectralData.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthSpectralData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FrequencyHz;
    
    UPROPERTY(EditAnywhere)
    float Magnitude;
    
    FTimeSynthSpectralData();
};

