#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "PoseDriverTransform.generated.h"

USTRUCT(BlueprintType)
struct FPoseDriverTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector TargetTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator TargetRotation;
    
    ANIMGRAPHRUNTIME_API FPoseDriverTransform();
};

