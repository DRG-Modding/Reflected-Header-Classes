#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AttackEffect.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class UAttackEffect : public UObject {
    GENERATED_BODY()
public:
    UAttackEffect();
};

