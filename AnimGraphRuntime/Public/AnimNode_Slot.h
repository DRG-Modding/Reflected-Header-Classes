#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "AnimNode_Slot.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_Slot : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName slotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysUpdateSourcePose;
    
    FAnimNode_Slot();
};

