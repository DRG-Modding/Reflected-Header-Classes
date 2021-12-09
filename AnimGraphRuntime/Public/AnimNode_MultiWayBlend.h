#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
//CROSS-MODULE INCLUDE: Engine InputScaleBias
#include "AnimNode_MultiWayBlend.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_MultiWayBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPoseLink> Poses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> DesiredAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAdditiveNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNormalizeAlpha;
    
    FAnimNode_MultiWayBlend();
};

