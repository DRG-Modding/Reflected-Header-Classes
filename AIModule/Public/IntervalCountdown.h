#pragma once
#include "CoreMinimal.h"
#include "IntervalCountdown.generated.h"

USTRUCT(BlueprintType)
struct FIntervalCountdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Interval;
    
    AIMODULE_API FIntervalCountdown();
};

