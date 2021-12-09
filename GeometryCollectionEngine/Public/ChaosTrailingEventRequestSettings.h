#pragma once
#include "CoreMinimal.h"
#include "EChaosTrailingSortMethod.h"
#include "ChaosTrailingEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosTrailingEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNumberOfResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EChaosTrailingSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosTrailingEventRequestSettings();
};

