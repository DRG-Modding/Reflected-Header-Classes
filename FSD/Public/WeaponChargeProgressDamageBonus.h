#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
#include "WeaponChargeProgressDamageBonus.generated.h"

class UDamageClass;

UCLASS(EditInlineNew, MinimalAPI)
class UWeaponChargeProgressDamageBonus : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ChargeRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DamageBonusRange;
    
public:
    UWeaponChargeProgressDamageBonus();
};

