#pragma once
#include "CoreMinimal.h"
#include "EConstraintOffsetOption.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=FilterOptionPerAxis -FallbackName=FilterOptionPerAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ETransformConstraintType -FallbackName=ETransformConstraintType
#include "Constraint.generated.h"

USTRUCT(BlueprintType)
struct FConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstraintOffsetOption OffsetOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformConstraintType TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterOptionPerAxis PerAxis;
    
    ANIMGRAPHRUNTIME_API FConstraint();
};

