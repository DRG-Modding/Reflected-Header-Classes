#pragma once
#include "CoreMinimal.h"
#include "BehaviorInfo.generated.h"

class UInputBehavior;

USTRUCT(BlueprintType)
struct INTERACTIVETOOLSFRAMEWORK_API FBehaviorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInputBehavior* Behavior;
    
    FBehaviorInfo();
};

