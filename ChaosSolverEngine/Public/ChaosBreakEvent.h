#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosBreakEvent.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct CHAOSSOLVERENGINE_API FChaosBreakEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    float Mass;
    
    FChaosBreakEvent();
};

