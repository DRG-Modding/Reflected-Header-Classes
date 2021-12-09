#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ECharacterState.h"
#include "UsableRepliactional.h"
#include "EUseRestriction.h"
#include "ECustomUsableType.h"
#include "CharacterUseComponent.generated.h"

class USphereComponent;
class UResourceBank;
class UUsableComponentBase;
class USoundBase;
class USceneComponent;
class APlayerCharacter;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnDepositingEnd, UResourceBank*, ResourceBank);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnDepositingBegin, UResourceBank*, ResourceBank);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnEndUsingEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnBeginUsingEvent, UUsableComponentBase*, Component);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnEndHoveringEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnBeginHoveringEvent, UUsableComponentBase*, Component);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnEndUseNoUsable);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnBeginUseNoUsable);

UCLASS(BlueprintType)
class UCharacterUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnDepositingBegin OnDepositingBegin;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnDepositingEnd OnDepositingEnd;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnBeginHoveringEvent OnBeginHoveringEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnEndHoveringEvent OnEndHoveringEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnBeginUsingEvent OnBeginUsingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnEndUsingEvent OnEndUsingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnBeginUseNoUsable OnBeginUseNoUsable;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnEndUseNoUsable OnEndUseNoUsable;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ActiveUsablee)
    FUsableRepliactional ActiveUsablee;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UUsableComponentBase* HoveringUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USceneComponent* HoveringUsableCollider;
    
    UPROPERTY(Export, Transient)
    USceneComponent* ActiveUsableCollider;
    
    UPROPERTY(Export, Transient)
    USphereComponent* UseCollider;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioBeginDepositing;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioEndDepositing;
    
    UPROPERTY(EditAnywhere)
    float UseDistance;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    EUseRestriction UseRestriction;
    
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(Transient)
    TMap<UUsableComponentBase*, float> UseCooldownTracker;
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCanUse(EUseRestriction NewUseRestriction);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_EndUse();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_BeginUse(uint8 Key, UUsableComponentBase* Usable, USceneComponent* UsableCollider);
    
protected:
    UFUNCTION()
    void OnRep_ActiveUsablee(FUsableRepliactional lastUsable);
    
    UFUNCTION()
    void OnCharacterStateChanged(ECharacterState NewState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLookingAtUsable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLookingAtDepositable() const;
    
    UFUNCTION(BlueprintPure)
    float GetUseProgress() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLookingAtActor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsUsing();
    
    UFUNCTION(BlueprintPure)
    bool GetIsDepositing();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_PlaySingleUse(uint8 Key, UUsableComponentBase* Usable);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomUsableComponent(UUsableComponentBase* Usable, ECustomUsableType eType);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterUseComponent();
};

