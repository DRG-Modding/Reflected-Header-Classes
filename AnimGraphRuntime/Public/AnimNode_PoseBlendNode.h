#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseHandler.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
#include "AnimNode_PoseBlendNode.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCurve;
    
    FAnimNode_PoseBlendNode();
};

