#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "RangedFlatDamageBonus.generated.h"

class UDamageClass;
class UCurveFloat;

UCLASS(EditInlineNew)
class URangedFlatDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* DamageCurve;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    URangedFlatDamageBonus();
};

