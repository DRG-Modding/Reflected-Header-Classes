#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ProjectileImpact.h"
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "EOnProjectileImpactBehaviourEnum.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ProjectileBase.generated.h"

class USoundCue;
class USphereComponent;
class UProjectileUpgradeElement;
class UTerrainMaterial;
class UDamageComponent;
class UPrimitiveComponent;
class AProjectileBase;
class UItemUpgrade;

UCLASS(Abstract)
class AProjectileBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ProjectileImpact)
    FProjectileImpact ProjectileImpact;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsSpawnedFromWeapon;
    
    UPROPERTY(BlueprintReadWrite)
    bool Exploded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnImpact;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnImpact2;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnImpact3;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnSpawnVar;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsDorment)
    bool IsDorment;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LifeSpan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityMultiplier;
    
    UPROPERTY(EditAnywhere)
    float GravityMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByDifficultySpeedModifier;
    
    UPROPERTY(EditAnywhere)
    bool SetInitialSpeedToMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool AutoDisableCollisionOnImpact;
    
    UPROPERTY(EditAnywhere)
    USoundCue* WhizbySound;
    
    UPROPERTY(EditAnywhere)
    float WhizByCooldown;
    
    UPROPERTY(EditAnywhere)
    float WhizByStartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOnProjectileImpactBehaviourEnum EOnImpactBehaviour;
    
public:
    UFUNCTION(BlueprintPure)
    UTerrainMaterial* TryGetTerrainMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetState(FVector_NetQuantize Position, FVector_NetQuantize Velocity);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Penetrated(const FProjectileImpact& Impact);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Impacted(const FProjectileImpact& Impact);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
    
    UFUNCTION()
    void OnRep_ProjectileImpact();
    
    UFUNCTION()
    void OnRep_IsDorment(const bool wasDorment);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MakeBouncy();
    
    UFUNCTION()
    void InitState(const FVector& ShootDirection, const FVector& initialBonusVelocity);
    
    UFUNCTION()
    void InitComponents();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IgnoreCollision(UPrimitiveComponent* otherCollider);
    
    UFUNCTION(BlueprintPure)
    bool HasImpactAuthority() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameTimeSinceActivation() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBoneIndex() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoOnSpawn();
    
    UFUNCTION(BlueprintCallable)
    static void DisableProjectileCollision(AProjectileBase* projectileA, AProjectileBase* projectileB);
    
    UFUNCTION(BlueprintCallable)
    void DisableAndDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DamageArmor(UDamageComponent* DamageComponent, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CustomEvent(const UItemUpgrade* Event);
    
    UFUNCTION(Client, Reliable)
    void Client_DrawServersDebugPath(FVector Location);
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate(AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AProjectileBase();
};

