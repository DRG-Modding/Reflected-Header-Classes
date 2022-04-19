#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ItemUpgradeCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class UItemUpgradeCondition : public UObject {
    GENERATED_BODY()
public:
    UItemUpgradeCondition();
};

