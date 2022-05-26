#pragma once
#include "CoreMinimal.h"
#include "TimeSynthSpectralData.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthSpectralData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrequencyHz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    FTimeSynthSpectralData();
};

