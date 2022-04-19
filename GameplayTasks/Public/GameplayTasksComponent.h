#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameplayTaskOwnerInterface.h"
#include "EGameplayTaskRunResult.h"
#include "OnClaimedResourcesChangeSignatureDelegate.h"
#include "GameplayTasksComponent.generated.h"

class UGameplayTask;
class UGameplayTaskResource;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYTASKS_API UGameplayTasksComponent : public UActorComponent, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bIsNetDirty: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_SimulatedTasks, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> SimulatedTasks;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> TaskPriorityQueue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> TickingTasks;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> KnownTasks;
    
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnClaimedResourcesChangeSignature OnClaimedResourcesChange;
    
    UGameplayTasksComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatedTasks();
    
    UFUNCTION(BlueprintCallable)
    static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);
    
    
    // Fix for true pure virtual functions not being implemented
};

