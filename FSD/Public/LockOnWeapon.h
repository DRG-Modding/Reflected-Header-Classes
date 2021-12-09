#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TracerData.h"
#include "LockCounter.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "LockOnWeapon.generated.h"

class AActor;
class UActorTrackingWidget;
class UHitscanComponent;
class ALockOnBeam;
class UDamageComponent;
class UStatusEffect;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLockOnWeaponOnLockonTargetRotationUpdated, bool, hasTargetLockon, FRotator, socketRotation);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLockOnWeaponOnLockingStopped);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLockOnWeaponOnLockingStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockOnWeaponOnMaxTargetsChanged, int32, InMaxTargets);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockOnWeaponOnLockOnCountChanged, int32, InCurrentCount);

UCLASS(Abstract)
class FSD_API ALockOnWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLockOnWeaponOnLockingStarted OnLockingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FLockOnWeaponOnLockingStopped OnLockingStopped;
    
    UPROPERTY(BlueprintAssignable)
    FLockOnWeaponOnMaxTargetsChanged OnMaxTargetsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FLockOnWeaponOnLockOnCountChanged OnLockOnCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FLockOnWeaponOnLockonTargetRotationUpdated OnLockonTargetRotationUpdated;
    
protected:
    UPROPERTY()
    AActor* AimTarget;
    
    UPROPERTY(EditAnywhere)
    float LockOnDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    int32 ShotsPerTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxTargets;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenLockedShots;
    
    UPROPERTY(EditAnywhere)
    float LockOnTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxLockOnDegree;
    
    UPROPERTY(EditAnywhere)
    float LoseLockOnDegree;
    
    UPROPERTY(EditAnywhere)
    float DegreeTolerance;
    
    UPROPERTY(EditAnywhere)
    float MaxLockOnRange;
    
    UPROPERTY(EditAnywhere)
    bool bPrioritizeLowHitPoint;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysHitTarget;
    
    UPROPERTY(EditAnywhere)
    float MaxLockOnDuration;
    
    UPROPERTY(EditAnywhere)
    bool bLockOnControlsSentryGun;
    
    UPROPERTY(EditAnywhere)
    bool bSentryGunShootsOnLockedShot;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UActorTrackingWidget> TrackingWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALockOnBeam> LockOnBeamClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> AoeActorClass;
    
    UPROPERTY(EditAnywhere)
    int32 AoeHitCountThreshhold;
    
    UPROPERTY(EditAnywhere)
    bool UseLockOnTargetStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> LockOnTargetStatusEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PushStatusEffectEveryXLock;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LockOnCount;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, Transient)
    UHitscanComponent* HitscanComponent;
    
    UPROPERTY(EditAnywhere)
    FTracerData ChargedShotTracer;
    
    UPROPERTY(EditAnywhere)
    float ChargeSpeed;
    
    UPROPERTY(EditAnywhere)
    float SlowMovementAtCharge;
    
    UPROPERTY(EditAnywhere)
    bool FearEnabled;
    
    UPROPERTY(EditAnywhere)
    float FearFactorBase;
    
    UPROPERTY(EditAnywhere)
    float FearFactorPerShotBonus;
    
    UPROPERTY(EditAnywhere)
    float FearRange;
    
    UPROPERTY(EditAnywhere)
    float FearRangePerShotBonus;
    
    UPROPERTY(Replicated, Transient)
    bool IsMovementSlowed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Charging;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargeProgress;
    
    UPROPERTY(Replicated)
    bool LastShotWasLockedOn;
    
    UPROPERTY(EditAnywhere)
    float LockOnRecoilMult;
    
    UFUNCTION()
    void UpdateRifleEye();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMuzzleDirection(FVector TargetLocation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_TriggerAoe(FVector Location);
    
    UFUNCTION(Reliable, Server)
    void Server_SetTotalLockCount(int32 totalLockCount);
    
    UFUNCTION(Reliable, Server)
    void Server_SetLockCount(const FLockCounter& LockCounter);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsMovementSlowed(bool bisMovementSlowed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsLatestShotLockedOn(bool bisShotLockedOn);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsChargingShot(bool bisCharging);
    
    UFUNCTION(Reliable, Server)
    void Server_PushStatusEffect(AActor* Target);
    
    UFUNCTION(Reliable, Server)
    void Server_PopStatusEffect(AActor* Target);
    
    UFUNCTION(Reliable, Server)
    void Server_FiringComplete(int32 ShotsFired);
    
    UFUNCTION(Client, Reliable)
    void RefundAmmo();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRep_AimTarget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMovementSlowed(bool isSlowed);
    
    UFUNCTION()
    void OnHitDeadTarget();
    
    UFUNCTION()
    void OnHit(const FHitResult& Hit, bool AlwaysPenetrate);
    
    UFUNCTION()
    void OnAsyncFireComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MuzzleLerpToTarget(FVector TargetLocation);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALockOnWeapon();
};

