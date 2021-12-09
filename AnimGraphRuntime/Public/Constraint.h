#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "EConstraintOffsetOption.h"
//CROSS-MODULE INCLUDE: AnimationCore FilterOptionPerAxis
//CROSS-MODULE INCLUDE: AnimationCore ETransformConstraintType
#include "Constraint.generated.h"

USTRUCT(BlueprintType)
struct FConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    EConstraintOffsetOption OffsetOption;
    
    UPROPERTY(EditAnywhere)
    ETransformConstraintType TransformType;
    
    UPROPERTY(EditAnywhere)
    FFilterOptionPerAxis PerAxis;
    
    ANIMGRAPHRUNTIME_API FConstraint();
};

