#pragma once
#include "CoreMinimal.h"
#include "EChaosTrailingSortMethod.h"
#include "ChaosTrailingEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosTrailingEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfResults;
    
    UPROPERTY(EditAnywhere)
    float MinMass;
    
    UPROPERTY(EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosTrailingSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosTrailingEventRequestSettings();
};

