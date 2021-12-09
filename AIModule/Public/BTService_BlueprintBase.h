#pragma once
#include "CoreMinimal.h"
#include "BTService.h"
#include "BTService_BlueprintBase.generated.h"

class AActor;
class AAIController;
class APawn;

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTService_BlueprintBase : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
    UPROPERTY(Transient)
    AActor* ActorOwner;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bShowPropertyDetails: 1;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bShowEventDetails: 1;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSearchStart(AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDeactivation(AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActivation(AActor* OwnerActor);
    
    UFUNCTION(BlueprintPure)
    bool IsServiceActive() const;
    
public:
    UBTService_BlueprintBase();
};

