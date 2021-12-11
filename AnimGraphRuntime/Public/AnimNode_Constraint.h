#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "Constraint.h"
#include "AnimNode_Constraint.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_Constraint : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(EditAnywhere)
    TArray<FConstraint> ConstraintSetup;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> ConstraintWeights;
    
    FAnimNode_Constraint();
};

