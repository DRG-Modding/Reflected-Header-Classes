#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PerPlatformBool
//CROSS-MODULE INCLUDE: Engine PerPlatformInt
//CROSS-MODULE INCLUDE: Engine PerPlatformFloat
#include "AnimationSharingScalability.generated.h"

USTRUCT(BlueprintType)
struct FAnimationSharingScalability {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformBool UseBlendTransitions;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat BlendSignificanceValue;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt MaximumNumberConcurrentBlends;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat TickSignificanceValue;
    
    ANIMATIONSHARING_API FAnimationSharingScalability();
};

