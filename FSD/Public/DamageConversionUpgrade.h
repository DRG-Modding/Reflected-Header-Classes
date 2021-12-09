#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "DamageConversionUpgrade.generated.h"

class AActor;
class UDamageClass;
class UDamageCondition;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UDamageConversionUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    float ConversionPercentage;
    
    UPROPERTY(EditAnywhere)
    bool DamageIsAdded;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> RequiredClass;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageCondition* Condition;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, UDamageClass* NewDamageClass);
    
    UDamageConversionUpgrade();
};

