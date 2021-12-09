#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ESphericalLimitType.h"
#include "AnimPhysSphericalLimit.generated.h"

USTRUCT(BlueprintType)
struct FAnimPhysSphericalLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference DrivingBone;
    
    UPROPERTY(EditAnywhere)
    FVector SphereLocalOffset;
    
    UPROPERTY(EditAnywhere)
    float LimitRadius;
    
    UPROPERTY(EditAnywhere)
    ESphericalLimitType LimitType;
    
    ANIMGRAPHRUNTIME_API FAnimPhysSphericalLimit();
};
