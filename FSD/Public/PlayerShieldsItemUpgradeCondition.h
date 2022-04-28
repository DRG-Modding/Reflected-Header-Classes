#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "PlayerShieldsItemUpgradeCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlayerShieldsItemUpgradeCondition : public UItemUpgradeCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval ShieldPercentageRequired;
    
public:
    UPlayerShieldsItemUpgradeCondition();
};

