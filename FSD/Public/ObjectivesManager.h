#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ObjectivesManager.generated.h"

class UObjective;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectivesManagerOnObjectivesCompleted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectivesManagerOnObjectivesChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectivesManagerOnAllRequiredReturnObjectivesCompleted);

UCLASS(BlueprintType)
class UObjectivesManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FObjectivesManagerOnObjectivesCompleted OnObjectivesCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FObjectivesManagerOnObjectivesChanged OnObjectivesChanged;
    
    UPROPERTY(BlueprintAssignable)
    FObjectivesManagerOnAllRequiredReturnObjectivesCompleted OnAllRequiredReturnObjectivesCompleted;
    
protected:
    UPROPERTY(Export, Transient)
    UObjective* Objective;
    
    UPROPERTY(Export, Transient)
    TArray<UObjective*> SecondaryObjectives;
    
    UPROPERTY(Transient)
    bool ObjectivesInitialized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ObjectivesStarted;
    
    UPROPERTY(Transient)
    bool bCheatObjectivesCompleted;
    
    UFUNCTION()
    void OnObjectiveChanged(UObjective* obj);
    
public:
    UFUNCTION(BlueprintPure)
    UObjective* GetSecondaryObjective() const;
    
    UFUNCTION(BlueprintPure)
    UObjective* GetPrimaryObjective() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitPodDescending();
    
    UFUNCTION(BlueprintCallable)
    void ExitPodArrived();
    
    UFUNCTION(BlueprintCallable)
    void DropPodExited();
    
    UObjectivesManager();
};

