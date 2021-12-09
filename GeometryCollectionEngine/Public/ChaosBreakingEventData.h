#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosBreakingEventData.generated.h"

USTRUCT(BlueprintType)
struct FChaosBreakingEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mass;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosBreakingEventData();
};

