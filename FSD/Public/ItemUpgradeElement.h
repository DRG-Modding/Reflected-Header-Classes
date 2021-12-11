#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ItemUpgradeElement.generated.h"

class UItemUpgrade;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UItemUpgradeElement : public UDataAsset {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ElementOf(UItemUpgrade* upg) const;
    
    UItemUpgradeElement();
};

