#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosCollisionEventData.generated.h"

USTRUCT(BlueprintType)
struct FChaosCollisionEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Velocity1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Velocity2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mass1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mass2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Impulse;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosCollisionEventData();
};

