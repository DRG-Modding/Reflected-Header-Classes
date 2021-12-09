#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "IntervalCountdown.h"
#include "BTTask_BlueprintBase.generated.h"

class AActor;
class AAIController;
class APawn;

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTTask_BlueprintBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
    UPROPERTY(Transient)
    AActor* ActorOwner;
    
    UPROPERTY(EditAnywhere)
    FIntervalCountdown TickInterval;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bShowPropertyDetails: 1;
    
    UFUNCTION(BlueprintCallable)
    void SetFinishOnMessageWithId(FName MessageName, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishOnMessage(FName MessageName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecute(AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAbort(AActor* OwnerActor);
    
    UFUNCTION(BlueprintPure)
    bool IsTaskExecuting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTaskAborting() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishExecute(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishAbort();
    
public:
    UBTTask_BlueprintBase();
};

