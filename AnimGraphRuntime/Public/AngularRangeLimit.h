#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "AngularRangeLimit.generated.h"

USTRUCT(BlueprintType)
struct FAngularRangeLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector LimitMin;
    
    UPROPERTY(EditAnywhere)
    FVector LimitMax;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    ANIMGRAPHRUNTIME_API FAngularRangeLimit();
};

