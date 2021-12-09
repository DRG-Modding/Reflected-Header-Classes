#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETriggeredStatusEffectType.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "TriggeredStatusEffectUpgrade.generated.h"

class AActor;
class UStatusEffect;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UTriggeredStatusEffectUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(EditAnywhere)
    ETriggeredStatusEffectType upgradeType;
    
    UPROPERTY(EditAnywhere)
    float AoERange;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OwnerEffect;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UStatusEffect> NewStatusEffect, ETriggeredStatusEffectType aUpgradeType);
    
    UTriggeredStatusEffectUpgrade();
};

