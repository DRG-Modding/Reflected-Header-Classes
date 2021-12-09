#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Root
#include "AnimNode_StateResult.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_StateResult : public FAnimNode_Root {
    GENERATED_BODY()
public:
    FAnimNode_StateResult();
};

