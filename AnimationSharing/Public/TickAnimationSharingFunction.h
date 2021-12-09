#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TickFunction
#include "TickAnimationSharingFunction.generated.h"

USTRUCT()
struct FTickAnimationSharingFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ANIMATIONSHARING_API FTickAnimationSharingFunction();
};

