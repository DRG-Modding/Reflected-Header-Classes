#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "TickAnimationSharingFunction.generated.h"

USTRUCT()
struct FTickAnimationSharingFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ANIMATIONSHARING_API FTickAnimationSharingFunction();
};

