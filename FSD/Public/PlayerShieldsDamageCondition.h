#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "PlayerShieldsDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlayerShieldsDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval ShieldPercentageRequired;
    
public:
    UPlayerShieldsDamageCondition();
};

