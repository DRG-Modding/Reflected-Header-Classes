#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileBase.h"
#include "ProjectileState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: Engine HitResult
#include "Projectile.generated.h"

class UObject;
class AActor;
class UFSDProjectileMovementComponent;
class APawn;
class AProjectile;
class USceneComponent;
class UFSDPhysicalMaterial;

UCLASS(Abstract)
class AProjectile : public AProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_State)
    FProjectileState State;
    
    UPROPERTY(EditAnywhere)
    bool UseArmorDamageBoneCheck;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> IgnoreActorClasses;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UFSDProjectileMovementComponent* MovementComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    AProjectileBase* SpawnProjectileFromSelf(UObject* WorldContextObject, TSubclassOf<AProjectileBase> projectileClass, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable)
    static AProjectileBase* SpawnProjectile(UObject* WorldContextObject, TSubclassOf<AProjectileBase> projectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable)
    static AProjectileBase* SpawnBallisticProjectile(UObject* WorldContextObject, TSubclassOf<AProjectile> projectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_DisableHoming();
    
    UFUNCTION()
    void OnRep_State(const FProjectileState& oldState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPenetration(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnImpact(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintPure)
    UFSDPhysicalMaterial* FindBoneIndexFromArmor(const FHitResult& HitResult, int32& outBoneIndex) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AProjectile();
};

