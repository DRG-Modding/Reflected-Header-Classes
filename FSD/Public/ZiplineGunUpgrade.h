#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EZiplineGunUpgrades.h"
#include "UpgradeValues.h"
#include "ZiplineGunUpgrade.generated.h"

class AZipLineProjectile;
class AFSDPlayerState;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
class UZiplineGunUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EZiplineGunUpgrades upgradeType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AZipLineProjectile> projectileClass;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades NewUpgradeType);
    
    UZiplineGunUpgrade();
};

