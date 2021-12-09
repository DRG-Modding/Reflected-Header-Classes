#pragma once
#include "CoreMinimal.h"
#include "WeaponFireComponent.h"
#include "BasicWeaponFireComponent.generated.h"

UCLASS()
class UBasicWeaponFireComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(Reliable, Server)
    void Server_FireWeapon();
    
    UFUNCTION(Reliable, Server)
    void Server_EndFire();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_WeaponFired();
    
public:
    UBasicWeaponFireComponent();
};

