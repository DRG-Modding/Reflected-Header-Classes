#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthFilterType.h"
#include "TimeSynthFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct TIMESYNTH_API FTimeSynthFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeSynthFilterType FilterType;
    
    UPROPERTY(EditAnywhere)
    float CutoffFrequency;
    
    UPROPERTY(EditAnywhere)
    float FilterQ;
    
    FTimeSynthFilterSettings();
};

