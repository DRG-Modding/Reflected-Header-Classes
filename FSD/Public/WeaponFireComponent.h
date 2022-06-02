#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "Upgradable.h"
#include "WeaponRicochetDelegateDelegate.h"
#include "WeaponFiredDelegateDelegate.h"
#include "WeaponFireEndedDelegateDelegate.h"
#include "WeaponFireComponent.generated.h"

class UWeaponFireOwner;
class IWeaponFireOwner;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponFireComponent : public UActorComponent, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFiredDelegate OnWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFireEndedDelegate OnWeaponFireEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponRicochetDelegate OnRicochetEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IWeaponFireOwner> Weapon;
    
public:
    UWeaponFireComponent();
    UFUNCTION(BlueprintCallable)
    void StopFire();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetShotPower(float shotPower);
    
public:
    UFUNCTION(BlueprintCallable)
    void Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX);
    
    
    // Fix for true pure virtual functions not being implemented
};

