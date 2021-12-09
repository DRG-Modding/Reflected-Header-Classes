#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "StatusEffectItem.generated.h"

UCLASS(Abstract, EditInlineNew)
class UStatusEffectItem : public UObject {
    GENERATED_BODY()
public:
    UStatusEffectItem();
};

