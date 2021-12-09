#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "StickyFlameStatusEffectUpgrade.generated.h"

class AActor;
class UStatusEffect;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UStickyFlameStatusEffectUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect);
    
    UStickyFlameStatusEffectUpgrade();
};

