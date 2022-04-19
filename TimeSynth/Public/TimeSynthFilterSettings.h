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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterQ;
    
    FTimeSynthFilterSettings();
};

