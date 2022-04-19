#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARSkeletonDefinition.h"
#include "EARJointTransformSpace.h"
#include "ARPose3D.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARPose3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FARSkeletonDefinition SkeletonDefinition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTransform> JointTransforms;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<bool> IsJointTracked;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARJointTransformSpace JointTransformSpace;
    
    FARPose3D();
};

