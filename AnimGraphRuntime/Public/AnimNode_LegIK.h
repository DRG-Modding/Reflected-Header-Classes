#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
#include "AnimLegIKDefinition.h"
#include "AnimNode_LegIK.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_LegIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ReachPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimLegIKDefinition> LegsDefinition;
    
    FAnimNode_LegIK();
};

