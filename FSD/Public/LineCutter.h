#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "LineCutter.generated.h"

class AProjectileBase;
class UItemUpgrade;
class ALineCutterProjectile;

UCLASS()
class ALineCutter : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool StopUsingReversesProjectile;
    
    UPROPERTY(BlueprintReadOnly)
    bool RotateProjectileUntillStop;
    
    UPROPERTY(BlueprintReadOnly)
    bool ExplodeLastProjectileOnNextFireAttempt;
    
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_LastProjectile)
    TWeakObjectPtr<ALineCutterProjectile> LastProjectile;
    
    UPROPERTY(EditAnywhere)
    float MinExplosiveGoodbyeActivationTimme;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StopRotatingProjectile();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ReverseLastProjectile();
    
public:
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_DestroyOldProjectile();
    
protected:
    UFUNCTION()
    void OnRep_LastProjectile() const;
    
    UFUNCTION()
    void OnProjectileLaunched(AProjectileBase* Projectile);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFireWhileLastProjectileAlive(ALineCutterProjectile* Projectile);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALineCutter();
};

