#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimCurveParam -FallbackName=AnimCurveParam
#include "ReferenceBoneFrame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=Axis -FallbackName=Axis
#include "AnimNode_TwistCorrectiveNode.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReferenceBoneFrame BaseFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReferenceBoneFrame TwistFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxis TwistPlaneNormalAxis;
    
    UPROPERTY(EditAnywhere)
    float RangeMax;
    
    UPROPERTY(EditAnywhere)
    float RemappedMin;
    
    UPROPERTY(EditAnywhere)
    float RemappedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimCurveParam Curve;
    
    FAnimNode_TwistCorrectiveNode();
};

