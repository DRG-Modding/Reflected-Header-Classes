#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "GatlingHotShellsBonusUpgrade.generated.h"

class AActor;
class UDamageClass;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UGatlingHotShellsBonusUpgrade : public UItemUpgrade {
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
    float TemperatureRequired;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass);
    
    UGatlingHotShellsBonusUpgrade();
};

