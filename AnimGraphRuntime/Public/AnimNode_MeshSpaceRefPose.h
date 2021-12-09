#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
#include "AnimNode_MeshSpaceRefPose.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimNode_MeshSpaceRefPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    FAnimNode_MeshSpaceRefPose();
};

