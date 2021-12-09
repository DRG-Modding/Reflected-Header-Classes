#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlatformGunUpgrades.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "PlatformGunUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UPlatformGunUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlatformGunUpgrades myUpgradeType;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EPlatformGunUpgrades aUpgradeType);
    
    UPlatformGunUpgrade();
};

