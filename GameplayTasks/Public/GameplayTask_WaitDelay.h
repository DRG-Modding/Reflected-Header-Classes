#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "GameplayTask_WaitDelay.generated.h"

class UGameplayTaskOwnerInterface;
class IGameplayTaskOwnerInterface;
class UGameplayTask_WaitDelay;

UCLASS(MinimalAPI)
class UGameplayTask_WaitDelay : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskDelayDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTaskDelayDelegate OnFinish;
    
    UGameplayTask_WaitDelay();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, const uint8 Priority);
    
};

