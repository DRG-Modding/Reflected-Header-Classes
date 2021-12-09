#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "AnimNode_MakeDynamicAdditive.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_MakeDynamicAdditive : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMeshSpaceAdditive;
    
    FAnimNode_MakeDynamicAdditive();
};

