#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UseConditionBase.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class UUseConditionBase : public UObject {
    GENERATED_BODY()
public:
    UUseConditionBase();
};

