#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ItemUpgradeCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class UItemUpgradeCondition : public UObject {
    GENERATED_BODY()
public:
    UItemUpgradeCondition();
};

