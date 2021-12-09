#pragma once
#include "CoreMinimal.h"
#include "ConstraintDescriptor.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ConstraintData.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FConstraintData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FConstraintDescriptor Constraint;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bMaintainOffset;
    
    UPROPERTY()
    FTransform Offset;
    
    UPROPERTY(Transient)
    FTransform CurrentTransform;
    
    FConstraintData();
};

