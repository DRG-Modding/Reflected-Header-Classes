#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "GameplayTask_TimeLimitedExecution.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameplayTask_TimeLimitedExecutionOnTimeExpired);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameplayTask_TimeLimitedExecutionOnFinished);

UCLASS(MinimalAPI)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameplayTask_TimeLimitedExecutionOnFinished OnFinished;
    
    UPROPERTY(BlueprintAssignable)
    FGameplayTask_TimeLimitedExecutionOnTimeExpired OnTimeExpired;
    
    UGameplayTask_TimeLimitedExecution();
};

