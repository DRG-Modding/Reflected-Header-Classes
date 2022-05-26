#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "ProjectileSwitch.h"
#include "UpgradeValues.h"
#include "WeaponSwitchProjectileUpgrade.generated.h"

class AFSDPlayerState;
class UWeaponHitCounterComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UWeaponSwitchProjectileUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileSwitch Projectile;
    
public:
    UWeaponSwitchProjectileUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass);
    
};

