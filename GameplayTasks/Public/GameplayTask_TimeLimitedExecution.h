#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "GameplayTask_TimeLimitedExecution.generated.h"

UCLASS(MinimalAPI)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTaskFinishDelegate OnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTaskFinishDelegate OnTimeExpired;
    
    UGameplayTask_TimeLimitedExecution();
};

