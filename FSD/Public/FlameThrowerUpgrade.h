#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EFlameThrowerUpgradeType.h"
#include "UpgradeValues.h"
#include "FlameThrowerUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UFlameThrowerUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFlameThrowerUpgradeType upgradeType;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EFlameThrowerUpgradeType NewUpgradeType);
    
    UFlameThrowerUpgrade();
};

