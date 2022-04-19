#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "WeaponChargeProgressDamageBonus.generated.h"

class UDamageClass;

UCLASS(EditInlineNew, MinimalAPI)
class UWeaponChargeProgressDamageBonus : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ChargeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DamageBonusRange;
    
public:
    UWeaponChargeProgressDamageBonus();
};

