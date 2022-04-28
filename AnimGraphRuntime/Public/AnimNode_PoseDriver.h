#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseHandler.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "EPoseDriverOutput.h"
#include "RBFParams.h"
#include "PoseDriverTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EPoseDriverSource.h"
#include "AnimNode_PoseDriver.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseDriver : public FAnimNode_PoseHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> SourceBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> OnlyDriveBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseDriverTarget> PoseTargets;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EvalSpaceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRBFParams RBFParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseDriverSource DriveSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseDriverOutput DriveOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyDriveSelectedBones: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODThreshold;
    
    FAnimNode_PoseDriver();
};

