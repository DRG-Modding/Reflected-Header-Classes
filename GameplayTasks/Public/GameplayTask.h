#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTaskOwnerInterface.h"
#include "ETaskResourceOverlapPolicy.h"
#include "GameplayTask.generated.h"

class UGameplayTask;

UCLASS(Abstract, BlueprintType, Config=Game)
class GAMEPLAYTASKS_API UGameplayTask : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName InstanceName;
    
    UPROPERTY(Config)
    ETaskResourceOverlapPolicy ResourceOverlapPolicy;
    
    UPROPERTY()
    UGameplayTask* ChildTask;
    
public:
    UFUNCTION(BlueprintCallable)
    void ReadyForActivation();
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
    UGameplayTask();
};

