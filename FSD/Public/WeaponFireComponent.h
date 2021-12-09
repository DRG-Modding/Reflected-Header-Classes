#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "Upgradable.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "WeaponFireComponent.generated.h"

class UWeaponFireOwner;
class IWeaponFireOwner;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponFireComponentOnWeaponFired, const FVector&, Location);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWeaponFireComponentOnWeaponFireEnded);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWeaponFireComponentOnRicochetEvent, const FVector&, Origin, const FVector&, Location, const FVector&, Normal);

UCLASS(Abstract, BlueprintType)
class UWeaponFireComponent : public UActorComponent, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWeaponFireComponentOnWeaponFired OnWeaponFired;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponFireComponentOnWeaponFireEnded OnWeaponFireEnded;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponFireComponentOnRicochetEvent OnRicochetEvent;
    
protected:
    UPROPERTY(Transient)
    TScriptInterface<IWeaponFireOwner> Weapon;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopFire();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetShotPower(float shotPower);
    
public:
    UFUNCTION(BlueprintCallable)
    void Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX);
    
    UWeaponFireComponent();
};

