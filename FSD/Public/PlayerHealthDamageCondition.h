#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "PlayerHealthDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlayerHealthDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval HealthPercentageRequired;
    
public:
    UPlayerHealthDamageCondition();
};

