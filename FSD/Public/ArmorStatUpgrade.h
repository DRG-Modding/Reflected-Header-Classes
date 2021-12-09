#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "ArmorStatUpgrade.generated.h"

class UPawnStat;
class AFSDPlayerState;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
class UArmorStatUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPawnStat* Stat;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedStatValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* NewStat);
    
    UArmorStatUpgrade();
};

