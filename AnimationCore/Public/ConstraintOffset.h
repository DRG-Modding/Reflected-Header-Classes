#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Quat
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ConstraintOffset.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FConstraintOffset {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Translation;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    FVector Scale;
    
    UPROPERTY()
    FTransform Parent;
    
    FConstraintOffset();
};

