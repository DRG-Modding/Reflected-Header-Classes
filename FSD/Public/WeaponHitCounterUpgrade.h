#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "WeaponHitCounterUpgrade.generated.h"

class AActor;
class UWeaponHitCounterComponent;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UWeaponHitCounterUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UWeaponHitCounterComponent> ComponentClass;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> NewComponentClass);
    
    UWeaponHitCounterUpgrade();
};

