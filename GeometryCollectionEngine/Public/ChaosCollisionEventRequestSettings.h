#pragma once
#include "CoreMinimal.h"
#include "EChaosCollisionSortMethod.h"
#include "ChaosCollisionEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosCollisionEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberResults;
    
    UPROPERTY(EditAnywhere)
    float MinMass;
    
    UPROPERTY(EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinImpulse;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosCollisionSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosCollisionEventRequestSettings();
};

