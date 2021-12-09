#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "SplineIKCachedBoneData.generated.h"

USTRUCT()
struct FSplineIKCachedBoneData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference Bone;
    
    UPROPERTY()
    int32 RefSkeletonIndex;
    
    ANIMGRAPHRUNTIME_API FSplineIKCachedBoneData();
};

