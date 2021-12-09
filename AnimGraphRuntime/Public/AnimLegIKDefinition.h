#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject EAxis
#include "AnimLegIKDefinition.generated.h"

USTRUCT(BlueprintType)
struct FAnimLegIKDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKFootBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference FKFootBone;
    
    UPROPERTY(EditAnywhere)
    int32 NumBonesInLimb;
    
    UPROPERTY(EditAnywhere)
    float MinRotationAngle;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> FootBoneForwardAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> HingeRotationAxis;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRotationLimit;
    
    UPROPERTY(EditAnywhere)
    bool bEnableKneeTwistCorrection;
    
    ANIMGRAPHRUNTIME_API FAnimLegIKDefinition();
};

