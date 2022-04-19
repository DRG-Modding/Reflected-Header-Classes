#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Upgradable.h"
#include "DeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ReturnedSignatureDelegate.h"
#include "ERecallableActorState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RecallableActor.generated.h"

class AActor;
class ARecallableActor;

UCLASS(Abstract)
class ARecallableActor : public ADeepPathfinderCharacter, public IUpgradable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecallableActorStateChanged, ARecallableActor*, Sender, ERecallableActorState, State);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRecallableActorStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReturnedSignature OnReturnFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReturnedSignature OnRelocateFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRecallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelocateLandingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RelocationMarkerType;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_RecallTarget, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RecallTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ERecallableActorState State;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform RelocateTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool RelocateLanded;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RelocationMarker;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    ARecallableActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetRecallTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Relocate(FVector NewLocation, FRotator NewRotation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Recall();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(ERecallableActorState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecallTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelocated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecallTargetChanged(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnPathFinished(bool success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveFinished(bool returnedHome);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReturning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMovingOrMoveRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoveRequested() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BeginMove();
    
    
    // Fix for true pure virtual functions not being implemented
};

