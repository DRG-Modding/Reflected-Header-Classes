#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EChargedProjectileUpgrades.h"
#include "UpgradeValues.h"
#include "ChargedProjectileUpgrade.generated.h"

class AActor;
class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UChargedProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EChargedProjectileUpgrades upgradeType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> projectileClass;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<AActor> upgradedActor, AFSDPlayerState* Player, EChargedProjectileUpgrades NewUpgradeType);
    
    UChargedProjectileUpgrade();
};

