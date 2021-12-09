#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: AnimationCore Axis
#include "ReferenceBoneFrame.generated.h"

USTRUCT(BlueprintType)
struct FReferenceBoneFrame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    FAxis Axis;
    
    ANIMGRAPHRUNTIME_API FReferenceBoneFrame();
};

