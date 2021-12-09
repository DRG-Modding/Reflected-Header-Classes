#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AnimationCore Axis
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "BoneSocketTarget.h"
//CROSS-MODULE INCLUDE: Engine EBoneControlSpace
#include "AnimNode_TwoBoneIK.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKBone;
    
    UPROPERTY(EditAnywhere)
    float StartStretchRatio;
    
    UPROPERTY(EditAnywhere)
    float MaxStretchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EffectorLocation;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget EffectorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector JointTargetLocation;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget JointTarget;
    
    UPROPERTY(EditAnywhere)
    FAxis TwistAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowStretching: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTakeRotationFromEffectorSpace: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMaintainEffectorRelRot: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowTwist: 1;
    
    FAnimNode_TwoBoneIK();
};

