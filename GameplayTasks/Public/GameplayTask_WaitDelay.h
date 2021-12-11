#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "GameplayTask_WaitDelay.generated.h"

class UGameplayTask_WaitDelay;
class UGameplayTaskOwnerInterface;
class IGameplayTaskOwnerInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameplayTask_WaitDelayOnFinish);

UCLASS(MinimalAPI)
class UGameplayTask_WaitDelay : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameplayTask_WaitDelayOnFinish OnFinish;
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, const uint8 Priority);
    
    UGameplayTask_WaitDelay();
};

