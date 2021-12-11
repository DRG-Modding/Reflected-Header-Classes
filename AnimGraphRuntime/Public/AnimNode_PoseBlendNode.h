#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine EAlphaBlendOption
#include "AnimNode_PoseHandler.h"
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "AnimNode_PoseBlendNode.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    FPoseLink SourcePose;
    
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CustomCurve;
    
    FAnimNode_PoseBlendNode();
};

