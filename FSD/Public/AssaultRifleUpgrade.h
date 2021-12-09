#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EAssaultRifleUpgrade.h"
#include "UpgradeValues.h"
#include "AssaultRifleUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UAssaultRifleUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EAssaultRifleUpgrade upgradeType;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAssaultRifleUpgrade NewUpgradeType);
    
    UAssaultRifleUpgrade();
};

