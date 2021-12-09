#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "FSDPawn.h"
#include "TriggerAI.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EscortMuleMovementState.h"
#include "EscortMuleExtractorSlot.h"
#include "EEscortExtractorState.h"
#include "EEscortMissionState.h"
#include "EscortMule.generated.h"

class UFriendlyHealthComponent;
class URestrictedResourceBank;
class USimpleObjectInfoComponent;
class USkeletalMeshComponent;
class UOutlineComponent;
class AExtractorItem;
class APlayerCharacter;
class UInstantUsable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEscortMuleCheat_JumpToNextPhase);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEscortMuleOnMuleActivated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleOnSpeedChanged, float, newSpeedModifier);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleOnFullCanistersChanged, int32, IntValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleOnExitGaragePathSet, const TArray<FVector>&, Path);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleCheat_SetMuleSpeed, float, FloatValue);

UCLASS()
class AEscortMule : public AFSDPawn, public ITriggerAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnMuleActivated OnMuleActivated;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnSpeedChanged OnSpeedChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnFullCanistersChanged OnFullCanistersChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnExitGaragePathSet OnExitGaragePathSet;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleCheat_SetMuleSpeed Cheat_SetMuleSpeed;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleCheat_JumpToNextPhase Cheat_JumpToNextPhase;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFriendlyHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* ObjectInfo;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URestrictedResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform TargetTransform;
    
    UPROPERTY(Transient)
    FTransform PreviousTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_MovementState)
    FEscortMuleMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SpeedModifier)
    float SpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealPerTickNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealPerTickUnderAttack;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool CannisterVisible_Left;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool CannisterVisible_Right;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    FVector NextStop;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsCarvingTunnel)
    bool IsCarvingTunnel;
    
    UPROPERTY(Transient)
    int32 FullCanisters;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_ExtractorSlots)
    TArray<FEscortMuleExtractorSlot> ExtractorSlots;
    
    UFUNCTION(BlueprintCallable)
    bool TryHeal(APlayerCharacter* User, float Amount);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetTransform(FTransform InTransform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSpeedModifier(float inSpeedModifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFullExtracterAttached(UInstantUsable* Usable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetExtractorDetached(UInstantUsable* Usable);
    
    UFUNCTION(BlueprintCallable)
    void SetExitGaragePath(const TArray<FVector> Path);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetExtractors();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PathIsReady();
    
protected:
    UFUNCTION()
    void OnRep_SpeedModifier();
    
    UFUNCTION()
    void OnRep_MovementState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRep_IsCarvingTunnel();
    
    UFUNCTION()
    void OnRep_ExtractorSlots();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveStateChanged(EEscortMissionState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtractorSlotChanged(const FEscortMuleExtractorSlot& Slot, int32 Index);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExtractorDetached(AExtractorItem* Item);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void ObjectiveStateChange(EEscortMissionState NewState);
    
    UFUNCTION(BlueprintPure)
    EEscortExtractorState GetExtractorState(UInstantUsable* Usable) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateMule();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEscortMule();
};

