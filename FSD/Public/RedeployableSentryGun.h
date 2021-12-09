#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SentryGun.h"
#include "ERedeployableSentryGunState.h"
#include "RedeployableSentryGun.generated.h"

class ARedeployableSentryGun;
class AActor;
class UActorTrackingComponent;
class UOutlineComponent;
class ASentryElectroBeam;
class APlayerCharacter;
class USkeletalMeshComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedeployableSentryGunOnStateChanged, ARedeployableSentryGun*, Sender, ERedeployableSentryGunState, NewState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRedeployableSentryGunOnDeployFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRedeployableSentryGunOnDismantleFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRedeployableSentryGunOnDeployProgressEvent, float, Progress);

UCLASS(Abstract)
class ARedeployableSentryGun : public ASentryGun {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRedeployableSentryGunOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FRedeployableSentryGunOnDeployFinished OnDeployFinished;
    
    UPROPERTY(BlueprintAssignable)
    FRedeployableSentryGunOnDismantleFinished OnDismantleFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FRedeployableSentryGunOnDeployProgressEvent OnDeployProgressEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UActorTrackingComponent* ActorTrackingIcon;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SentryGunOwner)
    TWeakObjectPtr<APlayerCharacter> SentryGunOwner;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOutlineAndIconVisible;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    ERedeployableSentryGunState State;
    
    UPROPERTY(EditAnywhere)
    float PlasmaLineMaxRange;
    
    UPROPERTY(Transient)
    TArray<ASentryElectroBeam*> PlasmaLines;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASentryElectroBeam> PlasmaBeamClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ElectrocutionActorClass;
    
    UPROPERTY(Transient)
    AActor* ElectrocutionActor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> EMPDischargeActorClass;
    
    UPROPERTY(EditAnywhere)
    float EMPDiscargeCooldown;
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleOutlineAndIcon(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetSentryGunOwner(APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnStateChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnSentryGunOwnerChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDismantled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDismantle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDeployed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDeploy();
    
    UFUNCTION()
    void OnRep_State(ERedeployableSentryGunState oldState);
    
    UFUNCTION()
    void OnRep_SentryGunOwner();
    
    UFUNCTION()
    void OnElectrocutionActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsDismantled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsDeployed() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetAnimDuration(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DismantleFinished();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Dismantle();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeployFinished();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Deploy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ActivateSpecialAttack();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARedeployableSentryGun();
};

