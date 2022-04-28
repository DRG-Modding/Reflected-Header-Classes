#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StatusEffectItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatusEffectItem : public UObject {
    GENERATED_BODY()
public:
    UStatusEffectItem();
};

