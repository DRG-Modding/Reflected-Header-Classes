#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Quat
#include "EscortMuleMovementState.generated.h"

USTRUCT(BlueprintType)
struct FEscortMuleMovementState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FQuat AngularVelocity;
    
    FSD_API FEscortMuleMovementState();
};

