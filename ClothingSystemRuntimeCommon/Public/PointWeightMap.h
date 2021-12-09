#pragma once
#include "CoreMinimal.h"
#include "PointWeightMap.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FPointWeightMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> Values;
    
    FPointWeightMap();
};

