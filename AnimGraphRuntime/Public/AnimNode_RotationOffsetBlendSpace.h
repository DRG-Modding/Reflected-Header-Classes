#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "AnimNode_BlendSpacePlayer.h"
//CROSS-MODULE INCLUDE: Engine InputScaleBias
//CROSS-MODULE INCLUDE: Engine InputAlphaBoolBlend
//CROSS-MODULE INCLUDE: Engine InputScaleBiasClamp
//CROSS-MODULE INCLUDE: Engine EAnimAlphaInputType
#include "AnimNode_RotationOffsetBlendSpace.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
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
    
    FAnimNode_RotationOffsetBlendSpace();
};

