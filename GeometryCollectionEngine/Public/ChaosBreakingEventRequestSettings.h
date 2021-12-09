#pragma once
#include "CoreMinimal.h"
#include "EChaosBreakingSortMethod.h"
#include "ChaosBreakingEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosBreakingEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNumberOfResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EChaosBreakingSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosBreakingEventRequestSettings();
};

