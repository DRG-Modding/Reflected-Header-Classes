#pragma once
#include "CoreMinimal.h"
#include "EChaosBreakingSortMethod.h"
#include "ChaosBreakingEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosBreakingEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfResults;
    
    UPROPERTY(EditAnywhere)
    float MinRadius;
    
    UPROPERTY(EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinMass;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosBreakingSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosBreakingEventRequestSettings();
};

