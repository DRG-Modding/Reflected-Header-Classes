#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayResourceSet.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "GameplayTaskOwnerInterface.h"
#include "EGameplayTaskRunResult.h"
#include "GameplayTasksComponent.generated.h"

class UGameplayTask;
class UGameplayTaskResource;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameplayTasksComponentOnClaimedResourcesChange, FGameplayResourceSet, NewlyClaimed, FGameplayResourceSet, FreshlyReleased);

UCLASS(BlueprintType, EditInlineNew)
class GAMEPLAYTASKS_API UGameplayTasksComponent : public UActorComponent, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bIsNetDirty: 1;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_SimulatedTasks)
    TArray<UGameplayTask*> SimulatedTasks;
    
    UPROPERTY()
    TArray<UGameplayTask*> TaskPriorityQueue;
    
    UPROPERTY()
    TArray<UGameplayTask*> TickingTasks;
    
    UPROPERTY(Transient)
    TArray<UGameplayTask*> KnownTasks;
    
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTasksComponentOnClaimedResourcesChange OnClaimedResourcesChange;
    
    UFUNCTION()
    void OnRep_SimulatedTasks();
    
    UFUNCTION(BlueprintCallable)
    static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGameplayTasksComponent();
};

