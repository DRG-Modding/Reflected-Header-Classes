#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "AnimNode_BlendSpacePlayer.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AnimNode_AimOffsetLookAt.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PivotSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SocketAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float alpha;
    
    FAnimNode_AimOffsetLookAt();
};

