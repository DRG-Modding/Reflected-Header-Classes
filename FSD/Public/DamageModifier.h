#pragma once
#include "CoreMinimal.h"
#include "DamageModifierItem.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DamageModifier.generated.h"

class UDamageCondition;

UCLASS(EditInlineNew)
class UDamageModifier : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDamageCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TArray<FDamageModifierItem> Modifiers;
    
public:
    UDamageModifier();
};

