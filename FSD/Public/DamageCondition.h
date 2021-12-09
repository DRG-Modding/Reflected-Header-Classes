#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "DamageCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class UDamageCondition : public UObject {
    GENERATED_BODY()
public:
    UDamageCondition();
};

