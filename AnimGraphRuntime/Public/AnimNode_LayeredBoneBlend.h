#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
//CROSS-MODULE INCLUDE: Engine InputBlendPose
//CROSS-MODULE INCLUDE: Engine PerBoneBlendWeight
//CROSS-MODULE INCLUDE: Engine ECurveBlendOption
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "AnimNode_LayeredBoneBlend.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_LayeredBoneBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FPoseLink> BlendPoses;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FInputBlendPose> LayerSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<float> BlendWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMeshSpaceRotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMeshSpaceScaleBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECurveBlendOption::Type> CurveBlendOption;
    
    UPROPERTY(EditAnywhere)
    bool bBlendRootMotionBasedOnRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
protected:
    UPROPERTY()
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights;
    
    UPROPERTY()
    FGuid SkeletonGuid;
    
    UPROPERTY()
    FGuid VirtualBoneGuid;
    
public:
    FAnimNode_LayeredBoneBlend();
};

