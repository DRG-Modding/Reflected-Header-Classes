#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBeltDrivenWeaponUpgrade.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "BeltDrivenWeaponUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UBeltDrivenWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EBeltDrivenWeaponUpgrade upgradeType;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade NewUpgradeType);
    
    UBeltDrivenWeaponUpgrade();
};

