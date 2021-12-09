#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine InputAlphaBoolBlend
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
//CROSS-MODULE INCLUDE: Engine InputScaleBias
//CROSS-MODULE INCLUDE: Engine InputScaleBiasClamp
//CROSS-MODULE INCLUDE: Engine EAnimAlphaInputType
#include "AnimNode_ApplyAdditive.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_ApplyAdditive : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlphaBoolEnabled;
    
    FAnimNode_ApplyAdditive();
};

