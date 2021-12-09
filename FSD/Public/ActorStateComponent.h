#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ActorStateComponent.generated.h"

class UActorStateComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorStateComponentOnEndState, UActorStateComponent*, State);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorStateComponentOnBeginState, UActorStateComponent*, State);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorStateComponentOnTickState, UActorStateComponent*, State, float, DeltaTime);

UCLASS(BlueprintType)
class UActorStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FActorStateComponentOnBeginState OnBeginState;
    
    UPROPERTY(BlueprintAssignable)
    FActorStateComponentOnTickState OnTickState;
    
    UPROPERTY(BlueprintAssignable)
    FActorStateComponentOnEndState OnEndState;
    
protected:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_CurrentState)
    UActorStateComponent* CurrentState;
    
    UPROPERTY(Export, Transient)
    UActorStateComponent* NextState;
    
    UPROPERTY(Export, Transient)
    UActorStateComponent* MasterState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float StateActiveTime;
    
    UFUNCTION()
    void OnRep_CurrentState(UActorStateComponent* PreviousState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStateActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GotoState();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UActorStateComponent();
};

