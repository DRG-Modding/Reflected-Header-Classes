#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponFireComponent.h"
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "ZiplineLauncherComponent.generated.h"

class AZipLineProjectile;

UCLASS()
class UZiplineLauncherComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> HitCollisionChannel;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AZipLineProjectile> projectileClass;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Fire(FVector_NetQuantize Origin, FVector_NetQuantize Destination);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowHit();
    
public:
    UZiplineLauncherComponent();
};

