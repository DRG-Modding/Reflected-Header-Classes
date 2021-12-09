#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "AnimPhysPlanarLimit.generated.h"

USTRUCT(BlueprintType)
struct FAnimPhysPlanarLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference DrivingBone;
    
    UPROPERTY(EditAnywhere)
    FTransform PlaneTransform;
    
    ANIMGRAPHRUNTIME_API FAnimPhysPlanarLimit();
};

