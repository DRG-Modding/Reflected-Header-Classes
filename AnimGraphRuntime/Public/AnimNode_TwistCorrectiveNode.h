#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine AnimCurveParam
#include "ReferenceBoneFrame.h"
//CROSS-MODULE INCLUDE: AnimationCore Axis
#include "AnimNode_TwistCorrectiveNode.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FReferenceBoneFrame BaseFrame;
    
    UPROPERTY(EditAnywhere)
    FReferenceBoneFrame TwistFrame;
    
    UPROPERTY(EditAnywhere)
    FAxis TwistPlaneNormalAxis;
    
    UPROPERTY(EditAnywhere)
    float RangeMax;
    
    UPROPERTY(EditAnywhere)
    float RemappedMin;
    
    UPROPERTY(EditAnywhere)
    float RemappedMax;
    
    UPROPERTY(EditAnywhere)
    FAnimCurveParam Curve;
    
    FAnimNode_TwistCorrectiveNode();
};

