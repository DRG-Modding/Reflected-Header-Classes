#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "ETargetStateDamageBonusType.h"
#include "UpgradeValues.h"
#include "TargetStateDamageBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UDamageClass;

UCLASS(EditInlineNew, MinimalAPI)
class UTargetStateDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETargetStateDamageBonusType TargetState;
    
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, ETargetStateDamageBonusType NewTargetState);
    
    UTargetStateDamageBonusUpgrade();
};

