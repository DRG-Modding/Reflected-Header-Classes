#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: Engine EBoneAxis
#include "AnimNode_RotationMultiplier.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Multiplier;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneAxis> RotationAxisToRefer;
    
    UPROPERTY(EditAnywhere)
    bool bIsAdditive;
    
    FAnimNode_RotationMultiplier();
};

