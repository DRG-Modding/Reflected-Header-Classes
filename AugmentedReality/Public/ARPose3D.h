#pragma once
#include "CoreMinimal.h"
#include "EARJointTransformSpace.h"
#include "ARSkeletonDefinition.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ARPose3D.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARPose3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSkeletonDefinition SkeletonDefinition;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTransform> JointTransforms;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<bool> IsJointTracked;
    
    UPROPERTY(BlueprintReadOnly)
    EARJointTransformSpace JointTransformSpace;
    
    FARPose3D();
};

