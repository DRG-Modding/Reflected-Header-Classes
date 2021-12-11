#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "EBTNodeResult.h"
#include "BTDecorator_BlueprintBase.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTDecorator_BlueprintBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
    UPROPERTY(Transient)
    AActor* ActorOwner;
    
    UPROPERTY()
    TArray<FName> ObservedKeyNames;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bShowPropertyDetails: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bCheckConditionOnlyBlackBoardChanges: 1;
    
    UPROPERTY()
    uint8 bIsObservingBB: 1;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverDeactivated(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverActivated(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionStart(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PerformConditionCheck(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecoratorObserverActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecoratorExecutionActive() const;
    
public:
    UBTDecorator_BlueprintBase();
};

