#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "EBTNodeResult.h"
#include "BTDecorator_BlueprintBase.generated.h"

class AActor;
class AAIController;
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverDeactivated(AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverActivated(AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionStart(AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool PerformConditionCheck(AActor* OwnerActor);
    
    UFUNCTION(BlueprintPure)
    bool IsDecoratorObserverActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDecoratorExecutionActive() const;
    
public:
    UBTDecorator_BlueprintBase();
};

