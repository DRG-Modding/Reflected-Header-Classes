#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "EHandSkeleton.h"
#include "AnimNode_SteamVRSetWristTransform.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink ReferencePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHandSkeleton HandSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink targetPose;
    
    FAnimNode_SteamVRSetWristTransform();
};

