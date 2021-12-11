#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "AnimNode_PoseHandler.h"
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "EPoseDriverSource.h"
#include "PoseDriverTarget.h"
#include "EPoseDriverOutput.h"
#include "RBFParams.h"
#include "AnimNode_PoseDriver.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseDriver : public FAnimNode_PoseHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    FPoseLink SourcePose;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> SourceBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> OnlyDriveBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FPoseDriverTarget> PoseTargets;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EvalSpaceBone;
    
    UPROPERTY(EditAnywhere)
    FRBFParams RBFParams;
    
    UPROPERTY(EditAnywhere)
    EPoseDriverSource DriveSource;
    
    UPROPERTY(EditAnywhere)
    EPoseDriverOutput DriveOutput;
    
    UPROPERTY(EditAnywhere)
    uint8 bOnlyDriveSelectedBones: 1;
    
    FAnimNode_PoseDriver();
};

