#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeCondition.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
#include "PlayerShieldsItemUpgradeCondition.generated.h"

UCLASS(EditInlineNew)
class UPlayerShieldsItemUpgradeCondition : public UItemUpgradeCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval ShieldPercentageRequired;
    
public:
    UPlayerShieldsItemUpgradeCondition();
};

