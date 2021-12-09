#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
#include "ERefPoseType.h"
#include "AnimNode_RefPose.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimNode_RefPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ERefPoseType> RefPoseType;
    
    FAnimNode_RefPose();
};

