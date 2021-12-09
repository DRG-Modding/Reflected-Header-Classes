#pragma once
#include "CoreMinimal.h"
#include "ChaosDebugSubstepControl.generated.h"

USTRUCT(BlueprintType)
struct FChaosDebugSubstepControl {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPause;
    
    UPROPERTY(EditAnywhere)
    bool bSubstep;
    
    UPROPERTY(EditAnywhere)
    bool bStep;
    
    CHAOSSOLVERENGINE_API FChaosDebugSubstepControl();
};

