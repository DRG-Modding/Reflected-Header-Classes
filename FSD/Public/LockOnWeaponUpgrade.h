#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELockOnWeaponUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "LockOnWeaponUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class ULockOnWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ELockOnWeaponUpgrades upgradeType;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ELockOnWeaponUpgrades NewUpgradeType);
    
    ULockOnWeaponUpgrade();
};

