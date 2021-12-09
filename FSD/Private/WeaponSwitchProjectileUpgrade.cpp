#include "WeaponSwitchProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class UWeaponHitCounterComponent;
class AActor;

FUpgradeValues UWeaponSwitchProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass) {
    return FUpgradeValues{};
}

UWeaponSwitchProjectileUpgrade::UWeaponSwitchProjectileUpgrade() {
}

