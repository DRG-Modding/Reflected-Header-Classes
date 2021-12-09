#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine InputAlphaBoolBlend
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine ComponentSpacePoseLink
//CROSS-MODULE INCLUDE: Engine EAnimAlphaInputType
//CROSS-MODULE INCLUDE: Engine InputScaleBias
//CROSS-MODULE INCLUDE: Engine InputScaleBiasClamp
#include "AnimNode_SkeletalControlBase.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SkeletalControlBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentSpacePoseLink ComponentPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(Transient)
    float ActualAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlphaBoolEnabled;
    
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
    
    FAnimNode_SkeletalControlBase();
};

