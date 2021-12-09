#pragma once
#include "CoreMinimal.h"
#include "EChaosCollisionSortMethod.h"
#include "ChaosCollisionEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosCollisionEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNumberResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EChaosCollisionSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosCollisionEventRequestSettings();
};

