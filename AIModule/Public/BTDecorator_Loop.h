#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BTDecorator_Loop.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_Loop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumLoops;
    
    UPROPERTY(EditAnywhere)
    bool bInfiniteLoop;
    
    UPROPERTY(EditAnywhere)
    float InfiniteLoopTimeoutTime;
    
    UBTDecorator_Loop();
};

