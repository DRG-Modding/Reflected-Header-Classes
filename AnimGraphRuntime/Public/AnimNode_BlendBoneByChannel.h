#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "BlendBoneByChannelEntry.h"
//CROSS-MODULE INCLUDE: Engine InputScaleBias
//CROSS-MODULE INCLUDE: Engine EBoneControlSpace
#include "AnimNode_BlendBoneByChannel.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendBoneByChannel : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink B;
    
    UPROPERTY(EditAnywhere)
    TArray<FBlendBoneByChannelEntry> BoneDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TransformsSpace;
    
    FAnimNode_BlendBoneByChannel();
};

