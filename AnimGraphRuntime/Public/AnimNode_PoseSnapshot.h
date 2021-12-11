#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseSnapshot
#include "ESnapshotSourceMode.h"
#include "AnimNode_PoseSnapshot.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseSnapshot : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SnapshotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseSnapshot Snapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESnapshotSourceMode Mode;
    
    FAnimNode_PoseSnapshot();
};

