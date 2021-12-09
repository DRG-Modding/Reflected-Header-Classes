#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "ESharkEnemyState.h"
#include "SharkEnemy.generated.h"

class UParticleSystemComponent;
class UPawnSensingComponent;
class USphereComponent;
class UFakePhysGrabberComponent;
class USoundCue;
class UInDangerComponent;
class UEnemyComponent;
class UDamageComponent;
class UFakeMoverSettings;
class UParticleSystem;
class AActor;
class APawn;
class UPrimitiveComponent;
class UHealthComponentBase;

UCLASS(Abstract)
class ASharkEnemy : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* CollisionSphere;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* NearTargetSphere;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* TearingGroundParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* AirTrailParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UInDangerComponent* Danger;
    
    UPROPERTY(Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* BumpDamage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFakePhysGrabberComponent* RestrictedGrabberComponent;
    
    UPROPERTY(EditAnywhere)
    float RagdollSpeedFactor;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ImpactCue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* JumpSound;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DiveTime)
    float DiveForSeconds;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RagdollImpact)
    FVector_NetQuantize RagdollImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LaunchPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrabTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StopSpeedThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpsideDownTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RaiseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TiltInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TiltOutSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SafeTimeAfterVounerable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RaiseHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitLaunchPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceToGrab;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinTimeBetweenBumps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceForJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinJumpCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxJumpCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBeforeGroundCheck;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinCirclingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCirclingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* CircleSetttings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* AttackSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* PostHitSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* JumpSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* VounerableSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxInGroundTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinInGroundTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartParticleTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndParticleTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* DiveParticles;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_State)
    ESharkEnemyState State;
    
public:
    UFUNCTION()
    void SetVulnerable();
    
    UFUNCTION()
    void ReleasePlayer(AActor* playerchar);
    
protected:
    UFUNCTION()
    void PopRecentlyBumpedPlayer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChangedEvent(ESharkEnemyState CurrentState);
    
protected:
    UFUNCTION()
    void OnSeePawn(APawn* APawn);
    
    UFUNCTION()
    void OnRep_State(ESharkEnemyState oldState);
    
public:
    UFUNCTION()
    void OnRep_RagdollImpact();
    
protected:
    UFUNCTION()
    void OnRep_DiveTime();
    
    UFUNCTION()
    void OnNearTarget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLandedEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnJumpEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrabbedEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitState(ESharkEnemyState NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterState(ESharkEnemyState NewState);
    
private:
    UFUNCTION()
    void OnDeath(UHealthComponentBase* aHealthComponent);
    
protected:
    UFUNCTION()
    void OnDamaged(float aAmount);
    
    UFUNCTION()
    void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Jumped();
    
    UFUNCTION(NetMulticast, Unreliable)
    void ImpactSound();
    
    UFUNCTION()
    void DiveShow();
    
    UFUNCTION()
    void DiveHide();
    
private:
    UFUNCTION()
    void ActivateDanger();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASharkEnemy();
};

