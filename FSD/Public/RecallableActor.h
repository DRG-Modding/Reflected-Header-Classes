#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "DeepPathfinderCharacter.h"
#include "Upgradable.h"
#include "ERecallableActorState.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RecallableActor.generated.h"

class ARecallableActor;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecallableActorOnRelocateFinished, AActor*, Sender, bool, Succes);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecallableActorOnStateChanged, ARecallableActor*, Sender, ERecallableActorState, State);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecallableActorOnReturnFinish, AActor*, Sender, bool, Succes);

UCLASS(Abstract)
class ARecallableActor : public ADeepPathfinderCharacter, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecallableActorOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FRecallableActorOnReturnFinish OnReturnFinish;
    
    UPROPERTY(BlueprintAssignable)
    FRecallableActorOnRelocateFinished OnRelocateFinished;
    
protected:
    UPROPERTY(EditAnywhere)
    float AcceptanceRadius;
    
    UPROPERTY(EditAnywhere)
    float AutoRecallDistance;
    
    UPROPERTY(EditAnywhere)
    float RelocateLandingHeight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> RelocationMarkerType;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RecallTarget)
    TWeakObjectPtr<AActor> RecallTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    ERecallableActorState State;
    
    UPROPERTY(Transient)
    FTransform RelocateTransform;
    
    UPROPERTY(Transient)
    bool RelocateLanded;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> RelocationMarker;
    
    UPROPERTY(Transient)
    bool bInitialized;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetRecallTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Relocate(FVector NewLocation, FRotator NewRotation);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Recall();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReturnSucceeded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReturnFailed();
    
    UFUNCTION()
    void OnRep_State(ERecallableActorState oldState);
    
    UFUNCTION()
    void OnRep_RecallTarget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRelocated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRecallTargetChanged(AActor* NewTarget);
    
    UFUNCTION()
    void OnPathFinished(bool success);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMoving();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMoveRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMoveFinished(bool returnedHome);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsReturning() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsMovingOrMoveRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsMoveRequested() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BeginMove();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARecallableActor();
};

