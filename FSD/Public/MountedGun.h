#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "Steerable.h"
#include "WeaponFireOwner.h"
#include "MountedGun.generated.h"

class UWeaponFireComponent;
class USkeletalMeshComponent;
class UGunLogicComponent;

UCLASS()
class AMountedGun : public AActor, public ISteerable, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(Export, Transient)
    UWeaponFireComponent* WeaponFire;
    
    UPROPERTY(Export, Transient)
    UGunLogicComponent* GunLogic;
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Test();
    
    AMountedGun();
};

