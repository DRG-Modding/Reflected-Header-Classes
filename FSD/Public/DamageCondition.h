#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DamageCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class UDamageCondition : public UObject {
    GENERATED_BODY()
public:
    UDamageCondition();
};

