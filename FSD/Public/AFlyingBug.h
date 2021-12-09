#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AFlyingBug.generated.h"

class UEnemyComponent;
class UAudioComponent;
class UPawnStatsComponent;
class UOutlineComponent;
class UPawnSensingComponent;
class UPawnAlertComponent;
class USphereComponent;
class UFrozenPawnImpactComponent;
class UAnimSequenceBase;
class AActor;
class UPhysicsAsset;
class USoundBase;
class UHealthComponentBase;

UCLASS()
class AAFlyingBug : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnSensingComponent* Senses;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnAlertComponent* Alert;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* ExplosionSphere;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAudioComponent* WingSoundComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFrozenPawnImpactComponent* FrozenImpact;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UAnimSequenceBase*> HitReactions;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RagdollImpact)
    FVector_NetQuantize RagdollImpact;
    
    UPROPERTY(Replicated, Transient)
    AActor* RotateTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicsAsset* PhysicalAssetAfterDeath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* ChatterSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FirstHitReactBlendIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverrideHitReactBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceForAttackMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinChatterDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxChatterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackModeRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UsesAttackStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SetLifeTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AttackStance)
    bool AttackStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LookStraight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseDefaultRagdoll;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void StartFizzle();
    
    UFUNCTION(BlueprintCallable)
    void SetRotateTarget(AActor* aTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetExternallyControlled(bool isExternallyControlled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttackStance(bool isAttackStance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Ragdoll(bool applyForce, const FVector& force);
    
    UFUNCTION()
    void PlayVoice();
    
public:
    UFUNCTION()
    void OnStartFalling();
    
    UFUNCTION()
    void OnRep_RagdollImpact();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackStance();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRagdoll();
    
public:
    UFUNCTION()
    void OnFreezeImpact();
    
    UFUNCTION()
    void OnDamaged(float Amount);
    
    UFUNCTION()
    void OnBugDeath(UHealthComponentBase* Health);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetMidZpointFromCielingAndFloor(float& distanceFromCieling, float& distanceFromFloor) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsInAttackStance() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void AlertNearbyEnemies();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AAFlyingBug();
};

