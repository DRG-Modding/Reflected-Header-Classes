#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: Engine PoseLink
//CROSS-MODULE INCLUDE: Engine InputScaleBiasClamp
#include "AnimNode_RotateRootBone.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RotateRootBone : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp PitchScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp YawScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MeshToComponent;
    
    FAnimNode_RotateRootBone();
};

