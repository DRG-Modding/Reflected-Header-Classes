#pragma once
#include "CoreMinimal.h"
#include "ARSkeletonDefinition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ARPose2D.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARPose2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FARSkeletonDefinition SkeletonDefinition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> JointLocations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<bool> IsJointTracked;
    
    FARPose2D();
};

