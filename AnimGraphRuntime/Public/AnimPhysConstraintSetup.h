#pragma once
#include "CoreMinimal.h"
#include "AnimPhysAngularConstraintType.h"
#include "AnimPhysLinearConstraintType.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine AnimPhysTwistAxis
#include "AnimPhysConstraintSetup.generated.h"

USTRUCT(BlueprintType)
struct FAnimPhysConstraintSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AnimPhysLinearConstraintType LinearXLimitType;
    
    UPROPERTY(EditAnywhere)
    AnimPhysLinearConstraintType LinearYLimitType;
    
    UPROPERTY(EditAnywhere)
    AnimPhysLinearConstraintType LinearZLimitType;
    
    UPROPERTY(EditAnywhere)
    FVector LinearAxesMin;
    
    UPROPERTY(EditAnywhere)
    FVector LinearAxesMax;
    
    UPROPERTY(EditAnywhere)
    AnimPhysAngularConstraintType AngularConstraintType;
    
    UPROPERTY(EditAnywhere)
    AnimPhysTwistAxis TwistAxis;
    
    UPROPERTY(EditAnywhere)
    AnimPhysTwistAxis AngularTargetAxis;
    
    UPROPERTY(EditAnywhere)
    float ConeAngle;
    
    UPROPERTY(EditAnywhere)
    FVector AngularLimitsMin;
    
    UPROPERTY(EditAnywhere)
    FVector AngularLimitsMax;
    
    UPROPERTY(EditAnywhere)
    FVector AngularTarget;
    
    ANIMGRAPHRUNTIME_API FAnimPhysConstraintSetup();
};

