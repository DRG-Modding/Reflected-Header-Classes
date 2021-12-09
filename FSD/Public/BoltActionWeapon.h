#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "TracerData.h"
#include "BoltActionWeapon.generated.h"

class UStatusEffect;
class UDamageComponent;
class USoundCue;
class UHitscanBaseComponent;
class AActor;
class UParticleSystem;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBoltActionWeaponFullyFocusedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBoltActionWeaponFocusLostEvent);

UCLASS(Abstract)
class ABoltActionWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBoltActionWeaponFullyFocusedEvent FullyFocusedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FBoltActionWeaponFocusLostEvent FocusLostEvent;
    
protected:
    UPROPERTY(Export, Transient)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, Transient)
    UHitscanBaseComponent* HitscanComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> FocusedHitSTE;
    
    UPROPERTY(EditAnywhere)
    bool RequireWeakspotForFocusedHitSTE;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsNoGravityOnFocusEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoGravityOnFocusDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoGravityFocusFallFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoGravityFocusGravityScale;
    
    UPROPERTY(EditAnywhere)
    float ZoomSpreadAmount;
    
    UPROPERTY(EditAnywhere)
    float ZoomMinSpreadWhileMoving;
    
    UPROPERTY(EditAnywhere)
    float ChargeSpeed;
    
    UPROPERTY(EditAnywhere)
    float ChargeAmmoCost;
    
    UPROPERTY(EditAnywhere)
    float ChargeRecoilMult;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ZoomedInAudio;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ChargedShotTrailParticles;
    
    UPROPERTY(EditAnywhere)
    FTracerData ChargedShotTracer;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ButtonDownFireSound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ChargedShotFireSound;
    
    UPROPERTY(EditAnywhere)
    float ChargedFoVChange;
    
    UPROPERTY(EditAnywhere)
    float ChargedFoVFadeSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinCharge;
    
    UPROPERTY(EditAnywhere)
    float SlowMovementAtCharge;
    
    UPROPERTY(EditAnywhere)
    float FullChargeDamageBonus;
    
    UPROPERTY(EditAnywhere)
    float AimedShotStaggerChance;
    
    UPROPERTY(EditAnywhere)
    float AimedWeakspotKilLRange;
    
    UPROPERTY(EditAnywhere)
    float TargetKilledReloadTimeBoost;
    
    UPROPERTY(EditAnywhere)
    float TargetKilledReloadTimeBoostDuration;
    
    UPROPERTY(Replicated)
    bool LastShotWasAimed;
    
    UPROPERTY(Replicated, Transient)
    bool IsMovementSlowed;
    
    UPROPERTY(EditAnywhere)
    bool ChargeAffectsDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Charging;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargeProgress;
    
    UFUNCTION(BlueprintCallable)
    void SetOverheated(bool isOverheated);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsMovementSlowed(bool bisMovementSlowed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsLatestShotFocused(bool bisShotFocused);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsChargingShot(bool bisCharging);
    
    UFUNCTION()
    void OnTimerElapsed();
    
    UFUNCTION()
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION()
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION()
    void OnShotPowerSet();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMovementSlowed(bool isSlowed);
    
    UFUNCTION(Client, Reliable)
    void Client_OnTargetKilled(bool BoostReloadTime);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ABoltActionWeapon();
};

