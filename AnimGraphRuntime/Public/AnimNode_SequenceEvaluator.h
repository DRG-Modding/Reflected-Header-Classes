#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_AssetPlayerBase
#include "ESequenceEvalReinit.h"
#include "AnimNode_SequenceEvaluator.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExplicitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTeleportToExplicitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESequenceEvalReinit::Type> ReinitializationBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartPosition;
    
    FAnimNode_SequenceEvaluator();
};

