#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "UpgradeValues.h"
#include "TargetSpecificDamageBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UTargetSpecificDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(EditAnywhere)
    FName Key;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey);
    
    UTargetSpecificDamageBonusUpgrade();
};

