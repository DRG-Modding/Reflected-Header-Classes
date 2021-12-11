#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: Engine EBoneControlSpace
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AnimNode_ObserveBone.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToObserve;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> DisplaySpace;
    
    UPROPERTY(EditAnywhere)
    bool bRelativeToRefPose;
    
    UPROPERTY()
    FVector Translation;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    FVector Scale;
    
    FAnimNode_ObserveBone();
};

