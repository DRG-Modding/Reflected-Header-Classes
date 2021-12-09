#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EScaleChainInitialLength.h"
//CROSS-MODULE INCLUDE: Engine InputScaleBias
#include "AnimNode_ScaleChainLength.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_ScaleChainLength : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPoseLink InputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultChainLength;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ChainStartBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ChainEndBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float alpha;
    
    UPROPERTY(EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(EditAnywhere)
    EScaleChainInitialLength ChainInitialLength;
    
    FAnimNode_ScaleChainLength();
};

