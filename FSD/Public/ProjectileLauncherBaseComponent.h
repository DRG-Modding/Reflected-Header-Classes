#pragma once
#include "CoreMinimal.h"
#include "WeaponFireComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "ProjectileLauncherBaseComponent.generated.h"

class UItemUpgrade;
class AProjectileBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProjectileLauncherBaseComponentOnProjectileSpawned, AProjectileBase*, Projectile);

UCLASS(Abstract)
class UProjectileLauncherBaseComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseSpread;
    
    UPROPERTY(EditAnywhere)
    float VerticalSpread;
    
    UPROPERTY(EditAnywhere)
    float HorizontalSpread;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileLauncherBaseComponentOnProjectileSpawned OnProjectileSpawned;
    
protected:
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> ProjectileUpgrades;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArcStartAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TransferCharacterVelocityToProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CameraToMuzzleFireCheck;
    
    UFUNCTION(Reliable, Server)
    void Server_StopFire();
    
    UFUNCTION(Reliable, Server)
    void Server_Fire(FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity, AProjectileBase* DormentProjectile, bool notifyClients);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowHit();
    
public:
    UProjectileLauncherBaseComponent();
};

