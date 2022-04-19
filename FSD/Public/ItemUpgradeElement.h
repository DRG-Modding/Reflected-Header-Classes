#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ItemUpgradeElement.generated.h"

class UItemUpgrade;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UItemUpgradeElement : public UDataAsset {
    GENERATED_BODY()
public:
    UItemUpgradeElement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ElementOf(UItemUpgrade* upg) const;
    
};

