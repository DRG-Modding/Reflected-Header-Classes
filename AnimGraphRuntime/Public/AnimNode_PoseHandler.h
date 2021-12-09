#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_AssetPlayerBase
#include "AnimNode_PoseHandler.generated.h"

class UPoseAsset;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPoseAsset* PoseAsset;
    
    FAnimNode_PoseHandler();
};

