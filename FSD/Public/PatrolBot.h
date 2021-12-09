#pragma once
#include "CoreMinimal.h"
#include "WeaponFireOwner.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "EPatrolBotState.h"
#include "EPatrolBotControlState.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "EDeepMovementState.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "PatrolBot.generated.h"

class UHackingUsableComponent;
class UParticleSystemComponent;
class UPawnSensingComponent;
class USphereComponent;
class UAudioComponent;
class UEnemyComponent;
class UDamageComponent;
class UPawnAlertComponent;
class UPlayerImpactCooldownComponent;
class UAvoidCeilingComponent;
class UProjectileAttackComponent;
class USoundCue;
class UFakeMoverSettings;
class AActor;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS(Abstract)
class FSD_API APatrolBot : public AEnemyDeepPathfinderCharacter, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHackingUsableComponent* HackingUsable;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* CollisionSphere;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* NearTargetSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UParticleSystemComponent* LaserBeam;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* TearingGroundParticles;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* BumpDamage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPawnAlertComponent* Alert;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPlayerImpactCooldownComponent* ImpactCooldown;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAvoidCeilingComponent* CeilingAvoidance;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAudioComponent* RollingAudio;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAudioComponent* FlyingAudio;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileAttackComponent* RollingRangedAttack;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileAttackComponent* FlyingRangedAttack;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileAttackComponent* MissileAttack;
    
protected:
    UPROPERTY(EditAnywhere)
    float MaxMotionSoundVelThresholdFlying;
    
    UPROPERTY(EditAnywhere)
    float MaxMotionSoundVelThreshold;
    
    UPROPERTY(EditAnywhere)
    float MaxTurningMotionSoundVelThreshold;
    
    UPROPERTY(EditAnywhere)
    bool DebugAudio;
    
    UPROPERTY(EditAnywhere)
    float HackedAttackMultiplier;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsLockedOn)
    bool IsLockedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayAfterLockOn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ImpactCue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* JumpSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* StartupAccelerationSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LaunchPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnRocketsTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient, ReplicatedUsing=OnRep_State)
    EPatrolBotState State;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ControlState)
    EPatrolBotControlState ControlState;
    
    UPROPERTY(EditAnywhere)
    float HackedAttackSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    float LaserPenetrationDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinTurretAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTurretAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnRocketsChance;
    
    UPROPERTY(EditDefaultsOnly)
    float GunRange;
    
    UPROPERTY(EditDefaultsOnly)
    float RollingAttackCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    float FlyingAttackCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TurretLerpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimDownwardsOffset;
    
    UPROPERTY(EditAnywhere)
    float AccelerationThreshold;
    
    UPROPERTY(EditAnywhere)
    float LowSpeedThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SpeedTiltCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* RollSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* JumpSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* SpawnRocketsSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpForce;
    
    UPROPERTY(EditAnywhere)
    float StartFlyingTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRollingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxRollingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinFlyingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxFlyingTime;
    
    UPROPERTY(EditAnywhere)
    float SinSpeed;
    
    UPROPERTY(EditAnywhere)
    float SinSize;
    
    UPROPERTY(EditAnywhere)
    float FlyingDampOmega;
    
    UPROPERTY(EditAnywhere)
    float RollingDampOmega;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FiringRockets)
    bool FiringRockets;
    
    UPROPERTY(Replicated, Transient)
    bool Alerted;
    
private:
    UPROPERTY(Replicated, Transient)
    AActor* CurrentTarget;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsPatrolling(bool patroling);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHacked();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFiringRockets(bool firing);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReviveDrone();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChangedEvent(EPatrolBotState CurrentState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnRocketsEvent();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRocketsEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRevived();
    
    UFUNCTION()
    void OnRep_State();
    
    UFUNCTION()
    void OnRep_IsLockedOn();
    
    UFUNCTION()
    void OnRep_FiringRockets();
    
    UFUNCTION()
    void OnRep_ControlState(EPatrolBotControlState oldState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProjectileSpawned();
    
public:
    UFUNCTION()
    void OnMovementStateChanged(EDeepMovementState NewState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockedOn();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLandedEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnJumpEvent();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFireRockets();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroneHacked();
    
public:
    UFUNCTION()
    void OnDroneAlerted();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisabled();
    
private:
    UFUNCTION()
    void OnDeath(UHealthComponentBase* aHealthComponent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnControlStateChanged(EPatrolBotControlState NewControlState);
    
    UFUNCTION()
    void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Jumped();
    
    UFUNCTION(BlueprintPure)
    bool IsHacked() const;
    
    UFUNCTION(NetMulticast, Unreliable)
    void ImpactSound();
    
    UFUNCTION()
    void EndFireRockets();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableDrone();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APatrolBot();
};

