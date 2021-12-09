#pragma once
#include "CoreMinimal.h"
#include "BTTask_Wait.h"
#include "BlackboardKeySelector.h"
#include "BTTask_WaitBlackboardTime.generated.h"

UCLASS()
class AIMODULE_API UBTTask_WaitBlackboardTime : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTTask_WaitBlackboardTime();
};

