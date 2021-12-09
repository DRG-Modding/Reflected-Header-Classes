#pragma once
#include "CoreMinimal.h"
#include "TimedDataInputEvaluationData.generated.h"

USTRUCT(BlueprintType)
struct TIMEMANAGEMENT_API FTimedDataInputEvaluationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float DistanceToNewestSampleSeconds;
    
    UPROPERTY(BlueprintReadWrite)
    float DistanceToOldestSampleSeconds;
    
    FTimedDataInputEvaluationData();
};

